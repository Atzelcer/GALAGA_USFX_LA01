// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:
	// Nuevos atributos específicos para la clase hija
	int NivelInfiltracion;
	bool HabilidadesEspiaActivadas;

protected:

	virtual void Tick(float DeltaTime) override;

public:

	ANaveEnemigaEspia();

public:

	// Nuevos métodos GET/SET específicos para la clase hija
	FORCEINLINE int GetNivelInfiltracion() const { return NivelInfiltracion; }
	FORCEINLINE bool GetHabilidadesEspiaActivadas() const { return HabilidadesEspiaActivadas; }

	FORCEINLINE void SetNivelInfiltracion(int InNivelInfiltracion) { NivelInfiltracion = InNivelInfiltracion; }
	FORCEINLINE void SetHabilidadesEspiaActivadas(bool bInHabilidadesEspiaActivadas) { HabilidadesEspiaActivadas = bInHabilidadesEspiaActivadas; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
