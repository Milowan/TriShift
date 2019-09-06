// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TriShiftPlayerController.generated.h"

UCLASS()
class ATriShiftPlayerController : public APlayerController
{
private:

	GENERATED_BODY()

	bool isInteracting;


public:
	ATriShiftPlayerController();

	UFUNCTION()
	void MoveForward(float axisValue);

	UFUNCTION()
	void MoveRight(float axisValue);

	void Interact();

protected:

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	bool IsInteracting();
		
};


