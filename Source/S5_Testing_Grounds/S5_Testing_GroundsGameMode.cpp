// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "S5_Testing_GroundsGameMode.h"
#include "S5_Testing_GroundsHUD.h"
#include "Player/FirstPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS5_Testing_GroundsGameMode::AS5_Testing_GroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("Game/Player/Behaviour/FirstPersonCharacter.FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS5_Testing_GroundsHUD::StaticClass();
}
