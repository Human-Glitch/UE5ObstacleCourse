// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdemyUE5ObstactleCourse/MovingObstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingObstacle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UDEMYUE5OBSTACTLECOURSE_API UClass* Z_Construct_UClass_AMovingObstacle();
	UDEMYUE5OBSTACTLECOURSE_API UClass* Z_Construct_UClass_AMovingObstacle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UdemyUE5ObstactleCourse();
// End Cross Module References
	void AMovingObstacle::StaticRegisterNativesAMovingObstacle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingObstacle);
	UClass* Z_Construct_UClass_AMovingObstacle_NoRegister()
	{
		return AMovingObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AMovingObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UdemyUE5ObstactleCourse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObstacle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingObstacle.h" },
		{ "ModuleRelativePath", "MovingObstacle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObstacle_Statics::NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovingObstacle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingObstacle, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingObstacle_Statics::NewProp_PlatformVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::NewProp_PlatformVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingObstacle_Statics::NewProp_MaxMoveDistance_MetaData[] = {
		{ "Category", "MovingObstacle" },
		{ "ModuleRelativePath", "MovingObstacle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp_MaxMoveDistance = { "MaxMoveDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMovingObstacle, MaxMoveDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingObstacle_Statics::NewProp_MaxMoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::NewProp_MaxMoveDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingObstacle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp_PlatformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp_MaxMoveDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingObstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingObstacle_Statics::ClassParams = {
		&AMovingObstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingObstacle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingObstacle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingObstacle()
	{
		if (!Z_Registration_Info_UClass_AMovingObstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingObstacle.OuterSingleton, Z_Construct_UClass_AMovingObstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingObstacle.OuterSingleton;
	}
	template<> UDEMYUE5OBSTACTLECOURSE_API UClass* StaticClass<AMovingObstacle>()
	{
		return AMovingObstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingObstacle);
	AMovingObstacle::~AMovingObstacle() {}
	struct Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5ObstacleCourse_UdemyUE5ObstactleCourse_Source_UdemyUE5ObstactleCourse_MovingObstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5ObstacleCourse_UdemyUE5ObstactleCourse_Source_UdemyUE5ObstactleCourse_MovingObstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingObstacle, AMovingObstacle::StaticClass, TEXT("AMovingObstacle"), &Z_Registration_Info_UClass_AMovingObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingObstacle), 1272569007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5ObstacleCourse_UdemyUE5ObstactleCourse_Source_UdemyUE5ObstactleCourse_MovingObstacle_h_2965001183(TEXT("/Script/UdemyUE5ObstactleCourse"),
		Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5ObstacleCourse_UdemyUE5ObstactleCourse_Source_UdemyUE5ObstactleCourse_MovingObstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5ObstacleCourse_UdemyUE5ObstactleCourse_Source_UdemyUE5ObstactleCourse_MovingObstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
