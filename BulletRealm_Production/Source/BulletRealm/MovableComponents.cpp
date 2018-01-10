// Fill out your copyright notice in the Description page of Project Settings.

#include "MovableComponents.h"


// Sets default values
AMovableComponents::AMovableComponents()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovableComponents::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovableComponents::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(MovableTime + DeltaTime) - FMath::Sin(MovableTime));
	NewLocation.Z += DeltaHeight * 20.0f;       //Scale our height by a factor of 20
	MovableTime += DeltaTime;
	SetActorLocation(NewLocation);
}

