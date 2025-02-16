// Fill out your copyright notice in the Description page of Project Settings.


#include "RabbitPawn.h"
#include "CapsuleComponent.generated.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ARabbitPawn::ARabbitPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//RabbitCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ARabbitPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARabbitPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARabbitPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

