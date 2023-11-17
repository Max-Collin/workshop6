// Copyright Epic Games, Inc. All Rights Reserved.

#include "workshop6GameMode.h"
#include "workshop6Character.h"
#include "UObject/ConstructorHelpers.h"

Aworkshop6GameMode::Aworkshop6GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
