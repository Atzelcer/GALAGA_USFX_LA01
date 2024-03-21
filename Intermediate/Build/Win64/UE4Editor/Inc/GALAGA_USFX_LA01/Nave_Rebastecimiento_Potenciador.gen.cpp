// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LA01/Nave_Rebastecimiento_Potenciador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Rebastecimiento_Potenciador() {}
// Cross Module References
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Rebastecimiento_Potenciador();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaRebastecimiento();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LA01();
// End Cross Module References
	void ANave_Rebastecimiento_Potenciador::StaticRegisterNativesANave_Rebastecimiento_Potenciador()
	{
	}
	UClass* Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_NoRegister()
	{
		return ANave_Rebastecimiento_Potenciador::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaRebastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LA01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nave_Rebastecimiento_Potenciador.h" },
		{ "ModuleRelativePath", "Nave_Rebastecimiento_Potenciador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Rebastecimiento_Potenciador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics::ClassParams = {
		&ANave_Rebastecimiento_Potenciador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Rebastecimiento_Potenciador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Rebastecimiento_Potenciador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Rebastecimiento_Potenciador, 3407426265);
	template<> GALAGA_USFX_LA01_API UClass* StaticClass<ANave_Rebastecimiento_Potenciador>()
	{
		return ANave_Rebastecimiento_Potenciador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Rebastecimiento_Potenciador(Z_Construct_UClass_ANave_Rebastecimiento_Potenciador, &ANave_Rebastecimiento_Potenciador::StaticClass, TEXT("/Script/GALAGA_USFX_LA01"), TEXT("ANave_Rebastecimiento_Potenciador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Rebastecimiento_Potenciador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
