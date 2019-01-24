// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class S5_Testing_GroundsEditorTarget : TargetRules
{
	public S5_Testing_GroundsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("S5_Testing_Grounds");
	}
}
