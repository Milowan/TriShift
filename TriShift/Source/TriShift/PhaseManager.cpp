// Fill out your copyright notice in the Description page of Project Settings.


#include "PhaseManager.h"

APhaseManager::APhaseManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	TArray<ATriShiftPlayerController *> controllers;
	FindAllActors(GetWorld(), controllers);
	FindAllActors(GetWorld(), shiftTriggers);
	FindAllActors(GetWorld(), phases);

	pCRef = controllers[0];
}

void APhaseManager::Tick(float deltaTime)
{

}