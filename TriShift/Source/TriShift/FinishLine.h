// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "TriShiftCharacter.h"
#include "FinishLine.generated.h"

UCLASS()
class TRISHIFT_API AFinishLine : public AActor
{
private:

	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SimpleThings", meta = (AllowPrivateAccess = "true"))
	UBoxComponent *collisionBox;

	AActor *collisionResponse;

	UPROPERTY(VisibleAnywhere)
	FText objective;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	AFinishLine();

	UFUNCTION(BlueprintCallable)
	FText GetObjective();
	void SetObjective(FText txt);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void OnActorBeginOverlap(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

};
