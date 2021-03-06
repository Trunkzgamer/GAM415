// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMeshActor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "SlidingDoor.generated.h"

UCLASS()
class GAM415_API ASlidingDoor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASlidingDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = Door)
	void Open();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorOptions")
	bool DoorIsOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorLocation")
	float xAxis = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorLocation")
	float yAxis = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorLocation")
	float zAxis = 0.f;

	UPROPERTY()
	FVector TargetLocation;

private:

	float DoorTimer = 0.f;
	
};
