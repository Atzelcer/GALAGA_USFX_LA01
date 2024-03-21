// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "Nave_Transporte_Invisible.generated.h"

/**
 * 
 */

UCLASS()
class GALAGA_USFX_LA01_API ANave_Transporte_Invisible : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
public:
	ANave_Transporte_Invisible();

protected:

	float DuracionInvisibilidad;  // Duracion de la invisibilidad en segundos
	float TiempoEntreApariciones;  // Tiempo minimo entre apariciones visibles
	bool EstaInvisible;  // Indica si la nave está actualmente invisible
	float DistanciaAparicionMax;  // Distancia maxima a la que puede aparecer la nave visible

	virtual void Tick(float DeltaTime) override;

public:

	FORCEINLINE float GetDuracionInvisibilidad() const { return DuracionInvisibilidad; }
	FORCEINLINE float GetTiempoEntreApariciones() const { return TiempoEntreApariciones; }
	FORCEINLINE bool GetEstaInvisible() const { return EstaInvisible; }
	FORCEINLINE float GetDistanciaAparicionMax() const { return DistanciaAparicionMax; }

	FORCEINLINE void SetDuracionInvisibilidad(float InDuracionInvisibilidad) { DuracionInvisibilidad = InDuracionInvisibilidad; }
	FORCEINLINE void SetTiempoEntreApariciones(float InTiempoEntreApariciones) { TiempoEntreApariciones = InTiempoEntreApariciones; }
	FORCEINLINE void SetEstaInvisible(bool bInEstaInvisible) { EstaInvisible = bInEstaInvisible; }
	FORCEINLINE void SetDistanciaAparicionMax(float InDistanciaAparicionMax) { DistanciaAparicionMax = InDistanciaAparicionMax; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
