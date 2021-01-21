// Fill out your copyright notice in the Description page of Project Settings.

#include "JetsinManBase.h"

// Sets default values
AJetsinManBase::AJetsinManBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AJetsinManBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AJetsinManBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AJetsinManBase::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AJetsinManBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	RepPlayerState.Broadcast();
}