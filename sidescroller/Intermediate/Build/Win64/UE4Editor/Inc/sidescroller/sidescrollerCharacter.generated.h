// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_sidescrollerCharacter_generated_h
#error "sidescrollerCharacter.generated.h already included, missing '#pragma once' in sidescrollerCharacter.h"
#endif
#define SIDESCROLLER_sidescrollerCharacter_generated_h

#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_SPARSE_DATA
#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_RPC_WRAPPERS
#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAsidescrollerCharacter(); \
	friend struct Z_Construct_UClass_AsidescrollerCharacter_Statics; \
public: \
	DECLARE_CLASS(AsidescrollerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/sidescroller"), NO_API) \
	DECLARE_SERIALIZER(AsidescrollerCharacter)


#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAsidescrollerCharacter(); \
	friend struct Z_Construct_UClass_AsidescrollerCharacter_Statics; \
public: \
	DECLARE_CLASS(AsidescrollerCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/sidescroller"), NO_API) \
	DECLARE_SERIALIZER(AsidescrollerCharacter)


#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AsidescrollerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AsidescrollerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AsidescrollerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AsidescrollerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AsidescrollerCharacter(AsidescrollerCharacter&&); \
	NO_API AsidescrollerCharacter(const AsidescrollerCharacter&); \
public:


#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AsidescrollerCharacter(AsidescrollerCharacter&&); \
	NO_API AsidescrollerCharacter(const AsidescrollerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AsidescrollerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AsidescrollerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AsidescrollerCharacter)


#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AsidescrollerCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AsidescrollerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AsidescrollerCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AsidescrollerCharacter, IdleAnimation); }


#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_19_PROLOG
#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_SPARSE_DATA \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_RPC_WRAPPERS \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_INCLASS \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_SPARSE_DATA \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_INCLASS_NO_PURE_DECLS \
	sidescroller_Source_sidescroller_sidescrollerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AsidescrollerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID sidescroller_Source_sidescroller_sidescrollerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
