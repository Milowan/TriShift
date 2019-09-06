// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Types.h"
#include <vector>
#include "APhase.generated.h"

UCLASS()
class TRISHIFT_API AAPhase : public AActor
{
private:
	GENERATED_BODY()

		phaseType type;


	
public:	
	// Sets default values for this actor's properties
	AAPhase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetPhaseType(phaseType t);

	phaseType GetPhaseType();

	void ActivatePhase();

	void DeactivatePhase();

};
