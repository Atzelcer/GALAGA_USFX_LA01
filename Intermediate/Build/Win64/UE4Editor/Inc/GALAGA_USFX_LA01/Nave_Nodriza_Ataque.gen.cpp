// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LA01/Nave_Nodriza_Ataque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Nodriza_Ataque() {}
// Cross Module References
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Nodriza_Ataque_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Nodriza_Ataque();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaNodriza();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LA01();
// End Cross Module References
	void ANave_Nodriza_Ataque::StaticRegisterNativesANave_Nodriza_Ataque()
	{
	}
	UClass* Z_Construct_UClass_ANave_Nodriza_Ataque_NoRegister()
	{
		return ANave_Nodriza_Ataque::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Nodriza_Ataque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Nodriza_Ataque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaNodriza,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LA01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Nodriza_Ataque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Nodriza_Ataque.h" },
		{ "ModuleRelativePath", "Nave_Nodriza_Ataque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Nodriza_Ataque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Nodriza_Ataque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Nodriza_Ataque_Statics::ClassParams = {
		&ANave_Nodriza_Ataque::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Nodriza_Ataque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Nodriza_Ataque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Nodriza_Ataque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Nodriza_Ataque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Nodriza_Ataque, 3479361534);
	template<> GALAGA_USFX_LA01_API UClass* StaticClass<ANave_Nodriza_Ataque>()
	{
		return ANave_Nodriza_Ataque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Nodriza_Ataque(Z_Construct_UClass_ANave_Nodriza_Ataque, &ANave_Nodriza_Ataque::StaticClass, TEXT("/Script/GALAGA_USFX_LA01"), TEXT("ANave_Nodriza_Ataque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Nodriza_Ataque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
