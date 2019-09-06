// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "UObject/ConstructorHelpers.h"

AInteractable::AInteractable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	RootComponent = mesh;
}

AInteractable::~AInteractable()
{

}