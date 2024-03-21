// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"


void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);


	posicion =  FVector(-900.0f, 1500.0f , 250.0f);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	// Define la velocidad de movimiento horizontal de la nave
	float VelocidadHorizontal = 200.0f; // Puedes ajustar este valor según la velocidad deseada

	// Define una velocidad de rotación
	float VelocidadRotacion = 40.0f; // Puedes ajustar este valor según la velocidad deseada

	// Calcula el desplazamiento horizontal en la dirección deseada
	FVector DireccionMovimiento = -GetActorForwardVector(); // Mueve la nave hacia adelante
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	// Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance más lentamente
	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya más lento (0.1f)

	// Calcula el ángulo de rotación basado en el tiempo
	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El ángulo cambia cada 6 segundos

	// Calcula las coordenadas X e Y para el movimiento en zigzag
	float AmplitudZigzag = 50.0f; // Amplitud del zigzag
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag; // Calcula el desplazamiento en el eje Y para el zigzag

	// Calcula la nueva posición sumando el desplazamiento horizontal, el zigzag y la posición actual
	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(0.0f, ZigzagOffset, 0.0f);
	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);

	// Comprobación de si se ha superado la distancia máxima y generación automática de naves
	if (GetActorLocation().X < -3800) {
		for (int i = 0; i < 5; i++) {
			FVector nuevaPosicion = FVector(-900.0f, -4500.0f + (i * 300.0f), 250.0f);
			ANaveEnemigaTransporte* NuevaNave = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(nuevaPosicion, FRotator::ZeroRotator);
		}

		// Establecer la nueva posición del actor
		SetActorLocation(FVector(posicion));
	}
}

void ANaveEnemigaTransporte::Destruirse()
{
	Destroy();
}

void ANaveEnemigaTransporte::Escapar(FVector PosicionJugador)
{
	// Calcula la dirección opuesta al jugador
	FVector DireccionOpuesta = -PosicionJugador;
}

void ANaveEnemigaTransporte::Atacar(bool bAtacar)
{
}

