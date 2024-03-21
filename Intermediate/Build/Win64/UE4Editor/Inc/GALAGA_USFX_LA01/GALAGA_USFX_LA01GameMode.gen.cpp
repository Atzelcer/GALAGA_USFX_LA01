// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_LA01/GALAGA_USFX_LA01GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGALAGA_USFX_LA01GameMode() {}
// Cross Module References
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_AGALAGA_USFX_LA01GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_LA01();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaCaza_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaTransporte_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaEspia_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaNodriza_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANaveEnemigaRebastecimiento_NoRegister();
	GALAGA_USFX_LA01_API UClass* Z_Construct_UClass_ANave_Caza_Kamikaze_NoRegister();
// End Cross Module References
	void AGALAGA_USFX_LA01GameMode::StaticRegisterNativesAGALAGA_USFX_LA01GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_NoRegister()
	{
		return AGALAGA_USFX_LA01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TANavesEnemigasCaza_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TANavesEnemigasCaza_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TANavesEnemigasCaza;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TANavesEnemigasTransporte_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TANavesEnemigasTransporte_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TANavesEnemigasTransporte;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TANavesEnemigasEspia_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TANavesEnemigasEspia_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TANavesEnemigasEspia;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TANavesEnemigasNodriza_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TANavesEnemigasNodriza_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TANavesEnemigasNodriza;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TANavesEnemigasRebastecimiento_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TANavesEnemigasRebastecimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TANavesEnemigasRebastecimiento;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TANavesCazaKamikaze_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TANavesCazaKamikaze_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TANavesCazaKamikaze;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_LA01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GALAGA_USFX_LA01GameMode.h" },
		{ "ModuleRelativePath", "GALAGA_USFX_LA01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasCaza_Inner = { "TANavesEnemigasCaza", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANaveEnemigaCaza_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasCaza_MetaData[] = {
		{ "Category", "NavesEnemigas" },
		{ "ModuleRelativePath", "GALAGA_USFX_LA01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasCaza = { "TANavesEnemigasCaza", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALAGA_USFX_LA01GameMode, TANavesEnemigasCaza), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasCaza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasCaza_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasTransporte_Inner = { "TANavesEnemigasTransporte", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANaveEnemigaTransporte_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasTransporte_MetaData[] = {
		{ "Category", "NavesEnemigas" },
		{ "ModuleRelativePath", "GALAGA_USFX_LA01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasTransporte = { "TANavesEnemigasTransporte", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALAGA_USFX_LA01GameMode, TANavesEnemigasTransporte), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasTransporte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasTransporte_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasEspia_Inner = { "TANavesEnemigasEspia", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANaveEnemigaEspia_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasEspia_MetaData[] = {
		{ "Category", "NavesEnemigas" },
		{ "ModuleRelativePath", "GALAGA_USFX_LA01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasEspia = { "TANavesEnemigasEspia", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALAGA_USFX_LA01GameMode, TANavesEnemigasEspia), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasEspia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasEspia_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasNodriza_Inner = { "TANavesEnemigasNodriza", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANaveEnemigaNodriza_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasNodriza_MetaData[] = {
		{ "Category", "NavesEnemigas" },
		{ "ModuleRelativePath", "GALAGA_USFX_LA01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasNodriza = { "TANavesEnemigasNodriza", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALAGA_USFX_LA01GameMode, TANavesEnemigasNodriza), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasNodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasNodriza_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasRebastecimiento_Inner = { "TANavesEnemigasRebastecimiento", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANaveEnemigaRebastecimiento_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasRebastecimiento_MetaData[] = {
		{ "Category", "NavesEnemigas" },
		{ "ModuleRelativePath", "GALAGA_USFX_LA01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasRebastecimiento = { "TANavesEnemigasRebastecimiento", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALAGA_USFX_LA01GameMode, TANavesEnemigasRebastecimiento), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasRebastecimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasRebastecimiento_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesCazaKamikaze_Inner = { "TANavesCazaKamikaze", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANave_Caza_Kamikaze_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesCazaKamikaze_MetaData[] = {
		{ "Category", "NavesEnemigas" },
		{ "ModuleRelativePath", "GALAGA_USFX_LA01GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesCazaKamikaze = { "TANavesCazaKamikaze", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALAGA_USFX_LA01GameMode, TANavesCazaKamikaze), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesCazaKamikaze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesCazaKamikaze_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasCaza_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasCaza,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasTransporte_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasTransporte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasEspia_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasEspia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasNodriza_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasNodriza,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasRebastecimiento_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesEnemigasRebastecimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesCazaKamikaze_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::NewProp_TANavesCazaKamikaze,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGALAGA_USFX_LA01GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::ClassParams = {
		&AGALAGA_USFX_LA01GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGALAGA_USFX_LA01GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGALAGA_USFX_LA01GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGALAGA_USFX_LA01GameMode, 1902640493);
	template<> GALAGA_USFX_LA01_API UClass* StaticClass<AGALAGA_USFX_LA01GameMode>()
	{
		return AGALAGA_USFX_LA01GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGALAGA_USFX_LA01GameMode(Z_Construct_UClass_AGALAGA_USFX_LA01GameMode, &AGALAGA_USFX_LA01GameMode::StaticClass, TEXT("/Script/GALAGA_USFX_LA01"), TEXT("AGALAGA_USFX_LA01GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGALAGA_USFX_LA01GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
