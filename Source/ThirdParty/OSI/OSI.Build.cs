// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;
using EpicGames.Core;

public class OSI : ModuleRules
{
	public OSI(ReadOnlyTargetRules Target) : base(Target)
	{
		//do not manually compile source files using UBT
		Type = ModuleType.External;

		
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			//does not work with this lib due to technical constraints. instead copy to project binary dir
			//PublicDelayLoadDLLs.Add("libprotobuf.dll");
			
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Libraries",
				"open_simulation_interface_static.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Libraries",
				"libprotobuf.lib"));

			var Includes=Path.Combine(ModuleDirectory, "Includes");
			PublicIncludePaths.Add(Includes);

			RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "Libraries",
				"libprotobuf.dll"));

			//workaround for cryptic error
			PublicDefinitions.Add("GOOGLE_PROTOBUF_INTERNAL_DONATE_STEAL_INLINE");
			
			
		}

	}
}