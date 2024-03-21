// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_LA01GameMode.h"
#include "GALAGA_USFX_LA01Pawn.h"

#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaRebastecimiento.h"
#include "Nave_Caza_Kamikaze.h"


AGALAGA_USFX_LA01GameMode::AGALAGA_USFX_LA01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_LA01Pawn::StaticClass();
	//NaveEnemiga01 = nullptr;
	//NaveEnemigaTrans = nullptr;
    //TANavesEnemigasCaza = TArray<ANaveEnemigaCaza*>();
    TANavesEnemigasCaza.Empty(); // Esto asegura que el TArray esté vacío al inicio
}



void AGALAGA_USFX_LA01GameMode::BeginPlay()
{
    Super::BeginPlay();
    //Set the game state to playing

    UWorld* const World = GetWorld();
    if (World != nullptr)
    {
        // Generar naves de caza
        for (int i = 0; i < 5; i++) {
            FVector ubicacionActual = FVector(-900.0f, -4500.0f + (i * 300.0f), 250.0f);
            ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActual, FRotator::ZeroRotator);
            TANavesEnemigasCaza.Add(NaveEnemigaCazaActual);
        }

        // Generar naves de transporte
        for (int j = 0; j < 5; j++) {
            FVector ubicacionActual = FVector(-900.0f, 1500.0f + (j * 300.0f), 250.0f);
            ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActual, FRotator::ZeroRotator);
            TANavesEnemigasTransporte.Add(NaveEnemigaTransporteActual);
        }

        // Generar naves de espía
        for (int k = 0; k < 5; k++) {
            FVector ubicacionActual = FVector(-950.0f, -2600.0f + (k * 300.0f), 300.0f);
            ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActual, FRotator::ZeroRotator);
            TANavesEnemigasEspia.Add(NaveEnemigaEspiaActual);
        }

        // Generar naves nodriza
        for (int l = 0; l < 5; l++) {
            FVector ubicacionActual = FVector(-1000.0f, -1000.0f + (l * 300.0f), 500.0f);
            ANaveEnemigaNodriza* NaveEnemigaNodrizaActual = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionActual, FRotator::ZeroRotator);
            TANavesEnemigasNodriza.Add(NaveEnemigaNodrizaActual);
        }

        // Generar naves de reabastecimiento
        for (int m = 0; m < 5; m++) {
            FVector ubicacionActual = FVector(-1100.0f, 3500.0f + (m * 300.0f), 300.0f);
            ANaveEnemigaRebastecimiento* NaveEnemigaRebastecimientoActual = World->SpawnActor<ANaveEnemigaRebastecimiento>(ubicacionActual, FRotator::ZeroRotator);
            TANavesEnemigasRebastecimiento.Add(NaveEnemigaRebastecimientoActual);
        }

        for (int n = 0; n < 5; n++) {
			FVector ubicacionActual = FVector(-1100.0f, 3500.0f +(n * 300.0f), 400.0f);
			ANave_Caza_Kamikaze* NaveCazaKamikazeActual = World->SpawnActor<ANave_Caza_Kamikaze>(ubicacionActual, FRotator::ZeroRotator);
			TANavesCazaKamikaze.Add(NaveCazaKamikazeActual);
		}
    }
}

void AGALAGA_USFX_LA01GameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

