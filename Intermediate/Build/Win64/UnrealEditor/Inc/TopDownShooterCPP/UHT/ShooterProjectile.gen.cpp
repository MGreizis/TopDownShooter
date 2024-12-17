// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooterCPP/ShooterProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TOPDOWNSHOOTERCPP_API UClass* Z_Construct_UClass_AShooterProjectile();
TOPDOWNSHOOTERCPP_API UClass* Z_Construct_UClass_AShooterProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownShooterCPP();
// End Cross Module References

// Begin Class AShooterProjectile
void AShooterProjectile::StaticRegisterNativesAShooterProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterProjectile);
UClass* Z_Construct_UClass_AShooterProjectile_NoRegister()
{
	return AShooterProjectile::StaticClass();
}
struct Z_Construct_UClass_AShooterProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ShooterProjectile.h" },
		{ "ModuleRelativePath", "ShooterProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "ShooterProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "ShooterProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterProjectile_Statics::NewProp_ProjectileMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShooterProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooterCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterProjectile_Statics::ClassParams = {
	&AShooterProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShooterProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterProjectile()
{
	if (!Z_Registration_Info_UClass_AShooterProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterProjectile.OuterSingleton, Z_Construct_UClass_AShooterProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterProjectile.OuterSingleton;
}
template<> TOPDOWNSHOOTERCPP_API UClass* StaticClass<AShooterProjectile>()
{
	return AShooterProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterProjectile);
AShooterProjectile::~AShooterProjectile() {}
// End Class AShooterProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_ShooterProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterProjectile, AShooterProjectile::StaticClass, TEXT("AShooterProjectile"), &Z_Registration_Info_UClass_AShooterProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterProjectile), 1426216599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_ShooterProjectile_h_1419588853(TEXT("/Script/TopDownShooterCPP"),
	Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_ShooterProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_ShooterProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
