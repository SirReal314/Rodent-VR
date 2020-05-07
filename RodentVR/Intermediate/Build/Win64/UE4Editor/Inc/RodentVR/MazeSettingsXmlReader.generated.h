// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMazeSettings;
#ifdef RODENTVR_MazeSettingsXmlReader_generated_h
#error "MazeSettingsXmlReader.generated.h already included, missing '#pragma once' in MazeSettingsXmlReader.h"
#endif
#define RODENTVR_MazeSettingsXmlReader_generated_h

#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMazeFromFile) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_MazeFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMazeSettings**)Z_Param__Result=UMazeSettingsXmlReader::LoadMazeFromFile(Z_Param_MazeFileName); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMazeFromFile) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_MazeFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMazeSettings**)Z_Param__Result=UMazeSettingsXmlReader::LoadMazeFromFile(Z_Param_MazeFileName); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMazeSettingsXmlReader(); \
	friend struct Z_Construct_UClass_UMazeSettingsXmlReader_Statics; \
public: \
	DECLARE_CLASS(UMazeSettingsXmlReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSettingsXmlReader)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMazeSettingsXmlReader(); \
	friend struct Z_Construct_UClass_UMazeSettingsXmlReader_Statics; \
public: \
	DECLARE_CLASS(UMazeSettingsXmlReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UMazeSettingsXmlReader)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSettingsXmlReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSettingsXmlReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSettingsXmlReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSettingsXmlReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSettingsXmlReader(UMazeSettingsXmlReader&&); \
	NO_API UMazeSettingsXmlReader(const UMazeSettingsXmlReader&); \
public:


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSettingsXmlReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSettingsXmlReader(UMazeSettingsXmlReader&&); \
	NO_API UMazeSettingsXmlReader(const UMazeSettingsXmlReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSettingsXmlReader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSettingsXmlReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSettingsXmlReader)


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_14_PROLOG
#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_INCLASS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UMazeSettingsXmlReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Settings_MazeSettingsXmlReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
