// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Types.h"
#include "ConstructorHelpers.h"
#include "Wall.generated.h"

UCLASS()
class TRISHIFT_API AWall : public AActor
{
private:

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SimpleThings", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent *mesh;
	
protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	phaseType type;

public:	

	// Sets default values for this actor's properties
	AWall();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	phaseType GetPhase();
	UStaticMeshComponent *GetMesh();

	void Expand();
	void Contract();

};
