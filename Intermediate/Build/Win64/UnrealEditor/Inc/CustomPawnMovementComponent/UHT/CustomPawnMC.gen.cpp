// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomPawnMovementComponent/Public/CustomPawnMC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPawnMC() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMPAWNMOVEMENTCOMPONENT_API UClass* Z_Construct_UClass_UCustomPawnMC();
	CUSTOMPAWNMOVEMENTCOMPONENT_API UClass* Z_Construct_UClass_UCustomPawnMC_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_CustomPawnMovementComponent();
// End Cross Module References
	DEFINE_FUNCTION(UCustomPawnMC::execLaunchPawn)
	{
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity);
		P_GET_UBOOL(Z_Param_bXYOverride);
		P_GET_UBOOL(Z_Param_bZOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LaunchPawn(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride);
		P_NATIVE_END;
	}
	void UCustomPawnMC::StaticRegisterNativesUCustomPawnMC()
	{
		UClass* Class = UCustomPawnMC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LaunchPawn", &UCustomPawnMC::execLaunchPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics
	{
		struct CustomPawnMC_eventLaunchPawn_Parms
		{
			FVector LaunchVelocity;
			bool bXYOverride;
			bool bZOverride;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static void NewProp_bXYOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bXYOverride;
		static void NewProp_bZOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomPawnMC_eventLaunchPawn_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bXYOverride_SetBit(void* Obj)
	{
		((CustomPawnMC_eventLaunchPawn_Parms*)Obj)->bXYOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bXYOverride = { "bXYOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomPawnMC_eventLaunchPawn_Parms), &Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bXYOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bZOverride_SetBit(void* Obj)
	{
		((CustomPawnMC_eventLaunchPawn_Parms*)Obj)->bZOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bZOverride = { "bZOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomPawnMC_eventLaunchPawn_Parms), &Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bZOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_LaunchVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bXYOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::NewProp_bZOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPawnMC, nullptr, "LaunchPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::CustomPawnMC_eventLaunchPawn_Parms), Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPawnMC_LaunchPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomPawnMC_LaunchPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomPawnMC);
	UClass* Z_Construct_UClass_UCustomPawnMC_NoRegister()
	{
		return UCustomPawnMC::StaticClass();
	}
	struct Z_Construct_UClass_UCustomPawnMC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainHorizontalGroundVelocity_MetaData[];
#endif
		static void NewProp_bMaintainHorizontalGroundVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainHorizontalGroundVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFloorNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFloorNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsInteraction_MetaData[];
#endif
		static void NewProp_bEnablePhysicsInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitForceScaledToMass_MetaData[];
#endif
		static void NewProp_bHitForceScaledToMass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitForceScaledToMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchForceFactorModified_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TouchForceFactorModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomPawnMC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomPawnMovementComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomPawnMC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomPawnMC_LaunchPawn, "LaunchPawn" }, // 2272824099
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomPawnMC.h" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bMaintainHorizontalGroundVelocity_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	void Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bMaintainHorizontalGroundVelocity_SetBit(void* Obj)
	{
		((UCustomPawnMC*)Obj)->bMaintainHorizontalGroundVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bMaintainHorizontalGroundVelocity = { "bMaintainHorizontalGroundVelocity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomPawnMC), &Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bMaintainHorizontalGroundVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bMaintainHorizontalGroundVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bMaintainHorizontalGroundVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_FallScale_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_FallScale = { "FallScale", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomPawnMC, FallScale), METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_FallScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_FallScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	void Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UCustomPawnMC*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomPawnMC), &Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CurrentFloorNormal_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CurrentFloorNormal = { "CurrentFloorNormal", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomPawnMC, CurrentFloorNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CurrentFloorNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CurrentFloorNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnablePhysicsInteraction_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	void Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnablePhysicsInteraction_SetBit(void* Obj)
	{
		((UCustomPawnMC*)Obj)->bEnablePhysicsInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnablePhysicsInteraction = { "bEnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomPawnMC), &Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnablePhysicsInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnablePhysicsInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnablePhysicsInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bHitForceScaledToMass_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "Comment", "/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
		{ "ToolTip", "If enabled, the TouchForceFactor is applied per kg mass of the affected object." },
	};
#endif
	void Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bHitForceScaledToMass_SetBit(void* Obj)
	{
		((UCustomPawnMC*)Obj)->bHitForceScaledToMass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bHitForceScaledToMass = { "bHitForceScaledToMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomPawnMC), &Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bHitForceScaledToMass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bHitForceScaledToMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bHitForceScaledToMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_TouchForceFactorModified_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_TouchForceFactorModified = { "TouchForceFactorModified", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomPawnMC, TouchForceFactorModified), METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_TouchForceFactorModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_TouchForceFactorModified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Comment", "/**The Updated component*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
		{ "ToolTip", "The Updated component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomPawnMC, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "CustomPawnMC" },
		{ "ModuleRelativePath", "Public/CustomPawnMC.h" },
	};
#endif
	void Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((UCustomPawnMC*)Obj)->bEnableDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomPawnMC), &Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnableDebug_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomPawnMC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bMaintainHorizontalGroundVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_FallScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CurrentFloorNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnablePhysicsInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bHitForceScaledToMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_TouchForceFactorModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPawnMC_Statics::NewProp_bEnableDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomPawnMC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomPawnMC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomPawnMC_Statics::ClassParams = {
		&UCustomPawnMC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomPawnMC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomPawnMC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPawnMC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomPawnMC()
	{
		if (!Z_Registration_Info_UClass_UCustomPawnMC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomPawnMC.OuterSingleton, Z_Construct_UClass_UCustomPawnMC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomPawnMC.OuterSingleton;
	}
	template<> CUSTOMPAWNMOVEMENTCOMPONENT_API UClass* StaticClass<UCustomPawnMC>()
	{
		return UCustomPawnMC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPawnMC);
	UCustomPawnMC::~UCustomPawnMC() {}
	struct Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CustomPawnMC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CustomPawnMC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomPawnMC, UCustomPawnMC::StaticClass, TEXT("UCustomPawnMC"), &Z_Registration_Info_UClass_UCustomPawnMC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomPawnMC), 2992833110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CustomPawnMC_h_2411242367(TEXT("/Script/CustomPawnMovementComponent"),
		Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CustomPawnMC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AQ_Plugins_CustomPawnMovementComponent_Source_CustomPawnMovementComponent_Public_CustomPawnMC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
