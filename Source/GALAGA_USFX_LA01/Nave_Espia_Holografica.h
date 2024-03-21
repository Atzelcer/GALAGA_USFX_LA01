// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "Nave_Espia_Holografica.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANave_Espia_Holografica : public ANaveEnemigaEspia
{
	GENERATED_BODY()


public:

	float DuracionHolograma;  // Duración del holograma en segundos
	float TiempoEntreHologramas;  // Tiempo mínimo entre la activación de hologramas
	bool PuedeCrearHologramas;  // Indica si la nave puede actualmente crear hologramas
	float DistanciaCreacionHologramaMax;  // Distancia máxima a la que puede crear hologramas

	ANave_Espia_Holografica();

protected:

	virtual void Tick(float DeltaTime) override;
public:

	FORCEINLINE float GetDuracionHolograma() const { return DuracionHolograma; }
	FORCEINLINE float GetTiempoEntreHologramas() const { return TiempoEntreHologramas; }
	FORCEINLINE bool GetPuedeCrearHologramas() const { return PuedeCrearHologramas; }
	FORCEINLINE float GetDistanciaCreacionHologramaMax() const { return DistanciaCreacionHologramaMax; }

	FORCEINLINE void SetDuracionHolograma(float InDuracionHolograma) { DuracionHolograma = InDuracionHolograma; }
	FORCEINLINE void SetTiempoEntreHologramas(float InTiempoEntreHologramas) { TiempoEntreHologramas = InTiempoEntreHologramas; }
	FORCEINLINE void SetPuedeCrearHologramas(bool bInPuedeCrearHologramas) { PuedeCrearHologramas = bInPuedeCrearHologramas; }
	FORCEINLINE void SetDistanciaCreacionHologramaMax(float InDistanciaCreacionHologramaMax) { DistanciaCreacionHologramaMax = InDistanciaCreacionHologramaMax; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

	
};
