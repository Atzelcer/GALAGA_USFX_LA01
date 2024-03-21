// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"


void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

    posicion = FVector(-1000.0f, -1000.0f, 500.0f);
}

void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
    // Obtiene la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Genera nuevas coordenadas X, Y y Z aleatorias
    float NuevaX = FMath::Sin(GetWorld()->GetTimeSeconds()) * -1000.0f * DeltaTime;
    float NuevaY = FMath::Cos(GetWorld()->GetTimeSeconds()) * 1000.0f * DeltaTime;
    float NuevaZ = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

    // Crea un nuevo vector de posición con las coordenadas generadas
    FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);

    // Establece la nueva posición del actor
    SetActorLocation(NuevaPosicion);

    // Comprobación de si se ha superado la distancia máxima y generación automática de naves
    if (GetActorLocation().X < -3800) {
        for (int i = 0; i < 5; i++) {
            FVector nuevaPosicion = FVector(-900.0f, -4500.0f + (i * 300.0f), 250.0f);
            ANaveEnemigaNodriza* NuevaNave = GetWorld()->SpawnActor<ANaveEnemigaNodriza>(nuevaPosicion, FRotator::ZeroRotator);
        }

        // Establecer la nueva posición del actor
        SetActorLocation(FVector(posicion));
    }
}

void ANaveEnemigaNodriza::Destruirse()
{
}

void ANaveEnemigaNodriza::Escapar(FVector PosicionJugador)
{
}

void ANaveEnemigaNodriza::Atacar(bool bAtacar)
{
}
