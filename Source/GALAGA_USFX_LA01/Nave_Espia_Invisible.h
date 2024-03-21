// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "Nave_Espia_Invisible.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANave_Espia_Invisible : public ANaveEnemigaEspia
{
	GENERATED_BODY()


public:
	ANave_Espia_Invisible();

protected:

	float DuracionInvisibilidad;  // Duración de la invisibilidad en segundos
	float TiempoEntreInvisibilidades;  // Tiempo mínimo entre la activación de la invisibilidad
	bool PuedeInvisibilizarse;  // Indica si la nave puede actualmente volverse invisible
	float DistanciaInvisibilidadMax;  // Distancia máxima a la que puede volverse invisible

public:

	virtual void Tick(float DeltaTime) override;

public:

	FORCEINLINE float GetDuracionInvisibilidad() const { return DuracionInvisibilidad; }
	FORCEINLINE float GetTiempoEntreInvisibilidades() const { return TiempoEntreInvisibilidades; }
	FORCEINLINE bool GetPuedeInvisibilizarse() const { return PuedeInvisibilizarse; }
	FORCEINLINE float GetDistanciaInvisibilidadMax() const { return DistanciaInvisibilidadMax; }

	FORCEINLINE void SetDuracionInvisibilidad(float InDuracionInvisibilidad) { DuracionInvisibilidad = InDuracionInvisibilidad; }
	FORCEINLINE void SetTiempoEntreInvisibilidades(float InTiempoEntreInvisibilidades) { TiempoEntreInvisibilidades = InTiempoEntreInvisibilidades; }
	FORCEINLINE void SetPuedeInvisibilizarse(bool bInPuedeInvisibilizarse) { PuedeInvisibilizarse = bInPuedeInvisibilizarse; }
	FORCEINLINE void SetDistanciaInvisibilidadMax(float InDistanciaInvisibilidadMax) { DistanciaInvisibilidadMax = InDistanciaInvisibilidadMax; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

	
};
