// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Wall.h"
#include "redWall.generated.h"

/**
 * 
 */
UCLASS()
class TRISHIFT_API AredWall : public AWall
{
private:

	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;
	
public:

	AredWall();
};
