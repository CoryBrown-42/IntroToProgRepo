// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataExample.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class INTROTOPROG_API UDataExample : public UDataAsset
{
	GENERATED_BODY()

public:
	//This is a health variable for the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int Health = 100;

	/*This Armor \ there is no default value.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Armor")
	float Armor;
	
	/*You can call me whatever you want, just don't call me late to dinner.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Name")
	FString MyName = TEXT("Cory");


};
