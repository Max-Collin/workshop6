// Fill out your copyright notice in the Description page of Project Settings.


#include "Pokeball.h"

#include "Base_Pokemon.h"

void APokeball::execute()
{
	Super::execute();

	if(Target)
	{
		Target->Caught=true;
	}
}

void APokeball::undo()
{
	Super::undo();
	if(Target)
	{
		Target->Caught=false;
	}
}