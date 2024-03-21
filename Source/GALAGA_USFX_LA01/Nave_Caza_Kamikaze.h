// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "Nave_Caza_Kamikaze.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANave_Caza_Kamikaze : public ANaveEnemigaCaza
{
	GENERATED_BODY()


public:
	ANave_Caza_Kamikaze();

// private:
// int bandera = 1;

protected:

	float RadioExplosion;  // Radio de la explosión kamikaze al impactar
	float DanoExplosion;  // Daño causado por la explosión kamikaze
	float VelocidadAumentada;  // Incremento de velocidad durante el ataque kamikaze
	float DistanciaAtaqueKamikazeMax;  // Distancia máxima a la que puede realizar el ataque kamikaze

	virtual void Tick(float DeltaTime) override;

public:

	FORCEINLINE float GetRadioExplosion() const { return RadioExplosion; }
	FORCEINLINE float GetDanoExplosion() const { return DanoExplosion; }
	FORCEINLINE float GetVelocidadAumentada() const { return VelocidadAumentada; }
	FORCEINLINE float GetDistanciaAtaqueKamikazeMax() const { return DistanciaAtaqueKamikazeMax; }

	FORCEINLINE void SetRadioExplosion(float InRadioExplosion) { RadioExplosion = InRadioExplosion; }
	FORCEINLINE void SetDanoExplosion(float InDanoExplosion) { DanoExplosion = InDanoExplosion; }
	FORCEINLINE void SetVelocidadAumentada(float InVelocidadAumentada) { VelocidadAumentada = InVelocidadAumentada; }
	FORCEINLINE void SetDistanciaAtaqueKamikazeMax(float InDistanciaAtaqueKamikazeMax) { DistanciaAtaqueKamikazeMax = InDistanciaAtaqueKamikazeMax; }

	virtual void Mover(float DeltaTime) override;
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);
};
