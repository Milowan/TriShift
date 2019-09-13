// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Types.h"
#include "Components/BoxComponent.h"
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SimpleThings", meta = (AllowPrivateAccess = "true"))
	UBoxComponent *collisionBox;
	

public:

	ASwitch();

	bool Flipped();
	virtual void Interact() override;
	void Reset();
};
