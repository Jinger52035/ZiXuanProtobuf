// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZiXuanProtobuf/Public/ProtobufSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtobufSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ZiXuanProtobuf();
	ZIXUANPROTOBUF_API UClass* Z_Construct_UClass_UProtobufSubsystem();
	ZIXUANPROTOBUF_API UClass* Z_Construct_UClass_UProtobufSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UProtobufSubsystem::execGenerateProtobufFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateProtobufFromPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProtobufSubsystem::execLoadProtobufFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->LoadProtobufFromPath(Z_Param_Path);
		P_NATIVE_END;
	}
	void UProtobufSubsystem::StaticRegisterNativesUProtobufSubsystem()
	{
		UClass* Class = UProtobufSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateProtobufFromPath", &UProtobufSubsystem::execGenerateProtobufFromPath },
			{ "LoadProtobufFromPath", &UProtobufSubsystem::execLoadProtobufFromPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics
	{
		struct ProtobufSubsystem_eventGenerateProtobufFromPath_Parms
		{
			FString Path;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProtobufSubsystem_eventGenerateProtobufFromPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xe7\x94\x9f\xe6\x88\x90\n" },
		{ "ModuleRelativePath", "Public/ProtobufSubsystem.h" },
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtobufSubsystem, nullptr, "GenerateProtobufFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::ProtobufSubsystem_eventGenerateProtobufFromPath_Parms), Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics
	{
		struct ProtobufSubsystem_eventLoadProtobufFromPath_Parms
		{
			FString Path;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProtobufSubsystem_eventLoadProtobufFromPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProtobufSubsystem_eventLoadProtobufFromPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xe5\x8a\xa0\xe8\xbd\xbd\n" },
		{ "ModuleRelativePath", "Public/ProtobufSubsystem.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProtobufSubsystem, nullptr, "LoadProtobufFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::ProtobufSubsystem_eventLoadProtobufFromPath_Parms), Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProtobufSubsystem);
	UClass* Z_Construct_UClass_UProtobufSubsystem_NoRegister()
	{
		return UProtobufSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UProtobufSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProtobufSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ZiXuanProtobuf,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProtobufSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProtobufSubsystem_GenerateProtobufFromPath, "GenerateProtobufFromPath" }, // 2973180268
		{ &Z_Construct_UFunction_UProtobufSubsystem_LoadProtobufFromPath, "LoadProtobufFromPath" }, // 1890382183
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProtobufSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProtobufSubsystem.h" },
		{ "ModuleRelativePath", "Public/ProtobufSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProtobufSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProtobufSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProtobufSubsystem_Statics::ClassParams = {
		&UProtobufSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProtobufSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProtobufSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProtobufSubsystem()
	{
		if (!Z_Registration_Info_UClass_UProtobufSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProtobufSubsystem.OuterSingleton, Z_Construct_UClass_UProtobufSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProtobufSubsystem.OuterSingleton;
	}
	template<> ZIXUANPROTOBUF_API UClass* StaticClass<UProtobufSubsystem>()
	{
		return UProtobufSubsystem::StaticClass();
	}
	UProtobufSubsystem::UProtobufSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProtobufSubsystem);
	UProtobufSubsystem::~UProtobufSubsystem() {}
	struct Z_CompiledInDeferFile_FID_TDGame_Plugins_ZiXuanProtobuf_Source_ZiXuanProtobuf_Public_ProtobufSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TDGame_Plugins_ZiXuanProtobuf_Source_ZiXuanProtobuf_Public_ProtobufSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProtobufSubsystem, UProtobufSubsystem::StaticClass, TEXT("UProtobufSubsystem"), &Z_Registration_Info_UClass_UProtobufSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProtobufSubsystem), 529292109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TDGame_Plugins_ZiXuanProtobuf_Source_ZiXuanProtobuf_Public_ProtobufSubsystem_h_3052111837(TEXT("/Script/ZiXuanProtobuf"),
		Z_CompiledInDeferFile_FID_TDGame_Plugins_ZiXuanProtobuf_Source_ZiXuanProtobuf_Public_ProtobufSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TDGame_Plugins_ZiXuanProtobuf_Source_ZiXuanProtobuf_Public_ProtobufSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
