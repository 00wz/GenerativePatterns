// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbstractBarrack.h"
#include "AbstractStronghold.h"
#include "UObject/Interface.h"
#include "AbstractBuildingFactory.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAbstractBuildingFactory : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GENERATIVEPATTERNS_API IAbstractBuildingFactory
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AAbstractStronghold* BuildStronghold();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AAbstractBarrack* BuildBarrack();
};
