// Fill out your copyright notice in the Description page of Project Settings.


#include "SomeActor.h"

#include "Kismet/KismetMathLibrary.h"


// Sets default values
ASomeActor::ASomeActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Create a static mesh component
	cubeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));

	// Load the Cube mesh
	UStaticMesh* cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;

	// Set the component's mesh
	cubeMeshComponent->SetStaticMesh(cubeMesh);

	// Set as root component
	//RootComponent = cubeMeshComponent;
}

UObject* ASomeActor::Clone_Implementation()
{
	auto clone = GetWorld()->SpawnActor<ASomeActor>();
	clone->SetActorLocation(GetActorLocation() + UKismetMathLibrary::RandomUnitVector()*200);
	clone->cubeMeshComponent->SetMaterial(0, cubeMeshComponent->GetMaterial(0));
	return clone;
}

// Called when the game starts or when spawned
void ASomeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASomeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASomeActor::NotifyActorOnClicked(FKey ButtonPressed)
{
	Execute_Clone(this);
}

