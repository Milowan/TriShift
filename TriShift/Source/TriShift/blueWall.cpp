// Fill out your copyright notice in the Description page of Project Settings.


#include "blueWall.h"

AblueWall::AblueWall()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/bWall.bWall'"));
	GetMesh()->SetStaticMesh(MeshAsset.Object);
	type = bluePhase;
}


void AblueWall::BeginPlay()
{

	Super::BeginPlay();
}