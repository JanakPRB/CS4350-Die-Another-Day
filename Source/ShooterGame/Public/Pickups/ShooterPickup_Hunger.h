// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ShooterPickup.h"
#include "ShooterPickup_Hunger.generated.h"

class AShooterCharacter;

// A pickup object that replenishes character Hunger
UCLASS(Abstract, Blueprintable)
class AShooterPickup_Hunger : public AShooterPickup
{
    GENERATED_UCLASS_BODY()
    
    /** check if pawn can use this pickup */
    virtual bool CanBePickedUp(AShooterCharacter* TestPawn) const override;
    
protected:
    
    /** how much Hunger does it give? */
    UPROPERTY(EditDefaultsOnly, Category=Pickup)
    int32 Hunger;
    
    /** give pickup */
    virtual void GivePickupTo(AShooterCharacter* Pawn) override;
};

