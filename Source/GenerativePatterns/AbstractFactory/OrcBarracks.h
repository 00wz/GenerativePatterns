// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbstractBarrack.h"
#include "OrcBarracks.generated.h"

UCLASS()
class GENERATIVEPATTERNS_API AOrcBarracks : public AAbstractBarrack
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOrcBarracks();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
