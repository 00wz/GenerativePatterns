// Fill out your copyright notice in the Description page of Project Settings.


#include "GameScore.h"

UGameScore* UGameScore::Instance;

UGameScore* UGameScore::Get()
{
	if(!Instance)
	{
		Instance = NewObject<UGameScore>();
	}
	return Instance;
}
