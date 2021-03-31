// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "InGameMenu.generated.h"

/**
 * 
 */
UCLASS()
class INTROTOPROG_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget))
		class UButton* ResumeBtn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget))
		class UButton* QuitBtn;

protected:
	
	UFUNCTION()
	virtual bool Initialize();

private:



	UFUNCTION()
	void ResumePressed();

	UFUNCTION()
	void QuitPressed();

};
