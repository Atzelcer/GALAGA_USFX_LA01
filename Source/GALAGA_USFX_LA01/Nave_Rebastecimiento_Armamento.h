// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaRebastecimiento.h"
#include "Nave_Rebastecimiento_Armamento.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANave_Rebastecimiento_Armamento : public ANaveEnemigaRebastecimiento
{
	GENERATED_BODY()
	

public:
	ANave_Rebastecimiento_Armamento();

protected:

	float CapacidadReabastecimientoArmas;  // Cuánta munición puede proporcionar para recargar las armas
	float TasaRecargaArmas;  // Tasa de recarga de munición por segundo
	float DistanciaReabastecimientoArmasMax;  // Distancia máxima a la que puede realizar el reabastecimiento de armas
	bool PuedeReabastecerArmas;  // Indica si la nave puede actualmente reabastecer las armas

	virtual void Tick(float DeltaTime) override;
public:

	// Nuevos métodos GET/SET específicos para la clase hija
	FORCEINLINE float GetCapacidadReabastecimientoArmas() const { return CapacidadReabastecimientoArmas; }
	FORCEINLINE float GetTasaRecargaArmas() const { return TasaRecargaArmas; }
	FORCEINLINE float GetDistanciaReabastecimientoArmasMax() const { return DistanciaReabastecimientoArmasMax; }
	FORCEINLINE bool GetPuedeReabastecerArmas() const { return PuedeReabastecerArmas; }

	FORCEINLINE void SetCapacidadReabastecimientoArmas(float InCapacidadReabastecimientoArmas) { CapacidadReabastecimientoArmas = InCapacidadReabastecimientoArmas; }
	FORCEINLINE void SetTasaRecargaArmas(float InTasaRecargaArmas) { TasaRecargaArmas = InTasaRecargaArmas; }
	FORCEINLINE void SetDistanciaReabastecimientoArmasMax(float InDistanciaReabastecimientoArmasMax) { DistanciaReabastecimientoArmasMax = InDistanciaReabastecimientoArmasMax; }
	FORCEINLINE void SetPuedeReabastecerArmas(bool bInPuedeReabastecerArmas) { PuedeReabastecerArmas = bInPuedeReabastecerArmas; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
