// Copyright Epic Games, Inc. All Rights Reserved.hello world

using UnrealBuildTool;
using System.Collections.Generic;

public class SuspenseTarget : TargetRules
{
	public SuspenseTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Suspense");
	}
}
