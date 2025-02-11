// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RabbitPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT07_RabbitPawn_generated_h
#error "RabbitPawn.generated.h already included, missing '#pragma once' in RabbitPawn.h"
#endif
#define PROJECT07_RabbitPawn_generated_h

#define FID_Project07_Source_Project07_RabbitPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARabbitPawn(); \
	friend struct Z_Construct_UClass_ARabbitPawn_Statics; \
public: \
	DECLARE_CLASS(ARabbitPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project07"), NO_API) \
	DECLARE_SERIALIZER(ARabbitPawn)


#define FID_Project07_Source_Project07_RabbitPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARabbitPawn(ARabbitPawn&&); \
	ARabbitPawn(const ARabbitPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARabbitPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARabbitPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARabbitPawn) \
	NO_API virtual ~ARabbitPawn();


#define FID_Project07_Source_Project07_RabbitPawn_h_12_PROLOG
#define FID_Project07_Source_Project07_RabbitPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project07_Source_Project07_RabbitPawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project07_Source_Project07_RabbitPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT07_API UClass* StaticClass<class ARabbitPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project07_Source_Project07_RabbitPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
