// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Switch.h"
#include "Wall.h"
#include "StretchPhase.h"
#include "Templates.h"
#include "SwitchManager.generated.h"

UCLASS()
class TRISHIFT_API ASwitchManager : public AActor
{
private:

	GENERATED_BODY()

	TArray <ASwitch *> switches;
	TArray <AWall *> walls;
	TArray <AStretchPhase *> phases;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ASwitchManager();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AssignWalls();

};
