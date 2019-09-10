// Fill out your copyright notice in the Description page of Project Settings.


#include "StretchPhase.h"

// Sets default values
AStretchPhase::AStretchPhase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStretchPhase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStretchPhase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStretchPhase::SetPhaseType(switchPhase p)
{
	phase = p;
}

switchPhase AStretchPhase::GetPhaseType()
{
	return phase;
}

void AStretchPhase::TogglePhase()
{

}