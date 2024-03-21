// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "Nave_Transporte_Elite.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANave_Transporte_Elite : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
	

public:
	ANave_Transporte_Elite();

protected:

	int CantidadGuardaespaldas;  // Cantidad de naves de escolta que lleva consigo
	float DistanciaAtaqueGuardaespaldas;  // Distancia máxima a la que los guardaespaldas pueden atacar
	TArray<AActor*> Guardaespaldas;  // Lista de naves de escolta

	virtual void Tick(float DeltaTime) override;

public:

	// Nuevos métodos GET/SET específicos para la clase hija
	FORCEINLINE int GetCantidadGuardaespaldas() const { return CantidadGuardaespaldas; }
	FORCEINLINE float GetDistanciaAtaqueGuardaespaldas() const { return DistanciaAtaqueGuardaespaldas; }
	FORCEINLINE const TArray<AActor*>& GetGuardaespaldas() const { return Guardaespaldas; }

	FORCEINLINE void SetCantidadGuardaespaldas(int InCantidadGuardaespaldas) { CantidadGuardaespaldas = InCantidadGuardaespaldas; }
	FORCEINLINE void SetDistanciaAtaqueGuardaespaldas(float InDistanciaAtaqueGuardaespaldas) { DistanciaAtaqueGuardaespaldas = InDistanciaAtaqueGuardaespaldas; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);


};
