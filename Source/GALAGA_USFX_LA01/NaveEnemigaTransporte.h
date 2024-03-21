// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */

UCLASS()
class GALAGA_USFX_LA01_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()


protected:

	int CapacidadCarga;  // Cuántas unidades puede transportar la nave
	float VelocidadDescarga;  // Velocidad de descarga de unidades por segundo
	TArray<AActor*> UnidadesTransportadas;  // Lista de unidades transportadas por la nave
	FVector PuntoDescarga;  // Punto de descarga de las unidades transportadas

	virtual void Tick(float DeltaTime) override;

public:
	ANaveEnemigaTransporte();

	FORCEINLINE int GetCapacidadCarga() const { return CapacidadCarga; }
	FORCEINLINE float GetVelocidadDescarga() const { return VelocidadDescarga; }
	FORCEINLINE const TArray<AActor*>& GetUnidadesTransportadas() const { return UnidadesTransportadas; }
	FORCEINLINE const FVector& GetPuntoDescarga() const { return PuntoDescarga; }

	FORCEINLINE void SetCapacidadCarga(int InCapacidadCarga) { CapacidadCarga = InCapacidadCarga; }
	FORCEINLINE void SetVelocidadDescarga(float InVelocidadDescarga) { VelocidadDescarga = InVelocidadDescarga; }
	FORCEINLINE void SetPuntoDescarga(const FVector& InPuntoDescarga) { PuntoDescarga = InPuntoDescarga; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);
	
};
