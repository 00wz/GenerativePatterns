// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArcanoidField.h"
#include "UObject/Interface.h"
#include "IFieldBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UIFieldBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * interface for various arkanoid field builders
 */
class GENERATIVEPATTERNS_API IIFieldBuilder
{
	GENERATED_BODY()

public:

	/*
	 *arrange the blocks
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BuildBlocks();

	/*
	 *arrange the bonuses
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BuildBonuses();

	/*
	 *return the result
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UArcanoidField* GetResult();
};
