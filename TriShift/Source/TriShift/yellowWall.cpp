// Fill out your copyright notice in the Description page of Project Settings.


#include "yellowWall.h"

AyellowWall::AyellowWall()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/yWall.yWall'"));
	GetMesh()->SetStaticMesh(MeshAsset.Object);
	type = yellowPhase;
}

void AyellowWall::BeginPlay()
{
	Super::BeginPlay();

}

