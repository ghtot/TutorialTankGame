// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"



void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	GetControlledTank()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Controlled AI tank name: %s"), *(GetControlledTank()->GetName()));
}


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const
{
	return nullptr;
}

