// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaRebastecimiento.h"


void ANaveEnemigaRebastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
    posicion = FVector(-1100.0f, 3500.0f + (300.0f), 300.0f);
}

ANaveEnemigaRebastecimiento::ANaveEnemigaRebastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaRebastecimiento::Mover(float DeltaTime)
{
    float VelocidadHorizontal = 200.0f; // Puedes ajustar este valor seg�n la velocidad deseada

    // Define una velocidad de rotaci�n
    float VelocidadRotacion = 40.0f; // Puedes ajustar este valor seg�n la velocidad deseada

    // Calcula el desplazamiento horizontal en la direcci�n deseada
    FVector DireccionMovimiento = FVector(-2.0f, 0.0f, 0.0f); // Por ejemplo, avanza hacia adelante en el eje X
    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;//nos ayuda a emprajerar las velocidades en los diferentes dispositivos 

    // Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance m�s lentamente
    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya m�s lento (0.1f)

    // Calcula el �ngulo de rotaci�n basado en el tiempo
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El �ngulo cambia cada 6 segundos

    // Calcula las coordenadas X e Y para el movimiento circular
    float Radio = 20.0f; // Radio del c�rculo
    float X = FMath::Cos(Angulo) * Radio; // Coordenada X del c�rculo
    float Y = FMath::Sin(Angulo) * Radio; // Coordenada Y del c�rculo

    // Calcula la nueva posici�n sumando las coordenadas X e Y al desplazamiento horizontal y a la posici�n actual
    FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);
    // Establece la nueva posici�n del actor
    SetActorLocation(NuevaPosicion);
    // Comprobaci�n de si se ha superado la distancia m�xima y generaci�n autom�tica de naves
    if (GetActorLocation().X < -3800) {
        for (int i = 0; i < 5; i++) {
            FVector nuevaPosicion = FVector(-900.0f, -4500.0f + (i * 300.0f), 250.0f);
            ANaveEnemigaRebastecimiento* NuevaNave = GetWorld()->SpawnActor<ANaveEnemigaRebastecimiento>(nuevaPosicion, FRotator::ZeroRotator);
        }

        // Establecer la nueva posici�n del actor
        SetActorLocation(FVector(posicion));
    }
}

void ANaveEnemigaRebastecimiento::Destruirse()
{

}

void ANaveEnemigaRebastecimiento::Escapar(FVector PosicionJugador)
{
}

void ANaveEnemigaRebastecimiento::Atacar(bool bAtacar)
{
}
