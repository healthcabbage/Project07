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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARabbitPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ARabbitPawn, ARabbitPawn::StaticClass, TEXT("ARabbitPawn"), &Z_Registration_Info_UClass_ARabbitPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARabbitPawn), 2519650343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitPawn_h_4215068661(TEXT("/Script/Project07"),
	Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
