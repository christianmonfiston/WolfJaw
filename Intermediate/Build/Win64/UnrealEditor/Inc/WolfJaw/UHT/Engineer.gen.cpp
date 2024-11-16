// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WolfJaw/Engineer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_WolfJaw();
WOLFJAW_API UClass* Z_Construct_UClass_AEngineer();
WOLFJAW_API UClass* Z_Construct_UClass_AEngineer_NoRegister();
// End Cross Module References

// Begin Class AEngineer
void AEngineer::StaticRegisterNativesAEngineer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEngineer);
UClass* Z_Construct_UClass_AEngineer_NoRegister()
{
	return AEngineer::StaticClass();
}
struct Z_Construct_UClass_AEngineer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Engineer.h" },
		{ "ModuleRelativePath", "Engineer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEngineer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_WolfJaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEngineer_Statics::ClassParams = {
	&AEngineer::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineer_Statics::Class_MetaDataParams), Z_Construct_UClass_AEngineer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEngineer()
{
	if (!Z_Registration_Info_UClass_AEngineer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEngineer.OuterSingleton, Z_Construct_UClass_AEngineer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEngineer.OuterSingleton;
}
template<> WOLFJAW_API UClass* StaticClass<AEngineer>()
{
	return AEngineer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEngineer);
AEngineer::~AEngineer() {}
// End Class AEngineer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_Engineer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEngineer, AEngineer::StaticClass, TEXT("AEngineer"), &Z_Registration_Info_UClass_AEngineer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEngineer), 207569607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_Engineer_h_2732507777(TEXT("/Script/WolfJaw"),
	Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_Engineer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_Engineer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
