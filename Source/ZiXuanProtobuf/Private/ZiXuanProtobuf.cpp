// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZiXuanProtobuf.h"

#define LOCTEXT_NAMESPACE "FBilibiliProtobufModule"

void FZiXuanProtobufModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FZiXuanProtobufModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FZiXuanProtobufModule, ZiXuanProtobuf)