// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderGameMode.h"

#include "ChessFieldBuilder.h"
#include "CrossFieldBuilder.h"

void ABuilderGameMode::SpawnBlock(int posX, int posY, TSubclassOf<AActor> actor)
{
	GetWorld()->SpawnActor<AActor>(actor,
					FVector{posX * blocksInterval, posY * blocksInterval, 0.0f},
					FRotator::ZeroRotator);
}

void ABuilderGameMode::SelectCrossField()
{
	fieldBuilder = NewObject<UCrossFieldBuilder>();
}

void ABuilderGameMode::SelectChessField()
{
	fieldBuilder = NewObject<UChessFieldBuilder>();
}

void ABuilderGameMode::SpawnField()
{
	fieldBuilder->Execute_BuildBlocks(Cast<UObject>(fieldBuilder));
	fieldBuilder->Execute_BuildBonuses(Cast<UObject>(fieldBuilder));
	auto field = fieldBuilder->Execute_GetResult(Cast<UObject>(fieldBuilder));
	for(int i = 0; i < field->FIELD_SIDE_LENGTH; i++)
	{
		for(int k = 0; k < field->FIELD_SIDE_LENGTH; k++)
		{
			if(field->Field[i][k] == EFieldPointType::BLOCK)
			{
				SpawnBlock(k, i, BlockType);
			}
			else if(field->Field[i][k] == EFieldPointType::BONUS)
			{
				SpawnBlock(k , i, BonusType);
			}
		}
	}
}
