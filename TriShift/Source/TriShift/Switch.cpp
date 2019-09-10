// Fill out your copyright notice in the Description page of Project Settings.


#include "Switch.h"



void ASwitch::SetPhase(switchPhase p)
{
	phase = p;
}

switchPhase ASwitch::GetPhase()
{
	return phase;
}

void ASwitch::Interact()
{
	flipped = true;
}

void ASwitch::Reset()
{
	flipped = false;
}