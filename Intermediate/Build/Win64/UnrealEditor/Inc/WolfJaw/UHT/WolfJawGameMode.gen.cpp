// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WolfJaw/WolfJawGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWolfJawGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WolfJaw();
WOLFJAW_API UClass* Z_Construct_UClass_AWolfJawGameMode();
WOLFJAW_API UClass* Z_Construct_UClass_AWolfJawGameMode_NoRegister();
// End Cross Module References

// Begin Class AWolfJawGameMode
void AWolfJawGameMode::StaticRegisterNativesAWolfJawGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWolfJawGameMode);
UClass* Z_Construct_UClass_AWolfJawGameMode_NoRegister()
{
	return AWolfJawGameMode::StaticClass();
}
struct Z_Construct_UClass_AWolfJawGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WolfJawGameMode.h" },
		{ "ModuleRelativePath", "WolfJawGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWolfJawGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWolfJawGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WolfJaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWolfJawGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWolfJawGameMode_Statics::ClassParams = {
	&AWolfJawGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWolfJawGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWolfJawGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWolfJawGameMode()
{
	if (!Z_Registration_Info_UClass_AWolfJawGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWolfJawGameMode.OuterSingleton, Z_Construct_UClass_AWolfJawGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWolfJawGameMode.OuterSingleton;
}
template<> WOLFJAW_API UClass* StaticClass<AWolfJawGameMode>()
{
	return AWolfJawGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWolfJawGameMode);
AWolfJawGameMode::~AWolfJawGameMode() {}
// End Class AWolfJawGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWolfJawGameMode, AWolfJawGameMode::StaticClass, TEXT("AWolfJawGameMode"), &Z_Registration_Info_UClass_AWolfJawGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWolfJawGameMode), 4266534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawGameMode_h_2888638161(TEXT("/Script/WolfJaw"),
	Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
