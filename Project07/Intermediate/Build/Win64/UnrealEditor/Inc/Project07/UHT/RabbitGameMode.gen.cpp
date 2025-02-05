// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project07/RabbitGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRabbitGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
PROJECT07_API UClass* Z_Construct_UClass_ARabbitGameMode();
PROJECT07_API UClass* Z_Construct_UClass_ARabbitGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project07();
// End Cross Module References

// Begin Class ARabbitGameMode
void ARabbitGameMode::StaticRegisterNativesARabbitGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARabbitGameMode);
UClass* Z_Construct_UClass_ARabbitGameMode_NoRegister()
{
	return ARabbitGameMode::StaticClass();
}
struct Z_Construct_UClass_ARabbitGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RabbitGameMode.h" },
		{ "ModuleRelativePath", "RabbitGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARabbitGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARabbitGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARabbitGameMode_Statics::ClassParams = {
	&ARabbitGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARabbitGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARabbitGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARabbitGameMode()
{
	if (!Z_Registration_Info_UClass_ARabbitGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARabbitGameMode.OuterSingleton, Z_Construct_UClass_ARabbitGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARabbitGameMode.OuterSingleton;
}
template<> PROJECT07_API UClass* StaticClass<ARabbitGameMode>()
{
	return ARabbitGameMode::StaticClass();
}
ARabbitGameMode::ARabbitGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARabbitGameMode);
ARabbitGameMode::~ARabbitGameMode() {}
// End Class ARabbitGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARabbitGameMode, ARabbitGameMode::StaticClass, TEXT("ARabbitGameMode"), &Z_Registration_Info_UClass_ARabbitGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARabbitGameMode), 3705274987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitGameMode_h_2952234724(TEXT("/Script/Project07"),
	Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project07_Source_Project07_RabbitGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
