#include "CotrollPlayer.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "CotrollPlayer.h"

// Sets default values
ACotrollPlayer::ACotrollPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACotrollPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACotrollPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACotrollPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"),this,&ACotrollPlayer::MoveRight);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed ,this, &ACotrollPlayer::MoveRight);
}

void ACotrollPlayer::Jump(float AxisVal)
{
	AddMovementInput(GetActorUpVector()* AxisVal);
}

void ACotrollPlayer::MoveRight(float AxisVal)
{
	AddMovementInput(GetActorRightVector() * AxisVal);
}
