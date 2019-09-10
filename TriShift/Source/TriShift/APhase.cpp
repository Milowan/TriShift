// Fill out your copyright notice in the Description page of Project Settings.


#include "APhase.h"

// Sets default values
AAPhase::AAPhase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	active = true;

}

// Called when the game starts or when spawned
void AAPhase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPhase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAPhase::SetPhaseType(phaseType t)
{
	type = t;
}

phaseType AAPhase::GetPhaseType()
{
	return type;
}

void AAPhase::ActivatePhase()
{
	if (!active)
	{
		for (std::vector <AWall *>::iterator scan = walls.begin(); scan != walls.end(); ++scan)
		{
			AWall *wall = *scan;

			wall->GetMesh()->SetVisibility(true);
			wall->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
	}

	active = true;
}

void AAPhase::DeactivatePhase()
{
	if (active)
	{
		for (std::vector <AWall *>::iterator scan = walls.begin(); scan != walls.end(); ++scan)
		{
			AWall *wall = *scan;

			wall->GetMesh()->SetVisibility(false);
			wall->GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}

	active = false;
}

bool AAPhase::Active()
{
	return active;
}

void AAPhase::IsActive(bool t)
{
	active = t;
}