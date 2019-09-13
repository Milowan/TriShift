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

	AssignWalls();

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

	for (int i = 0; i < switches.Num(); ++i)
	{
		if (switches[i]->Flipped())
		{
			phases[i]->TogglePhase(i);
			switches[i]->Reset();
		}
	}

}

void ASwitchManager::AssignWalls()
{
	for (int i = 0; i != phases.Num(); ++i)
	{
		for (int j = 0; j != walls.Num(); ++j)
		{
				phases[i]->walls.push_back(walls[j]);
		}
		if (i == 0)
		{
			for (int j = 0; j != walls.Num(); ++j)
			{
				if (j % 2 == 0)
				{
					walls[j]->switches.push_back(no);
				}
				else
				{
					walls[j]->switches.push_back(yes);
				}
			}
		}
		else if (i == 1)
		{
			for (int j = 0; j != walls.Num(); ++j)
			{
				if (j % 3 == 0)
				{
					walls[j]->switches.push_back(no);
				}
				else
				{
					walls[j]->switches.push_back(yes);
				}
			}
		}
		else if (i == 2)
		{

			for (int j = 0; j != walls.Num(); ++j)
			{
				if (j % 4 == 0)
				{
					walls[j]->switches.push_back(no);
				}
				else
				{
					walls[j]->switches.push_back(yes);
				}
			}
		}
	}
}

