// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPawnMovementComponent/Public/CMCInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMCInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CUSTOMPAWNMOVEMENTCOMPONENT_API UClass* Z_Construct_UClass_UCMCInterface();
	CUSTOMPAWNMOVEMENTCOMPONENT_API UClass* Z_Construct_UClass_UCMCInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomPawnMovementComponent();
// End Cross Module References
	void UCMCInterface::StaticRegisterNativesUCMCInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCMCInterface);
	UClass* Z_Construct_UClass_UCMCInterface_NoRegister()
	{
		return UCMCInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCMCInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCMCInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomPawnMovementComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMCInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CMCInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCMCInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICMCInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCMCInterface_Statics::ClassParams = {
		&UCMCInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCMCInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCMCInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCMCInterface()
	{
		if (!Z_Registration_Info_UClass_UCMCInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCMCInterface.OuterSingleton, Z_Construct_UClass_UCMCInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCMCInterface.OuterSingleton;
	}
	template<> CUSTOMPAWNMOVEMENTCOMPONENT_API UClass* StaticClass<UCMCInterface>()
	{
		return UCMCInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCMCInterface);
	UCMCInterface::~UCMCInterface() {}
	struct Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CMCInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CMCInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCMCInterface, UCMCInterface::StaticClass, TEXT("UCMCInterface"), &Z_Registration_Info_UClass_UCMCInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCMCInterface), 3906774985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CMCInterface_h_1650597742(TEXT("/Script/CustomPawnMovementComponent"),
		Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CMCInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CMCInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
