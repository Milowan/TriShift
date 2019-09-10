// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Types.h"
#include "Components/BoxComponent.h"
#include "ShiftTrigger.generated.h"

/**
 * 
 */
UCLASS()
class TRISHIFT_API AShiftTrigger : public AInteractable
{
private:

	GENERATED_BODY()

	phaseType targetPhase;

	bool triggered;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SimpleThings", meta = (AllowPrivateAccess = "true"))
	UBoxComponent *collisionBox;


protected:

	void SetTargetPhase(phaseType type);
	
public:

	AShiftTrigger();

	phaseType GetTargetPhase();

	virtual void Interact() override;

	bool Triggered();
	void SetTriggered(bool t);

};
