// Copyright Epic Games, Inc. All Rights Reserved.

#include "TXProjectHomework1GameMode.h"
#include "TXProjectHomework1Character.h"
#include "UObject/ConstructorHelpers.h"

ATXProjectHomework1GameMode::ATXProjectHomework1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
