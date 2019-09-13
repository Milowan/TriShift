// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "TriShiftHUD.generated.h"

/**
 * 
 */
UCLASS()
class TRISHIFT_API ATriShiftHUD : public AHUD
{
private:

	GENERATED_BODY()

	UUserWidget * currentWidget;


	TSubclassOf<class UUserWidget> HUDWidgetClass;

protected:

	virtual void BeginPlay() override;

public:

	ATriShiftHUD();
};
