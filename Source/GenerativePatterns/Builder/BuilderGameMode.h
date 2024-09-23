// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IFieldBuilder.h"
#include "GameFramework/GameModeBase.h"
#include "BuilderGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GENERATIVEPATTERNS_API ABuilderGameMode : public AGameModeBase
{
	GENERATED_BODY()

private: 
	IIFieldBuilder* fieldBuilder;

	float blocksInterval = 100.0f;

	void SpawnBlock(int posX, int posY, TSubclassOf<AActor> actor);
public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> BlockType;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> BonusType;
	
	UFUNCTION(BlueprintCallable)
	void SelectCrossField();
	
	UFUNCTION(BlueprintCallable)
	void SelectChessField();
	
	UFUNCTION(BlueprintCallable)
	void SpawnField();
};
