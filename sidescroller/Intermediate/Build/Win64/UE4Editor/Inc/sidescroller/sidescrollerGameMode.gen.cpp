// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sidescroller/sidescrollerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesidescrollerGameMode() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_AsidescrollerGameMode_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AsidescrollerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_sidescroller();
// End Cross Module References
	void AsidescrollerGameMode::StaticRegisterNativesAsidescrollerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AsidescrollerGameMode_NoRegister()
	{
		return AsidescrollerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AsidescrollerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AsidescrollerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_sidescroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsidescrollerGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of sidescrollerCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "sidescrollerGameMode.h" },
		{ "ModuleRelativePath", "sidescrollerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of sidescrollerCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AsidescrollerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AsidescrollerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AsidescrollerGameMode_Statics::ClassParams = {
		&AsidescrollerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AsidescrollerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AsidescrollerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AsidescrollerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AsidescrollerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AsidescrollerGameMode, 1732329996);
	template<> SIDESCROLLER_API UClass* StaticClass<AsidescrollerGameMode>()
	{
		return AsidescrollerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AsidescrollerGameMode(Z_Construct_UClass_AsidescrollerGameMode, &AsidescrollerGameMode::StaticClass, TEXT("/Script/sidescroller"), TEXT("AsidescrollerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsidescrollerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
