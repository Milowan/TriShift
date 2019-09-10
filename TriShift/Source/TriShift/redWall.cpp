// Fill out your copyright notice in the Description page of Project Settings.

#include "redWall.h"

AredWall::AredWall()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/rWall.rWall'"));
	GetMesh()->SetStaticMesh(MeshAsset.Object);
	type = redPhase;
}

void AredWall::BeginPlay()
{
	Super::BeginPlay();

}