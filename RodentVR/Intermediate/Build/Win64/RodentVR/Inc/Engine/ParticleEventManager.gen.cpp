// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleEventManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AParticleEventManager::StaticRegisterNativesAParticleEventManager()
	{
	}
	UClass* Z_Construct_UClass_AParticleEventManager_NoRegister()
	{
		return AParticleEventManager::StaticClass();
	}
	struct Z_Construct_UClass_AParticleEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticleEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleEventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Particles/ParticleEventManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEventManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticleEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticleEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticleEventManager_Statics::ClassParams = {
		&AParticleEventManager::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParticleEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParticleEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParticleEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParticleEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticleEventManager, 2703907592);
	template<> ENGINE_API UClass* StaticClass<AParticleEventManager>()
	{
		return AParticleEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticleEventManager(Z_Construct_UClass_AParticleEventManager, &AParticleEventManager::StaticClass, TEXT("/Script/Engine"), TEXT("AParticleEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
