// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S5_Testing_GroundsHUD.generated.h"

UCLASS()
class AS5_Testing_GroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AS5_Testing_GroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

