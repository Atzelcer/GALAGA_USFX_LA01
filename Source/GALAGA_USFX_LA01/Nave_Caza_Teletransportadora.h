// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "Nave_Caza_Teletransportadora.generated.h"

UCLASS()
class GALAGA_USFX_LA01_API ANave_Caza_Teletransportadora : public ANaveEnemigaCaza
{
	GENERATED_BODY()

public:
	ANave_Caza_Teletransportadora();
protected:

	float TiempoEntreTeletransportes;  // Tiempo mínimo entre teletransportes
	float DistanciaTeletransporteMax;  // Distancia máxima de teletransporte
	bool PuedeTeletransportarse;  // Indica si la nave puede actualmente teletransportarse

	virtual void Tick(float DeltaTime) override;
public:

	FORCEINLINE float GetTiempoEntreTeletransportes() const { return TiempoEntreTeletransportes; }
	FORCEINLINE float GetDistanciaTeletransporteMax() const { return DistanciaTeletransporteMax; }
	FORCEINLINE bool GetPuedeTeletransportarse() const { return PuedeTeletransportarse; }

	FORCEINLINE void SetTiempoEntreTeletransportes(float InTiempoEntreTeletransportes) { TiempoEntreTeletransportes = InTiempoEntreTeletransportes; }
	FORCEINLINE void SetDistanciaTeletransporteMax(float InDistanciaTeletransporteMax) { DistanciaTeletransporteMax = InDistanciaTeletransporteMax; }
	FORCEINLINE void SetPuedeTeletransportarse(bool bInPuedeTeletransportarse) { PuedeTeletransportarse = bInPuedeTeletransportarse; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

	
};
