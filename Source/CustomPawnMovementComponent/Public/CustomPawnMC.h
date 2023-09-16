// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "CustomPawnMC.generated.h"

UENUM()
enum ECustomPawnMovementMode
{
	Walking,
	Falling
};

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

	void Walk(float DeltaTime);
	void Fall(float DeltaTime);

	FVector ApplyGravity(const FVector& InitialVelocity, const FVector& Gravity, float DeltaTime) const;
	void FloorTrace();
	FVector ComputeGroundMovementDelta(const FVector& Delta, const FVector& RampNormal) const;

	/**The Updated component*/
	UPROPERTY()
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool bMaintainHorizontalGroundVelocity = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float FallScale = 1.f;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool bIsFalling;

	bool bIsLaunched;
	FVector PendingLaunchVelocity;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	TEnumAsByte<ECustomPawnMovementMode> CustomPawnMovementMode;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FVector CurrentFloorNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableDebug = false;

public:
	virtual bool IsFalling() const override;
	virtual void InitializeComponent() override;
	virtual void HandleImpact(const FHitResult& Hit, float TimeSlice, const FVector& MoveDelta) override;

	UFUNCTION(BlueprintCallable)
	void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);

	UFUNCTION(BlueprintCallable)
	void SetMovementMode(const ECustomPawnMovementMode NewMovementMode);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnablePhysicsInteraction;

	/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bEnablePhysicsInteraction"))
	bool bHitForceScaledToMass = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bEnablePhysicsInteraction"))
	float TouchForceFactorModified = 0.1f;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
