// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCazador.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
    // set default pawn class to our character class
    DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
    //NaveEnemigaCaza01 = nullptr
}



void AGalaga_USFXGameMode::BeginPlay()
{
    Super::BeginPlay();

    //Ubicaciones para las navez enemigas de caza
    FVector ubicacionNaveCazador01 = FVector(-900.0f, 300.0f, 180.0f);
    FVector ubicacionNaveCazador02 = FVector(-900.0f, 500.0f, 180.0f);

    //Ubicaciones para las navez enemigas de transporte
    //FVector ubicacionNaveTransporte01 = FVector(-900.0f, 700.0f, 180.0f);


    FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

    UWorld* const World = GetWorld();
    if (World != nullptr) {

        //spawn the projectile
        NaveEnemigaCazador01 = World->SpawnActor<ANaveEnemigaCazador>(ubicacionNaveCazador01, rotacionNave);
        NaveEnemigaCazador02 = World->SpawnActor<ANaveEnemigaCazador>(ubicacionNaveCazador02, rotacionNave);
        //NaveEnemigaTransporte01 = world->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
    }

}