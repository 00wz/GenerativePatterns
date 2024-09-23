// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FieldPointType.h"
#include "UObject/Object.h"
#include "ArcanoidField.generated.h"

/**
 * 
 */
UCLASS()
class GENERATIVEPATTERNS_API UArcanoidField : public UObject
{
	GENERATED_BODY()

public:
	
	static int const FIELD_SIDE_LENGTH = 10;
	
	EFieldPointType Field[FIELD_SIDE_LENGTH][FIELD_SIDE_LENGTH]{};
};
