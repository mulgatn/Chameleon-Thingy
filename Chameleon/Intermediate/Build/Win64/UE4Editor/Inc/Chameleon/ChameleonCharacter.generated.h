// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAMELEON_ChameleonCharacter_generated_h
#error "ChameleonCharacter.generated.h already included, missing '#pragma once' in ChameleonCharacter.h"
#endif
#define CHAMELEON_ChameleonCharacter_generated_h

#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_SPARSE_DATA
#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_RPC_WRAPPERS
#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChameleonCharacter(); \
	friend struct Z_Construct_UClass_AChameleonCharacter_Statics; \
public: \
	DECLARE_CLASS(AChameleonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chameleon"), NO_API) \
	DECLARE_SERIALIZER(AChameleonCharacter)


#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAChameleonCharacter(); \
	friend struct Z_Construct_UClass_AChameleonCharacter_Statics; \
public: \
	DECLARE_CLASS(AChameleonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chameleon"), NO_API) \
	DECLARE_SERIALIZER(AChameleonCharacter)


#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChameleonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChameleonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChameleonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChameleonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChameleonCharacter(AChameleonCharacter&&); \
	NO_API AChameleonCharacter(const AChameleonCharacter&); \
public:


#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChameleonCharacter(AChameleonCharacter&&); \
	NO_API AChameleonCharacter(const AChameleonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChameleonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChameleonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChameleonCharacter)


#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AChameleonCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AChameleonCharacter, FollowCamera); }


#define Chameleon_Source_Chameleon_ChameleonCharacter_h_9_PROLOG
#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_SPARSE_DATA \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_RPC_WRAPPERS \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_INCLASS \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chameleon_Source_Chameleon_ChameleonCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_SPARSE_DATA \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Chameleon_Source_Chameleon_ChameleonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAMELEON_API UClass* StaticClass<class AChameleonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chameleon_Source_Chameleon_ChameleonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
