// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPawnMC.h"

#include "CMCInterface.h"
#include "Components/CapsuleComponent.h"


// Sets default values for this component's properties
UCustomPawnMC::UCustomPawnMC()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCustomPawnMC::BeginPlay()
{
	Super::BeginPlay();

	FloorTrace();
}

bool UCustomPawnMC::CanStartPathFollowing() const
{
	return Super::CanStartPathFollowing();
}

bool UCustomPawnMC::CanStopPathFollowing() const
{
	return !bIsFalling;
}

void UCustomPawnMC::Walk(float DeltaTime)
{
	FloorTrace();
	const FVector Delta = Velocity * DeltaTime;
	if (!Delta.IsNearlyZero(1e-6f))
	{
		const FVector OldLocation = UpdatedComponent->GetComponentLocation();
		const FQuat Rotation = UpdatedComponent->GetComponentQuat();

		FHitResult Hit(1.f);
		FVector RampVector = ComputeGroundMovementDelta(Delta, CurrentFloorNormal);

		SafeMoveUpdatedComponent(RampVector, Rotation, true, Hit);

		if (Hit.IsValidBlockingHit())
		{
			HandleImpact(Hit, DeltaTime, Delta);
			// Try to slide the remaining distance along the surface.
			SlideAlongSurface(Delta, 1.f - Hit.Time, Hit.Normal, Hit, true);
		}

		// Update velocity
		// We don't want position changes to vastly reverse our direction (which can happen due to penetration fixups etc)
		if (!bPositionCorrected)
		{
			const FVector NewLocation = UpdatedComponent->GetComponentLocation();
			Velocity = ((NewLocation - OldLocation) / DeltaTime);
		}
	}
}

void UCustomPawnMC::Fall(float DeltaTime)
{
	IPathFollowingAgentInterface* PFAgent = GetPathFollowingAgent();
	if (PFAgent)
	{
		PFAgent->OnStartedFalling();
	}
	Velocity = ApplyGravity(Velocity, FVector(0.0, 0.0, -980.0), DeltaTime * FallScale);
	const FQuat Rotation = UpdatedComponent->GetComponentQuat();
	const FVector Delta = Velocity * DeltaTime * FallScale;
	FHitResult Hit(1.f);
	SafeMoveUpdatedComponent(Delta, Rotation, true, Hit);
	if (Hit.IsValidBlockingHit())
	{
		HandleImpact(Hit, DeltaTime, Delta);
		FloorTrace();
		if (CustomPawnMovementMode != Falling)
		{
			ICMCInterface* Interface = Cast<ICMCInterface>(PawnOwner);
			if (Interface)
			{
				Interface->OnLanded(Hit);
			}
			if (PFAgent)
			{
				PFAgent->OnLanded();
			}
		}
	}
}

FVector UCustomPawnMC::ApplyGravity(const FVector& InitialVelocity, const FVector& Gravity, float DeltaTime) const
{
	FVector Result = InitialVelocity;

	if (DeltaTime > 0.f)
	{
		// Apply gravity.
		Result += Gravity * DeltaTime;

		// Don't exceed terminal velocity.
		/*const float TerminalLimit = FMath::Abs(GetPhysicsVolume()->TerminalVelocity);
		if (Result.SizeSquared() > FMath::Square(TerminalLimit))
		{
			const FVector GravityDir = Gravity.GetSafeNormal();
			if ((Result | GravityDir) > TerminalLimit)
			{
				Result = FVector::PointPlaneProject(Result, FVector::ZeroVector, GravityDir) + GravityDir * TerminalLimit;
			}
		}*/
	}

	return Result;
}

void UCustomPawnMC::FloorTrace()
{
	FHitResult Hit;
	FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(FloorDist), false, GetOwner());
	FCollisionResponseParams ResponseParam;
	InitCollisionParams(QueryParams, ResponseParam);
	const ECollisionChannel CollisionChannel = UpdatedComponent->GetCollisionObjectType();
	const float ShapeRadius = CapsuleComponent->GetScaledCapsuleRadius() * 0.99f;
	const FVector TraceStart = CapsuleComponent->GetComponentLocation();
	const FVector TraceEnd = TraceStart - FVector(0.f, 0.f, CapsuleComponent->GetScaledCapsuleHalfHeight() + 2.4f);
	const bool bIsBlocking = GetWorld()->SweepSingleByChannel(Hit, TraceStart,
	                                                          TraceEnd, UpdatedComponent->GetComponentQuat(),
	                                                          CollisionChannel,
	                                                          FCollisionShape::MakeSphere(ShapeRadius), QueryParams, ResponseParam);

	bIsBlocking ? SetMovementMode(Walking) : SetMovementMode(Falling);
	CurrentFloorNormal = Hit.Normal;
}

FVector UCustomPawnMC::ComputeGroundMovementDelta(const FVector& Delta, const FVector& RampNormal) const
{
	if (RampNormal.Z < (1.f - KINDA_SMALL_NUMBER) && RampNormal.Z > KINDA_SMALL_NUMBER)
	{
		// Compute a vector that moves parallel to the surface, by projecting the horizontal movement direction onto the ramp.
		const float FloorDotDelta = (RampNormal | Delta);
		const FVector RampMovement(Delta.X, Delta.Y, -FloorDotDelta / RampNormal.Z);

		if (bMaintainHorizontalGroundVelocity)
		{
			return RampMovement;
		}
		return RampMovement.GetSafeNormal() * Delta.Size();
	}

	return Delta;
}

bool UCustomPawnMC::IsFalling() const
{
	return bIsFalling;
}

void UCustomPawnMC::InitializeComponent()
{
	Super::InitializeComponent();

	if (UpdatedComponent == NULL) { return; }

	CapsuleComponent = Cast<UCapsuleComponent>(UpdatedComponent);
	SetUpdatedComponent(CapsuleComponent);
}

void UCustomPawnMC::HandleImpact(const FHitResult& Hit, float TimeSlice, const FVector& MoveDelta)
{
	IPathFollowingAgentInterface* PFAgent = GetPathFollowingAgent();
	if (PFAgent)
	{
		// Also notify path following!
		PFAgent->OnMoveBlockedBy(Hit);
	}

	if (Hit.HitObjectHandle.DoesRepresentClass(APawn::StaticClass()))
	{
		APawn* OtherPawn = Hit.HitObjectHandle.FetchActor<APawn>();
		NotifyBumpedPawn(OtherPawn);
	}

	if (bEnablePhysicsInteraction && Hit.GetComponent()->Mobility == EComponentMobility::Movable && Hit.GetComponent()->IsSimulatingPhysics())
	{
		const FVector ImpulseDir = -Hit.Normal;

		if (bHitForceScaledToMass)
		{
			const FBodyInstance* BI = Hit.GetComponent()->GetBodyInstance();
			TouchForceFactorModified *= BI ? BI->GetBodyMass() : 1.0f;
		}

		const float ImpulseStrength = Velocity.Size() * TouchForceFactorModified;
		const FVector Impulse = ImpulseDir * ImpulseStrength;
		Hit.GetComponent()->AddImpulseAtLocation(Impulse, Hit.Location);
	}
}

void UCustomPawnMC::LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	FVector FinalVel = LaunchVelocity;

	if (!bXYOverride)
	{
		FinalVel.X += Velocity.X;
		FinalVel.Y += Velocity.Y;
	}
	if (!bZOverride)
	{
		FinalVel.Z += Velocity.Z;
	}
	PendingLaunchVelocity = FinalVel;
	bIsLaunched = true;
	bIsFalling = true;
}

void UCustomPawnMC::SetMovementMode(const ECustomPawnMovementMode NewMovementMode)
{
	if (CustomPawnMovementMode != NewMovementMode)
	{
		CustomPawnMovementMode = NewMovementMode;
	}
}

// Called every frame
void UCustomPawnMC::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	UMovementComponent::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PawnOwner || !UpdatedComponent)
	{
		return;
	}

	const AController* Controller = PawnOwner->GetController();
	if (Controller && Controller->IsLocalController())
	{
		// apply input for local players but also for AI that's not following a navigation path at the moment
		if (Controller->IsLocalPlayerController() == true || Controller->IsFollowingAPath() == false ||
			bUseAccelerationForPaths)
		{
			//ApplyControlInputToVelocity(DeltaTime);
		}
		// if it's not player controller, but we do have a controller, then it's AI
		// (that's not following a path) and we need to limit the speed
		else if (IsExceedingMaxSpeed(MaxSpeed) == true)
		{
			Velocity = Velocity.GetUnsafeNormal() * MaxSpeed;
		}

		LimitWorldBounds();
		bPositionCorrected = false;

		// Move actor
		if (bIsLaunched)
		{
			Velocity = PendingLaunchVelocity;
			PendingLaunchVelocity = FVector::ZeroVector;
			bIsLaunched = false;
		}

		switch (CustomPawnMovementMode)
		{
		case Walking:
			Walk(DeltaTime);
			break;
		case Falling:
			Fall(DeltaTime);
			break;
		default:
			break;
		}

		// Finalize
		UpdateComponentVelocity();
	}
	if (bEnableDebug)
	{
		DrawDebugLine(GetWorld(), CapsuleComponent->GetComponentLocation(), CapsuleComponent->GetComponentLocation() + Velocity, FColor::Red, false, -1, 0, 5.f);
	}
}
