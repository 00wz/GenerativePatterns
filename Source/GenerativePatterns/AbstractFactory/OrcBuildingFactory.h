// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbstractBuildingFactory.h"
#include "UObject/Object.h"
#include "OrcBuildingFactory.generated.h"

/**
 * The construction factory of the Orc race
 */
UCLASS()
class GENERATIVEPATTERNS_API UOrcBuildingFactory : public UObject, public IAbstractBuildingFactory
{
	GENERATED_BODY()

public:
	AAbstractStronghold* BuildStronghold_Implementation() override;
	
	AAbstractBarrack* BuildBarrack_Implementation() override;
};
