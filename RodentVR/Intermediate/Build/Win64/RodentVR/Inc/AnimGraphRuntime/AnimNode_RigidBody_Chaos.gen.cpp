// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_RigidBody_Chaos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBody_Chaos() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSolverIterations();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_RigidBody_Chaos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RigidBody_Chaos"), sizeof(FAnimNode_RigidBody_Chaos), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RigidBody_Chaos>()
{
	return FAnimNode_RigidBody_Chaos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RigidBody_Chaos(FAnimNode_RigidBody_Chaos::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RigidBody_Chaos"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RigidBody_Chaos
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RigidBody_Chaos()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RigidBody_Chaos")),new UScriptStruct::TCppStructOps<FAnimNode_RigidBody_Chaos>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RigidBody_Chaos;
	struct Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentSpaceSimulation_MetaData[];
#endif
		static void NewProp_bComponentSpaceSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentSpaceSimulation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideSolverIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideSolverIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampLinearTranslationLimitToRefPose_MetaData[];
#endif
		static void NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampLinearTranslationLimitToRefPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFreezeIncomingPoseOnStart_MetaData[];
#endif
		static void NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFreezeIncomingPoseOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransferBoneVelocities_MetaData[];
#endif
		static void NewProp_bTransferBoneVelocities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransferBoneVelocities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWorldGravity_MetaData[];
#endif
		static void NewProp_bOverrideWorldGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWorldGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldGeometry_MetaData[];
#endif
		static void NewProp_bEnableWorldGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[];
#endif
		static void NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDisableCollisionBetweenConstraintBodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlapChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseBoneRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoundsScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedBoundsScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentAppliedLinearAccClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentAppliedLinearAccClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearVelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentLinearVelScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearAccScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentLinearAccScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWorldGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideWorldGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridePhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Controller that simulates physics based on the physics asset of the skeletal mesh component\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Controller that simulates physics based on the physics asset of the skeletal mesh component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigidBody_Chaos>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bComponentSpaceSimulation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bComponentSpaceSimulation_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bComponentSpaceSimulation_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bComponentSpaceSimulation = { "bComponentSpaceSimulation", nullptr, (EPropertyFlags)0x0040000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bComponentSpaceSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bComponentSpaceSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bComponentSpaceSimulation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideSolverIterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Solver iteration settings overrides (defaults are set in the Physics Asset).\n\x09 * These can be varied in the runtime and set through blueprint (e.g., to increase\n\x09 * iterations during difficult movements).\n\x09 * Set to -1 to leave an individual iteration value at its Physics Asset value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Solver iteration settings overrides (defaults are set in the Physics Asset).\nThese can be varied in the runtime and set through blueprint (e.g., to increase\niterations during difficult movements).\nSet to -1 to leave an individual iteration value at its Physics Asset value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideSolverIterations = { "OverrideSolverIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, OverrideSolverIterations), Z_Construct_UScriptStruct_FSolverIterations, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideSolverIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideSolverIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09""Correct for linear tearing on bodies with all axes Locked.\n\x09\x09This only works if all axes linear translation are locked\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Correct for linear tearing on bodies with all axes Locked.\nThis only works if all axes linear translation are locked" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bClampLinearTranslationLimitToRefPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose = { "bClampLinearTranslationLimitToRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09When simulation starts, freeze incoming pose.\n\x09\x09This is useful for ragdolls, when we want the simulation to take over.\n\x09\x09It prevents non simulated bones from animating.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "When simulation starts, freeze incoming pose.\nThis is useful for ragdolls, when we want the simulation to take over.\nIt prevents non simulated bones from animating." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bFreezeIncomingPoseOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart = { "bFreezeIncomingPoseOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09\x09When simulation starts, transfer previous bone velocities (from animation)\n\x09\x09to make transition into simulation seamless.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When simulation starts, transfer previous bone velocities (from animation)\nto make transition into simulation seamless." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bTransferBoneVelocities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities = { "bTransferBoneVelocities", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bOverrideWorldGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity = { "bOverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// @todo(ccaulfield): Inline toggles don't seem to be working in our branch\n//UPROPERTY(EditAnywhere, Category = Settings, meta = (InlineEditConditionToggle))\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "@todo(ccaulfield): Inline toggles don't seem to be working in our branch\nUPROPERTY(EditAnywhere, Category = Settings, meta = (InlineEditConditionToggle))" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bEnableWorldGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry = { "bEnableWorldGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to allow collisions between two bodies joined by a constraint  */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Whether to allow collisions between two bodies joined by a constraint" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bForceDisableCollisionBetweenConstraintBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies = { "bForceDisableCollisionBetweenConstraintBodies", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What space to simulate the bodies in. This affects how velocities are generated */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "What space to simulate the bodies in. This affects how velocities are generated" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The channel we use to find static geometry to collide with */" },
		{ "editcondition", "bEnableWorldGeometry" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "The channel we use to find static geometry to collide with" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel = { "OverlapChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Matters if SimulationSpace is BaseBone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Matters if SimulationSpace is BaseBone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef = { "BaseBoneRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, BaseBoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09 * Scale of cached bounds (vs. actual bounds).\n\x09 * Increasing this may improve performance, but overlaps may not work as well.\n\x09 * (A value of 1.0 effectively disables cached bounds).\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Scale of cached bounds (vs. actual bounds).\nIncreasing this may improve performance, but overlaps may not work as well.\n(A value of 1.0 effectively disables cached bounds)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale = { "CachedBoundsScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, CachedBoundsScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Override gravity*/" },
		{ "editcondition", "bOverrideWorldGravity" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Override gravity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity = { "OverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, OverrideWorldGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Physics asset to use. If empty use the skeletal mesh's default physics asset */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Physics asset to use. If empty use the skeletal mesh's default physics asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset = { "OverridePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bComponentSpaceSimulation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideSolverIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_RigidBody_Chaos",
		sizeof(FAnimNode_RigidBody_Chaos),
		alignof(FAnimNode_RigidBody_Chaos),
		Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RigidBody_Chaos"), sizeof(FAnimNode_RigidBody_Chaos), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash() { return 1920630609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
