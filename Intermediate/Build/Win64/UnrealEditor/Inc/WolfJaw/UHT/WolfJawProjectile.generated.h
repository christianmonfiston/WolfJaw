// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WolfJawProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WOLFJAW_WolfJawProjectile_generated_h
#error "WolfJawProjectile.generated.h already included, missing '#pragma once' in WolfJawProjectile.h"
#endif
#define WOLFJAW_WolfJawProjectile_generated_h

#define FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWolfJawProjectile(); \
	friend struct Z_Construct_UClass_AWolfJawProjectile_Statics; \
public: \
	DECLARE_CLASS(AWolfJawProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WolfJaw"), NO_API) \
	DECLARE_SERIALIZER(AWolfJawProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWolfJawProjectile(AWolfJawProjectile&&); \
	AWolfJawProjectile(const AWolfJawProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWolfJawProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWolfJawProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWolfJawProjectile) \
	NO_API virtual ~AWolfJawProjectile();


#define FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_12_PROLOG
#define FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WOLFJAW_API UClass* StaticClass<class AWolfJawProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_chris_OneDrive_Documents_Unreal_Projects_WolfJaw_Source_WolfJaw_WolfJawProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
