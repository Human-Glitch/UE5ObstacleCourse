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

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingObstacle::MovePlatform(float DeltaTime)
{
	// If moved pass threshold, then reset to max distance + direction from start location
	if(ShouldPlatformReturn())
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation += MoveDirection * MaxMoveDistance;
		SetActorLocation(StartLocation);

		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation += PlatformVelocity * DeltaTime;
	
		SetActorLocation(CurrentLocation);
	}
}

void AMovingObstacle::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

bool AMovingObstacle::ShouldPlatformReturn() const
{
	float DistanceMoved = FVector::Dist(StartLocation, GetActorLocation());
	return DistanceMoved > MaxMoveDistance;
}


