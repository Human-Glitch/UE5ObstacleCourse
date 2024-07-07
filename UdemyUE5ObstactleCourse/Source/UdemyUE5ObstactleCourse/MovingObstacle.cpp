// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingObstacle.h"

#include "GameFramework/GameSession.h"

// Sets default values 
AMovingObstacle::AMovingObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMovingObstacle::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move platform forwards
		// Get current location
	FVector CurrentLocation = GetActorLocation();
		// Add vector to that location
	CurrentLocation += PlatformVelocity * DeltaTime;
	
		// Set the location
	SetActorLocation(CurrentLocation);
	
	// Send platform back if gone too far
		// Check how far we have moved
	
	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);
		// Reverse direction of motion if gone too far

	// If moved pass threshold, then reset to max distance + direction from start location
	if(DistanceMoved > MaxMoveDistance)
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation += MoveDirection * MaxMoveDistance;
		SetActorLocation(StartLocation);

		PlatformVelocity = -PlatformVelocity;
	}
}

