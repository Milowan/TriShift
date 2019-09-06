// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Types.h"
#include "TriShiftGameMode.generated.h"

class AShiftTrigger
{
public:

	phaseType GetTargetPhase();

};

class AAPhase
{
public:

	phaseType GetPhaseType();
};

UCLASS(minimalapi)
class ATriShiftGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATriShiftGameMode();
};



