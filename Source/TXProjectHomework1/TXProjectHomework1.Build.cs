// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TXProjectHomework1 : ModuleRules
{
	public TXProjectHomework1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
