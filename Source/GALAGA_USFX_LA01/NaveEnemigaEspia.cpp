// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);


    posicion = FVector(-950.0f, -2600.0f + (300.0f), 300.0f);
}


void ANaveEnemigaEspia::Mover(float DeltaTime)
{
    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Velocidad en el eje X (movimiento hacia adelante)
    float VelocidadX = -5.0f * DeltaTime;

    // Dirección del movimiento (1 para hacia adelante, -1 para hacia atrás)
    float Direccion = -1.0f;

    // Calcula el desplazamiento en el eje X basado en la dirección y velocidad
    float DesplazamientoX = Direccion * VelocidadX * DeltaTime;

    // Altura máxima del salto
    float AlturaMaxima = 15.0f;

    // Tiempo total para alcanzar la altura máxima (ajústalo según lo desees)
    float TiempoSalto = 1.0f;

    // Calcula la altura actual del salto
    float AlturaActual = AlturaMaxima * FMath::Sin(GetWorld()->GetTimeSeconds() / TiempoSalto);

    // Calcula la nueva posición
    FVector NuevaPosicion = PosicionActual + FVector(DesplazamientoX, 0.0f, AlturaActual);

    // Establece la nueva posición del actor
    SetActorLocation(NuevaPosicion);
    // Comprobación de si se ha superado la distancia máxima y generación automática de naves
    if (GetActorLocation().X < -3800) {
        for (int i = 0; i < 5; i++) {
            FVector nuevaPosicion = FVector(-900.0f, -4500.0f + (i * 300.0f), 250.0f);
            ANaveEnemigaEspia* NuevaNave = GetWorld()->SpawnActor<ANaveEnemigaEspia>(nuevaPosicion, FRotator::ZeroRotator);
        }

        // Establecer la nueva posición del actor
        SetActorLocation(FVector(posicion));
    }
}



void ANaveEnemigaEspia::Destruirse()
{
	Destroy();
}


void ANaveEnemigaEspia::Escapar(FVector PosicionJugador)
{
	// Calcula la dirección opuesta al jugador
	FVector DireccionOpuesta = -PosicionJugador;
}


void ANaveEnemigaEspia::Atacar(bool bAtacar)
{
}
