// Fill out your copyright notice in the Description page of Project Settings.

#include "ChoseNextWaypoint.h"

EBTNodeResult::Type UChoseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("AI in CPP"));
	return EBTNodeResult::Succeeded;
}