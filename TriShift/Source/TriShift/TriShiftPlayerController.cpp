// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TriShiftPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "TriShiftCharacter.h"
#include "Engine/World.h"

ATriShiftPlayerController::ATriShiftPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
	
	//Input
	InputComponent->BindAxis("MoveForward", this, &ATriShiftPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATriShiftPlayerController::MoveRight);
}

void ATriShiftPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

}

void ATriShiftPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();



}

void ATriShiftPlayerController::MoveForward(float axisValue)
{
	GetPawn()->AddMovementInput(FVector(1, 0, 0), axisValue);
}

void ATriShiftPlayerController::MoveRight(float axisValue)
{
	GetPawn()->AddMovementInput(FVector(0, 1, 0), axisValue);
}
