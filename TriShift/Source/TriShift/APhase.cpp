// Fill out your copyright notice in the Description page of Project Settings.


#include "APhase.h"

// Sets default values
AAPhase::AAPhase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAPhase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPhase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAPhase::SetPhaseType(phaseType t)
{
	type = t;
}

phaseType AAPhase::GetPhaseType()
{
	return type;
}

void AAPhase::ActivatePhase()
{

}

void AAPhase::DeactivatePhase()
{

}