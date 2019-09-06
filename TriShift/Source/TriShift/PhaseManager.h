// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Types.h"
#include "TriShiftPlayerController.h"
#include "Templates.h"
#include <vector>
#include "PhaseManager.generated.h"

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

/**
 * 
 */
UCLASS()
class TRISHIFT_API APhaseManager : public AActor
{
private:

	GENERATED_BODY()

	std::vector <AShiftTrigger *> shiftTriggers;
	std::vector <AAPhase *> phases;

	ATriShiftPlayerController *pCRef;


public:

	APhaseManager();

	virtual void Tick(float deltaTime) override;
	
};
