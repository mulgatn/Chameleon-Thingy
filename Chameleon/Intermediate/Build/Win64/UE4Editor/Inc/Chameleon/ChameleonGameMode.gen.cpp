// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chameleon/ChameleonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChameleonGameMode() {}
// Cross Module References
	CHAMELEON_API UClass* Z_Construct_UClass_AChameleonGameMode_NoRegister();
	CHAMELEON_API UClass* Z_Construct_UClass_AChameleonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Chameleon();
// End Cross Module References
	void AChameleonGameMode::StaticRegisterNativesAChameleonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AChameleonGameMode_NoRegister()
	{
		return AChameleonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChameleonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChameleonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Chameleon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChameleonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ChameleonGameMode.h" },
		{ "ModuleRelativePath", "ChameleonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChameleonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChameleonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChameleonGameMode_Statics::ClassParams = {
		&AChameleonGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChameleonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChameleonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChameleonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChameleonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChameleonGameMode, 1953737742);
	template<> CHAMELEON_API UClass* StaticClass<AChameleonGameMode>()
	{
		return AChameleonGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChameleonGameMode(Z_Construct_UClass_AChameleonGameMode, &AChameleonGameMode::StaticClass, TEXT("/Script/Chameleon"), TEXT("AChameleonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChameleonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
