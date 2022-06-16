// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/SWeaponSpawner.h"

// Sets default values
ASWeaponSpawner::ASWeaponSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASWeaponSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASWeaponSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

