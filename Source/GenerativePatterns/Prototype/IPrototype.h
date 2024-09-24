// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPrototype.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UIPrototype : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GENERATIVEPATTERNS_API IIPrototype
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UObject* Clone();
public:
};
