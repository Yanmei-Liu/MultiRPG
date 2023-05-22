// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiRPGGameMode.h"
#include "MultiRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiRPGGameMode::AMultiRPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
