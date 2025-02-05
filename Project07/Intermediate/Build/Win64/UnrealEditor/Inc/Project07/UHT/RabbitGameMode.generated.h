// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RabbitGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT07_RabbitGameMode_generated_h
#error "RabbitGameMode.generated.h already included, missing '#pragma once' in RabbitGameMode.h"
#endif
#define PROJECT07_RabbitGameMode_generated_h

#define FID_Project07_Source_Project07_RabbitGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARabbitGameMode(); \
	friend struct Z_Construct_UClass_ARabbitGameMode_Statics; \
public: \
	DECLARE_CLASS(ARabbitGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project07"), NO_API) \
	DECLARE_SERIALIZER(ARabbitGameMode)


#define FID_Project07_Source_Project07_RabbitGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARabbitGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARabbitGameMode(ARabbitGameMode&&); \
	ARabbitGameMode(const ARabbitGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARabbitGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARabbitGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARabbitGameMode) \
	NO_API virtual ~ARabbitGameMode();


#define FID_Project07_Source_Project07_RabbitGameMode_h_12_PROLOG
#define FID_Project07_Source_Project07_RabbitGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project07_Source_Project07_RabbitGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project07_Source_Project07_RabbitGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT07_API UClass* StaticClass<class ARabbitGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project07_Source_Project07_RabbitGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
