// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "JetsinManBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRepPlayerState);

UCLASS()
class JETSINBALL_API AJetsinManBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AJetsinManBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	virtual void OnRep_PlayerState() override;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FRepPlayerState RepPlayerState;
};
