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

	SetActorLocation(MyVector);
}

// Called every frame
void AMovingObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MyVector.Y = MyVector.Y + 1;
	
	SetActorLocation(MyVector);
}

