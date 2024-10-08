// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameScore.generated.h"

/**
 * a class for storing the total score of the game
 */
UCLASS()
class GENERATIVEPATTERNS_API UGameScore : public UObject
{
	GENERATED_BODY()

public:

	/*
	 *return an instance of the class
	 */
	UFUNCTION(BlueprintCallable)
	static UGameScore* Get();
	
	UPROPERTY(BlueprintReadWrite)
	int Score = 0;

private:
	static UGameScore* Instance;
};
