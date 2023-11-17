// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Candy.generated.h"

/**
 * 
 */
UCLASS()
class WORKSHOP6_API ACandy : public AItem
{
	GENERATED_BODY()


	virtual void execute() override;
	virtual void undo() override;
};
