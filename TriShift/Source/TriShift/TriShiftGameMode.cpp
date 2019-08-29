// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TriShiftGameMode.h"
#include "TriShiftPlayerController.h"
#include "TriShiftCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATriShiftGameMode::ATriShiftGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATriShiftPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}