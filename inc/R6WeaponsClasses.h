/* *****************************************************************************
**        .tt;;;i,:.                                           .:,;,;ii;        
**          ;;:   :i,                                         ,i    ,j.         
**            ,.:   tt:                                     .;:  .;:.           
**            it;    jG                                    ,j,    :i.           
** i,,      :i:      tE                                    iE      .:;.     ., .
** j;.t;: .;,        .i:                                  ,,;        .t,. :,,  L
** .,:  ,::             ;;:                             :,.             :i   ;Gj
**   :;                  .:;,                        .;:,                   ;i  
**    .ii,.:  ::.           ;;i.     ::...:        :t;.           .:.  :,,i:    
**          ,, .,i,        .ti,;j;;;:      ...;ii.:,,          .ii. .,.         
**                ;.      ,,i:;t,               .::.i,:      .,t,               
**                  .i;.,t,;;.                      i; t;  :it.                 
**                     ..i..                          :,.t:..                   
**                      .t                             .;                       
**                     .j                               :;                      
**                     f      ;,..it.        .i..:;;     ;                      
**                    .t    tji.  ,,;;      ,i,   .;:    ;,                     
**                    ;j   G:        i.    ;;        jt   E                     
**                    .j   f     ,..;;      ;,.,:    ,t  .j                     
**                     j   t:  ,;i..           ;,,:  tt  ;,                     
**                     :;   ,;:i       :,,,       t:i   .t :.                   
**                  ;ii.t.             f..;;            j:.,:,.                 
**               .i;   j,,i            j;, f          .t.;:   :ii               
**       ,::::::,i     .j:.t,.         i,,,,        .i,::i      ,i::::::..      
**    :t;:.              :j.;ji.                   j,.,i.               .,;;    
**  .t:                  ;,,  :;     ;t     ;t     i. .:i.                  :,  
** ;i   :tj             it    .j    ,,i.   .ti,   .t    .i,             ;;,  .W 
** G,:t:   ;i        .j.        :tt;.  .;;..   itt.        ;j        .j:   it.D#
** j,i       ;,.     iG                                    ;D       ,,       : #
**            :t:    tt                                     ;.   .i,            
**           .;,i   t:                                       ii  .:,i           
**         :;;  ..,i.                                         :j,.  .;.:        
**         E,   ,,j                                              ,    ,#        
**                                                                              
** *****************************************************************************
**                     Presenting for your gaming pleasure:                     
** Unreal native C++ headers for the R6Weapons package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6WEAPONS_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(HideAttachment)
AUTOGENERATE_NAME(NbBulletChange)
AUTOGENERATE_NAME(SetGadgetStaticMesh)

// -----------------------------------------------------------------------------
// FstAccuracyType ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstAccuracyType
{
public:
	FLOAT fBaseAccuracy;                                                  //CPF_Edit
	FLOAT fShuffleAccuracy;                                               //CPF_Edit
	FLOAT fWalkingAccuracy;                                               //CPF_Edit
	FLOAT fWalkingFastAccuracy;                                           //CPF_Edit
	FLOAT fRunningAccuracy;                                               //CPF_Edit
	FLOAT fReticuleTime;                                                  //CPF_Edit
	FLOAT fAccuracyChange;                                                //CPF_Edit
	FLOAT fWeaponJump;                                                    //CPF_Edit
};

// -----------------------------------------------------------------------------
// ZoomOut ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ZoomOut
{
};

// -----------------------------------------------------------------------------
// ZoomIn ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ZoomIn
{
};

// -----------------------------------------------------------------------------
// CloseBipod ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CloseBipod
{
};

// -----------------------------------------------------------------------------
// DeployBipod ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT DeployBipod
{
};

// -----------------------------------------------------------------------------
// BringWeaponUp ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT BringWeaponUp
{
};

// -----------------------------------------------------------------------------
// PutWeaponDown ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PutWeaponDown
{
};

// -----------------------------------------------------------------------------
// RaiseWeapon ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT RaiseWeapon
{
};

// -----------------------------------------------------------------------------
// DiscardWeapon ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT DiscardWeapon
{
};

// -----------------------------------------------------------------------------
// NormalFire ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT NormalFire
{
};

// -----------------------------------------------------------------------------
// FstWeaponCaps ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstWeaponCaps
{
public:
	INT bSingle;                                                          //CPF_Edit
	INT bThreeRound;                                                      //CPF_Edit
	INT bFullAuto;                                                        //CPF_Edit
	INT bCMag;                                                            //CPF_Edit
	INT bSilencer;                                                        //CPF_Edit
	INT bLight;                                                           //CPF_Edit
	INT bMiniScope;                                                       //CPF_Edit
	INT bHeatVision;                                                      //CPF_Edit
};
struct AR6Weapons_execSetAccuracyOnHit_Parms
{
};
struct AR6Weapons_eventShowWeaponParticules_Parms
{
	BYTE EWeaponSound;                                                        //CPF_Parm
};
struct AR6Weapons_execCanSwitchToWeapon_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execStartFalling_Parms
{
	class FVector vLocation;                                                  //0
	class FVector vDir;                                                       //0
	class FRotator rRot;                                                      //0
};
struct AR6Weapons_execPutAtOwnerFeet_Parms
{
};
struct AR6Weapons_execStopFallingAndSetCorrectRotation_Parms
{
};
struct AR6Weapons_execCheckForPlaceToFall_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vNewLocation;                                               //0
	class FVector vHitLocation;                                               //0
	class FVector vNormal;                                                    //0
	class AActor* aTraced;                                                    //0
};
struct AR6Weapons_execHitWall_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
	class AActor* Wall;                                                       //CPF_Parm
};
struct AR6Weapons_execSetTearOff_Parms
{
	BITFIELD bNewTearOff : 1;                                                 //CPF_Parm
};
struct AR6Weapons_execSetRelevant_Parms
{
	BITFIELD bNewAlwaysRelevant : 1;                                          //CPF_Parm
};
struct AR6Weapons_eventUpdateWeaponAttachment_Parms
{
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6Weapons_execNbBulletToShot_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGetExplosionDelay_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execR6SetGadget_Parms
{
	class UClass* pWeaponGadgetClass;                                         //CPF_Parm
	class AR6AbstractGadget* SelectedWeaponGadget;                            //0
};
struct AR6Weapons_execAffectActor_Parms
{
	INT BulletGroup;                                                          //CPF_Parm
	class AActor* ActorAffected;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGet2DIcon_Parms
{
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execHasBulletType_Parms
{
	FName strBulletName;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGiveBulletToWeapon_Parms
{
	class FString aBulletName;                                                //CPF_Parm|CPF_NeedCtorLink
	class UClass* aBulletClass;                                               //0
};
struct AR6Weapons_execPerfectAim_Parms
{
};
struct AR6Weapons_execFullAmmo_Parms
{
	INT iClip;                                                                //0
};
struct AR6Weapons_eventDeployWeaponBipod_Parms
{
	BITFIELD bBipodOpen : 1;                                                  //CPF_Parm
};
struct AR6Weapons_execPlayReloading_Parms
{
};
struct AR6Weapons_execServerChangeClip_Parms
{
	INT i;                                                                    //0
	INT iClipNumber;                                                          //0
	INT iMostFullClip;                                                        //0
	INT iMaxNbOfRounds;                                                       //0
	INT iBulletLeftInWeapon;                                                  //0
};
struct AR6Weapons_execAltFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
};
struct AR6Weapons_execGetBulletManager_Parms
{
	class AR6AbstractBulletManager* ReturnValue;                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* pOwner;                                                    //0
};
struct AR6Weapons_execFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
};
struct AR6Weapons_execPostRender_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	class AR6PlayerController* aPC;                                           //0
};
struct AR6Weapons_execStopFire_Parms
{
	BITFIELD bSoundOnly : 1;                                                  //CPF_Parm
};
struct AR6Weapons_execClientStopFire_Parms
{
	BITFIELD bSoundOnly : 1;                                                  //CPF_Parm
};
struct AR6Weapons_execWeaponZoomSound_Parms
{
	BITFIELD bFirstZoom : 1;                                                  //CPF_Parm
};
struct AR6Weapons_execSetNextRateOfFire_Parms
{
};
struct AR6Weapons_execReloadShotGun_Parms
{
};
struct AR6Weapons_execServerStartChangeClip_Parms
{
};
struct AR6Weapons_execClientStartChangeClip_Parms
{
};
struct AR6Weapons_execFullCurrentClip_Parms
{
};
struct AR6Weapons_execClientsFireBullet_Parms
{
	BYTE iBulletNbFired;                                                      //CPF_Parm
	class AR6Pawn* pawnOwner;                                                 //0
	class AR6PlayerController* PlayerOwner;                                   //0
};
struct AR6Weapons_execClientShowBulletFire_Parms
{
	class FVector vStartTrace;                                                //0
	class FRotator rBulletRot;                                                //0
	class AR6Pawn* pawnOwner;                                                 //0
	class AR6PlayerController* PlayerOwner;                                   //0
};
struct AR6Weapons_execServerFireBullet_Parms
{
	FLOAT fMaxAngleErrorFromClient;                                           //CPF_Parm
	class FVector vStartTrace;                                                //0
	class FRotator rBulletRot;                                                //0
	INT iCurrentBullet;                                                       //0
	class AR6Pawn* pawnOwner;                                                 //0
	class AR6AbstractBulletManager* BulletManager;                            //0
};
struct AR6Weapons_execClientAltFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGetMuzzleVelocity_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGunIsFull_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGetClipCapacity_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execNumberOfBulletsLeftInClip_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execHasAmmo_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execServerStopFire_Parms
{
	BITFIELD bSoundOnly : 1;                                                  //CPF_Parm
};
struct AR6Weapons_execLocalStopFire_Parms
{
	BITFIELD bSoundOnly : 1;                                                  //CPF_Parm
};
struct AR6Weapons_execServerStartFiring_Parms
{
};
struct AR6Weapons_execClientStartFiring_Parms
{
};
struct AR6Weapons_eventRenderOverlays_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	class AR6PlayerController* thePlayerController;                           //0
	class FRotator rNewRotation;                                              //0
};
struct AR6Weapons_execGetFiringDirection_Parms
{
	class FVector vOrigin;                                                    //CPF_Parm|CPF_OutParm
	class FRotator rRotation;                                                 //CPF_Parm|CPF_OutParm
	INT iBulletNumber;                                                        //CPF_Parm
	FLOAT fMaxAngleError;                                                     //0
	FLOAT fRandValueOne;                                                      //0
	FLOAT fRandValueTwo;                                                      //0
	FLOAT fMaxError;                                                          //0
	class AR6PlayerController* PlayerOwner;                                   //0
	class AR6Pawn* pawnOwner;                                                 //0
};
struct AR6Weapons_execCreateWeaponEmitters_Parms
{
};
struct AR6Weapons_execWeaponInitialization_Parms
{
	class APawn* pawnOwner;                                                   //CPF_Parm
};
struct AR6Weapons_execIsAtBestAccuracy_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGetCurrentMaxAngle_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execHasAtLeastOneFullClip_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6Weapons_execGetNbOfClips_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execSetTerroristNbOfClips_Parms
{
	INT iNewNumber;                                                           //CPF_Parm
};
struct AR6Weapons_execAddClips_Parms
{
	INT iNbOfExtraClips;                                                      //CPF_Parm
	INT i;                                                                    //0
	INT iNewClipCount;                                                        //0
};
struct AR6Weapons_execServerAddClips_Parms
{
};
struct AR6Weapons_execAddExtraClip_Parms
{
};
struct AR6Weapons_execGetNbOfRoundsForROF_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGetRateOfFire_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execSetRateOfFire_Parms
{
	BYTE eNewRateOfFire;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execServerSetNextRateOfFire_Parms
{
};
struct AR6Weapons_execTurnOffEmitters_Parms
{
	BITFIELD bTurnOff : 1;                                                    //CPF_Parm
};
struct AR6Weapons_execUpdateAllAttachments_Parms
{
};
struct AR6Weapons_execRemoveFirstPersonWeapon_Parms
{
	class AActor* temp;                                                       //0
};
struct AR6Weapons_execStartLoopingAnims_Parms
{
};
struct AR6Weapons_eventPawnStoppedMoving_Parms
{
};
struct AR6Weapons_eventPawnIsMoving_Parms
{
};
struct AR6Weapons_execAttachEmittersTo3rdWeapon_Parms
{
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6Weapons_execAttachEmittersToFPWeapon_Parms
{
};
struct AR6Weapons_execLoadFirstPersonWeapon_Parms
{
	class APawn* NetOwner;                                                    //CPF_Parm
	class AController* LocalPlayerController;                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execClientYourOwnerIs_Parms
{
	class AActor* OwnerFromServer;                                            //CPF_Parm
};
struct AR6Weapons_execServerWhoIsMyOwner_Parms
{
};
struct AR6Weapons_execR6SetReticule_Parms
{
	class AController* LocalPlayerController;                                 //CPF_Parm
	class UClass* ReticuleToSpawn;                                            //0
	class UR6GameOptions* GameOptions;                                        //0
	class AR6PlayerController* pPlayerCtrl;                                   //0
};
struct AR6Weapons_eventSetIdentifyTarget_Parms
{
	BITFIELD bIdentifyCharacter : 1;                                          //CPF_Parm
	BITFIELD bFriendly : 1;                                                   //CPF_Parm
	class FString characterName;                                              //CPF_Parm|CPF_NeedCtorLink
	class UR6GameOptions* GameOptions;                                        //0
};
struct AR6Weapons_execGetWeaponJump_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execGetWeaponRange_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_execFillClips_Parms
{
	INT i;                                                                    //0
};
struct AR6Weapons_execPostBeginPlay_Parms
{
};
struct AR6Weapons_eventDestroyed_Parms
{
};
struct AR6Weapons_execSetGadgets_Parms
{
};
struct AR6Weapons_execSpawnSelectedGadget_Parms
{
};
struct AR6Weapons_execUseScopeStaticMesh_Parms
{
};
struct AR6Weapons_execHasScope_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Weapons_eventHideAttachment_Parms
{
};

// *****************************************************************************
// AR6Weapons (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Weapons : public AR6AbstractWeapon
{
public:
	BYTE m_aiNbOfBullets[20];                                                 //CPF_Edit
	BYTE m_iNbOfRoundsInBurst;                                                //0
	BYTE m_eRateOfFire;                                                       //CPF_Edit|CPF_Net
	BYTE m_wNbOfBounce;                                                       //0
	INT C_iMaxNbOfClips;                                                      //0
	INT m_iClipCapacity;                                                      //CPF_Edit|CPF_Net
	INT m_iNbOfClips;                                                         //CPF_Edit
	INT m_iNbOfExtraClips;                                                    //CPF_Edit
	INT m_iCurrentClip;                                                       //CPF_Net
	INT m_iNbOfRoundsToShoot;                                                 //0
	INT m_iCurrentNbOfClips;                                                  //CPF_Net
	INT m_iCurrentAverage;                                                    //0
	INT m_iDbgNextReticule;                                                   //CPF_Edit
	BITFIELD m_bPlayLoopingSound : 1;                                         //0
	BITFIELD m_bSoundLog : 1;                                                 //CPF_Edit
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD m_bFireOn : 1;                                                   //0
	BITFIELD m_bEmptyAllClips : 1;                                            //0
	FLOAT m_fMuzzleVelocity;                                                  //CPF_Edit
	FLOAT m_MuzzleScale;                                                      //CPF_Edit
	FLOAT m_fAverageDegChanges;                                               //0
	FLOAT m_fAverageDegTable[5];                                              //0
	FLOAT m_fStablePercentage;                                                //0
	FLOAT m_fWorstAccuracy;                                                   //0
	FLOAT m_fOldWorstAccuracy;                                                //0
	FLOAT m_fEffectiveAccuracy;                                               //0
	FLOAT m_fDesiredAccuracy;                                                 //0
	FLOAT m_fMaxAngleError;                                                   //0
	FLOAT m_fCurrentFireJump;                                                 //0
	FLOAT m_fFireSoundRadius;                                                 //0
	FLOAT m_fRateOfFire;                                                      //CPF_Edit
	FLOAT m_fDisplayFOV;                                                      //0
	class UTexture* m_WeaponIcon;                                             //CPF_Edit
	class AR6Reticule* m_ReticuleInstance;                                    //0
	class AR6SFX* m_pEmptyShellsEmitter;                                      //0
	class AR6SFX* m_pMuzzleFlashEmitter;                                      //0
	class UClass* m_pBulletClass;                                             //CPF_Edit|CPF_Net
	class UClass* m_pEmptyShells;                                             //CPF_Edit
	class UClass* m_pMuzzleFlash;                                             //CPF_Edit
	struct FstWeaponCaps m_stWeaponCaps;                                      //CPF_Edit
	class FRotator m_rLastRotation;                                           //0
	class FRotator m_rBuckFirstBullet;                                        //0
	struct FstAccuracyType m_stAccuracyValues;                                //CPF_Edit
	class FVector m_vPawnLocWhenKilled;                                       //0
	class FString m_szReticuleClass;                                          //CPF_Edit|CPF_NeedCtorLink
	class FString m_szWithWeaponReticuleClass;                                //CPF_Edit|CPF_NeedCtorLink
	virtual ~AR6Weapons();
	virtual void ProcessState(FLOAT);
	virtual INT IsBlockedBy(class AActor const *) const;
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	virtual void TickAuthoritative(FLOAT);
	virtual INT GetHeartBeatStatus();
	virtual void ShowWeaponParticles(class AR6Pawn *, class AR6PlayerController *);
	virtual FLOAT ComputeEffectiveAccuracy(FLOAT, FLOAT);
	virtual FLOAT GetMovingModifier(FLOAT, FLOAT);
	virtual bool WeaponIsNotFiring();
	AR6Weapons(class AR6Weapons const &);
	AR6Weapons();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventHideAttachment();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Weapons & operator=(class AR6Weapons const &);
private:
	static class UClass PrivateStaticClass();
};

enum eHitResult{
	 HR_NoMaterial=0
	,HR_Explode=1
	,HR_Ricochet=2
	,HR_GoThrough=3
};
struct AR6Bullet_execStunLoss_Parms
{
	FLOAT fRange;                                                             //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Bullet_execRangeConversion_Parms
{
	FLOAT fRange;                                                             //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Bullet_eventHitWall_Parms
{
	class FVector vHitNormal;                                                 //CPF_Parm
	class AActor* Wall;                                                       //CPF_Parm
	BYTE eHitResult;                                                          //0
	class UClass* CurrentHitEffect;                                           //0
	class UClass* ExitHitEffect;                                              //0
	class FVector vRealHitLocation;                                           //0
	class FVector vexitLocation;                                              //0
	class FVector vexitNormal;                                                //0
	INT iInitialEnergy;                                                       //0
	class FVector vRangeVector;                                               //0
	FLOAT fDistance;                                                          //0
};
struct AR6Bullet_execSpawnSFX_Parms
{
	class UClass* fxClass;                                                    //CPF_Parm
	class FVector vLocation;                                                  //CPF_Parm
	class FRotator vRotation;                                                 //CPF_Parm
	class AActor* pSource;                                                    //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	class AR6WallHit* WallHitEffect;                                          //0
};
struct AR6Bullet_execProcessTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	FLOAT fResultKillEnergy;                                                  //0
	FLOAT fResultStunEnergy;                                                  //0
	FLOAT fRange;                                                             //0
	class AR6Pawn* OtherPawn;                                                 //0
	class AR6Pawn* instigatorPawn;                                            //0
};
struct AR6Bullet_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AActor* HitActor;                                                   //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class UMaterial* pMaterial;                                               //0
};
struct AR6Bullet_execDeactivateBullet_Parms
{
};
struct AR6Bullet_execSetSpeed_Parms
{
	FLOAT fBulletSpeed;                                                       //CPF_Parm
};
struct AR6Bullet_execPostBeginPlay_Parms
{
};
struct AR6Bullet_execDestroyedByImpact_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Bullet_execBulletGoesThroughSurface_Parms
{
	class AActor* TouchedSurface;                                             //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vBulletVelocity;                                            //CPF_Parm|CPF_OutParm
	class FVector vRealHitLocation;                                           //CPF_Parm|CPF_OutParm
	class FVector vexitLocation;                                              //CPF_Parm|CPF_OutParm
	class FVector vexitNormal;                                                //CPF_Parm|CPF_OutParm
	class UClass TouchedEffects;                                              //CPF_Parm|CPF_OutParm
	class UClass ExitEffects;                                                 //CPF_Parm|CPF_OutParm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6Bullet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Bullet : public AR6AbstractBullet
{
public:
	INT m_iEnergy;                                                            //CPF_Edit
	INT m_iPenetrationFactor;                                                 //CPF_Edit
	INT m_iNoArmorModifier;                                                   //CPF_Edit
	INT m_iBulletGroupID;                                                     //0
	BITFIELD m_bBulletIsGone : 1;                                             //0
	BITFIELD m_bIsGrenade : 1;                                                //0
	BITFIELD m_bBulletDeactivated : 1;                                        //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fKillStunTransfer;                                                //CPF_Edit
	FLOAT m_fRangeConversionConst;                                            //CPF_Edit
	FLOAT m_fRange;                                                           //CPF_Edit
	FLOAT m_fExplosionRadius;                                                 //CPF_Edit
	FLOAT m_fKillBlastRadius;                                                 //CPF_Edit
	FLOAT m_fExplosionDelay;                                                  //CPF_Edit
	class AActor* m_AffectedActor;                                            //0
	class AR6BulletManager* m_BulletManager;                                  //0
	class FVector m_vSpawnedPosition;                                         //0
	class FString m_szAmmoName;                                               //CPF_Edit|CPF_NeedCtorLink
	class FString m_szAmmoType;                                               //CPF_Edit|CPF_NeedCtorLink
	class FString m_szBulletType;                                             //CPF_Edit|CPF_NeedCtorLink
	virtual ~AR6Bullet();
	virtual INT IsBlockedBy(class AActor const *) const;
	virtual INT ShouldTrace(class AActor *, DWORD);
	AR6Bullet(class AR6Bullet const &);
	AR6Bullet();
	static void CDECL InternalConstructor(void *);
	FLOAT RangeConversion(FLOAT);
	static class UClass * CDECL StaticClass();
	FLOAT StunLoss(FLOAT);
	void execBulletGoesThroughSurface(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Bullet & operator=(class AR6Bullet const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6Gadget_execGiveMoreAmmo_Parms
{
};
struct AR6Gadget_execSetHoldAttachPoint_Parms
{
};
struct AR6Gadget_execDisableWeaponOrGadget_Parms
{
};
struct AR6Gadget_execTurnOffEmitters_Parms
{
	BITFIELD bTurnOff : 1;                                                    //CPF_Parm
};

// *****************************************************************************
// AR6Gadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Gadget : public AR6Weapons
{
public:
	virtual ~AR6Gadget();
	AR6Gadget(class AR6Gadget const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Gadget & operator=(class AR6Gadget const &);
protected:
	AR6Gadget();
private:
	static class UClass PrivateStaticClass();
};

enum eGrenadePawnPose{
	 GPP_Stand=0
	,GPP_Crouch=1
	,GPP_ProneFacing=2
};
enum eGrenadeBoneTarget{
	 GBT_Head=0
	,GBT_Body=1
	,GBT_LeftArm=2
	,GBT_RightArm=3
	,GBT_LeftLeg=4
	,GBT_RightLeg=5
};

// -----------------------------------------------------------------------------
// FsDamagePercentage ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FsDamagePercentage
{
public:
	FLOAT fHead;                                                          //CPF_Edit
	FLOAT fBody;                                                          //CPF_Edit
	FLOAT fArms;                                                          //CPF_Edit
	FLOAT fLegs;                                                          //CPF_Edit
};
struct AR6Grenade_execHurtPawns_Parms
{
};
struct AR6Grenade_execGetPawnPose_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fDistFeet;                                                          //0
	FLOAT fDistHead;                                                          //0
	class FVector vFeet;                                                      //0
	class FVector vHead;                                                      //0
};
struct AR6Grenade_execHitRandomBodyPart_Parms
{
	BYTE ePawnPose;                                                           //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fRandVal;                                                           //0
	FLOAT fLeftArmVal;                                                        //0
	FLOAT fRightArmVal;                                                       //0
	FLOAT fLeftLegVal;                                                        //0
	FLOAT fRighLegVal;                                                        //0
	FLOAT fBodyVal;                                                           //0
	FLOAT fHeadVal;                                                           //0
};
struct AR6Grenade_execGetLocalizedDamagePercentage_Parms
{
	BYTE ePawnPose;                                                           //CPF_Parm
	BYTE eBoneTarget;                                                         //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Grenade_execProcessTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
};
struct AR6Grenade_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6Grenade_execLanded_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
};
struct AR6Grenade_execHitWall_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
	class AActor* Wall;                                                       //CPF_Parm
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class FVector vTraceEnd;                                                  //0
	class FVector vTraceStart;                                                //0
	class AActor* pHit;                                                       //0
	class UMaterial* HitMaterial;                                             //0
};
struct AR6Grenade_execExplode_Parms
{
	class AActor* HitActor;                                                   //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class UMaterial* HitMaterial;                                             //0
	class AR6GrenadeDecal* GrenadeDecal;                                      //0
	class AR6ActorSound* pGrenadeSound;                                       //0
	class FRotator GrenadeDecalRotation;                                      //0
};
struct AR6Grenade_execFirstPassReset_Parms
{
};
struct AR6Grenade_eventDestroyed_Parms
{
	class ALight* pEffectLight;                                               //0
	class UClass* pExplosionParticles;                                        //0
};
struct AR6Grenade_eventTimer_Parms
{
};
struct AR6Grenade_execActivate_Parms
{
};
struct AR6Grenade_execPostBeginPlay_Parms
{
};
struct AR6Grenade_execSelfDestroy_Parms
{
};
struct AR6Grenade_execGetGrenadeEmitter_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6GameOptions* pGameOptions;                                       //0
};

// *****************************************************************************
// AR6Grenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Grenade : public AR6Bullet
{
public:
	BYTE m_eOldPhysic;                                                        //0
	BYTE m_eExplosionSoundType;                                               //0
	BYTE m_eGrenadeType;                                                      //0
	INT m_iNumberOfFragments;                                                 //CPF_Edit
	BITFIELD m_bFirstImpact : 1;                                              //0
	BITFIELD m_bDestroyedByImpact : 1;                                        //0
	FLOAT m_fDuration;                                                        //0
	FLOAT m_fShakeRadius;                                                     //0
	FLOAT m_fEffectiveOutsideKillRadius;                                      //0
	class USound* m_sndExplosionSound;                                        //CPF_Edit
	class USound* m_sndExplosionSoundStop;                                    //CPF_Edit
	class USound* m_sndExplodeMetal;                                          //CPF_Edit
	class USound* m_sndExplodeWater;                                          //CPF_Edit
	class USound* m_sndExplodeAir;                                            //CPF_Edit
	class USound* m_sndExplodeDirt;                                           //CPF_Edit
	class USound* m_ImpactSound;                                              //CPF_Edit
	class USound* m_ImpactGroundSound;                                        //CPF_Edit
	class USound* m_ImpactWaterSound;                                         //CPF_Edit
	class USound* m_sndEarthQuake;                                            //CPF_Edit
	class AR6DemolitionsGadget* m_Weapon;                                     //0
	class AEmitter* m_pEmmiter;                                               //CPF_Edit
	class UClass* m_pExplosionParticles;                                      //CPF_Edit
	class UClass* m_pExplosionParticlesLOW;                                   //CPF_Edit
	class UClass* m_pExplosionLight;                                          //CPF_Edit
	class UClass* m_GrenadeDecalClass;                                        //0
	struct FsDamagePercentage m_DmgPercentStand;                              //CPF_Edit
	struct FsDamagePercentage m_DmgPercentCrouch;                             //CPF_Edit
	struct FsDamagePercentage m_DmgPercentProne;                              //CPF_Edit
	virtual ~AR6Grenade();
	virtual void PostNetReceive();
	AR6Grenade(class AR6Grenade const &);
	AR6Grenade();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Grenade & operator=(class AR6Grenade const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// Aammo762mmM43 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo762mmM43 : public AR6Bullet
{
};

// *****************************************************************************
// Aammo9mmParabellum (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo9mmParabellum : public AR6Bullet
{
};
struct AR6Reticule_execSetIdentificationReticule_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fStrSizeX;                                                          //0
	FLOAT fStrSizeY;                                                          //0
	INT X;                                                                    //0
	INT Y;                                                                    //0
};
struct AR6Reticule_execSetReticuleInfo_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FColor aColor;                                                      //0
	class UR6GameOptions* GameOptions;                                        //0
};
struct AR6Reticule_execPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};

// *****************************************************************************
// AR6Reticule (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Reticule : public AActor
{
public:
	INT m_iNonFunctionnalX;                                                   //CPF_Edit
	INT m_iNonFunctionnalY;                                                   //CPF_Edit
	BITFIELD m_bIdentifyCharacter : 1;                                        //0
	BITFIELD m_bAimingAtFriendly : 1;                                         //0
	BITFIELD m_bShowNames : 1;                                                //0
	FLOAT m_fAccuracy;                                                        //0
	FLOAT m_fZoomScale;                                                       //0
	FLOAT m_fReticuleOffsetX;                                                 //0
	FLOAT m_fReticuleOffsetY;                                                 //0
	class UFont* m_SmallFont_14pt;                                            //0
	class FColor m_color;                                                     //CPF_Config
	class FString m_CharacterName;                                            //CPF_NeedCtorLink
	virtual ~AR6Reticule();
	AR6Reticule(class AR6Reticule const &);
	AR6Reticule();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void UpdateReticule(class AR6PlayerController *, FLOAT);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Reticule & operator=(class AR6Reticule const &);
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// NoChargesLeft ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT NoChargesLeft
{
};

// -----------------------------------------------------------------------------
// GetNextCharge ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GetNextCharge
{
};

// -----------------------------------------------------------------------------
// ChargeArmed ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ChargeArmed
{
};

// -----------------------------------------------------------------------------
// ChargeReady ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ChargeReady
{
};
struct AR6DemolitionsGadget_execCanSwitchToWeapon_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DemolitionsGadget_eventSetGadgetStaticMesh_Parms
{
};
struct AR6DemolitionsGadget_eventHideAttachment_Parms
{
};
struct AR6DemolitionsGadget_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct AR6DemolitionsGadget_execCancelChargeInstallation_Parms
{
};
struct AR6DemolitionsGadget_execServerCancelChargeInstallation_Parms
{
};
struct AR6DemolitionsGadget_execServerGotoSetExplosive_Parms
{
};
struct AR6DemolitionsGadget_execCanPlaceCharge_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vFeetLocation;                                              //0
	class FVector vLookLocation;                                              //0
	class AR6Pawn* pawnOwner;                                                 //0
	class AR6PlayerController* PlayerCtrl;                                    //0
};
struct AR6DemolitionsGadget_execR6SetReticule_Parms
{
	class AController* LocalPlayerController;                                 //CPF_Parm
	class AR6PlayerController* PlayerCtrl;                                    //0
	class UClass* ReticuleToSpawn;                                            //0
};
struct AR6DemolitionsGadget_execDestroyReticules_Parms
{
	class AR6Reticule* aReticule;                                             //0
};
struct AR6DemolitionsGadget_execHideReticule_Parms
{
};
struct AR6DemolitionsGadget_execRemoveFirstPersonWeapon_Parms
{
};
struct AR6DemolitionsGadget_execStopAltFire_Parms
{
};
struct AR6DemolitionsGadget_execAltFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
};
struct AR6DemolitionsGadget_execStopFire_Parms
{
	BITFIELD bSoundOnly : 1;                                                  //CPF_Parm
};
struct AR6DemolitionsGadget_execFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
};
struct AR6DemolitionsGadget_execServerDetonate_Parms
{
};
struct AR6DemolitionsGadget_execSwitchToChargeHandAnimations_Parms
{
};
struct AR6DemolitionsGadget_execSwitchToDetonatorHandAnimations_Parms
{
};
struct AR6DemolitionsGadget_execStartLoopingAnims_Parms
{
};
struct AR6DemolitionsGadget_execLoadFirstPersonWeapon_Parms
{
	class APawn* NetOwner;                                                    //CPF_Parm
	class AController* LocalPlayerController;                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DemolitionsGadget_execSetAmmoStaticMesh_Parms
{
};
struct AR6DemolitionsGadget_execActivate_Parms
{
};
struct AR6DemolitionsGadget_execPlaceChargeAnimation_Parms
{
};
struct AR6DemolitionsGadget_execServerPlaceChargeAnimation_Parms
{
};
struct AR6DemolitionsGadget_execServerPlaceCharge_Parms
{
	class FVector vLocation;                                                  //CPF_Parm
	class FRotator rDesiredRotation;                                          //0
};
struct AR6DemolitionsGadget_execPostNetBeginPlay_Parms
{
};
struct AR6DemolitionsGadget_eventPostBeginPlay_Parms
{
};
struct AR6DemolitionsGadget_execUpdateHands_Parms
{
};
struct AR6DemolitionsGadget_execClientMyUnitIsDestroyed_Parms
{
};
struct AR6DemolitionsGadget_execMyUnitIsDestroyed_Parms
{
};
struct AR6DemolitionsGadget_eventNbBulletChange_Parms
{
};

// *****************************************************************************
// AR6DemolitionsGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DemolitionsGadget : public AR6Gadget
{
public:
	BITFIELD m_bDetonated : 1;                                                //0
	BITFIELD m_bChargeInPosition : 1;                                         //0
	BITFIELD m_bCanPlaceCharge : 1;                                           //0
	BITFIELD m_bInstallingCharge : 1;                                         //0
	BITFIELD m_bCancelChargeInstallation : 1;                                 //0
	BITFIELD m_bRaiseWeapon : 1;                                              //0
	BITFIELD m_bHide : 1;                                                     //CPF_Net
	BITFIELD m_bDetonator : 1;                                                //CPF_Net
	class AR6Reticule* m_ReticuleConfirm;                                     //0
	class AR6Reticule* m_ReticuleBlock;                                       //0
	class AR6Reticule* m_ReticuleDetonator;                                   //0
	class UStaticMesh* m_DetonatorStaticMesh;                                 //0
	class UTexture* m_DetonatorTexture;                                       //0
	class UStaticMesh* m_ChargeStaticMesh;                                    //0
	class AR6Grenade* BulletActor;                                            //CPF_Net
	FName m_ChargeAttachPoint;                                                //0
	FName m_DetonatorAttachPoint;                                             //0
	class UClass* m_pExplosionParticles;                                      //0
	class FVector m_vLocation;                                                //0
	class FString m_szReticuleBlockClass;                                     //CPF_NeedCtorLink
	class FString m_szDetonatorReticuleClass;                                 //CPF_NeedCtorLink
	virtual ~AR6DemolitionsGadget();
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	AR6DemolitionsGadget(class AR6DemolitionsGadget const &);
	AR6DemolitionsGadget();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventNbBulletChange();
	void eventSetGadgetStaticMesh();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DemolitionsGadget & operator=(class AR6DemolitionsGadget const &);
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// NoGrenadeLeft ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT NoGrenadeLeft
{
};

// -----------------------------------------------------------------------------
// WaitEndOfThrow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitEndOfThrow
{
};

// -----------------------------------------------------------------------------
// ReadyToThrow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ReadyToThrow
{
};

// -----------------------------------------------------------------------------
// StandByToThrow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT StandByToThrow
{
};
struct AR6GrenadeWeapon_execCanSwitchToWeapon_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GrenadeWeapon_eventHideAttachment_Parms
{
};
struct AR6GrenadeWeapon_execWeaponInitialization_Parms
{
	class APawn* pawnOwner;                                                   //CPF_Parm
};
struct AR6GrenadeWeapon_execGetSaveDistanceToThrow_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GrenadeWeapon_execClientThrowGrenade_Parms
{
};
struct AR6GrenadeWeapon_execThrowGrenade_Parms
{
	class FVector vStart;                                                     //0
	class FRotator rFiringDir;                                                //0
	class AR6Grenade* aGrenade;                                               //0
	class AR6RainbowAI* localRainbowAI;                                       //0
	class AR6Pawn* pawnOwner;                                                 //0
};
struct AR6GrenadeWeapon_execDestroyReticules_Parms
{
	class AR6Reticule* aReticule;                                             //0
};
struct AR6GrenadeWeapon_execFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
};
struct AR6GrenadeWeapon_execGetExplosionDelay_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GrenadeWeapon_execServerSetGrenade_Parms
{
	BYTE eGrenade;                                                            //CPF_Parm
	class AR6Pawn* pawnOwner;                                                 //0
};
struct AR6GrenadeWeapon_execServerSetThrow_Parms
{
	BYTE eThrow;                                                              //CPF_Parm
};
struct AR6GrenadeWeapon_execStartFalling_Parms
{
};
struct AR6GrenadeWeapon_execDropGrenade_Parms
{
	class AR6Grenade* aGrenade;                                               //0
	class FVector vStart;                                                     //0
};
struct AR6GrenadeWeapon_execServerImReadyToThrow_Parms
{
	BITFIELD bReady : 1;                                                      //CPF_Parm
};
struct AR6GrenadeWeapon_execPostBeginPlay_Parms
{
	class AR6RainbowAI* localRainbowAI;                                       //0
};

// *****************************************************************************
// AR6GrenadeWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GrenadeWeapon : public AR6Gadget
{
public:
	BYTE m_eThrow;                                                            //0
	BITFIELD m_bCanThrowGrenade : 1;                                          //0
	BITFIELD m_bFistPersonAnimFinish : 1;                                     //0
	BITFIELD m_bPinToRemove : 1;                                              //0
	BITFIELD m_bReadyToThrow : 1;                                             //0
	virtual ~AR6GrenadeWeapon();
	AR6GrenadeWeapon(class AR6GrenadeWeapon const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6GrenadeWeapon & operator=(class AR6GrenadeWeapon const &);
protected:
	AR6GrenadeWeapon();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// Aammo12gauge (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo12gauge : public AR6Bullet
{
};
struct AR6Shotgun_execNbBulletToShot_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6Shotgun (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Shotgun : public AR6Weapons
{
};

// *****************************************************************************
// Aammo762mmM43Normal (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo762mmM43Normal : public Aammo762mmM43
{
};
struct AR6TearGasGrenade_execTimer_Parms
{
	class AR6SmokeCloud* pCloud;                                              //0
};
struct AR6TearGasGrenade_execExplode_Parms
{
	class ALight* pEffectLight;                                               //0
	class UClass* pExplosionParticles;                                        //0
};
struct AR6TearGasGrenade_eventDestroyed_Parms
{
};
struct AR6TearGasGrenade_execHurtPawns_Parms
{
	class AR6Pawn* aPawn;                                                     //0
	FLOAT fElapsedTime;                                                       //0
	FLOAT fVisibilityRadius;                                                  //0
	FLOAT fMessageRadius;                                                     //0
};

// *****************************************************************************
// AR6TearGasGrenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TearGasGrenade : public AR6Grenade
{
public:
	BITFIELD m_bGrenadeExploded : 1;                                          //0
	FLOAT m_fExpansionTime;                                                   //0
	FLOAT m_fStartTime;                                                       //0
};
struct AR6DemolitionsUnit_execActivate_Parms
{
};
struct AR6DemolitionsUnit_execHitWall_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
	class AActor* Wall;                                                       //CPF_Parm
};
struct AR6DemolitionsUnit_execLanded_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
};
struct AR6DemolitionsUnit_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6DemolitionsUnit_execProcessTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
};
struct AR6DemolitionsUnit_execExplode_Parms
{
};
struct AR6DemolitionsUnit_execDestroyedByImpact_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DemolitionsUnit_execDoorExploded_Parms
{
};
struct AR6DemolitionsUnit_execDistributeDamage_Parms
{
	class AActor* anActor;                                                    //CPF_Parm
	class FVector vLocationOfExplosion;                                       //CPF_Parm
	INT iCurrentFragment;                                                     //0
	FLOAT fCurrentNumberOfFragments;                                          //0
	class FVector vHit;                                                       //0
	class FVector vHitNormal;                                                 //0
	class FVector vExplosionMomentum;                                         //0
	class FVector vDamageLocation;                                            //0
	FLOAT fDistFromGrenade;                                                   //0
	BYTE eBoneTarget;                                                         //0
	FLOAT fDamagePercent;                                                     //0
	FLOAT fEffectiveKillValue;                                                //0
	FLOAT fEffectiveStunValue;                                                //0
	class AR6IORotatingDoor* pImADoor;                                        //0
};

// *****************************************************************************
// AR6DemolitionsUnit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DemolitionsUnit : public AR6Grenade
{
public:
	BITFIELD m_bExploding : 1;                                                //0
};

// *****************************************************************************
// Aammo9mmParabellumSubsonic (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo9mmParabellumSubsonic : public Aammo9mmParabellum
{
};

// *****************************************************************************
// Aammo9mmParabellumNormal (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo9mmParabellumNormal : public Aammo9mmParabellum
{
};
struct AR6SmokeCloud_eventTimer_Parms
{
	FLOAT fElapsedTime;                                                       //0
};
struct AR6SmokeCloud_execSetCloud_Parms
{
	class AR6Grenade* aGrenade;                                               //CPF_Parm
	FLOAT fExpansionTime;                                                     //CPF_Parm
	FLOAT fFinalRadius;                                                       //CPF_Parm
	FLOAT fDuration;                                                          //CPF_Parm
};

// *****************************************************************************
// AR6SmokeCloud (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SmokeCloud : public AActor
{
public:
	FLOAT m_fStartTime;                                                       //0
	FLOAT m_fExpansionTime;                                                   //0
	FLOAT m_fFinalRadius;                                                     //0
	FLOAT m_fCurrentRadius;                                                   //0
	class AR6Grenade* m_grenade;                                              //0
	virtual ~AR6SmokeCloud();
	virtual INT IsBlockedBy(class AActor const *) const;
	virtual INT ShouldTrace(class AActor *, DWORD);
	AR6SmokeCloud(class AR6SmokeCloud const &);
	AR6SmokeCloud();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6SmokeCloud & operator=(class AR6SmokeCloud const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6HBSGadget_execStartLoopingAnims_Parms
{
};
struct AR6HBSGadget_execDisableWeaponOrGadget_Parms
{
};
struct AR6HBSGadget_execLoadFirstPersonWeapon_Parms
{
	class APawn* NetOwner;                                                    //CPF_Parm
	class AController* LocalPlayerController;                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HBSGadget_execRemoveFirstPersonWeapon_Parms
{
};
struct AR6HBSGadget_execDisplayHeartBeat_Parms
{
	BITFIELD bActivateHeartBeat : 1;                                          //CPF_Parm
	class AR6Pawn* pawnOwner;                                                 //0
};
struct AR6HBSGadget_execStopAltFire_Parms
{
};
struct AR6HBSGadget_execAltFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
};
struct AR6HBSGadget_execStopFire_Parms
{
	BITFIELD bSoundOnly : 1;                                                  //CPF_Parm
};
struct AR6HBSGadget_execFire_Parms
{
	FLOAT fValue;                                                             //CPF_Parm
};
struct AR6HBSGadget_execServerToggleHeartBeatProperties_Parms
{
	BITFIELD bActiveHeartBeat : 1;                                            //CPF_Parm
};
struct AR6HBSGadget_eventIsGoggles_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HBSGadget_execToggleHeartBeatProperties_Parms
{
	BITFIELD bTurnItOn : 1;                                                   //CPF_Parm
};

// *****************************************************************************
// AR6HBSGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6HBSGadget : public AR6Gadget
{
public:
	BITFIELD m_bHeartBeatOn : 1;                                              //0
	class USound* m_sndActivation;                                            //0
	class USound* m_sndDesactivation;                                         //0
	virtual ~AR6HBSGadget();
	virtual INT GetHeartBeatStatus();
	AR6HBSGadget(class AR6HBSGadget const &);
	AR6HBSGadget();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void execToggleHeartBeatProperties(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6HBSGadget & operator=(class AR6HBSGadget const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6BulletManager_eventDestroyed_Parms
{
	INT i;                                                                    //0
	INT iSaveBulletIndex;                                                     //0
};
struct AR6BulletManager_execAffectActor_Parms
{
	INT BulletGroup;                                                          //CPF_Parm
	class AActor* ActorAffected;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iBulletIndex;                                                         //0
	INT iSaveBulletIndex;                                                     //0
};
struct AR6BulletManager_execSpawnBullet_Parms
{
	class FVector VPosition;                                                  //CPF_Parm
	class FRotator rRotation;                                                 //CPF_Parm
	FLOAT fBulletSpeed;                                                       //CPF_Parm
	BITFIELD bFirstInShell : 1;                                               //CPF_Parm
};
struct AR6BulletManager_execSetBulletParameter_Parms
{
	class AR6EngineWeapon* AWeapon;                                           //CPF_Parm
	class AR6Weapons* aR6Weapon;                                              //0
};
struct AR6BulletManager_execInitBulletMgr_Parms
{
	class APawn* TheInstigator;                                               //CPF_Parm
};

// *****************************************************************************
// AR6BulletManager (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BulletManager : public AR6AbstractBulletManager
{
public:
	INT m_iCurrentBullet;                                                     //0
	INT m_iBulletSpeed;                                                       //0
	INT m_iBulletEnergy;                                                      //0
	INT m_iNextBulletGroupID;                                                 //0
	class AR6Bullet* m_BulletArray[20];                                       //0
};

// *****************************************************************************
// AR6MachineGun (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MachineGun : public AR6Weapons
{
};

// *****************************************************************************
// Aammo12gaugeBuck (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo12gaugeBuck : public Aammo12gauge
{
};
struct AR6PumpShotgun_execGunIsFull_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PumpShotgun_execIsPumpShotGun_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PumpShotgun_execClientAddShell_Parms
{
};
struct AR6PumpShotgun_execAddClips_Parms
{
	INT iNbOfExtraClips;                                                      //CPF_Parm
};
struct AR6PumpShotgun_execServerPutBulletInShotgun_Parms
{
};

// *****************************************************************************
// AR6PumpShotgun (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PumpShotgun : public AR6Shotgun
{
};

// *****************************************************************************
// AR6AssaultRifle (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AssaultRifle : public AR6Weapons
{
};

// *****************************************************************************
// Aammo762mmM43NormalFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo762mmM43NormalFMJ : public Aammo762mmM43Normal
{
};
struct AR6BreachingChargeUnit_execDestroyedByImpact_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6BreachingChargeUnit_execHurtPawns_Parms
{
	class AR6InteractiveObject* anObject;                                     //0
	class AR6Pawn* aPawn;                                                     //0
	class AR6Pawn* aPawnInstigator;                                           //0
	class AR6DemolitionsUnit* aDemoUnit;                                      //0
	FLOAT fDistFromCharge;                                                    //0
	class FVector vExplosionMomentum;                                         //0
	class FVector vDoorCenter;                                                //0
	class FVector vActorDir;                                                  //0
	class FVector vFacingDir;                                                 //0
	class FRotator rDoorInit;                                                 //0
	INT _iHealth;                                                             //0
	INT _PawnsHurtCount;                                                      //0
	BITFIELD _bCompilingStats : 1;                                            //0
	class AController* aC;                                                    //0
	class AR6PlayerController* aPC;                                           //0
	FLOAT fDistFromGrenade;                                                   //0
	class AActor* HitActor;                                                   //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
};

// *****************************************************************************
// AR6BreachingChargeUnit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BreachingChargeUnit : public AR6DemolitionsUnit
{
};
struct AR6BreachingChargeGadget_execServerDetonate_Parms
{
};
struct AR6BreachingChargeGadget_execPlaceChargeAnimation_Parms
{
};
struct AR6BreachingChargeGadget_execServerPlaceChargeAnimation_Parms
{
};
struct AR6BreachingChargeGadget_execNPCPlaceCharge_Parms
{
	class AActor* aDoor;                                                      //CPF_Parm
};
struct AR6BreachingChargeGadget_execNPCDetonateCharge_Parms
{
};
struct AR6BreachingChargeGadget_execCharacterOnOtherSide_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iDiffYaw;                                                             //0
};
struct AR6BreachingChargeGadget_execServerSetDoor_Parms
{
	class AR6IORotatingDoor* aDoor;                                           //CPF_Parm
};
struct AR6BreachingChargeGadget_execServerPlaceCharge_Parms
{
	class FVector vLocation;                                                  //CPF_Parm
};
struct AR6BreachingChargeGadget_execSetAmmoStaticMesh_Parms
{
};
struct AR6BreachingChargeGadget_execExplode_Parms
{
};
struct AR6BreachingChargeGadget_execCanPlaceCharge_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vFeetLocation;                                              //0
	class FVector vLookLocation;                                              //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class AActor* HitActor;                                                   //0
	class AR6Pawn* pawnOwner;                                                 //0
};
struct AR6BreachingChargeGadget_execGetFiringAnimName_Parms
{
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6BreachingChargeGadget_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};

// *****************************************************************************
// AR6BreachingChargeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BreachingChargeGadget : public AR6DemolitionsGadget
{
public:
	class AR6IORotatingDoor* m_IORDoor;                                       //0
};
struct AR6TearGasGrenadeGadget_execServerSetGrenade_Parms
{
	BYTE eGrenade;                                                            //CPF_Parm
	class APawn* PawnTmp;                                                     //0
};

// *****************************************************************************
// AR6TearGasGrenadeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TearGasGrenadeGadget : public AR6GrenadeWeapon
{
};

// *****************************************************************************
// AR6SmokeGrenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SmokeGrenade : public AR6TearGasGrenade
{
};
struct AR6SmokeGrenadeGadget_execServerSetGrenade_Parms
{
	BYTE eGrenade;                                                            //CPF_Parm
	class APawn* PawnTmp;                                                     //0
};

// *****************************************************************************
// AR6SmokeGrenadeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SmokeGrenadeGadget : public AR6GrenadeWeapon
{
};
struct AR6GrenadeReticule_execPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT X;                                                                    //0
	INT Y;                                                                    //0
	FLOAT fScale;                                                             //0
};

// *****************************************************************************
// AR6GrenadeReticule (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GrenadeReticule : public AR6Reticule
{
public:
	class UTexture* m_Circle;                                                 //CPF_Edit
	class UTexture* m_Dot;                                                    //CPF_Edit
};
struct AR6WithWeaponReticule_execPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fScale;                                                             //0
	INT iWidth;                                                               //0
	INT iHeight;                                                              //0
	FLOAT fAjustedAccuracy;                                                   //0
	FLOAT fPositionAjustment;                                                 //0
	FLOAT fCenterOffsetX;                                                     //0
	FLOAT fCenterOffsetY;                                                     //0
};

// *****************************************************************************
// AR6WithWeaponReticule (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6WithWeaponReticule : public AR6Reticule
{
public:
	INT c_iLineWidth;                                                         //0
	INT c_iLineHeight;                                                        //0
	class UTexture* m_LineTexture;                                            //CPF_Edit
};
struct AR6FragGrenade_execActivate_Parms
{
};
struct AR6FragGrenade_eventTimer_Parms
{
	class AR6RainbowAI* rainbowAI;                                            //0
	class AController* aController;                                           //0
	class AR6Pawn* aGrenadeOwner;                                             //0
	FLOAT fDangerZone;                                                        //0
};
struct AR6FragGrenade_execExplode_Parms
{
	class AR6SmokeCloud* pCloud;                                              //0
};
struct AR6FragGrenade_execHurtPawns_Parms
{
	class AR6InteractiveObject* anObject;                                     //0
	class AR6DemolitionsUnit* aDemoUnit;                                      //0
	class AR6Pawn* aPawn;                                                     //0
	class AR6Pawn* aPawnInstigator;                                           //0
	BYTE eBoneTarget;                                                         //0
	class AR6IORotatingDoor* pImADoor;                                        //0
	FLOAT fDistFromGrenade;                                                   //0
	FLOAT fDamagePercent;                                                     //0
	FLOAT fEffectiveKillValue;                                                //0
	FLOAT fEffectiveStunValue;                                                //0
	class FVector vDamageLocation;                                            //0
	class FVector vExplosionMomentum;                                         //0
	INT iCurrentFragment;                                                     //0
	FLOAT fCurrentNumberOfFragments;                                          //0
	INT _iHealth;                                                             //0
	INT _PawnsHurtCount;                                                      //0
	BITFIELD _bCompilingStats : 1;                                            //0
	class AController* aC;                                                    //0
	class AR6PlayerController* aPC;                                           //0
};

// *****************************************************************************
// AR6FragGrenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FragGrenade : public AR6Grenade
{
public:
	FLOAT m_fTimerCounter;                                                    //0
};
struct AR6FragGrenadeGadget_execServerSetGrenade_Parms
{
	BYTE eGrenade;                                                            //CPF_Parm
	class APawn* PawnTmp;                                                     //0
};

// *****************************************************************************
// AR6FragGrenadeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FragGrenadeGadget : public AR6GrenadeWeapon
{
};
struct AR6FlashBang_execHurtPawns_Parms
{
	class AR6Pawn* aPawn;                                                     //0
	class AR6InteractiveObject* anObject;                                     //0
	FLOAT fDistFromFlashbang;                                                 //0
	FLOAT fEffectiveStunValue;                                                //0
	class FVector vDamageLocation;                                            //0
	class FVector vExplosionMomentum;                                         //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class AActor* HitActor;                                                   //0
};

// *****************************************************************************
// AR6FlashBang (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FlashBang : public AR6Grenade
{
public:
	FLOAT m_fBlindEffectRadius;                                               //0
};
struct AR6FlashBangGadget_execServerSetGrenade_Parms
{
	BYTE eGrenade;                                                            //CPF_Parm
	class APawn* PawnTmp;                                                     //0
};

// *****************************************************************************
// AR6FlashBangGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FlashBangGadget : public AR6GrenadeWeapon
{
};

// *****************************************************************************
// Aammo9mmParabellumSubsonicFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo9mmParabellumSubsonicFMJ : public Aammo9mmParabellumSubsonic
{
};

// *****************************************************************************
// AR6Pistol (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Pistol : public AR6Weapons
{
};

// *****************************************************************************
// Aammo9mmParabellumNormalFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT Aammo9mmParabellumNormalFMJ : public Aammo9mmParabellumNormal
{
};

// *****************************************************************************
// AR6SubMachineGun (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SubMachineGun : public AR6Weapons
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
