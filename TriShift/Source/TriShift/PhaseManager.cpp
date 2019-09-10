// Fill out your copyright notice in the Description page of Project Settings.


#include "PhaseManager.h"

APhaseManager::APhaseManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void APhaseManager::BeginPlay()
{
	Super::BeginPlay();
	TArray<ATriShiftPlayerController *> controllers;
	FindAllActors(GetWorld(), controllers);
	FindAllActors(GetWorld(), shiftTriggers);
	FindAllActors(GetWorld(), phases);
	FindAllActors(GetWorld(), walls);
	AssignWalls();

	for (int i = 0; i < phases.Num(); ++i)
	{
		phases[i]->DeactivatePhase();
	}

	pCRef = controllers[0];
}

void APhaseManager::Tick(float deltaTime)
{
	for (int i = 0; i < shiftTriggers.Num(); ++i)
	{
		if (shiftTriggers[i]->Triggered())
		{
			ChangePhase(shiftTriggers[i]->GetTargetPhase());
			shiftTriggers[i]->SetTriggered(false);
		}
	}
}

void APhaseManager::AssignWalls()
{
	for (int i = 0; i != phases.Num(); ++i)
	{
		for (int j = 0; j != walls.Num(); ++j)
		{
			if (phases[i]->GetPhaseType() == walls[j]->GetPhase())
			{
				walls[i]->GetMesh()->SetVisibility(false);
				walls[i]->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				phases[i]->walls.push_back(walls[j]);
			}
		}
	}
}

void APhaseManager::ChangePhase(phaseType target)
{
	for (int i = 0; i != phases.Num(); ++i)
	{
		if (phases[i]->GetPhaseType() == target)
		{
			phases[i]->ActivatePhase();
		}
		else
		{
			phases[i]->DeactivatePhase();
		}
	}
}