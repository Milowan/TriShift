// Fill out your copyright notice in the Description page of Project Settings.


#include "ShiftTrigger.h"

AShiftTrigger::AShiftTrigger()
{
	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	collisionBox->SetupAttachment(RootComponent);
}

phaseType AShiftTrigger::GetTargetPhase()
{
	return targetPhase;
}


void AShiftTrigger::SetTargetPhase(phaseType type)
{
	targetPhase = type;
}


void AShiftTrigger::Interact()
{
	triggered = true;
}