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
 * 
 */
class GENERATIVEPATTERNS_API IIFieldBuilder
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BuildBlocks();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BuildBonuses();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UArcanoidField* GetResult();
};
