// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "Nave_Nodriza_Defensa.generated.h"


UCLASS()
class GALAGA_USFX_LA01_API ANave_Nodriza_Defensa : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
	

public:
	ANave_Nodriza_Defensa();

protected:

	float RadioEscudo;  // Radio del escudo de defensa
	float DuracionEscudo;  // Duración del escudo en segundos
	float TiempoEntreRecargas;  // Tiempo mínimo entre recargas de escudo
	bool EscudoActivo;  // Indica si el escudo está actualmente activo

	virtual void Tick(float DeltaTime) override;
public:

	FORCEINLINE float GetRadioEscudo() const { return RadioEscudo; }
	FORCEINLINE float GetDuracionEscudo() const { return DuracionEscudo; }
	FORCEINLINE float GetTiempoEntreRecargas() const { return TiempoEntreRecargas; }
	FORCEINLINE bool GetEscudoActivo() const { return EscudoActivo; }

	FORCEINLINE void SetRadioEscudo(float InRadioEscudo) { RadioEscudo = InRadioEscudo; }
	FORCEINLINE void SetDuracionEscudo(float InDuracionEscudo) { DuracionEscudo = InDuracionEscudo; }
	FORCEINLINE void SetTiempoEntreRecargas(float InTiempoEntreRecargas) { TiempoEntreRecargas = InTiempoEntreRecargas; }
	FORCEINLINE void SetEscudoActivo(bool bInEscudoActivo) { EscudoActivo = bInEscudoActivo; }

	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
