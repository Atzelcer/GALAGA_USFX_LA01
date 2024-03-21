// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"


// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

    RadioDeteccion = 0.0f;
    Sigilo = false;

    posicion = FVector(-900.0f, -4500.0f, 250.0f);
}

// Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
    // Declaración de variables
    float VelocidadHorizontal = 200.0f;
    float VelocidadRotacion = 40.0f;
    float DistanciaMaxima = 700.0f;
    static float DistanciaRecorrida = 0.0f;

    // Cálculo de la dirección y distancia de movimiento
    FVector DireccionMovimiento = FVector(-1.0f, 0.0f, 0.0f);
    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

    // Cálculo del ángulo de rotación
    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;

    // Cálculo del movimiento circular
    float Radio = 20.0f;
    float X = FMath::Cos(Angulo) * Radio;
    float Y = FMath::Sin(Angulo) * Radio;

    // Cálculo de la nueva posición
    FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);

    // Actualización de la distancia total recorrida
    DistanciaRecorrida += FVector::Dist(GetActorLocation(), NuevaPosicion);
    SetActorLocation(NuevaPosicion);

    // Comprobación de si se ha superado la distancia máxima y generación automática de naves
    if (GetActorLocation().X < -3800) {
        for (int i = 0; i < 5; i++) {
            FVector nuevaPosicion = FVector(-900.0f, -4500.0f + (i * 300.0f), 250.0f);
            ANaveEnemigaCaza* NuevaNave = GetWorld()->SpawnActor<ANaveEnemigaCaza>(nuevaPosicion, FRotator::ZeroRotator);
        }

        // Establecer la nueva posición del actor
        SetActorLocation(FVector(posicion));
    }


}

void ANaveEnemigaCaza::Destruirse()
{
	Destroy();
}

void ANaveEnemigaCaza::Escapar(FVector PosicionJugador)
{
	// Calcula la dirección opuesta al jugador
	FVector DireccionOpuesta = -PosicionJugador;
}

void ANaveEnemigaCaza::Atacar(bool bAtacar)
{
}

