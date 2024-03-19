// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "CharacterStatStruct.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API UCharacterStatStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	int32 CharacterHP;
	int32 CharacterMaxHP;

	int32 CharacterStamina;
	int32 CharacterMaxStamina;

	int32 CharacterMana;
	int32 CharacterMaxMana;
	
	int32 CharacterGroggy;
	int32 CharacterGroggyLimit;

	int32 Strength;
	int32 Endurance;
	int32 Agility;
	int32 Inteligence;
};

//
//USTRUCT(Atomic, BlueprintType)
//struct FCharacterStatStruct
//{
//	GENERATED_USTRUCT_BODY()
//public:
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterHP;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterMaxHP;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterStamina;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterMaxStamina;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterMana;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterMaxMana;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterGroggy;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 CharacterGroggyLimit;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 Strength;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 Endurance;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 Agility;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	int32 Inteligence;
//};