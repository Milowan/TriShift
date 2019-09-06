#pragma once
#include <vector>
#include "EngineUtils.h"

template<typename T>
void FindAllActors(UWorld* World, TArray<T*>& Out)
{
	for (TActorIterator<T> It(World); It; ++It)
	{
		Out.Add(*It);
	}
}

template<typename T>
void FindAllActors(UWorld* World, std::vector<T*>& Out)
{
	for (TActorIterator<T> It(World); It; ++It)
	{
		Out.Add(*It);
	}
}