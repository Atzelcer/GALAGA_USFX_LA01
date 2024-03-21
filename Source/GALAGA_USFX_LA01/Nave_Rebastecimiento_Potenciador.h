// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaRebastecimiento.h"
#include "Nave_Rebastecimiento_Potenciador.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LA01_API ANave_Rebastecimiento_Potenciador : public ANaveEnemigaRebastecimiento
{
	GENERATED_BODY()

public:
	ANave_Rebastecimiento_Potenciador();

protected:

	float PotenciacionDuracion;  // DuraciOn de la potenciaciOn en segundos
	float PotenciacionVelocidad;  // Incremento de velocidad durante la potenciaciOn
	float PotenciacionDano;  // Incremento de daño durante la potenciaciOn
	float DistanciaPotenciacionMax;  // Distancia maxima a la que puede realizar la potenciaciOn
	bool PuedePotenciar;  // Indica si la nave puede actualmente realizar la potenciacion

	virtual void Tick(float DeltaTime) override;

public:

	// Nuevos métodos GET/SET específicos para la clase hija
	FORCEINLINE float GetPotenciacionDuracion() const { return PotenciacionDuracion; }
	FORCEINLINE float GetPotenciacionVelocidad() const { return PotenciacionVelocidad; }
	FORCEINLINE float GetPotenciacionDano() const { return PotenciacionDano; }
	FORCEINLINE float GetDistanciaPotenciacionMax() const { return DistanciaPotenciacionMax; }
	FORCEINLINE bool GetPuedePotenciar() const { return PuedePotenciar; }

	FORCEINLINE void SetPotenciacionDuracion(float InPotenciacionDuracion) { PotenciacionDuracion = InPotenciacionDuracion; }
	FORCEINLINE void SetPotenciacionVelocidad(float InPotenciacionVelocidad) { PotenciacionVelocidad = InPotenciacionVelocidad; }
	FORCEINLINE void SetPotenciacionDano(float InPotenciacionDano) { PotenciacionDano = InPotenciacionDano; }
	FORCEINLINE void SetDistanciaPotenciacionMax(float InDistanciaPotenciacionMax) { DistanciaPotenciacionMax = InDistanciaPotenciacionMax; }
	FORCEINLINE void SetPuedePotenciar(bool bInPuedePotenciar) { PuedePotenciar = bInPuedePotenciar; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);


};
