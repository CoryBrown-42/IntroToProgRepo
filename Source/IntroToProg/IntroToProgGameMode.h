// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "UserProfile.h"

#include "IntroToProgGameMode.generated.h"


UCLASS(minimalapi)
class AIntroToProgGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AIntroToProgGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassNames)
	TSubclassOf<UUserProfile> UPBlueprintClassName;

};
