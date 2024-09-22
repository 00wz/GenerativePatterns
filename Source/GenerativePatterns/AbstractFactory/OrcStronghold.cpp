// Fill out your copyright notice in the Description page of Project Settings.


#include "OrcStronghold.h"


// Sets default values
AOrcStronghold::AOrcStronghold()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AOrcStronghold::BeginPlay()
{
	Super::BeginPlay();
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
			TEXT("Орочья цитадель построена!"));
}

// Called every frame
void AOrcStronghold::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

