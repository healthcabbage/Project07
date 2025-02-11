// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project07/RabbitPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRabbitPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PROJECT07_API UClass* Z_Construct_UClass_ARabbitPawn();
PROJECT07_API UClass* Z_Construct_UClass_ARabbitPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project07();
// End Cross Module References

// Begin Class ARabbitPawn
void ARabbitPawn::StaticRegisterNativesARabbitPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARabbitPawn);
UClass* Z_Construct_UClass_ARabbitPawn_NoRegister()
{
	return ARabbitPawn::StaticClass();
}
struct Z_Construct_UClass_ARabbitPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RabbitPawn.h" },
		{ "ModuleRelativePath", "RabbitPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RabbitCapsule_MetaData[] = {
		{ "Category", "RabbitPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RabbitPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RabbitPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RabbitCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARabbitPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPawn_Statics::NewProp_RabbitCapsule = { "RabbitCapsule", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPawn, RabbitCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RabbitCapsule_MetaData), NewProp_RabbitCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARabbitPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARabbitPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARabbitPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPawn_Statics::NewProp_RabbitCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARabbitPawn_Statics::NewProp_SpringArm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARabbitPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Project07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARabbitPawn_Statics::ClassParams = {
	&ARabbitPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARabbitPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ARabbitPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARabbitPawn()
{
	if (!Z_Registration_Info_UClass_ARabbitPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARabbitPawn.OuterSingleton, Z_Construct_UClass_ARabbitPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARabbitPawn.OuterSingleton;
}
template<> PROJECT07_API UClass* StaticClass<ARabbitPawn>()
{
	return ARabbitPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARabbitPawn);
ARabbitPawn::~ARabbitPawn() {}
// End Class ARabbitPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARabbitPawn, ARabbitPawn::StaticClass, TEXT("ARabbitPawn"), &Z_Registration_Info_UClass_ARabbitPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARabbitPawn), 1564001466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitPawn_h_484211027(TEXT("/Script/Project07"),
	Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
