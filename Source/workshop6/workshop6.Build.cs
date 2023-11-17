// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class workshop6 : ModuleRules
{
	public workshop6(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
