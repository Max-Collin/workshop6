// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class UBoxComponent;
class ABase_Pokemon;

UCLASS()
class  WORKSHOP6_API  AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	 virtual void  execute();

	virtual void undo();

	
	UPROPERTY(EditAnywhere)
	FString Name;

	UPROPERTY(EditAnywhere)
	int32 Quantity;

	UPROPERTY(EditAnywhere)
	TObjectPtr<ABase_Pokemon> Target;

	UBoxComponent* boxcollision;

	UFUNCTION()
	virtual void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
