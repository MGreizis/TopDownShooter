// Copyright M. Greizis. All Rights Reserved.

#include "ShooterCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "ShooterProjectile.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize Camera Boom
	USpringArmComponent* SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 600.f;
	SpringArm->bDoCollisionTest = false;
	SpringArm->bUsePawnControlRotation = false;

	// Top Down Camera
	UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;

	// Set Default Input Mapping Context
	InputMappingContext = nullptr;
	MoveForwardAction = nullptr;
	MoveRightAction = nullptr;
	ShootAction = nullptr;
	AimAction = nullptr;
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Add the Enhanced Input Mapping Context to the player
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (MoveForwardAction)
		{
			EnhancedInput->BindAction(MoveForwardAction, ETriggerEvent::Triggered, this, &AShooterCharacter::MoveForward);
		}

		if (MoveRightAction)
		{
			EnhancedInput->BindAction(MoveRightAction, ETriggerEvent::Triggered, this, &AShooterCharacter::MoveRight);
		}

		if (ShootAction)
		{
			EnhancedInput->BindAction(ShootAction, ETriggerEvent::Started, this, &AShooterCharacter::Shoot);
		}

		if (AimAction)
		{
			EnhancedInput->BindAction(AimAction, ETriggerEvent::Triggered, this, &AShooterCharacter::AimAtMouse);
		}
	}
}

void AShooterCharacter::MoveForward(const FInputActionValue& Value)
{
	float InputValue = Value.Get<float>();
	if (Controller && InputValue != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), InputValue);
	}
}

void AShooterCharacter::MoveRight(const FInputActionValue& Value)
{
	float InputValue = Value.Get<float>();
	if (Controller && InputValue != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), InputValue);
	}
}

void AShooterCharacter::Shoot()
{
	if (GetWorld())
	{
		FVector SpawnLocation = GetActorLocation() + AimDirection * 100.0f;
		FRotator SpawnRotation = AimDirection.Rotation();

		GetWorld()->SpawnActor<AShooterProjectile>(AShooterProjectile::StaticClass(), SpawnLocation, SpawnRotation);
	}
}

void AShooterCharacter::AimAtMouse()
{
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		FVector WorldLocation, WorldDirection;
		if (PC->DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
		{
			FHitResult HitResult;
			FVector Start = WorldLocation;
			FVector End = Start + (WorldDirection * 10000.0f);

			if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility))
			{
				FVector Direction = HitResult.ImpactPoint - GetActorLocation();
				Direction.Z = 0.0f; // Ignore Z-axis
				AimDirection = Direction.GetSafeNormal();

				FRotator NewRotation = AimDirection.Rotation();
				SetActorRotation(FRotator(0.0f, NewRotation.Yaw, 0.0f));
			}
		}
	}
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}