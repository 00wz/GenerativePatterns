// Fill out your copyright notice in the Description page of Project Settings.


#include "OrcBarracks.h"


// Sets default values
AOrcBarracks::AOrcBarracks()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AOrcBarracks::BeginPlay()
{
	Super::BeginPlay();
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
			TEXT("Орочья казарма построена!"));	
}

// Called every frame
void AOrcBarracks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

