// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LA01/Nave_Caza_Kamikaze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Caza_Kamikaze() {}
// Cross Module References
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Caza_Kamikaze_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Caza_Kamikaze();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaCaza();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LA01();
// End Cross Module References
	void ANave_Caza_Kamikaze::StaticRegisterNativesANave_Caza_Kamikaze()
	{
	}
	UClass* Z_Construct_UClass_ANave_Caza_Kamikaze_NoRegister()
	{
		return ANave_Caza_Kamikaze::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Caza_Kamikaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Caza_Kamikaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LA01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Caza_Kamikaze_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Caza_Kamikaze.h" },
		{ "ModuleRelativePath", "Nave_Caza_Kamikaze.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Caza_Kamikaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Caza_Kamikaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Caza_Kamikaze_Statics::ClassParams = {
		&ANave_Caza_Kamikaze::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Caza_Kamikaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Caza_Kamikaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Caza_Kamikaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Caza_Kamikaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Caza_Kamikaze, 487348626);
	template<> GALAGA_USFX_LA01_API UClass* StaticClass<ANave_Caza_Kamikaze>()
	{
		return ANave_Caza_Kamikaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Caza_Kamikaze(Z_Construct_UClass_ANave_Caza_Kamikaze, &ANave_Caza_Kamikaze::StaticClass, TEXT("/Script/GALAGA_USFX_LA01"), TEXT("ANave_Caza_Kamikaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Caza_Kamikaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
