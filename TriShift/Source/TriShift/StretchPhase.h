// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Types.h"
#include "Wall.h"
#include <vector>
#include "StretchPhase.generated.h"

UCLASS()
class TRISHIFT_API AStretchPhase : public AActor
{
private:

	GENERATED_BODY()

	switchPhase phase;
	
	bool active;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	AStretchPhase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	std::vector <AWall *> walls;

	void SetPhaseType(switchPhase t);

	switchPhase GetPhaseType();

	void TogglePhase();

	bool Active();
	void IsActive(bool t);

};
