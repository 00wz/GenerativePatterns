// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IPrototype.h"
#include "GameFramework/Actor.h"
#include "SomeActor.generated.h"

UCLASS()
class GENERATIVEPATTERNS_API ASomeActor : public AActor, public IIPrototype
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASomeActor();

	UObject* Clone_Implementation() override;

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* cubeMeshComponent;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorOnClicked(FKey ButtonPressed) override;
};
