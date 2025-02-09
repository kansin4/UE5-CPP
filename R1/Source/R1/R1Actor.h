// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "R1Actor.generated.h"

class UR1Object;

UCLASS()
class R1_API AR1Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AR1Actor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void test() { }

protected:
	/*
	UR1Object* Obj1;

	UPROPERTY()
	UR1Object* Obj2;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	int32 Hp = 200;
	UPROPERTY(VisibleAnywhere)
	int32 Mp = 50;
	UPROPERTY(VisibleAnywhere)
	float Speed = 3.5f;
};
