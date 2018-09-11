// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay() 
{
	Super::BeginPlay();
	GetControlledTank()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Playercontroller Begin Play"));
	UE_LOG(LogTemp, Warning, TEXT("Controlled tank name: %s"), *(GetControlledTank()->GetName()));
}






