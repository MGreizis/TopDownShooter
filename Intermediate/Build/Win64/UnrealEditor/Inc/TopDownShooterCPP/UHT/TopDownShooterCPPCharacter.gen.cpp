// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownShooterCPP/TopDownShooterCPPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownShooterCPPCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
TOPDOWNSHOOTERCPP_API UClass* Z_Construct_UClass_ATopDownShooterCPPCharacter();
TOPDOWNSHOOTERCPP_API UClass* Z_Construct_UClass_ATopDownShooterCPPCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownShooterCPP();
// End Cross Module References

// Begin Class ATopDownShooterCPPCharacter
void ATopDownShooterCPPCharacter::StaticRegisterNativesATopDownShooterCPPCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownShooterCPPCharacter);
UClass* Z_Construct_UClass_ATopDownShooterCPPCharacter_NoRegister()
{
	return ATopDownShooterCPPCharacter::StaticClass();
}
struct Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownShooterCPPCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TopDownShooterCPPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownShooterCPPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownShooterCPPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownShooterCPPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownShooterCPPCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownShooterCPPCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownShooterCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::ClassParams = {
	&ATopDownShooterCPPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownShooterCPPCharacter()
{
	if (!Z_Registration_Info_UClass_ATopDownShooterCPPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownShooterCPPCharacter.OuterSingleton, Z_Construct_UClass_ATopDownShooterCPPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownShooterCPPCharacter.OuterSingleton;
}
template<> TOPDOWNSHOOTERCPP_API UClass* StaticClass<ATopDownShooterCPPCharacter>()
{
	return ATopDownShooterCPPCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownShooterCPPCharacter);
ATopDownShooterCPPCharacter::~ATopDownShooterCPPCharacter() {}
// End Class ATopDownShooterCPPCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownShooterCPPCharacter, ATopDownShooterCPPCharacter::StaticClass, TEXT("ATopDownShooterCPPCharacter"), &Z_Registration_Info_UClass_ATopDownShooterCPPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownShooterCPPCharacter), 1804248028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPCharacter_h_4217587718(TEXT("/Script/TopDownShooterCPP"),
	Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Unreal_Projects_TopDownShooterCPP_Source_TopDownShooterCPP_TopDownShooterCPPCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
