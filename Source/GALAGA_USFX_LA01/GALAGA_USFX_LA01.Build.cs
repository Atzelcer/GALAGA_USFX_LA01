// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GALAGA_USFX_LA01 : ModuleRules
{
	public GALAGA_USFX_LA01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
