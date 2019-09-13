// Fill out your copyright notice in the Description page of Project Settings.


#include "TriShiftHUD.h"
#include "UObject//ConstructorHelpers.h"

ATriShiftHUD::ATriShiftHUD()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> widget(TEXT("/Game/UIWidget"));
	HUDWidgetClass = widget.Class;
}

void ATriShiftHUD::BeginPlay()
{
	Super::BeginPlay();

	if (HUDWidgetClass != NULL)
	{
		currentWidget = CreateWidget<UUserWidget>(GetOwningPlayerController(), HUDWidgetClass);
		if (currentWidget != NULL)
		{
			currentWidget->AddToViewport();
		}
	}
}