// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Types.h"
#include "Switch.generated.h"

/**
 * 
 */
UCLASS()
class TRISHIFT_API ASwitch : public AInteractable
{
private:

	GENERATED_BODY()

	bool flipped;

	switchPhase phase;
	

public:

	void SetPhase(switchPhase p);
	switchPhase GetPhase();

	virtual void Interact() override;
	void Reset();
};
