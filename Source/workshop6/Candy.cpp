// Fill out your copyright notice in the Description page of Project Settings.


#include "Candy.h"
#include "Base_Pokemon.h"

void ACandy::execute()
{
	Super::execute();

	if(Target)
	{
		Target->level++;
	}
}

void ACandy::undo()
{
	Super::undo();
	if(Target)
	{
		Target->level--;
	}
}
