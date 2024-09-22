// Fill out your copyright notice in the Description page of Project Settings.


#include "AllianceBuildingFactory.h"

#include "AllianceBarrack.h"
#include "AllianceStronghold.h"

AAbstractStronghold* UAllianceBuildingFactory::BuildStronghold_Implementation()
{
	return GetWorld()->SpawnActor<AAllianceStronghold>();
}

AAbstractBarrack* UAllianceBuildingFactory::BuildBarrack_Implementation()
{
	return GetWorld()->SpawnActor<AAllianceBarrack>();
}
