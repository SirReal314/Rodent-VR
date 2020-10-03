// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureSettings;
enum class MazeObjectType : uint8;
#ifdef RODENTVR_MazeObjectSettings_generated_h
#error "MazeObjectSettings.generated.h already included, missing '#pragma once' in MazeObjectSettings.h"
#endif
#define RODENTVR_MazeObjectSettings_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execGetObjectType); \
	DECLARE_FUNCTION(execSetObjectType); \
	DECLARE_FUNCTION(execGetCanCollide); \
	DECLARE_FUNCTION(execSetCanCollide);


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execGetObjectType); \
	DECLARE_FUNCTION(execSetObjectType); \
	DECLARE_FUNCTION(execGetCanCollide); \
	DECLARE_FUNCTION(execSetCanCollide);


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMazeObjectSettings(); \
	friend struct Z_Construct_UClass_UMazeObjectSettings_Statics; \
public: \
	DECLARE_CLASS(UMazeObjectSettings, UActorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeObjectSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMazeObjectSettings(); \
	friend struct Z_Construct_UClass_UMazeObjectSettings_Statics; \
public: \
	DECLARE_CLASS(UMazeObjectSettings, UActorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeObjectSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeObjectSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeObjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeObjectSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeObjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeObjectSettings(UMazeObjectSettings&&); \
	NO_API UMazeObjectSettings(const UMazeObjectSettings&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeObjectSettings(UMazeObjectSettings&&); \
	NO_API UMazeObjectSettings(const UMazeObjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeObjectSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeObjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMazeObjectSettings)


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CanCollide() { return STRUCT_OFFSET(UMazeObjectSettings, CanCollide); } \
	FORCEINLINE static uint32 __PPO__ObjectType() { return STRUCT_OFFSET(UMazeObjectSettings, ObjectType); } \
	FORCEINLINE static uint32 __PPO__Texture() { return STRUCT_OFFSET(UMazeObjectSettings, Texture); }


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_13_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UMazeObjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_MazeObjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
