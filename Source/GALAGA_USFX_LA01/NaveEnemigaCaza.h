// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

UCLASS()
class GALAGA_USFX_LA01_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	// Nuevos atributos específicos para la clase hija
	float RadioDeteccion;
	bool Sigilo;

protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:

	ANaveEnemigaCaza();
	//Called every frame 
	virtual void Tick(float DeltaTime) override;


public:

	// Nuevos métodos GET/SET específicos para la clase hija
	FORCEINLINE float GetRadioDeteccion() const { return RadioDeteccion; }
	FORCEINLINE bool GetEnSigilo() const { return Sigilo; }

	FORCEINLINE void SetRadioDeteccion(float InRadioDeteccion) { RadioDeteccion = InRadioDeteccion; }
	FORCEINLINE void SetEnSigilo(bool bInSigilo) { Sigilo = bInSigilo; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);
	
};
