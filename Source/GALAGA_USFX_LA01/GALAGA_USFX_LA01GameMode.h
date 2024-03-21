// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GALAGA_USFX_LA01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;
class ANaveEnemigaEspia;
class ANaveEnemigaNodriza;
class ANaveEnemigaRebastecimiento;
class ANave_Caza_Kamikaze;
class ANave_Espia_Invisible;
class ANave_Nodriza_Ataque;
class ANave_Rebastecimiento_Armamento;
class ANave_Transporte_Elite;


UCLASS(MinimalAPI)
class AGALAGA_USFX_LA01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFX_LA01GameMode();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavesEnemigas")
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavesEnemigas")
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavesEnemigas")
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavesEnemigas")
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavesEnemigas")
	TArray<ANaveEnemigaRebastecimiento*> TANavesEnemigasRebastecimiento;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavesEnemigas")
	TArray<ANave_Caza_Kamikaze*> TANavesCazaKamikaze;
	
	
	ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
	ANaveEnemigaRebastecimiento* NaveEnemigaRebastecimiento01;
	ANave_Caza_Kamikaze* NaveCazaKamikaze01;

//public:
//	TArray<ANaveEnemiga*> TANavesEnemigas;
//	//TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
//	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
//	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
//	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
//	TArray<ANaveEnemigaRebastecimiento*> TANavesEnemigasRebastecimiento;
//	TArray<ANave_Caza_Kamikaze*> TANavesCazaKamikaze;


};



