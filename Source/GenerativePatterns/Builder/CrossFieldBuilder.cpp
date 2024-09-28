// Fill out your copyright notice in the Description page of Project Settings.


#include "CrossFieldBuilder.h"

UCrossFieldBuilder::UCrossFieldBuilder()
{
	field = NewObject<UArcanoidField>();
}

void UCrossFieldBuilder::BuildBlocks_Implementation()
{
	for(int i = 0; i < field->FIELD_SIDE_LENGTH; i++)
	{
		field->Field[i][i] = EFieldPointType::BLOCK;
		field->Field[field->FIELD_SIDE_LENGTH - 1 -i][i] = EFieldPointType::BLOCK;
	}
}

void UCrossFieldBuilder::BuildBonuses_Implementation()
{
	for (int i = 1; i < field->FIELD_SIDE_LENGTH - 1; i++)
	{
		field->Field[0][i] = EFieldPointType::BONUS;
	}
}

UArcanoidField* UCrossFieldBuilder::GetResult_Implementation()
{
	return field;
}
