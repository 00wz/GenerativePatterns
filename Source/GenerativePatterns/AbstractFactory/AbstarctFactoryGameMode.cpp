// Fill out your copyright notice in the Description page of Project Settings.


#include "AbstarctFactoryGameMode.h"

#include "AllianceBuildingFactory.h"
#include "OrcBuildingFactory.h"

void AAbstarctFactoryGameMode::CreateAllianceBuildingFactory()
{
	BuildingFactory = NewObject<UAllianceBuildingFactory>(this, UAllianceBuildingFactory::StaticClass());
}

void AAbstarctFactoryGameMode::CreateOrcBuildingFactory()
{
	BuildingFactory = NewObject<UOrcBuildingFactory>(this, UOrcBuildingFactory::StaticClass());
}

void AAbstarctFactoryGameMode::CreateStonghold()
{
	BuildingFactory -> Execute_BuildStronghold(Cast<UObject>(BuildingFactory));
}

void AAbstarctFactoryGameMode::CreateBarrack()
{
	BuildingFactory -> Execute_BuildBarrack(Cast<UObject>(BuildingFactory));
}
