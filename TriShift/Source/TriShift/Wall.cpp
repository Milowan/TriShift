// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"

// Sets default values
AWall::AWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	RootComponent = mesh;
	mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	
	mesh->SetRelativeScale3D(FVector(2, 2, 2));

}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

phaseType AWall::GetPhase()
{
	return type;
}

UStaticMeshComponent* AWall::GetMesh()
{
	return mesh;
}

void AWall::Expand()
{
	mesh->SetRelativeScale3D(FVector(4, 2, 2));
}

void AWall::Contract()
{
	mesh->SetRelativeScale3D(FVector(2, 2, 2));
}