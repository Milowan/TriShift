// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "TriShiftPlayerController.generated.h"

UCLASS()
class ATriShiftPlayerController : public APlayerController
{
private:

	GENERATED_BODY()

	UUserWidget *UserInterface;

public:

	ATriShiftPlayerController();

	UFUNCTION()
	void MoveForward(float axisValue);

	UFUNCTION()
	void MoveRight(float axisValue);

	void Interact();

	void SetupUI();

protected:

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
		
};


