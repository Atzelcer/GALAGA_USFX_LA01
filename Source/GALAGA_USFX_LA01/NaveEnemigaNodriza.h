// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:

	int CantidadMaximaNavesHijas;
	float TiempoCreacionNuevaNave;
	virtual void Tick(float DeltaTime) override;

public:

	ANaveEnemigaNodriza();

public:

	FORCEINLINE int GetCantidadMaximaNavesHijas() const { return CantidadMaximaNavesHijas; }
	FORCEINLINE float GetTiempoCreacionNuevaNave() const { return TiempoCreacionNuevaNave; }

	FORCEINLINE void SetCantidadMaximaNavesHijas(int InCantidadMaximaNavesHijas) { CantidadMaximaNavesHijas = InCantidadMaximaNavesHijas; }
	FORCEINLINE void SetTiempoCreacionNuevaNave(float InTiempoCreacionNuevaNave) { TiempoCreacionNuevaNave = InTiempoCreacionNuevaNave; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

	
};
