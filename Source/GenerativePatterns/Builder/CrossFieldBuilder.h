// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IFieldBuilder.h"
#include "UObject/Object.h"
#include "CrossFieldBuilder.generated.h"

/**
 * 
 */
UCLASS()
class GENERATIVEPATTERNS_API UCrossFieldBuilder : public UObject, public IIFieldBuilder
{
	GENERATED_BODY()

private:
	UArcanoidField* field;
	
public:
	UCrossFieldBuilder();
	
	void BuildBlocks_Implementation() override;

	void BuildBonuses_Implementation() override;

	UArcanoidField* GetResult_Implementation() override;
};
