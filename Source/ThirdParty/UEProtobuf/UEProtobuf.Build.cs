// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class UEProtobuf : ModuleRules
{
	public UEProtobuf(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		
		PublicSystemLibraryPaths.Add(Path.Combine(ModuleDirectory, "lib"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
		
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			string LiFolder = System.IO.Path.Combine(ModuleDirectory, "lib", "Win64");
			string[] LiFiles = System.IO.Directory.GetFiles(LiFolder, "*.lib", System.IO.SearchOption.AllDirectories);

			foreach (string LiFile in LiFiles)
			{
				PublicSystemLibraries.Add(LiFile);
			}	
		}
		
	}
}
