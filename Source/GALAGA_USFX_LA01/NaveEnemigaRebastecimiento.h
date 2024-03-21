// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaRebastecimiento.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANaveEnemigaRebastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:

	float TasaReabastecimiento;  // Cuanta energia puede proporcionar por segundo
	float DistanciaReabastecimientoMax;  // Distancia máxima a la que puede realizar el reabastecimiento
	float TiempoEntreDespliegues;  // Tiempo minimo entre despliegues de cargueros

	virtual void Tick(float DeltaTime) override;

public:

	ANaveEnemigaRebastecimiento();

	FORCEINLINE float GetTasaReabastecimiento() const { return TasaReabastecimiento; }
	FORCEINLINE float GetDistanciaReabastecimientoMax() const { return DistanciaReabastecimientoMax; }
	FORCEINLINE float GetTiempoEntreDespliegues() const { return TiempoEntreDespliegues; }

	FORCEINLINE void SetTasaReabastecimiento(float InTasaReabastecimiento) { TasaReabastecimiento = InTasaReabastecimiento; }
	FORCEINLINE void SetDistanciaReabastecimientoMax(float InDistanciaReabastecimientoMax) { DistanciaReabastecimientoMax = InDistanciaReabastecimientoMax; }
	FORCEINLINE void SetTiempoEntreDespliegues(float InTiempoEntreDespliegues) { TiempoEntreDespliegues = InTiempoEntreDespliegues; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);


};
