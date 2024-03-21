// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave_Caza_Kamikaze.h"


ANave_Caza_Kamikaze::ANave_Caza_Kamikaze()
{

	posicion = FVector(-1100.0f, 3500.0f, 400.0f);
}

void ANave_Caza_Kamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


void ANave_Caza_Kamikaze::Mover(float DeltaTime)
{
	        // Declaraci�n de variables
	    float VelocidadHorizontal = 200.0f;
	    float VelocidadRotacion = 40.0f;
	    float DistanciaMaxima = 700.0f;
	    static float DistanciaRecorrida = 0.0f;
	
	    // C�lculo de la direcci�n y distancia de movimiento
	    FVector DireccionMovimiento = FVector(-1.0f, 0.0f, 0.0f);
	    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;
	
	    // C�lculo del �ngulo de rotaci�n
	    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;
	    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;
	
	    // C�lculo del movimiento circular
	    float Radio = 20.0f;
	    float X = FMath::Cos(Angulo) * Radio;
	    float Y = FMath::Sin(Angulo) * Radio;
	
	    // C�lculo de la nueva posici�n
	    FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);
	
	    // Actualizaci�n de la distancia total recorrida
	    DistanciaRecorrida += FVector::Dist(GetActorLocation(), NuevaPosicion);
	    SetActorLocation(NuevaPosicion);

		// Comprobaci�n de si se ha superado la distancia m�xima y generaci�n autom�tica de naves
		if (GetActorLocation().X < -3800) {
			for (int i = 0; i < 5; i++) {
				FVector nuevaPosicion = FVector(-900.0f, -4500.0f + (i * 300.0f), 250.0f);
				ANave_Caza_Kamikaze* NuevaNave = GetWorld()->SpawnActor<ANave_Caza_Kamikaze>(nuevaPosicion, FRotator::ZeroRotator);
			}

			// Establecer la nueva posici�n del actor
			SetActorLocation(FVector(posicion));
		}

}

void ANave_Caza_Kamikaze::Destruirse()
{
}

void ANave_Caza_Kamikaze::Escapar(FVector PosicionJugador)
{
}

void ANave_Caza_Kamikaze::Atacar(bool bAtacar)
{
}

//
//ANaveEnemigaCaza::Mover(DeltaTime);
////speed = 3;
/////*SetActorLocation(FVector(GetActorLocation().X - speed, GetActorLocation().Y + speed * bandera, GetActorLocation().Z));*/
////if (GetActorLocation().Y > -1000 || GetActorLocation().Y < -600)
////{
////	bandera *= -1;
////}
//
//    // Declaraci�n de variables
//float VelocidadHorizontal = 200.0f;
//float VelocidadRotacion = 40.0f;
//float DistanciaMaxima = 700.0f;
//static float DistanciaRecorrida = 0.0f;
//
//// C�lculo de la direcci�n y distancia de movimiento
//FVector DireccionMovimiento = FVector(-1.0f, 0.0f, 0.0f);
//FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;
//
//// C�lculo del �ngulo de rotaci�n
//float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f;
//float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion;
//
//// C�lculo del movimiento circular
//float Radio = 20.0f;
//float X = FMath::Cos(Angulo) * Radio;
//float Y = FMath::Sin(Angulo) * Radio;
//
//// C�lculo de la nueva posici�n
//FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);
//
//// Actualizaci�n de la distancia total recorrida
//DistanciaRecorrida += FVector::Dist(GetActorLocation(), NuevaPosicion);
//SetActorLocation(NuevaPosicion);
//
//if (GetActorLocation().X < -2800) {
//    SetActorLocation(FVector(posicion));
//
//
//
//}