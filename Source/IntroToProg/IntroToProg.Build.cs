// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IntroToProg : ModuleRules
{
	public IntroToProg(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
