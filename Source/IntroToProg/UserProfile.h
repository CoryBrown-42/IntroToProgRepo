// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * UCLASS macro options sets this C++ class to be Blueprintable within the UE4 Editor. This is a loooooong tooltip.
 */
UCLASS(Blueprintable)
class INTROTOPROG_API UUserProfile : public UObject
{
	GENERATED_BODY()

public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats)
	float hpMax;

	
};
