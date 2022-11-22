// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealHordeCoop/UnrealHordeCoopGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealHordeCoopGameModeBase() {}
// Cross Module References
	UNREALHORDECOOP_API UClass* Z_Construct_UClass_AUnrealHordeCoopGameModeBase_NoRegister();
	UNREALHORDECOOP_API UClass* Z_Construct_UClass_AUnrealHordeCoopGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealHordeCoop();
// End Cross Module References
	void AUnrealHordeCoopGameModeBase::StaticRegisterNativesAUnrealHordeCoopGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUnrealHordeCoopGameModeBase_NoRegister()
	{
		return AUnrealHordeCoopGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealHordeCoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealHordeCoopGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealHordeCoopGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealHordeCoopGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics::ClassParams = {
		&AUnrealHordeCoopGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealHordeCoopGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealHordeCoopGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealHordeCoopGameModeBase, 3913139347);
	template<> UNREALHORDECOOP_API UClass* StaticClass<AUnrealHordeCoopGameModeBase>()
	{
		return AUnrealHordeCoopGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealHordeCoopGameModeBase(Z_Construct_UClass_AUnrealHordeCoopGameModeBase, &AUnrealHordeCoopGameModeBase::StaticClass, TEXT("/Script/UnrealHordeCoop"), TEXT("AUnrealHordeCoopGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealHordeCoopGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
