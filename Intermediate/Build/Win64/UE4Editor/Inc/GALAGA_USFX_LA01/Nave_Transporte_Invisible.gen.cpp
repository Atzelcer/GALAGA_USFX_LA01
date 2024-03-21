// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LA01/Nave_Transporte_Invisible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Transporte_Invisible() {}
// Cross Module References
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Transporte_Invisible_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Transporte_Invisible();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaTransporte();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LA01();
// End Cross Module References
	void ANave_Transporte_Invisible::StaticRegisterNativesANave_Transporte_Invisible()
	{
	}
	UClass* Z_Construct_UClass_ANave_Transporte_Invisible_NoRegister()
	{
		return ANave_Transporte_Invisible::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Transporte_Invisible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Transporte_Invisible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaTransporte,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LA01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Transporte_Invisible_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nave_Transporte_Invisible.h" },
		{ "ModuleRelativePath", "Nave_Transporte_Invisible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Transporte_Invisible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Transporte_Invisible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Transporte_Invisible_Statics::ClassParams = {
		&ANave_Transporte_Invisible::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Transporte_Invisible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Transporte_Invisible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Transporte_Invisible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Transporte_Invisible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Transporte_Invisible, 166862456);
	template<> GALAGA_USFX_LA01_API UClass* StaticClass<ANave_Transporte_Invisible>()
	{
		return ANave_Transporte_Invisible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Transporte_Invisible(Z_Construct_UClass_ANave_Transporte_Invisible, &ANave_Transporte_Invisible::StaticClass, TEXT("/Script/GALAGA_USFX_LA01"), TEXT("ANave_Transporte_Invisible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Transporte_Invisible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
