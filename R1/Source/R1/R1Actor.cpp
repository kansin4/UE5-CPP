// Fill out your copyright notice in the Description page of Project Settings.


#include "R1Actor.h"
#include "R1Object.h"

// Sets default values
AR1Actor::AR1Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AR1Actor::BeginPlay()
{
	Super::BeginPlay();
	
	//Obj1 = NewObject<UR1Object>(); // 언리얼에서 제공하는 포인터를 반환하는 함수 NewObject
	//Obj2 = NewObject<UR1Object>(); // 언리얼에서 제공하는 포인터를 반환하는 함수 NewObject

	GEngine->ForceGarbageCollection(true); // 가비지 컬렉션을 강제로 실행하는 함수

}


// Called every frame
void AR1Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (Obj1 == nullptr)
	//{
	//	Obj1->Hp = 200;
	//	UE_LOG(LogTemp, Warning, TEXT("Obj1 Deleted"));
	//}

	//if (Obj2 == nullptr)
	//{
	//	Obj1->Hp = 200;
	//	UE_LOG(LogTemp, Warning, TEXT("Obj2 Deleted"));
	//}
}

