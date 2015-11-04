// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ShooterGame.h"
#include "Pickups/ShooterPickup_Hunger.h"

AShooterPickup_Hunger::AShooterPickup_Hunger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    Hunger = 50;
}

bool AShooterPickup_Hunger::CanBePickedUp(class AShooterCharacter* TestPawn) const
{
    return TestPawn && (TestPawn->Hunger < TestPawn->GetMaxHunger());
}

void AShooterPickup_Hunger::GivePickupTo(class AShooterCharacter* Pawn)
{
    if (Pawn)
    {
        Pawn->Hunger = FMath::Min(FMath::TruncToInt(Pawn->Hunger) + Hunger, Pawn->GetMaxHunger());
        
        // Fire event for collected Hunger
        const auto Events = Online::GetEventsInterface();
        const auto Identity = Online::GetIdentityInterface();
        
        if (Events.IsValid() && Identity.IsValid())
        {
            AShooterPlayerController* PC = Cast<AShooterPlayerController>(Pawn->Controller);
            if (PC)
            {
                ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(PC->Player);
                
                if (LocalPlayer)
                {
                    const int32 UserIndex = LocalPlayer->GetControllerId();
                    TSharedPtr<const FUniqueNetId> UniqueID = Identity->GetUniquePlayerId(UserIndex);
                    if (UniqueID.IsValid())
                    {
                        FVector Location = Pawn->GetActorLocation();
                        
                        FOnlineEventParms Params;
                        
                        Params.Add( TEXT( "SectionId" ), FVariantData( (int32)0 ) ); // unused
                        Params.Add( TEXT( "GameplayModeId" ), FVariantData( (int32)1 ) ); // @todo determine game mode (ffa v tdm)
                        Params.Add( TEXT( "DifficultyLevelId" ), FVariantData( (int32)0 ) ); // unused
                        
                        Params.Add( TEXT( "ItemId" ), FVariantData( (int32)0 ) ); // @todo come up with a better way to determine item id, currently Hunger is 0 and ammo counts from 1
                        Params.Add( TEXT( "AcquisitionMethodId" ), FVariantData( (int32)0 ) ); // unused
                        Params.Add( TEXT( "LocationX" ), FVariantData( Location.X ) );
                        Params.Add( TEXT( "LocationY" ), FVariantData( Location.Y ) );
                        Params.Add( TEXT( "LocationZ" ), FVariantData( Location.Z ) );
                        Params.Add( TEXT( "ItemQty" ), FVariantData( (int32)Hunger ) );			
                        
                        Events->TriggerEvent(*UniqueID, TEXT("CollectPowerup"), Params);
                    }
                }
            }
        }
    }
}
