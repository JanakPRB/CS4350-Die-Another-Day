// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterCharacter;
#ifdef SHOOTERGAME_ShooterWeapon_generated_h
#error "ShooterWeapon.generated.h already included, missing '#pragma once' in ShooterWeapon.h"
#endif
#define SHOOTERGAME_ShooterWeapon_generated_h

#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_67_GENERATED_BODY \
	friend SHOOTERGAME_API class UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim(); \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_21_GENERATED_BODY \
	friend SHOOTERGAME_API class UScriptStruct* Z_Construct_UScriptStruct_FWeaponData(); \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_RPC_WRAPPERS \
	virtual bool ServerHandleFiring_Validate(); \
	virtual void ServerHandleFiring_Implementation(); \
	virtual bool ServerStopReload_Validate(); \
	virtual void ServerStopReload_Implementation(); \
	virtual bool ServerStartReload_Validate(); \
	virtual void ServerStartReload_Implementation(); \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerStartFire_Validate(); \
	virtual void ServerStartFire_Implementation(); \
	virtual void ClientStartReload_Implementation(); \
 \
	DECLARE_FUNCTION(execServerHandleFiring) \
	{ \
		P_FINISH; \
		if (!this->ServerHandleFiring_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerHandleFiring_Validate")); \
			return; \
		} \
		this->ServerHandleFiring_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Reload) \
	{ \
		P_FINISH; \
		this->OnRep_Reload(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BurstCounter) \
	{ \
		P_FINISH; \
		this->OnRep_BurstCounter(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MyPawn) \
	{ \
		P_FINISH; \
		this->OnRep_MyPawn(); \
	} \
 \
	DECLARE_FUNCTION(execServerStopReload) \
	{ \
		P_FINISH; \
		if (!this->ServerStopReload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopReload_Validate")); \
			return; \
		} \
		this->ServerStopReload_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execServerStartReload) \
	{ \
		P_FINISH; \
		if (!this->ServerStartReload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartReload_Validate")); \
			return; \
		} \
		this->ServerStartReload_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execServerStopFire) \
	{ \
		P_FINISH; \
		if (!this->ServerStopFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopFire_Validate")); \
			return; \
		} \
		this->ServerStopFire_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execServerStartFire) \
	{ \
		P_FINISH; \
		if (!this->ServerStartFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartFire_Validate")); \
			return; \
		} \
		this->ServerStartFire_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execGetPawnOwner) \
	{ \
		P_FINISH; \
		*(AShooterCharacter**)Z_Param__Result=this->GetPawnOwner(); \
	} \
 \
	DECLARE_FUNCTION(execClientStartReload) \
	{ \
		P_FINISH; \
		this->ClientStartReload_Implementation(); \
	}


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerHandleFiring_Validate(); \
	virtual void ServerHandleFiring_Implementation(); \
	virtual bool ServerStopReload_Validate(); \
	virtual void ServerStopReload_Implementation(); \
	virtual bool ServerStartReload_Validate(); \
	virtual void ServerStartReload_Implementation(); \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerStartFire_Validate(); \
	virtual void ServerStartFire_Implementation(); \
	virtual void ClientStartReload_Implementation(); \
 \
	DECLARE_FUNCTION(execServerHandleFiring) \
	{ \
		P_FINISH; \
		if (!this->ServerHandleFiring_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerHandleFiring_Validate")); \
			return; \
		} \
		this->ServerHandleFiring_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Reload) \
	{ \
		P_FINISH; \
		this->OnRep_Reload(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BurstCounter) \
	{ \
		P_FINISH; \
		this->OnRep_BurstCounter(); \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MyPawn) \
	{ \
		P_FINISH; \
		this->OnRep_MyPawn(); \
	} \
 \
	DECLARE_FUNCTION(execServerStopReload) \
	{ \
		P_FINISH; \
		if (!this->ServerStopReload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopReload_Validate")); \
			return; \
		} \
		this->ServerStopReload_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execServerStartReload) \
	{ \
		P_FINISH; \
		if (!this->ServerStartReload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartReload_Validate")); \
			return; \
		} \
		this->ServerStartReload_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execServerStopFire) \
	{ \
		P_FINISH; \
		if (!this->ServerStopFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopFire_Validate")); \
			return; \
		} \
		this->ServerStopFire_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execServerStartFire) \
	{ \
		P_FINISH; \
		if (!this->ServerStartFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartFire_Validate")); \
			return; \
		} \
		this->ServerStartFire_Implementation(); \
	} \
 \
	DECLARE_FUNCTION(execGetPawnOwner) \
	{ \
		P_FINISH; \
		*(AShooterCharacter**)Z_Param__Result=this->GetPawnOwner(); \
	} \
 \
	DECLARE_FUNCTION(execClientStartReload) \
	{ \
		P_FINISH; \
		this->ClientStartReload_Implementation(); \
	}


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_EVENT_PARMS
extern SHOOTERGAME_API  FName SHOOTERGAME_ClientStartReload;
extern SHOOTERGAME_API  FName SHOOTERGAME_ServerHandleFiring;
extern SHOOTERGAME_API  FName SHOOTERGAME_ServerStartFire;
extern SHOOTERGAME_API  FName SHOOTERGAME_ServerStartReload;
extern SHOOTERGAME_API  FName SHOOTERGAME_ServerStopFire;
extern SHOOTERGAME_API  FName SHOOTERGAME_ServerStopReload;
#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_CALLBACK_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAShooterWeapon(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterWeapon(); \
	public: \
	DECLARE_CLASS(AShooterWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AShooterWeapon*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_INCLASS \
	private: \
	static void StaticRegisterNativesAShooterWeapon(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterWeapon(); \
	public: \
	DECLARE_CLASS(AShooterWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AShooterWeapon*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AShooterWeapon(const AShooterWeapon& InCopy); \
public:


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AShooterWeapon(const AShooterWeapon& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon)


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_78_PROLOG \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_EVENT_PARMS


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_CALLBACK_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_CALLBACK_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_81_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterWeapon."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Weapons_ShooterWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS