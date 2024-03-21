// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "Nave_Nodriza_Ataque.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANave_Nodriza_Ataque : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
	

public:
	ANave_Nodriza_Ataque();

protected:

	int NumeroTorretas;  // Número de torretas en la nave nodriza de ataque
	float TiempoEntreAtaques;  // Tiempo mínimo entre ataques de las torretas
	bool TorretasActivadas;  // Indica si las torretas están activadas
	float DistanciaAtaqueTorretasMax;  // Distancia máxima a la que las torretas pueden atacar


	virtual void Tick(float DeltaTime) override;

public:

	FORCEINLINE int GetNumeroTorretas() const { return NumeroTorretas; }
	FORCEINLINE float GetTiempoEntreAtaques() const { return TiempoEntreAtaques; }
	FORCEINLINE bool GetTorretasActivadas() const { return TorretasActivadas; }
	FORCEINLINE float GetDistanciaAtaqueTorretasMax() const { return DistanciaAtaqueTorretasMax; }

	FORCEINLINE void SetNumeroTorretas(int InNumeroTorretas) { NumeroTorretas = InNumeroTorretas; }
	FORCEINLINE void SetTiempoEntreAtaques(float InTiempoEntreAtaques) { TiempoEntreAtaques = InTiempoEntreAtaques; }
	FORCEINLINE void SetTorretasActivadas(bool bInTorretasActivadas) { TorretasActivadas = bInTorretasActivadas; }
	FORCEINLINE void SetDistanciaAtaqueTorretasMax(float InDistanciaAtaqueTorretasMax) { DistanciaAtaqueTorretasMax = InDistanciaAtaqueTorretasMax; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
