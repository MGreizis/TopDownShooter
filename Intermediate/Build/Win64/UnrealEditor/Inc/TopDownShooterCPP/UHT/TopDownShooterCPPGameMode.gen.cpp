// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooterCPP/TopDownShooterCPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownShooterCPPGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOPDOWNSHOOTERCPP_API UClass* Z_Construct_UClass_ATopDownShooterCPPGameMode();
TOPDOWNSHOOTERCPP_API UClass* Z_Construct_UClass_ATopDownShooterCPPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownShooterCPP();
// End Cross Module References

// Begin Class ATopDownShooterCPPGameMode
void ATopDownShooterCPPGameMode::StaticRegisterNativesATopDownShooterCPPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownShooterCPPGameMode);
UClass* Z_Construct_UClass_ATopDownShooterCPPGameMode_NoRegister()
{
	return ATopDownShooterCPPGameMode::StaticClass();
}
struct Z_Construct_UClass_ATopDownShooterCPPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopDownShooterCPPGameMode.h" },
		{ "ModuleRelativePath", "TopDownShooterCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownShooterCPPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATopDownShooterCPPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooterCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCPPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownShooterCPPGameMode_Statics::ClassParams = {
	&ATopDownShooterCPPGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownShooterCPPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownShooterCPPGameMode()
{
	if (!Z_Registration_Info_UClass_ATopDownShooterCPPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownShooterCPPGameMode.OuterSingleton, Z_Construct_UClass_ATopDownShooterCPPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownShooterCPPGameMode.OuterSingleton;
}
template<> TOPDOWNSHOOTERCPP_API UClass* StaticClass<ATopDownShooterCPPGameMode>()
{
	return ATopDownShooterCPPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownShooterCPPGameMode);
ATopDownShooterCPPGameMode::~ATopDownShooterCPPGameMode() {}
// End Class ATopDownShooterCPPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownShooterCPPGameMode, ATopDownShooterCPPGameMode::StaticClass, TEXT("ATopDownShooterCPPGameMode"), &Z_Registration_Info_UClass_ATopDownShooterCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownShooterCPPGameMode), 116754220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPGameMode_h_1793881982(TEXT("/Script/TopDownShooterCPP"),
	Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
