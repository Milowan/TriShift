// Fill out your copyright notice in the Description page of Project Settings.


#include "StretchPhase.h"

// Sets default values
AStretchPhase::AStretchPhase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	active = false;

}

// Called when the game starts or when spawned
void AStretchPhase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStretchPhase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStretchPhase::TogglePhase(int index)
{
	if (active)
	{
		for (int i = 0; i < walls.size(); ++i)
		{
			if (walls[i]->switches[index] == yes)
			{
				walls[i]->Contract();
			}
			else
			{
				walls[i]->Expand();
			}
		}
		active = false;
	}
	else
	{
		for (int i = 0; i < walls.size(); ++i)
		{
			if (walls[i]->switches[index] == no)
			{
				walls[i]->Contract();
			}
			else
			{
				walls[i]->Expand();
			}
		}
		active = true;
	}
}