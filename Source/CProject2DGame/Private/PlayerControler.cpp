// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControler.h"
#include "Components/InputComponents.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"


// Sets default values
APlayerControler::APlayerControler()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerControler::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerControler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerControler::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

