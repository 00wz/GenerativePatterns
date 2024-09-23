// Fill out your copyright notice in the Description page of Project Settings.


#include "ChessFieldBuilder.h"

UChessFieldBuilder::UChessFieldBuilder()
{
	field = NewObject<UArcanoidField>();
}

void UChessFieldBuilder::BuildBlocks_Implementation()
{
	for(int i = 0; i < field->FIELD_SIDE_LENGTH; i++)
	{
		for(int k = 0; k < field->FIELD_SIDE_LENGTH; k++)
		{
			if((k + i) % 2)
			{
				field->Field[i][k] = BLOCK;
			}
		}
	}
}

void UChessFieldBuilder::BuildBonuses_Implementation()
{
	for(int i = 0; i < 20; i++)
	{
		auto x = rand() % field->FIELD_SIDE_LENGTH;
		auto y = rand() % field->FIELD_SIDE_LENGTH;
		UE_LOG(LogTemp, Warning, TEXT("%d"), x);
		if(field->Field[y][x] == EFieldPointType::EMPTY)
		{
			field->Field[y][x] = EFieldPointType::BONUS;
		}
	}
}

UArcanoidField* UChessFieldBuilder::GetResult_Implementation()
{
	return field;
}

