// Fill out your copyright notice in the Description page of Project Settings.


#include "OrcBuildingFactory.h"

#include "OrcBarracks.h"
#include "OrcStronghold.h"

AAbstractStronghold* UOrcBuildingFactory::BuildStronghold_Implementation()
{
	return GetWorld()->SpawnActor<AOrcStronghold>();
}

AAbstractBarrack* UOrcBuildingFactory::BuildBarrack_Implementation()
{
	return GetWorld()->SpawnActor<AOrcBarracks>();
}
