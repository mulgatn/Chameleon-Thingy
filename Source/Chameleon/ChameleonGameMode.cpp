// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChameleonGameMode.h"
#include "ChameleonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChameleonGameMode::AChameleonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
