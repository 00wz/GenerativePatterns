// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbstractBuildingFactory.h"
#include "GameFramework/GameModeBase.h"
#include "AbstarctFactoryGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GENERATIVEPATTERNS_API AAbstarctFactoryGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void CreateAllianceBuildingFactory();
	
	UFUNCTION(BlueprintCallable)
	void CreateOrcBuildingFactory();
	
	UFUNCTION(BlueprintCallable)
	void CreateStonghold();
	
	UFUNCTION(BlueprintCallable)
	void CreateBarrack();

private:
	IAbstractBuildingFactory* BuildingFactory;
};
