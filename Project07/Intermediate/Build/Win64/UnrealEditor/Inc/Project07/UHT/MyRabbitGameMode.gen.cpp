// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project07/MyRabbitGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyRabbitGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
PROJECT07_API UClass* Z_Construct_UClass_AMyRabbitGameMode();
PROJECT07_API UClass* Z_Construct_UClass_AMyRabbitGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project07();
// End Cross Module References

// Begin Class AMyRabbitGameMode
void AMyRabbitGameMode::StaticRegisterNativesAMyRabbitGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyRabbitGameMode);
UClass* Z_Construct_UClass_AMyRabbitGameMode_NoRegister()
{
	return AMyRabbitGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyRabbitGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyRabbitGameMode.h" },
		{ "ModuleRelativePath", "MyRabbitGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRabbitGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyRabbitGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Project07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRabbitGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyRabbitGameMode_Statics::ClassParams = {
	&AMyRabbitGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyRabbitGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyRabbitGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyRabbitGameMode()
{
	if (!Z_Registration_Info_UClass_AMyRabbitGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyRabbitGameMode.OuterSingleton, Z_Construct_UClass_AMyRabbitGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyRabbitGameMode.OuterSingleton;
}
template<> PROJECT07_API UClass* StaticClass<AMyRabbitGameMode>()
{
	return AMyRabbitGameMode::StaticClass();
}
AMyRabbitGameMode::AMyRabbitGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyRabbitGameMode);
AMyRabbitGameMode::~AMyRabbitGameMode() {}
// End Class AMyRabbitGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project07_Source_Project07_MyRabbitGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyRabbitGameMode, AMyRabbitGameMode::StaticClass, TEXT("AMyRabbitGameMode"), &Z_Registration_Info_UClass_AMyRabbitGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyRabbitGameMode), 2211127953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project07_Source_Project07_MyRabbitGameMode_h_2338618487(TEXT("/Script/Project07"),
	Z_CompiledInDeferFile_FID_Project07_Source_Project07_MyRabbitGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project07_Source_Project07_MyRabbitGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
