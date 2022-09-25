// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Machina : ModuleRules
{
	public Machina(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
