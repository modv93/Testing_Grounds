// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class S5_Testing_GroundsTarget : TargetRules
{
	public S5_Testing_GroundsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("S5_Testing_Grounds");
	}
}
