// Copyright M. Greizis. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

UCLASS()
class TOPDOWNSHOOTERCPP_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Movement input
	void MoveForward(const struct FInputActionValue& Value);
	void MoveRight(const struct FInputActionValue& Value);

	// Shooting input
	void Shoot();

	// Aiming direction based on mouse
	void AimAtMouse();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* MoveForwardAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* MoveRightAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* ShootAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* AimAction;

	FVector AimDirection;

private:	
	
};
