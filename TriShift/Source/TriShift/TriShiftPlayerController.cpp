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
}

void ATriShiftPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

}

void ATriShiftPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ATriShiftPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATriShiftPlayerController::MoveRight);

	InputComponent->BindAction("Interact", IE_Pressed, this, &ATriShiftPlayerController::Interact);
}

void ATriShiftPlayerController::MoveForward(float axisValue)
{
	GetPawn()->AddMovementInput(FVector(1, 0, 0), axisValue);
}

void ATriShiftPlayerController::MoveRight(float axisValue)
{
	GetPawn()->AddMovementInput(FVector(0, 1, 0), axisValue);
}

void ATriShiftPlayerController::Interact()
{
	ATriShiftCharacter *player = (ATriShiftCharacter *)GetPawn();
	if (player->canInteract)
	{
		ATriShiftCharacter *player = (ATriShiftCharacter *) GetPawn();
		player->GetInteractable()->Interact();
	}
}
