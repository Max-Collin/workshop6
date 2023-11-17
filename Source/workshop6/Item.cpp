// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Base_Pokemon.h"
#include "workshop6Character.h"
#include "Components/BoxComponent.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxcollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

}

void AItem::execute()
{
	
	
}

void AItem::undo()
{
	
}

void AItem::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Aworkshop6Character* Player = Cast<Aworkshop6Character>(OtherActor);
	if(Player)
	{
		Player->AddItem(this);
	}
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	boxcollision->OnComponentBeginOverlap.AddDynamic(this,&AItem::OnBoxOverlap);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

