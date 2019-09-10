// Fill out your copyright notice in the Description page of Project Settings.


#include "SwitchManager.h"

// Sets default values
ASwitchManager::ASwitchManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASwitchManager::BeginPlay()
{
	Super::BeginPlay();
	
	FindAllActors(GetWorld(), switches);
	FindAllActors(GetWorld(), phases);
	FindAllActors(GetWorld(), walls);

	for (int i = 0; i < walls.Num(); ++i)
	{
		if (i % 2 == 0)
		{
			walls[i]->Expand();
		}
	}
}

// Called every frame
void ASwitchManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASwitchManager::AssignWalls()
{
	for (int i = 0; i != phases.Num(); ++i)
	{
		for (int j = 0; j != walls.Num(); ++j)
		{
			if (phases[i]->GetPhaseType() == walls[j]->GetPhase())
			{
				walls[i]->GetMesh()->SetVisibility(false);
				walls[i]->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				phases[i]->walls.push_back(walls[j]);
			}
		}
	}
}

