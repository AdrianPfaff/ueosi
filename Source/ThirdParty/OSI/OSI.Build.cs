// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;
using EpicGames.Core;

public class OSI : ModuleRules
{
	public static string RelativeModulePath = "Plugins/UEOSI/Source/ThirdParty/OSI/";
	public static string RelativeSourcePath = "Plugins/UEOSI/Source/ThirdParty/OSI/" + "/lib/";
	public OSI(ReadOnlyTargetRules Target) : base(Target)
	{
		//do not manually comple source files using UBT
		Type = ModuleType.External;
		
		//but require precompiling
        PrecompileForTargets = PrecompileTargetsType.Any;

        PublicPreBuildLibraries.Add(MakePlatformLibPath(Target));

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "open_simulation_interface.lib"));

			// Delay-load the DLL, so we can load it from the right place first
			PublicDelayLoadDLLs.Add("open_simulation_interface.dll");

			// Ensure that the DLL is staged along with the executable
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/OSI/Win64/open_simulation_interface.dll");
        }
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            PublicDelayLoadDLLs.Add(Path.Combine(ModuleDirectory, "Mac", "Release", "open_simulation_interface.dylib"));
            RuntimeDependencies.Add("$(PluginDir)/Source/ThirdParty/UEOSILibrary/Mac/Release/open_simulation_interface.dylib");
        }
        else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			string ExampleSoPath = Path.Combine("$(PluginDir)", "Binaries", "ThirdParty", "OSI", "Linux", "x86_64-unknown-linux-gnu", "open_simulation_interface.so");
			PublicAdditionalLibraries.Add(ExampleSoPath);
			PublicDelayLoadDLLs.Add(ExampleSoPath);
			RuntimeDependencies.Add(ExampleSoPath);
		}
	}
	
	static public string MakePlatformLibPath(ReadOnlyTargetRules Target)
	{
		string Library = "/open_simulation_interface.lib";
        
		if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			Library = "/open_simulation_interface.a";
		}
		if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			Library = "/open_simulation_interface.so";
		}
        
		string RelativePath = RelativeSourcePath + Target.Platform.ToString() + Library;

		return Path.Combine(Target.ProjectFile.Directory.FullName, RelativePath);
	}

    static public string OSILibBuildStep(ReadOnlyTargetRules Target)
    {
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            return RelativeModulePath + "build_osi.bat";
        } /*
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            return RelativeModulePath + "build_osi.csh";
        } else if (Target.Platform == UnrealTargetPlatform.Linux)
        {
	        return RelativeModulePath + "build_osi.sh";
        }
        */
        else
        {
            Log.WriteLine(LogEventType.Error, "CannotBuildOSILib for platform {0}. Either no build script defined or library is incompatible with platform.", Target.Platform.ToString());
            return "";
            
        }
    }
}
