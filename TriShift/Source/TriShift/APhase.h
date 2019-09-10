// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Types.h"
#include <vector>
#include "Wall.h"
#include "APhase.generated.h"

UCLASS()
class TRISHIFT_API AAPhase : public AActor
{
private:
	GENERATED_BODY()

	phaseType type;

	bool active;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	AAPhase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	std::vector <AWall *> walls;

	void SetPhaseType(phaseType t);

	phaseType GetPhaseType();

	void ActivatePhase();

	void DeactivatePhase();

	bool Active();
	void IsActive(bool t);

};
