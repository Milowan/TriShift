// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Types.h"
#include "TriShiftPlayerController.h"
#include "ShiftTrigger.h"
#include "APhase.h"
#include "Templates.h"
#include "PhaseManager.generated.h"

/**
 * 
 */
UCLASS()
class TRISHIFT_API APhaseManager : public AActor
{
private:

	GENERATED_BODY()

	TArray<AShiftTrigger *> shiftTriggers;
	TArray<AAPhase *> phases;
	TArray<AWall *> walls;

	void AssignWalls();

	ATriShiftPlayerController *pCRef;

protected:

	virtual void BeginPlay() override;

public:

	APhaseManager();

	virtual void Tick(float deltaTime) override;

	void ChangePhase(phaseType target);
	
};
