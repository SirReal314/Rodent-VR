// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/StopConditions/StopConditionsChecker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStopConditionsChecker() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UStopConditionsChecker_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UStopConditionsChecker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition_NoRegister();
// End Cross Module References
	void UStopConditionsChecker::StaticRegisterNativesUStopConditionsChecker()
	{
	}
	UClass* Z_Construct_UClass_UStopConditionsChecker_NoRegister()
	{
		return UStopConditionsChecker::StaticClass();
	}
	struct Z_Construct_UClass_UStopConditionsChecker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StopConditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopConditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStopConditionsChecker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopConditionsChecker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StopConditions/StopConditionsChecker.h" },
		{ "ModuleRelativePath", "Private/StopConditions/StopConditionsChecker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopConditionsChecker_Statics::NewProp_StopConditions_MetaData[] = {
		{ "ModuleRelativePath", "Private/StopConditions/StopConditionsChecker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStopConditionsChecker_Statics::NewProp_StopConditions = { "StopConditions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStopConditionsChecker, StopConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStopConditionsChecker_Statics::NewProp_StopConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStopConditionsChecker_Statics::NewProp_StopConditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStopConditionsChecker_Statics::NewProp_StopConditions_Inner = { "StopConditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStopCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStopConditionsChecker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopConditionsChecker_Statics::NewProp_StopConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopConditionsChecker_Statics::NewProp_StopConditions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStopConditionsChecker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStopConditionsChecker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStopConditionsChecker_Statics::ClassParams = {
		&UStopConditionsChecker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStopConditionsChecker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStopConditionsChecker_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStopConditionsChecker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStopConditionsChecker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStopConditionsChecker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStopConditionsChecker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStopConditionsChecker, 1687031869);
	template<> RODENTVR_API UClass* StaticClass<UStopConditionsChecker>()
	{
		return UStopConditionsChecker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStopConditionsChecker(Z_Construct_UClass_UStopConditionsChecker, &UStopConditionsChecker::StaticClass, TEXT("/Script/RodentVR"), TEXT("UStopConditionsChecker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStopConditionsChecker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
