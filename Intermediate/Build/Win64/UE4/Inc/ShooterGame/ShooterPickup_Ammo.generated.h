// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterPickup_Ammo_generated_h
#error "ShooterPickup_Ammo.generated.h already included, missing '#pragma once' in ShooterPickup_Ammo.h"
#endif
#define SHOOTERGAME_ShooterPickup_Ammo_generated_h

#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAShooterPickup_Ammo(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterPickup_Ammo(); \
	public: \
	DECLARE_CLASS(AShooterPickup_Ammo, AShooterPickup, COMPILED_IN_FLAGS(CLASS_Abstract), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(AShooterPickup_Ammo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AShooterPickup_Ammo*>(this); }


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesAShooterPickup_Ammo(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterPickup_Ammo(); \
	public: \
	DECLARE_CLASS(AShooterPickup_Ammo, AShooterPickup, COMPILED_IN_FLAGS(CLASS_Abstract), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(AShooterPickup_Ammo) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AShooterPickup_Ammo*>(this); }


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPickup_Ammo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPickup_Ammo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup_Ammo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup_Ammo); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AShooterPickup_Ammo(const AShooterPickup_Ammo& InCopy); \
public:


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPickup_Ammo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AShooterPickup_Ammo(const AShooterPickup_Ammo& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup_Ammo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup_Ammo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPickup_Ammo)


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_12_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterPickup_Ammo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Pickups_ShooterPickup_Ammo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS