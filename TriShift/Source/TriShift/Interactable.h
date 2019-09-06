// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Interactable.generated.h"

/**
 * 
 */
UCLASS()
class TRISHIFT_API AInteractable : public AActor
{
private:

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SimpleThings", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent *mesh;


public:

	AInteractable();
	~AInteractable();

	virtual void Interact() PURE_VIRTUAL(AInteractable::Interact, return;);
	
};
