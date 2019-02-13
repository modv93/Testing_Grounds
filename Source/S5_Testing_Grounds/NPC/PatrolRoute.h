// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class S5_TESTING_GROUNDS_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:
	TArray <AActor*> GetPatrolPoints() const;

private:	
	UPROPERTY(EditAnywhere, Category = "Patrol") // TODO remove and add getters 
	TArray <AActor*> PatrolPoints;
		
};
