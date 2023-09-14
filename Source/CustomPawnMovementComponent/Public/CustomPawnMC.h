// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "CustomPawnMC.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CUSTOMPAWNMOVEMENTCOMPONENT_API UCustomPawnMC : public UFloatingPawnMovement
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCustomPawnMC();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual bool CanStartPathFollowing() const override;
	virtual bool CanStopPathFollowing() const override;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool bMaintainHorizontalGroundVelocity = true;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float FallScale = 1.f;

	FVector ApplyGravity(const FVector& InitialVelocity, const FVector& Gravity, float DeltaTime) const;

	void FloorTrace();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool bIsFalling;

	bool bIsLaunched;
	FVector PendingLaunchVelocity;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FVector CurrentFloorNormal;

	FVector ComputeGroundMovementDelta(const FVector& Delta, const FVector& RampNormal,
	                                   const bool bHitFromLineTrace) const;

public:
	
	virtual bool IsFalling() const override;

	virtual void InitializeComponent() override;

	virtual void HandleImpact(const FHitResult& Hit, float TimeSlice, const FVector& MoveDelta) override;

	/**
 * Apply physics forces to the impacted component, if bEnablePhysicsInteraction is true.
 * @param Impact				HitResult that resulted in the impact
 * @param ImpactAcceleration	Acceleration of the character at the time of impact
 * @param ImpactVelocity		Velocity of the character at the time of impact
 */
	virtual void ApplyImpactPhysicsForces(const FHitResult& Impact, const FVector& ImpactAcceleration, const FVector& ImpactVelocity);

	UFUNCTION(BlueprintCallable)
	void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnablePhysicsInteraction;
	
	/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bEnablePhysicsInteraction"))
	bool bHitForceScaledToMass = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bEnablePhysicsInteraction"))
	float TouchForceFactorModified = 0.1f;

	/**The Updated component*/
	UPROPERTY()
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableDebug = false;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
