// Fill out your copyright notice in the Description page of Project Settings.


#include "Switch.h"
ASwitch::ASwitch()
{
	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	collisionBox->SetupAttachment(RootComponent);
	collisionBox->SetRelativeScale3D(FVector(2.5, 2.5, 2));
}

bool ASwitch::Flipped()
{
	return flipped;
}

void ASwitch::Interact()
{
	flipped = true;
}

void ASwitch::Reset()
{
	flipped = false;
}