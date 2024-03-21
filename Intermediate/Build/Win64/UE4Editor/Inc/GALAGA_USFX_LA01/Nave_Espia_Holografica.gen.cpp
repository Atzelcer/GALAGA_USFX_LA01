// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LA01/Nave_Espia_Holografica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNave_Espia_Holografica() {}
// Cross Module References
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Espia_Holografica_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Espia_Holografica();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaEspia();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LA01();
// End Cross Module References
	void ANave_Espia_Holografica::StaticRegisterNativesANave_Espia_Holografica()
	{
	}
	UClass* Z_Construct_UClass_ANave_Espia_Holografica_NoRegister()
	{
		return ANave_Espia_Holografica::StaticClass();
	}
	struct Z_Construct_UClass_ANave_Espia_Holografica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANave_Espia_Holografica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LA01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANave_Espia_Holografica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nave_Espia_Holografica.h" },
		{ "ModuleRelativePath", "Nave_Espia_Holografica.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANave_Espia_Holografica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANave_Espia_Holografica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANave_Espia_Holografica_Statics::ClassParams = {
		&ANave_Espia_Holografica::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANave_Espia_Holografica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANave_Espia_Holografica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANave_Espia_Holografica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANave_Espia_Holografica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANave_Espia_Holografica, 1357387091);
	template<> GALAGA_USFX_LA01_API UClass* StaticClass<ANave_Espia_Holografica>()
	{
		return ANave_Espia_Holografica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANave_Espia_Holografica(Z_Construct_UClass_ANave_Espia_Holografica, &ANave_Espia_Holografica::StaticClass, TEXT("/Script/GALAGA_USFX_LA01"), TEXT("ANave_Espia_Holografica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANave_Espia_Holografica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
