// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RODENTVR_EnterRegionStopCondition_generated_h
#error "EnterRegionStopCondition.generated.h already included, missing '#pragma once' in EnterRegionStopCondition.h"
#endif
#define RODENTVR_EnterRegionStopCondition_generated_h

#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRewardRegionEnter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_RegionEnteredId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardRegionEnter(Z_Param_RegionEnteredId); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRewardRegionEnter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_RegionEnteredId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardRegionEnter(Z_Param_RegionEnteredId); \
		P_NATIVE_END; \
	}


#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnterRegionStopCondition(); \
	friend struct Z_Construct_UClass_UEnterRegionStopCondition_Statics; \
public: \
	DECLARE_CLASS(UEnterRegionStopCondition, UStopCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UEnterRegionStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEnterRegionStopCondition(); \
	friend struct Z_Construct_UClass_UEnterRegionStopCondition_Statics; \
public: \
	DECLARE_CLASS(UEnterRegionStopCondition, UStopCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(UEnterRegionStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnterRegionStopCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnterRegionStopCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnterRegionStopCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnterRegionStopCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnterRegionStopCondition(UEnterRegionStopCondition&&); \
	NO_API UEnterRegionStopCondition(const UEnterRegionStopCondition&); \
public:


#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnterRegionStopCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnterRegionStopCondition(UEnterRegionStopCondition&&); \
	NO_API UEnterRegionStopCondition(const UEnterRegionStopCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnterRegionStopCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnterRegionStopCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnterRegionStopCondition)


#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_PRIVATE_PROPERTY_OFFSET
#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_14_PROLOG
#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_INCLASS \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class UEnterRegionStopCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_StopConditions_EnterRegionStopCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
