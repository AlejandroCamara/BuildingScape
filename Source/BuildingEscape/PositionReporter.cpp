// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReporter.h"

// Include What You Use (IWYU)
#include "BuildingEscape.h"
#include "GameFramework/Actor.h" //Header needed for access to AActor 


// Sets default values for this component's properties
UPositionReporter::UPositionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();

	// ...

	//Get the object name/id
	FString ObjectName = GetOwner()->GetName();

	//Print to the UE Output Console
	UE_LOG(LogTemp, Warning, TEXT("PositionReporter for %s is reporting"), *ObjectName);
	
}


// Called every frame
void UPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

