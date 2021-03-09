// Copyright Epic Games, Inc. All Rights Reserved.

#include "IntroToProgGameMode.h"
#include "IntroToProgCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIntroToProgGameMode::AIntroToProgGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
