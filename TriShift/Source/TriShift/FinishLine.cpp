// Fill out your copyright notice in the Description page of Project Settings.


#include "FinishLine.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectHash.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"

// Sets default values
AFinishLine::AFinishLine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	collisionBox->SetupAttachment(RootComponent);

	collisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	collisionBox->SetGenerateOverlapEvents(true);

	collisionBox->OnComponentBeginOverlap.AddDynamic(this, &AFinishLine::OnActorBeginOverlap);


	collisionResponse = NULL;

	objective = FText::FromString("Reach the other side");

}

FText AFinishLine::GetObjective()
{
	return objective;
}

void AFinishLine::SetObjective(FText txt)
{
	objective = txt;
}

// Called when the game starts or when spawned
void AFinishLine::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinishLine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ATriShiftCharacter *player = (ATriShiftCharacter *)collisionResponse;
	if (player != NULL)
	{
		objective = FText::FromString("Complete");

	}
}

void AFinishLine::OnActorBeginOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	collisionResponse = OtherActor;
}

