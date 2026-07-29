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
** Unreal native C++ headers for the R6Engine package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6ENGINE_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(AdjustPawnForDiagonalStrafing)
AUTOGENERATE_NAME(AnimFinished)
AUTOGENERATE_NAME(AttackTimer)
AUTOGENERATE_NAME(CanOpenDoor)
AUTOGENERATE_NAME(ClientNotifySendMatchResults)
AUTOGENERATE_NAME(ClientNotifySendStartMatch)
AUTOGENERATE_NAME(ClientPlayVoices)
AUTOGENERATE_NAME(ClientUpdateLadderStat)
AUTOGENERATE_NAME(ClientVoteSessionAbort)
AUTOGENERATE_NAME(EndCrawl)
AUTOGENERATE_NAME(EndOfGrenadeEffect)
AUTOGENERATE_NAME(EndPeekingMode)
AUTOGENERATE_NAME(FinishInitialization)
AUTOGENERATE_NAME(GetFiringStartPoint)
AUTOGENERATE_NAME(GetRoundTime)
AUTOGENERATE_NAME(GetStanceReticuleModifier)
AUTOGENERATE_NAME(GetZoomMultiplyFactor)
AUTOGENERATE_NAME(GotoCrouch)
AUTOGENERATE_NAME(GotoFoetus)
AUTOGENERATE_NAME(GotoKneel)
AUTOGENERATE_NAME(GotoPointAndSearch)
AUTOGENERATE_NAME(GotoPointToAttack)
AUTOGENERATE_NAME(GotoProne)
AUTOGENERATE_NAME(GotoStand)
AUTOGENERATE_NAME(GotoStateEngageByThreat)
AUTOGENERATE_NAME(InitBiPodPosture)
AUTOGENERATE_NAME(IsFullPeekingOver)
AUTOGENERATE_NAME(IsPeekingLeft)
AUTOGENERATE_NAME(LoopSpecialAnim)
AUTOGENERATE_NAME(OpenDoorFailed)
AUTOGENERATE_NAME(PlayCrouchToProne)
AUTOGENERATE_NAME(PlayFluidPeekingAnim)
AUTOGENERATE_NAME(PlayPeekingAnim)
AUTOGENERATE_NAME(PlayProneToCrouch)
AUTOGENERATE_NAME(PlaySpecialAnim)
AUTOGENERATE_NAME(PlaySpecialPendingAction)
AUTOGENERATE_NAME(PlaySurfaceSwitch)
AUTOGENERATE_NAME(PlayerTeamSelectionReceived)
AUTOGENERATE_NAME(PostRender)
AUTOGENERATE_NAME(PotentialOpenDoor)
AUTOGENERATE_NAME(R6MakeMovementNoise)
AUTOGENERATE_NAME(R6ResetLookDirection)
AUTOGENERATE_NAME(R6SetMovement)
AUTOGENERATE_NAME(ReinitSimulation)
AUTOGENERATE_NAME(RemovePotentialOpenDoor)
AUTOGENERATE_NAME(RequestFormationChange)
AUTOGENERATE_NAME(ResetBipodPosture)
AUTOGENERATE_NAME(ResetDiagonalStrafing)
AUTOGENERATE_NAME(SequenceChanged)
AUTOGENERATE_NAME(SequenceFinished)
AUTOGENERATE_NAME(SetAnimInfo)
AUTOGENERATE_NAME(SetCrouchBlend)
AUTOGENERATE_NAME(SetNewDamageState)
AUTOGENERATE_NAME(SetPeekingInfo)
AUTOGENERATE_NAME(SetPotentialClimber)
AUTOGENERATE_NAME(SetRotationOffset)
AUTOGENERATE_NAME(SpawnRagDoll)
AUTOGENERATE_NAME(StartCrawl)
AUTOGENERATE_NAME(StartFluidPeeking)
AUTOGENERATE_NAME(StartFullPeeking)
AUTOGENERATE_NAME(StartSimulation)
AUTOGENERATE_NAME(StopAttack)
AUTOGENERATE_NAME(StopSimulation)
AUTOGENERATE_NAME(StopSpecialAnim)
AUTOGENERATE_NAME(TurnToFaceActor)
AUTOGENERATE_NAME(UpdateBipodPosture)
AUTOGENERATE_NAME(UpdateTeamFormation)
AUTOGENERATE_NAME(ZDRSetDamageState)

enum EInteractiveAction{
	 IA_PlayAnim=0
	,IA_LookAt=1
};

// -----------------------------------------------------------------------------
// FstSpawnedActor ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstSpawnedActor
{
public:
	class UClass* ActorToSpawn;                                           //CPF_Edit
	class FString HelperName;                                             //CPF_Edit|CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FstRandomMesh ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstRandomMesh
{
public:
	FLOAT fPercentage;                                                    //CPF_Edit
	class UStaticMesh* Mesh;                                              //CPF_Edit
};

// -----------------------------------------------------------------------------
// FstRandomSkin ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstRandomSkin
{
public:
	FLOAT fPercentage;                                                    //CPF_Edit
	TArray<class UMaterial*> Skin;                                        //CPF_Edit|CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FstDamageState ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstDamageState
{
public:
	FLOAT fDamagePercentage;                                              //CPF_Edit
	TArray<struct FstRandomMesh> RandomMeshes;                            //CPF_Edit|CPF_NeedCtorLink
	TArray<struct FstRandomSkin> RandomSkins;                             //CPF_Edit|CPF_NeedCtorLink
	TArray<struct FstSpawnedActor> ActorList;                             //CPF_Edit|CPF_NeedCtorLink
	TArray<class USound*> SoundList;                                      //CPF_Edit|CPF_NeedCtorLink
	class USound* NewAmbientSound;                                        //CPF_Edit
	class USound* NewAmbientSoundStop;                                    //CPF_Edit
};

// -----------------------------------------------------------------------------
// PA_ExecuteGotoEnding ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecuteGotoEnding
{
};

// -----------------------------------------------------------------------------
// PA_Execute ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_Execute
{
};

// -----------------------------------------------------------------------------
// PA_ExecutePlayEnding ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecutePlayEnding
{
};

// -----------------------------------------------------------------------------
// PA_ExecuteLoopRandomAnim ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecuteLoopRandomAnim
{
};

// -----------------------------------------------------------------------------
// PA_ExecuteLoopAnim ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecuteLoopAnim
{
};

// -----------------------------------------------------------------------------
// PA_ExecutePlayAnim ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecutePlayAnim
{
};

// -----------------------------------------------------------------------------
// PA_ExecuteToggleDevice ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecuteToggleDevice
{
};

// -----------------------------------------------------------------------------
// PA_ExecuteGoto ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecuteGoto
{
};

// -----------------------------------------------------------------------------
// PA_ExecuteLookAt ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecuteLookAt
{
};

// -----------------------------------------------------------------------------
// PA_ExecuteStartInteraction ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_ExecuteStartInteraction
{
};
struct AR6InteractiveObject_execPlayInteractiveObjectSound_Parms
{
	struct FstDamageState stState;                                            //CPF_Parm|CPF_NeedCtorLink
	INT iSound;                                                               //0
};
struct AR6InteractiveObject_eventSetNewDamageState_Parms
{
	FLOAT fPercentage;                                                        //CPF_Parm
	INT iState;                                                               //0
	INT iRandomMesh;                                                          //0
	INT iRandomSkin;                                                          //0
	INT iStateToUse;                                                          //0
	FLOAT fRandValue;                                                         //0
	INT iActor;                                                               //0
	INT iSkin;                                                                //0
	struct FstDamageState stState;                                            //CPF_NeedCtorLink
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
	class AActor* SpawnedActor;                                               //0
};
struct AR6InteractiveObject_execR6TakeDamage_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	INT iBulletGroup;                                                         //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fPercentage;                                                        //0
};
struct AR6InteractiveObject_execSwitchToNextAction_Parms
{
};
struct AR6InteractiveObject_execFinishAction_Parms
{
};
struct AR6InteractiveObject_execChangeStaticMesh_Parms
{
	class UStaticMesh* sm;                                                    //CPF_Parm
};
struct AR6InteractiveObject_execPerformAction_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
};
struct AR6InteractiveObject_execStopInteractionWithEndingActions_Parms
{
};
struct AR6InteractiveObject_execStopInteraction_Parms
{
};
struct AR6InteractiveObject_execSetBroken_Parms
{
};
struct AR6InteractiveObject_execTimer_Parms
{
	class AR6Pawn* P;                                                         //0
};
struct AR6InteractiveObject_execSetSkin_Parms
{
	class UMaterial* aSkin;                                                   //CPF_Parm
	INT iIndex;                                                               //CPF_Parm
};
struct AR6InteractiveObject_execPostBeginPlay_Parms
{
	INT i;                                                                    //0
};
struct AR6InteractiveObject_execResetOriginalData_Parms
{
	INT i;                                                                    //0
};
struct AR6InteractiveObject_execSaveOriginalData_Parms
{
	INT iSkin;                                                                //0
};
struct AR6InteractiveObject_execFirstPassReset_Parms
{
};

// *****************************************************************************
// AR6InteractiveObject (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6InteractiveObject : public AActor
{
public:
	BYTE m_HearNoiseType;                                                     //0
	INT m_iActionNumber;                                                      //0
	INT m_iActionIndex;                                                       //0
	INT m_iHitPoints;                                                         //CPF_Edit
	INT m_iCurrentHitPoints;                                                  //0
	INT m_iCurrentState;                                                      //0
	BITFIELD m_bCollisionRemovedFromActor : 1;                                //0
	BITFIELD m_bOriginalCollideActors : 1;                                    //0
	BITFIELD m_bOriginalBlockActors : 1;                                      //0
	BITFIELD m_bOriginalBlockPlayers : 1;                                     //0
	BITFIELD m_bPawnDied : 1;                                                 //0
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD m_bBroken : 1;                                                   //0
	BITFIELD m_bRainbowCanInteract : 1;                                       //CPF_Edit
	BITFIELD m_bEndAction : 1;                                                //0
	BITFIELD m_bBlockCoronas : 1;                                             //CPF_Edit
	BITFIELD m_bBreakableByFlashBang : 1;                                     //CPF_Edit
	FLOAT m_fRadius;                                                          //CPF_Edit
	FLOAT m_fProbability;                                                     //CPF_Edit
	FLOAT m_fActionInterval;                                                  //CPF_Edit
	FLOAT m_fTimeSinceAction;                                                 //0
	FLOAT m_fTimeForNextSound;                                                //0
	FLOAT m_fTimerInterval;                                                   //0
	FLOAT m_fPlayerCAStartTime;                                               //0
	FLOAT m_HearNoiseLoudness;                                                //0
	FLOAT m_fNetDamagePercentage;                                             //CPF_Net
	FLOAT m_fAIBreakNoiseRadius;                                              //CPF_Edit
	class AR6AIController* m_InteractionOwner;                                //0
	class AActor* m_RemoveCollisionFromActor;                                 //CPF_Edit
	class ANavigationPoint* m_Anchor;                                         //CPF_Edit
	class AActor* m_vEndActionGoto;                                           //CPF_Edit
	class UR6InteractiveObjectAction* m_CurrentInteractiveObject;             //0
	class APawn* m_SeePlayerPawn;                                             //0
	class AActor* m_HearNoiseNoiseMaker;                                      //0
	class UMaterial* m_aOldSkins[4];                                          //0
	class UMaterial* m_aRepSkins[4];                                          //CPF_Net
	class UStaticMesh* sm_staticMesh;                                         //0
	class AR6Pawn* m_User;                                                    //0
	class USound* sm_AmbientSound;                                            //0
	class USound* sm_AmbientSoundStop;                                        //0
	FName m_vEndActionAnimName;                                               //CPF_Edit
	TArray<class UR6InteractiveObjectAction*> m_ActionList;                   //CPF_Edit|CPF_NeedCtorLink|CPF_0x04000000
	TArray<class UMaterial*> sm_aSkins;                                       //CPF_NeedCtorLink
	TArray<struct FstDamageState> m_StateList;                                //CPF_Edit|CPF_NeedCtorLink
	TArray<class AActor*> m_AttachedActors;                                   //CPF_Edit|CPF_NeedCtorLink
	virtual ~AR6InteractiveObject();
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	virtual void PostScriptDestroyed();
	virtual INT ShouldTrace(class AActor *, DWORD);
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void CheckForErrors();
	AR6InteractiveObject(class AR6InteractiveObject const &);
	AR6InteractiveObject();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventSetNewDamageState(FLOAT);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6InteractiveObject & operator=(class AR6InteractiveObject const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6IActionObject_execendAction_Parms
{
};
struct AR6IActionObject_execupdateAction_Parms
{
	FLOAT deltaMouse;                                                         //CPF_Parm
	class AActor* actionInstigator;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IActionObject_execstartAction_Parms
{
	FLOAT deltaMouse;                                                         //CPF_Parm
	class AActor* actionInstigator;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6IActionObject (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IActionObject : public AR6InteractiveObject
{
public:
	FLOAT m_fMinMouseMove;                                                    //0
	FLOAT m_fMaxMouseMove;                                                    //0
	class AActor* m_ActionInstigator;                                         //0
	virtual ~AR6IActionObject();
	AR6IActionObject(class AR6IActionObject const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6IActionObject & operator=(class AR6IActionObject const &);
protected:
	AR6IActionObject();
private:
	static class UClass PrivateStaticClass();
};

enum eStateIOObejct{
	 SIO_Start=0
	,SIO_Interrupt=1
	,SIO_Complete=2
};
enum eDeviceCircumstantialAction{
	 DCA_None=0
	,DCA_DisarmBomb=1
	,DCA_ArmBomb=2
	,DCA_Device=3
};
struct AR6IOObject_execPerformSoundAction_Parms
{
	BYTE eState;                                                              //CPF_Parm
};
struct AR6IOObject_execCanToggle_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bCanToggle : 1;                                                  //0
};
struct AR6IOObject_execToggleDevice_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	FLOAT fBackup;                                                            //0
};
struct AR6IOObject_execGetTimeRequired_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOObject_execGetMaxTimeRequired_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOObject_execHasKit_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOObject_execR6CircumstantialActionCancel_Parms
{
};
struct AR6IOObject_execR6GetCircumstantialActionProgress_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
	class APawn* actingPawn;                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fPercentage;                                                        //0
};
struct AR6IOObject_execR6CircumstantialActionProgressStart_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
};
struct AR6IOObject_execLockObjectUse_Parms
{
	BITFIELD bIsInUse : 1;                                                    //CPF_Parm
};
struct AR6IOObject_execResetOriginalData_Parms
{
};
struct AR6IOObject_execSaveOriginalData_Parms
{
};

// *****************************************************************************
// AR6IOObject (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IOObject : public AR6IActionObject
{
public:
	BYTE m_eAnimToPlay;                                                       //CPF_Edit
	BYTE m_ObjectState;                                                       //0
	BITFIELD m_bToggleType : 1;                                               //CPF_Edit
	BITFIELD sm_bToggleType : 1;                                              //0
	BITFIELD m_bIsActivated : 1;                                              //CPF_Edit|CPF_Net
	BITFIELD sm_bIsActivated : 1;                                             //CPF_Net
	FLOAT m_fGainTimeWithElectronicsKit;                                      //CPF_Edit
	FLOAT m_fLockObjectTime;                                                  //0
	class USound* m_StartSnd;                                                 //0
	class USound* m_InterruptedSnd;                                           //0
	class USound* m_CompletedSnd;                                             //0
	virtual ~AR6IOObject();
	AR6IOObject(class AR6IOObject const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6IOObject & operator=(class AR6IOObject const &);
protected:
	AR6IOObject();
private:
	static class UClass PrivateStaticClass();
};

enum eDeviceAnimToPlay{
	 BA_ArmBomb=0
	,BA_DisarmBomb=1
	,BA_Keypad=2
	,BA_PlantDevice=3
	,BA_Keyboard=4
	,BA_Custom=5
};
enum EPendingAction{
	 PENDING_None=0
	,PENDING_Coughing=1
	,PENDING_StopCoughing=2
	,PENDING_Blinded=3
	,PENDING_OpenDoor=4
	,PENDING_StartClimbingLadder=5
	,PENDING_PostStartClimbingLadder=6
	,PENDING_EndClimbingLadder=7
	,PENDING_PostEndClimbingLadder=8
	,PENDING_DropWeapon=9
	,PENDING_ProneToCrouch=10
	,PENDING_CrouchToProne=11
	,PENDING_MoveHitBone=12
	,PENDING_StartClimbingObject=13
	,PENDING_PostStartClimbingObject=14
	,PENDING_SetRemoteCharge=15
	,PENDING_SetBreachingCharge=16
	,PENDING_SetClaymore=17
	,PENDING_InteractWithDevice=18
	,PENDING_LockPickDoor=19
	,PENDING_ComFollowMe=20
	,PENDING_ComCover=21
	,PENDING_ComGo=22
	,PENDING_ComRegroup=23
	,PENDING_ComHold=24
	,PENDING_ActivateNightVision=25
	,PENDING_DeactivateNightVision=26
	,PENDING_SecureWeapon=27
	,PENDING_EquipWeapon=28
	,PENDING_SecureTerrorist=29
	,PENDING_ThrowGrenade=30
	,PENDING_Surrender=31
	,PENDING_Kneeling=32
	,PENDING_Arrest=33
	,PENDING_CallBackup=34
	,PENDING_SpecialAnim=35
	,PENDING_LoopSpecialAnim=36
	,PENDING_StopSpecialAnim=37
	,PENDING_HostageAnim=38
	,PENDING_EndSurrender=39
	,PENDING_StartSurrender=40
	,PENDING_PostEndSurrender=41
	,PENDING_SetFree=42
	,PENDING_ArrestKneel=43
	,PENDING_ArrestWaiting=44
	,PENDING_EndArrest=45
	,PENDING_Custom=46
};
enum eMovementDirection{
	 MOVEDIR_Forward=0
	,MOVEDIR_Backward=1
	,MOVEDIR_Strafe=2
};
enum EHostagePersonality{
	 HPERSO_Coward=0
	,HPERSO_Normal=1
	,HPERSO_Brave=2
	,HPERSO_Bait=3
	,HPERSO_None=4
};
enum eHands{
	 HANDS_None=0
	,HANDS_Right=1
	,HANDS_Left=2
	,HANDS_Both=3
};
enum eMovementPace{
	 PACE_None=0
	,PACE_Prone=1
	,PACE_CrouchWalk=2
	,PACE_CrouchRun=3
	,PACE_Walk=4
	,PACE_Run=5
};
enum eArmor{
	 ARMOR_None=0
	,ARMOR_Light=1
	,ARMOR_Medium=2
	,ARMOR_Heavy=3
};
enum ETerroristType{
	 TTYPE_B1T1=0
	,TTYPE_B1T3=1
	,TTYPE_B2T2=2
	,TTYPE_B2T4=3
	,TTYPE_M1T1=4
	,TTYPE_M1T3=5
	,TTYPE_M2T2=6
	,TTYPE_M2T4=7
	,TTYPE_P1T1=8
	,TTYPE_P2T2=9
	,TTYPE_P3T3=10
	,TTYPE_P1T4=11
	,TTYPE_P2T5=12
	,TTYPE_P3T6=13
	,TTYPE_P1T7=14
	,TTYPE_P2T8=15
	,TTYPE_P3T9=16
	,TTYPE_P1T10=17
	,TTYPE_P2T11=18
	,TTYPE_P3T12=19
	,TTYPE_P4T13=20
	,TTYPE_D1T1=21
	,TTYPE_D1T2=22
	,TTYPE_GOSP=23
	,TTYPE_GUTI=24
	,TTYPE_S1T1=25
	,TTYPE_S1T2=26
	,TTYPE_TXIC=27
	,TTYPE_T1T1=28
	,TTYPE_T2T2=29
	,TTYPE_T1T3=30
	,TTYPE_T2T4=31
};
enum EHeadAttachmentType{
	 ATTACH_Glasses=0
	,ATTACH_Sunglasses=1
	,ATTACH_GasMask=2
	,ATTACH_None=3
};
enum eStrafeDirection{
	 STRAFE_None=0
	,STRAFE_ForwardRight=1
	,STRAFE_ForwardLeft=2
	,STRAFE_BackwardRight=3
	,STRAFE_BackwardLeft=4
};
enum eBodyPart{
	 BP_Head=0
	,BP_Chest=1
	,BP_Abdomen=2
	,BP_Legs=3
	,BP_Arms=4
};

// -----------------------------------------------------------------------------
// FSTWeaponAnim ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTWeaponAnim
{
public:
	FName nAnimToPlay;                                                    //0
	FName nBlendName;                                                     //0
	FLOAT fTweenTime;                                                     //0
	FLOAT fRate;                                                          //0
	BITFIELD bPlayOnce : 1;                                               //0
	BITFIELD bBackward : 1;                                               //0
};
struct AR6Pawn_execPlayWaiting_Parms
{
};
struct AR6Pawn_eventEncroachedBy_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6Pawn_eventPlayWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //0
	BITFIELD bContinue : 1;                                                   //0
};
struct AR6Pawn_execHasPawnSpecificWeaponAnimation_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventSpawnRagDoll_Parms
{
	class UClass* corpseClass;                                                //0
	class UKarmaParamsSkel* skelParams;                                       //0
	class FVector shotDir;                                                    //0
	class FVector shotDir2D;                                                  //0
	class FVector hitLocRel;                                                  //0
	FLOAT maxDim;                                                             //0
	INT i;                                                                    //0
};
struct AR6Pawn_execDropWeaponToGround_Parms
{
};
struct AR6Pawn_execGetHandLocation_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetFiringRotation_Parms
{
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventDestroyed_Parms
{
	INT iCounter;                                                             //0
	class AActor* A;                                                          //0
	class AR6PlayerController* aPC;                                           //0
};
struct AR6Pawn_execFirstPassReset_Parms
{
};
struct AR6Pawn_execDestroyShadow_Parms
{
	class AShadowProjector* aShadowProjector;                                 //0
};
struct AR6Pawn_eventR6DeadEndedMoving_Parms
{
	BITFIELD bSpawnBloodBath : 1;                                             //0
	class FVector vBloodBathLocation;                                         //0
	class FRotator rBloodBathRotation;                                        //0
	class FVector vFloorLocation;                                             //0
	class FVector vFloorNormal;                                               //0
	class FVector vTraceEnd;                                                  //0
};
struct AR6Pawn_eventR6MakeMovementNoise_Parms
{
};
struct AR6Pawn_execHasBumpPriority_Parms
{
	class AR6Pawn* bumpedBy;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execClientSetJumpValues_Parms
{
	FLOAT fNewValue;                                                          //CPF_Parm
};
struct AR6Pawn_execIncrementBulletsFired_Parms
{
};
struct AR6Pawn_execArmorSkillEffect_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execSkillModifier_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fFactor;                                                            //0
};
struct AR6Pawn_eventGetSkill_Parms
{
	BYTE eSkillName;                                                          //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fSkill;                                                             //0
	FLOAT fLevelMul;                                                          //0
};
struct AR6Pawn_eventKImpact_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class FVector pos;                                                        //CPF_Parm
	class FVector impactVel;                                                  //CPF_Parm
	class FVector impactNorm;                                                 //CPF_Parm
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
};
struct AR6Pawn_execPlayBlinded_Parms
{
};
struct AR6Pawn_execPlayCoughing_Parms
{
};
struct AR6Pawn_eventPlaySpecialPendingAction_Parms
{
	BYTE eAction;                                                             //CPF_Parm
	INT iActionInt;                                                           //CPF_Parm
};
struct AR6Pawn_execSetNextPendingAction_Parms
{
	BYTE eAction;                                                             //CPF_Parm
	INT i;                                                                    //CPF_Parm
};
struct AR6Pawn_execSetRandomWaiting_Parms
{
	INT iMax;                                                                 //CPF_Parm
	BITFIELD bDontUseWaitZero : 1;                                            //CPF_Parm
};
struct AR6Pawn_eventEndOfGrenadeEffect_Parms
{
	BYTE eType;                                                               //CPF_Parm
};
struct AR6Pawn_execAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	class AR6AIController* AIController;                                      //0
};
struct AR6Pawn_execR6ClientAffectedByFlashbang_Parms
{
	class FVector vGrenadeLocation;                                           //CPF_Parm
};
struct AR6Pawn_execCanBeAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetStanceJumpModifier_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execlogWarning_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
};
struct AR6Pawn_execlogX_Parms
{
	class FString szText;                                                     //CPF_Parm|CPF_NeedCtorLink
	class FString szSource;                                                   //CPF_NeedCtorLink
	class FString Time;                                                       //CPF_NeedCtorLink
};
struct AR6Pawn_execBuildDeathMessage_Parms
{
	class FString Killer;                                                     //CPF_Parm|CPF_NeedCtorLink
	class FString killed;                                                     //CPF_Parm|CPF_NeedCtorLink
	BYTE bDeathMsgType;                                                       //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString DeathMessage;                                               //CPF_NeedCtorLink
};
struct AR6Pawn_execProcessBuildDeathMessage_Parms
{
	class APawn* Killer;                                                      //CPF_Parm
	class FString szPlayerName;                                               //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventZoneChange_Parms
{
	class AZoneInfo* NewZone;                                                 //CPF_Parm
	INT i;                                                                    //0
	class APlayerController* PC;                                              //0
	class AZoneInfo* WZ;                                                      //0
};
struct AR6Pawn_execSetAudioInfo_Parms
{
};
struct AR6Pawn_execPlayVoices_Parms
{
	class USound* sndPlayVoice;                                               //CPF_Parm
	BYTE eSlotUse;                                                            //CPF_Parm
	INT iPriority;                                                            //CPF_Parm
	BYTE eSend;                                                               //CPF_Parm
	BITFIELD bWaitToFinishSound : 1;                                          //CPF_Parm
	FLOAT fTime;                                                              //CPF_Parm
};
struct AR6Pawn_execSendPlaySound_Parms
{
	class USound* S;                                                          //CPF_Parm
	BYTE ID;                                                                  //CPF_Parm
	BITFIELD bDoNotPlayLocallySound : 1;                                      //CPF_Parm
};
struct AR6Pawn_eventGetStanceReticuleModifier_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execAttachCollisionBox_Parms
{
	INT iNbOfColBox;                                                          //CPF_Parm
};
struct AR6Pawn_execAttachWeapon_Parms
{
	class AR6EngineWeapon* WeaponToAttach;                                    //CPF_Parm
	FName Attachment;                                                         //CPF_Parm
};
struct AR6Pawn_execGetWeaponInGroup_Parms
{
	INT iGroup;                                                               //CPF_Parm
	class AR6EngineWeapon* ReturnValue;                                       //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetWeapon_Parms
{
	class AR6AbstractWeapon* NewWeapon;                                       //CPF_Parm
};
struct AR6Pawn_execServerGivesWeaponToClient_Parms
{
	class FString aClassName;                                                 //CPF_Parm|CPF_NeedCtorLink
	INT iWeaponOrItemSlot;                                                    //CPF_Parm
	class FString bulletType;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString weaponGadget;                                               //CPF_Parm|CPF_NeedCtorLink
	class UClass* WeaponClass;                                                //0
	class AR6AbstractWeapon* NewWeapon;                                       //0
};
struct AR6Pawn_execCreateBulletManager_Parms
{
	class UClass* aBulletMgrClass;                                            //0
};
struct AR6Pawn_execCheckForPassiveGadget_Parms
{
	class FString aClassName;                                                 //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execIsStationary_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execIsFighting_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventPlaySurfaceSwitch_Parms
{
};
struct AR6Pawn_execFootStepLeft_Parms
{
};
struct AR6Pawn_execFootStepRight_Parms
{
};
struct AR6Pawn_execHandGripLadder_Parms
{
};
struct AR6Pawn_execFootStepLadder_Parms
{
};
struct AR6Pawn_execAttachClipToWeapon_Parms
{
};
struct AR6Pawn_execGetClipInHand_Parms
{
};
struct AR6Pawn_execPawnCanBeHurtFrom_Parms
{
	class FVector vLocation;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetRotationOffset_Parms
{
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execR6GetViewRotation_Parms
{
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execUpdatePawnTrackActor_Parms
{
	BITFIELD bNoBlend : 1;                                                    //CPF_Parm
};
struct AR6Pawn_execPawnTrackActor_Parms
{
	class AActor* Target;                                                     //CPF_Parm
	BITFIELD bAim : 1;                                                        //CPF_Parm
};
struct AR6Pawn_execPawnLookAt_Parms
{
	class FVector vTarget;                                                    //CPF_Parm
	BITFIELD bAim : 1;                                                        //CPF_Parm
	BITFIELD bNoBlend : 1;                                                    //CPF_Parm
};
struct AR6Pawn_execPawnLookAbsolute_Parms
{
	class FRotator rLookDir;                                                  //CPF_Parm
	BITFIELD bAim : 1;                                                        //CPF_Parm
	BITFIELD bNoBlend : 1;                                                    //CPF_Parm
};
struct AR6Pawn_execPawnLook_Parms
{
	class FRotator rLookDir;                                                  //CPF_Parm
	BITFIELD bAim : 1;                                                        //CPF_Parm
	BITFIELD bNoBlend : 1;                                                    //CPF_Parm
};
struct AR6Pawn_execFootStep_Parms
{
	FName nBoneName;                                                          //CPF_Parm
	BITFIELD bLeftFoot : 1;                                                   //CPF_Parm
};
struct AR6Pawn_execMoveHitBone_Parms
{
	class FRotator rHitDirection;                                             //CPF_Parm
	INT iHitBone;                                                             //CPF_Parm
};
struct AR6Pawn_execStopLipSynch_Parms
{
};
struct AR6Pawn_execStartLipSynch_Parms
{
	class USound* _hSound;                                                    //CPF_Parm
	class USound* _hStopSound;                                                //CPF_Parm
};
struct AR6Pawn_execGetMovementDirection_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetMaxRotationOffset_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execServerChangedWeapon_Parms
{
	class AR6EngineWeapon* OldWeapon;                                         //CPF_Parm
	class AR6EngineWeapon* W;                                                 //CPF_Parm
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6Pawn_execGetPawnSpecificAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetNormalWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetThrowGrenadeAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetFireWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetChangeWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetReloadWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execPlayProneFireAnimation_Parms
{
	FName animName;                                                           //0
	FLOAT fRatio;                                                             //0
};
struct AR6Pawn_execPlayInteractWithDeviceAnimation_Parms
{
	FLOAT fAnimRate;                                                          //0
	FLOAT fSkillDevice;                                                       //0
};
struct AR6Pawn_execPlayBreachDoorAnimation_Parms
{
	FLOAT fAnimRate;                                                          //0
};
struct AR6Pawn_execPlayRemoteChargeAnimation_Parms
{
	FLOAT fAnimRate;                                                          //0
	FLOAT fTween;                                                             //0
};
struct AR6Pawn_execPlayClaymoreAnimation_Parms
{
	FLOAT fAnimRate;                                                          //0
	FLOAT fTween;                                                             //0
};
struct AR6Pawn_execPrepareDemolitionsAnimation_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fSkillDemolitions;                                                  //0
};
struct AR6Pawn_execPutShellInWeapon_Parms
{
};
struct AR6Pawn_execGetPeekingRatioNorm_Parms
{
	FLOAT fPeeking;                                                           //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execCheckCylinderTranslation_Parms
{
	class FVector vStart;                                                     //CPF_Parm
	class FVector vDest;                                                      //CPF_Parm
	class AActor* ignoreActor1;                                               //CPF_Parm
	BITFIELD bIgnoreAllActor1Class : 1;                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execSetPawnScale_Parms
{
	FLOAT fNewScale;                                                          //CPF_Parm
};
struct AR6Pawn_execAdjustFluidCollisionCylinder_Parms
{
	FLOAT fBlendRate;                                                         //CPF_Parm
	BITFIELD bTest : 1;                                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execToggleScopeProperties_Parms
{
	BITFIELD bTurnItOn : 1;                                                   //CPF_Parm
	class UTexture* pMaskTexture;                                             //CPF_Parm
	class UTexture* pAddTexture;                                              //CPF_Parm
};
struct AR6Pawn_execToggleNightProperties_Parms
{
	BITFIELD bTurnItOn : 1;                                                   //CPF_Parm
	class UTexture* pMaskTexture;                                             //CPF_Parm
	class UTexture* pAddTexture;                                              //CPF_Parm
};
struct AR6Pawn_execToggleHeatProperties_Parms
{
	BITFIELD bTurnItOn : 1;                                                   //CPF_Parm
	class UTexture* pMaskTexture;                                             //CPF_Parm
	class UTexture* pAddTexture;                                              //CPF_Parm
};
struct AR6Pawn_execGetThroughResult_Parms
{
	INT iKillDamage;                                                          //CPF_Parm
	INT ePartHit;                                                             //CPF_Parm
	class FVector vBulletDirection;                                           //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetStunResult_Parms
{
	INT iStunDamage;                                                          //CPF_Parm
	INT ePartHit;                                                             //CPF_Parm
	INT eArmorType;                                                           //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	BITFIELD bHitBySilencedWeapon : 1;                                        //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetKillResult_Parms
{
	INT iKillDamage;                                                          //CPF_Parm
	INT ePartHit;                                                             //CPF_Parm
	INT eArmorType;                                                           //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	BITFIELD bHitBySilencedWeapon : 1;                                        //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execServerPlayReloadAnimAgain_Parms
{
};
struct AR6Pawn_execWeaponBipodLast_Parms
{
	BITFIELD bSetBipod : 1;                                                   //0
	class AR6AbstractWeapon* pWeaponWithTheBipod;                             //0
};
struct AR6Pawn_execWeaponBipod_Parms
{
	BITFIELD bSetBipod : 1;                                                   //0
	class AR6AbstractWeapon* pWeaponWithTheBipod;                             //0
};
struct AR6Pawn_execBoltActionSwitchToRight_Parms
{
};
struct AR6Pawn_execReloadingWeaponEnd_Parms
{
};
struct AR6Pawn_execReloadWeapon_Parms
{
};
struct AR6Pawn_execToggleGadget_Parms
{
	class AR6AbstractWeapon* AWeapon;                                         //0
};
struct AR6Pawn_execToggleScopeVision_Parms
{
};
struct AR6Pawn_execToggleNightVision_Parms
{
};
struct AR6Pawn_execToggleHeatVision_Parms
{
};
struct AR6Pawn_execServerForceStunResult_Parms
{
	INT iStunResult;                                                          //CPF_Parm
};
struct AR6Pawn_execServerForceKillResult_Parms
{
	INT iKillResult;                                                          //CPF_Parm
};
struct AR6Pawn_execIncrementFragCount_Parms
{
	class APlayerController* _playerController;                               //0
};
struct AR6Pawn_execR6Died_Parms
{
	class APawn* Killer;                                                      //CPF_Parm
	BYTE eHitPart;                                                            //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	class AR6AbstractGameInfo* pGameInfo;                                     //0
	INT i;                                                                    //0
	class AR6PlayerController* P;                                             //0
	class AR6AbstractWeapon* AWeapon;                                         //0
	class FString KillerName;                                                 //CPF_NeedCtorLink
	class FString szPlayerName;                                               //CPF_NeedCtorLink
};
struct AR6Pawn_execR6TakeDamage_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	INT iBulletGoup;                                                          //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eKillFromTable;                                                      //0
	BYTE eStunFromTable;                                                      //0
	BYTE eHitPart;                                                            //0
	INT iKillFromHit;                                                         //0
	class FVector vBulletDirection;                                           //0
	INT iSndIndex;                                                            //0
	BITFIELD bIsSilenced : 1;                                                 //0
	class AR6BloodSplat* BloodSplat;                                          //0
	class FRotator BloodRotation;                                             //0
	class AR6WallHit* aBloodEffect;                                           //0
	BITFIELD _bAffectedActor : 1;                                             //0
	class APlayerController* _playerController;                               //0
};
struct AR6Pawn_execGetHumanLeaderForAIPawn_Parms
{
	class APlayerController* ReturnValue;                                     //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6RainbowTeam* _TeamManager;                                       //0
};
struct AR6Pawn_execCheckForHelmet_Parms
{
	class FVector vBulletDirection;                                           //CPF_Parm
	class FRotator rBulletRotator;                                            //0
	class FRotator rHeadRotator;                                              //0
	INT iYawDiff;                                                             //0
};
struct AR6Pawn_execGetBodyPartFromBoneID_Parms
{
	BYTE iBone;                                                               //CPF_Parm
	class FVector vBulletDirection;                                           //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execWhichBodyPartWasHit_Parms
{
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vBulletDirection;                                           //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iHitDistanceFromGround;                                               //0
};
struct AR6Pawn_eventR6ResetLookDirection_Parms
{
};
struct AR6Pawn_eventTurnToFaceActor_Parms
{
	class AActor* Target;                                                     //CPF_Parm
	class FRotator rDesiredRotation;                                          //0
	INT iYawDiff;                                                             //0
};
struct AR6Pawn_eventResetDiagonalStrafing_Parms
{
};
struct AR6Pawn_eventAdjustPawnForDiagonalStrafing_Parms
{
	class FRotator rDirection;                                                //0
	class FRotator rBoneRotation;                                             //0
	INT iOffset;                                                              //0
};
struct AR6Pawn_execGunShouldFollowHead_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execIsUsingHeartBeatSensor_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execEndClimbStairs_Parms
{
};
struct AR6Pawn_execClimbStairs_Parms
{
	class FVector vStairDirection;                                            //CPF_Parm
};
struct AR6Pawn_eventEndClimbLadder_Parms
{
	class ALadderVolume* OldLadder;                                           //CPF_Parm
	INT iFacing;                                                              //0
};
struct AR6Pawn_execPlayEndClimbing_Parms
{
	FName animName;                                                           //0
};
struct AR6Pawn_execEndOfLadderSlide_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execPlayStartClimbing_Parms
{
	FName animName;                                                           //0
};
struct AR6Pawn_execClimbLadder_Parms
{
	class ALadderVolume* L;                                                   //CPF_Parm
	class FVector vStartPosition;                                             //0
};
struct AR6Pawn_execServerClimbLadder_Parms
{
	class ALadderVolume* L;                                                   //CPF_Parm
	class AR6Ladder* Ladder;                                                  //CPF_Parm
};
struct AR6Pawn_execLocateLadderActor_Parms
{
	class ALadderVolume* L;                                                   //CPF_Parm
	class ALadder* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execPlayCrouchedDoorAnim_Parms
{
	class AR6IORotatingDoor* Door;                                            //CPF_Parm
	BITFIELD bOpensTowardsPawn : 1;                                           //0
};
struct AR6Pawn_execPlayDoorAnim_Parms
{
	class AR6IORotatingDoor* Door;                                            //CPF_Parm
	BITFIELD bOpensTowardsPawn : 1;                                           //0
};
struct AR6Pawn_eventRemovePotentialOpenDoor_Parms
{
	class AR6Door* Door;                                                      //CPF_Parm
};
struct AR6Pawn_eventPotentialOpenDoor_Parms
{
	class AR6Door* Door;                                                      //CPF_Parm
};
struct AR6Pawn_execIsTouching_Parms
{
	class AR6Door* Door;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Door* aDoor;                                                     //0
};
struct AR6Pawn_execRemovePotentialClimbableObject_Parms
{
	class AR6ClimbableObject* obj;                                            //CPF_Parm
};
struct AR6Pawn_execPotentialClimbableObject_Parms
{
	class AR6ClimbableObject* obj;                                            //CPF_Parm
};
struct AR6Pawn_execRemovePotentialClimbLadder_Parms
{
	class ALadderVolume* L;                                                   //CPF_Parm
};
struct AR6Pawn_execPotentialClimbLadder_Parms
{
	class ALadderVolume* L;                                                   //CPF_Parm
};
struct AR6Pawn_execPlayInteraction_Parms
{
};
struct AR6Pawn_execActionRequest_Parms
{
	class AR6CircumstantialActionQuery* actionRequested;                      //CPF_Parm
};
struct AR6Pawn_execServerActionRequest_Parms
{
	class AR6CircumstantialActionQuery* actionRequested;                      //CPF_Parm
};
struct AR6Pawn_execCanInteractWithObjects_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execPawnHaveFinishedRotation_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bSuccess : 1;                                                    //0
};
struct AR6Pawn_execPlaySecureTerrorist_Parms
{
};
struct AR6Pawn_execServerPerformDoorAction_Parms
{
	class AR6IORotatingDoor* whichDoor;                                       //CPF_Parm
	INT iActionID;                                                            //CPF_Parm
};
struct AR6Pawn_execServerSwitchReloadingWeapon_Parms
{
	BITFIELD NewValue : 1;                                                    //CPF_Parm
};
struct AR6Pawn_execServerToggleCollision_Parms
{
	BITFIELD bValue : 1;                                                      //0
};
struct AR6Pawn_execServerSetBetTime_Parms
{
	INT iTime;                                                                //CPF_Parm
};
struct AR6Pawn_execServerSetRoundTime_Parms
{
	INT iTime;                                                                //CPF_Parm
};
struct AR6Pawn_execServerSuicidePawn_Parms
{
	BYTE bSuicidedType;                                                       //CPF_Parm
};
struct AR6Pawn_execServerGod_Parms
{
	BITFIELD bIsGod : 1;                                                      //CPF_Parm
	BITFIELD bUpdateTeam : 1;                                                 //CPF_Parm
	BITFIELD bForHostage : 1;                                                 //CPF_Parm
	class FString szPlayerName;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bForTerro : 1;                                                   //CPF_Parm
	class AR6Pawn* P;                                                         //0
	class FString szMsg;                                                      //CPF_NeedCtorLink
};
struct AR6Pawn_eventEndCrawl_Parms
{
};
struct AR6Pawn_eventStartCrawl_Parms
{
};
struct AR6Pawn_eventEndCrouch_Parms
{
	FLOAT fHeight;                                                            //CPF_Parm
};
struct AR6Pawn_eventStartCrouch_Parms
{
	FLOAT HeightAdjust;                                                       //CPF_Parm
};
struct AR6Pawn_eventPlayProneToCrouch_Parms
{
	BITFIELD bForcedByClient : 1;                                             //CPF_Parm
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class FVector vPositionEnd;                                               //0
};
struct AR6Pawn_eventPlayCrouchToProne_Parms
{
	BITFIELD bForcedByClient : 1;                                             //CPF_Parm
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class FVector vPositionEnd;                                               //0
};
struct AR6Pawn_execPlayCrouchWaiting_Parms
{
};
struct AR6Pawn_execPlayDuck_Parms
{
};
struct AR6Pawn_execDetachFromClimbableObject_Parms
{
	class AR6ClimbableObject* pObject;                                        //CPF_Parm
};
struct AR6Pawn_execAttachToClimbableObject_Parms
{
	class AR6ClimbableObject* pObject;                                        //CPF_Parm
};
struct AR6Pawn_execR6JumpOffPawn_Parms
{
	INT i;                                                                    //0
};
struct AR6Pawn_eventBaseChange_Parms
{
};
struct AR6Pawn_eventPlayLandingAnimation_Parms
{
	FLOAT impactVel;                                                          //CPF_Parm
};
struct AR6Pawn_eventLanded_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
	FLOAT fDistanceFallen;                                                    //0
	BYTE ePreviousHealth;                                                     //0
	BITFIELD bGameOver : 1;                                                   //0
};
struct AR6Pawn_eventFalling_Parms
{
};
struct AR6Pawn_eventPlayFalling_Parms
{
};
struct AR6Pawn_execAnimateStoppedOnLadder_Parms
{
};
struct AR6Pawn_execAnimateClimbing_Parms
{
	FName ladderAnim;                                                         //0
	INT i;                                                                    //0
};
struct AR6Pawn_execAnimateCrouchRunningDownStairs_Parms
{
};
struct AR6Pawn_execAnimateCrouchWalkingDownStairs_Parms
{
};
struct AR6Pawn_execAnimateCrouchRunningUpStairs_Parms
{
};
struct AR6Pawn_execAnimateCrouchWalkingUpStairs_Parms
{
};
struct AR6Pawn_execAnimateRunningDownStairs_Parms
{
};
struct AR6Pawn_execAnimateRunningUpStairs_Parms
{
};
struct AR6Pawn_execAnimateWalkingDownStairs_Parms
{
};
struct AR6Pawn_execAnimateWalkingUpStairs_Parms
{
};
struct AR6Pawn_execAnimateProneWalking_Parms
{
};
struct AR6Pawn_execAnimateCrouchRunning_Parms
{
};
struct AR6Pawn_execAnimateCrouchWalking_Parms
{
};
struct AR6Pawn_execAnimateRunning_Parms
{
};
struct AR6Pawn_execAnimateWalking_Parms
{
};
struct AR6Pawn_execInitBackwardAnims_Parms
{
	INT i;                                                                    //0
};
struct AR6Pawn_execAnimateProneTurning_Parms
{
};
struct AR6Pawn_execAnimateCrouchTurning_Parms
{
};
struct AR6Pawn_execAnimateStandTurning_Parms
{
};
struct AR6Pawn_execPlayMoving_Parms
{
};
struct AR6Pawn_eventChangeAnimation_Parms
{
};
struct AR6Pawn_execTurnAwayFromNearbyWalls_Parms
{
	class FRotator rViewDir;                                                  //0
	class FVector vViewDir;                                                   //0
	class FVector vTraceStart;                                                //0
	class FVector vTraceEnd;                                                  //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class FVector vDir;                                                       //0
	class FVector vDirFarthest;                                               //0
	FLOAT fDist;                                                              //0
	FLOAT fDistFarthest;                                                      //0
};
struct AR6Pawn_execSetAvoidFacingWalls_Parms
{
	BITFIELD bAvoidFacingWalls : 1;                                           //CPF_Parm
};
struct AR6Pawn_execAvoidLedges_Parms
{
	BITFIELD bAvoid : 1;                                                      //CPF_Parm
};
struct AR6Pawn_eventPlayFluidPeekingAnim_Parms
{
	FLOAT fForwardPct;                                                        //CPF_Parm
	FLOAT fLeftPct;                                                           //CPF_Parm
	FLOAT fDeltaTime;                                                         //CPF_Parm
	FName crouchAnim;                                                         //0
	FLOAT fCrouchAnimRate;                                                    //0
	FLOAT fAnimRateAdjustment;                                                //0
	FName animName;                                                           //0
	FLOAT fOldCrouchBlendRate;                                                //0
	FLOAT fMaxPeek;                                                           //0
};
struct AR6Pawn_eventPlayPeekingAnim_Parms
{
	BITFIELD bUseSpecialPeekAnim : 1;                                         //CPF_Parm
	FLOAT fRatio;                                                             //0
	FName animName;                                                           //0
	FLOAT fPeekingAdjust;                                                     //0
};
struct AR6Pawn_eventIsFullPeekingOver_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fGoal;                                                              //0
};
struct AR6Pawn_eventEndPeekingMode_Parms
{
	BYTE eMode;                                                               //CPF_Parm
};
struct AR6Pawn_eventStartFullPeeking_Parms
{
	FName animName;                                                           //0
};
struct AR6Pawn_execGetPeekAnimName_Parms
{
	FLOAT fPeeking;                                                           //CPF_Parm
	BITFIELD bPeekingLeft : 1;                                                //CPF_Parm
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventStartFluidPeeking_Parms
{
};
struct AR6Pawn_execIsPeeking_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execGetPeekingRate_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventIsPeekingLeft_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventSetCrouchBlend_Parms
{
	FLOAT fCrouchBlend;                                                       //CPF_Parm
};
struct AR6Pawn_eventSetPeekingInfo_Parms
{
	BYTE eMode;                                                               //CPF_Parm
	FLOAT fPeeking;                                                           //CPF_Parm
	BITFIELD bPeekLeft : 1;                                                   //CPF_Parm
};
struct AR6Pawn_execIsValidClimber_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execPlayPostEndLadder_Parms
{
};
struct AR6Pawn_execPlayPostStartLadder_Parms
{
};
struct AR6Pawn_execStartClimbObject_Parms
{
	class AR6ClimbableObject* climbObj;                                       //CPF_Parm
};
struct AR6Pawn_execPlayPostRootMotionAnimation_Parms
{
	FName animName;                                                           //CPF_Parm
};
struct AR6Pawn_execPlayRootMotionAnimation_Parms
{
	FName animName;                                                           //CPF_Parm
	FLOAT fRate;                                                              //CPF_Parm
};
struct AR6Pawn_execR6ResetAnimBlendParams_Parms
{
	INT iBlendChannel;                                                        //CPF_Parm
};
struct AR6Pawn_execR6BlendAnim_Parms
{
	FName animName;                                                           //CPF_Parm
	INT iBlendChannel;                                                        //CPF_Parm
	FLOAT fBlendAlpha;                                                        //CPF_Parm
	FName BoneName;                                                           //CPF_Parm
	FLOAT fRate;                                                              //CPF_Parm
	FLOAT fTween;                                                             //CPF_Parm
	BITFIELD bPlayOnce : 1;                                                   //CPF_Parm
};
struct AR6Pawn_execR6PlayAnim_Parms
{
	FName animName;                                                           //CPF_Parm
	FLOAT fRate;                                                              //CPF_Parm
	FLOAT fTween;                                                             //CPF_Parm
};
struct AR6Pawn_execR6LoopAnim_Parms
{
	FName animName;                                                           //CPF_Parm
	FLOAT fRate;                                                              //CPF_Parm
	FLOAT fTween;                                                             //CPF_Parm
};
struct AR6Pawn_eventAnimEnd_Parms
{
	INT iChannel;                                                             //CPF_Parm
};
struct AR6Pawn_execR6Surrender_Parms
{
	class APawn* Killer;                                                      //CPF_Parm
	BYTE eHitPart;                                                            //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	class AR6AbstractGameInfo* pGameInfo;                                     //0
	INT i;                                                                    //0
	class AR6PlayerController* P;                                             //0
	class AR6AbstractWeapon* AWeapon;                                         //0
	class FString KillerName;                                                 //CPF_NeedCtorLink
	class FString szPlayerName;                                               //CPF_NeedCtorLink
};
struct AR6Pawn_execSetFree_Parms
{
};
struct AR6Pawn_execIsMovingUpLadder_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execIsMovingForward_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execIsRunning_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execIsWalking_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execAimDown_Parms
{
};
struct AR6Pawn_execAimUp_Parms
{
};
struct AR6Pawn_execResetBoneRotation_Parms
{
};
struct AR6Pawn_execRotateBone_Parms
{
	FName BoneName;                                                           //CPF_Parm
	INT Pitch;                                                                //CPF_Parm
	INT Yaw;                                                                  //CPF_Parm
	INT Roll;                                                                 //CPF_Parm
	FLOAT InTime;                                                             //CPF_Parm
	class FRotator rOffset;                                                   //0
};
struct AR6Pawn_execR6CalcDrawLocation_Parms
{
	class AR6EngineWeapon* Wep;                                               //CPF_Parm
	class FRotator MoveRotation;                                              //CPF_Parm|CPF_OutParm
	class FVector offset;                                                     //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector drawLocation;                                               //0
	class FVector bobOffset;                                                  //0
	class FVector vAxisX;                                                     //0
	class FVector vAxisY;                                                     //0
	class FVector vAxisZ;                                                     //0
};
struct AR6Pawn_eventGetViewRotation_Parms
{
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	FLOAT tempDelta;                                                          //0
	FLOAT sign;                                                               //0
	FLOAT fHeartBeatRateMAX;                                                  //0
	FLOAT fHeartBeatRateMIN;                                                  //0
	FLOAT fHeartBeatFrequency;                                                //0
};
struct AR6Pawn_execUpdateVisualEffects_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct AR6Pawn_execClientSetFree_Parms
{
};
struct AR6Pawn_execArrested_Parms
{
};
struct AR6Pawn_execSurrender_Parms
{
};
struct AR6Pawn_execClientSurrender_Parms
{
};
struct AR6Pawn_execServerSurrender_Parms
{
};
struct AR6Pawn_execR6TakeDamageCTE_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	INT iBulletGoup;                                                          //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eKillFromTable;                                                      //0
	BYTE eStunFromTable;                                                      //0
	BYTE eHitPart;                                                            //0
	INT iKillFromHit;                                                         //0
	class FVector vBulletDirection;                                           //0
	INT iSndIndex;                                                            //0
	BITFIELD bIsSilenced : 1;                                                 //0
	BITFIELD bIsSurrended : 1;                                                //0
	class AR6BloodSplat* BloodSplat;                                          //0
	class FRotator BloodRotation;                                             //0
	class AR6WallHit* aBloodEffect;                                           //0
	BITFIELD _bAffectedActor : 1;                                             //0
};
struct AR6Pawn_eventFellOutOfWorld_Parms
{
};
struct AR6Pawn_eventTornOff_Parms
{
	INT i;                                                                    //0
};
struct AR6Pawn_eventPostBeginPlay_Parms
{
	INT iCounter;                                                             //0
	class UR6GameOptions* GameOptions;                                        //0
};
struct AR6Pawn_eventPostNetBeginPlay_Parms
{
};
struct AR6Pawn_execSetDefaultWalkAnim_Parms
{
};
struct AR6Pawn_execPossessedBy_Parms
{
	class AController* C;                                                     //CPF_Parm
};
struct AR6Pawn_execFaceRotation_Parms
{
	class FRotator NewRotation;                                               //CPF_Parm
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct AR6Pawn_execDrawViewRotation_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct AR6Pawn_execRenderGunDirection_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct AR6Pawn_execGetGrenadeStartLocation_Parms
{
	BYTE eThrow;                                                              //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vStart;                                                     //0
};
struct AR6Pawn_eventGetFiringStartPoint_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_execStopWeaponSound_Parms
{
};
struct AR6Pawn_execPlayWeaponSound_Parms
{
	BYTE EWeaponSound;                                                        //CPF_Parm
};
struct AR6Pawn_execPlayLocalWeaponSound_Parms
{
	BYTE EWeaponSound;                                                        //CPF_Parm
};
struct AR6Pawn_execStandToCrouch_Parms
{
};
struct AR6Pawn_execCrouchToStand_Parms
{
};
struct AR6Pawn_execSetFriendlyFire_Parms
{
	BITFIELD bFriendlyFire : 1;                                               //0
};
struct AR6Pawn_execLeftExtractionZone_Parms
{
	class AR6AbstractExtractionZone* Zone;                                    //CPF_Parm
};
struct AR6Pawn_execEnteredExtractionZone_Parms
{
	class AR6AbstractExtractionZone* Zone;                                    //CPF_Parm
};
struct AR6Pawn_execCanPeek_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Pawn_eventUpdateBipodPosture_Parms
{
	FName animName;                                                           //0
	FLOAT fRatio;                                                             //0
};
struct AR6Pawn_eventResetBipodPosture_Parms
{
};
struct AR6Pawn_eventInitBiPodPosture_Parms
{
	BITFIELD bEnable : 1;                                                     //CPF_Parm
};
struct AR6Pawn_eventStopAnimForRG_Parms
{
	class FRotator Rot;                                                       //0
};
struct AR6Pawn_eventEyePosition_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vEyeHeight;                                                 //0
	class APlayerController* PC;                                              //0
};
struct AR6Pawn_eventSetRotationOffset_Parms
{
	INT iPitch;                                                               //CPF_Parm
	INT iYaw;                                                                 //CPF_Parm
	INT iRoll;                                                                //CPF_Parm
};

// *****************************************************************************
// AR6Pawn (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Pawn : public AR6AbstractPawn
{
public:
	BYTE m_eMovementPace;                                                     //0
	BYTE m_ePendingAction[5];                                                 //CPF_Net
	BYTE m_iNetCurrentActionIndex;                                            //CPF_Net
	BYTE m_iLocalCurrentActionIndex;                                          //0
	BYTE m_ePlayerIsUsingHands;                                               //CPF_Net
	BYTE m_eDeviceAnim;                                                       //CPF_Net
	BYTE m_eLastUsingHands;                                                   //0
	BYTE m_ePawnIsUsingHand;                                                  //0
	BYTE m_eArmorType;                                                        //CPF_Edit
	BYTE m_eOldPeekingMode;                                                   //0
	BYTE m_bSuicideType;                                                      //CPF_Net
	BYTE m_eLastHitPart;                                                      //0
	BYTE m_eStrafeDirection;                                                  //0
	BYTE m_bRepPlayWaitAnim;                                                  //CPF_Net
	BYTE m_bSavedPlayWaitAnim;                                                //0
	BYTE m_byRemainingWaitZero;                                               //0
	INT m_iPendingActionInt[5];                                               //CPF_Net
	INT m_iID;                                                                //CPF_Edit
	INT m_iPermanentID;                                                       //CPF_Edit
	INT m_iVisibilityTest;                                                    //0
	INT m_iForceKill;                                                         //CPF_Net
	INT m_iForceStun;                                                         //CPF_Net
	INT m_iMaxRotationOffset;                                                 //0
	INT m_iRepBipodRotationRatio;                                             //CPF_Net
	INT m_iLastBipodRotation;                                                 //0
	INT m_iUniqueID;                                                          //0
	INT m_hLipSynchData;                                                      //0
	INT m_iDesignRandomTweak;                                                 //0
	INT m_iDesignLightTweak;                                                  //0
	INT m_iDesignMediumTweak;                                                 //0
	INT m_iDesignHeavyTweak;                                                  //0
	BITFIELD m_bIsClimbingStairs : 1;                                         //0
	BITFIELD m_bIsMovingUpStairs : 1;                                         //0
	BITFIELD m_bIsClimbingLadder : 1;                                         //CPF_Net
	BITFIELD m_bSlideEnd : 1;                                                 //0
	BITFIELD m_bCanClimbObject : 1;                                           //0
	BITFIELD m_bOldCanWalkOffLedges : 1;                                      //0
	BITFIELD m_bActivateHeatVision : 1;                                       //0
	BITFIELD m_bActivateNightVision : 1;                                      //0
	BITFIELD m_bActivateScopeVision : 1;                                      //0
	BITFIELD m_bWeaponGadgetActivated : 1;                                    //0
	BITFIELD m_bIsKneeling : 1;                                               //CPF_Net
	BITFIELD m_bIsSniping : 1;                                                //0
	BITFIELD m_bPlayingComAnimation : 1;                                      //0
	BITFIELD m_bDontKill : 1;                                                 //0
	BITFIELD m_bPreviousAnimPlayOnce : 1;                                     //0
	BITFIELD m_bToggleServerCancelPlacingCharge : 1;                          //CPF_Net
	BITFIELD m_bOldServerCancelPlacingCharge : 1;                             //0
	BITFIELD m_bReAttachToRightHand : 1;                                      //0
	BITFIELD m_bReloadingWeapon : 1;                                          //CPF_Net
	BITFIELD m_bReloadAnimLoop : 1;                                           //CPF_Net
	BITFIELD m_bChangingWeapon : 1;                                           //CPF_Net
	BITFIELD m_bIsFiringState : 1;                                            //0
	BITFIELD m_bPawnIsReloading : 1;                                          //0
	BITFIELD m_bPawnIsChangingWeapon : 1;                                     //0
	BITFIELD m_bPawnReloadShotgunLoop : 1;                                    //0
	BITFIELD m_bPeekingReturnToCenter : 1;                                    //0
	BITFIELD m_bWasPeeking : 1;                                               //0
	BITFIELD m_bWasPeekingLeft : 1;                                           //0
	BITFIELD m_bAutoClimbLadders : 1;                                         //0
	BITFIELD m_bAim : 1;                                                      //0
	BITFIELD m_bPostureTransition : 1;                                        //0
	BITFIELD m_bWeaponTransition : 1;                                         //0
	BITFIELD m_bPawnSpecificAnimInProgress : 1;                               //CPF_Net
	BITFIELD m_bSoundChangePosture : 1;                                       //0
	BITFIELD m_bNightVisionAnimation : 1;                                     //0
	BITFIELD m_bSuicided : 1;                                                 //0
	BITFIELD m_bAvoidFacingWalls : 1;                                         //0
	BITFIELD m_bWallAdjustmentDone : 1;                                       //0
	BITFIELD m_bDontSeePlayer : 1;                                            //CPF_Edit
	BITFIELD m_bDontHearPlayer : 1;                                           //CPF_Edit
	BITFIELD m_bUseKarmaRagdoll : 1;                                          //CPF_Edit
	BITFIELD m_bTerroSawMeDead : 1;                                           //0
	BITFIELD m_bInteractingWithDevice : 1;                                    //CPF_Net
	BITFIELD m_bCanDisarmBomb : 1;                                            //CPF_Net
	BITFIELD m_bCanArmBomb : 1;                                               //CPF_Net
	BITFIELD m_bUsingBipod : 1;                                               //0
	BITFIELD m_bLeftFootDown : 1;                                             //0
	BITFIELD m_bModifyBones : 1;                                              //CPF_Edit
	BITFIELD m_bHelmetWasHit : 1;                                             //0
	BITFIELD m_bMovingDiagonally : 1;                                         //0
	BITFIELD m_bEngaged : 1;                                                  //CPF_Net
	BITFIELD m_bHasArmPatches : 1;                                            //CPF_Net
	BITFIELD m_bCanFireFriends : 1;                                           //CPF_Net
	BITFIELD m_bCanFireNeutrals : 1;                                          //CPF_Net
	BITFIELD m_bDesignToggleLog : 1;                                          //0
	FLOAT m_fSkillAssault;                                                    //CPF_Edit
	FLOAT m_fSkillDemolitions;                                                //CPF_Edit
	FLOAT m_fSkillElectronics;                                                //CPF_Edit
	FLOAT m_fSkillSniper;                                                     //CPF_Edit
	FLOAT m_fSkillStealth;                                                    //CPF_Edit
	FLOAT m_fSkillSelfControl;                                                //CPF_Edit
	FLOAT m_fSkillLeadership;                                                 //CPF_Edit
	FLOAT m_fSkillObservation;                                                //CPF_Edit
	FLOAT m_fReloadSpeedMultiplier;                                           //0
	FLOAT m_fGunswitchSpeedMultiplier;                                        //0
	FLOAT m_fGadgetSpeedMultiplier;                                           //0
	FLOAT m_fWalkingSpeed;                                                    //0
	FLOAT m_fWalkingBackwardStrafeSpeed;                                      //0
	FLOAT m_fRunningSpeed;                                                    //0
	FLOAT m_fRunningBackwardStrafeSpeed;                                      //0
	FLOAT m_fCrouchedWalkingSpeed;                                            //0
	FLOAT m_fCrouchedWalkingBackwardStrafeSpeed;                              //0
	FLOAT m_fCrouchedRunningSpeed;                                            //0
	FLOAT m_fCrouchedRunningBackwardStrafeSpeed;                              //0
	FLOAT m_fProneSpeed;                                                      //0
	FLOAT m_fProneStrafeSpeed;                                                //0
	FLOAT m_fLastValidPeeking;                                                //0
	FLOAT m_fOldCrouchBlendRate;                                              //0
	FLOAT m_fOldPeekBlendRate;                                                //0
	FLOAT m_fPeekingGoalModifier;                                             //0
	FLOAT m_fPeekingGoal;                                                     //CPF_Net
	FLOAT m_fPeeking;                                                         //0
	FLOAT m_fWallCheckDistance;                                               //0
	FLOAT m_fStunShakeTime;                                                   //0
	FLOAT m_fWeaponJump;                                                      //0
	FLOAT m_fZoomJumpReturn;                                                  //0
	FLOAT m_fNoiseTimer;                                                      //0
	FLOAT m_fLastFSPUpdate;                                                   //0
	FLOAT m_fLastVRPUpdate;                                                   //0
	FLOAT m_fBipodRotation;                                                   //CPF_Net
	FLOAT m_fTimeStartBodyFallSound;                                          //0
	FLOAT m_fFiringTimer;                                                     //0
	FLOAT m_fHBTime;                                                          //0
	FLOAT m_fHBMove;                                                          //0
	FLOAT m_fHBWound;                                                         //0
	FLOAT m_fHBDefcon;                                                        //0
	FLOAT m_fPrePivotLastUpdate;                                              //0
	FLOAT m_fLeftDirtyFootStepRemainingTime;                                  //0
	FLOAT m_fRightDirtyFootStepRemainingTime;                                 //0
	FLOAT m_fTimeGrenadeEffectBeforeSound;                                    //0
	class AR6AbstractBulletManager* m_pBulletManager;                         //0
	class AR6Ladder* m_Ladder;                                                //CPF_Net
	class AActor* m_potentialActionActor;                                     //CPF_Net
	class AR6Door* m_Door;                                                    //0
	class AR6Door* m_Door2;                                                   //0
	class AR6ClimbableObject* m_climbObject;                                  //CPF_Net
	class USound* m_sndNightVisionActivation;                                 //0
	class USound* m_sndNightVisionDeactivation;                               //0
	class USound* m_sndCrouchToStand;                                         //0
	class USound* m_sndStandToCrouch;                                         //0
	class USound* m_sndThermalScopeActivation;                                //0
	class USound* m_sndThermalScopeDeactivation;                              //0
	class USound* m_sndDeathClothes;                                          //0
	class USound* m_sndDeathClothesStop;                                      //0
	class AR6AbstractCorpse* m_ragdoll;                                       //0
	class AR6Pawn* m_KilledBy;                                                //CPF_Net
	class AActor* m_TrackActor;                                               //0
	class AActor* m_FOV;                                                      //0
	class AEmitter* m_BreathingEmitter;                                       //0
	class AR6ArmPatchGlow* m_ArmPatches[2];                                   //0
	class AR6TeamMemberReplicationInfo* m_TeamMemberRepInfo;                  //CPF_Net
	class AR6SoundReplicationInfo* m_SoundRepInfo;                            //CPF_Net
	FName m_WeaponAnimPlaying;                                                //0
	FName m_standRunForwardName;                                              //0
	FName m_standRunLeftName;                                                 //0
	FName m_standRunBackName;                                                 //0
	FName m_standRunRightName;                                                //0
	FName m_standWalkForwardName;                                             //0
	FName m_standWalkBackName;                                                //0
	FName m_standWalkLeftName;                                                //0
	FName m_standWalkRightName;                                               //0
	FName m_hurtStandWalkLeftName;                                            //0
	FName m_hurtStandWalkRightName;                                           //0
	FName m_standTurnLeftName;                                                //0
	FName m_standTurnRightName;                                               //0
	FName m_standFallName;                                                    //0
	FName m_standLandName;                                                    //0
	FName m_crouchFallName;                                                   //0
	FName m_crouchLandName;                                                   //0
	FName m_crouchWalkForwardName;                                            //0
	FName m_standStairWalkUpName;                                             //0
	FName m_standStairWalkUpBackName;                                         //0
	FName m_standStairWalkUpRightName;                                        //0
	FName m_standStairWalkDownName;                                           //0
	FName m_standStairWalkDownBackName;                                       //0
	FName m_standStairWalkDownRightName;                                      //0
	FName m_standStairRunUpName;                                              //0
	FName m_standStairRunUpBackName;                                          //0
	FName m_standStairRunUpRightName;                                         //0
	FName m_standStairRunDownName;                                            //0
	FName m_standStairRunDownBackName;                                        //0
	FName m_standStairRunDownRightName;                                       //0
	FName m_crouchStairWalkDownName;                                          //0
	FName m_crouchStairWalkDownBackName;                                      //0
	FName m_crouchStairWalkDownRightName;                                     //0
	FName m_crouchStairWalkUpName;                                            //0
	FName m_crouchStairWalkUpBackName;                                        //0
	FName m_crouchStairWalkUpRightName;                                       //0
	FName m_crouchStairRunUpName;                                             //0
	FName m_crouchStairRunDownName;                                           //0
	FName m_crouchDefaultAnimName;                                            //0
	FName m_standDefaultAnimName;                                             //0
	FName m_standClimb64DefaultAnimName;                                      //0
	FName m_standClimb96DefaultAnimName;                                      //0
	class UClass* m_FOVClass;                                                 //0
	class UClass* m_LeftDirtyFootStep;                                        //0
	class UClass* m_RightDirtyFootStep;                                       //0
	class FVector m_vStairDirection;                                          //0
	class FRotator m_rHitDirection;                                           //CPF_Net
	class FRotator m_rPrevRotationOffset;                                     //0
	class FVector m_vFiringStartPoint;                                        //0
	class FRotator m_rViewRotation;                                           //0
	class FRotator m_rRoot;                                                   //CPF_Edit
	class FRotator m_rPelvis;                                                 //CPF_Edit
	class FRotator m_rSpine;                                                  //CPF_Edit
	class FRotator m_rSpine1;                                                 //CPF_Edit
	class FRotator m_rSpine2;                                                 //CPF_Edit
	class FRotator m_rNeck;                                                   //CPF_Edit
	class FRotator m_rHead;                                                   //CPF_Edit
	class FRotator m_rPonyTail1;                                              //CPF_Edit
	class FRotator m_rPonyTail2;                                              //CPF_Edit
	class FRotator m_rJaw;                                                    //CPF_Edit
	class FRotator m_rLClavicle;                                              //CPF_Edit
	class FRotator m_rLUpperArm;                                              //CPF_Edit
	class FRotator m_rLForeArm;                                               //CPF_Edit
	class FRotator m_rLHand;                                                  //CPF_Edit
	class FRotator m_rLFinger0;                                               //CPF_Edit
	class FRotator m_rRClavicle;                                              //CPF_Edit
	class FRotator m_rRUpperArm;                                              //CPF_Edit
	class FRotator m_rRForeArm;                                               //CPF_Edit
	class FRotator m_rRHand;                                                  //CPF_Edit
	class FRotator m_rRFinger0;                                               //CPF_Edit
	class FRotator m_rLThigh;                                                 //CPF_Edit
	class FRotator m_rLCalf;                                                  //CPF_Edit
	class FRotator m_rLFoot;                                                  //CPF_Edit
	class FRotator m_rLToe;                                                   //CPF_Edit
	class FRotator m_rRThigh;                                                 //CPF_Edit
	class FRotator m_rRCalf;                                                  //CPF_Edit
	class FRotator m_rRFoot;                                                  //CPF_Edit
	class FRotator m_rRToe;                                                   //CPF_Edit
	class FVector m_vPrePivotProneBackup;                                     //0
	virtual ~AR6Pawn();
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	virtual void UpdateColBox(class FVector &, INT, INT, INT);
	virtual void BeginTouch(class AActor *);
	virtual class FRotator GetViewRotation();
	virtual void TickSpecial(FLOAT);
	virtual void performPhysics(FLOAT);
	virtual INT IsRelevantToPawnHeatVision(class APawn *);
	virtual INT IsRelevantToPawnHeartBeat(class APawn *);
	virtual INT moveToward(class FVector const &, class AActor *);
	virtual INT HurtByVolume(class AActor *);
	virtual void SetPrePivot(class FVector);
	virtual class FVector CheckForLedges(class AActor *, class FVector, class FVector, class FVector, INT &, INT &, FLOAT);
	virtual void physLadder(FLOAT, INT);
	virtual void physicsRotation(FLOAT, class FVector);
	virtual void UpdateMovementAnimation(FLOAT);
	virtual DWORD R6SeePawn(class APawn *, INT);
	virtual DWORD R6LineOfSightTo(class AActor *, INT);
	virtual void calcVelocity(class FVector, FLOAT, FLOAT, FLOAT, INT, INT, INT);
	virtual INT IsOverLedge(class AActor *, class FVector, FLOAT);
	virtual BYTE GetTeamColor();
	virtual BYTE GetStatusOtherTeam();
	AR6Pawn(class AR6Pawn const &);
	AR6Pawn();
	INT AdjustFluidCollisionCylinder(FLOAT, INT);
	FLOAT AdjustMaxFluidPeeking(FLOAT, FLOAT);
	INT CheckLineOfSight(class AActor *, class FVector &, INT, class AActor *, class FVector &, class AActor *, class FVector &);
	DWORD CheckSeePawn(class AR6Pawn *, class FVector &, INT);
	FLOAT ComputeCrouchBlendRate(FLOAT, FLOAT);
	void Crawl(INT);
	INT DirectionHasChanged(FLOAT);
	BYTE GetAnimState();
	BYTE GetCurrentMaterial();
	void GetDefaultHeightAndRadius(FLOAT &, FLOAT &, FLOAT &);
	class FVector GetFootLocation(class AActor *);
	class FVector GetHeadLocation(class AActor *);
	FLOAT GetMaxFluidPeeking(FLOAT, INT);
	class FVector GetMidSectionLocation(class AActor *);
	enum eMovementDirection GetMovementDirection();
	FLOAT GetPeekingRatioNorm(FLOAT);
	INT GetRotValueCenteredAroundZero(INT);
	class FRotator GetRotationOffset();
	BYTE GetSoundGunType(INT);
	static void CDECL InternalConstructor(void *);
	INT IsCrawling();
	INT IsUsingHeartBeatSensor();
	void PawnLook(class FRotator, INT, INT);
	void PawnLookAbsolute(class FRotator, INT, INT);
	void PawnLookAt(class FVector, INT, INT);
	void PawnSetBoneRotation(class FName, INT, INT, INT, FLOAT);
	void PawnTrackActor(class AActor *, INT);
	INT PickActorAdjust(class AActor *);
	void ResetColBox();
	INT SetAudioInfo();
	void SetPawnLookAndAimDirection(class FRotator, INT);
	void SetPawnLookDirection(class FRotator, INT);
	static class UClass * CDECL StaticClass();
	void UnCrawl(INT);
	FLOAT UpdateColBoxPeeking(FLOAT);
	void UpdateFullPeekingMode(FLOAT);
	void UpdatePawnTrackActor(INT);
	void UpdatePeeking(FLOAT);
	void WeaponFollow(INT, FLOAT);
	INT WeaponIsAGadget();
	void WeaponLock(INT, FLOAT, FLOAT);
	INT WeaponShouldFollowHead();
	INT actorReachableFromLocation(class AActor *, class FVector);
	void eventAdjustPawnForDiagonalStrafing();
	void eventEndCrawl();
	void eventEndOfGrenadeEffect(BYTE);
	void eventEndPeekingMode(BYTE);
	class FVector eventGetFiringStartPoint();
	FLOAT eventGetStanceReticuleModifier();
	void eventInitBiPodPosture(DWORD);
	DWORD eventIsFullPeekingOver();
	DWORD eventIsPeekingLeft();
	void eventPlayCrouchToProne(DWORD);
	void eventPlayFluidPeekingAnim(FLOAT, FLOAT, FLOAT);
	void eventPlayPeekingAnim(DWORD);
	void eventPlayProneToCrouch(DWORD);
	void eventPlaySpecialPendingAction(BYTE, INT);
	void eventPlaySurfaceSwitch();
	void eventPotentialOpenDoor(class AR6Door *);
	void eventR6MakeMovementNoise();
	void eventR6ResetLookDirection();
	void eventRemovePotentialOpenDoor(class AR6Door *);
	void eventResetBipodPosture();
	void eventResetDiagonalStrafing();
	void eventSetCrouchBlend(FLOAT);
	void eventSetPeekingInfo(BYTE, FLOAT, DWORD);
	void eventSetRotationOffset(INT, INT, INT);
	void eventSpawnRagDoll();
	void eventStartCrawl();
	void eventStartFluidPeeking();
	void eventStartFullPeeking();
	void eventTurnToFaceActor(class AActor *);
	void eventUpdateBipodPosture();
	void execAdjustFluidCollisionCylinder(struct FFrame &, void * const);
	void execCheckCylinderTranslation(struct FFrame &, void * const);
	void execFootStep(struct FFrame &, void * const);
	void execGetKillResult(struct FFrame &, void * const);
	void execGetMaxRotationOffset(struct FFrame &, void * const);
	void execGetMovementDirection(struct FFrame &, void * const);
	void execGetPeekingRatioNorm(struct FFrame &, void * const);
	void execGetRotationOffset(struct FFrame &, void * const);
	void execGetStunResult(struct FFrame &, void * const);
	void execGetThroughResult(struct FFrame &, void * const);
	void execMoveHitBone(struct FFrame &, void * const);
	void execPawnCanBeHurtFrom(struct FFrame &, void * const);
	void execPawnLook(struct FFrame &, void * const);
	void execPawnLookAbsolute(struct FFrame &, void * const);
	void execPawnLookAt(struct FFrame &, void * const);
	void execPawnTrackActor(struct FFrame &, void * const);
	void execPlayVoices(struct FFrame &, void * const);
	void execR6GetViewRotation(struct FFrame &, void * const);
	void execSendPlaySound(struct FFrame &, void * const);
	void execSetAudioInfo(struct FFrame &, void * const);
	void execSetPawnScale(struct FFrame &, void * const);
	void execStartLipSynch(struct FFrame &, void * const);
	void execStopLipSynch(struct FFrame &, void * const);
	void execToggleHeatProperties(struct FFrame &, void * const);
	void execToggleNightProperties(struct FFrame &, void * const);
	void execToggleScopeProperties(struct FFrame &, void * const);
	void execUpdatePawnTrackActor(struct FFrame &, void * const);
	INT getMaxRotationOffset(INT);
	void initCrawlMode(bool);
	void m_vExecuteLipsSynch(FLOAT);
	void m_vInitNewLipSynch(class USound *, class USound *);
	INT moveToPosition(class FVector const &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Pawn & operator=(class AR6Pawn const &);
private:
	static class UClass PrivateStaticClass();
};
struct UR6Voices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6Voices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Voices : public UObject
{
};

enum EActionType{
	 ET_Goto=0
	,ET_PlayAnim=1
	,ET_LookAt=2
	,ET_LoopAnim=3
	,ET_LoopRandomAnim=4
	,ET_ToggleDevice=5
};

// *****************************************************************************
// UR6InteractiveObjectAction (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractiveObjectAction : public UObject
{
public:
	BYTE m_eType;                                                             //0
	class USound* m_eSoundToPlay;                                             //CPF_Edit
	class USound* m_eSoundToPlayStop;                                         //CPF_Edit
	class FRange m_SoundRange;                                                //CPF_Edit
};

enum ESoundBeepBomb{
	 SBB_Normal=0
	,SBB_Fast=1
	,SBB_Faster=2
};
struct AR6IOBomb_execGetTimeRequired_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fDisarmingBombTime;                                                 //0
};
struct AR6IOBomb_execGetMaxTimeRequired_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOBomb_execHasKit_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOBomb_execStopSoundBomb_Parms
{
};
struct AR6IOBomb_execStartBombSound_Parms
{
};
struct AR6IOBomb_execDisarmBomb_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOBomb_execArmBomb_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOBomb_execToggleDevice_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
};
struct AR6IOBomb_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6IOBomb_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	BITFIELD bDisplayBombIcon : 1;                                            //0
	class FVector vActorDir;                                                  //0
	class FVector vFacingDir;                                                 //0
	class AR6Pawn* aPawn;                                                     //0
};
struct AR6IOBomb_execHurtActor_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
	class FVector vExplosionMomentum;                                         //0
	class AR6Pawn* aPawn;                                                     //0
};
struct AR6IOBomb_execDetonateBomb_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
	class AR6GrenadeDecal* GrenadeDecal;                                      //0
	class FRotator GrenadeDecalRotation;                                      //0
	class ALight* pEffectLight;                                               //0
	class FVector vDecalLoc;                                                  //0
	FLOAT fKillBlastHalfRadius;                                               //0
	FLOAT fDistFromBomb;                                                      //0
	class AActor* aActor;                                                     //0
	class AR6Pawn* pPawn;                                                     //0
	class AR6PlayerController* pPC;                                           //0
	class AR6ActorSound* pBombSound;                                          //0
};
struct AR6IOBomb_execChangeSoundBomb_Parms
{
};
struct AR6IOBomb_execForceTimeLeft_Parms
{
	FLOAT fTime;                                                              //CPF_Parm
};
struct AR6IOBomb_execTimer_Parms
{
	INT iRemaining;                                                           //0
};
struct AR6IOBomb_execGetTimeLeft_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOBomb_execCanToggle_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOBomb_execResetOriginalData_Parms
{
};
struct AR6IOBomb_execGetMissionObjLocFile_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6IOBomb_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6IOBomb (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IOBomb : public AR6IOObject
{
public:
	BYTE m_eBeepState;                                                        //0
	INT m_iEnergy;                                                            //CPF_Edit
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD m_bExploded : 1;                                                 //CPF_Net
	FLOAT m_fTimeOfExplosion;                                                 //0
	FLOAT m_fTimeLeft;                                                        //0
	FLOAT m_fRepTimeLeft;                                                     //CPF_Net
	FLOAT m_fLastLevelTime;                                                   //0
	FLOAT m_fDisarmBombTimeMin;                                               //CPF_Edit
	FLOAT m_fDisarmBombTimeMax;                                               //CPF_Edit
	FLOAT m_fExplosionRadius;                                                 //CPF_Edit
	FLOAT m_fKillBlastRadius;                                                 //CPF_Edit
	class UMaterial* m_ArmedTexture;                                          //CPF_Edit
	class USound* m_sndActivationBomb;                                        //0
	class USound* m_sndPlayBeepNormal;                                        //0
	class USound* m_sndStopBeepNormal;                                        //0
	class USound* m_sndPlayBeepFast;                                          //0
	class USound* m_sndStopBeepFast;                                          //0
	class USound* m_sndPlayBeepFaster;                                        //0
	class USound* m_sndStopBeepFaster;                                        //0
	class USound* m_sndExplosion;                                             //0
	class USound* m_sndEarthQuake;                                            //0
	class AEmitter* m_pEmmiter;                                               //0
	class UClass* m_pExplosionLight;                                          //0
	class FVector m_vOffset;                                                  //0
	class FString m_szIdentityID;                                             //CPF_Edit|CPF_NeedCtorLink
	class FString m_szIdentity;                                               //CPF_NeedCtorLink
	class FString m_szMsgArmedID;                                             //CPF_Edit|CPF_NeedCtorLink
	class FString m_szMsgDisarmedID;                                          //CPF_Edit|CPF_NeedCtorLink
	class FString m_szMissionObjLocalization;                                 //CPF_Edit|CPF_NeedCtorLink
	virtual ~AR6IOBomb();
	AR6IOBomb(class AR6IOBomb const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6IOBomb & operator=(class AR6IOBomb const &);
protected:
	AR6IOBomb();
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// FSTTemplate ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTTemplate
{
public:
	class FString m_szName;                                               //CPF_Edit|CPF_NeedCtorLink
	INT m_iChance;                                                        //CPF_Edit
};
struct AR6DeploymentZone_execResetOriginalData_Parms
{
};
struct AR6DeploymentZone_execInitZone_Parms
{
};
struct AR6DeploymentZone_execGetClosestHostage_Parms
{
	class FVector vPoint;                                                     //CPF_Parm
	class AR6Hostage* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DeploymentZone_execOrderTerroListFromDistanceTo_Parms
{
	class FVector vPoint;                                                     //CPF_Parm
};
struct AR6DeploymentZone_execAddHostage_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
};
struct AR6DeploymentZone_execHaveHostage_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DeploymentZone_execHaveTerrorist_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DeploymentZone_execFindClosestPointTo_Parms
{
	class FVector vPoint;                                                     //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DeploymentZone_execIsPointInZone_Parms
{
	class FVector vPoint;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DeploymentZone_execFindRandomPointInArea_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DeploymentZone_execFirstInit_Parms
{
};

// *****************************************************************************
// AR6DeploymentZone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DeploymentZone : public AActor
{
public:
	BYTE m_eDefCon;                                                           //CPF_Edit
	BYTE m_eEngageReaction;                                                   //CPF_Edit
	INT m_iGroupID;                                                           //CPF_Edit
	INT m_HostageShootChance;                                                 //CPF_Edit
	INT m_iMinTerrorist;                                                      //CPF_Edit
	INT m_iMaxTerrorist;                                                      //CPF_Edit
	INT m_iChanceToUseGrenadeAtFirstReaction;                                 //CPF_Edit
	INT m_iMinHostage;                                                        //CPF_Edit
	INT m_iMaxHostage;                                                        //CPF_Edit
	INT m_iPrisonerTeam;                                                      //CPF_Edit
	BITFIELD m_bDontSeePlayer : 1;                                            //CPF_Edit
	BITFIELD m_bDontHearPlayer : 1;                                           //CPF_Edit
	BITFIELD m_bHearNothing : 1;                                              //CPF_Edit
	BITFIELD m_bAllowLeave : 1;                                               //CPF_Edit
	BITFIELD m_bPreventCrouching : 1;                                         //CPF_Edit
	BITFIELD m_bKnowInPlanning : 1;                                           //CPF_Edit
	BITFIELD m_bHuntDisallowed : 1;                                           //CPF_Edit
	BITFIELD m_bHuntFromStart : 1;                                            //CPF_Edit
	BITFIELD m_bAlreadyInitialized : 1;                                       //0
	BITFIELD m_bUseGrenade : 1;                                               //CPF_Edit
	BITFIELD m_bClassicMissionCivilian : 1;                                   //CPF_Edit
	class AR6InteractiveObject* m_InteractiveObject;                          //CPF_Edit
	TArray<INT> m_iGroupIDsToCall;                                            //CPF_Edit|CPF_NeedCtorLink|CPF_0x04000000
	TArray<class AR6DeploymentZone*> m_HostageZoneToCheck;                    //CPF_Edit|CPF_NeedCtorLink
	TArray<class APathNode*> m_pListOfCoverNodes;                             //CPF_Edit|CPF_NeedCtorLink
	TArray<class AR6Terrorist*> m_aTerrorist;                                 //CPF_NeedCtorLink
	TArray<class AR6Hostage*> m_aHostage;                                     //CPF_NeedCtorLink
	struct FSTTemplate m_Template[5];                                         //CPF_Edit|CPF_NeedCtorLink
	struct FSTTemplate m_HostageTemplates[5];                                 //CPF_Edit|CPF_NeedCtorLink
	virtual ~AR6DeploymentZone();
	virtual void Spawned();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void CheckForErrors();
	virtual INT GetNbOfTerroristToSpawn();
	virtual void FirstInit();
	virtual class FVector FindRandomPointInArea();
	virtual class FVector FindSpawningPoint(class FRotator *, INT *, enum EStance *, INT *);
	virtual INT IsPointInZone(class FVector const &);
	virtual class FVector FindClosestPointTo(class FVector const &);
	virtual void InitTerroristAI(class FR6CharTemplate *, class AR6Terrorist *);
	AR6DeploymentZone(class AR6DeploymentZone const &);
	AR6DeploymentZone();
	void CheckForErrors(bool);
	INT HaveHostage();
	INT HavePlaceForPawnAt(class FVector &);
	INT HaveTerrorist();
	void InitHostageAI(class FR6CharTemplate *, class AR6Hostage *);
	static void CDECL InternalConstructor(void *);
	void SpawnAHostage();
	void SpawnATerrorist();
	static class UClass * CDECL StaticClass();
	void execAddHostage(struct FFrame &, void * const);
	void execFindClosestPointTo(struct FFrame &, void * const);
	void execFindRandomPointInArea(struct FFrame &, void * const);
	void execFirstInit(struct FFrame &, void * const);
	void execGetClosestHostage(struct FFrame &, void * const);
	void execHaveHostage(struct FFrame &, void * const);
	void execHaveTerrorist(struct FFrame &, void * const);
	void execIsPointInZone(struct FFrame &, void * const);
	void execOrderTerroListFromDistanceTo(struct FFrame &, void * const);
	INT getChanceFromArrayTemplates(struct FSTTemplate *, INT);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DeploymentZone & operator=(class AR6DeploymentZone const &);
private:
	static class UClass PrivateStaticClass();
};

enum EStartingPosition{
	 POS_Stand=0
	,POS_Kneel=1
	,POS_Prone=2
	,POS_Foetus=3
	,POS_Crouch=4
	,POS_Random=5
};
enum EStandWalkingAnim{
	 eStandWalkingAnim_default=0
	,eStandWalkingAnim_scared=1
};
enum ECivPatrolType{
	 CIVPATROL_None=0
	,CIVPATROL_Path=1
	,CIVPATROL_Area=2
	,CIVPATROL_Point=3
};
enum EHandsUpType{
	 HANDSUP_none=0
	,HANDSUP_kneeling=1
	,HANDSUP_standing=2
};
enum eHostageOrder{
	 HOrder_None=0
	,HOrder_ComeWithMe=1
	,HOrder_StayHere=2
	,HOrder_Surrender=3
	,HOrder_GotoExtraction=4
};

// -----------------------------------------------------------------------------
// FAnimInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FAnimInfo
{
public:
	FName m_name;                                                         //0
	INT m_id;                                                             //0
	FLOAT m_fRate;                                                        //0
	BYTE m_ePlayType;                                                     //0
	BYTE m_eGroupAnim;                                                    //0
};

// -----------------------------------------------------------------------------
// Foetus ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Foetus
{
};

// -----------------------------------------------------------------------------
// Prone ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Prone
{
};

// -----------------------------------------------------------------------------
// Kneeling ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Kneeling
{
};

// -----------------------------------------------------------------------------
// Crouching ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Crouching
{
};

// -----------------------------------------------------------------------------
// FSTRepHostageAnim ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTRepHostageAnim
{
public:
	BYTE m_eRepStandWalkingAnim;                                          //0
	BITFIELD m_bRepPlayMoving : 1;                                        //0
};
struct AR6Hostage_execSetToNormalWeapon_Parms
{
};
struct AR6Hostage_eventEyePosition_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vEyeHeight;                                                 //0
};
struct AR6Hostage_execProcessBuildDeathMessage_Parms
{
	class APawn* Killer;                                                      //CPF_Parm
	class FString szPlayerName;                                               //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Hostage_execEnteredExtractionZone_Parms
{
	class AR6AbstractExtractionZone* Zone;                                    //CPF_Parm
};
struct AR6Hostage_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6Hostage_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
};
struct AR6Hostage_execPlayDoorAnim_Parms
{
	class AR6IORotatingDoor* Door;                                            //CPF_Parm
	BITFIELD bOpensTowardsPawn : 1;                                           //0
};
struct AR6Hostage_execCanBeAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bAffected : 1;                                                   //0
};
struct AR6Hostage_execPlayBlinded_Parms
{
	FName animName;                                                           //0
};
struct AR6Hostage_execPlayCoughing_Parms
{
	FName animName;                                                           //0
};
struct AR6Hostage_eventGotoProne_Parms
{
};
struct AR6Hostage_eventGotoFoetus_Parms
{
};
struct AR6Hostage_eventGotoCrouch_Parms
{
};
struct AR6Hostage_eventGotoStand_Parms
{
};
struct AR6Hostage_eventGotoKneel_Parms
{
};
struct AR6Hostage_execPlayWaiting_Parms
{
	INT animIndex;                                                            //0
	INT Result;                                                               //0
};
struct AR6Hostage_execPlayProneToCrouch_Parms
{
	BITFIELD bForcedByClient : 1;                                             //CPF_Parm
};
struct AR6Hostage_execGotoFrozen_Parms
{
};
struct AR6Hostage_execPlayReaction_Parms
{
	INT Result;                                                               //0
};
struct AR6Hostage_execSetStandWalkingAnim_Parms
{
	BYTE eAnim;                                                               //CPF_Parm
	BITFIELD bUpdatePlayMoving : 1;                                           //CPF_Parm
};
struct AR6Hostage_execPlayCrouchToProne_Parms
{
	BITFIELD bForcedByClient : 1;                                             //CPF_Parm
};
struct AR6Hostage_execPlayDuck_Parms
{
};
struct AR6Hostage_execAnimNotify_CrouchToScaredStandBegin_Parms
{
};
struct AR6Hostage_execAnimNotify_CrouchToScaredStandEnd_Parms
{
};
struct AR6Hostage_execResetWeaponAnimation_Parms
{
};
struct AR6Hostage_execPlayWeaponAnimation_Parms
{
};
struct AR6Hostage_execR6TakeDamage_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	INT iBulletGoup;                                                          //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE ePreviousHealth;                                                     //0
	INT iResult;                                                              //0
	INT iSndIndex;                                                            //0
};
struct AR6Hostage_execisKneeling_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Hostage_execisFoetus_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Hostage_execisStandingHandUp_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Hostage_execisStanding_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Hostage_execsetProne_Parms
{
	BITFIELD bIsProne : 1;                                                    //CPF_Parm
};
struct AR6Hostage_execsetCrouch_Parms
{
	BITFIELD bIsCrouch : 1;                                                   //CPF_Parm
};
struct AR6Hostage_execsetFrozen_Parms
{
	BITFIELD bFreeze : 1;                                                     //CPF_Parm
};
struct AR6Hostage_eventPostNetBeginPlay_Parms
{
};
struct AR6Hostage_eventPostBeginPlay_Parms
{
	INT i;                                                                    //0
};
struct AR6Hostage_execSetAnimTransition_Parms
{
	INT iAnimToPlay;                                                          //CPF_Parm
	FName pawnStateToGo;                                                      //CPF_Parm
	struct FAnimInfo AnimInfo;                                                //0
};
struct AR6Hostage_eventSetAnimInfo_Parms
{
	INT ID;                                                                   //CPF_Parm
	struct FAnimInfo AnimInfo;                                                //0
};
struct AR6Hostage_eventPlaySpecialPendingAction_Parms
{
	BYTE eAction;                                                             //CPF_Parm
	INT iActionInt;                                                           //CPF_Parm
};
struct AR6Hostage_eventAnimEnd_Parms
{
	INT iChannel;                                                             //CPF_Parm
	BITFIELD bPreviousPostureTransition : 1;                                  //0
};
struct AR6Hostage_execHasBumpPriority_Parms
{
	class AR6Pawn* bumpedBy;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Hostage_execlogAnim_Parms
{
	class FString sz;                                                         //CPF_Parm|CPF_NeedCtorLink
};
struct AR6Hostage_eventFinishInitialization_Parms
{
};
struct AR6Hostage_eventGetReticuleInfo_Parms
{
	class APawn* ownerReticule;                                               //CPF_Parm
	class FString szName;                                                     //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Hostage_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};

// *****************************************************************************
// AR6Hostage (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Hostage : public AR6Pawn
{
public:
	BYTE m_ePersonality;                                                      //CPF_Edit
	BYTE m_ePosition;                                                         //CPF_Edit|CPF_Net
	BYTE m_eCivPatrol;                                                        //0
	BYTE m_eHandsUpType;                                                      //CPF_Net
	BYTE m_bRepWaitAnimIndex;                                                 //CPF_Net
	BYTE m_bSavedRepWaitAnimIndex;                                            //0
	INT m_iIndex;                                                             //0
	INT m_iPrisonierTeam;                                                     //0
	BITFIELD m_bInitFinished : 1;                                             //0
	BITFIELD m_bStartAsCivilian : 1;                                          //0
	BITFIELD m_bCivilian : 1;                                                 //0
	BITFIELD m_bPatrolForward : 1;                                            //0
	BITFIELD m_bPoliceManMp1 : 1;                                             //0
	BITFIELD m_bPoliceManHasWeapon : 1;                                       //0
	BITFIELD m_bPoliceManCanSeeRainbows : 1;                                  //0
	BITFIELD m_bIsKneeling : 1;                                               //CPF_Net
	BITFIELD m_bIsFoetus : 1;                                                 //CPF_Net
	BITFIELD m_bFrozen : 1;                                                   //CPF_Net
	BITFIELD m_bReactionAnim : 1;                                             //0
	BITFIELD m_bCrouchToScaredStandBegin : 1;                                 //0
	BITFIELD m_bFreed : 1;                                                    //CPF_Net
	BITFIELD m_bEscorted : 1;                                                 //CPF_Net
	BITFIELD m_bExtracted : 1;                                                //CPF_Net
	BITFIELD m_bFeedbackExtracted : 1;                                        //0
	BITFIELD m_bClassicMissionCivilian : 1;                                   //0
	class AR6DeploymentZone* m_DZone;                                         //0
	class AR6DZonePathNode* m_currentNode;                                    //0
	class AR6HostageMgr* m_mgr;                                               //0
	class AR6HostageAI* m_controller;                                         //0
	class AR6Rainbow* m_escortedByRainbow;                                    //CPF_Net
	FName m_NocsWaitingName;                                                  //0
	FName m_NocsSeeRainbowsName;                                              //0
	FName m_globalState;                                                      //0
	struct FRandomTweenNum m_stayInFoetusTime;                                //CPF_Edit
	struct FRandomTweenNum m_stayFrozenTime;                                  //CPF_Edit
	struct FRandomTweenNum m_stayProneTime;                                   //CPF_Edit
	struct FRandomTweenNum m_stayCautiousGuardedStateTime;                    //CPF_Edit
	struct FRandomTweenNum m_patrolAreaWaitTween;                             //CPF_Edit
	struct FRandomTweenNum m_changeOrientationTween;                          //CPF_Edit
	struct FRandomTweenNum m_sightRadiusTween;                                //CPF_Edit
	struct FRandomTweenNum m_updatePaceTween;                                 //CPF_Edit
	struct FRandomTweenNum m_waitingGoCrouchTween;                            //CPF_Edit
	struct FSTRepHostageAnim m_eSavedRepHostageAnim;                          //0
	struct FSTRepHostageAnim m_eCurrentRepHostageAnim;                        //CPF_Net
	class FString m_szUsedTemplate;                                           //CPF_NeedCtorLink
	virtual ~AR6Hostage();
	AR6Hostage(class AR6Hostage const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventFinishInitialization();
	void eventGotoCrouch();
	void eventGotoFoetus();
	void eventGotoKneel();
	void eventGotoProne();
	void eventGotoStand();
	void eventSetAnimInfo(INT);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Hostage & operator=(class AR6Hostage const &);
protected:
	AR6Hostage();
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// PA_LoopAnim ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_LoopAnim
{
};

// -----------------------------------------------------------------------------
// PA_Interaction ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_Interaction
{
};

// -----------------------------------------------------------------------------
// PA_PlayAnim ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_PlayAnim
{
};

// -----------------------------------------------------------------------------
// PA_Goto ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_Goto
{
};

// -----------------------------------------------------------------------------
// PA_LookAt ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_LookAt
{
};

// -----------------------------------------------------------------------------
// PA_StartInteraction ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PA_StartInteraction
{
};

// -----------------------------------------------------------------------------
// TestMakePath ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TestMakePath
{
};

// -----------------------------------------------------------------------------
// TestMakePathEnd ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TestMakePathEnd
{
};

// -----------------------------------------------------------------------------
// OpenDoor ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT OpenDoor
{
};

// -----------------------------------------------------------------------------
// BumpBackUp ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT BumpBackUp
{
};

// -----------------------------------------------------------------------------
// Dispatcher ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Dispatcher
{
};

// -----------------------------------------------------------------------------
// EndClimbingLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT EndClimbingLadder
{
};

// -----------------------------------------------------------------------------
// BeginClimbingLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT BeginClimbingLadder
{
};

// -----------------------------------------------------------------------------
// ApproachLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ApproachLadder
{
};

// -----------------------------------------------------------------------------
// WaitToClimbLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitToClimbLadder
{
};
struct AR6AIController_execPerformAction_StopInteraction_Parms
{
};
struct AR6AIController_eventNotifyBump_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execStopMoving_Parms
{
};
struct AR6AIController_execPawnDied_Parms
{
};
struct AR6AIController_execPerformAction_LoopAnim_Parms
{
	FName animName;                                                           //CPF_Parm
	FLOAT fLoopAnimTime;                                                      //CPF_Parm
};
struct AR6AIController_execPerformAction_PlayAnim_Parms
{
	FName animName;                                                           //CPF_Parm
};
struct AR6AIController_execPerformAction_Goto_Parms
{
	class AActor* Target;                                                     //CPF_Parm
};
struct AR6AIController_execPerformAction_LookAt_Parms
{
	class AActor* Target;                                                     //CPF_Parm
};
struct AR6AIController_execPerformAction_StartInteraction_Parms
{
};
struct AR6AIController_execCanInteractWithObjects_Parms
{
	class AR6InteractiveObject* o;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execGetGrenadeDirection_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	class FVector vTargetLoc;                                                 //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FRotator rFiringRotation;                                           //0
};
struct AR6AIController_execAIAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
};
struct AR6AIController_execIsFacing_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vDir;                                                       //0
};
struct AR6AIController_execFindBestPathToward_Parms
{
	class AActor* desired;                                                    //CPF_Parm
	BITFIELD bClearPaths : 1;                                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AActor* Path;                                                       //0
	BITFIELD bSuccess : 1;                                                    //0
};
struct AR6AIController_execChooseRandomDirection_Parms
{
	INT iLookBackChance;                                                      //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bLookBack : 1;                                                   //0
	BITFIELD bTurnLeft : 1;                                                   //0
	INT ITemp;                                                                //0
	class FRotator rRot;                                                      //0
};
struct AR6AIController_execChangeOrientationTo_Parms
{
	class FRotator NewRotation;                                               //CPF_Parm
};
struct AR6AIController_execIsFocusLeft_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iLeft;                                                                //0
	INT iRight;                                                               //0
	class FRotator rFocus;                                                    //0
};
struct AR6AIController_execIsReadyToFire_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fNeededChanceToHit;                                                 //0
	FLOAT fSelfControl;                                                       //0
};
struct AR6AIController_execGetCurrentChanceToHit_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fAngle;                                                             //0
	FLOAT fDistance;                                                          //0
	FLOAT fError;                                                             //0
};
struct AR6AIController_execSetStateTestMakePath_Parms
{
	class APawn* anEnemy;                                                     //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6AIController_eventOpenDoorFailed_Parms
{
};
struct AR6AIController_eventCanOpenDoor_Parms
{
	class AR6IORotatingDoor* Door;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execDistanceTo_Parms
{
	class AActor* member;                                                     //CPF_Parm
	BITFIELD bIncludeZ : 1;                                                   //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vDistance;                                                  //0
};
struct AR6AIController_execBumpBackUpStateFinished_Parms
{
};
struct AR6AIController_execIsBumpBackUpStateFinish_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execGotoBumpBackUpState_Parms
{
	FName returnState;                                                        //CPF_Parm
};
struct AR6AIController_execIsInCrouchedPosture_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execAreClimbingInSameDirection_Parms
{
	class AR6Pawn* npcPawn;                                                   //CPF_Parm
	class AR6Pawn* PlayerPawn;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execLadderIsAvailable_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6LadderVolume* ladderVol;                                         //0
};
struct AR6AIController_execConfirmLadderActionPointWasReached_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
};
struct AR6AIController_execCheckNeedToClimbLadder_Parms
{
};
struct AR6AIController_execCanClimbObject_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execCanClimbLadders_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execGetFacingDirection_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fStrafeMag;                                                         //0
	class FVector vFocus2D;                                                   //0
	class FVector vLoc2D;                                                     //0
	class FVector vDest2D;                                                    //0
	class FVector vDir;                                                       //0
	class FVector vLookDir;                                                   //0
	class FVector vY;                                                         //0
};
struct AR6AIController_execR6PreMoveToward_Parms
{
	class AActor* Target;                                                     //CPF_Parm
	class AActor* pFocus;                                                     //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6AIController_execR6PreMoveTo_Parms
{
	class FVector vTargetPosition;                                            //CPF_Parm
	class FVector vFocus;                                                     //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6AIController_execCheckPaceForInjury_Parms
{
	BYTE ePace;                                                               //CPF_Parm|CPF_OutParm
};
struct AR6AIController_eventR6SetMovement_Parms
{
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6AIController_execIsActorRightOfView_Parms
{
	class AActor* Actor;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execIsActorInView_Parms
{
	class AActor* Actor;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct AR6AIController_execPossess_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6AIController_execActorReachableFromLocation_Parms
{
	class AActor* Target;                                                     //CPF_Parm
	class FVector vLocation;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execFindNearbyWaitSpot_Parms
{
	class AActor* Node;                                                       //CPF_Parm
	class FVector vWaitLocation;                                              //CPF_Parm|CPF_OutParm
};
struct AR6AIController_execGotoOpenDoorState_Parms
{
	class AR6Door* navPointToOpenFrom;                                        //CPF_Parm
};
struct AR6AIController_execNeedToOpenDoor_Parms
{
	class AActor* Target;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execFindGrenadeDirectionToHitActor_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	class FVector vTargetLoc;                                                 //CPF_Parm
	FLOAT fGrenadeSpeed;                                                      //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execCanWalkTo_Parms
{
	class FVector vDestination;                                               //CPF_Parm
	BITFIELD bDebug : 1;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execFollowPathTo_Parms
{
	class FVector vDestination;                                               //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
	class AActor* aTarget;                                                    //CPF_Parm
};
struct AR6AIController_execFollowPath_Parms
{
	BYTE ePace;                                                               //CPF_Parm
	FName returnLabel;                                                        //CPF_Parm
	BITFIELD bContinuePath : 1;                                               //CPF_Parm
};
struct AR6AIController_execMoveToPosition_Parms
{
	class FVector VPosition;                                                  //CPF_Parm
	class FRotator rOrientation;                                              //CPF_Parm
};
struct AR6AIController_execPickActorAdjust_Parms
{
	class AActor* pActor;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execFindInvestigationPoint_Parms
{
	INT iSearchIndex;                                                         //CPF_Parm
	FLOAT fMaxDistance;                                                       //CPF_Parm
	BITFIELD bFromThreat : 1;                                                 //CPF_Parm
	class FVector vThreatLocation;                                            //CPF_Parm
	class AR6ActionSpot* ReturnValue;                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execFindPlaceToFire_Parms
{
	class AActor* PTarget;                                                    //CPF_Parm
	class FVector vDestination;                                               //CPF_Parm
	FLOAT fMaxDistance;                                                       //CPF_Parm
	class AR6ActionSpot* ReturnValue;                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execFindPlaceToTakeCover_Parms
{
	class FVector vThreatLocation;                                            //CPF_Parm
	FLOAT fMaxDistance;                                                       //CPF_Parm
	class AR6ActionSpot* ReturnValue;                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AIController_execMakePathToRun_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6AIController (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AIController : public AAIController
{
public:
	INT c_iDistanceBumpBackUp;                                                //0
	INT m_iCurrentRouteCache;                                                 //0
	BITFIELD m_bStateBackupAvoidFacingWalls : 1;                              //0
	BITFIELD m_bIgnoreBackupBump : 1;                                         //0
	BITFIELD m_bGetOffLadder : 1;                                             //0
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD bShowInteractionLog : 1;                                         //CPF_Edit
	BITFIELD m_bChangingState : 1;                                            //0
	BITFIELD m_bCantInterruptIO : 1;                                          //0
	BITFIELD m_bMoveTargetAlreadySet : 1;                                     //0
	FLOAT m_fLastBump;                                                        //0
	FLOAT m_fLoopAnimTime;                                                    //0
	class AR6Pawn* m_r6pawn;                                                  //0
	class AR6Ladder* m_TargetLadder;                                          //0
	class AActor* m_BumpedBy;                                                 //0
	class AR6ClimbableObject* m_climbingObject;                               //0
	class AR6InteractiveObject* m_InteractionObject;                          //0
	class AActor* m_ActorTarget;                                              //0
	class AR6IORotatingDoor* m_closeDoor;                                     //0
	FName m_bumpBackUpNextState;                                              //0
	FName m_openDoorNextState;                                                //0
	FName m_climbingObjectNextState;                                          //0
	FName m_AnimName;                                                         //0
	FName m_StateAfterInteraction;                                            //0
	class FVector m_vTargetPosition;                                          //0
	class FVector m_vPreviousPosition;                                        //0
	class FVector m_vBumpedByLocation;                                        //0
	class FVector m_vBumpedByVelocity;                                        //0
	virtual ~AR6AIController();
	virtual INT CanHear(class FVector, FLOAT, class AActor *, enum ENoiseType, enum EPawnType);
	virtual void AdjustFromWall(class FVector, class AActor *);
	AR6AIController(class AR6AIController const &);
	AR6AIController();
	INT CanWalkTo(class FVector, INT);
	void ClearActionSpot();
	class AR6ActionSpot * FindNearestActionSpot(FLOAT, class FVector, INT (CDECL*)(class AR6Pawn *, class AR6ActionSpot *, struct STActionSpotCheck &), struct STActionSpotCheck &);
	void FollowPath(enum eMovementPace, class FName, INT);
	void GotoOpenDoorState(class AActor *);
	INT HearingCheck(class FVector, class FVector);
	static void CDECL InternalConstructor(void *);
	INT NeedToOpenDoor(class AActor *);
	INT SetDestinationToNextInCache();
	static class UClass * CDECL StaticClass();
	DWORD eventCanOpenDoor(class AR6IORotatingDoor *);
	void eventOpenDoorFailed();
	void eventR6SetMovement(BYTE);
	void execActorReachableFromLocation(struct FFrame &, void * const);
	void execCanWalkTo(struct FFrame &, void * const);
	void execFindGrenadeDirectionToHitActor(struct FFrame &, void * const);
	void execFindInvestigationPoint(struct FFrame &, void * const);
	void execFindNearbyWaitSpot(struct FFrame &, void * const);
	void execFindPlaceToFire(struct FFrame &, void * const);
	void execFindPlaceToTakeCover(struct FFrame &, void * const);
	void execFollowPath(struct FFrame &, void * const);
	void execFollowPathTo(struct FFrame &, void * const);
	void execGotoOpenDoorState(struct FFrame &, void * const);
	void execMakePathToRun(struct FFrame &, void * const);
	void execMoveToPosition(struct FFrame &, void * const);
	void execNeedToOpenDoor(struct FFrame &, void * const);
	void execPickActorAdjust(struct FFrame &, void * const);
	void execPollFollowPath(struct FFrame &, void * const);
	void execPollFollowPathBlocked(struct FFrame &, void * const);
	void execPollMoveToPosition(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AIController & operator=(class AR6AIController const &);
private:
	static class UClass PrivateStaticClass();
};

enum eComAnimation{
	 COM_None=0
	,COM_FollowMe=1
	,COM_Cover=2
	,COM_Go=3
	,COM_Regroup=4
	,COM_Hold=5
};
enum eRainbowCircumstantialAction{
	 CAR_None=0
	,CAR_Secure=1
	,CAR_Free=2
};
enum eEquipWeapon{
	 EQUIP_SecureWeapon=0
	,EQUIP_EquipWeapon=1
	,EQUIP_NoWeapon=2
	,EQUIP_Armed=3
};
enum eLadderSlide{
	 SLIDE_Start=0
	,SLIDE_Sliding=1
	,SLIDE_End=2
	,SLIDE_None=3
};
struct AR6Rainbow_execCanInteractWithObjects_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execProcessBuildDeathMessage_Parms
{
	class APawn* Killer;                                                      //CPF_Parm
	class FString szPlayerName;                                               //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execEscort_FindRainbow_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	class AR6Rainbow* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* P;                                                         //0
	class AR6Hostage* H;                                                      //0
};
struct AR6Rainbow_execEscort_UpdateTeamSpeed_Parms
{
	class AR6RainbowTeam* Team;                                               //0
};
struct AR6Rainbow_execEscort_IsPawnCloseToMe_Parms
{
	class AR6Hostage* me;                                                     //CPF_Parm
	FLOAT fMyRadius;                                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT Index;                                                                //0
	class AR6Hostage* H;                                                      //0
	class AR6Rainbow* Rainbow;                                                //0
	BITFIELD bSeparated : 1;                                                  //0
	class AR6RainbowTeam* Team;                                               //0
};
struct AR6Rainbow_execEscort_UpdateList_Parms
{
	INT i;                                                                    //0
	INT j;                                                                    //0
	class AR6HostageAI* hostageAI;                                            //0
	class AR6Hostage* hostage;                                                //0
	class AR6Rainbow* newLeadRainbow;                                         //0
	class AR6RainbowTeam* teamMgr;                                            //0
};
struct AR6Rainbow_execEscort_UpdateCloserToLead_Parms
{
	class AR6HostageAI* closerAI;                                             //0
	class AR6HostageAI* hostageAI;                                            //0
	INT Index;                                                                //0
	INT searchIndex;                                                          //0
	INT nbEscortedHostage;                                                    //0
	class AR6Hostage* hostage;                                                //0
	class AR6Hostage* aNewList[8];                                            //0
	FLOAT fShortestDistance;                                                  //0
	FLOAT fDistance;                                                          //0
	class AR6Hostage* closerToLead;                                           //0
};
struct AR6Rainbow_execEscort_RemoveHostage_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	BITFIELD bNoFeedbackByHostage : 1;                                        //CPF_Parm
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT removeIndex;                                                          //0
	INT escortIndex;                                                          //0
	INT r6index;                                                              //0
	INT iSndIndex;                                                            //0
	class AR6RainbowTeam* teamMgr;                                            //0
};
struct AR6Rainbow_execEscort_AddHostage_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	BITFIELD bNoFeedbackByHostage : 1;                                        //CPF_Parm
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT totalR6;                                                              //0
	INT r6index;                                                              //0
	INT iSndIndex;                                                            //0
};
struct AR6Rainbow_execEscort_GetPawnToFollow_Parms
{
	BITFIELD bRunningTowardMe : 1;                                            //CPF_Parm
	class AR6Rainbow* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6RainbowTeam* Team;                                               //0
};
struct AR6Rainbow_execGetTeamMgr_Parms
{
	class AR6RainbowTeam* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct AR6Rainbow_execGrenadeAnimEnd_Parms
{
};
struct AR6Rainbow_execGrenadeThrow_Parms
{
	INT iChannel;                                                             //0
};
struct AR6Rainbow_execIsFighting_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execUpdateRainbowSkills_Parms
{
	INT iD5;                                                                  //0
	INT iD2;                                                                  //0
};
struct AR6Rainbow_execHasBumpPriority_Parms
{
	class AR6Pawn* bumpedBy;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execClientSetCrouch_Parms
{
	BITFIELD bCrouch : 1;                                                     //CPF_Parm
};
struct AR6Rainbow_execServerSetCrouch_Parms
{
	BITFIELD bCrouch : 1;                                                     //CPF_Parm
};
struct AR6Rainbow_execResetArrest_Parms
{
};
struct AR6Rainbow_execR6CircumstantialActionProgressStart_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
};
struct AR6Rainbow_execR6GetCircumstantialActionProgress_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
	class APawn* actingPawn;                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FName Anim;                                                               //0
	FLOAT fFrame;                                                             //0
	FLOAT fRate;                                                              //0
};
struct AR6Rainbow_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6Rainbow_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	class AR6Rainbow* pInteractor;                                            //0
};
struct AR6Rainbow_execChangeProneAttach_Parms
{
};
struct AR6Rainbow_execChangingWeaponEnd_Parms
{
};
struct AR6Rainbow_execSubToHand_Step2_Parms
{
};
struct AR6Rainbow_execSubToHand_Step1_Parms
{
};
struct AR6Rainbow_execGetWeapon_Parms
{
	class AR6AbstractWeapon* NewWeapon;                                       //CPF_Parm
};
struct AR6Rainbow_execGetPawnSpecificAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execGetThrowGrenadeAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execGetChangeWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execGetReloadWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execGetFireWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execGetNormalWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execFinishedReloadingWeapon_Parms
{
};
struct AR6Rainbow_execEquipHands_Parms
{
};
struct AR6Rainbow_execEquipWeapon_Parms
{
};
struct AR6Rainbow_execSecureWeapon_Parms
{
};
struct AR6Rainbow_execBoltActionSwitchToRight_Parms
{
};
struct AR6Rainbow_execBoltActionSwitchToLeftProne_Parms
{
};
struct AR6Rainbow_execBoltActionSwitchToLeft_Parms
{
};
struct AR6Rainbow_execHasPawnSpecificWeaponAnimation_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execGetFiringRotation_Parms
{
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6RainbowAI* AI;                                                   //0
};
struct AR6Rainbow_execPlayProneWaiting_Parms
{
};
struct AR6Rainbow_execPlayCrouchWaiting_Parms
{
};
struct AR6Rainbow_eventStartCrouch_Parms
{
	FLOAT HeightAdjust;                                                       //CPF_Parm
};
struct AR6Rainbow_execEndKneeDown_Parms
{
};
struct AR6Rainbow_execBlendKneeOnGround_Parms
{
};
struct AR6Rainbow_execPlayDuck_Parms
{
};
struct AR6Rainbow_eventEndCrouch_Parms
{
	FLOAT fHeight;                                                            //CPF_Parm
};
struct AR6Rainbow_execClientQuickResetPeeking_Parms
{
};
struct AR6Rainbow_execStopPeeking_Parms
{
};
struct AR6Rainbow_eventSetAnimAction_Parms
{
	FName NewAction;                                                          //CPF_Parm
};
struct AR6Rainbow_execPlayWaiting_Parms
{
};
struct AR6Rainbow_execSetMovementPhysics_Parms
{
};
struct AR6Rainbow_eventReceivedWeapons_Parms
{
	INT i;                                                                    //0
	class AR6EngineWeapon* AWeapon;                                           //0
};
struct AR6Rainbow_eventPlayWeaponAnimation_Parms
{
};
struct AR6Rainbow_eventReceivedEngineWeapon_Parms
{
};
struct AR6Rainbow_execAttachGasMask_Parms
{
};
struct AR6Rainbow_execGiveDefaultWeapon_Parms
{
	INT iLastAllocated;                                                       //0
	INT i;                                                                    //0
	class FString szCurrentGadget;                                            //CPF_NeedCtorLink
	class FString caps_szPrimaryWeapon;                                       //CPF_NeedCtorLink
	class FString caps_szSecondaryWeapon;                                     //CPF_NeedCtorLink
	class FString caps_szCurrentGadget;                                       //CPF_NeedCtorLink
};
struct AR6Rainbow_execCheckForPassiveGadget_Parms
{
	class FString aClassName;                                                 //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execRainbowEquipWeapon_Parms
{
};
struct AR6Rainbow_execRainbowSecureWeapon_Parms
{
};
struct AR6Rainbow_execPlayCommunicationAnimation_Parms
{
	BYTE eComAnim;                                                            //CPF_Parm
};
struct AR6Rainbow_execServerSetComAnim_Parms
{
	BYTE eComAnim;                                                            //CPF_Parm
};
struct AR6Rainbow_execSetCommunicationAnimation_Parms
{
	BYTE eComAnim;                                                            //CPF_Parm
};
struct AR6Rainbow_execPlayBlinded_Parms
{
};
struct AR6Rainbow_execPlayCoughing_Parms
{
};
struct AR6Rainbow_execResetPawnSpecificAnimation_Parms
{
};
struct AR6Rainbow_eventPlaySpecialPendingAction_Parms
{
	BYTE eAction;                                                             //CPF_Parm
	INT iActionInt;                                                           //CPF_Parm
};
struct AR6Rainbow_execPlayLockPickDoorAnim_Parms
{
};
struct AR6Rainbow_execPlayPostEndSurrender_Parms
{
};
struct AR6Rainbow_execPlaySetFree_Parms
{
};
struct AR6Rainbow_execPlayEndArrest_Parms
{
};
struct AR6Rainbow_execPlayArrestWaiting_Parms
{
	FName Anim;                                                               //0
};
struct AR6Rainbow_execPlayArrestKneel_Parms
{
};
struct AR6Rainbow_execPlayArrest_Parms
{
};
struct AR6Rainbow_execPlayEndSurrender_Parms
{
};
struct AR6Rainbow_execPlaySurrender_Parms
{
};
struct AR6Rainbow_execPlayStartSurrender_Parms
{
};
struct AR6Rainbow_execPlaySecureTerrorist_Parms
{
};
struct AR6Rainbow_execEndClimbStairs_Parms
{
};
struct AR6Rainbow_execClimbStairs_Parms
{
	class FVector vStairDirection;                                            //CPF_Parm
};
struct AR6Rainbow_execPlayEndClimbing_Parms
{
};
struct AR6Rainbow_execPlayStartClimbing_Parms
{
};
struct AR6Rainbow_execTurnAwayFromNearbyWalls_Parms
{
};
struct AR6Rainbow_eventEndOfGrenadeEffect_Parms
{
	BYTE eType;                                                               //CPF_Parm
};
struct AR6Rainbow_execGetHandLocation_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execArmorSkillEffect_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execClientFinishAnimation_Parms
{
};
struct AR6Rainbow_execServerToggleNightVision_Parms
{
	BITFIELD bActivateNightVision : 1;                                        //CPF_Parm
};
struct AR6Rainbow_execMandatoryToggleNightVision_Parms
{
};
struct AR6Rainbow_execToggleNightVision_Parms
{
};
struct AR6Rainbow_execDeactivateNightVision_Parms
{
};
struct AR6Rainbow_execRemoveNightVision_Parms
{
};
struct AR6Rainbow_execActivateNightVision_Parms
{
};
struct AR6Rainbow_execRaiseHelmetVisor_Parms
{
};
struct AR6Rainbow_execGetNightVision_Parms
{
};
struct AR6Rainbow_execPlayDeactivateNightVisionAnimation_Parms
{
};
struct AR6Rainbow_execPlayActivateNightVisionAnimation_Parms
{
};
struct AR6Rainbow_execSecureNightVisionGoggles_Parms
{
};
struct AR6Rainbow_eventAnimEnd_Parms
{
	INT iChannel;                                                             //CPF_Parm
};
struct AR6Rainbow_execUnPossessed_Parms
{
};
struct AR6Rainbow_execPossessedBy_Parms
{
	class AController* C;                                                     //CPF_Parm
};
struct AR6Rainbow_execInitializeRainbowAnimations_Parms
{
};
struct AR6Rainbow_eventPostNetBeginPlay_Parms
{
};
struct AR6Rainbow_eventPostBeginPlay_Parms
{
};
struct AR6Rainbow_execAttachNightVision_Parms
{
};
struct AR6Rainbow_execSetRainbowFaceTexture_Parms
{
};
struct AR6Rainbow_eventDestroyed_Parms
{
};
struct AR6Rainbow_execEndSliding_Parms
{
};
struct AR6Rainbow_execStartSliding_Parms
{
};
struct AR6Rainbow_execIncrementRoundsHit_Parms
{
};
struct AR6Rainbow_execIncrementBulletsFired_Parms
{
};
struct AR6Rainbow_execIncrementKillCount_Parms
{
};
struct AR6Rainbow_eventGetReticuleInfo_Parms
{
	class APawn* ownerReticule;                                               //CPF_Parm
	class FString szName;                                                     //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Rainbow_execResetOriginalData_Parms
{
};

// *****************************************************************************
// AR6Rainbow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Rainbow : public AR6Pawn
{
public:
	BYTE m_u8DesiredPitch;                                                    //CPF_Net
	BYTE m_u8CurrentPitch;                                                    //0
	BYTE m_u8DesiredYaw;                                                      //CPF_Net
	BYTE m_u8CurrentYaw;                                                      //0
	BYTE m_eLadderSlide;                                                      //0
	BYTE m_eEquipWeapon;                                                      //0
	INT m_iOperativeID;                                                       //0
	INT m_iCurrentWeapon;                                                     //0
	INT m_iKills;                                                             //0
	INT m_iBulletsFired;                                                      //0
	INT m_iBulletsHit;                                                        //0
	INT m_iExtraPrimaryClips;                                                 //CPF_Net
	INT m_iExtraSecondaryClips;                                               //CPF_Net
	INT m_iRainbowFaceID;                                                     //CPF_Net
	BITFIELD m_bHasDataObject : 1;                                            //CPF_Net
	BITFIELD m_bIsTheIntruder : 1;                                            //CPF_Net
	BITFIELD m_bTweenFirstTimeOnly : 1;                                       //0
	BITFIELD m_bHasLockPickKit : 1;                                           //CPF_Net
	BITFIELD m_bHasDiffuseKit : 1;                                            //CPF_Net
	BITFIELD m_bHasElectronicsKit : 1;                                        //CPF_Net
	BITFIELD m_bWeaponIsSecured : 1;                                          //0
	BITFIELD m_bThrowGrenadeWithLeftHand : 1;                                 //0
	BITFIELD m_bIsLockPicking : 1;                                            //CPF_Net
	BITFIELD m_bReloadToFullAmmo : 1;                                         //0
	BITFIELD m_bScaleGasMaskForFemale : 1;                                    //0
	BITFIELD m_bInitRainbow : 1;                                              //0
	BITFIELD m_bGettingOnLadder : 1;                                          //0
	BITFIELD m_bRainbowIsFemale : 1;                                          //CPF_Net
	BITFIELD m_bIsSurrended : 1;                                              //CPF_Net
	BITFIELD m_bIsUnderArrest : 1;                                            //CPF_Net
	BITFIELD m_bIsBeingArrestedOrFreed : 1;                                   //0
	class UMaterial* m_FaceTexture;                                           //0
	class AR6GasMask* m_GasMask;                                              //0
	class AR6AbstractHelmet* m_Helmet;                                        //0
	class AR6NightVision* m_NightVision;                                      //CPF_Net
	class AR6EngineWeapon* m_preSwitchWeapon;                                 //0
	class AR6Hostage* m_aEscortedHostage[4];                                  //0
	class UClass* m_GasMaskClass;                                             //0
	class UClass* m_NightVisionClass;                                         //0
	class FRotator m_rFiringRotation;                                         //0
	class FPlane m_FaceCoords;                                                //0
	class FVector m_vStartLocation;                                           //0
	class FString m_szPrimaryWeapon;                                          //CPF_NeedCtorLink
	class FString m_szPrimaryGadget;                                          //CPF_NeedCtorLink
	class FString m_szPrimaryBulletType;                                      //CPF_NeedCtorLink
	class FString m_szSecondaryWeapon;                                        //CPF_NeedCtorLink
	class FString m_szSecondaryGadget;                                        //CPF_NeedCtorLink
	class FString m_szSecondaryBulletType;                                    //CPF_NeedCtorLink
	class FString m_szPrimaryItem;                                            //CPF_NeedCtorLink
	class FString m_szSecondaryItem;                                          //CPF_NeedCtorLink
	class FString m_szSpecialityID;                                           //CPF_NeedCtorLink
	virtual ~AR6Rainbow();
	AR6Rainbow(class AR6Rainbow const &);
	AR6Rainbow();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void UpdateAiming();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Rainbow & operator=(class AR6Rainbow const &);
private:
	static class UClass PrivateStaticClass();
};

enum ETerroPersonality{
	 PERSO_Coward=0
	,PERSO_DeskJockey=1
	,PERSO_Normal=2
	,PERSO_Hardened=3
	,PERSO_SuicideBomber=4
	,PERSO_Sniper=5
};
enum EStrategy{
	 STRATEGY_PatrolPath=0
	,STRATEGY_PatrolArea=1
	,STRATEGY_GuardPoint=2
	,STRATEGY_Hunt=3
	,STRATEGY_Test=4
};
enum ENetworkSpecialAnim{
	 NWA_NonValid=0
	,NWA_Playing=1
	,NWA_Looping=2
};
enum ETerroristCircumstantialAction{
	 CAT_None=0
	,CAT_Secure=1
};
enum EDefCon{
	 DEFCON_0=0
	,DEFCON_1=1
	,DEFCON_2=2
	,DEFCON_3=3
	,DEFCON_4=4
	,DEFCON_5=5
};
struct AR6Terrorist_eventDestroyed_Parms
{
};
struct AR6Terrorist_execAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
};
struct AR6Terrorist_eventStopSpecialAnim_Parms
{
};
struct AR6Terrorist_eventLoopSpecialAnim_Parms
{
};
struct AR6Terrorist_eventPlaySpecialAnim_Parms
{
};
struct AR6Terrorist_execPlayDoorAnim_Parms
{
	class AR6IORotatingDoor* Door;                                            //CPF_Parm
	BITFIELD bOpensTowardsPawn : 1;                                           //0
	FLOAT fRate;                                                              //0
};
struct AR6Terrorist_execPlayThrowGrenade_Parms
{
};
struct AR6Terrorist_execPlayCallBackup_Parms
{
	FName nAnimName;                                                          //0
	BITFIELD bOldEngaged : 1;                                                 //0
};
struct AR6Terrorist_execPlayArrest_Parms
{
};
struct AR6Terrorist_execPlayKneeling_Parms
{
};
struct AR6Terrorist_execPlaySurrender_Parms
{
};
struct AR6Terrorist_execPlayBlinded_Parms
{
};
struct AR6Terrorist_execStopCoughing_Parms
{
};
struct AR6Terrorist_execPlayCoughing_Parms
{
};
struct AR6Terrorist_eventPlaySpecialPendingAction_Parms
{
	BYTE eAction;                                                             //CPF_Parm
	INT iActionInt;                                                           //CPF_Parm
};
struct AR6Terrorist_eventEndCrouch_Parms
{
	FLOAT fHeight;                                                            //CPF_Parm
};
struct AR6Terrorist_eventStartCrouch_Parms
{
	FLOAT HeightAdjust;                                                       //CPF_Parm
};
struct AR6Terrorist_eventEyePosition_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vEyeHeight;                                                 //0
};
struct AR6Terrorist_execGetReloadWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eWT;                                                                 //0
};
struct AR6Terrorist_execGetFireWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eWT;                                                                 //0
};
struct AR6Terrorist_execGetNormalWeaponAnimation_Parms
{
	struct FSTWeaponAnim stAnim;                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Terrorist_eventReceivedWeapons_Parms
{
};
struct AR6Terrorist_execPlayMoving_Parms
{
};
struct AR6Terrorist_execStartHunting_Parms
{
};
struct AR6Terrorist_eventEndOfGrenadeEffect_Parms
{
	BYTE eType;                                                               //CPF_Parm
};
struct AR6Terrorist_execAnimateCrouchRunningDownStairs_Parms
{
};
struct AR6Terrorist_execAnimateCrouchRunningUpStairs_Parms
{
};
struct AR6Terrorist_execAnimateCrouchRunning_Parms
{
};
struct AR6Terrorist_execGetManager_Parms
{
	class UR6TerroristMgr* ReturnValue;                                       //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Terrorist_execIsFighting_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Terrorist_execR6TakeDamage_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	INT iBulletGoup;                                                          //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iResult;                                                              //0
};
struct AR6Terrorist_eventAnimEnd_Parms
{
	INT iChannel;                                                             //CPF_Parm
};
struct AR6Terrorist_execEndGrenade_Parms
{
};
struct AR6Terrorist_execReleaseGrenade_Parms
{
};
struct AR6Terrorist_execR6CircumstantialActionProgressStart_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
};
struct AR6Terrorist_execR6GetCircumstantialActionProgress_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
	class APawn* actingPawn;                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FName Anim;                                                               //0
	FLOAT fFrame;                                                             //0
	FLOAT fRate;                                                              //0
};
struct AR6Terrorist_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6Terrorist_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
};
struct AR6Terrorist_execResetArrest_Parms
{
};
struct AR6Terrorist_execPlayDuck_Parms
{
	FName Anim;                                                               //0
};
struct AR6Terrorist_execPlayArrestWaiting_Parms
{
	FName Anim;                                                               //0
};
struct AR6Terrorist_execPlayKneelWaiting_Parms
{
};
struct AR6Terrorist_execPlayProneWaiting_Parms
{
};
struct AR6Terrorist_execPlayCrouchWaiting_Parms
{
	FName Anim;                                                               //0
};
struct AR6Terrorist_execPlayWaiting_Parms
{
	FName Anim;                                                               //0
	BYTE EDefCon;                                                             //0
};
struct AR6Terrorist_execAnimateWalkingDownStairs_Parms
{
};
struct AR6Terrorist_execAnimateWalkingUpStairs_Parms
{
};
struct AR6Terrorist_execAnimateRunning_Parms
{
	FName nFoward;                                                            //0
};
struct AR6Terrorist_execAnimateWalking_Parms
{
};
struct AR6Terrorist_execAnimateStandTurning_Parms
{
};
struct AR6Terrorist_execSetMovementPhysics_Parms
{
};
struct AR6Terrorist_execCommonInit_Parms
{
	FLOAT fFactor;                                                            //0
	class AR6EngineWeapon* aGrenade;                                          //0
};
struct AR6Terrorist_eventFinishInitialization_Parms
{
};
struct AR6Terrorist_execSetToGrenade_Parms
{
};
struct AR6Terrorist_execSetToNormalWeapon_Parms
{
};
struct AR6Terrorist_execPostBeginPlay_Parms
{
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6Terrorist_execGetFiringRotation_Parms
{
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6Terrorist (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Terrorist : public AR6Pawn
{
public:
	BYTE m_eDefCon;                                                           //CPF_Edit|CPF_Net
	BYTE m_ePersonality;                                                      //CPF_Edit
	BYTE m_eStrategy;                                                         //CPF_Edit
	BYTE m_eStartingStance;                                                   //CPF_Edit
	BYTE m_eHeadAttachmentType;                                               //0
	BYTE m_eTerroType;                                                        //0
	BYTE m_eSpecialAnimValid;                                                 //CPF_Net
	BYTE m_wWantedAimingPitch;                                                //CPF_Edit|CPF_Net
	BYTE m_wWantedHeadYaw;                                                    //CPF_Edit|CPF_Net
	INT m_iGroupID;                                                           //CPF_Edit
	INT m_iCurrentAimingPitch;                                                //CPF_Edit
	INT m_iCurrentHeadYaw;                                                    //CPF_Edit
	INT m_iDiffLevel;                                                         //CPF_Edit
	BITFIELD m_bBoltActionRifle : 1;                                          //0
	BITFIELD m_bHaveAGrenade : 1;                                             //CPF_Edit
	BITFIELD m_bInitFinished : 1;                                             //0
	BITFIELD m_bAllowLeave : 1;                                               //CPF_Edit
	BITFIELD m_bPreventCrouching : 1;                                         //0
	BITFIELD m_bHearNothing : 1;                                              //CPF_Edit
	BITFIELD m_bSprayFire : 1;                                                //CPF_Edit|CPF_Net
	BITFIELD m_bPreventWeaponAnimation : 1;                                   //CPF_Net
	BITFIELD m_bIsUnderArrest : 1;                                            //CPF_Edit|CPF_Net
	BITFIELD m_bPatrolForward : 1;                                            //0
	BITFIELD m_bEnteringView : 1;                                             //0
	FLOAT m_fPlayerCAStartTime;                                               //0
	class AR6THeadAttachment* m_HeadAttachment;                               //0
	class AActor* m_Radio;                                                    //0
	class AR6TerroristAI* m_controller;                                       //0
	class AR6DeploymentZone* m_DZone;                                         //0
	FName m_szSpecialAnimName;                                                //CPF_Net
	class FRotator m_rFiringRotation;                                         //CPF_Edit
	class FString m_szUsedTemplate;                                           //CPF_Edit|CPF_NeedCtorLink
	class FString m_szPrimaryWeapon;                                          //CPF_Edit|CPF_NeedCtorLink
	class FString m_szGrenadeWeapon;                                          //CPF_Edit|CPF_NeedCtorLink
	class FString m_szGadget;                                                 //CPF_Edit|CPF_NeedCtorLink
	virtual ~AR6Terrorist();
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	AR6Terrorist(class AR6Terrorist const &);
	AR6Terrorist();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void UpdateAiming(FLOAT);
	void eventFinishInitialization();
	void eventLoopSpecialAnim();
	void eventPlaySpecialAnim();
	void eventStopSpecialAnim();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Terrorist & operator=(class AR6Terrorist const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6GenericHB_execProcessTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
};
struct AR6GenericHB_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6GenericHB_execLanded_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
};
struct AR6GenericHB_eventHitWall_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
	class AActor* Wall;                                                       //CPF_Parm
	class FVector vTraceEnd;                                                  //0
	class FRotator rotGrenade;                                                //0
	FLOAT fOldHeight;                                                         //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class AActor* pHit;                                                       //0
	class UMaterial* HitMaterial;                                             //0
};
struct AR6GenericHB_execSetSpeed_Parms
{
	FLOAT fSpeed;                                                             //CPF_Parm
};

// *****************************************************************************
// AR6GenericHB (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GenericHB : public AR6InteractiveObject
{
public:
	BITFIELD m_bFirstImpact : 1;                                              //0
	class USound* m_ImpactSound;                                              //0
	class USound* m_ImpactGroundSound;                                        //0
	class USound* m_ImpactWaterSound;                                         //0
	virtual ~AR6GenericHB();
	AR6GenericHB(class AR6GenericHB const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6GenericHB & operator=(class AR6GenericHB const &);
protected:
	AR6GenericHB();
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// MenuDisplayed ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT MenuDisplayed
{
};
struct UR6InteractionRoseDesVents_execDrawTextCenteredInBox_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FString strText;                                                    //CPF_Parm|CPF_NeedCtorLink
	FLOAT fPosX;                                                              //CPF_Parm
	FLOAT fPosY;                                                              //CPF_Parm
	FLOAT fWidth;                                                             //CPF_Parm
	FLOAT fHeight;                                                            //CPF_Parm
	FLOAT fTextWidth;                                                         //0
	FLOAT fTextHeight;                                                        //0
	BITFIELD bBackCenter : 1;                                                 //0
	FLOAT fBackOrgX;                                                          //0
	FLOAT fBackOrgY;                                                          //0
	FLOAT fBackClipX;                                                         //0
	FLOAT fBackClipY;                                                         //0
};
struct UR6InteractionRoseDesVents_execDrawRoseDesVents_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT iMnuChoice;                                                           //CPF_Parm
	INT iItem;                                                                //0
	INT iUStart;                                                              //0
	INT iUEnd;                                                                //0
	FLOAT fPosX;                                                              //0
	FLOAT fPosY;                                                              //0
	FLOAT fCenterX;                                                           //0
	FLOAT fCenterY;                                                           //0
	class FColor TeamColor;                                                   //0
	FLOAT fScaleX;                                                            //0
	FLOAT fScaleY;                                                            //0
	class UTexture* CurrentTexture;                                           //0
	BITFIELD bFlip : 1;                                                       //0
	BITFIELD bHasSubMenu : 1;                                                 //0
	BITFIELD bIsCurrent : 1;                                                  //0
};
struct UR6InteractionRoseDesVents_execKeyEvent_Parms
{
	BYTE eKey;                                                                //CPF_Parm
	BYTE eAction;                                                             //CPF_Parm
	FLOAT fDelta;                                                             //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionRoseDesVents_execDisplayMenu_Parms
{
	BITFIELD bDisplay : 1;                                                    //CPF_Parm
	BITFIELD bOpen : 1;                                                       //CPF_Parm
};
struct UR6InteractionRoseDesVents_execGetCurrentSubMenuChoice_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionRoseDesVents_execGetCurrentMenuChoice_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionRoseDesVents_execCurrentItemHasSubMenu_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionRoseDesVents_execMenuItemEnabled_Parms
{
	INT iItem;                                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionRoseDesVents_execItemHasSubMenu_Parms
{
	INT iItem;                                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionRoseDesVents_execActionKeyReleased_Parms
{
};
struct UR6InteractionRoseDesVents_execActionKeyPressed_Parms
{
};
struct UR6InteractionRoseDesVents_execItemClicked_Parms
{
	INT iItem;                                                                //CPF_Parm
};
struct UR6InteractionRoseDesVents_execItemRightClicked_Parms
{
	INT iItem;                                                                //CPF_Parm
};
struct UR6InteractionRoseDesVents_execNoItemSelected_Parms
{
};
struct UR6InteractionRoseDesVents_execSetMenuChoice_Parms
{
	INT iChoice;                                                              //CPF_Parm
};
struct UR6InteractionRoseDesVents_execIsValidMenuChoice_Parms
{
	INT iChoice;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionRoseDesVents_execGotoSubMenu_Parms
{
};
struct UR6InteractionRoseDesVents_eventInitialized_Parms
{
};

// *****************************************************************************
// UR6InteractionRoseDesVents (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractionRoseDesVents : public UInteraction
{
public:
	INT m_iCurrentMnuChoice;                                                  //0
	INT m_iCurrentSubMnuChoice;                                               //0
	INT C_iMouseDelta;                                                        //0
	BITFIELD m_bActionKeyDown : 1;                                            //0
	BITFIELD m_bIgnoreNextActionKeyRelease : 1;                               //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_iTextureWidth;                                                    //0
	FLOAT m_iTextureHeight;                                                   //0
	class AR6PlayerController* m_Player;                                      //0
	class UTexture* m_TexMNU;                                                 //0
	class UTexture* m_TexMNUItemNormalTop;                                    //0
	class UTexture* m_TexMNUItemNormalLeft;                                   //0
	class UTexture* m_TexMNUItemNormalSubTop;                                 //0
	class UTexture* m_TexMNUItemNormalSubLeft;                                //0
	class UTexture* m_TexMNUItemSelectedSubTop;                               //0
	class UTexture* m_TexMNUItemSelectedSubLeft;                              //0
	class UTexture* m_TexMNUItemSelectedTop;                                  //0
	class UTexture* m_TexMNUItemSelectedLeft;                                 //0
	class UFont* m_Font;                                                      //0
	class USound* m_RoseOpenSnd;                                              //0
	class USound* m_RoseSelectSnd;                                            //0
	class FColor m_color;                                                     //0
	class FString m_ActionKey;                                                //CPF_NeedCtorLink
};

// *****************************************************************************
// AR6ReferenceIcons (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ReferenceIcons : public AActor
{
};
struct UR6CommonRainbowVoices_execPlayCommonRainbowVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eRainbowVoices;                                                      //CPF_Parm
};

// *****************************************************************************
// UR6CommonRainbowVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6CommonRainbowVoices : public UR6Voices
{
public:
	class USound* m_sndTerroristDown;                                         //0
	class USound* m_sndTakeWound;                                             //0
	class USound* m_sndGoesDown;                                              //0
	class USound* m_sndEntersSmoke;                                           //0
	class USound* m_sndEntersGas;                                             //0
	class USound* m_sndCoughOxygene;                                          //0
	class USound* m_sndSuffocation;                                           //0
};
struct UR6MultiCoopVoices_execPlayRainbowTeamVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eVoices;                                                             //CPF_Parm
};

// *****************************************************************************
// UR6MultiCoopVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MultiCoopVoices : public UR6Voices
{
public:
	class USound* m_sndPlacingBug;                                            //0
	class USound* m_sndBugActivated;                                          //0
	class USound* m_sndAccessingComputer;                                     //0
	class USound* m_sndComputerHacked;                                        //0
	class USound* m_sndEscortingHostage;                                      //0
	class USound* m_sndHostageSecured;                                        //0
	class USound* m_sndPlacingExplosives;                                     //0
	class USound* m_sndExplosivesReady;                                       //0
	class USound* m_sndDesactivatingSecurity;                                 //0
	class USound* m_sndSecurityDeactivated;                                   //0
};
struct UR6RainbowOtherTeamVoices_execPlayRainbowTeamVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eRainbowVoices;                                                      //CPF_Parm
};
struct UR6RainbowOtherTeamVoices_execPlayRainbowOtherTeamVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eRainbowVoices;                                                      //CPF_Parm
};

// *****************************************************************************
// UR6RainbowOtherTeamVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RainbowOtherTeamVoices : public UR6Voices
{
public:
	class USound* m_sndSniperHasTarget;                                       //0
	class USound* m_sndSniperLooseTarget;                                     //0
	class USound* m_sndSniperTangoDown;                                       //0
	class USound* m_sndMemberDown;                                            //0
	class USound* m_sndRainbowHitRainbow;                                     //0
	class USound* m_sndObjective1;                                            //0
	class USound* m_sndObjective2;                                            //0
	class USound* m_sndObjective3;                                            //0
	class USound* m_sndObjective4;                                            //0
	class USound* m_sndObjective5;                                            //0
	class USound* m_sndObjective6;                                            //0
	class USound* m_sndObjective7;                                            //0
	class USound* m_sndObjective8;                                            //0
	class USound* m_sndObjective9;                                            //0
	class USound* m_sndObjective10;                                           //0
	class USound* m_sndWaitAlpha;                                             //0
	class USound* m_sndWaitBravo;                                             //0
	class USound* m_sndWaitCharlie;                                           //0
	class USound* m_sndWaitZulu;                                              //0
	class USound* m_sndEntersSmoke;                                           //0
	class USound* m_sndEntersGas;                                             //0
	class USound* m_sndPlacingBug;                                            //0
	class USound* m_sndBugActivated;                                          //0
	class USound* m_sndAccessingComputer;                                     //0
	class USound* m_sndComputerHacked;                                        //0
	class USound* m_sndEscortingHostage;                                      //0
	class USound* m_sndHostageSecured;                                        //0
	class USound* m_sndPlacingExplosives;                                     //0
	class USound* m_sndExplosivesReady;                                       //0
	class USound* m_sndDesactivatingSecurity;                                 //0
	class USound* m_sndSecurityDeactivated;                                   //0
	class USound* m_sndStatusEngaging;                                        //0
	class USound* m_sndStatusMoving;                                          //0
	class USound* m_sndStatusWaiting;                                         //0
	class USound* m_sndStatusWaitAlpha;                                       //0
	class USound* m_sndStatusWaitBravo;                                       //0
	class USound* m_sndStatusWaitCharlie;                                     //0
	class USound* m_sndStatusWaitZulu;                                        //0
	class USound* m_sndStatusSniperWaitAlpha;                                 //0
	class USound* m_sndStatusSniperWaitBravo;                                 //0
	class USound* m_sndStatusSniperWaitCharlie;                               //0
	class USound* m_sndStatusSniperUntilAlpha;                                //0
	class USound* m_sndStatusSniperUntilBravo;                                //0
	class USound* m_sndStatusSniperUntilCharlie;                              //0
};
struct AR6BloodSplat_execPostBeginPlay_Parms
{
	class FRotator DecalRot;                                                  //0
};

// *****************************************************************************
// AR6BloodSplat (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BloodSplat : public AR6DecalsBase
{
public:
	class UTexture* m_BloodSplatTexture;                                      //0
};
struct UR6TerroristVoices_execPlayTerroristVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eTerroSound;                                                         //CPF_Parm
};

// *****************************************************************************
// UR6TerroristVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6TerroristVoices : public UR6Voices
{
public:
	class USound* m_sndWounded;                                               //0
	class USound* m_sndTaunt;                                                 //0
	class USound* m_sndSurrender;                                             //0
	class USound* m_sndSeesTearGas;                                           //0
	class USound* m_sndRunAway;                                               //0
	class USound* m_sndGrenade;                                               //0
	class USound* m_sndCoughsSmoke;                                           //0
	class USound* m_sndCoughsGas;                                             //0
	class USound* m_sndBackup;                                                //0
	class USound* m_sndSeesSurrenderedHostage;                                //0
	class USound* m_sndSeesRainbow_LowAlert;                                  //0
	class USound* m_sndSeesRainbow_HighAlert;                                 //0
	class USound* m_sndSeesFreeHostage;                                       //0
	class USound* m_sndHearsNoize;                                            //0
};

// *****************************************************************************
// UR6InteractiveObjectActionPlayAnim (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractiveObjectActionPlayAnim : public UR6InteractiveObjectAction
{
public:
	FName m_vAnimName;                                                        //CPF_Edit
};
struct UR6HostageVoices_execPlayHostageVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE EHostageVoices;                                                      //CPF_Parm
};
struct UR6HostageVoices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoices : public UR6Voices
{
public:
	class USound* m_sndRun;                                                   //0
	class USound* m_sndFrozen;                                                //0
	class USound* m_sndFoetal;                                                //0
	class USound* m_sndHears_Shooting;                                        //0
	class USound* m_sndRnbFollow;                                             //0
	class USound* m_sndRndStayPut;                                            //0
	class USound* m_sndRnbHurt;                                               //0
	class USound* m_sndEntersGas;                                             //0
	class USound* m_sndEntersSmoke;                                           //0
	class USound* m_sndClarkReprimand;                                        //0
};
struct UR6PlayAnim_eventAnimFinished_Parms
{
};

// *****************************************************************************
// UR6PlayAnim (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PlayAnim : public UObject
{
public:
	INT m_MaxPlayTime;                                                        //CPF_Edit
	INT m_PlayedTime;                                                         //0
	INT m_iFrameNumber;                                                       //0
	BITFIELD m_bLoopAnim : 1;                                                 //CPF_Edit
	BITFIELD m_bStarted : 1;                                                  //0
	BITFIELD m_bFirstTime : 1;                                                //0
	FLOAT m_Rate;                                                             //CPF_Edit
	FLOAT m_TweenTime;                                                        //CPF_Edit
	FLOAT m_fBeginPct;                                                        //0
	FLOAT m_fEndPct;                                                          //0
	class AActor* m_AttachActor;                                              //CPF_Edit
	FName m_Sequence;                                                         //CPF_Edit
	FName m_PawnTag;                                                          //CPF_Edit
	class FString m_StaticMeshTag;                                            //CPF_Edit|CPF_NeedCtorLink
	virtual ~UR6PlayAnim();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6PlayAnim(class UR6PlayAnim const &);
	UR6PlayAnim();
	void eventAnimFinished();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6PlayAnim & operator=(class UR6PlayAnim const &);
private:
	static class UClass PrivateStaticClass();
};
struct UR6MatineeAttach_execMatineeDetach_Parms
{
	class FVector Location;                                                   //0
	class FRotator Rotation;                                                  //0
};
struct UR6MatineeAttach_execMatineeAttach_Parms
{
};
struct UR6MatineeAttach_execInitAttach_Parms
{
	class FVector MeshPos;                                                    //0
	class FRotator MeshRot;                                                   //0
};
struct UR6MatineeAttach_execTestLocation_Parms
{
};
struct UR6MatineeAttach_execGetBoneInformation_Parms
{
};

// *****************************************************************************
// UR6MatineeAttach (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MatineeAttach : public UObject
{
public:
	BITFIELD m_bInitialized : 1;                                              //0
	class AActor* m_AttachActor;                                              //0
	class AR6Pawn* m_AttachPawn;                                              //0
	FName m_PawnTag;                                                          //0
	FName m_BoneName;                                                         //0
	class FVector m_InteractionPos;                                           //0
	class FRotator m_InteractionRot;                                          //0
	class FVector m_OffsetPos;                                                //0
	class FRotator m_OffsetRot;                                               //0
	class FString m_StaticMeshTag;                                            //CPF_NeedCtorLink
	virtual ~UR6MatineeAttach();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6MatineeAttach(class UR6MatineeAttach const &);
	void execGetBoneInformation(struct FFrame &, void * const);
	void execTestLocation(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6MatineeAttach & operator=(class UR6MatineeAttach const &);
protected:
	UR6MatineeAttach();
private:
	static class UClass PrivateStaticClass();
};
struct UR6SubActionAnimSequence_eventSequenceFinished_Parms
{
};
struct UR6SubActionAnimSequence_eventSequenceChanged_Parms
{
};
struct UR6SubActionAnimSequence_eventInitialize_Parms
{
};

// *****************************************************************************
// UR6SubActionAnimSequence (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6SubActionAnimSequence : public UMatSubAction
{
public:
	INT m_CurIndex;                                                           //0
	BITFIELD m_bUseRootMotion : 1;                                            //CPF_Edit
	BITFIELD m_bFirstTime : 1;                                                //0
	BITFIELD m_bResetAnimation : 1;                                           //0
	class AR6Pawn* m_AffectedPawn;                                            //CPF_Edit
	class AActor* m_AffectedActor;                                            //CPF_Edit
	class UR6PlayAnim* m_CurSequence;                                         //0
	TArray<class UR6PlayAnim*> m_Sequences;                                   //CPF_Edit|CPF_ExportObject|CPF_NeedCtorLink|CPF_0x04000000
	virtual ~UR6SubActionAnimSequence();
	virtual INT Update(FLOAT, class ASceneManager *);
	virtual class FString GetStatString();
	virtual void PreBeginPreview();
	virtual INT UpdateGame(FLOAT, class ASceneManager *);
	FLOAT GetAnimDuration(class UR6PlayAnim *);
	class UR6PlayAnim * GetAnimation(FLOAT);
	FLOAT GetCurAnimPct(FLOAT);
	FLOAT GetTotalLength();
	INT IncrementSequence();
	static void CDECL InternalConstructor(void *);
	INT IsAnimAtFrame(INT, INT);
	INT LaunchSequence();
	FLOAT PctToFrameNumber(class UR6PlayAnim *, FLOAT);
	static class UClass * CDECL StaticClass();
	UR6SubActionAnimSequence(class UR6SubActionAnimSequence const &);
	UR6SubActionAnimSequence();
	void eventSequenceChanged();
	void eventSequenceFinished();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6SubActionAnimSequence & operator=(class UR6SubActionAnimSequence const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UR6SubActionLookAt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6SubActionLookAt : public UMatSubAction
{
public:
	BITFIELD m_bAim : 1;                                                      //CPF_Edit
	BITFIELD m_bNoBlend : 1;                                                  //CPF_Edit
	class AR6Pawn* m_AffectedPawn;                                            //CPF_Edit
	class AActor* m_TargetActor;                                              //CPF_Edit
	virtual ~UR6SubActionLookAt();
	virtual INT Update(FLOAT, class ASceneManager *);
	virtual class FString GetStatString();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6SubActionLookAt(class UR6SubActionLookAt const &);
	UR6SubActionLookAt();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6SubActionLookAt & operator=(class UR6SubActionLookAt const &);
private:
	static class UClass PrivateStaticClass();
};

enum EZDRStat{
	 ZDRS_None=0
	,ZDRS_Contact=1
};
enum EZDRType{
	 ZDRT_None=0
	,ZDRT_Break=1
};
enum EReactionType{
	 RT_None=0
	,RT_Break=1
	,RT_Karma=2
	,RT_KarmaAndBreak=3
};

// -----------------------------------------------------------------------------
// FstActorReactionState ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstActorReactionState
{
public:
	FLOAT fDamagePercentage;                                              //CPF_Edit
	INT iActorStat;                                                       //CPF_Edit
	class AActor* m_actor;                                                //CPF_Edit
};

// -----------------------------------------------------------------------------
// FstZDRSound ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstZDRSound
{
public:
	BYTE m_eZDRGroupe;                                                    //CPF_Edit
	BYTE m_eZDRSoundType;                                                 //CPF_Edit
	class USound* m_aZDRSound;                                            //CPF_Edit
	class AActor* m_aZDRActor;                                            //CPF_Edit
	FLOAT m_fZDRVolume;                                                   //CPF_Edit
};

// -----------------------------------------------------------------------------
// FstZDR ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstZDR
{
public:
	BYTE m_eZDRType;                                                      //CPF_Edit
	BYTE m_eZDRStat;                                                      //0
	FLOAT m_fZDRRadius;                                                   //CPF_Edit
	class FVector m_vZDRLocation;                                         //CPF_Edit
	TArray<struct FstZDRSound> m_ZDRSoundList;                            //CPF_Edit|CPF_NeedCtorLink
	INT m_iZDRDamageStat;                                                 //CPF_Edit
	FLOAT m_fZDRImpactInterval;                                           //CPF_Edit
	FLOAT m_fZDRLastImpactTime;                                           //0
};
struct AMP2IOKarma_execR6TakeDamage_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	INT iBulletGroup;                                                         //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eStunFromTable;                                                      //0
	INT iKillFromHit;                                                         //0
	class FVector vBulletDirection;                                           //0
	INT iSndIndex;                                                            //0
	BITFIELD bIsSilenced : 1;                                                 //0
	class UKarmaParams* localkparams;                                         //0
	class FVector TearOffMomentum;                                            //0
	class FVector shotDir;                                                    //0
	INT iActor;                                                               //0
	struct FstActorReactionState stState;                                     //0
	class AMP2IOKarma* IOKarmaActor;                                          //0
};
struct AMP2IOKarma_eventZDRSetDamageState_Parms
{
	INT iDamageStat;                                                          //CPF_Parm
	FLOAT fPercentage;                                                        //CPF_Parm
	class FVector ZDRLocation;                                                //CPF_Parm
	INT iState;                                                               //0
	INT iRandomMesh;                                                          //0
	INT iRandomSkin;                                                          //0
	INT iStateToUse;                                                          //0
	FLOAT fRandValue;                                                         //0
	INT iActor;                                                               //0
	INT iSkin;                                                                //0
	struct FstDamageState stState;                                            //CPF_NeedCtorLink
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
	class AActor* SpawnedActor;                                               //0
};
struct AMP2IOKarma_eventKImpact_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class FVector pos;                                                        //CPF_Parm
	class FVector impactVel;                                                  //CPF_Parm
	class FVector impactNorm;                                                 //CPF_Parm
	INT numSounds;                                                            //0
	INT soundNum;                                                             //0
};
struct AMP2IOKarma_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct AMP2IOKarma_execTimer_Parms
{
};
struct AMP2IOKarma_eventPreBeginPlay_Parms
{
	INT i;                                                                    //0
};
struct AMP2IOKarma_eventStartSimulation_Parms
{
	INT WhatIdo;                                                              //CPF_Parm
};
struct AMP2IOKarma_eventStopSimulation_Parms
{
	INT WhatIdo;                                                              //CPF_Parm
	BITFIELD bUseZmin : 1;                                                    //0
};
struct AMP2IOKarma_eventReinitSimulation_Parms
{
	INT WhatIdo;                                                              //CPF_Parm
};
struct AMP2IOKarma_execResetOriginalData_Parms
{
	INT i;                                                                    //0
};
struct AMP2IOKarma_execSaveOriginalData_Parms
{
};
struct AMP2IOKarma_execMP2IOKarmaAllNativeFct_Parms
{
	INT WhatIdo;                                                              //CPF_Parm
	class AActor* _owner;                                                     //CPF_Parm
	FLOAT _var_int;                                                           //CPF_Parm
	FLOAT _var_float;                                                         //CPF_Parm
};

// *****************************************************************************
// AMP2IOKarma (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AMP2IOKarma : public AR6InteractiveObject
{
public:
	BYTE m_eReactionType;                                                     //CPF_Edit
	BYTE SavePhysics;                                                         //0
	BYTE SaveReactionType;                                                    //0
	BITFIELD bCollideRagDoll : 1;                                             //CPF_Edit
	BITFIELD bUseSafeTimeWithLevel : 1;                                       //CPF_Edit
	BITFIELD bUseSafeTimeWithSM : 1;                                          //CPF_Edit
	BITFIELD bHideBefore : 1;                                                 //CPF_Edit
	BITFIELD bHideAfter : 1;                                                  //CPF_Edit
	BITFIELD bHideCollision : 1;                                              //CPF_Edit
	BITFIELD bSimulationActive : 1;                                           //0
	BITFIELD m_bOneTime : 1;                                                  //CPF_Edit
	BITFIELD SavebCollideActors : 1;                                          //0
	BITFIELD SavebBlockActors : 1;                                            //0
	BITFIELD SavebBlockPlayers : 1;                                           //0
	FLOAT m_fMaxSimAge;                                                       //CPF_Edit
	FLOAT m_fLoseTime;                                                        //CPF_Edit
	FLOAT m_fCurrentLoseTime;                                                 //0
	FLOAT m_fCurrentSimAge;                                                   //0
	FLOAT m_fZMin;                                                            //CPF_Edit
	FLOAT m_fScaleStartLinVel;                                                //CPF_Edit
	FLOAT ImpactVolume;                                                       //CPF_Edit
	FLOAT ImpactInterval;                                                     //CPF_Edit
	TArray<struct FstZDR> m_ZDRList;                                          //CPF_Edit|CPF_NeedCtorLink
	TArray<class USound*> ImpactSounds;                                       //CPF_Edit|CPF_NeedCtorLink
	TArray<struct FstActorReactionState> m_ActorReactionList;                 //CPF_Edit|CPF_NeedCtorLink
	class FVector SaveLocation;                                               //0
	class FRotator SaveRotation;                                              //0
	FLOAT LastImpactTime;                                                     //CPF_Transient
	virtual ~AMP2IOKarma();
	virtual void CheckForErrors();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual INT KMP2DynKarmaInterface(INT, class FVector, class FRotator, class AActor *);
	AMP2IOKarma(class AMP2IOKarma const &);
	AMP2IOKarma();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventReinitSimulation(INT);
	void eventStartSimulation(INT);
	void eventStopSimulation(INT);
	void eventZDRSetDamageState(INT, FLOAT, class FVector);
	void execMP2IOKarmaAllNativeFct(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AMP2IOKarma & operator=(class AMP2IOKarma const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6GameReplicationInfo_eventSaveRemoteServerSettings_Parms
{
	class FString NewServerFile;                                              //CPF_Parm|CPF_NeedCtorLink
	class UR6ServerInfo* pServerOptions;                                      //0
	INT _iCount;                                                              //0
	class UWindowConsole* _console;                                           //0
};
struct AR6GameReplicationInfo_eventNewServerState_Parms
{
};
struct AR6GameReplicationInfo_execRefreshMPInfoPlayerStats_Parms
{
	class APlayerReplicationInfo* PRI;                                        //0
	struct FPlayerMenuInfo _PlayerMenuInfo;                                   //CPF_NeedCtorLink
	INT _iLastValidIndex;                                                     //0
};
struct AR6GameReplicationInfo_execRefreshMPlayerInfo_Parms
{
};
struct AR6GameReplicationInfo_execPlaySoundStatus_Parms
{
};
struct AR6GameReplicationInfo_eventDestroyed_Parms
{
};
struct AR6GameReplicationInfo_execControllerStarted_Parms
{
	class UR6GameMenuCom* NewMenuCom;                                         //CPF_Parm
};
struct AR6GameReplicationInfo_eventGetRoundTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameReplicationInfo_eventTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct AR6GameReplicationInfo_execFirstPassReset_Parms
{
};

// *****************************************************************************
// AR6GameReplicationInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GameReplicationInfo : public AGameReplicationInfo
{
public:
	INT m_iDeathCameraMode;                                                   //CPF_Net
	INT m_MaxPlayers;                                                         //CPF_Net
	INT m_iCurrentRound;                                                      //CPF_Net
	INT m_iRoundsPerMatch;                                                    //CPF_Net
	INT m_iDiffLevel;                                                         //CPF_Net
	INT m_iNbOfTerro;                                                         //CPF_Net
	INT m_iMenuCountDownTime;                                                 //0
	INT m_aTeamScore[2];                                                      //CPF_Net
	INT c_iTeamNumBravo;                                                      //0
	BITFIELD bShowLog : 1;                                                    //0
	BITFIELD m_bPasswordReq : 1;                                              //CPF_Net
	BITFIELD m_bAdminPasswordReq : 1;                                         //CPF_Net
	BITFIELD m_bFriendlyFire : 1;                                             //CPF_Net
	BITFIELD m_bAutoBalance : 1;                                              //CPF_Net
	BITFIELD m_bTKPenalty : 1;                                                //CPF_Net
	BITFIELD m_bMenuTKPenaltySetting : 1;                                     //CPF_Net
	BITFIELD m_bShowNames : 1;                                                //CPF_Net
	BITFIELD m_bInternetSvr : 1;                                              //CPF_Net
	BITFIELD m_bFFPWeapon : 1;                                                //CPF_Net
	BITFIELD m_bDedicatedSvr : 1;                                             //CPF_Net
	BITFIELD m_bAIBkp : 1;                                                    //CPF_Net
	BITFIELD m_bRotateMap : 1;                                                //CPF_Net
	BITFIELD m_bRepMenuCountDownTimePaused : 1;                               //CPF_Net
	BITFIELD m_bRepMenuCountDownTimeUnlimited : 1;                            //CPF_Net
	BITFIELD m_bIsWritableMapAllowed : 1;                                     //CPF_Net
	FLOAT m_fTimeBetRounds;                                                   //CPF_Net
	FLOAT m_fBombTime;                                                        //CPF_Net
	FLOAT m_fRepMenuCountDownTime;                                            //CPF_Net
	FLOAT m_fRepMenuCountDownTimeLastUpdate;                                  //0
	class AR6RainbowTeam* m_RainbowTeam[3];                                   //0
	class UR6GameMenuCom* m_MenuCommunication;                                //0
	class FString m_szCurrGameType;                                           //CPF_Net|CPF_NeedCtorLink
	class FString m_mapArray[32];                                             //CPF_Net|CPF_NeedCtorLink
	class FString m_gameModeArray[32];                                        //CPF_Net|CPF_NeedCtorLink
	class FString m_szSubMachineGunsRes[32];                                  //CPF_Net|CPF_NeedCtorLink
	class FString m_szShotGunRes[32];                                         //CPF_Net|CPF_NeedCtorLink
	class FString m_szAssRifleRes[32];                                        //CPF_Net|CPF_NeedCtorLink
	class FString m_szMachGunRes[32];                                         //CPF_Net|CPF_NeedCtorLink
	class FString m_szSnipRifleRes[32];                                       //CPF_Net|CPF_NeedCtorLink
	class FString m_szPistolRes[32];                                          //CPF_Net|CPF_NeedCtorLink
	class FString m_szMachPistolRes[32];                                      //CPF_Net|CPF_NeedCtorLink
	class FString m_szGadgPrimaryRes[32];                                     //CPF_Net|CPF_NeedCtorLink
	class FString m_szGadgSecondayRes[32];                                    //CPF_Net|CPF_NeedCtorLink
	class FString m_szGadgMiscRes[32];                                        //CPF_Net|CPF_NeedCtorLink
	virtual ~AR6GameReplicationInfo();
	AR6GameReplicationInfo(class AR6GameReplicationInfo const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	FLOAT eventGetRoundTime();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6GameReplicationInfo & operator=(class AR6GameReplicationInfo const &);
protected:
	AR6GameReplicationInfo();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6ClimbablePoint (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ClimbablePoint : public ANavigationPoint
{
public:
	class AR6ClimbableObject* m_climbableObj;                                 //0
	class AR6ClimbablePoint* m_connectedClimbablePoint;                       //0
	class FVector m_vLookDir;                                                 //0
	virtual ~AR6ClimbablePoint();
	virtual INT ProscribedPathTo(class ANavigationPoint *);
	virtual void addReachSpecs(class APawn *, INT);
	virtual void InitForPathFinding();
	virtual void ClearPaths();
	AR6ClimbablePoint(class AR6ClimbablePoint const &);
	AR6ClimbablePoint();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6ClimbablePoint & operator=(class AR6ClimbablePoint const &);
private:
	static class UClass PrivateStaticClass();
};

enum eClimbableObjectCircumstantialAction{
	 COBJ_None=0
	,COBJ_Climb=1
};
enum EClimbHeight{
	 EClimbNone=0
	,EClimb64=1
	,EClimb96=2
};
struct AR6ClimbableObject_eventDetach_Parms
{
	class AActor* pActor;                                                     //CPF_Parm
	class AR6Pawn* pPawn;                                                     //0
};
struct AR6ClimbableObject_eventAttach_Parms
{
	class AActor* pActor;                                                     //CPF_Parm
	class AR6Pawn* pPawn;                                                     //0
};
struct AR6ClimbableObject_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6ClimbableObject_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	class AR6Pawn* P;                                                         //0
};
struct AR6ClimbableObject_eventBump_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AR6Pawn* P;                                                         //0
};
struct AR6ClimbableObject_execIsClimbableBy_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
	BITFIELD bCheckCylinderTranslation : 1;                                   //CPF_Parm
	BITFIELD bCheckRotation : 1;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FRotator rPawnRot;                                                  //0
	FLOAT fFootZ;                                                             //0
	FLOAT fDistance2d;                                                        //0
	class FVector vStart;                                                     //0
	class FVector vDest;                                                      //0
	class FVector vPawnLocation;                                              //0
};
struct AR6ClimbableObject_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6ClimbableObject (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ClimbableObject : public AR6AbstractClimbableObj
{
public:
	BYTE m_eClimbHeight;                                                      //CPF_Edit|CPF_Net
	class AR6ClimbablePoint* m_climbablePoint;                                //CPF_Net
	class AR6ClimbablePoint* m_insideClimbablePoint;                          //0
	class FVector m_vClimbDir;                                                //CPF_Net
	virtual ~AR6ClimbableObject();
	virtual void PostScriptDestroyed();
	virtual INT ShouldTrace(class AActor *, DWORD);
	virtual void AddMyMarker(class AActor *);
	virtual void CheckForErrors();
	AR6ClimbableObject(class AR6ClimbableObject const &);
	AR6ClimbableObject();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6ClimbableObject & operator=(class AR6ClimbableObject const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6IOSound (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IOSound : public AActor
{
public:
	virtual ~AR6IOSound();
	AR6IOSound(class AR6IOSound const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6IOSound & operator=(class AR6IOSound const &);
protected:
	AR6IOSound();
private:
	static class UClass PrivateStaticClass();
};

enum eDoorCircumstantialAction{
	 CA_None=0
	,CA_Open=1
	,CA_OpenAndClear=2
	,CA_OpenAndGrenade=3
	,CA_OpenGrenadeAndClear=4
	,CA_Close=5
	,CA_Clear=6
	,CA_Grenade=7
	,CA_GrenadeAndClear=8
	,CA_GrenadeFrag=9
	,CA_GrenadeGas=10
	,CA_GrenadeFlash=11
	,CA_GrenadeSmoke=12
	,CA_Unlock=13
	,CA_Lock=14
	,CA_LockPickStop=15
};
struct AR6IORotatingDoor_execGetTarget_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
	FLOAT fDistanceFromDoor;                                                  //CPF_Parm
	BITFIELD bBackup : 1;                                                     //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vTarget;                                                    //0
};
struct AR6IORotatingDoor_execActorIsOnSideA_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vActorDir2D;                                                //0
};
struct AR6IORotatingDoor_eventBump_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AR6Pawn* Pawn;                                                      //0
	class FVector vDoorDir;                                                   //0
	class FRotator rPawnRot;                                                  //0
	class FVector vPawnDir;                                                   //0
};
struct AR6IORotatingDoor_execR6ActionCanBeExecuted_Parms
{
	INT iAction;                                                              //CPF_Parm
	class APlayerController* PlayerController;                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6PlayerController* pPlayerCtrl;                                   //0
};
struct AR6IORotatingDoor_execR6GetCircumstantialActionProgress_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
	class APawn* actingPawn;                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fPercentage;                                                        //0
};
struct AR6IORotatingDoor_execPlayLockPickSound_Parms
{
};
struct AR6IORotatingDoor_execR6CircumstantialActionProgressStart_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm
};
struct AR6IORotatingDoor_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6IORotatingDoor_execSetDoorState_Parms
{
	BITFIELD bIsClosed : 1;                                                   //CPF_Parm
};
struct AR6IORotatingDoor_execUnlockDoor_Parms
{
};
struct AR6IORotatingDoor_eventTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
	INT rDesYaw;                                                              //0
};
struct AR6IORotatingDoor_eventEndedRotation_Parms
{
};
struct AR6IORotatingDoor_execShouldBeBreached_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IORotatingDoor_execSetBroken_Parms
{
};
struct AR6IORotatingDoor_execR6FillGrenadeSubAction_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	INT iSubMenu;                                                             //CPF_Parm
	class APlayerController* PlayerController;                                //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct AR6IORotatingDoor_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	BITFIELD bDisplayOpenIcon : 1;                                            //0
	class FVector vDistance;                                                  //0
	BITFIELD bOpensTowardsPawn : 1;                                           //0
};
struct AR6IORotatingDoor_execOpenDoorWhenHit_Parms
{
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vBulletDirection;                                           //CPF_Parm
	INT YawVariation;                                                         //CPF_Parm
	BITFIELD bExplosion : 1;                                                  //CPF_Parm
	class FRotator rBulletAsRotator;                                          //0
	class FVector vTemp2;                                                     //0
	class FVector vTemp3;                                                     //0
	INT iYawDifference;                                                       //0
	BITFIELD bShootTurnCCW : 1;                                               //0
};
struct AR6IORotatingDoor_execHitLock_Parms
{
	class FVector vHitVector;                                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vTemp2;                                                     //0
	class FVector vTemp3;                                                     //0
};
struct AR6IORotatingDoor_execR6TakeDamage_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iPenetrationFactor;                                                   //CPF_Parm
	INT iBulletGroup;                                                         //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fPercentage;                                                        //0
	FLOAT fBulletDamMultiplier;                                               //0
	INT i;                                                                    //0
};
struct AR6IORotatingDoor_execDoorOpenTowardsActor_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IORotatingDoor_execCloseDoor_Parms
{
	class AR6Pawn* Pawn;                                                      //CPF_Parm
	INT iRotationRate;                                                        //CPF_Parm
	class FRotator rNewRotation;                                              //0
};
struct AR6IORotatingDoor_execOpenDoor_Parms
{
	class APawn* opener;                                                      //CPF_Parm
	INT iRotationRate;                                                        //CPF_Parm
	class FRotator rNewRotation;                                              //0
};
struct AR6IORotatingDoor_eventEncroachingOn_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* P;                                                         //0
	class AR6AIController* AI;                                                //0
};
struct AR6IORotatingDoor_execClientSetDoor_Parms
{
	class FRotator rNewRotation;                                              //CPF_Parm
	BITFIELD bForce : 1;                                                      //CPF_Parm
};
struct AR6IORotatingDoor_execperformDoorAction_Parms
{
	INT iActionID;                                                            //CPF_Parm
};
struct AR6IORotatingDoor_execR6CircumstantialActionCancel_Parms
{
};
struct AR6IORotatingDoor_execupdateAction_Parms
{
	FLOAT fDeltaMouse;                                                        //CPF_Parm
	class AActor* actionInstigator;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FRotator rNewRotation;                                              //0
	class FRotator rRotation;                                                 //0
	FLOAT fDoorMouvement;                                                     //0
	INT iMaxDoorMove;                                                         //0
	FLOAT fTempSide;                                                          //0
	INT iNewOpening;                                                          //0
};
struct AR6IORotatingDoor_execSetDoorProcessStates_Parms
{
	BITFIELD bOpening : 1;                                                    //CPF_Parm
	BITFIELD bClosing : 1;                                                    //CPF_Parm
};
struct AR6IORotatingDoor_execstartAction_Parms
{
	FLOAT fDeltaMouse;                                                        //CPF_Parm
	class AActor* actionInstigator;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IORotatingDoor_execPostBeginPlay_Parms
{
};
struct AR6IORotatingDoor_execResetOriginalData_Parms
{
	class FRotator rNewRotation;                                              //0
	class FRotator rTempRotation;                                             //0
	BITFIELD bCA : 1;                                                         //0
	BITFIELD bBA : 1;                                                         //0
	BITFIELD bBP : 1;                                                         //0
};
struct AR6IORotatingDoor_execSaveOriginalData_Parms
{
};
struct AR6IORotatingDoor_execRemoveBreach_Parms
{
	class AR6AbstractBullet* BreachAttached;                                  //CPF_Parm
};
struct AR6IORotatingDoor_execAddBreach_Parms
{
	class AR6AbstractBullet* BreachAttached;                                  //CPF_Parm
};
struct AR6IORotatingDoor_execWillOpenOnTouch_Parms
{
	class AR6Pawn* R6Pawn;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6IORotatingDoor (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IORotatingDoor : public AR6IActionObject
{
public:
	INT m_iLockHP;                                                            //CPF_Edit
	INT m_iCurrentLockHP;                                                     //0
	INT m_iMaxOpeningDeg;                                                     //CPF_Edit|CPF_Net
	INT m_iInitialOpeningDeg;                                                 //CPF_Edit|CPF_Net
	INT m_iYawInit;                                                           //CPF_Net
	INT m_iYawMax;                                                            //CPF_Net
	INT m_iMaxOpening;                                                        //CPF_Net
	INT m_iInitialOpening;                                                    //CPF_Net
	INT m_iCurrentOpening;                                                    //0
	BITFIELD m_bTreatDoorAsWindow : 1;                                        //CPF_Edit
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD m_bInProcessOfClosing : 1;                                       //CPF_Net
	BITFIELD m_bInProcessOfOpening : 1;                                       //CPF_Net
	BITFIELD m_bUseWheel : 1;                                                 //0
	BITFIELD m_bForceNoFormation : 1;                                         //CPF_Edit
	BITFIELD m_bIsOpeningClockWise : 1;                                       //CPF_Edit|CPF_Net
	BITFIELD m_bIsDoorLocked : 1;                                             //CPF_Edit|CPF_Net
	BITFIELD sm_bIsDoorLocked : 1;                                            //0
	BITFIELD m_bIsDoorClosed : 1;                                             //CPF_Net
	FLOAT m_fWindowWidth;                                                     //CPF_Edit
	FLOAT m_fUnlockBaseTime;                                                  //CPF_Edit
	class AR6Door* m_DoorActorA;                                              //CPF_Edit|CPF_Net
	class AR6Door* m_DoorActorB;                                              //CPF_Edit|CPF_Net
	class USound* m_OpeningSound;                                             //CPF_Edit
	class USound* m_OpeningWheelSound;                                        //CPF_Edit
	class USound* m_ClosingSound;                                             //CPF_Edit
	class USound* m_ClosingWheelSound;                                        //CPF_Edit
	class USound* m_LockSound;                                                //CPF_Edit
	class USound* m_UnlockSound;                                              //CPF_Edit
	class USound* m_MoveAmbientSound;                                         //CPF_Edit
	class USound* m_MoveAmbientSoundStop;                                     //CPF_Edit
	class USound* m_LockPickSound;                                            //CPF_Edit
	class USound* m_LockPickSoundStop;                                        //CPF_Edit
	class USound* m_ExplosionSound;                                           //CPF_Edit
	TArray<class AR6AbstractBullet*> m_BreachAttached;                        //CPF_NeedCtorLink
	class FVector m_vNormal;                                                  //0
	class FVector m_vCenterOfDoor;                                            //0
	class FVector m_vDoorADir2D;                                              //0
	virtual ~AR6IORotatingDoor();
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	virtual void PostScriptDestroyed();
	virtual INT ShouldTrace(class AActor *, DWORD);
	virtual INT IsMovingBrush() const;
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void AddMyMarker(class AActor *);
	AR6IORotatingDoor(class AR6IORotatingDoor const &);
	AR6IORotatingDoor();
	INT DoorOpenTowards(class FVector);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	INT WillOpenOnTouch(class AR6Pawn *);
	void execAddBreach(struct FFrame &, void * const);
	void execRemoveBreach(struct FFrame &, void * const);
	void execWillOpenOnTouch(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6IORotatingDoor & operator=(class AR6IORotatingDoor const &);
private:
	static class UClass PrivateStaticClass();
};

enum eLadderCircumstantialAction{
	 CAL_None=0
	,CAL_Climb=1
};
enum eLadderEndDirection{
	 LDR_Forward=0
	,LDR_Right=1
	,LDR_Left=2
};

// -----------------------------------------------------------------------------
// PotentialClimb ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PotentialClimb
{
};
struct AR6LadderVolume_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6LadderVolume_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	FLOAT fXYDistance;                                                        //0
	class FVector vLocation;                                                  //0
	class FVector vPawnLocation;                                              //0
	FLOAT fResult;                                                            //0
	FLOAT fPawnFootZ;                                                         //0
};
struct AR6LadderVolume_eventPhysicsChangedFor_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6LadderVolume_execIsAShortLadder_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6LadderVolume_execSpaceIsAvailableAtBottomOfLadder_Parms
{
	BITFIELD bAvoidPlayerOnly : 1;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* Pawn;                                                      //0
	class FVector vDist;                                                      //0
};
struct AR6LadderVolume_execBottomOfLadderIsAccessible_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fBottomZLimit;                                                      //0
	INT i;                                                                    //0
};
struct AR6LadderVolume_execTopOfLadderIsAccessible_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fTopZLimit;                                                         //0
	INT i;                                                                    //0
};
struct AR6LadderVolume_execIsAvailable_Parms
{
	class APawn* P;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6LadderVolume_execRemoveClimber_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
	INT i;                                                                    //0
};
struct AR6LadderVolume_execAddClimber_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
	INT i;                                                                    //0
};
struct AR6LadderVolume_eventSetPotentialClimber_Parms
{
};
struct AR6LadderVolume_eventPawnLeavingVolume_Parms
{
	class APawn* P;                                                           //CPF_Parm
};
struct AR6LadderVolume_eventPawnEnteredVolume_Parms
{
	class APawn* P;                                                           //CPF_Parm
	class AR6Pawn* Pawn;                                                      //0
	class FRotator rPawnRot;                                                  //0
};
struct AR6LadderVolume_execDisableCollisions_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
};
struct AR6LadderVolume_execEnableCollisions_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
};
struct AR6LadderVolume_execResetOriginalData_Parms
{
	INT i;                                                                    //0
};
struct AR6LadderVolume_execDestroyed_Parms
{
};
struct AR6LadderVolume_execPostNetBeginPlay_Parms
{
	class ALadder* L;                                                         //0
	class ALadder* M;                                                         //0
	class FVector vDir;                                                       //0
};
struct AR6LadderVolume_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6LadderVolume (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6LadderVolume : public ALadderVolume
{
public:
	BYTE m_eLadderEndDirection;                                               //CPF_Edit
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	FLOAT m_fBottomLadderActionRange;                                         //0
	class AR6Ladder* m_TopLadder;                                             //0
	class AR6Ladder* m_BottomLadder;                                          //0
	class AR6LadderCollision* m_TopCollision;                                 //0
	class AR6LadderCollision* m_BottomCollision;                              //0
	class AR6Pawn* m_Climber[6];                                              //0
	class USound* m_SlideSound;                                               //CPF_Edit
	class USound* m_SlideSoundStop;                                           //CPF_Edit
	class USound* m_HandSound;                                                //CPF_Edit
	class USound* m_FootSound;                                                //CPF_Edit
	virtual ~AR6LadderVolume();
	virtual INT ShouldTrace(class AActor *, DWORD);
	virtual void AddMyMarker(class AActor *);
	AR6LadderVolume(class AR6LadderVolume const &);
	AR6LadderVolume();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventSetPotentialClimber();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6LadderVolume & operator=(class AR6LadderVolume const &);
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// FSTHostage ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTHostage
{
public:
	class AR6Hostage* hostage;                                            //0
	class AR6TerroristAI* terro;                                          //0
	INT bInZone;                                                          //0
};
struct UR6TerroristMgr_execRemoveHostageAssignment_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	INT i;                                                                    //0
};
struct UR6TerroristMgr_execAssignHostageToZone_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	class AR6DeploymentZone* Zone;                                            //CPF_Parm
	INT i;                                                                    //0
};
struct UR6TerroristMgr_execAssignHostageTo_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	class AR6TerroristAI* terro;                                              //CPF_Parm
	INT i;                                                                    //0
	class AR6DeploymentZone* Zone;                                            //0
};
struct UR6TerroristMgr_execIsHostageAssigned_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UR6TerroristMgr_execFindHostageIndex_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UR6TerroristMgr_execResetOriginalData_Parms
{
	INT i;                                                                    //0
};
struct UR6TerroristMgr_execInitialization_Parms
{
	class AActor* dummy;                                                      //CPF_Parm
};
struct UR6TerroristMgr_execFindNearestZoneForHostage_Parms
{
	class AR6Terrorist* terro;                                                //CPF_Parm
	class AR6DeploymentZone* ReturnValue;                                     //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6TerroristMgr_execInit_Parms
{
	class AActor* dummy;                                                      //CPF_Parm
};

// *****************************************************************************
// UR6TerroristMgr (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6TerroristMgr : public UR6AbstractTerroristMgr
{
public:
	INT m_iCurrentMax;                                                        //0
	INT m_iCurrentGroupID;                                                    //0
	TArray<class AR6DeploymentZone*> m_aDeploymentZoneWithHostage;            //CPF_NeedCtorLink
	struct FSTHostage m_ArrayHostage[16];                                     //0
	virtual ~UR6TerroristMgr();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6TerroristMgr(class UR6TerroristMgr const &);
	void execFindNearestZoneForHostage(struct FFrame &, void * const);
	void execInit(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6TerroristMgr & operator=(class UR6TerroristMgr const &);
protected:
	UR6TerroristMgr();
private:
	static class UClass PrivateStaticClass();
};

enum ECoverShotDir{
	 COVERDIR_Over=0
	,COVERDIR_Left=1
	,COVERDIR_Right=2
};

// *****************************************************************************
// AR6CoverSpot (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6CoverSpot : public ANavigationPoint
{
public:
	BYTE m_eShotDir;                                                          //CPF_Edit
	virtual ~AR6CoverSpot();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	AR6CoverSpot(class AR6CoverSpot const &);
	AR6CoverSpot();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6CoverSpot & operator=(class AR6CoverSpot const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6StairVolume_eventPawnLeavingVolume_Parms
{
	class APawn* P;                                                           //CPF_Parm
	class AR6Pawn* thisPawn;                                                  //0
	class FVector vDirection;                                                 //0
};
struct AR6StairVolume_eventPawnEnteredVolume_Parms
{
	class APawn* P;                                                           //CPF_Parm
	class AR6Pawn* thisPawn;                                                  //0
};
struct AR6StairVolume_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6StairVolume (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6StairVolume : public APhysicsVolume
{
public:
	BITFIELD m_bCreateIcon : 1;                                               //CPF_Edit
	BITFIELD m_bRestrictedSpaceAtStairLimits : 1;                             //CPF_Edit
	BITFIELD m_bShowLog : 1;                                                  //0
	class AR6StairOrientation* m_pStairOrientation;                           //CPF_Edit
	class FVector m_vOrientationNorm;                                         //0
	virtual ~AR6StairVolume();
	virtual void Spawned();
	virtual void PostScriptDestroyed();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void AddMyMarker(class AActor *);
	virtual void CheckForErrors();
	AR6StairVolume(class AR6StairVolume const &);
	AR6StairVolume();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6StairVolume & operator=(class AR6StairVolume const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6StairOrientation_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6StairOrientation (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6StairOrientation : public AActor
{
public:
	class AR6StairVolume* m_pStairVolume;                                     //CPF_Edit
	virtual ~AR6StairOrientation();
	virtual void PostScriptDestroyed();
	AR6StairOrientation(class AR6StairOrientation const &);
	AR6StairOrientation();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void linkWithStair(class AR6StairVolume *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6StairOrientation & operator=(class AR6StairOrientation const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6DZoneRandomPointNode (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DZoneRandomPointNode : public AActor
{
public:
	BYTE m_eStance;                                                           //CPF_Edit
	INT m_iGroupID;                                                           //CPF_Edit
	BITFIELD m_bHighPriority : 1;                                             //CPF_Edit
	BITFIELD m_bAllowLeave : 1;                                               //CPF_Edit
	class AR6DZoneRandomPoints* m_pZone;                                      //0
	virtual ~AR6DZoneRandomPointNode();
	virtual void PostScriptDestroyed();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void CheckForErrors();
	AR6DZoneRandomPointNode(class AR6DZoneRandomPointNode const &);
	AR6DZoneRandomPointNode();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DZoneRandomPointNode & operator=(class AR6DZoneRandomPointNode const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6DZoneRandomPoints (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DZoneRandomPoints : public AR6DeploymentZone
{
public:
	BITFIELD m_bSelectNodeInEditor : 1;                                       //CPF_Edit
	BITFIELD m_bUseAllowLeave : 1;                                            //CPF_Edit
	BITFIELD m_bInInit : 1;                                                   //0
	TArray<class AR6DZoneRandomPointNode*> m_aNode;                           //CPF_Edit|CPF_NeedCtorLink|CPF_0x04000000|CPF_0x80000000
	TArray<class AR6DZoneRandomPointNode*> m_aTempHighPriorityNode;           //CPF_NeedCtorLink
	TArray<class AR6DZoneRandomPointNode*> m_aTempNode;                       //CPF_NeedCtorLink
	virtual ~AR6DZoneRandomPoints();
	virtual void Spawned();
	virtual void PostScriptDestroyed();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void CheckForErrors();
	virtual INT GetNbOfTerroristToSpawn();
	virtual void FirstInit();
	virtual class FVector FindRandomPointInArea();
	virtual class FVector FindSpawningPoint(class FRotator *, INT *, enum EStance *, INT *);
	virtual INT IsPointInZone(class FVector const &);
	virtual class FVector FindClosestPointTo(class FVector const &);
	AR6DZoneRandomPoints(class AR6DZoneRandomPoints const &);
	AR6DZoneRandomPoints();
	void DeleteANode(INT);
	void DeleteANode(class AR6DZoneRandomPointNode *);
	static void CDECL InternalConstructor(void *);
	void SpawnANewNode(class FVector);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DZoneRandomPoints & operator=(class AR6DZoneRandomPoints const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6DZoneRectangle (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DZoneRectangle : public AR6DeploymentZone
{
public:
	FLOAT m_fX;                                                               //CPF_Edit
	FLOAT m_fY;                                                               //CPF_Edit
	virtual ~AR6DZoneRectangle();
	AR6DZoneRectangle(class AR6DZoneRectangle const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DZoneRectangle & operator=(class AR6DZoneRectangle const &);
protected:
	AR6DZoneRectangle();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6DZonePoint (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DZonePoint : public AR6DeploymentZone
{
public:
	BYTE m_eStance;                                                           //CPF_Edit
	BITFIELD m_bUseReactionZone : 1;                                          //CPF_Edit
	FLOAT m_fReactionZoneX;                                                   //CPF_Edit
	FLOAT m_fReactionZoneY;                                                   //CPF_Edit
	class FVector m_vReactionZoneCenter;                                      //CPF_Edit
	virtual ~AR6DZonePoint();
	virtual void Spawned();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual class FVector FindRandomPointInArea();
	virtual class FVector FindSpawningPoint(class FRotator *, INT *, enum EStance *, INT *);
	virtual INT IsPointInZone(class FVector const &);
	virtual class FVector FindClosestPointTo(class FVector const &);
	AR6DZonePoint(class AR6DZonePoint const &);
	AR6DZonePoint();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DZonePoint & operator=(class AR6DZonePoint const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6DZonePathNode_eventDestroyed_Parms
{
};

// *****************************************************************************
// AR6DZonePathNode (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DZonePathNode : public AActor
{
public:
	INT m_AnimChance;                                                         //CPF_Edit
	BITFIELD m_bWait : 1;                                                     //CPF_Edit
	FLOAT m_fRadius;                                                          //CPF_Edit
	class AR6DZonePath* m_pPath;                                              //0
	class USound* m_SoundToPlay;                                              //CPF_Edit
	class USound* m_SoundToPlayStop;                                          //CPF_Edit
	FName m_AnimToPlay;                                                       //CPF_Edit
	virtual ~AR6DZonePathNode();
	virtual void PostScriptDestroyed();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void CheckForErrors();
	AR6DZonePathNode(class AR6DZonePathNode const &);
	AR6DZonePathNode();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DZonePathNode & operator=(class AR6DZonePathNode const &);
private:
	static class UClass PrivateStaticClass();
};

enum EInformTeam{
	 INFO_EnterPath=0
	,INFO_ReachNode=1
	,INFO_FinishWaiting=2
	,INFO_Engage=3
	,INFO_ExitPath=4
	,INFO_Dead=5
};
struct AR6DZonePath_execInformTerroTeam_Parms
{
	BYTE eInfo;                                                               //CPF_Parm
	class AR6TerroristAI* terroAI;                                            //CPF_Parm
	INT i;                                                                    //0
};
struct AR6DZonePath_execStartWaiting_Parms
{
	class AR6TerroristAI* terroAI;                                            //CPF_Parm
	INT iWaitingTime;                                                         //0
	INT iFacingTime;                                                          //0
	class FRotator rDirection;                                                //0
	class FRotator rRefDir;                                                   //0
	INT i;                                                                    //0
	INT iYawOffset;                                                           //0
};
struct AR6DZonePath_execGoToNextNode_Parms
{
	class AR6TerroristAI* terroAI;                                            //CPF_Parm
	class AR6TerroristAI* leaderAI;                                           //0
	INT i;                                                                    //0
	class FVector vGoal;                                                      //0
};
struct AR6DZonePath_execIsAllTerroWaiting_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6DZonePath_execSetNextNodeForTerro_Parms
{
	class AR6TerroristAI* terro;                                              //CPF_Parm
	INT Index;                                                                //0
	class AR6DZonePathNode* nextNode;                                         //0
};
struct AR6DZonePath_execGetRandomPointToNode_Parms
{
	class AR6DZonePathNode* Node;                                             //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FRotator R;                                                         //0
	INT iDistance;                                                            //0
	class FVector vDestination;                                               //0
};
struct AR6DZonePath_execGetLeader_Parms
{
	class AR6Terrorist* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DZonePath_execIsLeader_Parms
{
	class AR6Terrorist* terro;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6DZonePath_execFindNearestNode_Parms
{
	class AActor* Pawn;                                                       //CPF_Parm
	class AR6DZonePathNode* ReturnValue;                                      //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6DZonePathNode* Best;                                             //0
	class AR6DZonePathNode* r6node;                                           //0
	FLOAT fBestDistSqr;                                                       //0
	FLOAT fDistSqr;                                                           //0
	class FVector vDist;                                                      //0
	INT i;                                                                    //0
};
struct AR6DZonePath_execGetPreviousNode_Parms
{
	class AR6DZonePathNode* Node;                                             //CPF_Parm
	class AR6DZonePathNode* ReturnValue;                                      //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT Index;                                                                //0
};
struct AR6DZonePath_execGetNextNode_Parms
{
	class AR6DZonePathNode* Node;                                             //CPF_Parm
	class AR6DZonePathNode* ReturnValue;                                      //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT Index;                                                                //0
};
struct AR6DZonePath_execGetNodeIndex_Parms
{
	class AR6DZonePathNode* Node;                                             //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};

// *****************************************************************************
// AR6DZonePath (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DZonePath : public AR6DeploymentZone
{
public:
	BITFIELD m_bCycle : 1;                                                    //CPF_Edit
	BITFIELD m_bSelectNodeInEditor : 1;                                       //CPF_Edit
	BITFIELD m_bActAsGroup : 1;                                               //CPF_Edit
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	TArray<class AR6DZonePathNode*> m_aNode;                                  //CPF_Edit|CPF_NeedCtorLink|CPF_0x04000000|CPF_0x80000000
	virtual ~AR6DZonePath();
	virtual void Spawned();
	virtual void PostScriptDestroyed();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual void CheckForErrors();
	virtual class FVector FindRandomPointInArea();
	virtual class FVector FindSpawningPoint(class FRotator *, INT *, enum EStance *, INT *);
	virtual INT IsPointInZone(class FVector const &);
	virtual class FVector FindClosestPointTo(class FVector const &);
	AR6DZonePath(class AR6DZonePath const &);
	AR6DZonePath();
	void DeleteANode(INT);
	void DeleteANode(class AR6DZonePathNode *);
	static void CDECL InternalConstructor(void *);
	void SpawnANewNode(class FVector);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DZonePath & operator=(class AR6DZonePath const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6DZoneCircle (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DZoneCircle : public AR6DeploymentZone
{
public:
	FLOAT m_fRadius;                                                          //CPF_Edit
	virtual ~AR6DZoneCircle();
	AR6DZoneCircle(class AR6DZoneCircle const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6DZoneCircle & operator=(class AR6DZoneCircle const &);
protected:
	AR6DZoneCircle();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6Stairs (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Stairs : public ANavigationPoint
{
public:
	BITFIELD m_bIsTopOfStairs : 1;                                            //CPF_Edit
	virtual ~AR6Stairs();
	AR6Stairs(class AR6Stairs const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Stairs & operator=(class AR6Stairs const &);
protected:
	AR6Stairs();
private:
	static class UClass PrivateStaticClass();
};

enum eRoomLayout{
	 ROOM_OpensCenter=0
	,ROOM_OpensLeft=1
	,ROOM_OpensRight=2
	,ROOM_None=3
};
struct AR6Door_execUnTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AR6Pawn* Pawn;                                                      //0
};
struct AR6Door_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AR6Pawn* Pawn;                                                      //0
	class FRotator rPawnRot;                                                  //0
};
struct AR6Door_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6Door (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Door : public ANavigationPoint
{
public:
	BYTE m_eRoomLayout;                                                       //CPF_Edit
	BITFIELD m_bCloseOnUntouch : 1;                                           //0
	class AR6Door* m_CorrespondingDoor;                                       //CPF_Edit
	class AR6IORotatingDoor* m_RotatingDoor;                                  //CPF_Edit
	class FVector m_vLookDir;                                                 //0
	virtual ~AR6Door();
	virtual void RenderEditorInfo(class FLevelSceneNode *, class FRenderInterface *, class FDynamicActor *);
	virtual class AActor * AssociatedLevelGeometry();
	virtual void CheckForErrors();
	virtual void addReachSpecs(class APawn *, INT);
	virtual INT PrunePaths();
	AR6Door(class AR6Door const &);
	AR6Door();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Door & operator=(class AR6Door const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6EnvironmentNode_execUnTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6EnvironmentNode_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6EnvironmentNode_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6EnvironmentNode (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6EnvironmentNode : public AActor
{
public:
	class FVector m_vLookDir;                                                 //0
	virtual ~AR6EnvironmentNode();
	AR6EnvironmentNode(class AR6EnvironmentNode const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6EnvironmentNode & operator=(class AR6EnvironmentNode const &);
protected:
	AR6EnvironmentNode();
private:
	static class UClass PrivateStaticClass();
};
struct AR6Ladder_eventSuggestMovePreparation_Parms
{
	class APawn* Other;                                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6Ladder_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AR6Pawn* Pawn;                                                      //0
};

// *****************************************************************************
// AR6Ladder (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Ladder : public ALadder
{
public:
	BITFIELD m_bIsTopOfLadder : 1;                                            //CPF_Edit|CPF_Net
	BITFIELD m_bSingleFileFormationOnly : 1;                                  //CPF_Edit
	BITFIELD bShowLog : 1;                                                    //0
	class AR6Ladder* m_pOtherFloor;                                           //0
	virtual ~AR6Ladder();
	AR6Ladder(class AR6Ladder const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6Ladder & operator=(class AR6Ladder const &);
protected:
	AR6Ladder();
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// FThreatInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FThreatInfo
{
public:
	INT m_id;                                                             //0
	INT m_iThreatLevel;                                                   //0
	class APawn* m_pawn;                                                  //0
	class AActor* m_actorExt;                                             //0
	INT m_bornTime;                                                       //0
	class FVector m_originalLocation;                                     //0
	FName m_state;                                                        //0
};

// -----------------------------------------------------------------------------
// FOrderInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FOrderInfo
{
public:
	BITFIELD m_bOrderedByRainbow : 1;                                     //0
	class AR6Pawn* m_pawn1;                                               //0
	BYTE m_eOrder;                                                        //0
	FLOAT m_fTime;                                                        //0
	class AActor* m_actor;                                                //0
};

// -----------------------------------------------------------------------------
// Extracted ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Extracted
{
};

// -----------------------------------------------------------------------------
// GotoExtraction ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GotoExtraction
{
};

// -----------------------------------------------------------------------------
// FPlaySndInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FPlaySndInfo
{
public:
	INT m_iLastTime;                                                      //0
	INT m_iInBetweenTime;                                                 //0
};

// -----------------------------------------------------------------------------
// DbgHostage ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT DbgHostage
{
};

// -----------------------------------------------------------------------------
// GoHstRunForCover ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GoHstRunForCover
{
};

// -----------------------------------------------------------------------------
// GoHstRunTowardRainbow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GoHstRunTowardRainbow
{
};

// -----------------------------------------------------------------------------
// GoHstFreedButSeeEnemy ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GoHstFreedButSeeEnemy
{
};

// -----------------------------------------------------------------------------
// ReactToGrenade ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ReactToGrenade
{
};

// -----------------------------------------------------------------------------
// CivSurrender ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivSurrender
{
};

// -----------------------------------------------------------------------------
// CivRunTowardRainbow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivRunTowardRainbow
{
};

// -----------------------------------------------------------------------------
// CMCivStayHere ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CMCivStayHere
{
};

// -----------------------------------------------------------------------------
// Civilian ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Civilian
{
};

// -----------------------------------------------------------------------------
// CMCivStayKneel ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CMCivStayKneel
{
};

// -----------------------------------------------------------------------------
// CivMovingTo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivMovingTo
{
};

// -----------------------------------------------------------------------------
// CivRunForCover ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivRunForCover
{
};

// -----------------------------------------------------------------------------
// CivScareToDeath ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivScareToDeath
{
};

// -----------------------------------------------------------------------------
// GoCivScareToDeath ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GoCivScareToDeath
{
};

// -----------------------------------------------------------------------------
// CivStayHere ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivStayHere
{
};

// -----------------------------------------------------------------------------
// EscortedByEnemy ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT EscortedByEnemy
{
};

// -----------------------------------------------------------------------------
// CivPatrolPath ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivPatrolPath
{
};

// -----------------------------------------------------------------------------
// WaitForSomeTime ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitForSomeTime
{
};

// -----------------------------------------------------------------------------
// CivGuardPoint ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivGuardPoint
{
};

// -----------------------------------------------------------------------------
// CivPatrolArea ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CivPatrolArea
{
};

// -----------------------------------------------------------------------------
// RunForCover ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT RunForCover
{
};

// -----------------------------------------------------------------------------
// FollowingPawn ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FollowingPawn
{
};

// -----------------------------------------------------------------------------
// FollowingPaceTransition ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FollowingPaceTransition
{
};

// -----------------------------------------------------------------------------
// Freed ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Freed
{
};

// -----------------------------------------------------------------------------
// Guarded_frozen ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Guarded_frozen
{
};

// -----------------------------------------------------------------------------
// Guarded ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Guarded
{
};

// -----------------------------------------------------------------------------
// GoGuarded_frozen ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GoGuarded_frozen
{
};

// -----------------------------------------------------------------------------
// Guarded_foetus ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Guarded_foetus
{
};

// -----------------------------------------------------------------------------
// GoGuarded_Foetus ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GoGuarded_Foetus
{
};

// -----------------------------------------------------------------------------
// Configuration ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Configuration
{
};
struct AR6HostageAI_execIsInCrouchedPosture_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execCanStopMoving_Parms
{
	BITFIELD bCheckIfShouldMove : 1;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6HostageAI* hostageAI;                                            //0
	INT iDistance;                                                            //0
};
struct AR6HostageAI_execDispatchOrder_Parms
{
	INT iOrder;                                                               //CPF_Parm
	class AR6Pawn* orderFrom;                                                 //CPF_Parm
};
struct AR6HostageAI_execOrder_ProcessStayHere_Parms
{
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
};
struct AR6HostageAI_execStopFollowingPawn_Parms
{
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
};
struct AR6HostageAI_execOrder_ProcessFollowMe_Parms
{
	class AR6Pawn* follow;                                                    //CPF_Parm
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
	class AR6Rainbow* rainbowToFollow;                                        //0
};
struct AR6HostageAI_execOrder_ProcessGotoExtraction_Parms
{
	class AActor* aZone;                                                      //CPF_Parm
};
struct AR6HostageAI_execGetRainbowWhoEscortThisPawn_Parms
{
	class AR6Pawn* follow;                                                    //CPF_Parm
	class AR6Rainbow* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execCanConsiderThreat_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	class AActor* aThreat;                                                    //CPF_Parm
	FName considerThreat;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execCanReturnToNormalState_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Rainbow* aR6Rainbow;                                             //0
	class AR6Pawn* P;                                                         //0
	INT numFriend;                                                            //0
	INT numEnemy;                                                             //0
};
struct AR6HostageAI_execGetRandomTurn90_Parms
{
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FRotator rRot;                                                      //0
};
struct AR6HostageAI_execRoll_Parms
{
	INT iMax;                                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iRoll;                                                                //0
};
struct AR6HostageAI_execSetStateFollowingPawn_Parms
{
	class AR6Pawn* runTo;                                                     //CPF_Parm
	BITFIELD bFreed : 1;                                                      //CPF_Parm
	INT iHstSndEvent;                                                         //CPF_Parm
};
struct AR6HostageAI_execSetStateGuarded_Parms
{
	BYTE ePos;                                                                //CPF_Parm
	INT iHstSndEvent;                                                         //CPF_Parm
};
struct AR6HostageAI_execSetPace_Parms
{
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6HostageAI_execSetPawnPosition_Parms
{
	BYTE ePos;                                                                //CPF_Parm
};
struct AR6HostageAI_execSetFreed_Parms
{
	BITFIELD bFreed : 1;                                                      //CPF_Parm
};
struct AR6HostageAI_execPawnDied_Parms
{
};
struct AR6HostageAI_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct AR6HostageAI_execPossess_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	INT i;                                                                    //0
};
struct AR6HostageAI_eventPostBeginPlay_Parms
{
	INT i;                                                                    //0
};
struct AR6HostageAI_execSetStateEscorted_Parms
{
	class AR6Pawn* escort;                                                    //CPF_Parm
	class FVector Destination;                                                //CPF_Parm
	BITFIELD bSurrender : 1;                                                  //CPF_Parm
};
struct AR6HostageAI_execOrder_ProcessSurrender_Parms
{
	class APawn* terro;                                                       //CPF_Parm
	FName stateName;                                                          //0
};
struct AR6HostageAI_eventOpenDoorFailed_Parms
{
};
struct AR6HostageAI_eventCanOpenDoor_Parms
{
	class AR6IORotatingDoor* Door;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execGetThreatGroupName_Parms
{
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execSetThreatState_Parms
{
	FName threatState;                                                        //CPF_Parm
};
struct AR6HostageAI_execResetThreatInfo_Parms
{
	class FString sz;                                                         //CPF_Parm|CPF_NeedCtorLink
};
struct AR6HostageAI_execCivInit_Parms
{
	INT i;                                                                    //0
};
struct AR6HostageAI_execBumpBackUpStateFinished_Parms
{
};
struct AR6HostageAI_execIsBumpBackUpStateFinish_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* aBumpPawn;                                                 //0
};
struct AR6HostageAI_execIsRunForCoverPossible_Parms
{
	class APawn* runAwayOf;                                                   //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class APawn* aPreviousEnemy;                                              //0
	BITFIELD bResult : 1;                                                     //0
};
struct AR6HostageAI_execIsAwayOfGrenade_Parms
{
	class AActor* Grenade;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execSetStateRunForCover_Parms
{
	class APawn* runAwayOfPawn;                                               //CPF_Parm
	FName successState;                                                       //CPF_Parm
	FName failureState;                                                       //CPF_Parm
	class AActor* Grenade;                                                    //CPF_Parm
};
struct AR6HostageAI_execFollowPawnFailed_Parms
{
};
struct AR6HostageAI_execSetMovementPace_Parms
{
	BITFIELD bStartingToMove : 1;                                             //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eOldMovementPace;                                                    //0
	BYTE eNewMovementPace;                                                    //0
	class AR6Pawn* follow;                                                    //0
	BITFIELD bStopMoving : 1;                                                 //0
};
struct AR6HostageAI_execSetStatePaceTransition_Parms
{
	BYTE ePos;                                                                //CPF_Parm
};
struct AR6HostageAI_execIsGuarded_Parms
{
	BITFIELD bNoTimer : 1;                                                    //CPF_Parm
	BITFIELD bMustSeeMe : 1;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* P;                                                         //0
};
struct AR6HostageAI_execAIAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
};
struct AR6HostageAI_execPlaySoundAffectedByGrenade_Parms
{
	BYTE eType;                                                               //CPF_Parm
};
struct AR6HostageAI_execProcessPlaySndInfo_Parms
{
	INT iSndEvent;                                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT iSndIndex;                                                            //0
	BITFIELD bPlay : 1;                                                       //0
};
struct AR6HostageAI_execSetStateExtracted_Parms
{
};
struct AR6HostageAI_execSetStateReactToGrenade_Parms
{
	FName stateToReturn;                                                      //CPF_Parm
};
struct AR6HostageAI_execPlaySoundDamage_Parms
{
	class APawn* instigatedBy;                                                //CPF_Parm
};
struct AR6HostageAI_execCanClimbLadders_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6HostageAI_execCheckNeedToClimbLadder_Parms
{
};
struct AR6HostageAI_execRouteCacheWithOtherLadder_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class AR6Ladder* testLadder;                                              //0
};
struct AR6HostageAI_execOrder_Surrender_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
};
struct AR6HostageAI_eventHearNoise_Parms
{
	FLOAT fLoudness;                                                          //CPF_Parm
	class AActor* NoiseMaker;                                                 //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	BYTE ESoundType;                                                          //CPF_Parm
	class AActor* aGrenade;                                                   //0
};
struct AR6HostageAI_execSeePlayerMgr_Parms
{
};
struct AR6HostageAI_execSeePlayer_Parms
{
	class APawn* P;                                                           //CPF_Parm
	class AR6Pawn* seen;                                                      //0
};
struct AR6HostageAI_execReturnToNormalState_Parms
{
	BITFIELD bNoTimer : 1;                                                    //CPF_Parm
};
struct AR6HostageAI_execOrder_FollowMe_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
};
struct AR6HostageAI_execOrder_canFollowMe_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execOrder_StayHere_Parms
{
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
};
struct AR6HostageAI_execOrder_GotoExtraction_Parms
{
	class AActor* aZone;                                                      //CPF_Parm
};
struct AR6HostageAI_execOrder_Process_Parms
{
	struct FOrderInfo OrderInfo;                                              //0
};
struct AR6HostageAI_execIsInTemporaryState_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageAI_execOrder_Add_Parms
{
	BYTE eOrder;                                                              //CPF_Parm
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BITFIELD bOrderedByRainbow : 1;                                           //CPF_Parm
	class AActor* anActor;                                                    //CPF_Parm
	struct FOrderInfo OrderInfo;                                              //0
};
struct AR6HostageAI_execOrder_Pop_Parms
{
	struct FOrderInfo ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT LastIndex;                                                            //0
	struct FOrderInfo OrderInfo;                                              //0
};
struct AR6HostageAI_execOrder_GetLog_Parms
{
	struct FOrderInfo Info;                                                   //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szOutput;                                                   //CPF_NeedCtorLink
	class FString szOrder;                                                    //CPF_NeedCtorLink
	class FString szPawn;                                                     //CPF_NeedCtorLink
};
struct AR6HostageAI_execProcessThreat_Parms
{
	class AActor* P;                                                          //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	class AR6Pawn* R6Pawn;                                                    //0
	INT iDistanceFromThreat;                                                  //0
	struct FThreatInfo ThreatInfo;                                            //0
	BITFIELD bNewThreat : 1;                                                  //0
	FName stateName;                                                          //0
	FName GroupName;                                                          //0
};
struct AR6HostageAI_execCivGotoStateMovingTo_Parms
{
	BYTE ePace;                                                               //CPF_Parm
	class AActor* aMoveTarget;                                                //CPF_Parm
	class FVector vHitNormal;                                                 //0
};
struct AR6HostageAI_execCivCheckCoverNode_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};

// *****************************************************************************
// AR6HostageAI (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6HostageAI : public AR6AIController
{
public:
	BYTE m_eTransitionPosition;                                               //0
	INT m_iNotGuardedSince;                                                   //0
	INT m_iLastHearNoiseTime;                                                 //0
	INT c_iDistanceMax;                                                       //0
	INT c_iDistanceCatchUp;                                                   //0
	INT c_iDistanceToStartToRun;                                              //0
	INT m_iPlayReaction1;                                                     //0
	INT m_iPlayReaction2;                                                     //0
	INT m_iWaitingTime;                                                       //0
	INT m_iFacingTime;                                                        //0
	INT m_lastUpdatePaceTime;                                                 //0
	INT m_iNbOrder;                                                           //0
	INT c_iCowardModifier;                                                    //0
	INT c_iNormalModifier;                                                    //0
	INT c_iBraveModifier;                                                     //0
	INT c_iWoundedModifier;                                                   //0
	INT c_iGasModifier;                                                       //0
	INT c_iEnemyNotVisibleTime;                                               //0
	INT c_iCautiousLastHearNoiseTime;                                         //0
	INT c_iRunForCoverOfGrenadeMinDist;                                       //0
	INT m_iDbgRoll;                                                           //0
	INT m_iRandomNumber;                                                      //0
	BITFIELD m_bForceToStayHere : 1;                                          //0
	BITFIELD m_bRunningToward : 1;                                            //0
	BITFIELD m_bRunToRainbowSuccess : 1;                                      //0
	BITFIELD m_bStopDoTransition : 1;                                         //0
	BITFIELD m_bNeedToRunToCatchUp : 1;                                       //0
	BITFIELD m_bSlowedPace : 1;                                               //0
	BITFIELD m_bFollowIncreaseDistance : 1;                                   //0
	BITFIELD m_bLatentFnStopped : 1;                                          //0
	BITFIELD m_bDbgIgnoreThreat : 1;                                          //0
	BITFIELD m_bDbgIgnoreRainbow : 1;                                         //0
	BITFIELD m_bDbgRoll : 1;                                                  //0
	BITFIELD m_bool : 1;                                                      //0
	BITFIELD bThreatShowLog : 1;                                              //0
	BITFIELD m_bFirstTimeClarkComment : 1;                                    //0
	FLOAT m_float;                                                            //0
	class AR6Hostage* m_pawn;                                                 //0
	class AR6HostageMgr* m_mgr;                                               //0
	class UR6HostageVoices* m_VoicesManager;                                  //0
	class AR6Pawn* m_pawnToFollow;                                            //0
	class AR6Pawn* m_lastSeenPawn;                                            //0
	class AActor* m_runAwayOfGrenade;                                         //0
	class AR6Terrorist* m_terrorist;                                          //0
	class AR6Pawn* m_escort;                                                  //0
	class AActor* m_pGotoToExtractionZone;                                    //0
	class AR6EngineWeapon* DefaultWeapon;                                     //0
	class APathNode* m_pCoverNode;                                            //0
	FName m_threatGroupName;                                                  //0
	FName m_runForCoverStateToGoOnFailure;                                    //0
	FName m_runForCoverStateToGoOnSuccess;                                    //0
	FName m_reactToGrenadeStateToReturn;                                      //0
	FName m_name;                                                             //0
	class UClass* DefaultWeaponClass;                                         //0
	TArray<class APathNode*> m_pListOfCoverNodes;                             //CPF_NeedCtorLink
	struct FRandomTweenNum m_AITickTime;                                      //0
	struct FThreatInfo m_threatInfo;                                          //0
	class FVector m_vReactionDirection;                                       //0
	struct FOrderInfo m_aOrderInfo[2];                                        //0
	struct FRandomTweenNum m_RunForCoverMinTween;                             //0
	struct FRandomTweenNum m_scareToDeathTween;                               //0
	struct FRandomTweenNum m_stayBlindedTweenTime;                            //0
	class FVector m_vMoveToDest;                                              //0
	class FRotator m_rotator;                                                 //0
	class FVector m_vectorTemp;                                               //0
	struct FPlaySndInfo m_aPlaySndInfo[12];                                   //0
	virtual ~AR6HostageAI();
	AR6HostageAI(class AR6HostageAI const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6HostageAI & operator=(class AR6HostageAI const &);
protected:
	AR6HostageAI();
private:
	static class UClass PrivateStaticClass();
};

enum eTeamState{
	 TS_None=0
	,TS_Waiting=1
	,TS_Holding=2
	,TS_Moving=3
	,TS_Following=4
	,TS_Regrouping=5
	,TS_Engaging=6
	,TS_Sniping=7
	,TS_LockPicking=8
	,TS_OpeningDoor=9
	,TS_ClosingDoor=10
	,TS_Opening=11
	,TS_Closing=12
	,TS_ClearingRoom=13
	,TS_Grenading=14
	,TS_DisarmingBomb=15
	,TS_InteractWithDevice=16
	,TS_SecuringTerrorist=17
	,TS_ClimbingLadder=18
	,TS_WaitingForOrders=19
	,TS_SettingBreach=20
	,TS_Retired=21
};
enum ePlayerRoomEntry{
	 PRE_Center=0
	,PRE_Left=1
	,PRE_Right=2
};
struct AR6RainbowTeam_eventTimer_Parms
{
};
struct AR6RainbowTeam_execEscort_GetPawnToFollow_Parms
{
	class AR6Rainbow* Rainbow;                                                //CPF_Parm
	BITFIELD bRunningTowardMe : 1;                                            //CPF_Parm
	class AR6Rainbow* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Rainbow* lastRainbow;                                            //0
};
struct AR6RainbowTeam_execEscort_ManageList_Parms
{
	INT i;                                                                    //0
	INT iHostage;                                                             //0
	class AR6Rainbow* lastRainbow;                                            //0
	class AR6Hostage* hostage;                                                //0
};
struct AR6RainbowTeam_execFirstPassReset_Parms
{
};
struct AR6RainbowTeam_execResetTeam_Parms
{
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execSetMemberTeamID_Parms
{
	INT iTeamId;                                                              //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execGetTeamColor_Parms
{
	class FColor ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowTeam_execSetTeamColor_Parms
{
	INT iTeamNum;                                                             //CPF_Parm
};
struct AR6RainbowTeam_execUpdateEscortList_Parms
{
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execEscort_UpdateTeamSpeed_Parms
{
	INT i;                                                                    //0
	INT iRainbow;                                                             //0
	class AR6Rainbow* R;                                                      //0
};
struct AR6RainbowTeam_execEscort_GetLastRainbow_Parms
{
	class AR6Rainbow* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execPlayerHasAbandonedTeam_Parms
{
	class AR6Rainbow* tempPawn;                                               //0
	INT iLastMember;                                                          //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execActionNodeCompleted_Parms
{
};
struct AR6RainbowTeam_execActionPointReached_Parms
{
};
struct AR6RainbowTeam_execPreviewNextActionPoint_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowTeam_execGetNextActionPoint_Parms
{
};
struct AR6RainbowTeam_execGetFirstActionPoint_Parms
{
};
struct AR6RainbowTeam_execPlayWaitingGoCode_Parms
{
	BYTE eCode;                                                               //CPF_Parm
	BITFIELD bSnipeUntilGoCode : 1;                                           //CPF_Parm
};
struct AR6RainbowTeam_execTeamNotifyActionPoint_Parms
{
	BYTE eMsg;                                                                //CPF_Parm
	BYTE eCode;                                                               //CPF_Parm
};
struct AR6RainbowTeam_execTeamSnipingOver_Parms
{
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execSnipeUntilGoCode_Parms
{
	INT i;                                                                    //0
	class FVector vLocation;                                                  //0
	class FRotator rRotation;                                                 //0
};
struct AR6RainbowTeam_execReOrganizeTeamForSniping_Parms
{
	class AR6Rainbow* actionMember;                                           //0
	INT i;                                                                    //0
	INT iBestSniper;                                                          //0
	FLOAT fBestRange;                                                         //0
	FLOAT fCurrentRange;                                                      //0
};
struct AR6RainbowTeam_execResetZuluGoCode_Parms
{
};
struct AR6RainbowTeam_execResetTeamGoCode_Parms
{
};
struct AR6RainbowTeam_execSetTeamGoCode_Parms
{
	BYTE eCode;                                                               //CPF_Parm
};
struct AR6RainbowTeam_execBreachDoor_Parms
{
};
struct AR6RainbowTeam_execPlaceBreachCharge_Parms
{
};
struct AR6RainbowTeam_execReOrganizeTeamForBreachDoor_Parms
{
	class AR6Rainbow* actionMember;                                           //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execHasBreachingCharge_Parms
{
	class AR6Rainbow* Rainbow;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iWeaponGroup;                                                         //0
	class AR6EngineWeapon* demolitionsWeapon;                                 //0
};
struct AR6RainbowTeam_execFindRainbowWithBreachingCharge_Parms
{
	class AR6Rainbow* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iMember;                                                              //0
	INT iWeaponGroup;                                                         //0
	class AR6AbstractWeapon* demolitionsWeapon;                               //0
};
struct AR6RainbowTeam_execReOrganizeWoundedMembers_Parms
{
	INT i;                                                                    //0
	BITFIELD bReOrganized : 1;                                                //0
};
struct AR6RainbowTeam_execRestoreTeamOrder_Parms
{
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execResetTeamMemberStates_Parms
{
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execReOrganizeTeam_Parms
{
	INT iNewLeader;                                                           //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execAssignNewTeamLeader_Parms
{
	INT iNewLeader;                                                           //CPF_Parm
};
struct AR6RainbowTeam_execSendMemberToEnd_Parms
{
	INT iMember;                                                              //CPF_Parm
	BITFIELD bReorganizeWounded : 1;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class AR6Rainbow* Rainbow;                                                //0
	class AR6RainbowAI* rainbowAI;                                            //0
};
struct AR6RainbowTeam_execAITeamFollowPlanning_Parms
{
	INT iMember;                                                              //0
};
struct AR6RainbowTeam_execAITeamHoldPosition_Parms
{
	INT iMember;                                                              //0
};
struct AR6RainbowTeam_execCheckTeamEngagingStatus_Parms
{
	class APawn* rainbowToIgnore;                                             //CPF_Parm
	BITFIELD bRainbowAreStillEngaging : 1;                                    //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execRainbowIsEngagingEnemy_Parms
{
};
struct AR6RainbowTeam_execDisEngageEnemy_Parms
{
	class APawn* Rainbow;                                                     //CPF_Parm
	class APawn* Enemy;                                                       //CPF_Parm
};
struct AR6RainbowTeam_execEngageEnemyIfNotAlreadyEngaged_Parms
{
	class AR6Pawn* Rainbow;                                                   //CPF_Parm
	class AR6Pawn* Enemy;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bFound : 1;                                                      //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execRainbowIsEngaging_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execTeamSpottedSurrenderedTerrorist_Parms
{
	class AR6Pawn* terrorist;                                                 //CPF_Parm
};
struct AR6RainbowTeam_execTeamHearNoise_Parms
{
	class AActor* aNoiseMaker;                                                //CPF_Parm
	INT iMember;                                                              //0
};
struct AR6RainbowTeam_execPickMemberClosestTo_Parms
{
	class AActor* aNoiseSource;                                               //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT iMemberClosest;                                                       //0
	INT fDist;                                                                //0
	INT fClosestDist;                                                         //0
};
struct AR6RainbowTeam_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_eventRequestFormationChange_Parms
{
	BYTE eFormation;                                                          //CPF_Parm
};
struct AR6RainbowTeam_eventUpdateTeamFormation_Parms
{
	BYTE eFormation;                                                          //CPF_Parm
	INT i;                                                                    //0
	INT iStart;                                                               //0
};
struct AR6RainbowTeam_execSetFormation_Parms
{
	class AR6RainbowAI* memberAI;                                             //CPF_Parm
};
struct AR6RainbowTeam_execAtLeastOneMemberIsWounded_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execResetNeutralFighterTeam_Parms
{
};
struct AR6RainbowTeam_execTeamMemberDeadInFreeBackup_Parms
{
	class AR6Pawn* DeadPawn;                                                  //CPF_Parm
	INT i;                                                                    //0
	INT iMemberId;                                                            //0
};
struct AR6RainbowTeam_execTeamMemberDead_Parms
{
	class AR6Pawn* DeadPawn;                                                  //CPF_Parm
	INT i;                                                                    //0
	INT iMemberId;                                                            //0
	BITFIELD bReIssueTeamOrder : 1;                                           //0
	BITFIELD bReassignNextMemberToLeadRoomEntry : 1;                          //0
	INT iIdxDeadPawn;                                                         //0
};
struct AR6RainbowTeam_execRainbowAIAreStillClimbingLadder_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execUpdateTeamStatus_Parms
{
	class AR6Pawn* member;                                                    //CPF_Parm
	class AR6PlayerController* _playerController;                             //0
};
struct AR6RainbowTeam_execSwapPlayerControlWithTeamMate_Parms
{
	INT iMember;                                                              //CPF_Parm
	class AR6Rainbow* tempPawn;                                               //0
	class AR6RainbowAI* tempRainbowAI;                                        //0
	class AR6PlayerController* tempPlayerController;                          //0
	INT i;                                                                    //0
	INT iPermanentRequestID;                                                  //0
};
struct AR6RainbowTeam_execAssociatePlayerAndPawn_Parms
{
	class AR6PlayerController* Player;                                        //CPF_Parm
	class AR6Rainbow* Pawn;                                                   //CPF_Parm
};
struct AR6RainbowTeam_execSwitchControllerRepInfo_Parms
{
	class AR6RainbowAI* tempRainbowAI;                                        //CPF_Parm
	class AR6PlayerController* tempPlayerController;                          //CPF_Parm
	class AR6PawnReplicationInfo* aPawnRepInfo;                               //0
};
struct AR6RainbowTeam_execSwitchPlayerControlToNextMember_Parms
{
	class AR6Rainbow* tempPawn;                                               //0
	class AR6RainbowAI* tempRainbowAI;                                        //0
	class AR6PlayerController* tempPlayerController;                          //0
	INT iLastMember;                                                          //0
	INT i;                                                                    //0
	BITFIELD bLeaderIsDead : 1;                                               //0
	BITFIELD bBackupIsClimbing : 1;                                           //0
};
struct AR6RainbowTeam_execSwitchPlayerControlToPreviousMember_Parms
{
	class AR6Rainbow* tempPawn;                                               //0
	class AR6RainbowAI* tempRainbowAI;                                        //0
	class AR6PlayerController* tempPlayerController;                          //0
	INT iLastMember;                                                          //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execResetRainbowControllerStates_Parms
{
	class AR6PlayerController* aPlayerController;                             //CPF_Parm
	INT iMember;                                                              //CPF_Parm
	INT i;                                                                    //0
	BITFIELD bAtLeastOneMemberIsOnLadder : 1;                                 //0
};
struct AR6RainbowTeam_execSetAILeadControllerState_Parms
{
	class AR6Ladder* topLadder;                                               //0
	class AR6Ladder* bottomLadder;                                            //0
};
struct AR6RainbowTeam_execSetPlayerControllerState_Parms
{
	class AR6PlayerController* aPlayerController;                             //CPF_Parm
};
struct AR6RainbowTeam_execResetWeaponReloading_Parms
{
};
struct AR6RainbowTeam_execClientUpdateFirstPersonWpnAndPeeking_Parms
{
	class AR6Rainbow* npc;                                                    //CPF_Parm
	class AR6Rainbow* teamLeader;                                             //CPF_Parm
	INT i;                                                                    //0
	BITFIELD bLoadWorked : 1;                                                 //0
	class AR6AbstractWeapon* LeaderWeapon;                                    //0
	class AR6AbstractWeapon* NPCWeapon;                                       //0
	class UTexture* scopeTexture;                                             //0
	class AR6PlayerController* LocalController;                               //0
};
struct AR6RainbowTeam_execUpdateFirstPersonWeaponMemory_Parms
{
	class AR6Rainbow* npc;                                                    //CPF_Parm
	class AR6Rainbow* teamLeader;                                             //CPF_Parm
	INT i;                                                                    //0
	class AR6AbstractWeapon* LeaderWeapon;                                    //0
	class AR6AbstractWeapon* NPCWeapon;                                       //0
};
struct AR6RainbowTeam_execUpdatePlayerWeapon_Parms
{
	class AR6Rainbow* Rainbow;                                                //CPF_Parm
};
struct AR6RainbowTeam_execGetPlayerDirection_Parms
{
	FLOAT fDirResult;                                                         //0
	class FVector vCrossDir;                                                  //0
	class FVector vPlayerMove;                                                //0
};
struct AR6RainbowTeam_execRainbowHasLeftDoor_Parms
{
	class AR6Pawn* Rainbow;                                                   //CPF_Parm
	INT i;                                                                    //0
	INT iStart;                                                               //0
	class FVector vDist;                                                      //0
	FLOAT fDir;                                                               //0
	class FVector vDir;                                                       //0
};
struct AR6RainbowTeam_execEndRoomEntry_Parms
{
	INT iStart;                                                               //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execHasGoneThroughDoor_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowTeam_execEnteredRoom_Parms
{
	class AR6Pawn* member;                                                    //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execRainbowIsInFrontOfAClosedDoor_Parms
{
	class AR6Pawn* Rainbow;                                                   //CPF_Parm
	class AR6Door* Door;                                                      //CPF_Parm
	INT i;                                                                    //0
	INT iOpensClockwise;                                                      //0
	INT iStart;                                                               //0
};
struct AR6RainbowTeam_execReIssueTeamOrders_Parms
{
};
struct AR6RainbowTeam_execActionCompleted_Parms
{
	BITFIELD bSuccess : 1;                                                    //CPF_Parm
	INT i;                                                                    //0
	INT iMember;                                                              //0
};
struct AR6RainbowTeam_execFindRainbowWithGrenadeType_Parms
{
	BYTE grenadeType;                                                         //CPF_Parm
	BITFIELD bSetGadgetGroup : 1;                                             //CPF_Parm
	class AR6Rainbow* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iMember;                                                              //0
	INT iWeaponGroup;                                                         //0
	class AR6EngineWeapon* grenadeWeapon;                                     //0
	BITFIELD bHasGrenade : 1;                                                 //0
};
struct AR6RainbowTeam_execAssignAction_Parms
{
	class AActor* Target;                                                     //CPF_Parm
	INT iSubAction;                                                           //CPF_Parm
	class AR6Pawn* actionMember;                                              //0
	class AR6Door* closestDoor;                                               //0
	FLOAT fDistA;                                                             //0
	FLOAT fDistB;                                                             //0
	class AR6RainbowAI* actionMemberController;                               //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execSelectMemberWithFrag_Parms
{
	INT iSubAction;                                                           //CPF_Parm
	class AActor* Target;                                                     //CPF_Parm
	class AR6Pawn* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* actionMember;                                              //0
};
struct AR6RainbowTeam_execReOrganizeTeamForGrenade_Parms
{
	BYTE ePAction;                                                            //CPF_Parm
	class AR6Rainbow* actionMember;                                           //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execReorganizeTeamToInteractWithDevice_Parms
{
	INT iTeamAction;                                                          //CPF_Parm
	class AActor* actionObject;                                               //CPF_Parm
	class AR6Rainbow* actionMember;                                           //0
	INT iMember;                                                              //0
	FLOAT fMemberSkill;                                                       //0
	FLOAT fBestSkill;                                                         //0
};
struct AR6RainbowTeam_execMoveTeamToCompleted_Parms
{
	BITFIELD bStatus : 1;                                                     //CPF_Parm
};
struct AR6RainbowTeam_execPlayOrderTeamOnZulu_Parms
{
};
struct AR6RainbowTeam_execMoveTeamTo_Parms
{
	class FVector vLocation;                                                  //CPF_Parm
	INT iSubAction;                                                           //CPF_Parm
	INT i;                                                                    //0
	class AR6Pawn* actionMember;                                              //0
	class AR6RainbowAI* rainbowAI;                                            //0
};
struct AR6RainbowTeam_execInstructTeamToArrestTerrorist_Parms
{
	class AR6Terrorist* terrorist;                                            //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execFriendlyFlashBang_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execGrenadeThreatIsOver_Parms
{
	INT i;                                                                    //0
	BITFIELD bTeamIsClimbingLadder : 1;                                       //0
};
struct AR6RainbowTeam_execGasGrenadeCleared_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execGasGrenadeInProximity_Parms
{
	class AR6Rainbow* spotter;                                                //CPF_Parm
};
struct AR6RainbowTeam_execGrenadeInProximity_Parms
{
	class AR6Rainbow* spotter;                                                //CPF_Parm
	class FVector vGrenadeLocation;                                           //CPF_Parm
	FLOAT fTimeLeft;                                                          //CPF_Parm
	FLOAT fGrenadeDangerRadius;                                               //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execInstructPlayerTeamToFollowLead_Parms
{
	BITFIELD bOtherTeam : 1;                                                  //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execInstructPlayerTeamToHoldPosition_Parms
{
	BITFIELD bOtherTeam : 1;                                                  //CPF_Parm
	INT i;                                                                    //0
	INT iMember;                                                              //0
};
struct AR6RainbowTeam_execPlaySoundTeamStatusReport_Parms
{
};
struct AR6RainbowTeam_execInstructTeamToClimbLadder_Parms
{
	class AR6LadderVolume* LadderVolume;                                      //CPF_Parm
	BITFIELD bPathFinding : 1;                                                //CPF_Parm
	INT iMemberId;                                                            //CPF_Parm
	FLOAT fDistanceToTop;                                                     //0
	FLOAT fDistanceToBottom;                                                  //0
	INT i;                                                                    //0
	INT iMemberLeading;                                                       //0
};
struct AR6RainbowTeam_execMembersAreOnSameEndOfLadder_Parms
{
	class AR6Pawn* p1;                                                        //CPF_Parm
	class AR6Pawn* p2;                                                        //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowTeam_execTeamHasFinishedClimbingLadder_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowTeam_execMemberFinishedClimbingLadder_Parms
{
	class AR6Pawn* member;                                                    //CPF_Parm
	INT i;                                                                    //0
	INT iTotalMember;                                                         //0
	INT iLeader;                                                              //0
};
struct AR6RainbowTeam_execAllMembersAreOnTheSameSideOfTheLadder_Parms
{
	class AR6LadderVolume* Ladder;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bLeaderIsAtTopOfLadder : 1;                                      //0
	INT iLeader;                                                              //0
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execTeamFinishedClimbingLadder_Parms
{
};
struct AR6RainbowTeam_execTeamLeaderIsClimbingLadder_Parms
{
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execSetTeamIsClimbingLadder_Parms
{
	BITFIELD bClimbing : 1;                                                   //CPF_Parm
};
struct AR6RainbowTeam_execPlayGoCode_Parms
{
	BYTE eGo;                                                                 //CPF_Parm
};
struct AR6RainbowTeam_execPlaySniperOrder_Parms
{
};
struct AR6RainbowTeam_execReceivedZuluGoCode_Parms
{
};
struct AR6RainbowTeam_execTeamActionRequestWaitForZuluGoCode_Parms
{
	class AR6CircumstantialActionQuery* actionRequested;                      //CPF_Parm
	INT iMenuChoice;                                                          //CPF_Parm
	INT iSubMenuChoice;                                                       //CPF_Parm
};
struct AR6RainbowTeam_execChooseOpenSound_Parms
{
	class AR6CircumstantialActionQuery* actionRequested;                      //CPF_Parm
};
struct AR6RainbowTeam_execTeamActionRequestFromRoseDesVents_Parms
{
	class AR6CircumstantialActionQuery* actionRequested;                      //CPF_Parm
	INT iMenuChoice;                                                          //CPF_Parm
	INT iSubMenuChoice;                                                       //CPF_Parm
	BITFIELD bOrderOnZulu : 1;                                                //CPF_Parm
	class AR6IORotatingDoor* Door;                                            //0
	class FVector vActorDir;                                                  //0
};
struct AR6RainbowTeam_execTeamActionRequest_Parms
{
	class AR6CircumstantialActionQuery* actionRequested;                      //CPF_Parm
	INT iHostage;                                                             //0
	class FVector vActorDir;                                                  //0
};
struct AR6RainbowTeam_execUpdateLocalActionRequest_Parms
{
	class AR6CircumstantialActionQuery* actionRequested;                      //CPF_Parm
};
struct AR6RainbowTeam_execHaveRainbowWithGrenadeType_Parms
{
	BYTE grenadeType;                                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowTeam_execUpdateTeamGrenadeStatus_Parms
{
};
struct AR6RainbowTeam_execResetGrenadeAction_Parms
{
};
struct AR6RainbowTeam_execLastMemberIsStationary_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowTeam_execResetRainbowTeam_Parms
{
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execCreateTeamMember_Parms
{
	class AR6RainbowStartInfo* RainbowToCreate;                               //CPF_Parm
	class ANavigationPoint* StartingPoint;                                    //CPF_Parm
	BITFIELD bPlayer : 1;                                                     //CPF_Parm
	class AR6PlayerController* RainbowPC;                                     //CPF_Parm
	class AR6RainbowAI* rainbowAI;                                            //0
	class FVector vOriginStart;                                               //0
	class FVector vStart;                                                     //0
	class UClass* rainbowPawnClass;                                           //0
	class UClass* armorClass;                                                 //0
	class AR6Rainbow* Rainbow;                                                //0
	INT iSpawnTry;                                                            //0
	class FRotator rPosOrientation;                                           //0
	class FRotator rStartingPointRot;                                         //0
};
struct AR6RainbowTeam_execCreateAITeam_Parms
{
	class AR6TeamStartInfo* TeamInfo;                                         //CPF_Parm
	class ANavigationPoint* StartingPoint;                                    //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execCreatePlayerTeam_Parms
{
	class AR6TeamStartInfo* TeamInfo;                                         //CPF_Parm
	class ANavigationPoint* StartingPoint;                                    //CPF_Parm
	class APlayerController* aRainbowPC;                                      //CPF_Parm
	INT i;                                                                    //0
};
struct AR6RainbowTeam_execSetVoicesMgr_Parms
{
	class AR6AbstractGameInfo* aGameInfo;                                     //CPF_Parm
	BITFIELD bPlayerTeamStart : 1;                                            //CPF_Parm
	BITFIELD bPlayerInTeam : 1;                                               //CPF_Parm
	INT iIDVoicesMgr;                                                         //CPF_Parm
	BITFIELD bInGhostMode : 1;                                                //CPF_Parm
};
struct AR6RainbowTeam_execSetMultiVoicesMgr_Parms
{
	class AR6AbstractGameInfo* aGameInfo;                                     //CPF_Parm
	INT iTeamNumber;                                                          //CPF_Parm
	INT iMemberCount;                                                         //CPF_Parm
	BITFIELD bCoopGameType : 1;                                               //0
};
struct AR6RainbowTeam_execCreateMPPlayerTeam_Parms
{
	class APlayerController* MyPlayer;                                        //CPF_Parm
	class AR6RainbowStartInfo* Info;                                          //CPF_Parm
	INT iMemberCount;                                                         //CPF_Parm
	class APlayerStart* Start;                                                //CPF_Parm
	INT i;                                                                    //0
	INT iMembersToSpawn;                                                      //0
};
struct AR6RainbowTeam_eventPostNetBeginPlay_Parms
{
};
struct AR6RainbowTeam_eventPostBeginPlay_Parms
{
	class AR6InteractiveObject* IntObject;                                    //0
};
struct AR6RainbowTeam_eventDestroyed_Parms
{
};
struct AR6RainbowTeam_execTeamIsRegroupingOnLead_Parms
{
	BITFIELD bIsRegrouping : 1;                                               //CPF_Parm
	BITFIELD bPreviousTeamIsRegrouping : 1;                                   //0
};
struct AR6RainbowTeam_execTeamIsSeparatedFromLead_Parms
{
	BITFIELD bSeparated : 1;                                                  //CPF_Parm
};
struct AR6RainbowTeam_execSetTeamState_Parms
{
	BYTE eNewState;                                                           //CPF_Parm
};

// *****************************************************************************
// AR6RainbowTeam (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6RainbowTeam : public AActor
{
public:
	BYTE m_bHasGrenade;                                                       //CPF_Net
	BYTE m_eFormation;                                                        //0
	BYTE m_eRequestedFormation;                                               //0
	BYTE m_ePlayerRoomEntry;                                                  //0
	BYTE m_eEntryGrenadeType;                                                 //0
	BYTE m_eMovementMode;                                                     //0
	BYTE m_eMovementSpeed;                                                    //0
	BYTE m_ePlanAction;                                                       //0
	BYTE m_eNextAPAction;                                                     //0
	BYTE m_ePlayerAPAction;                                                   //0
	BYTE m_eTeamState;                                                        //CPF_Net
	BYTE m_eBackupTeamState;                                                  //0
	BYTE m_eGoCode;                                                           //CPF_Net
	BYTE m_eBackupGoCode;                                                     //0
	INT m_iMemberCount;                                                       //CPF_Net
	INT m_iIDVoicesMgr;                                                       //0
	INT m_iFormationDistance;                                                 //0
	INT m_iDiagonalDistance;                                                  //0
	INT m_iTeamHealth[4];                                                     //0
	INT m_iMembersLost;                                                       //CPF_Net
	INT m_iGrenadeThrower;                                                    //0
	INT m_iIntermLeader;                                                      //0
	INT m_iSpawnDistance;                                                     //0
	INT m_iSpawnDiagDist;                                                     //0
	INT m_iSpawnDiagOther;                                                    //0
	INT m_iSubAction;                                                         //0
	INT m_iRainbowTeamName;                                                   //0
	INT m_iTeamAction;                                                        //0
	BITFIELD m_bLeaderIsAPlayer : 1;                                          //0
	BITFIELD m_bPlayerHasFocus : 1;                                           //0
	BITFIELD m_bPlayerInGhostMode : 1;                                        //0
	BITFIELD m_bTeamIsClimbingLadder : 1;                                     //CPF_Net
	BITFIELD m_bTeamIsSeparatedFromLeader : 1;                                //0
	BITFIELD m_bGrenadeInProximity : 1;                                       //0
	BITFIELD m_bGasGrenadeInProximity : 1;                                    //0
	BITFIELD m_bEntryInProgress : 1;                                          //0
	BITFIELD m_bDoorOpensTowardTeam : 1;                                      //0
	BITFIELD m_bDoorOpensClockWise : 1;                                       //0
	BITFIELD m_bRainbowIsInFrontOfDoor : 1;                                   //0
	BITFIELD m_bWoundedHostage : 1;                                           //0
	BITFIELD m_bCAWaitingForZuluGoCode : 1;                                   //0
	BITFIELD m_bPreventUsingTeam : 1;                                         //0
	BITFIELD m_bSniperReady : 1;                                              //0
	BITFIELD m_bSkipAction : 1;                                               //0
	BITFIELD m_bWasSeparatedFromLeader : 1;                                   //0
	BITFIELD m_bAllTeamsHold : 1;                                             //0
	BITFIELD m_bTeamIsHoldingPosition : 1;                                    //0
	BITFIELD m_bSniperHold : 1;                                               //0
	BITFIELD m_bTeamIsRegrouping : 1;                                         //0
	BITFIELD m_bPlayerRequestedTeamReform : 1;                                //0
	BITFIELD m_bPendingSnipeUntilGoCode : 1;                                  //0
	BITFIELD m_bTeamIsEngagingEnemy : 1;                                      //0
	BITFIELD bShowLog : 1;                                                    //0
	BITFIELD bPlanningLog : 1;                                                //0
	BITFIELD m_bFirstTimeInGas : 1;                                           //0
	FLOAT m_fEngagingTimer;                                                   //0
	class AR6Rainbow* m_Team[4];                                              //CPF_Net
	class UR6GameColors* Colors;                                              //0
	class UR6RainbowPlayerVoices* m_PlayerVoicesMgr;                          //0
	class UR6RainbowMemberVoices* m_MemberVoicesMgr;                          //0
	class UR6RainbowOtherTeamVoices* m_OtherTeamVoicesMgr;                    //0
	class UR6MultiCommonVoices* m_MultiCommonVoicesMgr;                       //0
	class UR6MultiCoopVoices* m_MultiCoopPlayerVoicesMgr;                     //0
	class UR6MultiCoopVoices* m_MultiCoopMemberVoicesMgr;                     //0
	class UR6PreRecordedMsgVoices* m_PreRecMsgVoicesMgr;                      //0
	class AR6Rainbow* m_TeamLeader;                                           //0
	class UR6AbstractPlanningInfo* m_TeamPlanning;                            //0
	class AR6Pawn* m_PawnControllingDoor;                                     //0
	class AR6Ladder* m_TeamLadder;                                            //0
	class AR6Door* m_Door;                                                    //0
	class AR6CircumstantialActionQuery* m_actionRequested;                    //0
	class AActor* m_PlanActionPoint;                                          //0
	class AR6IORotatingDoor* m_BreachingDoor;                                 //0
	class AActor* m_LastActionPoint;                                          //0
	class AR6Pawn* m_SurrenderedTerrorist;                                    //0
	class AR6Pawn* m_HostageToRescue;                                         //0
	class AActor* m_PlayerLastActionPoint;                                    //0
	TArray<class AR6InteractiveObject*> m_InteractiveObjectList;              //CPF_NeedCtorLink
	class FColor m_TeamColour;                                                //CPF_Net
	class FRotator m_rTeamDirection;                                          //0
	class FVector m_vActionLocation;                                          //0
	class FVector m_vPlanActionLocation;                                      //0
	class FRotator m_rSnipingDir;                                             //0
	class FVector m_vPreviousPosition;                                        //0
	class FVector m_vNoiseSource;                                             //0
	virtual ~AR6RainbowTeam();
	AR6RainbowTeam(class AR6RainbowTeam const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventRequestFormationChange(BYTE);
	void eventUpdateTeamFormation(BYTE);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6RainbowTeam & operator=(class AR6RainbowTeam const &);
protected:
	AR6RainbowTeam();
private:
	static class UClass PrivateStaticClass();
};

enum EEngageReaction{
	 EREACT_Random=0
	,EREACT_AimedFire=1
	,EREACT_SprayFire=2
	,EREACT_RunAway=3
	,EREACT_Surrender=4
};
enum EReactionStatus{
	 REACTION_HearAndSeeAll=0
	,REACTION_SeeHostage=1
	,REACTION_HearBullet=2
	,REACTION_SeeRainbow=3
	,REACTION_Grenade=4
	,REACTION_HearAndSeeNothing=5
};
enum EEventState{
	 EVSTATE_DefaultState=0
	,EVSTATE_RunAway=1
	,EVSTATE_Attack=2
	,EVSTATE_FindHostage=3
	,EVSTATE_AttackHostage=4
};
enum EAttackMode{
	 ATTACK_NotEngaged=0
	,ATTACK_AimedFire=1
	,ATTACK_SprayFire=2
	,ATTACK_SprayFireNoStop=3
	,ATTACK_SprayFireMove=4
};
enum EFollowMode{
	 FMODE_Hostage=0
	,FMODE_Path=1
};

// -----------------------------------------------------------------------------
// HuntRainbow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT HuntRainbow
{
};

// -----------------------------------------------------------------------------
// PatrolPath ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PatrolPath
{
};

// -----------------------------------------------------------------------------
// PatrolArea ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PatrolArea
{
};

// -----------------------------------------------------------------------------
// FollowPawn ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FollowPawn
{
};

// -----------------------------------------------------------------------------
// FindHostage ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FindHostage
{
};

// -----------------------------------------------------------------------------
// Sniping ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Sniping
{
};

// -----------------------------------------------------------------------------
// GuardPoint ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT GuardPoint
{
};

// -----------------------------------------------------------------------------
// AttackHostage ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT AttackHostage
{
};

// -----------------------------------------------------------------------------
// Attack ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Attack
{
};

// -----------------------------------------------------------------------------
// WaitForEnemy ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitForEnemy
{
};

// -----------------------------------------------------------------------------
// RunAway ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT RunAway
{
};

// -----------------------------------------------------------------------------
// Surrender ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Surrender
{
};

// -----------------------------------------------------------------------------
// SeeADead ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT SeeADead
{
};

// -----------------------------------------------------------------------------
// EngageBySound ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT EngageBySound
{
};

// -----------------------------------------------------------------------------
// EngageByThreat ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT EngageByThreat
{
};

// -----------------------------------------------------------------------------
// MovingTo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT MovingTo
{
};

// -----------------------------------------------------------------------------
// NoThreat ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT NoThreat
{
};

// -----------------------------------------------------------------------------
// ThrowingGrenade ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ThrowingGrenade
{
};

// -----------------------------------------------------------------------------
// PrecombatAction ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PrecombatAction
{
};

// -----------------------------------------------------------------------------
// LostSight ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT LostSight
{
};

// -----------------------------------------------------------------------------
// MovingToAttack ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT MovingToAttack
{
};

// -----------------------------------------------------------------------------
// TransientStateCode ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TransientStateCode
{
};

// -----------------------------------------------------------------------------
// test ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT test
{
};
struct AR6TerroristAI_eventSeePlayer_Parms
{
	class APawn* seen;                                                        //CPF_Parm
	class AR6Pawn* r6seen;                                                    //0
	class AR6Hostage* hostage;                                                //0
	class AR6HostageAI* hostageAI;                                            //0
};
struct AR6TerroristAI_execGetKillingHostageChance_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iChance;                                                              //0
};
struct AR6TerroristAI_execGotoStateSprayFire_Parms
{
};
struct AR6TerroristAI_execGotoStateAttackHostage_Parms
{
	class AR6Pawn* hostage;                                                   //CPF_Parm
};
struct AR6TerroristAI_execGotoStateAimedFire_Parms
{
};
struct AR6TerroristAI_eventGotoPointToAttack_Parms
{
	class FVector vDestination;                                               //CPF_Parm
	class AActor* PTarget;                                                    //CPF_Parm
};
struct AR6TerroristAI_eventGotoPointAndSearch_Parms
{
	class FVector vDestination;                                               //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
	BITFIELD bCallBackup : 1;                                                 //CPF_Parm
	FLOAT fSearchTime;                                                        //CPF_Parm
	BYTE eNewDefCon;                                                          //CPF_Parm
};
struct AR6TerroristAI_execSecureTerrorist_Parms
{
	class AR6Pawn* pOther;                                                    //CPF_Parm
};
struct AR6TerroristAI_execAIAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
};
struct AR6TerroristAI_execPlaySoundAffectedByGrenade_Parms
{
	BYTE eType;                                                               //CPF_Parm
};
struct AR6TerroristAI_execGotoStateEngageBySound_Parms
{
	class FVector vInvestigateDestination;                                    //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
	FLOAT fSearchTime;                                                        //CPF_Parm
};
struct AR6TerroristAI_eventGotoStateEngageByThreat_Parms
{
	class FVector vThreathLocation;                                           //CPF_Parm
};
struct AR6TerroristAI_execGotoStateMovingTo_Parms
{
	class FString sDebugString;                                               //CPF_Parm|CPF_NeedCtorLink
	BYTE ePace;                                                               //CPF_Parm
	BITFIELD bCanFail : 1;                                                    //CPF_Parm
	class AActor* aMoveTarget;                                                //CPF_Parm
	class FVector vDestination;                                               //CPF_Parm
	FName stateAfter;                                                         //CPF_Parm
	FName labelAfter;                                                         //CPF_Parm
	BITFIELD bDontCheckLeave : 1;                                             //CPF_Parm
	BITFIELD bPreciseMove : 1;                                                //CPF_Parm
	class FVector vHitNormal;                                                 //0
};
struct AR6TerroristAI_execGotoStateNoThreat_Parms
{
};
struct AR6TerroristAI_execGotoStateThrowingGrenade_Parms
{
	FName nNextState;                                                         //CPF_Parm
	FName nNextLabel;                                                         //CPF_Parm
};
struct AR6TerroristAI_execDispatchOrder_Parms
{
	INT iOrder;                                                               //CPF_Parm
	class AR6Pawn* pSource;                                                   //CPF_Parm
};
struct AR6TerroristAI_execAIPlayCallBackup_Parms
{
	class AActor* pEnemy;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iShootingChance;                                                      //0
	INT iAnimID;                                                              //0
};
struct AR6TerroristAI_execPawnDied_Parms
{
};
struct AR6TerroristAI_execPlayAttackVoices_Parms
{
	INT iAngle;                                                               //0
};
struct AR6TerroristAI_execCheckForInteraction_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AActor* aGoal;                                                      //0
};
struct AR6TerroristAI_execGetEngageReaction_Parms
{
	class APawn* pEnemy;                                                      //CPF_Parm
	INT iNbTerro;                                                             //CPF_Parm
	INT iNbRainbow;                                                           //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bOutnumbered : 1;                                                //0
};
struct AR6TerroristAI_execEngageBySight_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6TerroristAI_execGotoStateLostSight_Parms
{
	class FVector vLastSeen;                                                  //CPF_Parm
};
struct AR6TerroristAI_execGotoSeeADead_Parms
{
	class FVector vDeadLocation;                                              //CPF_Parm
};
struct AR6TerroristAI_execReactToGrenade_Parms
{
	class FVector vGrenadeLocation;                                           //CPF_Parm
	class FVector vDestination;                                               //0
	FLOAT fDistance;                                                          //0
	FLOAT fTemp;                                                              //0
	INT i;                                                                    //0
	class ANavigationPoint* aDest;                                            //0
};
struct AR6TerroristAI_execSetLowestSnipingStance_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vStart;                                                     //0
	class FVector vTarget;                                                    //0
};
struct AR6TerroristAI_execGetMaxCoverDistance_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execAIReloadWeapon_Parms
{
};
struct AR6TerroristAI_execStopFiring_Parms
{
};
struct AR6TerroristAI_execStartFiring_Parms
{
};
struct AR6TerroristAI_execIsMyHostage_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bResult : 1;                                                     //0
	class AR6DZonePoint* zonePoint;                                           //0
	class AActor* HitActor;                                                   //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
};
struct AR6TerroristAI_execIsAssigned_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execIsAnHostage_Parms
{
	class AR6Pawn* Other;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execIsAnEnemy_Parms
{
	class AR6Pawn* Other;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execSetGunDirection_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	class FRotator rDirection;                                                //0
	class FVector vDirection;                                                 //0
	class FCoords cTarget;                                                    //0
	class FVector vTarget;                                                    //0
};
struct AR6TerroristAI_execGotoBumpBackUpState_Parms
{
	FName returnState;                                                        //CPF_Parm
};
struct AR6TerroristAI_eventEnemyNotVisible_Parms
{
	class FVector vDir;                                                       //0
	class FVector vTest;                                                      //0
};
struct AR6TerroristAI_execUseRandomHostage_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execReconThreatCheck_Parms
{
	class AActor* aThreat;                                                    //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	class AR6Pawn* aPawn;                                                     //0
};
struct AR6TerroristAI_execSetEnemy_Parms
{
	class APawn* newEnemy;                                                    //CPF_Parm
};
struct AR6TerroristAI_execSetActionSpot_Parms
{
	class AR6ActionSpot* pNewSpot;                                            //CPF_Parm
};
struct AR6TerroristAI_execChangeDefCon_Parms
{
	BYTE eNewDefCon;                                                          //CPF_Parm
};
struct AR6TerroristAI_execSetReactionStatus_Parms
{
	BYTE eNewStatus;                                                          //CPF_Parm
	BYTE eState;                                                              //CPF_Parm
};
struct AR6TerroristAI_execPlaySoundDamage_Parms
{
	class APawn* instigatedBy;                                                //CPF_Parm
};
struct AR6TerroristAI_execR6DamageAttitudeTo_Parms
{
	class APawn* instigatedBy;                                                //CPF_Parm
	BYTE eKillFromTable;                                                      //CPF_Parm
	BYTE eStunFromTable;                                                      //CPF_Parm
	class FVector vBulletMomentum;                                            //CPF_Parm
};
struct AR6TerroristAI_execCanSafelyChangeState_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execCanClimbLadders_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD bResult : 1;                                                     //0
};
struct AR6TerroristAI_execLogTerroState_Parms
{
	class AR6PlayerController* C;                                             //0
};
struct AR6TerroristAI_eventPostBeginPlay_Parms
{
};
struct AR6TerroristAI_execIsAttackSpotStillValid_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execCallVisibleTerrorist_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execHaveAClearShot_Parms
{
	class FVector vStart;                                                     //CPF_Parm
	class APawn* PTarget;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execFindBetterShotLocation_Parms
{
	class APawn* PTarget;                                                     //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execMakeBackupList_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execCallBackupForInvestigation_Parms
{
	class FVector vDestination;                                               //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6TerroristAI_execCallBackupForAttack_Parms
{
	class FVector vDestination;                                               //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6TerroristAI_execGetNextRandomNode_Parms
{
	class ANavigationPoint* ReturnValue;                                      //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execPerformAction_StopInteraction_Parms
{
};
struct AR6TerroristAI_execCanInteractWithObjects_Parms
{
	class AR6InteractiveObject* o;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TerroristAI_execWaitAtNode_Parms
{
	FLOAT fWaitingTime;                                                       //CPF_Parm
	FLOAT fFacingTime;                                                        //CPF_Parm
	class FRotator rOrientation;                                              //CPF_Parm
};
struct AR6TerroristAI_execFollowLeader_Parms
{
	class AR6Terrorist* Leader;                                               //CPF_Parm
	class FVector VOffset;                                                    //CPF_Parm
};
struct AR6TerroristAI_execGotoNode_Parms
{
	class FVector VPosition;                                                  //CPF_Parm
};
struct AR6TerroristAI_execFinishedWaiting_Parms
{
};
struct AR6TerroristAI_execReachedTheNode_Parms
{
};
struct AR6TerroristAI_execChooseRandomDirection_Parms
{
	INT iLookBackChance;                                                      //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT ITemp;                                                                //0
};
struct AR6TerroristAI_execIsGoingBack_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT ITemp;                                                                //0
};
struct AR6TerroristAI_execGetFacingTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT fTemp;                                                                //0
};
struct AR6TerroristAI_execGetWaitingTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fTemp;                                                              //0
};
struct AR6TerroristAI_execGotoStateFollowPawn_Parms
{
	class AR6Pawn* followedpawn;                                              //CPF_Parm
	BYTE eMode;                                                               //CPF_Parm
	FLOAT fDist;                                                              //CPF_Parm
	INT iYaw;                                                                 //CPF_Parm
};
struct AR6TerroristAI_execGotoStateFindHostage_Parms
{
	class AR6Hostage* hostage;                                                //CPF_Parm
};
struct AR6TerroristAI_execEscortIsOver_Parms
{
	class AR6HostageAI* hostageAI;                                            //CPF_Parm
	BITFIELD bSuccess : 1;                                                    //CPF_Parm
};
struct AR6TerroristAI_execHostageSurrender_Parms
{
	class AR6HostageAI* hostageAI;                                            //CPF_Parm
	class FVector vDestination;                                               //0
};
struct AR6TerroristAI_eventHearNoise_Parms
{
	FLOAT Loudness;                                                           //CPF_Parm
	class AActor* NoiseMaker;                                                 //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	BYTE ESoundType;                                                          //CPF_Parm
	class AR6Hostage* hostage;                                                //0
	class AR6Pawn* pPawn;                                                     //0
};
struct AR6TerroristAI_execAssignNearHostage_Parms
{
	class AR6Hostage* hostage;                                                //0
};

// *****************************************************************************
// AR6TerroristAI (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TerroristAI : public AR6AIController
{
public:
	BYTE m_eEngageReaction;                                                   //0
	BYTE m_eReactionStatus;                                                   //0
	BYTE m_eStateForEvent;                                                    //0
	BYTE m_eAttackMode;                                                       //0
	BYTE m_eFollowMode;                                                       //0
	BYTE m_wBadMoveCount;                                                     //0
	INT m_iCurrentGroupID;                                                    //0
	INT m_iTerroristInGroup;                                                  //0
	INT m_iRainbowInCombat;                                                   //0
	INT m_iChanceToDetectShooter;                                             //0
	INT m_iRandomNumber;                                                      //0
	INT m_iStateVariable;                                                     //0
	INT m_iFollowYaw;                                                         //0
	BITFIELD m_bHearInvestigate : 1;                                          //0
	BITFIELD m_bSeeHostage : 1;                                               //0
	BITFIELD m_bHearThreat : 1;                                               //0
	BITFIELD m_bSeeRainbow : 1;                                               //0
	BITFIELD m_bHearGrenade : 1;                                              //0
	BITFIELD m_bPreciseMove : 1;                                              //0
	BITFIELD m_bCanFailMovingTo : 1;                                          //0
	BITFIELD m_bFireShort : 1;                                                //0
	BITFIELD m_bInPathMode : 1;                                               //0
	BITFIELD m_bWaiting : 1;                                                  //0
	BITFIELD m_bAlreadyHeardSound : 1;                                        //0
	BITFIELD m_bHeardGrenade : 1;                                             //0
	BITFIELD m_bCalledForBackup : 1;                                          //0
	FLOAT m_fWaitingTime;                                                     //0
	FLOAT m_fFacingTime;                                                      //0
	FLOAT m_fSearchTime;                                                      //0
	FLOAT m_fPawnDistance;                                                    //0
	FLOAT m_fFollowDist;                                                      //0
	FLOAT m_fLastBumpedTime;                                                  //0
	class AR6TerroristAI* m_TerroristLeader;                                  //0
	class AR6Terrorist* m_pawn;                                               //0
	class UR6TerroristMgr* m_Manager;                                         //0
	class UR6TerroristVoices* m_VoicesManager;                                //0
	class AR6ActionSpot* m_pActionSpot;                                       //0
	class ANavigationPoint* m_aLastNode[10];                                  //0
	class AR6Pawn* m_huntedPawn;                                              //0
	class AR6Hostage* m_Hostage;                                              //0
	class AR6HostageAI* m_HostageAI;                                          //0
	class AR6DeploymentZone* m_ZoneToEscort;                                  //0
	class AR6Pawn* m_pawnToFollow;                                            //0
	class AActor* m_aMovingToDestination;                                     //0
	class AR6Pawn* m_LastBumped;                                              //0
	class AR6DZonePath* m_path;                                               //0
	class AR6DZonePathNode* m_currentNode;                                    //0
	class AR6InteractiveObject* m_TriggeredIO;                                //0
	FName m_stateAfterMovingTo;                                               //0
	FName m_labelAfterMovingTo;                                               //0
	FName m_PatrolCurrentLabel;                                               //0
	TArray<class AR6TerroristAI*> m_listAvailableBackup;                      //CPF_NeedCtorLink
	class FVector m_vThreatLocation;                                          //0
	class FVector m_vHostageReactionDirection;                                //0
	class FVector m_vMovingDestination;                                       //0
	class FRotator m_rStandRotation;                                          //0
	class FVector m_vSpawningPosition;                                        //0
	class FRotator m_rSpawningRotation;                                       //0
	class FString m_sDebugString;                                             //CPF_NeedCtorLink
	virtual ~AR6TerroristAI();
	virtual INT CanHear(class FVector, FLOAT, class AActor *, enum ENoiseType, enum EPawnType);
	AR6TerroristAI(class AR6TerroristAI const &);
	AR6TerroristAI();
	INT HaveAClearShot(class FVector, class APawn *);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventGotoPointAndSearch(class FVector, BYTE, DWORD, FLOAT, BYTE);
	void eventGotoPointToAttack(class FVector, class AActor *);
	void eventGotoStateEngageByThreat(class FVector);
	void execCallBackupForAttack(struct FFrame &, void * const);
	void execCallBackupForInvestigation(struct FFrame &, void * const);
	void execCallVisibleTerrorist(struct FFrame &, void * const);
	void execFindBetterShotLocation(struct FFrame &, void * const);
	void execGetNextRandomNode(struct FFrame &, void * const);
	void execHaveAClearShot(struct FFrame &, void * const);
	void execIsAttackSpotStillValid(struct FFrame &, void * const);
	void execMakeBackupList(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6TerroristAI & operator=(class AR6TerroristAI const &);
private:
	static class UClass PrivateStaticClass();
};

enum eFormation{
	 FORM_SingleFile=0
	,FORM_SingleFileWallBothSides=1
	,FORM_SingleFileWallRight=2
	,FORM_SingleFileWallLeft=3
	,FORM_SingleFileNoWalls=4
	,FORM_OrientedSingleFile=5
	,FORM_Diamond=6
};
enum ePawnOrientation{
	 PO_Front=0
	,PO_FrontRight=1
	,PO_Right=2
	,PO_Left=3
	,PO_FrontLeft=4
	,PO_Back=5
	,PO_PeekLeft=6
	,PO_PeekRight=7
};
enum eCoverDirection{
	 COVER_Left=0
	,COVER_Center=1
	,COVER_Right=2
	,COVER_None=3
};

// -----------------------------------------------------------------------------
// WatchPlayer ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WatchPlayer
{
};

// -----------------------------------------------------------------------------
// TestBoneRotation ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TestBoneRotation
{
};

// -----------------------------------------------------------------------------
// WaitForGameToStart ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitForGameToStart
{
};

// -----------------------------------------------------------------------------
// FollowLeader ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FollowLeader
{
};

// -----------------------------------------------------------------------------
// TeamClimbLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TeamClimbLadder
{
};

// -----------------------------------------------------------------------------
// TeamClimbEndNoLeader ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TeamClimbEndNoLeader
{
};

// -----------------------------------------------------------------------------
// TeamClimbStartNoLeader ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TeamClimbStartNoLeader
{
};

// -----------------------------------------------------------------------------
// PauseSniping ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PauseSniping
{
};

// -----------------------------------------------------------------------------
// SnipeUntilGoCode ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT SnipeUntilGoCode
{
};

// -----------------------------------------------------------------------------
// LeadRoomEntry ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT LeadRoomEntry
{
};

// -----------------------------------------------------------------------------
// DetonateBreachingCharge ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT DetonateBreachingCharge
{
};

// -----------------------------------------------------------------------------
// PlaceBreachingCharge ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlaceBreachingCharge
{
};

// -----------------------------------------------------------------------------
// Patrol ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Patrol
{
};

// -----------------------------------------------------------------------------
// WaitForTeam ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitForTeam
{
};

// -----------------------------------------------------------------------------
// TeamMoveTo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TeamMoveTo
{
};

// -----------------------------------------------------------------------------
// TeamSecureTerrorist ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TeamSecureTerrorist
{
};

// -----------------------------------------------------------------------------
// HoldPosition ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT HoldPosition
{
};

// -----------------------------------------------------------------------------
// RoomEntry ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT RoomEntry
{
};

// -----------------------------------------------------------------------------
// FindPathToTarget ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FindPathToTarget
{
};

// -----------------------------------------------------------------------------
// PerformAction ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PerformAction
{
};

// -----------------------------------------------------------------------------
// LockPickDoor ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT LockPickDoor
{
};

// -----------------------------------------------------------------------------
// WaitForPaceMember ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitForPaceMember
{
};

// -----------------------------------------------------------------------------
// RunAwayFromGrenade ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT RunAwayFromGrenade
{
};
struct AR6RainbowAI_execReorganizeTeamAsNeeded_Parms
{
};
struct AR6RainbowAI_execSetRainbowOrientation_Parms
{
};
struct AR6RainbowAI_execGetPace_Parms
{
	BITFIELD bRun : 1;                                                        //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execRainbowReloadWeapon_Parms
{
};
struct AR6RainbowAI_execNeedToReload_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fCutOff;                                                            //0
};
struct AR6RainbowAI_execResetNoiseFocus_Parms
{
};
struct AR6RainbowAI_execSetNoiseFocus_Parms
{
	class FVector vSource;                                                    //CPF_Parm
};
struct AR6RainbowAI_execIsMoving_Parms
{
	class APawn* P;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execBumpBackUpStateFinished_Parms
{
};
struct AR6RainbowAI_execIsBumpBackUpStateFinish_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Pawn* aBumpPawn;                                                 //0
};
struct AR6RainbowAI_execGetFormationDistance_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execPawnIsOnTheSameEndOfLadderAsMember_Parms
{
	class AR6Rainbow* aRainbow;                                               //CPF_Parm
	class AR6LadderVolume* LadderVolume;                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bPaceMemberIsAtTopOfLadder : 1;                                  //0
};
struct AR6RainbowAI_execCheckNeedToClimbLadder_Parms
{
};
struct AR6RainbowAI_execSniperChangeToSecondaryWeapon_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_eventAttackTimer_Parms
{
};
struct AR6RainbowAI_execAimingAt_Parms
{
	class APawn* Enemy;                                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vDir;                                                       //0
};
struct AR6RainbowAI_eventEnemyNotVisible_Parms
{
};
struct AR6RainbowAI_eventHearNoise_Parms
{
	FLOAT Loudness;                                                           //CPF_Parm
	class AActor* aNoiseMaker;                                                //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	BYTE ESoundType;                                                          //CPF_Parm
};
struct AR6RainbowAI_eventSeePlayer_Parms
{
	class APawn* seen;                                                        //CPF_Parm
	class AR6Pawn* aPawn;                                                     //0
};
struct AR6RainbowAI_execPlayVoiceTerroristSpotted_Parms
{
	class AR6Terrorist* aTerro;                                               //CPF_Parm
};
struct AR6RainbowAI_execSniperChangeToPrimaryWeapon_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execEnsureRainbowIsArmed_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execVerifyWeaponInventory_Parms
{
	INT iWeapon;                                                              //0
};
struct AR6RainbowAI_execGetNextTeamActionState_Parms
{
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execDispatchOrder_Parms
{
	INT iOrder;                                                               //CPF_Parm
	class AR6RainbowTeam* teamManager;                                        //CPF_Parm
};
struct AR6RainbowAI_execForceCurrentDoor_Parms
{
	class AR6Door* aDoor;                                                     //CPF_Parm
};
struct AR6RainbowAI_execGotoStateLeadRoomEntry_Parms
{
};
struct AR6RainbowAI_execDetonateBreach_Parms
{
};
struct AR6RainbowAI_execTargetIsLadderToClimb_Parms
{
	class AR6Ladder* Target;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execConfirmLadderActionPointWasReached_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
};
struct AR6RainbowAI_execSetGrenadeParameters_Parms
{
	BITFIELD bPeeking : 1;                                                    //CPF_Parm
	BITFIELD bThrowOverhand : 1;                                              //CPF_Parm
};
struct AR6RainbowAI_execNextActionPointIsThroughDoor_Parms
{
	class AActor* nextActionPoint;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vDir;                                                       //0
	FLOAT fResult;                                                            //0
};
struct AR6RainbowAI_execGetTeamPace_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE ePace;                                                               //0
};
struct AR6RainbowAI_execResetTeamMoveTo_Parms
{
	INT iWeapon;                                                              //0
};
struct AR6RainbowAI_execClearThrowIsAvailable_Parms
{
	class FVector vTarget;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AActor* HitActor;                                                   //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
};
struct AR6RainbowAI_execCanThrowGrenade_Parms
{
	class FVector vPawnLocation;                                              //CPF_Parm
	BITFIELD bTraceActors : 1;                                                //CPF_Parm
	BITFIELD bCheckTooClose : 1;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vDir;                                                       //0
	class FVector vTargetLoc;                                                 //0
	FLOAT fDist;                                                              //0
	class AActor* HitActor;                                                   //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	INT iTraceFlags;                                                          //0
};
struct AR6RainbowAI_execTooCloseToThrowGrenade_Parms
{
	class FVector vPawnLocation;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6EngineWeapon* weapon;                                            //0
	FLOAT fKillRadius;                                                        //0
	FLOAT fExplosionRadius;                                                   //0
};
struct AR6RainbowAI_execSwitchWeapon_Parms
{
	INT f;                                                                    //CPF_Parm
	class AR6AbstractWeapon* NewWeapon;                                       //0
};
struct AR6RainbowAI_execReInitEntryPositions_Parms
{
};
struct AR6RainbowAI_execFindPathToTargetLocation_Parms
{
	class FVector vTarget;                                                    //CPF_Parm
	class AActor* aTarget;                                                    //CPF_Parm
};
struct AR6RainbowAI_execCanThrowGrenadeIntoRoom_Parms
{
	class AR6Door* aDoor;                                                     //CPF_Parm
	class FVector vTestTarget;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vTarget;                                                    //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class AActor* HitActor;                                                   //0
};
struct AR6RainbowAI_execRainbowCannotCompleteOrders_Parms
{
};
struct AR6RainbowAI_execGotoLockPickState_Parms
{
	class AR6IORotatingDoor* Door;                                            //CPF_Parm
};
struct AR6RainbowAI_execSetFocusToDoorKnob_Parms
{
	class AR6IORotatingDoor* aDoor;                                           //CPF_Parm
};
struct AR6RainbowAI_eventStopAttack_Parms
{
};
struct AR6RainbowAI_execResetGadgetGroup_Parms
{
};
struct AR6RainbowAI_execOnRightSideOfDoor_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vDir;                                                       //0
	class FVector vResult;                                                    //0
};
struct AR6RainbowAI_execGetLeadershipReactionTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fDelay;                                                             //0
};
struct AR6RainbowAI_execPostEntryRoomIsAcceptablyLarge_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execPreEntryRoomIsAcceptablyLarge_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execStopFiring_Parms
{
};
struct AR6RainbowAI_execStartFiring_Parms
{
};
struct AR6RainbowAI_execEndAttack_Parms
{
};
struct AR6RainbowAI_execSetGunDirection_Parms
{
	class AActor* aTarget;                                                    //CPF_Parm
	class FRotator rDirection;                                                //0
	class FVector vDirection;                                                 //0
	class FCoords cTarget;                                                    //0
	class FVector vTarget;                                                    //0
};
struct AR6RainbowAI_execEnemyIsAThreat_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execIsBeingAttacked_Parms
{
	class APawn* attacker;                                                    //CPF_Parm
};
struct AR6RainbowAI_execIsANeutralPawnNoise_Parms
{
	class AActor* aNoiseMaker;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class APawn* aPawn;                                                       //0
};
struct AR6RainbowAI_execSetEnemy_Parms
{
	class APawn* newEnemy;                                                    //CPF_Parm
};
struct AR6RainbowAI_execCanBeSeen_Parms
{
	class APawn* seen;                                                        //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vSightDir;                                                  //0
};
struct AR6RainbowAI_execPlaySoundDamage_Parms
{
	class APawn* instigatedBy;                                                //CPF_Parm
};
struct AR6RainbowAI_execPlaySoundCurrentAction_Parms
{
	BYTE eVoices;                                                             //CPF_Parm
};
struct AR6RainbowAI_execPlaySoundActionCompleted_Parms
{
	BYTE eAnimToPlay;                                                         //CPF_Parm
};
struct AR6RainbowAI_execPlaySoundInflictedDamage_Parms
{
	class APawn* DeadPawn;                                                    //CPF_Parm
};
struct AR6RainbowAI_execAIAffectedByGrenade_Parms
{
	class AActor* aGrenade;                                                   //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
};
struct AR6RainbowAI_execPlaySoundAffectedByGrenade_Parms
{
	BYTE eType;                                                               //CPF_Parm
};
struct AR6RainbowAI_execReactToFragGrenade_Parms
{
	class FVector vGrenadeLocation;                                           //CPF_Parm
	FLOAT fTimeLeft;                                                          //CPF_Parm
	FLOAT fGrenadeDangerRadius;                                               //CPF_Parm
};
struct AR6RainbowAI_execFragGrenadeInProximity_Parms
{
	class FVector vGrenadeLocation;                                           //CPF_Parm
	FLOAT fTimeLeft;                                                          //CPF_Parm
	FLOAT fGrenadeDangerRadius;                                               //CPF_Parm
};
struct AR6RainbowAI_execCanSeeGrenade_Parms
{
	class FVector vGrenadeLocation;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vDir;                                                       //0
};
struct AR6RainbowAI_execCanClimbLadders_Parms
{
	class AR6Ladder* Ladder;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execResetStateProgress_Parms
{
};
struct AR6RainbowAI_execR6PreMoveToward_Parms
{
	class AActor* Target;                                                     //CPF_Parm
	class AActor* pFocus;                                                     //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6RainbowAI_execR6PreMoveTo_Parms
{
	class FVector vTargetPosition;                                            //CPF_Parm
	class FVector vFocus;                                                     //CPF_Parm
	BYTE ePace;                                                               //CPF_Parm
};
struct AR6RainbowAI_execR6SetMovement_Parms
{
	BYTE ePace;                                                               //CPF_Parm
	BITFIELD bIndependantPace : 1;                                            //0
};
struct AR6RainbowAI_execFreeBackupPromote_Parms
{
};
struct AR6RainbowAI_execPostureHasChanged_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execUpdatePosture_Parms
{
};
struct AR6RainbowAI_eventPostBeginPlay_Parms
{
};
struct AR6RainbowAI_execPossess_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6RainbowAI_execClearToSnipe_Parms
{
	class FVector vStart;                                                     //CPF_Parm
	class FRotator rSnipingDir;                                               //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execAClearShotIsAvailable_Parms
{
	class APawn* PTarget;                                                     //CPF_Parm
	class FVector vStart;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execFindSafeSpot_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execLookAroundRoom_Parms
{
	BITFIELD bIsLeadingRoomEntry : 1;                                         //CPF_Parm
};
struct AR6RainbowAI_execSetOrientation_Parms
{
	BYTE eOverrideOrientation;                                                //CPF_Parm
};
struct AR6RainbowAI_execCheckEnvironment_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execGetEntryPosition_Parms
{
	BITFIELD bInsideRoom : 1;                                                 //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execGetGuardPosition_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execGetLadderPosition_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execGetTargetPosition_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6RainbowAI_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
	class FVector vDirection;                                                 //0
	class FRotator rDirection;                                                //0
};
struct AR6RainbowAI_execPromote_Parms
{
};

// *****************************************************************************
// AR6RainbowAI (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6RainbowAI : public AR6AIController
{
public:
	BYTE m_eFormation;                                                        //0
	BYTE m_ePawnOrientation;                                                  //0
	BYTE m_eCurrentRoomLayout;                                                //0
	BYTE m_eCoverDirection;                                                   //0
	INT m_iStateProgress;                                                     //0
	INT m_iTurn;                                                              //0
	INT m_iWaitCounter;                                                       //0
	INT m_iActionUseGadgetGroup;                                              //0
	BITFIELD m_bTeamMateHasBeenKilled : 1;                                    //0
	BITFIELD m_bIsCatchingUp : 1;                                             //0
	BITFIELD m_bIsMovingBackwards : 1;                                        //0
	BITFIELD m_bSlowedPace : 1;                                               //0
	BITFIELD m_bAlreadyWaiting : 1;                                           //0
	BITFIELD m_bReactToNoise : 1;                                             //0
	BITFIELD m_bUseStaggeredFormation : 1;                                    //0
	BITFIELD m_bWeaponsDry : 1;                                               //0
	BITFIELD m_bAimingWeaponAtEnemy : 1;                                      //0
	BITFIELD m_bEnteredRoom : 1;                                              //0
	BITFIELD m_bIndividualAttacks : 1;                                        //0
	BITFIELD m_bStateFlag : 1;                                                //0
	BITFIELD m_bReorganizationPending : 1;                                    //0
	FLOAT m_fLastReactionToGas;                                               //0
	FLOAT m_fGrenadeDangerRadius;                                             //0
	FLOAT m_fAttackTimerRate;                                                 //0
	FLOAT m_fAttackTimerCounter;                                              //0
	FLOAT m_fFiringAttackTimer;                                               //0
	class AR6Rainbow* m_pawn;                                                 //0
	class AR6RainbowTeam* m_TeamManager;                                      //0
	class AR6Rainbow* m_TeamLeader;                                           //0
	class AR6Rainbow* m_PaceMember;                                           //0
	class AActor* m_NextMoveTarget;                                           //0
	class AR6IORotatingDoor* m_RotatingDoor;                                  //0
	class AActor* m_ActionTarget;                                             //0
	class AActor* m_DesiredTarget;                                            //0
	class UR6CommonRainbowVoices* m_CommonMemberVoicesMgr;                    //0
	FName m_PostFindPathToState;                                              //0
	FName m_PostLockPickState;                                                //0
	class FVector m_vLocationOnTarget;                                        //0
	class FVector m_vGrenadeLocation;                                         //0
	class FVector m_vDesiredLocation;                                         //0
	class FVector m_vNoiseFocalPoint;                                         //0
	class FVector m_vPreEntryPositions[2];                                    //0
	virtual ~AR6RainbowAI();
	virtual void UpdateTimers(FLOAT);
	virtual class AActor * GetTeamManager();
	INT AClearShotIsAvailable(class APawn *, class FVector);
	AR6RainbowAI(class AR6RainbowAI const &);
	AR6RainbowAI();
	INT ClearToSnipe(class FVector, class FRotator);
	class AActor * FindSafeSpot();
	class FVector GetTeamLeftOfDoorPosition(INT, class AR6Door *);
	class FVector GetTeamRightOfDoorPosition(INT, class AR6Door *);
	static void CDECL InternalConstructor(void *);
	void LookAroundRoom(INT);
	static class UClass * CDECL StaticClass();
	void checkEnvironment();
	void eventAttackTimer();
	void eventStopAttack();
	void execAClearShotIsAvailable(struct FFrame &, void * const);
	void execCheckEnvironment(struct FFrame &, void * const);
	void execClearToSnipe(struct FFrame &, void * const);
	void execFindSafeSpot(struct FFrame &, void * const);
	void execGetEntryPosition(struct FFrame &, void * const);
	void execGetGuardPosition(struct FFrame &, void * const);
	void execGetLadderPosition(struct FFrame &, void * const);
	void execGetTargetPosition(struct FFrame &, void * const);
	void execLookAroundRoom(struct FFrame &, void * const);
	void execSetOrientation(struct FFrame &, void * const);
	class FVector getEntryPosition();
	class FVector getGuardPosition();
	class FVector getLadderPosition();
	class FVector getPreEntryPosition();
	class FVector getTargetPosition();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6RainbowAI & operator=(class AR6RainbowAI const &);
	void resetBoneRotation();
	void setMemberOrientation(enum EPawnOrientation);
	enum ePawnOrientation updatePawnOrientation();
private:
	static class UClass PrivateStaticClass();
};

enum eGamePasswordRes{
	 GPR_None=0
	,GPR_MissingPasswd=1
	,GPR_PasswdSet=2
	,GPR_PasswdCleared=3
};
enum eDefaultCircumstantialAction{
	 PCA_None=0
	,PCA_TeamRegroup=1
	,PCA_TeamMoveTo=2
	,PCA_MoveAndGrenade=3
	,PCA_GrenadeFrag=4
	,PCA_GrenadeGas=5
	,PCA_GrenadeFlash=6
	,PCA_GrenadeSmoke=7
};
enum eDeathCameraMode{
	 eDCM_FIRSTPERSON=0
	,eDCM_THIRDPERSON=1
	,eDCM_FREETHIRDPERSON=2
	,eDCM_GHOST=3
	,eDCM_FADETOBLACK=4
};

// -----------------------------------------------------------------------------
// FSTBanPage ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTBanPage
{
public:
	class FString szBanID[10];                                            //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FSTImpactShake ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTImpactShake
{
public:
	INT iBlurIntensity;                                                   //CPF_Edit
	FLOAT fWaveTime;                                                      //CPF_Edit
	FLOAT fRollMax;                                                       //CPF_Edit
	FLOAT fRollSpeed;                                                     //CPF_Edit
	FLOAT fReturnTime;                                                    //CPF_Edit
};

// -----------------------------------------------------------------------------
// PlayerEndClimbingLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerEndClimbingLadder
{
};

// -----------------------------------------------------------------------------
// PlayerBeginClimbingLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerBeginClimbingLadder
{
};

// -----------------------------------------------------------------------------
// PreBeginClimbingLadder ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PreBeginClimbingLadder
{
};

// -----------------------------------------------------------------------------
// PlayerSetExplosive ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerSetExplosive
{
};

// -----------------------------------------------------------------------------
// PlayerSecureTerrorist ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerSecureTerrorist
{
};

// -----------------------------------------------------------------------------
// PlayerActionProgress ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerActionProgress
{
};

// -----------------------------------------------------------------------------
// PlayerSetFree ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerSetFree
{
};

// -----------------------------------------------------------------------------
// CameraPlayer ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT CameraPlayer
{
};

// -----------------------------------------------------------------------------
// PlayerArrested ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerArrested
{
};

// -----------------------------------------------------------------------------
// PlayerStartArrest ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerStartArrest
{
};

// -----------------------------------------------------------------------------
// PlayerSecureRainbow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerSecureRainbow
{
};

// -----------------------------------------------------------------------------
// PlayerEndSurrended ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerEndSurrended
{
};

// -----------------------------------------------------------------------------
// PlayerSurrended ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerSurrended
{
};

// -----------------------------------------------------------------------------
// PlayerStartSurrending ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerStartSurrending
{
};

// -----------------------------------------------------------------------------
// PlayerPreBeginSurrending ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerPreBeginSurrending
{
};

// -----------------------------------------------------------------------------
// PlayerFinishReloadingBeforeSurrender ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerFinishReloadingBeforeSurrender
{
};

// -----------------------------------------------------------------------------
// PlayerStartSurrenderSequence ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PlayerStartSurrenderSequence
{
};

// -----------------------------------------------------------------------------
// WaitForGameRepInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT WaitForGameRepInfo
{
};

// -----------------------------------------------------------------------------
// PauseController ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PauseController
{
};

// -----------------------------------------------------------------------------
// PenaltyBox ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PenaltyBox
{
};

// -----------------------------------------------------------------------------
// FstSoundPriorityPtr ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstSoundPriorityPtr
{
public:
	INT Ptr;                                                              //0
};

// -----------------------------------------------------------------------------
// FstSoundPriority ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstSoundPriority
{
public:
	class AR6SoundReplicationInfo* aSoundRepInfo;                         //0
	class USound* sndPlayVoice;                                           //0
	INT iPriority;                                                        //0
	BYTE eSlotUse;                                                        //0
	BYTE EPawnType;                                                       //0
	FLOAT fTimeStart;                                                     //0
	BITFIELD bIsPlaying : 1;                                              //0
	BITFIELD bWaitToFinishSound : 1;                                      //0
};
struct AR6PlayerController_execClientEndSurrended_Parms
{
};
struct AR6PlayerController_execServerStartSurrended_Parms
{
};
struct AR6PlayerController_execVoteKick_Parms
{
	class FString szKickName;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execPlayerList_Parms
{
	class APlayerReplicationInfo* _PRI;                                       //0
	class FString szID;                                                       //CPF_NeedCtorLink
	class FString szName;                                                     //CPF_NeedCtorLink
};
struct AR6PlayerController_execProcessVoteNextRequest_Parms
{
};
struct AR6PlayerController_execVoteNextMap_Parms
{
};
struct AR6PlayerController_execServerMap_Parms
{
	INT iGotoMapId;                                                           //CPF_Parm
	class FString explanation;                                                //CPF_Parm|CPF_NeedCtorLink
	class AR6GameReplicationInfo* _GRI;                                       //0
	class AR6PlayerController* _playerController;                             //0
	class FString _mapName;                                                   //CPF_NeedCtorLink
	class FString _PlayerName;                                                //CPF_NeedCtorLink
};
struct AR6PlayerController_execMap_Parms
{
	INT iGotoMapId;                                                           //CPF_Parm
	class FString explanation;                                                //CPF_Parm|CPF_NeedCtorLink
	class AR6GameReplicationInfo* _GRI;                                       //0
	class FString szMapLoc;                                                   //CPF_NeedCtorLink
};
struct AR6PlayerController_execMapList_Parms
{
	class AR6GameReplicationInfo* _GRI;                                       //0
	INT iIterator;                                                            //0
	class FString szMapId;                                                    //CPF_NeedCtorLink
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szLocGameType;                                              //CPF_NeedCtorLink
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class FString szMapLoc;                                                   //CPF_NeedCtorLink
};
struct AR6PlayerController_execPlaySoundDamage_Parms
{
	class APawn* instigatedBy;                                                //CPF_Parm
};
struct AR6PlayerController_execPlaySoundCurrentAction_Parms
{
	BYTE eVoices;                                                             //CPF_Parm
};
struct AR6PlayerController_execPlaySoundInflictedDamage_Parms
{
	class APawn* DeadPawn;                                                    //CPF_Parm
};
struct AR6PlayerController_execPlaySoundActionCompleted_Parms
{
	BYTE eAnimToPlay;                                                         //CPF_Parm
};
struct AR6PlayerController_eventClientPlayVoices_Parms
{
	class AR6SoundReplicationInfo* aAudioRepInfo;                             //CPF_Parm
	class USound* sndPlayVoice;                                               //CPF_Parm
	BYTE eSlotUse;                                                            //CPF_Parm
	INT iPriority;                                                            //CPF_Parm
	BITFIELD bWaitToFinishSound : 1;                                          //CPF_Parm
	FLOAT fTime;                                                              //CPF_Parm
};
struct AR6PlayerController_execPlaySoundAffectedByGrenade_Parms
{
	BYTE eType;                                                               //CPF_Parm
};
struct AR6PlayerController_execServerSetPlayerReadyStatus_Parms
{
	BITFIELD _bPlayerReady : 1;                                               //CPF_Parm
};
struct AR6PlayerController_execServerLogBandWidth_Parms
{
	BITFIELD bLogBandWidth : 1;                                               //CPF_Parm
};
struct AR6PlayerController_execServerNetLogActor_Parms
{
	class AActor* InActor;                                                    //CPF_Parm
};
struct AR6PlayerController_execServerPlayerPref_Parms
{
	struct FPlayerPrefInfo newPlayerPrefs;                                    //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execServerMove_Parms
{
	FLOAT TimeStamp;                                                          //CPF_Parm
	class FVector InAccel;                                                    //CPF_Parm
	class FVector ClientLoc;                                                  //CPF_Parm
	BITFIELD NewbRun : 1;                                                     //CPF_Parm
	BITFIELD NewbDuck : 1;                                                    //CPF_Parm
	BITFIELD NewbCrawl : 1;                                                   //CPF_Parm
	INT View;                                                                 //CPF_Parm
	INT iNewRotOffset;                                                        //CPF_Parm
	BYTE OldTimeDelta;                                                        //CPF_Parm
	INT OldAccel;                                                             //CPF_Parm
};
struct AR6PlayerController_execServerBroadcast_Parms
{
	class APlayerController* Sender;                                          //CPF_Parm
	class FString Msg;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FName type;                                                               //CPF_Parm
};
struct AR6PlayerController_execUnPossess_Parms
{
};
struct AR6PlayerController_execPossess_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6PlayerController_execPossessInit_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6PlayerController_execServerLogActors_Parms
{
};
struct AR6PlayerController_execDoLogActors_Parms
{
	class AActor* ActorIterator;                                              //0
};
struct AR6PlayerController_execServerLogPawn_Parms
{
};
struct AR6PlayerController_execDoLogPawn_Parms
{
};
struct AR6PlayerController_execLogPawn_Parms
{
};
struct AR6PlayerController_execServerDbgLogActor_Parms
{
	class AActor* anActor;                                                    //CPF_Parm
	class AR6Pawn* P;                                                         //0
};
struct AR6PlayerController_execDoDbgLogActor_Parms
{
	class AActor* anActor;                                                    //CPF_Parm
};
struct AR6PlayerController_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6PlayerController_execR6ActionCanBeExecuted_Parms
{
	INT iAction;                                                              //CPF_Parm
	class APlayerController* PlayerController;                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execR6FillGrenadeSubAction_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	INT iSubMenu;                                                             //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct AR6PlayerController_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	BITFIELD bIsOpen : 1;                                                     //0
};
struct AR6PlayerController_execCanIssueTeamOrder_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execSetRequestedCircumstantialAction_Parms
{
};
struct AR6PlayerController_execTeamMemberHasGrenadeType_Parms
{
	BYTE grenadeType;                                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execServerStartSurrenderSequence_Parms
{
};
struct AR6PlayerController_execServerWeaponUpAnimDone_Parms
{
};
struct AR6PlayerController_execWeaponUpState_Parms
{
};
struct AR6PlayerController_execServerSwitchWeapon_Parms
{
	class AR6EngineWeapon* NewWeapon;                                         //CPF_Parm
	BYTE u8CurrentWeapon;                                                     //CPF_Parm
};
struct AR6PlayerController_execSwitchWeapon_Parms
{
	BYTE f;                                                                   //CPF_Parm
	class AR6EngineWeapon* NewWeapon;                                         //0
};
struct AR6PlayerController_execClientFadeCommonSound_Parms
{
	FLOAT fTime;                                                              //CPF_Parm
	INT iVolume;                                                              //CPF_Parm
};
struct AR6PlayerController_execClientFadeSound_Parms
{
	FLOAT fTime;                                                              //CPF_Parm
	INT iVolume;                                                              //CPF_Parm
	BYTE eSlot;                                                               //CPF_Parm
};
struct AR6PlayerController_execPlayerCanSwitchToAIBackup_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execPawnDied_Parms
{
};
struct AR6PlayerController_eventNotifyLanded_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execR6DamageAttitudeTo_Parms
{
	class APawn* Other;                                                       //CPF_Parm
	BYTE eKillResultFromTable;                                                //CPF_Parm
	BYTE eStunFromTable;                                                      //CPF_Parm
	class FVector vBulletMomentum;                                            //CPF_Parm
};
struct AR6PlayerController_execR6WeaponShake_Parms
{
};
struct AR6PlayerController_execR6ClientWeaponShake_Parms
{
};
struct AR6PlayerController_execResetCameraShake_Parms
{
};
struct AR6PlayerController_execClientForceUnlockWeapon_Parms
{
};
struct AR6PlayerController_execR6ViewShake_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
	class FRotator rRotationOffset;                                           //CPF_Parm|CPF_OutParm
	class FRotator rOriginalFiringDirection;                                  //0
	INT iYawDifference;                                                       //0
	FLOAT fJumpByStance;                                                      //0
	FLOAT fStanceDeltaTime;                                                   //0
};
struct AR6PlayerController_execResetPlayerVisualEffects_Parms
{
};
struct AR6PlayerController_execCancelShake_Parms
{
};
struct AR6PlayerController_execShakeView_Parms
{
	FLOAT fWaveTime;                                                          //CPF_Parm
	FLOAT fRollMax;                                                           //CPF_Parm
	class FVector vImpactDirection;                                           //CPF_Parm
	FLOAT fRollSpeed;                                                         //CPF_Parm
	class FVector vPositionOffset;                                            //CPF_Parm
	FLOAT fReturnTime;                                                        //CPF_Parm
	class FVector vRotationX;                                                 //0
	class FVector vRotationY;                                                 //0
	class FVector vRotationZ;                                                 //0
	FLOAT fCosValue;                                                          //0
	FLOAT fCosValueRoll;                                                      //0
	FLOAT fAngle;                                                             //0
	INT iPitchOrientation;                                                    //0
	INT iRollOrientation;                                                     //0
};
struct AR6PlayerController_eventGetZoomMultiplyFactor_Parms
{
	FLOAT fWeaponMaxZoom;                                                     //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execDoZoom_Parms
{
	BITFIELD bTurnOff : 1;                                                    //CPF_Parm
};
struct AR6PlayerController_execToggleHelmetCameraZoom_Parms
{
	BITFIELD bTurnOff : 1;                                                    //CPF_Parm
};
struct AR6PlayerController_execServerSetHelmetParams_Parms
{
	FLOAT fZoomLevel;                                                         //CPF_Parm
	BITFIELD bScopeZoom : 1;                                                  //CPF_Parm
};
struct AR6PlayerController_execHelmetCameraZoom_Parms
{
	FLOAT fZoomLevel;                                                         //CPF_Parm
};
struct AR6PlayerController_execBlur_Parms
{
	INT iValue;                                                               //CPF_Parm
};
struct AR6PlayerController_execResetBlur_Parms
{
	class UCanvas* C;                                                         //0
};
struct AR6PlayerController_execExtractMissingLadderInformation_Parms
{
};
struct AR6PlayerController_execServerStartClimbingLadder_Parms
{
};
struct AR6PlayerController_execPlayFiring_Parms
{
};
struct AR6PlayerController_execResetSpecialCrouch_Parms
{
};
struct AR6PlayerController_execServerTKPopUpDone_Parms
{
	BITFIELD _bApplyTeamKillerPenalty : 1;                                    //CPF_Parm
};
struct AR6PlayerController_eventTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
	BYTE PatchState;                                                          //0
};
struct AR6PlayerController_execServerNewPing_Parms
{
	INT iNewPing;                                                             //CPF_Parm
};
struct AR6PlayerController_execHideWeapon_Parms
{
};
struct AR6PlayerController_eventGetLocalPlayerIp_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6PlayerController_execTeamSay_Parms
{
	class FString Msg;                                                        //CPF_Parm|CPF_NeedCtorLink
	class UR6ServerInfo* pServerInfo;                                         //0
};
struct AR6PlayerController_execSay_Parms
{
	class FString Msg;                                                        //CPF_Parm|CPF_NeedCtorLink
	class UR6ServerInfo* pServerInfo;                                         //0
};
struct AR6PlayerController_execClientChatAbuseMsg_Parms
{
	INT iChatLockDuration;                                                    //CPF_Parm
};
struct AR6PlayerController_execClientChatDisabledMsg_Parms
{
	INT iTimeRem;                                                             //CPF_Parm
};
struct AR6PlayerController_execMyID_Parms
{
};
struct AR6PlayerController_execCountDownPopUpBoxDone_Parms
{
};
struct AR6PlayerController_execCountDownPopUpBox_Parms
{
};
struct AR6PlayerController_execaddToOxygenLevel_Parms
{
	FLOAT f;                                                                  //CPF_Parm
};
struct AR6PlayerController_execServerActionProgressStop_Parms
{
};
struct AR6PlayerController_execClientStopFadeToBlack_Parms
{
};
struct AR6PlayerController_execClientSetMultiplayerSkins_Parms
{
	class FString G;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString R;                                                          //CPF_Parm|CPF_NeedCtorLink
	class UMaterial* GreenMenuSkin;                                           //CPF_Parm
	struct FRegion GreenMenuRegion;                                           //CPF_Parm
	class UMaterial* RedMenuSkin;                                             //CPF_Parm
	struct FRegion RedMenuRegion;                                             //CPF_Parm
	class UClass* TempGreenClass;                                             //0
	class UClass* TempRedClass;                                               //0
};
struct AR6PlayerController_execServerRequestSkins_Parms
{
	class UClass* TempGreenClass;                                             //0
	class UClass* TempRedClass;                                               //0
};
struct AR6PlayerController_execClientTeamIsDead_Parms
{
};
struct AR6PlayerController_execServerPlayerInvisible_Parms
{
	BITFIELD bIsVisible : 1;                                                  //CPF_Parm
};
struct AR6PlayerController_execServerWalk_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6PlayerController_execServerAbortMission_Parms
{
};
struct AR6PlayerController_execServerCompleteMission_Parms
{
};
struct AR6PlayerController_execServerGhost_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6PlayerController_execSetGameMsg_Parms
{
	class FString szLocalization;                                             //CPF_Parm|CPF_NeedCtorLink
	class FString szPreMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class USound* sndSound;                                                   //CPF_Parm
	INT iLifeTime;                                                            //CPF_Parm
};
struct AR6PlayerController_execClientGameMsg_Parms
{
	class FString szLocFile;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString szPreMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class USound* sndSound;                                                   //CPF_Parm
	INT iLifeTime;                                                            //CPF_Parm
};
struct AR6PlayerController_execClientMissionObjMsg_Parms
{
	class FString szLocFile;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString szPreMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class USound* sndSound;                                                   //CPF_Parm
	INT iLifeTime;                                                            //CPF_Parm
};
struct AR6PlayerController_execClientGameTypeDescription_Parms
{
	class FString szGameTypeFlag;                                             //CPF_Parm|CPF_NeedCtorLink
	class FString szObjective;                                                //CPF_NeedCtorLink
};
struct AR6PlayerController_execClientActionProgressDone_Parms
{
};
struct AR6PlayerController_execServerPlayerActionProgress_Parms
{
};
struct AR6PlayerController_execR6PlayerMove_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	class FVector X;                                                          //0
	class FVector Y;                                                          //0
	class FVector Z;                                                          //0
	class FVector NewAccel;                                                   //0
	BYTE DoubleClickMove;                                                     //0
	class FRotator OldRotation;                                               //0
	class FRotator ViewRotation;                                              //0
	FLOAT Speed2D;                                                            //0
	BITFIELD bSaveJump : 1;                                                   //0
};
struct AR6PlayerController_execDisableFirstPersonViewEffects_Parms
{
	BITFIELD bChangingPawn : 1;                                               //CPF_Parm
	class AR6AbstractWeapon* AWeapon;                                         //0
};
struct AR6PlayerController_execPreviousMember_Parms
{
};
struct AR6PlayerController_execNextMember_Parms
{
};
struct AR6PlayerController_execRegroupOnMe_Parms
{
};
struct AR6PlayerController_execClientResetGameMsg_Parms
{
	INT i;                                                                    //0
};
struct AR6PlayerController_execClientRestartMatchMsg_Parms
{
	class FString _AdminName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString explanation;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientRestartRoundMsg_Parms
{
	class FString _AdminName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString explanation;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientVoteChangeMap_Parms
{
	class FString _AdminName;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientAdminBanOff_Parms
{
	class FString _AdminName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _KickedName;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientAdminKickOff_Parms
{
	class FString _AdminName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _KickedName;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientNoKickAdmin_Parms
{
};
struct AR6PlayerController_execClientCantRequestKickYet_Parms
{
};
struct AR6PlayerController_execClientCantRequestChangeMapYet_Parms
{
};
struct AR6PlayerController_execClientVoteInProgress_Parms
{
};
struct AR6PlayerController_execClientNoAuthority_Parms
{
};
struct AR6PlayerController_execClientPasswordTooLong_Parms
{
};
struct AR6PlayerController_execClientNewPassword_Parms
{
	class FString _AdminName;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_eventClientVoteSessionAbort_Parms
{
	class FString _PlayerName;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientVoteResult_Parms
{
	BITFIELD VoteResult : 1;                                                  //CPF_Parm
	class FString _PlayerName;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString _stringOne;                                                 //CPF_NeedCtorLink
	class FString _stringTwo;                                                 //CPF_NeedCtorLink
};
struct AR6PlayerController_execClientPlayerVoteMessage_Parms
{
	class FString _playerOne;                                                 //CPF_Parm|CPF_NeedCtorLink
	INT iResult;                                                              //CPF_Parm
	class FString _playerTwo;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString szVoteMessage;                                              //CPF_NeedCtorLink
};
struct AR6PlayerController_execClientKickVoteMessage_Parms
{
	class APlayerReplicationInfo* PRIKickPlayer;                              //CPF_Parm
	class FString szRequestingPlayer;                                         //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execServerChangeTeams_Parms
{
	BITFIELD bNextTeam : 1;                                                   //CPF_Parm
};
struct AR6PlayerController_execChangeTeams_Parms
{
	BITFIELD bNextTeam : 1;                                                   //CPF_Parm
};
struct AR6PlayerController_execToggleHelmet_Parms
{
};
struct AR6PlayerController_execClientNextMapVoteMessage_Parms
{
	class FString szRequestingPlayer;                                         //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientKickBadId_Parms
{
};
struct AR6PlayerController_execClientServerMap_Parms
{
	class FString _szPlayerName;                                              //CPF_Parm|CPF_NeedCtorLink
	class FString szNewMapname;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString explanation;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientTeamFullMessage_Parms
{
};
struct AR6PlayerController_execRestartRound_Parms
{
	class FString explanation;                                                //CPF_Parm|CPF_NeedCtorLink
	class AR6PlayerController* _playerController;                             //0
	class FString _AdminName;                                                 //CPF_NeedCtorLink
};
struct AR6PlayerController_execRestartMatch_Parms
{
	class FString explanation;                                                //CPF_Parm|CPF_NeedCtorLink
	class AR6PlayerController* _playerController;                             //0
	class FString _AdminName;                                                 //CPF_NeedCtorLink
};
struct AR6PlayerController_execSetRestKitWithAsz_Parms
{
	BITFIELD _bRemoveRest : 1;                                                //CPF_Parm
	class FString _szNewValue;                                                //CPF_Parm|CPF_NeedCtorLink
	TArray<class FString> _szARestKit;                                        //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct AR6PlayerController_execSetRestKitWithAClass_Parms
{
	BITFIELD _bRemoveRest : 1;                                                //CPF_Parm
	class UClass* _pANewClassValue;                                           //CPF_Parm
	TArray<class UClass*> _pARestKit;                                         //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct AR6PlayerController_execServerNewKitRestSettings_Parms
{
	BYTE _eKitRestID;                                                         //CPF_Parm
	BITFIELD _bRemoveRest : 1;                                                //CPF_Parm
	class UClass* _pANewClassValue;                                           //CPF_Parm
	class FString _szNewValue;                                                //CPF_Parm|CPF_NeedCtorLink
	class UR6ServerInfo* pServerInfo;                                         //0
	BITFIELD bValueChange : 1;                                                //0
};
struct AR6PlayerController_execServerNewMapListSettings_Parms
{
	INT iMapIndex;                                                            //CPF_Parm
	INT iUpdateGameType;                                                      //CPF_Parm
	class FString _GameType;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString _Map;                                                       //CPF_Parm|CPF_NeedCtorLink
	INT _iLastItem;                                                           //CPF_Parm
	class UR6ServerInfo* pServerInfo;                                         //0
	INT i;                                                                    //0
	INT iArrayCount;                                                          //0
	BITFIELD bValueChange : 1;                                                //0
};
struct AR6PlayerController_execServerNewGeneralSettings_Parms
{
	BYTE _eButName;                                                           //CPF_Parm
	BITFIELD _bNewValue : 1;                                                  //CPF_Parm
	INT _iNewValue;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6ServerInfo* pServerInfo;                                         //0
	BITFIELD bValueChange : 1;                                                //0
};
struct AR6PlayerController_execLogRest_Parms
{
	INT i;                                                                    //0
	class AR6GameReplicationInfo* _GRI;                                       //0
};
struct AR6PlayerController_execSendSettingsAndRestartServer_Parms
{
	BITFIELD _bRestrictionKitChange : 1;                                      //CPF_Parm
	BITFIELD _bChangeWasMade : 1;                                             //CPF_Parm
	class UR6ServerInfo* pServerInfo;                                         //0
};
struct AR6PlayerController_execClientServerChangingInfo_Parms
{
	BITFIELD _bCanChangeOptions : 1;                                          //CPF_Parm
};
struct AR6PlayerController_execServerStartChangingInfo_Parms
{
};
struct AR6PlayerController_execServerUnPausePreGameRoundTime_Parms
{
};
struct AR6PlayerController_execServerPausePreGameRoundTime_Parms
{
};
struct AR6PlayerController_execLoadServer_Parms
{
	class FString FileName;                                                   //CPF_Parm|CPF_NeedCtorLink
	class AR6PlayerController* _playerController;                             //0
};
struct AR6PlayerController_execProcessKickRequest_Parms
{
	class AR6PlayerController* _playerController;                             //CPF_Parm
	BITFIELD bBan : 1;                                                        //CPF_Parm
	class AR6PlayerController* _pcIterator;                                   //0
	class FString _AdminName;                                                 //CPF_NeedCtorLink
	class FString _KickeeName;                                                //CPF_NeedCtorLink
};
struct AR6PlayerController_execAdmin_Parms
{
	class FString CommandLine;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString Result;                                                     //CPF_NeedCtorLink
};
struct AR6PlayerController_execUnBan_Parms
{
	class FString szPrefixBanID;                                              //CPF_Parm|CPF_NeedCtorLink
	INT _iMatchesFound;                                                       //0
};
struct AR6PlayerController_execServerBanList_Parms
{
	INT _iPageNumber;                                                         //CPF_Parm
	class FString szPrefixBanID;                                              //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
	INT iMatchesFound;                                                        //0
	INT iPosFound;                                                            //0
	struct FSTBanPage banPage;                                                //CPF_NeedCtorLink
};
struct AR6PlayerController_execNextBanList_Parms
{
};
struct AR6PlayerController_execBanList_Parms
{
	class FString szPrefixBanID;                                              //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execUnBanPos_Parms
{
	INT iPosition;                                                            //CPF_Parm
	INT iPos;                                                                 //0
};
struct AR6PlayerController_execClientBanMatches_Parms
{
	struct FSTBanPage banPage;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString _BanPrefix;                                                 //CPF_Parm|CPF_NeedCtorLink
	INT iPos;                                                                 //0
};
struct AR6PlayerController_execClientPBVersionMismatch_Parms
{
};
struct AR6PlayerController_execClientPlayerUnbanned_Parms
{
};
struct AR6PlayerController_execClientNoBanMatches_Parms
{
	INT iPos;                                                                 //0
};
struct AR6PlayerController_execBanId_Parms
{
	class FString szKickName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class AR6PlayerController* PC;                                            //0
};
struct AR6PlayerController_execBan_Parms
{
	class FString szKickName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class AR6PlayerController* PC;                                            //0
};
struct AR6PlayerController_execKickId_Parms
{
	class FString szKickName;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execKick_Parms
{
	class FString szKickName;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execCheckAuthority_Parms
{
	INT _LevelNeeded;                                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execNewPassword_Parms
{
	class FString _NewPassword;                                               //CPF_Parm|CPF_NeedCtorLink
	class AR6PlayerController* _playerController;                             //0
	class FString _PlayerName;                                                //CPF_NeedCtorLink
};
struct AR6PlayerController_execFreeRainbow_Parms
{
	class AR6Pawn* pOther;                                                    //CPF_Parm
};
struct AR6PlayerController_execClientPasswordMessage_Parms
{
	BYTE iMessageType;                                                        //CPF_Parm
};
struct AR6PlayerController_execLockServer_Parms
{
	BITFIELD _bFlagSetting : 1;                                               //CPF_Parm
	class FString _NewPassword;                                               //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientAdminLogin_Parms
{
	BITFIELD _loginRes : 1;                                                   //CPF_Parm
};
struct AR6PlayerController_execServerAdminLogin_Parms
{
	class FString _Password;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execAdminLogin_Parms
{
	class FString _Password;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execAutoAdminLogin_Parms
{
	class FString _Password;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientKickedOut_Parms
{
};
struct AR6PlayerController_execClientBanned_Parms
{
};
struct AR6PlayerController_execVote_Parms
{
	INT _bVoteResult;                                                         //CPF_Parm
	class AController* _itController;                                         //0
	class AR6PlayerController* _playerController;                             //0
	class FString _PlayerNameOne;                                             //CPF_NeedCtorLink
	class FString _PlayerNameTwo;                                             //CPF_NeedCtorLink
	INT _iForKickVotes;                                                       //0
	INT _iAgainstKickVotes;                                                   //0
	INT _iTotalPlayers;                                                       //0
	class UR6ServerInfo* pServerInfo;                                         //0
	BITFIELD _VoteSpamCheckOk : 1;                                            //0
};
struct AR6PlayerController_execProcessVoteKickRequest_Parms
{
	class AR6PlayerController* _playerController;                             //CPF_Parm
};
struct AR6PlayerController_execVoteKickID_Parms
{
	class FString szKickName;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execSecureRainbow_Parms
{
	class AR6Pawn* pOther;                                                    //CPF_Parm
};
struct AR6PlayerController_execDispatchOrder_Parms
{
	INT iOrder;                                                               //CPF_Parm
	class AR6Pawn* pSource;                                                   //CPF_Parm
};
struct AR6PlayerController_execServerIndicatesInvalidCDKey_Parms
{
	class FString _szErrorMsgKey;                                             //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execClientFinalizeLoading_Parms
{
	class AZoneInfo* aZoneInfo;                                               //CPF_Parm
};
struct AR6PlayerController_execClientSetWeaponSound_Parms
{
	class AR6PawnReplicationInfo* PawnRepInfo;                                //CPF_Parm
	class UClass* PrimaryWeaponClass;                                         //CPF_Parm
	BYTE u8CurrentWeapon;                                                     //CPF_Parm
};
struct AR6PlayerController_execSetWeaponSound_Parms
{
	class AR6PawnReplicationInfo* PawnRepInfo;                                //CPF_Parm
	class FString szCurrentWeaponTxt;                                         //CPF_Parm|CPF_NeedCtorLink
	BYTE u8CurrentWepon;                                                      //CPF_Parm
	class UClass* WeaponClass;                                                //0
	class FString caps_szWeaponName;                                          //CPF_NeedCtorLink
};
struct AR6PlayerController_execServerReadyToLoadWeaponSound_Parms
{
	class AController* aController;                                           //0
	class AR6Terrorist* aTerrorist;                                           //0
	class AR6Rainbow* aRainbow;                                               //0
	class AZoneInfo* aZoneInfo;                                               //0
};
struct AR6PlayerController_execClientPlayMusic_Parms
{
	class USound* Sound;                                                      //CPF_Parm
};
struct AR6PlayerController_execClientMPMiscMessage_Parms
{
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString Name;                                                       //CPF_Parm|CPF_NeedCtorLink
	class FString szEndOfMsg;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString szMsg;                                                      //CPF_NeedCtorLink
};
struct AR6PlayerController_execClientDeathMessage_Parms
{
	class FString Killer;                                                     //CPF_Parm|CPF_NeedCtorLink
	class FString killed;                                                     //CPF_Parm|CPF_NeedCtorLink
	BYTE bSuicideType;                                                        //CPF_Parm
};
struct AR6PlayerController_execClientNewLobbyConnection_Parms
{
	INT iLobbyID;                                                             //CPF_Parm
	INT iGroupID;                                                             //CPF_Parm
};
struct AR6PlayerController_execClearReferences_Parms
{
};
struct AR6PlayerController_execClientChangeMap_Parms
{
};
struct AR6PlayerController_execShouldDisplayIncomingMessages_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execReset_Parms
{
};
struct AR6PlayerController_execFirstPassReset_Parms
{
};
struct AR6PlayerController_execResettingLevel_Parms
{
	INT iNbOfRestart;                                                         //CPF_Parm
};
struct AR6PlayerController_execResetOriginalData_Parms
{
};
struct AR6PlayerController_execPlayVoicesPriority_Parms
{
	class AR6SoundReplicationInfo* aAudioRepInfo;                             //CPF_Parm
	class USound* sndPlayVoice;                                               //CPF_Parm
	BYTE eSlotUse;                                                            //CPF_Parm
	INT iPriority;                                                            //CPF_Parm
	BITFIELD bWaitToFinishSound : 1;                                          //CPF_Parm
	FLOAT fTime;                                                              //CPF_Parm
};
struct AR6PlayerController_execGetLocStringWithActionKey_Parms
{
	class FString szText;                                                     //CPF_Parm|CPF_NeedCtorLink
	class FString szActionKey;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6PlayerController_execLocalizeTraining_Parms
{
	class FString SectionName;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString KeyName;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString PackageName;                                                //CPF_Parm|CPF_NeedCtorLink
	INT iBox;                                                                 //CPF_Parm
	INT iParagraph;                                                           //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6PlayerController_execFindPlayer_Parms
{
	class FString inPlayerIdent;                                              //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bIsIdInt : 1;                                                    //CPF_Parm
	class APlayerController* ReturnValue;                                     //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execDebugFunction_Parms
{
};
struct AR6PlayerController_execUpdateSpectatorReticule_Parms
{
};
struct AR6PlayerController_execUpdateReticule_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct AR6PlayerController_execUpdateCircumstantialAction_Parms
{
};
struct AR6PlayerController_execClientDisableFirstPersonViewEffects_Parms
{
	BITFIELD bChangingPawn : 1;                                               //CPF_Parm
};
struct AR6PlayerController_execEnterSpectatorMode_Parms
{
};
struct AR6PlayerController_eventPlayerTeamSelectionReceived_Parms
{
};
struct AR6PlayerController_execResetCurrentState_Parms
{
};
struct AR6PlayerController_execGraduallyCloseDoor_Parms
{
};
struct AR6PlayerController_execGraduallyOpenDoor_Parms
{
};
struct AR6PlayerController_execServerChangeOperative_Parms
{
	INT iTeamId;                                                              //CPF_Parm
	INT iOperativeID;                                                         //CPF_Parm
};
struct AR6PlayerController_execSuicide_Parms
{
};
struct AR6PlayerController_execTimer_Parms
{
};
struct AR6PlayerController_execClientGotoState_Parms
{
	FName NewState;                                                           //CPF_Parm
	FName NewLabel;                                                           //CPF_Parm
};
struct AR6PlayerController_eventIsPlayerPassiveSpectator_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execServerTeamRequested_Parms
{
	BYTE eTeamSelected;                                                       //CPF_Parm
	BITFIELD bForceSelection : 1;                                             //CPF_Parm
	class FString szMessageLocTag;                                            //CPF_NeedCtorLink
	BITFIELD bSameTeam : 1;                                                   //0
	INT iTeamA;                                                               //0
	INT iTeamB;                                                               //0
	INT iMaxPlayerOnTeam;                                                     //0
	class APlayerReplicationInfo* PRI;                                        //0
	class AController* _P;                                                    //0
	class AR6PlayerController* P;                                             //0
};
struct AR6PlayerController_execPlayerIsFiring_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execServerSetBipodRotation_Parms
{
	FLOAT fRotation;                                                          //CPF_Parm
};
struct AR6PlayerController_execInitializeMenuCom_Parms
{
};
struct AR6PlayerController_execLogSpecialValues_Parms
{
};
struct AR6PlayerController_execServerExecFire_Parms
{
	FLOAT f;                                                                  //CPF_Parm
};
struct AR6PlayerController_execTKPopUpBox_Parms
{
	class FString _KillerName;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execHandleWalking_Parms
{
};
struct AR6PlayerController_execServerUpdatePeeking_Parms
{
	BITFIELD bPeekLeft : 1;                                                   //CPF_Parm
	BITFIELD bPeekRight : 1;                                                  //CPF_Parm
	BYTE PeekLeftButton;                                                      //0
	BYTE PeekRightButton;                                                     //0
};
struct AR6PlayerController_execCommonUpdatePeeking_Parms
{
	BYTE bPeekLeftButton;                                                     //CPF_Parm
	BYTE bPeekRightButton;                                                    //CPF_Parm
};
struct AR6PlayerController_execUpdatePlayerPeeking_Parms
{
	BITFIELD bPeekingLeft : 1;                                                //0
	BITFIELD bPeekingRight : 1;                                               //0
};
struct AR6PlayerController_execServerGraduallyCloseDoor_Parms
{
	BYTE bSpeedUpDoor;                                                        //CPF_Parm
	INT speed;                                                                //0
	class AR6Door* aDoor;                                                     //0
	BITFIELD bStatus : 1;                                                     //0
};
struct AR6PlayerController_execServerGraduallyOpenDoor_Parms
{
	BYTE bSpeedUpDoor;                                                        //CPF_Parm
	INT speed;                                                                //0
	class AR6Door* aDoor;                                                     //0
	BITFIELD bStatus : 1;                                                     //0
};
struct AR6PlayerController_execGraduallyControlDoor_Parms
{
	class AR6Door* aDoor;                                                     //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bIsLookingAtFirstDoor : 1;                                       //0
};
struct AR6PlayerController_execPlayerLookingAtFirstDoor_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vLookDir;                                                   //0
	class FVector vCenter;                                                    //0
	class FVector vCutOff;                                                    //0
	class FVector vResult;                                                    //0
	class AR6Door* rightDoor;                                                 //0
	class AR6Door* leftDoor;                                                  //0
	class FVector vDoor1;                                                     //0
	class FVector vDoor2;                                                     //0
};
struct AR6PlayerController_execPlayerIsInFrontOfDoubleDoors_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execUpdatePlayerPostureAfterSwitch_Parms
{
};
struct AR6PlayerController_execServerPreviousMember_Parms
{
};
struct AR6PlayerController_execServerNextMember_Parms
{
};
struct AR6PlayerController_execCycleHUDLayer_Parms
{
};
struct AR6PlayerController_execPlayAltFiring_Parms
{
};
struct AR6PlayerController_execRulesOfEngagement_Parms
{
};
struct AR6PlayerController_execTeamMovementMode_Parms
{
};
struct AR6PlayerController_execGadgetTwo_Parms
{
};
struct AR6PlayerController_execGadgetOne_Parms
{
};
struct AR6PlayerController_execSecondaryWeapon_Parms
{
};
struct AR6PlayerController_execPrimaryWeapon_Parms
{
};
struct AR6PlayerController_execChangeRateOfFire_Parms
{
};
struct AR6PlayerController_execToggleAutoAim_Parms
{
};
struct AR6PlayerController_execZoom_Parms
{
};
struct AR6PlayerController_execLowerPosture_Parms
{
};
struct AR6PlayerController_execRaisePosture_Parms
{
};
struct AR6PlayerController_execChangeOperative_Parms
{
	INT iTeamId;                                                              //CPF_Parm
	INT iOperativeID;                                                         //CPF_Parm
};
struct AR6PlayerController_execPreviousTeam_Parms
{
};
struct AR6PlayerController_execNextTeam_Parms
{
};
struct AR6PlayerController_execSkipDestination_Parms
{
};
struct AR6PlayerController_execServerSendGoCode_Parms
{
	BYTE eGo;                                                                 //CPF_Parm
	class AR6RainbowTeam* aRainbowTeam;                                       //0
	INT i;                                                                    //0
};
struct AR6PlayerController_execGoCodeZulu_Parms
{
};
struct AR6PlayerController_execGoCodeCharlie_Parms
{
};
struct AR6PlayerController_execGoCodeBravo_Parms
{
};
struct AR6PlayerController_execGoCodeAlpha_Parms
{
};
struct AR6PlayerController_execTeamsStatus_Parms
{
	class AR6RainbowTeam* aRainbowTeam[3];                                    //0
	INT i;                                                                    //0
	INT iNbTeam;                                                              //0
};
struct AR6PlayerController_execToggleSniperControl_Parms
{
	class AR6RainbowTeam* aRainbowTeam;                                       //0
	INT i;                                                                    //0
	INT iNbTeam;                                                              //0
};
struct AR6PlayerController_execToggleAllTeamsHold_Parms
{
	class AR6RainbowTeam* AITeam;                                             //0
};
struct AR6PlayerController_execToggleTeamHold_Parms
{
};
struct AR6PlayerController_execHandleFluidMovement_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	FLOAT fCrouchRate;                                                        //0
	FLOAT fPeekingRate;                                                       //0
	FLOAT fBlendAlpha;                                                        //0
};
struct AR6PlayerController_execResetFluidPeeking_Parms
{
};
struct AR6PlayerController_execUpdateRotation_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	FLOAT maxPitch;                                                           //CPF_Parm
	class FRotator rNewRotation;                                              //0
	class FRotator rViewRotation;                                             //0
	class FRotator rRotationOffset;                                           //0
	BITFIELD bBoneRotationIsDone : 1;                                         //0
	FLOAT fOffset;                                                            //0
	FLOAT fBipodRotationToAdd;                                                //0
	class AR6AbstractWeapon* AWeapon;                                         //0
};
struct AR6PlayerController_execServerSetPeekingInfoRight_Parms
{
	BYTE eMode;                                                               //CPF_Parm
	BYTE PackedPeekingRatio;                                                  //CPF_Parm
	FLOAT fPeekingRatio;                                                      //0
};
struct AR6PlayerController_execServerSetPeekingInfoLeft_Parms
{
	BYTE eMode;                                                               //CPF_Parm
	BYTE PackedPeekingRatio;                                                  //CPF_Parm
	FLOAT fPeekingRatio;                                                      //0
};
struct AR6PlayerController_execSetPeekingInfo_Parms
{
	BYTE eMode;                                                               //CPF_Parm
	FLOAT fPeekingRatio;                                                      //CPF_Parm
	BITFIELD bPeekLeft : 1;                                                   //CPF_Parm
	BYTE PackedPeekingRatio;                                                  //0
	FLOAT fNormalizedPeekingRatio;                                            //0
};
struct AR6PlayerController_execServerSetCrouchBlend_Parms
{
	FLOAT fCrouchBlend;                                                       //CPF_Parm
};
struct AR6PlayerController_eventSetCrouchBlend_Parms
{
	FLOAT fCrouchBlend;                                                       //CPF_Parm
};
struct AR6PlayerController_execPassedYawLimit_Parms
{
	class FRotator rRotationOffset;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execHandleDiagonalStrafing_Parms
{
};
struct AR6PlayerController_execAdjustViewYaw_Parms
{
	INT iYaw;                                                                 //CPF_Parm|CPF_OutParm
};
struct AR6PlayerController_execAdjustViewPitch_Parms
{
	INT iPitch;                                                               //CPF_Parm|CPF_OutParm
};
struct AR6PlayerController_execDirectionChanged_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eSDir;                                                               //0
};
struct AR6PlayerController_execCalcBehindView_Parms
{
	class FVector CameraLocation;                                             //CPF_Parm|CPF_OutParm
	class FRotator CameraRotation;                                            //CPF_Parm|CPF_OutParm
	FLOAT Dist;                                                               //CPF_Parm
	class FVector View;                                                       //0
	class FVector HitLocation;                                                //0
	class FVector HitNormal;                                                  //0
	FLOAT ViewDist;                                                           //0
};
struct AR6PlayerController_execWeaponBob_Parms
{
	FLOAT BobDamping;                                                         //CPF_Parm
	class FRotator BobRotation;                                               //CPF_Parm|CPF_OutParm
	class FVector bobOffset;                                                  //CPF_Parm|CPF_OutParm
};
struct AR6PlayerController_execCheckBob_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	FLOAT Speed2D;                                                            //CPF_Parm
	class FVector Y;                                                          //CPF_Parm
};
struct AR6PlayerController_execCalcFirstPersonView_Parms
{
	class FVector CameraLocation;                                             //CPF_Parm|CPF_OutParm
	class FRotator CameraRotation;                                            //CPF_Parm|CPF_OutParm
	class FRotator rAdjust;                                                   //0
	class FRotator rPitchOnly;                                                //0
};
struct AR6PlayerController_execCalcSmoothedRotation_Parms
{
	class FRotator rCurrent;                                                  //0
	INT iDesiredYaw;                                                          //0
	INT iDesiredPitch;                                                        //0
	INT iOldYaw;                                                              //0
	INT iOldPitch;                                                            //0
	INT iMaximum;                                                             //0
};
struct AR6PlayerController_execGetFacingDirection_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector X;                                                          //0
	class FVector Y;                                                          //0
	class FVector Z;                                                          //0
	class FVector Dir;                                                        //0
};
struct AR6PlayerController_execServerReloadWeapon_Parms
{
};
struct AR6PlayerController_execReloadWeapon_Parms
{
};
struct AR6PlayerController_eventRenderOverlays_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
};
struct AR6PlayerController_execDisplayMilestoneMessage_Parms
{
	INT iWhoReached;                                                          //CPF_Parm
	INT iMilestoneNumber;                                                     //CPF_Parm
	class AR6RainbowTeam* aRainbowTeam;                                       //0
	BYTE eVoices;                                                             //0
};
struct AR6PlayerController_execEndMatineeCamera_Parms
{
};
struct AR6PlayerController_execInitMatineeCamera_Parms
{
};
struct AR6PlayerController_eventPlayerTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
	INT _iPingTime;                                                           //0
};
struct AR6PlayerController_execSetEyeLocation_Parms
{
	class APawn* pViewTarget;                                                 //CPF_Parm
	FLOAT fDeltaTime;                                                         //CPF_Parm
	class FCoords cEyesPos;                                                   //0
};
struct AR6PlayerController_execR6Shake_Parms
{
	FLOAT fTime;                                                              //CPF_Parm
	FLOAT fMaxShake;                                                          //CPF_Parm
	FLOAT fMaxShakeTime;                                                      //CPF_Parm
};
struct AR6PlayerController_execUpdateWeatherEmitter_Parms
{
	INT i;                                                                    //0
	BITFIELD bInDoor : 1;                                                     //0
	class FVector vViewDirection;                                             //0
	class FVector vWeatherEmitterPos;                                         //0
	class AR6WeatherEmitter* WE;                                              //0
	class AZoneInfo* WZ;                                                      //0
};
struct AR6PlayerController_eventZoneChange_Parms
{
	class AZoneInfo* NewZone;                                                 //CPF_Parm
	INT i;                                                                    //0
};
struct AR6PlayerController_execServerActionKeyReleased_Parms
{
};
struct AR6PlayerController_execServerActionKeyPressed_Parms
{
};
struct AR6PlayerController_execRenderTimeLeft_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fStrSizeX;                                                          //0
	FLOAT fStrSizeY;                                                          //0
	INT X;                                                                    //0
	INT Y;                                                                    //0
	class FString sTime;                                                      //CPF_NeedCtorLink
	INT iTimeLeft;                                                            //0
};
struct AR6PlayerController_eventPostRender_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	INT iBlurValue;                                                           //0
	class AR6IOSelfDetonatingBomb* AIt;                                       //0
};
struct AR6PlayerController_execServerSetPlayerStartInfo_Parms
{
	class FString _armorName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _WeaponName0;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString _WeaponName1;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString _BulletName0;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString _BulletName1;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString _WeaponGadgetName0;                                         //CPF_Parm|CPF_NeedCtorLink
	class FString _WeaponGadgetName1;                                         //CPF_Parm|CPF_NeedCtorLink
	class FString _GadgetName0;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString _GadgetName1;                                               //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_execSetPlayerStartInfo_Parms
{
};
struct AR6PlayerController_execDestroyInteractions_Parms
{
};
struct AR6PlayerController_execInitInteractions_Parms
{
};
struct AR6PlayerController_eventTeamMessage_Parms
{
	class APlayerReplicationInfo* PRI;                                        //CPF_Parm
	class FString Msg;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FName MsgType;                                                            //CPF_Parm
	class AR6Pawn* Sender;                                                    //0
	class FString szGroup;                                                    //CPF_NeedCtorLink
	class FString szID;                                                       //CPF_NeedCtorLink
	INT pos;                                                                  //0
};
struct AR6PlayerController_execGetPrefixToMsg_Parms
{
	class APlayerReplicationInfo* PRI;                                        //CPF_Parm
	FName MsgType;                                                            //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szMsg;                                                      //CPF_NeedCtorLink
	class FString szLifeState;                                                //CPF_NeedCtorLink
	class FString szTeam;                                                     //CPF_NeedCtorLink
};
struct AR6PlayerController_execServerSetGender_Parms
{
	BITFIELD bIsFemale : 1;                                                   //CPF_Parm
};
struct AR6PlayerController_eventDestroyed_Parms
{
};
struct AR6PlayerController_execServerPlayRecordedMsg_Parms
{
	class FString Msg;                                                        //CPF_Parm|CPF_NeedCtorLink
	BYTE eRainbowVoices;                                                      //CPF_Parm
};
struct AR6PlayerController_execServerSetUbiID_Parms
{
	class FString _szUBIUserID;                                               //CPF_Parm|CPF_NeedCtorLink
};
struct AR6PlayerController_eventPostNetBeginPlay_Parms
{
};
struct AR6PlayerController_execHidePlanningActors_Parms
{
	class AR6AbstractInsertionZone* NavPoint;                                 //0
	class AR6AbstractExtractionZone* ExtZone;                                 //0
	class AR6ReferenceIcons* RefIco;                                          //0
	class AR6IORotatingDoor* RotDoor;                                         //0
	class FString szCurrentGameType;                                          //CPF_NeedCtorLink
	BITFIELD bInTraining : 1;                                                 //0
};
struct AR6PlayerController_execReplicateTriggerLagInfo_Parms
{
	BITFIELD _value : 1;                                                      //CPF_Parm
};
struct AR6PlayerController_execUpdateTriggerLagInfo_Parms
{
};
struct AR6PlayerController_eventPostBeginPlay_Parms
{
};
struct AR6PlayerController_execServerEndOfRoundDataSent_Parms
{
	class AController* _itController;                                         //0
	class AR6PlayerController* _playerController;                             //0
};
struct AR6PlayerController_eventClientNotifySendStartMatch_Parms
{
};
struct AR6PlayerController_eventClientNotifySendMatchResults_Parms
{
	class APlayerReplicationInfo* aPRI;                                       //0
};
struct AR6PlayerController_eventClientUpdateLadderStat_Parms
{
	class FString _UserUbiID;                                                 //CPF_Parm|CPF_NeedCtorLink
	INT _iKillStat;                                                           //CPF_Parm
	INT _iDeathStat;                                                          //CPF_Parm
	FLOAT fPlayTime;                                                          //CPF_Parm
};
struct AR6PlayerController_eventSetMatchResult_Parms
{
	class FString _UserUbiID;                                                 //CPF_Parm|CPF_NeedCtorLink
	INT iField;                                                               //CPF_Parm
	INT iValue;                                                               //CPF_Parm
};
struct AR6PlayerController_execSet1stWeaponDisplay_Parms
{
	BITFIELD bShowWeapon : 1;                                                 //CPF_Parm
};
struct AR6PlayerController_execShowWeapon_Parms
{
};
struct AR6PlayerController_execShouldDrawWeapon_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlayerController_execClientShowWeapon_Parms
{
};
struct AR6PlayerController_execClientHideReticule_Parms
{
	BITFIELD bNewReticuleValue : 1;                                           //CPF_Parm
};
struct AR6PlayerController_eventInitMultiPlayerOptions_Parms
{
};
struct AR6PlayerController_eventInitInputSystem_Parms
{
};

// *****************************************************************************
// AR6PlayerController (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlayerController : public APlayerController
{
public:
	BYTE m_bSpecialCrouch;                                                    //CPF_Input
	BYTE m_bSpeedUpDoor;                                                      //CPF_Input
	BYTE m_bPeekLeft;                                                         //CPF_Input
	BYTE m_bPeekRight;                                                        //CPF_Input
	BYTE m_bReloading;                                                        //CPF_Input
	BYTE m_bOldPeekLeft;                                                      //0
	BYTE m_bOldPeekRight;                                                     //0
	BYTE m_wAutoAim;                                                          //0
	BYTE m_bPlayerRun;                                                        //CPF_Input
	BYTE m_ePenaltyForKillingAPawn;                                           //0
	INT m_iDoorSpeed;                                                         //CPF_Config
	INT m_iFastDoorSpeed;                                                     //CPF_Config
	INT m_iFluidMovementSpeed;                                                //CPF_Config
	INT m_iSpeedLevels[3];                                                    //CPF_Edit
	INT m_iShakeBlurIntensity;                                                //0
	INT m_iReturnSpeed;                                                       //0
	INT m_iPitchReturn;                                                       //0
	INT m_iYawReturn;                                                         //0
	INT m_iSpectatorYaw;                                                      //0
	INT m_iSpectatorPitch;                                                    //0
	INT m_iPlayerCAProgress;                                                  //CPF_Net
	INT m_iTeamId;                                                            //0
	INT m_iVoteResult;                                                        //0
	INT m_iAdmin;                                                             //CPF_Net
	INT m_iBanPage;                                                           //0
	BITFIELD m_bHelmetCameraOn : 1;                                           //0
	BITFIELD m_bScopeZoom : 1;                                                //0
	BITFIELD m_bSniperMode : 1;                                               //0
	BITFIELD m_bShowFPWeapon : 1;                                             //0
	BITFIELD m_bShowHitLogs : 1;                                              //0
	BITFIELD m_bCircumstantialActionInProgress : 1;                           //0
	BITFIELD m_bAllTeamsHold : 1;                                             //0
	BITFIELD m_bFixCamera : 1;                                                //0
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD m_bShakeActive : 1;                                              //0
	BITFIELD m_bDisplayMilestoneMessage : 1;                                  //0
	BITFIELD m_bUseFirstPersonWeapon : 1;                                     //0
	BITFIELD m_bPlacedExplosive : 1;                                          //0
	BITFIELD m_bAttachCameraToEyes : 1;                                       //0
	BITFIELD m_bCameraGhost : 1;                                              //0
	BITFIELD m_bCameraFirstPerson : 1;                                        //0
	BITFIELD m_bCameraThirdPersonFixed : 1;                                   //0
	BITFIELD m_bCameraThirdPersonFree : 1;                                    //0
	BITFIELD m_bFadeToBlack : 1;                                              //0
	BITFIELD m_bSpectatorCameraTeamOnly : 1;                                  //0
	BITFIELD m_bSkipBeginState : 1;                                           //CPF_Net
	BITFIELD m_bPreventTeamMemberUse : 1;                                     //0
	BITFIELD m_bDisplayMessage : 1;                                           //0
	BITFIELD m_bEndOfRoundDataReceived : 1;                                   //0
	BITFIELD m_bInAnOptionsPage : 1;                                          //0
	BITFIELD m_bPawnInitialized : 1;                                          //0
	BITFIELD m_bCanChangeMember : 1;                                          //0
	BITFIELD m_bDisplayActionProgress : 1;                                    //0
	BITFIELD m_bAMenuIsDisplayed : 1;                                         //0
	BITFIELD m_bMatineeRunning : 1;                                           //0
	BITFIELD m_bHasAPenalty : 1;                                              //0
	BITFIELD m_bPenaltyBox : 1;                                               //0
	BITFIELD m_bRequestTKPopUp : 1;                                           //CPF_Net
	BITFIELD m_bProcessingRequestTKPopUp : 1;                                 //0
	BITFIELD m_bAlreadyPoppedTKPopUpBox : 1;                                  //0
	BITFIELD m_bPlayDeathMusic : 1;                                           //0
	BITFIELD m_bDeadAfterTeamSel : 1;                                         //0
	BITFIELD m_bShowCompleteHUD : 1;                                          //0
	BITFIELD m_bWantTriggerLag : 1;                                           //0
	BITFIELD m_bQuitToUpdateServerDisplayed : 1;                              //0
	BITFIELD m_bIsSecuringRainbow : 1;                                        //0
	BITFIELD m_bBombSearched : 1;                                             //0
	FLOAT m_fOxygeneLevel;                                                    //0
	FLOAT m_fCompteurFrameDetection;                                          //0
	FLOAT m_fTeamMoveToDistance;                                              //CPF_Config
	FLOAT m_fTimedBlurValue;                                                  //0
	FLOAT m_fBlurReturnTime;                                                  //0
	FLOAT m_fHitEffectTime;                                                   //0
	FLOAT m_fShakeTime;                                                       //0
	FLOAT m_fMaxShake;                                                        //0
	FLOAT m_fCurrentShake;                                                    //0
	FLOAT m_fMaxShakeTime;                                                    //0
	FLOAT m_fPostFluidMovementDelay;                                          //0
	FLOAT m_fRetLockPosX;                                                     //0
	FLOAT m_fRetLockPosY;                                                     //0
	FLOAT m_fCurrRetPosX;                                                     //0
	FLOAT m_fCurrRetPosY;                                                     //0
	FLOAT m_fRetLockTime;                                                     //0
	FLOAT m_fShakeReturnTime;                                                 //0
	FLOAT m_fDesignerSpeedFactor;                                             //0
	FLOAT m_fDesignerJumpFactor;                                              //0
	FLOAT m_fMilestoneMessageDuration;                                        //0
	FLOAT m_fMilestoneMessageLeft;                                            //0
	FLOAT m_fCurrentDeltaTime;                                                //0
	FLOAT LastDoorUpdateTime;                                                 //0
	FLOAT m_fLastUpdateServerCheckTime;                                       //0
	FLOAT m_fLastVoteTime;                                                    //0
	FLOAT m_fStartSurrenderTime;                                              //0
	class AR6Rainbow* m_pawn;                                                 //CPF_Net
	class AR6RainbowTeam* m_TeamManager;                                      //CPF_Net
	class AR6Pawn* m_targetedPawn;                                            //0
	class AR6CircumstantialActionQuery* m_CurrentCircumstantialAction;        //CPF_Net
	class AR6CircumstantialActionQuery* m_RequestedCircumstantialAction;      //0
	class AR6CircumstantialActionQuery* m_PlayerCurrentCA;                    //0
	class UInteractionMaster* m_InteractionMaster;                            //0
	class UR6InteractionCircumstantialAction* m_InteractionCA;                //0
	class UR6InteractionInventoryMnu* m_InteractionInventory;                 //0
	class AR6Rainbow* m_BackupTeamLeader;                                     //0
	class AActor* m_PrevViewTarget;                                           //0
	class ANavigationPoint* StartSpot;                                        //0
	class UR6GameMenuCom* m_MenuCommunication;                                //0
	class UR6GameOptions* m_GameOptions;                                      //0
	class AR6PlayerController* m_TeamKiller;                                  //0
	class USound* m_sndUpdateWritableMap;                                     //0
	class USound* m_sndDeathMusic;                                            //0
	class USound* m_sndMissionComplete;                                       //0
	class UR6CommonRainbowVoices* m_CommonPlayerVoicesMgr;                    //0
	class UR6AbstractGameService* m_GameService;                              //0
	class AR6IOSelfDetonatingBomb* m_pSelfDetonatingBomb;                     //0
	class AR6Pawn* m_pInteractingRainbow;                                     //0
	TArray<struct FstSoundPriorityPtr> m_PlayVoicesPriority;                  //CPF_NeedCtorLink
	class FRotator m_rHitRotation;                                            //0
	class FVector m_vAutoAimTarget;                                           //0
	class FVector m_vCameraLocation;                                          //0
	class FRotator m_rCameraRotation;                                         //0
	class FRotator m_rCurrentShakeRotation;                                   //CPF_Net
	class FRotator m_rTotalShake;                                             //0
	struct FSTImpactShake m_stImpactHit;                                      //CPF_Edit
	struct FSTImpactShake m_stImpactStun;                                     //CPF_Edit
	struct FSTImpactShake m_stImpactDazed;                                    //CPF_Edit
	struct FSTImpactShake m_stImpactKO;                                       //CPF_Edit
	class FVector m_vNewReturnValue;                                          //0
	class FRotator m_rLastBulletDirection;                                    //0
	class FVector m_vDefaultLocation;                                         //0
	class FVector m_vRequestedLocation;                                       //0
	class FColor m_SpectatorColor;                                            //0
	struct FSTBanPage m_BanPage;                                              //CPF_NeedCtorLink
	class FString m_szLastAdminPassword;                                      //CPF_Config|CPF_NeedCtorLink
	class FString m_szMileStoneMessage;                                       //CPF_NeedCtorLink
	class FString m_CharacterName;                                            //CPF_NeedCtorLink
	class FString m_szBanSearch;                                              //CPF_NeedCtorLink
	FLOAT m_fLastBroadcastTimeStamp;                                          //CPF_Transient
	FLOAT m_fPreviousBroadcastTimeStamp;                                      //CPF_Transient
	FLOAT m_fEndOfChatLockTime;                                               //CPF_Transient
	FLOAT m_fLastVoteEmoteTimeStamp;                                          //CPF_Transient
	virtual ~AR6PlayerController();
	virtual void Destroy();
	virtual INT Tick(FLOAT, enum ELevelTick);
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	virtual class AActor * GetTeamManager();
	virtual void UpdateCircumstantialAction();
	AR6PlayerController(class AR6PlayerController const &);
	AR6PlayerController();
	class FString GetLocKeyNameByActionKey(TCHAR const *);
	static void CDECL InternalConstructor(void *);
	INT PlayPriority(INT);
	void PlayVoicesPriority();
	class AActor * SelectActorForSound(class AR6SoundReplicationInfo *);
	static class UClass * CDECL StaticClass();
	void StopAndRemoveVoices(INT &);
	void UpdateReticule(FLOAT);
	void UpdateReticuleIdentification(class AActor *);
	void UpdateSpectatorReticule();
	void eventClientNotifySendMatchResults();
	void eventClientNotifySendStartMatch();
	void eventClientPlayVoices(class AR6SoundReplicationInfo *, class USound *, BYTE, INT, DWORD, FLOAT);
	void eventClientUpdateLadderStat(class FString const &, INT, INT, FLOAT);
	void eventClientVoteSessionAbort(class FString const &);
	FLOAT eventGetZoomMultiplyFactor(FLOAT);
	void eventPlayerTeamSelectionReceived();
	void eventPostRender(class UCanvas *);
	void eventSetCrouchBlend(FLOAT);
	void execDebugFunction(struct FFrame &, void * const);
	void execFindPlayer(struct FFrame &, void * const);
	void execGetLocStringWithActionKey(struct FFrame &, void * const);
	void execLocalizeTraining(struct FFrame &, void * const);
	void execPlayVoicesPriority(struct FFrame &, void * const);
	void execUpdateCircumstantialAction(struct FFrame &, void * const);
	void execUpdateReticule(struct FFrame &, void * const);
	void execUpdateSpectatorReticule(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6PlayerController & operator=(class AR6PlayerController const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6MatineeHostage_execMatineeDetach_Parms
{
};
struct AR6MatineeHostage_execMatineeAttach_Parms
{
};
struct AR6MatineeHostage_execSetAttachVar_Parms
{
	class AActor* AttachActor;                                                //CPF_Parm
	class FString StaticMeshTag;                                              //CPF_Parm|CPF_NeedCtorLink
	FName PawnTag;                                                            //CPF_Parm
};
struct AR6MatineeHostage_eventPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6MatineeHostage (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MatineeHostage : public AR6Hostage
{
public:
	BITFIELD m_bUseHostageTemplate : 1;                                       //CPF_Edit
	class UR6MatineeAttach* m_MatineeAttach;                                  //0
	class UClass* m_HostageTemplate;                                          //CPF_Edit
	virtual ~AR6MatineeHostage();
	AR6MatineeHostage(class AR6MatineeHostage const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6MatineeHostage & operator=(class AR6MatineeHostage const &);
protected:
	AR6MatineeHostage();
private:
	static class UClass PrivateStaticClass();
};
struct AR6MatineeRainbow_execMatineeDetach_Parms
{
};
struct AR6MatineeRainbow_execMatineeAttach_Parms
{
};
struct AR6MatineeRainbow_execSetAttachVar_Parms
{
	class AActor* AttachActor;                                                //CPF_Parm
	class FString StaticMeshTag;                                              //CPF_Parm|CPF_NeedCtorLink
	FName PawnTag;                                                            //CPF_Parm
};
struct AR6MatineeRainbow_execSetMovementPhysics_Parms
{
};
struct AR6MatineeRainbow_eventPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6MatineeRainbow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MatineeRainbow : public AR6Rainbow
{
public:
	BITFIELD m_bActivateGadget : 1;                                           //CPF_Edit
	BITFIELD m_bUseRainbowTemplate : 1;                                       //CPF_Edit
	class AR6RainbowAI* m_controller;                                         //0
	class UR6MatineeAttach* m_MatineeAttach;                                  //0
	class UClass* m_PrimaryWeapon;                                            //CPF_Edit
	class UClass* m_SecondaryWeapon;                                          //CPF_Edit
	class UClass* m_PrimaryGadget;                                            //CPF_Edit
	class UClass* m_SecondaryGadget;                                          //CPF_Edit
	class UClass* m_RainbowTemplate;                                          //CPF_Edit
	virtual ~AR6MatineeRainbow();
	AR6MatineeRainbow(class AR6MatineeRainbow const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6MatineeRainbow & operator=(class AR6MatineeRainbow const &);
protected:
	AR6MatineeRainbow();
private:
	static class UClass PrivateStaticClass();
};
struct AR6MatineeTerrorist_execMatineeDetach_Parms
{
};
struct AR6MatineeTerrorist_execMatineeAttach_Parms
{
};
struct AR6MatineeTerrorist_execSetAttachVar_Parms
{
	class AActor* AttachActor;                                                //CPF_Parm
	class FString StaticMeshTag;                                              //CPF_Parm|CPF_NeedCtorLink
	FName PawnTag;                                                            //CPF_Parm
};
struct AR6MatineeTerrorist_eventPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6MatineeTerrorist (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MatineeTerrorist : public AR6Terrorist
{
public:
	BITFIELD m_bUseTerroristTemplate : 1;                                     //CPF_Edit
	class UR6MatineeAttach* m_MatineeAttach;                                  //0
	class UClass* m_PrimaryWeapon;                                            //CPF_Edit
	class UClass* m_TerroristTemplate;                                        //CPF_Edit
	virtual ~AR6MatineeTerrorist();
	AR6MatineeTerrorist(class AR6MatineeTerrorist const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6MatineeTerrorist & operator=(class AR6MatineeTerrorist const &);
protected:
	AR6MatineeTerrorist();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6TeamMemberReplicationInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TeamMemberReplicationInfo : public AActor
{
public:
	BYTE m_RotationYaw;                                                       //CPF_Net
	BYTE m_BlinkCounter;                                                      //CPF_Net
	BYTE m_iTeamPosition;                                                     //CPF_Net
	BYTE m_eHealth;                                                           //CPF_Net
	BYTE m_BlinkCounterOld;                                                   //0
	INT m_iTeam;                                                              //CPF_Net
	INT m_iTeamId;                                                            //CPF_Net
	BITFIELD m_bIsPrimaryGadgetEmpty : 1;                                     //CPF_Net
	BITFIELD m_bIsSecondaryGadgetEmpty : 1;                                   //CPF_Net
	BITFIELD m_bIsPilot : 1;                                                  //CPF_Net
	BITFIELD m_bIsIntruder : 1;                                               //CPF_Net
	BITFIELD m_bHasFloppy : 1;                                                //CPF_Net
	FLOAT m_fLastCommunicationTime;                                           //0
	FLOAT m_fClientUpdateFrequency;                                           //0
	FLOAT m_fClientLastUpdate;                                                //0
	FLOAT m_fCompteurFrameDetection;                                          //CPF_Net
	class FVector m_Location;                                                 //CPF_Net
	class FString m_CharacterName;                                            //CPF_Net|CPF_NeedCtorLink
	class FString m_PrimaryWeapon;                                            //CPF_Net|CPF_NeedCtorLink
	class FString m_SecondaryWeapon;                                          //CPF_Net|CPF_NeedCtorLink
	class FString m_PrimaryGadget;                                            //CPF_Net|CPF_NeedCtorLink
	class FString m_SecondaryGadget;                                          //CPF_Net|CPF_NeedCtorLink
	virtual ~AR6TeamMemberReplicationInfo();
	virtual void TickSpecial(FLOAT);
	virtual INT IsNetRelevantFor(class APlayerController *, class AActor *, class FVector);
	AR6TeamMemberReplicationInfo(class AR6TeamMemberReplicationInfo const &);
	AR6TeamMemberReplicationInfo();
	static void CDECL InternalConstructor(void *);
	INT IsRelevantToTeamMember(class APawn *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6TeamMemberReplicationInfo & operator=(class AR6TeamMemberReplicationInfo const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6SoundReplicationInfo_execDestroyed_Parms
{
};
struct AR6SoundReplicationInfo_execPlayLocalWeaponSound_Parms
{
	BYTE EWeaponSound;                                                        //CPF_Parm
};
struct AR6SoundReplicationInfo_execStopWeaponSound_Parms
{
};
struct AR6SoundReplicationInfo_execPlayWeaponSound_Parms
{
	BYTE EWeaponSound;                                                        //CPF_Parm
};

// *****************************************************************************
// AR6SoundReplicationInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SoundReplicationInfo : public AActor
{
public:
	BYTE m_CurrentWeapon;                                                     //CPF_Net
	BYTE m_NewWeaponSound;                                                    //CPF_Net
	BYTE m_NewPawnState;                                                      //CPF_Net
	BYTE m_Material;                                                          //CPF_Net
	BYTE m_pawnState;                                                         //0
	BYTE m_TeamColor;                                                         //0
	BYTE m_GunSoundType;                                                      //0
	BYTE m_StatusOtherTeam;                                                   //0
	BYTE m_LastPlayedWeaponSound;                                             //0
	BITFIELD m_bInitialize : 1;                                               //0
	BITFIELD m_bLastSoundFullAuto : 1;                                        //0
	FLOAT m_fClientUpdateFrequency;                                           //0
	FLOAT m_fClientLastUpdate;                                                //0
	class AR6Pawn* m_pawnOwner;                                               //CPF_Net
	class AR6PawnReplicationInfo* m_PawnRepInfo;                              //CPF_Net
	class FVector m_Location;                                                 //CPF_Net
	virtual ~AR6SoundReplicationInfo();
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	virtual void TickSpecial(FLOAT);
	virtual INT IsNetRelevantFor(class APlayerController *, class AActor *, class FVector);
	AR6SoundReplicationInfo(class AR6SoundReplicationInfo const &);
	AR6SoundReplicationInfo();
	static void CDECL InternalConstructor(void *);
	void PlayWeaponSound(enum EWeaponSound, BYTE);
	static class UClass * CDECL StaticClass();
	void StopWeaponSound();
	void execPlayLocalWeaponSound(struct FFrame &, void * const);
	void execPlayWeaponSound(struct FFrame &, void * const);
	void execStopWeaponSound(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6SoundReplicationInfo & operator=(class AR6SoundReplicationInfo const &);
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// FSTSpring ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTSpring
{
public:
	INT iFirst;                                                           //0
	INT iSecond;                                                          //0
	FLOAT fMinSquared;                                                    //0
	FLOAT fMaxSquared;                                                    //0
};

// -----------------------------------------------------------------------------
// FSTParticle ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTParticle
{
public:
	class FCoords cCurrentPos;                                            //0
	class FVector vPreviousOrigin;                                        //0
	class FVector vBonePosition;                                          //0
	FLOAT fMass;                                                          //0
	INT iToward;                                                          //0
	INT iRefBone;                                                         //0
	FName BoneName;                                                       //0
};
struct AR6RagDoll_execRenderCorpseBones_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct AR6RagDoll_execTakeAHit_Parms
{
	INT iBone;                                                                //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
};

// *****************************************************************************
// AR6RagDoll (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6RagDoll : public AR6AbstractCorpse
{
public:
	FLOAT m_fAccumulatedTime;                                                 //0
	class AR6AbstractPawn* m_pawnOwner;                                       //0
	TArray<struct FSTSpring> m_aSpring;                                       //CPF_NeedCtorLink
	struct FSTParticle m_aParticle[16];                                       //0
	virtual ~AR6RagDoll();
	virtual INT Tick(FLOAT, enum ELevelTick);
	virtual void FirstInit(class AR6AbstractPawn *);
	virtual void RenderBones(class UCanvas *);
	virtual void AddImpulseToBone(INT, class FVector);
	AR6RagDoll(class AR6RagDoll const &);
	AR6RagDoll();
	void AddSpring(INT, INT, FLOAT, FLOAT);
	void ClipParticleToPlane(INT, class FVector const &, class FVector const &);
	void CollisionDetection();
	static void CDECL InternalConstructor(void *);
	void SatisfyConstraints();
	static class UClass * CDECL StaticClass();
	void VerletIntegration(FLOAT);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6RagDoll & operator=(class AR6RagDoll const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6SAHeartBeatJammer_execFirstPassReset_Parms
{
};

// *****************************************************************************
// AR6SAHeartBeatJammer (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SAHeartBeatJammer : public AR6GenericHB
{
public:
	virtual ~AR6SAHeartBeatJammer();
	AR6SAHeartBeatJammer(class AR6SAHeartBeatJammer const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6SAHeartBeatJammer & operator=(class AR6SAHeartBeatJammer const &);
protected:
	AR6SAHeartBeatJammer();
private:
	static class UClass PrivateStaticClass();
};
struct AR6FalseHeartBeat_eventProcessHeart_Parms
{
	FLOAT DeltaSeconds;                                                       //CPF_Parm
	FLOAT fMul1;                                                              //CPF_Parm|CPF_OutParm
	FLOAT fMul2;                                                              //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT Index;                                                                //0
	FLOAT fHeartBeatFrenquency;                                               //0
	FLOAT fRest;                                                              //0
	FLOAT fMul[2];                                                            //0
	BITFIELD bStartNewBeat : 1;                                               //0
};
struct AR6FalseHeartBeat_eventPostBeginPlay_Parms
{
};
struct AR6FalseHeartBeat_execFirstPassReset_Parms
{
};

// *****************************************************************************
// AR6FalseHeartBeat (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FalseHeartBeat : public AR6GenericHB
{
public:
	INT m_iNoCircleBeat;                                                      //0
	FLOAT m_fHeartBeatTime[2];                                                //0
	FLOAT m_fHeartBeatFrequency;                                              //0
	class APawn* m_HeartBeatPuckOwner;                                        //0
	virtual ~AR6FalseHeartBeat();
	virtual INT IsBlockedBy(class AActor const *) const;
	virtual INT ShouldTrace(class AActor *, DWORD);
	virtual INT IsRelevantToPawnHeartBeat(class APawn *);
	virtual INT IsRelevantToPawn(class APawn *);
	AR6FalseHeartBeat(class AR6FalseHeartBeat const &);
	AR6FalseHeartBeat();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6FalseHeartBeat & operator=(class AR6FalseHeartBeat const &);
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// FCommandInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FCommandInfo
{
public:
	FName m_functionName;                                                 //0
	class FString m_szDescription;                                        //CPF_NeedCtorLink
};
struct UR6CheatManager_execTerroSkill_Parms
{
	FLOAT fMul;                                                               //CPF_Parm
};
struct UR6CheatManager_execRainbowSkill_Parms
{
	FLOAT fMul;                                                               //CPF_Parm
};
struct UR6CheatManager_execAlkoliq_Parms
{
};
struct UR6CheatManager_execWalk_Parms
{
};
struct UR6CheatManager_execAbortMission_Parms
{
};
struct UR6CheatManager_execCompleteMission_Parms
{
};
struct UR6CheatManager_execGhost_Parms
{
};
struct UR6CheatManager_execDoGhost_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct UR6CheatManager_execDoWalk_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct UR6CheatManager_execAzimut_Parms
{
};
struct UR6CheatManager_execLogActors_Parms
{
};
struct UR6CheatManager_execNetLogServer_Parms
{
	class AActor* ActorIterator;                                              //0
};
struct UR6CheatManager_execLogBandWidth_Parms
{
	BITFIELD bLogBandWidth : 1;                                               //CPF_Parm
};
struct UR6CheatManager_execR6FreeCamera_Parms
{
};
struct UR6CheatManager_execR6FixCamera_Parms
{
};
struct UR6CheatManager_execUpdateBones_Parms
{
};
struct UR6CheatManager_execGetNetMode_Parms
{
};
struct UR6CheatManager_execArmor_Parms
{
	INT armorType;                                                            //CPF_Parm
};
struct UR6CheatManager_execR6Ladder_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6prone_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6crunbackstrafe_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6crun_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6cwalkbackstrafe_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6cwalk_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6runbackstrafe_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6run_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6walkbackstrafe_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execr6walk_Parms
{
	FLOAT speed;                                                              //CPF_Parm
};
struct UR6CheatManager_execKOValue_Parms
{
	INT iWhich;                                                               //CPF_Parm
	FLOAT fValue;                                                             //CPF_Parm
};
struct UR6CheatManager_execDazedValue_Parms
{
	INT iWhich;                                                               //CPF_Parm
	FLOAT fValue;                                                             //CPF_Parm
};
struct UR6CheatManager_execStunValue_Parms
{
	INT iWhich;                                                               //CPF_Parm
	FLOAT fValue;                                                             //CPF_Parm
};
struct UR6CheatManager_execHitValue_Parms
{
	INT iWhich;                                                               //CPF_Parm
	FLOAT fValue;                                                             //CPF_Parm
};
struct UR6CheatManager_execResetRainbow_Parms
{
};
struct UR6CheatManager_execPlayDare_Parms
{
	class FString SoundName;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6CheatManager_execMaxShakeTime_Parms
{
	FLOAT f;                                                                  //CPF_Parm
};
struct UR6CheatManager_execMaxShake_Parms
{
	FLOAT f;                                                                  //CPF_Parm
};
struct UR6CheatManager_execshaketime_Parms
{
	FLOAT fTime;                                                              //CPF_Parm
};
struct UR6CheatManager_execCallDebug_Parms
{
};
struct UR6CheatManager_execForceStunResult_Parms
{
	INT iStunResult;                                                          //CPF_Parm
};
struct UR6CheatManager_execForceKillResult_Parms
{
	INT iKillResult;                                                          //CPF_Parm
};
struct UR6CheatManager_execDbgPlayerStates_Parms
{
};
struct UR6CheatManager_execListEscort_Parms
{
	class AR6Rainbow* R;                                                      //0
	INT i;                                                                    //0
	FName szFollow;                                                           //0
};
struct UR6CheatManager_execlogAct_Parms
{
	INT iNb;                                                                  //CPF_Parm
	BITFIELD bNumber : 1;                                                     //CPF_Parm
};
struct UR6CheatManager_execlogActReset_Parms
{
};
struct UR6CheatManager_execGetActorsNb_Parms
{
	class UClass* ClassName;                                                  //CPF_Parm
	BITFIELD bNoLog : 1;                                                      //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class AActor* aActor;                                                     //0
};
struct UR6CheatManager_execGetNbRainbow_Parms
{
};
struct UR6CheatManager_execGetNbHostage_Parms
{
};
struct UR6CheatManager_execGetNbTerro_Parms
{
};
struct UR6CheatManager_execListActors_Parms
{
	class UClass* ClassName;                                                  //CPF_Parm
	BITFIELD bNumber : 1;                                                     //CPF_Parm
	INT iFrom;                                                                //CPF_Parm
	INT iMax;                                                                 //CPF_Parm
	INT i;                                                                    //0
	class AActor* aActor;                                                     //0
};
struct UR6CheatManager_execlistzone_Parms
{
	class AR6AbstractInsertionZone* aZone;                                    //0
};
struct UR6CheatManager_execToggleMissionLog_Parms
{
};
struct UR6CheatManager_execLogFriendship_Parms
{
	BITFIELD bCheckIfAlive : 1;                                               //CPF_Parm
	class APawn* p1;                                                          //0
	class APawn* p2;                                                          //0
	INT iFriends;                                                             //0
	INT iEnemy;                                                               //0
	INT iNeutrals;                                                            //0
};
struct UR6CheatManager_execLogFriendlyFire_Parms
{
	class AR6Pawn* p1;                                                        //0
	BITFIELD bAI : 1;                                                         //0
};
struct UR6CheatManager_execCheckFrienship_Parms
{
	class APawn* p1;                                                          //0
	class APawn* p2;                                                          //0
};
struct UR6CheatManager_execTestGetFrame_Parms
{
	class AR6Pawn* P;                                                         //0
};
struct UR6CheatManager_execToggleCollision_Parms
{
};
struct UR6CheatManager_execSetBetTime_Parms
{
	INT iSec;                                                                 //CPF_Parm
};
struct UR6CheatManager_execSetRoundTime_Parms
{
	INT iSec;                                                                 //CPF_Parm
};
struct UR6CheatManager_execRendFocus_Parms
{
};
struct UR6CheatManager_execRendPawnState_Parms
{
};
struct UR6CheatManager_execdisplayGameInfo_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT XPos;                                                                 //0
	INT YPos;                                                                 //0
	INT YL;                                                                   //0
	class AR6MissionObjectiveMgr* moMgr;                                      //0
	INT i;                                                                    //0
	INT iLine;                                                                //0
	BITFIELD bMoralityObj : 1;                                                //0
	INT iSubGroup;                                                            //0
	INT iDiffLevel;                                                           //0
};
struct UR6CheatManager_execdisplayMissionObjective_Parms
{
	INT iVerbose;                                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	INT YL;                                                                   //CPF_Parm
	INT XPos;                                                                 //CPF_Parm
	INT YPos;                                                                 //CPF_Parm|CPF_OutParm
	INT iLine;                                                                //CPF_Parm|CPF_OutParm
	class UR6MissionObjectiveBase* mo;                                        //CPF_Parm
	INT iSubGroup;                                                            //CPF_Parm|CPF_OutParm
	INT i;                                                                    //0
	INT iSubLine;                                                             //0
	class FString szIndent;                                                   //CPF_NeedCtorLink
	class FString szDesc;                                                     //CPF_NeedCtorLink
	class FString szDescID;                                                   //CPF_NeedCtorLink
	BITFIELD bDisplay : 1;                                                    //0
	BITFIELD bDisplayFailure : 1;                                             //0
};
struct UR6CheatManager_execShowGameInfo_Parms
{
	INT iLevel;                                                               //CPF_Parm
};
struct UR6CheatManager_execsgi_Parms
{
	INT iLevel;                                                               //CPF_Parm
};
struct UR6CheatManager_execprocessDebugPG_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	INT YPos;                                                                 //0
	INT YL;                                                                   //0
	class AR6Pawn* P;                                                         //0
	class AR6HostageAI* AI;                                                   //0
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execprocessThreatInfo_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	INT YPos;                                                                 //0
	INT YL;                                                                   //0
	class AR6Pawn* P;                                                         //0
	class AR6HostageAI* AI;                                                   //0
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execFullAmmo_Parms
{
	INT iWeaponIndex;                                                         //0
};
struct UR6CheatManager_execThor_Parms
{
};
struct UR6CheatManager_execregroupHostages_Parms
{
	INT Num;                                                                  //0
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execShowSkill_Parms
{
	FLOAT fMul;                                                               //CPF_Parm
};
struct UR6CheatManager_exectoggleThreatInfo_Parms
{
};
struct UR6CheatManager_execresetThreat_Parms
{
	class AR6HostageAI* AI;                                                   //0
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execprocessDebugPeek_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	INT YPos;                                                                 //0
	INT YL;                                                                   //0
	class AR6Pawn* P;                                                         //0
	class FString szPeek;                                                     //CPF_NeedCtorLink
	class FRotator rRotator;                                                  //0
};
struct UR6CheatManager_execdbgPeek_Parms
{
};
struct UR6CheatManager_execKillThemAll_Parms
{
	class AR6Pawn* P;                                                         //0
};
struct UR6CheatManager_execprocessNavDebug_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class AActor* Path;                                                       //0
	BITFIELD bFound : 1;                                                      //0
	class FString szName;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
	class FVector vLoc;                                                       //0
};
struct UR6CheatManager_exectoggleNav_Parms
{
};
struct UR6CheatManager_execResetMeAll_Parms
{
};
struct UR6CheatManager_execRotateMe_Parms
{
	FName BoneName;                                                           //CPF_Parm
	INT Pitch;                                                                //CPF_Parm
	INT Yaw;                                                                  //CPF_Parm
	INT Roll;                                                                 //CPF_Parm
	FLOAT InTime;                                                             //CPF_Parm
	class FRotator rOffset;                                                   //0
};
struct UR6CheatManager_execDrawRoute_Parms
{
	class AR6AIController* r6con;                                             //CPF_Parm
	class UCanvas* Canvas;                                                    //CPF_Parm
	INT i;                                                                    //0
	class FVector vTemp;                                                      //0
};
struct UR6CheatManager_exechWalkAnim_Parms
{
	INT i;                                                                    //CPF_Parm
};
struct UR6CheatManager_exechHurt_Parms
{
};
struct UR6CheatManager_exechFreeze_Parms
{
};
struct UR6CheatManager_exechReact_Parms
{
	INT iReact;                                                               //CPF_Parm
};
struct UR6CheatManager_exechGre_Parms
{
	INT iGrenade;                                                             //CPF_Parm
};
struct UR6CheatManager_exechPos_Parms
{
	INT iPos;                                                                 //CPF_Parm
	BYTE ePos;                                                                //0
};
struct UR6CheatManager_exechHostage_Parms
{
	INT iPos;                                                                 //CPF_Parm
};
struct UR6CheatManager_exechCiv_Parms
{
};
struct UR6CheatManager_exechInit_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iClosest;                                                             //0
	class AR6Hostage* H;                                                      //0
	class AR6Hostage* hostage;                                                //0
};
struct UR6CheatManager_exechLog_Parms
{
};
struct UR6CheatManager_exechReset_Parms
{
};
struct UR6CheatManager_exechDebugLog_Parms
{
	class FString sz;                                                         //CPF_Parm|CPF_NeedCtorLink
};
struct UR6CheatManager_exechHelp_Parms
{
};
struct UR6CheatManager_execDesignHBS_Parms
{
	FLOAT fRange;                                                             //CPF_Parm
};
struct UR6CheatManager_execDesignToggleLog_Parms
{
	class AR6Pawn* CurrentPawn;                                               //0
};
struct UR6CheatManager_execDesignArmor_Parms
{
	INT Light;                                                                //CPF_Parm
	INT Medium;                                                               //CPF_Parm
	INT Heavy;                                                                //CPF_Parm
	class AR6Pawn* CurrentPawn;                                               //0
};
struct UR6CheatManager_execDesignMaxRand_Parms
{
	INT NewMax;                                                               //CPF_Parm
	class AR6Pawn* CurrentPawn;                                               //0
};
struct UR6CheatManager_execSetShake_Parms
{
	BITFIELD bSet : 1;                                                        //CPF_Parm
};
struct UR6CheatManager_execDesignJF_Parms
{
	FLOAT NewJumpFactor;                                                      //CPF_Parm
};
struct UR6CheatManager_execDesignSF_Parms
{
	FLOAT NewSpeedFactor;                                                     //CPF_Parm
};
struct UR6CheatManager_execSetHRoll_Parms
{
	INT iRoll;                                                                //CPF_Parm
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execSetHPos_Parms
{
	INT iPos;                                                                 //CPF_Parm
	BYTE ePos;                                                                //0
};
struct UR6CheatManager_execSetCState_Parms
{
	FName stateToGo;                                                          //CPF_Parm
};
struct UR6CheatManager_execSetPState_Parms
{
	FName stateToGo;                                                          //CPF_Parm
};
struct UR6CheatManager_execMoveEscort_Parms
{
	class FVector vHit;                                                       //0
};
struct UR6CheatManager_execTestFindPathToMe_Parms
{
};
struct UR6CheatManager_execCanWalk_Parms
{
};
struct UR6CheatManager_execUsePath_Parms
{
	INT i;                                                                    //CPF_Parm
	BYTE ePace;                                                               //0
};
struct UR6CheatManager_execSeeCurPawn_Parms
{
};
struct UR6CheatManager_execSetPawnPace_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD bHelp : 1;                                                       //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString Text;                                                       //CPF_NeedCtorLink
};
struct UR6CheatManager_execSetPawn_Parms
{
	class AActor* anActor;                                                    //0
};
struct UR6CheatManager_execdbgTerro_Parms
{
	class AR6Terrorist* t;                                                    //0
	INT Num;                                                                  //0
};
struct UR6CheatManager_execdbgRainbow_Parms
{
	class AR6Rainbow* rb;                                                     //0
	INT Num;                                                                  //0
};
struct UR6CheatManager_execLogTerro_Parms
{
	class AR6Terrorist* t;                                                    //CPF_Parm
	class AR6TerroristAI* AI;                                                 //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6CheatManager_execLogIOBomb_Parms
{
	class AR6IOBomb* bomb;                                                    //CPF_Parm
};
struct UR6CheatManager_execLogRainbow_Parms
{
	class AR6Rainbow* rb;                                                     //CPF_Parm
};
struct UR6CheatManager_execdbgActor_Parms
{
	class AActor* A;                                                          //0
	INT Num;                                                                  //0
};
struct UR6CheatManager_execHSA_Parms
{
	INT Index;                                                                //CPF_Parm
};
struct UR6CheatManager_execHPA_Parms
{
};
struct UR6CheatManager_execHNA_Parms
{
};
struct UR6CheatManager_execHP_Parms
{
	BITFIELD bLoop : 1;                                                       //CPF_Parm
	class AR6Hostage* H;                                                      //0
	class AR6HostageAI* AI;                                                   //0
	struct FAnimInfo AnimInfo;                                                //0
	BITFIELD bFound : 1;                                                      //0
};
struct UR6CheatManager_execHLA_Parms
{
	struct FAnimInfo AnimInfo;                                                //0
	class AR6HostageMgr* mgr;                                                 //0
	INT i;                                                                    //0
};
struct UR6CheatManager_execHostageSetAnimIndex_Parms
{
	INT increment;                                                            //CPF_Parm
	class AR6Hostage* H;                                                      //0
	class AR6HostageAI* AI;                                                   //0
	class AR6HostageMgr* mgr;                                                 //0
	INT i;                                                                    //0
};
struct UR6CheatManager_execInitTestHostageAnim_Parms
{
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execDbgHostage_Parms
{
	INT Num;                                                                  //0
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execLogHostage_Parms
{
	class AR6Hostage* H;                                                      //CPF_Parm
	class AR6HostageAI* AI;                                                   //0
	INT i;                                                                    //0
	FName aiName;                                                             //0
	FName lastSeenPawnName;                                                   //0
	FName escortName;                                                         //0
	FName terroristName;                                                      //0
	class FVector vPlayerLoc;                                                 //0
	BITFIELD bFastTrace : 1;                                                  //0
	FName animSeq;                                                            //0
	FLOAT AnimRate;                                                           //0
	FLOAT AnimFrame;                                                          //0
};
struct UR6CheatManager_execLogR6Pawn_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
	class AController* AI;                                                    //0
	class AR6AIController* r6ai;                                              //0
	class AR6PlayerController* PController;                                   //0
	FName aiName;                                                             //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6CheatManager_execdbgEdit_Parms
{
	BITFIELD bTraceWorld : 1;                                                 //CPF_Parm
	class FString szCmd;                                                      //CPF_NeedCtorLink
	class AActor* anActor;                                                    //0
};
struct UR6CheatManager_execdbgThis_Parms
{
	BITFIELD bTraceWorld : 1;                                                 //CPF_Parm
	class AActor* anActor;                                                    //0
};
struct UR6CheatManager_eventLogThis_Parms
{
	BITFIELD bDontTraceActor : 1;                                             //CPF_Parm
	class AActor* anActor;                                                    //CPF_Parm
};
struct UR6CheatManager_execGetPointedActor_Parms
{
	BITFIELD bVerboseLog : 1;                                                 //CPF_Parm
	BITFIELD bTraceActor : 1;                                                 //CPF_Parm
	class FVector vReturnHit;                                                 //CPF_Parm|CPF_OutParm
	BITFIELD bForceTrace : 1;                                                 //CPF_Parm
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AActor* anActor;                                                    //0
	class FString szOutput;                                                   //CPF_NeedCtorLink
	class FString szController;                                               //CPF_NeedCtorLink
	class FVector vViewDir;                                                   //0
	class FVector vTraceStart;                                                //0
	class FVector vTraceEnd;                                                  //0
	class FVector vHit;                                                       //0
	class FVector vHitNormal;                                                 //0
};
struct UR6CheatManager_execGetNameOfActor_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6CheatManager_execToggleRainbowLog_Parms
{
	class AR6Rainbow* Rainbow;                                                //0
};
struct UR6CheatManager_execTerroInfo_Parms
{
};
struct UR6CheatManager_execRendSpot_Parms
{
};
struct UR6CheatManager_execToggleTerroLog_Parms
{
	class AR6Terrorist* t;                                                    //0
};
struct UR6CheatManager_execToggleHostageLog_Parms
{
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execToggleHostageThreat_Parms
{
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_eventPostRender_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	class AR6Pawn* P;                                                         //0
	class AR6AbstractCorpse* corpse;                                          //0
	class AR6AIController* C;                                                 //0
	class ANavigationPoint* np;                                               //0
	class AR6ActionSpot* as;                                                  //0
	class FVector vTemp;                                                      //0
	class AController* aController;                                           //0
};
struct UR6CheatManager_execToggleWalk_Parms
{
};
struct UR6CheatManager_execAutoSelect_Parms
{
	class FString _szSelection;                                               //CPF_Parm|CPF_NeedCtorLink
};
struct UR6CheatManager_execUseKarma_Parms
{
	class AR6Pawn* P;                                                         //0
};
struct UR6CheatManager_execCallTerro_Parms
{
	INT iGroup;                                                               //CPF_Parm
	class AR6TerroristAI* AI;                                                 //0
};
struct UR6CheatManager_execToggleHitLog_Parms
{
};
struct UR6CheatManager_execActorTick_Parms
{
	INT iTickFrequency;                                                       //CPF_Parm
	class AActor* A;                                                          //0
};
struct UR6CheatManager_exectTick_Parms
{
	INT iTickFrequency;                                                       //CPF_Parm
	class AR6Terrorist* t;                                                    //0
};
struct UR6CheatManager_exectAimedFire_Parms
{
	class AR6TerroristAI* t;                                                  //0
};
struct UR6CheatManager_exectSprayFire_Parms
{
	class AR6TerroristAI* t;                                                  //0
};
struct UR6CheatManager_exectSpeed_Parms
{
	FLOAT fSpeed;                                                             //CPF_Parm
	class AR6Terrorist* t;                                                    //0
};
struct UR6CheatManager_exectRunAway_Parms
{
	class AR6TerroristAI* t;                                                  //0
};
struct UR6CheatManager_exectSurrender_Parms
{
	class AR6TerroristAI* t;                                                  //0
};
struct UR6CheatManager_exectNoThreat_Parms
{
	class AR6TerroristAI* t;                                                  //0
};
struct UR6CheatManager_execToggleReticule_Parms
{
};
struct UR6CheatManager_execHideAll_Parms
{
};
struct UR6CheatManager_execGiveMag_Parms
{
	INT iNbOfExtraClips;                                                      //CPF_Parm
	INT iWeaponIndex;                                                         //0
};
struct UR6CheatManager_execDoPlayerInvisible_Parms
{
	BITFIELD bInvisible : 1;                                                  //CPF_Parm
	class AR6Terrorist* t;                                                    //0
};
struct UR6CheatManager_execPlayerInvisible_Parms
{
};
struct UR6CheatManager_execKillPawns_Parms
{
};
struct UR6CheatManager_execKillRainbow_Parms
{
};
struct UR6CheatManager_execKillRainbowTeam_Parms
{
	class AR6RainbowTeam* Team;                                               //0
	INT i;                                                                    //0
	BITFIELD bHuman : 1;                                                      //0
};
struct UR6CheatManager_execKillRagdoll_Parms
{
	class AR6Pawn* P;                                                         //0
};
struct UR6CheatManager_execKillHostage_Parms
{
};
struct UR6CheatManager_execKillTerro_Parms
{
};
struct UR6CheatManager_execDoAbortMission_Parms
{
	class AR6MissionObjectiveMgr* moMgr;                                      //0
};
struct UR6CheatManager_execDoCompleteMission_Parms
{
	class AR6MissionObjectiveMgr* moMgr;                                      //0
};
struct UR6CheatManager_execDisableMorality_Parms
{
	class AR6MissionObjectiveMgr* moMgr;                                      //0
	INT i;                                                                    //0
};
struct UR6CheatManager_execRescueHostage_Parms
{
	class AR6Hostage* H;                                                      //0
};
struct UR6CheatManager_execToggleObjectiveMgr_Parms
{
	class AR6MissionObjectiveMgr* moMgr;                                      //0
};
struct UR6CheatManager_execDeactivateIODevice_Parms
{
	class AR6IODevice* device;                                                //0
	INT i;                                                                    //0
};
struct UR6CheatManager_execDisarmBombs_Parms
{
	class AR6IOBomb* bomb;                                                    //0
	INT i;                                                                    //0
};
struct UR6CheatManager_execNeutralizeTerro_Parms
{
	class AR6Terrorist* t;                                                    //0
	INT i;                                                                    //0
};
struct UR6CheatManager_execPerfectAim_Parms
{
};
struct UR6CheatManager_execGodAll_Parms
{
};
struct UR6CheatManager_execGodHostage_Parms
{
};
struct UR6CheatManager_execGodTerro_Parms
{
};
struct UR6CheatManager_execGodTeam_Parms
{
};
struct UR6CheatManager_execGod_Parms
{
};
struct UR6CheatManager_execToggleUnlimitedPractice_Parms
{
	class AR6AbstractGameInfo* GameInfo;                                      //0
};
struct UR6CheatManager_execShowFOV_Parms
{
	class AR6Pawn* P;                                                         //0
};
struct UR6CheatManager_execRouteAll_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
};
struct UR6CheatManager_execNavPoint_Parms
{
};
struct UR6CheatManager_execRoute_Parms
{
};
struct UR6CheatManager_execViewDirection_Parms
{
};
struct UR6CheatManager_execGunDirection_Parms
{
};
struct UR6CheatManager_execBoneCorpse_Parms
{
};
struct UR6CheatManager_execToggleRadius_Parms
{
};
struct UR6CheatManager_execPhyStat_Parms
{
};
struct UR6CheatManager_execAddCommandInfo_Parms
{
	FName functionName;                                                       //CPF_Parm
	class FString szDescription;                                              //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UR6CheatManager_exechelp_Parms
{
	INT i;                                                                    //0
	class FString sz;                                                         //CPF_NeedCtorLink
	INT iSize;                                                                //0
	class FString szDot;                                                      //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6CheatManager (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6CheatManager : public UCheatManager
{
public:
	INT m_iHostageTestAnimIndex;                                              //0
	INT m_iGameInfoLevel;                                                     //0
	INT m_iCounterLog;                                                        //0
	INT m_iCounterLogMax;                                                     //0
	INT m_iCurNavPoint;                                                       //0
	INT m_iCommandInfoIndex;                                                  //0
	BITFIELD m_bRenderGunDirection : 1;                                       //0
	BITFIELD m_bRenderViewDirection : 1;                                      //0
	BITFIELD m_bRenderBoneCorpse : 1;                                         //0
	BITFIELD m_bRenderFOV : 1;                                                //0
	BITFIELD m_bRenderRoute : 1;                                              //0
	BITFIELD m_bRenderNavPoint : 1;                                           //0
	BITFIELD m_bToggleHostageLog : 1;                                         //0
	BITFIELD m_bToggleHostageThreat : 1;                                      //0
	BITFIELD m_bHostageTestAnim : 1;                                          //0
	BITFIELD m_bToggleTerroLog : 1;                                           //0
	BITFIELD m_bRendSpot : 1;                                                 //0
	BITFIELD m_bRendPawnState : 1;                                            //0
	BITFIELD m_bRendFocus : 1;                                                //0
	BITFIELD m_bToggleRainbowLog : 1;                                         //0
	BITFIELD m_bPlayerInvisble : 1;                                           //0
	BITFIELD m_bHideAll : 1;                                                  //0
	BITFIELD m_bTogglePeek : 1;                                               //0
	BITFIELD m_bTogglePGDebug : 1;                                            //0
	BITFIELD m_bToggleThreatInfo : 1;                                         //0
	BITFIELD m_bToggleGameInfo : 1;                                           //0
	BITFIELD m_bToggleMissionLog : 1;                                         //0
	BITFIELD m_bFirstPersonPlayerView : 1;                                    //0
	BITFIELD m_bTeamGodMode : 1;                                              //0
	BITFIELD m_bSkipTick : 1;                                                 //0
	BITFIELD m_bNumberLog : 1;                                                //0
	BITFIELD m_bEnableNavDebug : 1;                                           //0
	FLOAT m_fNavPointDistance;                                                //0
	class AR6Pawn* m_curPawn;                                                 //0
	class AR6Hostage* m_Hostage;                                              //0
	TArray<class FVector> m_aNavPointLocation;                                //CPF_NeedCtorLink
	struct FCommandInfo m_aCommandInfo[128];                                  //CPF_NeedCtorLink
};
struct AR6IOSelfDetonatingBomb_execPostRender2_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fStrSizeX;                                                          //0
	FLOAT fStrSizeY;                                                          //0
	INT X;                                                                    //0
	INT Y;                                                                    //0
	class FString sTime;                                                      //CPF_NeedCtorLink
};
struct AR6IOSelfDetonatingBomb_execPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fStrSizeX;                                                          //0
	FLOAT fStrSizeY;                                                          //0
	INT X;                                                                    //0
	INT Y;                                                                    //0
	class FString sTime;                                                      //CPF_NeedCtorLink
	INT iTimeLeft;                                                            //0
};
struct AR6IOSelfDetonatingBomb_execTimer_Parms
{
};
struct AR6IOSelfDetonatingBomb_execStartTimer_Parms
{
};

// *****************************************************************************
// AR6IOSelfDetonatingBomb (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IOSelfDetonatingBomb : public AR6IOBomb
{
public:
	FLOAT m_fSelfDetonationTime;                                              //CPF_Edit
	FLOAT m_fDefusedTimeMessage;                                              //0
};

enum eCircumstantialActionPerformer{
	 CACTION_Player=0
	,CACTION_Team=1
	,CACTION_TeamFromList=2
	,CACTION_TeamFromListZulu=3
};

// -----------------------------------------------------------------------------
// ActionProgress ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT ActionProgress
{
};
struct UR6InteractionCircumstantialAction_execDrawActionProgress_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fProgress;                                                          //CPF_Parm
	INT iItem;                                                                //0
	INT fDegreeProgress;                                                      //0
};
struct UR6InteractionCircumstantialAction_execDrawTeamActionMnu_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class AR6CircumstantialActionQuery* Query;                                //CPF_Parm
	class FString strAction;                                                  //CPF_NeedCtorLink
	INT iAction;                                                              //0
	FLOAT fPosX;                                                              //0
	FLOAT fPosY;                                                              //0
	class FColor TeamColor;                                                   //0
	FLOAT fTextSizeX;                                                         //0
	FLOAT fTextSizeY;                                                         //0
	FLOAT fScaleX;                                                            //0
	FLOAT fScaleY;                                                            //0
};
struct UR6InteractionCircumstantialAction_execSetPosAndDrawActionProgress_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FColor TeamColor;                                                   //0
	class UR6GameOptions* GameOptions;                                        //0
};
struct UR6InteractionCircumstantialAction_execDrawCircumstantialActionInfo_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class AR6CircumstantialActionQuery* Query;                                //0
	INT iMnuChoice;                                                           //0
	INT iSubMenu;                                                             //0
	BITFIELD bHasAction : 1;                                                  //0
	class FColor TeamColor;                                                   //0
	class UR6GameOptions* GameOptions;                                        //0
};
struct UR6InteractionCircumstantialAction_execDrawSpectatorReticule_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT X;                                                                    //0
	INT Y;                                                                    //0
	FLOAT fScale;                                                             //0
	FLOAT fStrSizeX;                                                          //0
	FLOAT fStrSizeY;                                                          //0
	class AR6Pawn* OtherPawn;                                                 //0
	class FString characterName;                                              //CPF_NeedCtorLink
};
struct UR6InteractionCircumstantialAction_execDrawDeadCircumstantialIcon_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FString szNextTeamMate;                                             //CPF_NeedCtorLink
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UR6InteractionCircumstantialAction_execDrawGotoSpectatorModeIcon_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6InteractionCircumstantialAction_execPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UR6GameOptions* GameOptions;                                        //0
};
struct UR6InteractionCircumstantialAction_execActionProgressDone_Parms
{
};
struct UR6InteractionCircumstantialAction_execActionProgressStop_Parms
{
};
struct UR6InteractionCircumstantialAction_execActionProgressStart_Parms
{
};
struct UR6InteractionCircumstantialAction_execPerformCircumstantialAction_Parms
{
	BYTE ePerformer;                                                          //CPF_Parm
};
struct UR6InteractionCircumstantialAction_execItemRightClicked_Parms
{
	INT iItem;                                                                //CPF_Parm
};
struct UR6InteractionCircumstantialAction_execItemClicked_Parms
{
	INT iItem;                                                                //CPF_Parm
};
struct UR6InteractionCircumstantialAction_execNoItemSelected_Parms
{
};
struct UR6InteractionCircumstantialAction_execSetMenuChoice_Parms
{
	INT iChoice;                                                              //CPF_Parm
};
struct UR6InteractionCircumstantialAction_execIsValidMenuChoice_Parms
{
	INT iChoice;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iSubMenuChoice;                                                       //0
};
struct UR6InteractionCircumstantialAction_execGotoSubMenu_Parms
{
};
struct UR6InteractionCircumstantialAction_execItemHasSubMenu_Parms
{
	INT iItem;                                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UR6InteractionCircumstantialAction_execCurrentItemHasSubMenu_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UR6InteractionCircumstantialAction_execMenuItemEnabled_Parms
{
	INT iItem;                                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bActionCanBeExecuted : 1;                                        //0
	INT iSubMenuChoice;                                                       //0
};
struct UR6InteractionCircumstantialAction_execActionKeyReleased_Parms
{
};
struct UR6InteractionCircumstantialAction_execActionKeyPressed_Parms
{
};
struct UR6InteractionCircumstantialAction_eventInitialized_Parms
{
};

// *****************************************************************************
// UR6InteractionCircumstantialAction (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractionCircumstantialAction : public UR6InteractionRoseDesVents
{
public:
	class UTexture* m_TexProgressCircle;                                      //0
	class UTexture* m_TexProgressItem;                                        //0
	class UTexture* m_TexFakeReticule;                                        //0
	class UFont* m_SmallFont_14pt;                                            //0
};
struct UR6InteractionInventoryMnu_execDrawInventoryMenu_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FString strWeapon[4];                                               //CPF_NeedCtorLink
	class FColor TextColor[4];                                                //0
	INT iWeapon;                                                              //0
	class AR6Rainbow* PlayerPawn;                                             //0
	class UTexture* weaponIcon;                                               //0
	FLOAT fPosX;                                                              //0
	FLOAT fPosY;                                                              //0
	FLOAT fTextSizeX;                                                         //0
	FLOAT fTextSizeY;                                                         //0
	FLOAT fScaleX;                                                            //0
	FLOAT fScaleY;                                                            //0
	BITFIELD bPrimaryGadgetSet : 1;                                           //0
	BITFIELD bSecondaryGadgetSet : 1;                                         //0
	class AR6EngineWeapon* pWeapon;                                           //0
};
struct UR6InteractionInventoryMnu_execPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6InteractionInventoryMnu_execItemClicked_Parms
{
	INT iItem;                                                                //CPF_Parm
};
struct UR6InteractionInventoryMnu_execSetMenuChoice_Parms
{
	INT iChoice;                                                              //CPF_Parm
};
struct UR6InteractionInventoryMnu_execIsValidMenuChoice_Parms
{
	INT iChoice;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6InteractionInventoryMnu_execActionKeyPressed_Parms
{
};

// *****************************************************************************
// UR6InteractionInventoryMnu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractionInventoryMnu : public UR6InteractionRoseDesVents
{
};
struct AR6CircumstantialActionQuery_execClientDisplayMenu_Parms
{
	BITFIELD bDisplay : 1;                                                    //CPF_Parm
};
struct AR6CircumstantialActionQuery_execClientPerformCircumstantialAction_Parms
{
};
struct AR6CircumstantialActionQuery_eventTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
	class AR6PlayerController* PlayerController;                              //0
};

// *****************************************************************************
// AR6CircumstantialActionQuery (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6CircumstantialActionQuery : public AR6AbstractCircumstantialActionQuery
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	BITFIELD m_bNeedsTick : 1;                                                //0
};
struct UR6RainbowMemberVoices_execPlayRainbowMemberVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eRainbowVoices;                                                      //CPF_Parm
};
struct UR6RainbowMemberVoices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6RainbowMemberVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RainbowMemberVoices : public UR6Voices
{
public:
	class USound* m_sndContact;                                               //0
	class USound* m_sndContactRear;                                           //0
	class USound* m_sndContactAndEngages;                                     //0
	class USound* m_sndContactRearAndEngages;                                 //0
	class USound* m_sndTeamRegroupOnLead;                                     //0
	class USound* m_sndTeamReformOnLead;                                      //0
	class USound* m_sndTeamReceiveOrder;                                      //0
	class USound* m_sndTeamOrderFromLeadNil;                                  //0
	class USound* m_sndNoMoreFrag;                                            //0
	class USound* m_sndNoMoreSmoke;                                           //0
	class USound* m_sndNoMoreGas;                                             //0
	class USound* m_sndNoMoreFlash;                                           //0
	class USound* m_sndOnLadder;                                              //0
	class USound* m_sndMemberDown;                                            //0
	class USound* m_sndAmmoOut;                                               //0
	class USound* m_sndFragNear;                                              //0
	class USound* m_sndEntersGasCloud;                                        //0
	class USound* m_sndTakingFire;                                            //0
	class USound* m_sndTeamHoldUp;                                            //0
	class USound* m_sndTeamMoveOut;                                           //0
	class USound* m_sndHostageFollow;                                         //0
	class USound* m_sndHostageStay;                                           //0
	class USound* m_sndHostageSafe;                                           //0
	class USound* m_sndHostageSecured;                                        //0
	class USound* m_sndRainbowHitRainbow;                                     //0
	class USound* m_sndRainbowHitHostage;                                     //0
	class USound* m_sndDoorReform;                                            //0
};
struct UR6RainbowPlayerVoices_execPlayRainbowPlayerVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eRainbowVoices;                                                      //CPF_Parm
};
struct UR6RainbowPlayerVoices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6RainbowPlayerVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RainbowPlayerVoices : public UR6Voices
{
public:
	class USound* m_sndTeamRegroup;                                           //0
	class USound* m_sndTeamMove;                                              //0
	class USound* m_sndTeamHold;                                              //0
	class USound* m_sndAllTeamsHold;                                          //0
	class USound* m_sndAllTeamsMove;                                          //0
	class USound* m_sndTeamMoveAndFrag;                                       //0
	class USound* m_sndTeamMoveAndGas;                                        //0
	class USound* m_sndTeamMoveAndSmoke;                                      //0
	class USound* m_sndTeamMoveAndFlash;                                      //0
	class USound* m_sndTeamOpenDoor;                                          //0
	class USound* m_sndTeamCloseDoor;                                         //0
	class USound* m_sndTeamOpenShudder;                                       //0
	class USound* m_sndTeamCloseShudder;                                      //0
	class USound* m_sndTeamOpenAndClear;                                      //0
	class USound* m_sndTeamOpenAndFrag;                                       //0
	class USound* m_sndTeamOpenAndGas;                                        //0
	class USound* m_sndTeamOpenAndSmoke;                                      //0
	class USound* m_sndTeamOpenAndFlash;                                      //0
	class USound* m_sndTeamOpenFragAndClear;                                  //0
	class USound* m_sndTeamOpenGasAndClear;                                   //0
	class USound* m_sndTeamOpenSmokeAndClear;                                 //0
	class USound* m_sndTeamOpenFlashAndClear;                                 //0
	class USound* m_sndTeamFragAndClear;                                      //0
	class USound* m_sndTeamGasAndClear;                                       //0
	class USound* m_sndTeamSmokeAndClear;                                     //0
	class USound* m_sndTeamFlashAndClear;                                     //0
	class USound* m_sndTeamUseLadder;                                         //0
	class USound* m_sndTeamSecureTerrorist;                                   //0
	class USound* m_sndTeamGoGetHostage;                                      //0
	class USound* m_sndTeamHostageStayPut;                                    //0
	class USound* m_sndTeamStatusReport;                                      //0
	class USound* m_sndTeamUseElectronic;                                     //0
	class USound* m_sndTeamUseDemolition;                                     //0
	class USound* m_sndAlphaGoCode;                                           //0
	class USound* m_sndBravoGoCode;                                           //0
	class USound* m_sndCharlieGoCode;                                         //0
	class USound* m_sndZuluGoCode;                                            //0
	class USound* m_sndOrderTeamWithGoCode;                                   //0
	class USound* m_sndHostageFollow;                                         //0
	class USound* m_sndHostageStay;                                           //0
	class USound* m_sndHostageSafe;                                           //0
	class USound* m_sndHostageSecured;                                        //0
	class USound* m_sndMemberDown;                                            //0
	class USound* m_sndSniperFree;                                            //0
	class USound* m_sndSniperHold;                                            //0
};
struct UR6MultiCommonVoices_execPlayMultiCommonVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eVoices;                                                             //CPF_Parm
};
struct UR6MultiCommonVoices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6MultiCommonVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MultiCommonVoices : public UR6Voices
{
public:
	class USound* m_sndFragThrow;                                             //0
	class USound* m_sndFlashThrow;                                            //0
	class USound* m_sndGasThrow;                                              //0
	class USound* m_sndSmokeThrow;                                            //0
	class USound* m_sndActivatingBomb;                                        //0
	class USound* m_sndBombActivated;                                         //0
	class USound* m_sndDeactivatingBomb;                                      //0
	class USound* m_sndBombDeactivated;                                       //0
};
struct UR6PreRecordedMsgVoices_execPlayRecordedMsgVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eRainbowVoices;                                                      //CPF_Parm
};
struct UR6PreRecordedMsgVoices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6PreRecordedMsgVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PreRecordedMsgVoices : public UR6Voices
{
public:
	TArray<class USound*> m_sndPreRecordedMsg;                                //CPF_NeedCtorLink
};
struct UR6PlayerInput_execCheckForDoubleClickMove_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE DoubleClickMove;                                                     //0
	BYTE OldDoubleClick;                                                      //0
};
struct UR6PlayerInput_eventPlayerInput_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct UR6PlayerInput_execUpdateMouseOptions_Parms
{
	INT iScaledSensitivity;                                                   //0
};

// *****************************************************************************
// UR6PlayerInput (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PlayerInput : public UPlayerInput
{
public:
	BITFIELD m_bIgnoreInput : 1;                                              //0
	BITFIELD m_bFluidMovement : 1;                                            //0
	BITFIELD m_bWasFluidMovement : 1;                                         //0
};

// *****************************************************************************
// AR6BloodSplatSmall (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BloodSplatSmall : public AR6BloodSplat
{
};
struct AR6ArmPatchGlow_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
	class APawn* OwnerPawn;                                                   //0
	class APawn* ViewPawn;                                                    //0
	class APlayerController* ViewActor;                                       //0
	class FCoords TempCoord;                                                  //0
	class FVector temp;                                                       //0
	class FRotator TempRot;                                                   //0
};

// *****************************************************************************
// AR6ArmPatchGlow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ArmPatchGlow : public AR6GlowLight
{
public:
	FLOAT m_fMatrixMul;                                                       //0
	FName m_AttachedBoneName;                                                 //0
};
struct AR6ShadowProjector_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct AR6ShadowProjector_eventUpdateShadow_Parms
{
};
struct AR6ShadowProjector_execPostBeginPlay_Parms
{
	class FRotator Dir;                                                       //0
};

// *****************************************************************************
// AR6ShadowProjector (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ShadowProjector : public AProjector
{
public:
	BITFIELD m_bAttached : 1;                                                 //0
};

// *****************************************************************************
// AR6GasMask (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GasMask : public AStaticMeshActor
{
};

// *****************************************************************************
// AR6NightVision (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6NightVision : public AStaticMeshActor
{
};

enum EThreatType{
	 THREAT_none=0
	,THREAT_friend=1
	,THREAT_sound=2
	,THREAT_surrender=3
	,THREAT_enemy=4
	,THREAT_underFire=5
	,THREAT_neutral=6
	,THREAT_misc=7
};
enum EAnimTransType{
	 eAnimTrans_none=0
	,eAnimTrans_animTransInfo=1
	,eAnimTrans_groupTransition=2
	,eAnimTrans_manual=3
};
enum EGroupAnimType{
	 eGroupAnim_none=0
	,eGroupAnim_transition=1
	,eGroupAnim_wait=2
	,eGroupAnim_reaction=3
};
enum EPlayAnimType{
	 ePlayType_Default=0
	,ePlayType_Random=1
};

// -----------------------------------------------------------------------------
// FThreatDefinition ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FThreatDefinition
{
public:
	FName m_groupName;                                                    //0
	class FString m_szName;                                               //CPF_NeedCtorLink
	BYTE m_eThreatType;                                                   //0
	BYTE m_eNoiseType;                                                    //0
	INT m_iThreatLevel;                                                   //0
	INT m_iCaringDistance;                                                //0
	FName m_considerThreat;                                               //0
};

// -----------------------------------------------------------------------------
// FAnimTransInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FAnimTransInfo
{
public:
	FName m_AIState;                                                      //0
	FName m_pawnState;                                                    //0
	FName m_sourceAnimName;                                               //0
	INT m_iSourceAnim;                                                    //0
	FName m_targetAnimName;                                               //0
	INT m_iTargetAnim;                                                    //0
	FLOAT m_fTime;                                                        //0
	FLOAT m_fTargetAnimRate;                                              //0
};

// -----------------------------------------------------------------------------
// FHstSndEventInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FHstSndEventInfo
{
public:
	INT m_iHstSndEvent;                                                   //0
	BYTE m_ePerso;                                                        //0
	BYTE m_eVoice;                                                        //0
};

// -----------------------------------------------------------------------------
// FReactionInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FReactionInfo
{
public:
	FName m_groupName;                                                    //0
	INT m_iThreatLevel;                                                   //0
	INT m_iChance;                                                        //0
	FName m_gotoState;                                                    //0
};
struct AR6HostageMgr_execInitSndEventInfo_Parms
{
	INT Index;                                                                //0
};
struct AR6HostageMgr_execInsertSndEventInfo_Parms
{
	INT Index;                                                                //CPF_Parm
	INT iSndEvent;                                                            //CPF_Parm
	BYTE ePerso;                                                              //CPF_Parm
	BYTE eVoice;                                                              //CPF_Parm
	FName A;                                                                  //0
};
struct AR6HostageMgr_execGetHostageSndEvent_Parms
{
	INT iSndEvent;                                                            //CPF_Parm
	class AR6Hostage* H;                                                      //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE ePerso;                                                              //0
	INT i;                                                                    //0
	BITFIELD bFound : 1;                                                      //0
};
struct AR6HostageMgr_execGetHostageVoices_Parms
{
	INT Index;                                                                //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageMgr_execValidMgr_Parms
{
	class AR6HostageAI* AI;                                                   //CPF_Parm
};
struct AR6HostageMgr_execGetReaction_Parms
{
	FName GroupName;                                                          //CPF_Parm
	INT iLevel;                                                               //CPF_Parm
	INT iRoll;                                                                //CPF_Parm
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD bFound : 1;                                                      //0
	FName stateName;                                                          //0
};
struct AR6HostageMgr_execInitReactionForClassicMissionCivilian_Parms
{
	class AR6Hostage* hostageDbg;                                             //0
	class AR6HostageAI* hostageAIDbg;                                         //0
	INT i;                                                                    //0
};
struct AR6HostageMgr_execInitReaction_Parms
{
	class AR6Hostage* hostageDbg;                                             //0
	class AR6HostageAI* hostageAIDbg;                                         //0
	INT i;                                                                    //0
};
struct AR6HostageMgr_execInitThreatDefinition_Parms
{
	class FString szName;                                                     //CPF_NeedCtorLink
	BYTE EThreatType;                                                         //0
	FName GroupName;                                                          //0
	INT i;                                                                    //0
	INT iNoiseType;                                                           //0
	INT iCaringDistance;                                                      //0
	INT iThreatLevel;                                                         //0
};
struct AR6HostageMgr_execInsertReaction_Parms
{
	FName GroupName;                                                          //CPF_Parm
	INT iLevel;                                                               //CPF_Parm
	INT iRoll;                                                                //CPF_Parm
	FName stateName;                                                          //CPF_Parm
};
struct AR6HostageMgr_execGetThreatInfoFromThreatSurrender_Parms
{
	class APawn* threat;                                                      //CPF_Parm
	struct FThreatInfo oThreatInfo;                                           //CPF_Parm|CPF_OutParm
};
struct AR6HostageMgr_execGetThreatInfoFromThreat_Parms
{
	FName threatGroupName;                                                    //CPF_Parm
	class AR6Hostage* hostage;                                                //CPF_Parm
	class AActor* threat;                                                     //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	struct FThreatInfo oThreatInfo;                                           //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bRealThreat : 1;                                                 //0
	INT i;                                                                    //0
	class FVector vDistance;                                                  //0
	FName threatClass;                                                        //0
	BITFIELD bCheckDistance : 1;                                              //0
	class AR6Pawn* aPawn;                                                     //0
};
struct AR6HostageMgr_execGetThreatName_Parms
{
	INT Index;                                                                //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6HostageMgr_execgetDefaulThreatInfo_Parms
{
	struct FThreatInfo ReturnValue;                                           //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FThreatInfo Info;                                                  //0
};
struct AR6HostageMgr_execGetThreatDefinition_Parms
{
	INT Index;                                                                //CPF_Parm
	struct FThreatDefinition oDefinition;                                     //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
};
struct AR6HostageMgr_execGetThreatInfoLog_Parms
{
	struct FThreatInfo Info;                                                  //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szOutput;                                                   //CPF_NeedCtorLink
	FName pawnName;                                                           //0
	FName ActorName;                                                          //0
	INT Index;                                                                //0
};
struct AR6HostageMgr_execInsertThreatDefinition_Parms
{
	FName GroupName;                                                          //CPF_Parm
	class FString szName;                                                     //CPF_Parm|CPF_NeedCtorLink
	BYTE EThreatType;                                                         //CPF_Parm
	BYTE ENoiseType;                                                          //CPF_Parm
	INT iThreatLevel;                                                         //CPF_Parm
	INT iCaringDistance;                                                      //CPF_Parm
	FName considerThreat;                                                     //CPF_Parm
};
struct AR6HostageMgr_execPostBeginPlay_Parms
{
};
struct AR6HostageMgr_execValidAnimInfo_Parms
{
	INT i;                                                                    //0
	INT j;                                                                    //0
	class FString playType;                                                   //CPF_NeedCtorLink
};
struct AR6HostageMgr_execInsertAnimInfo_Parms
{
	FName aName;                                                              //CPF_Parm
	INT ID;                                                                   //CPF_Parm|CPF_OutParm
	BYTE eGroupAnim;                                                          //CPF_Parm
	BYTE ePlayType;                                                           //CPF_Parm
	FLOAT fRate;                                                              //CPF_Parm
};
struct AR6HostageMgr_execGetAnimInfoSize_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageMgr_execGetAnimIndex_Parms
{
	FName animName;                                                           //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6HostageMgr_execGetAnimInfo_Parms
{
	INT ID;                                                                   //CPF_Parm
	struct FAnimInfo ReturnValue;                                             //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6HostageMgr_execGetAnimTransInfo_Parms
{
	FName sourceAnimName;                                                     //CPF_Parm
	INT iTargetAnim;                                                          //CPF_Parm
	struct FAnimTransInfo Info;                                               //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6HostageMgr_execGetAnimTransInfoLog_Parms
{
	struct FAnimTransInfo Info;                                               //CPF_Parm
	BYTE eType;                                                               //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szLog;                                                      //CPF_NeedCtorLink
	class FString szType;                                                     //CPF_NeedCtorLink
};
struct AR6HostageMgr_execInsertAnimTransInfo_Parms
{
	INT iSourceAnim;                                                          //CPF_Parm
	INT iTargetAnim;                                                          //CPF_Parm
	FName pawnState;                                                          //CPF_Parm
	FLOAT fTime;                                                              //CPF_Parm
};
struct AR6HostageMgr_execlogX_Parms
{
	class FString szText;                                                     //CPF_Parm|CPF_NeedCtorLink
	INT iSource;                                                              //CPF_Parm
	class FString szSource;                                                   //CPF_NeedCtorLink
	class FString Time;                                                       //CPF_NeedCtorLink
};

// *****************************************************************************
// AR6HostageMgr (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6HostageMgr : public AR6AbstractHostageMgr
{
public:
	INT c_iSurrenderRadius;                                                   //0
	INT c_iDetectUnderFireRadius;                                             //0
	INT c_iDetectThreatSound;                                                 //0
	INT c_iDetectGrenadeRadius;                                               //0
	INT c_ThreatLevel_Surrender;                                              //0
	INT ANIM_eBlinded;                                                        //0
	INT ANIM_eCrouchToProne;                                                  //0
	INT ANIM_eCrouchToScaredStand;                                            //0
	INT ANIM_eCrouchWait01;                                                   //0
	INT ANIM_eCrouchWait02;                                                   //0
	INT ANIM_eCrouchWalkBack;                                                 //0
	INT ANIM_eFoetusToCrouch;                                                 //0
	INT ANIM_eFoetusToKneel;                                                  //0
	INT ANIM_eFoetusToProne;                                                  //0
	INT ANIM_eFoetusToStand;                                                  //0
	INT ANIM_eFoetusWait01;                                                   //0
	INT ANIM_eFoetusWait02;                                                   //0
	INT ANIM_eFoetus_nt;                                                      //0
	INT ANIM_eGazed;                                                          //0
	INT ANIM_eKneelFreeze;                                                    //0
	INT ANIM_eKneelReact01;                                                   //0
	INT ANIM_eKneelReact02;                                                   //0
	INT ANIM_eKneelReact03;                                                   //0
	INT ANIM_eKneelToCrouch;                                                  //0
	INT ANIM_eKneelToFoetus;                                                  //0
	INT ANIM_eKneelToProne;                                                   //0
	INT ANIM_eKneelToStand;                                                   //0
	INT ANIM_eKneelWait01;                                                    //0
	INT ANIM_eKneelWait02;                                                    //0
	INT ANIM_eKneelWait03;                                                    //0
	INT ANIM_eKneel_nt;                                                       //0
	INT ANIM_eScaredStandWait01;                                              //0
	INT ANIM_eScaredStandWait02;                                              //0
	INT ANIM_eScaredStand_nt;                                                 //0
	INT ANIM_eStandHandUpFreeze;                                              //0
	INT ANIM_eStandHandUpReact01;                                             //0
	INT ANIM_eStandHandUpReact02;                                             //0
	INT ANIM_eStandHandUpReact03;                                             //0
	INT ANIM_eStandHandUpToDown;                                              //0
	INT ANIM_eStandHandDownToUp;                                              //0
	INT ANIM_eStandHandUpWait01;                                              //0
	INT ANIM_eStandToFoetus;                                                  //0
	INT ANIM_eStandToKneel;                                                   //0
	INT ANIM_eStandWaitCough;                                                 //0
	INT ANIM_eStandWaitShiftWeight;                                           //0
	INT ANIM_eProneToCrouch;                                                  //0
	INT ANIM_eProneWaitBreathe;                                               //0
	INT ANIM_eMAX;                                                            //0
	INT m_iThreatDefinitionIndex;                                             //0
	INT m_iReactionIndex;                                                     //0
	INT m_iAnimTransIndex;                                                    //0
	BITFIELD bShowLog : 1;                                                    //0
	FName c_ThreatGroup_Civ;                                                  //0
	FName c_ThreatGroup_HstFreed;                                             //0
	FName c_ThreatGroup_HstGuarded;                                           //0
	FName c_ThreatGroup_HstBait;                                              //0
	FName c_ThreatGroup_HstEscorted;                                          //0
	FName m_noReactionName;                                                   //0
	struct FHstSndEventInfo m_aHstSndEventInfo[24];                           //0
	struct FAnimInfo m_aAnimInfo[40];                                         //0
	struct FThreatDefinition m_aThreatDefinition[27];                         //CPF_NeedCtorLink
	struct FReactionInfo m_aReactions[24];                                    //0
	struct FAnimTransInfo m_aAnimTransInfo[32];                               //0
};
struct AR6IODevice_execGetTimeRequired_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fPlantingTime;                                                      //0
};
struct AR6IODevice_execGetMaxTimeRequired_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IODevice_execHasKit_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IODevice_execToggleDevice_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	INT iSkinCount;                                                           //0
};
struct AR6IODevice_execR6GetCircumstantialActionString_Parms
{
	INT iAction;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6IODevice_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	BITFIELD bDisplayBombIcon : 1;                                            //0
	class FVector vActorDir;                                                  //0
	class FVector vFacingDir;                                                 //0
};
struct AR6IODevice_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6IODevice (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IODevice : public AR6IOObject
{
public:
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	FLOAT m_fPlantTimeMin;                                                    //CPF_Edit
	FLOAT m_fPlantTimeMax;                                                    //CPF_Edit
	class UTexture* m_InteractionIcon;                                        //CPF_Edit
	class USound* m_PhoneBuggingSnd;                                          //0
	class USound* m_PhoneBuggingStopSnd;                                      //0
	TArray<class UMaterial*> m_ArmedTextures;                                 //CPF_Edit|CPF_NeedCtorLink
	class FVector m_vOffset;                                                  //0
};
struct AR6THeadAttachment_execSetAttachmentStaticMesh_Parms
{
	BYTE eAttType;                                                            //CPF_Parm
	BYTE eTerro;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iNbChoice;                                                            //0
	class FString aMesh[10];                                                  //CPF_NeedCtorLink
	class UStaticMesh* sm;                                                    //0
};

// *****************************************************************************
// AR6THeadAttachment (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6THeadAttachment : public AStaticMeshActor
{
};

// *****************************************************************************
// AR6LadderCollision (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6LadderCollision : public AActor
{
};
struct UR6InteractiveObjectActionLoopRandomAnim_execGetNextAnim_Parms
{
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UR6InteractiveObjectActionLoopRandomAnim (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractiveObjectActionLoopRandomAnim : public UR6InteractiveObjectAction
{
public:
	TArray<FName> m_aAnimName;                                                //CPF_Edit|CPF_NeedCtorLink|CPF_0x04000000
};

// *****************************************************************************
// UR6InteractiveObjectActionLoopAnim (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractiveObjectActionLoopAnim : public UR6InteractiveObjectActionPlayAnim
{
public:
	class FRange m_LoopTime;                                                  //CPF_Edit
};

// *****************************************************************************
// UR6InteractiveObjectActionToggleDevice (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractiveObjectActionToggleDevice : public UR6InteractiveObjectAction
{
public:
	class AR6IODevice* m_iodevice;                                            //CPF_Edit
	TArray<class AR6IOBomb*> m_aIOBombs;                                      //CPF_Edit|CPF_NeedCtorLink|CPF_0x04000000
};

// *****************************************************************************
// UR6InteractiveObjectActionGoto (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractiveObjectActionGoto : public UR6InteractiveObjectAction
{
public:
	class AActor* m_Target;                                                   //CPF_Edit
};

// *****************************************************************************
// UR6InteractiveObjectActionLookAt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6InteractiveObjectActionLookAt : public UR6InteractiveObjectAction
{
public:
	class AActor* m_Target;                                                   //CPF_Edit
};
struct AR6GrenadeDecal_execPostBeginPlay_Parms
{
	class FRotator DecalRot;                                                  //0
};

// *****************************************************************************
// AR6GrenadeDecal (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GrenadeDecal : public AR6DecalsBase
{
public:
	class UTexture* m_GrenadeDecalTexture;                                    //0
};
struct UR6HostageVoicesFemaleFrench_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesFemaleFrench (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesFemaleFrench : public UR6HostageVoices
{
};
struct UR6HostageVoicesFemaleBritish_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesFemaleBritish (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesFemaleBritish : public UR6HostageVoices
{
};
struct UR6HostageVoicesFemaleSpanish_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesFemaleSpanish (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesFemaleSpanish : public UR6HostageVoices
{
};
struct UR6HostageVoicesFemaleNorwegian_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesFemaleNorwegian (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesFemaleNorwegian : public UR6HostageVoices
{
};
struct UR6HostageVoicesFemalePortuguese_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesFemalePortuguese (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesFemalePortuguese : public UR6HostageVoices
{
};
struct UR6HostageVoicesMaleFrench_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesMaleFrench (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesMaleFrench : public UR6HostageVoices
{
};
struct UR6HostageVoicesMaleBritish_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesMaleBritish (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesMaleBritish : public UR6HostageVoices
{
};
struct UR6HostageVoicesMaleSpanish_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesMaleSpanish (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesMaleSpanish : public UR6HostageVoices
{
};
struct UR6HostageVoicesMaleNorwegian_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesMaleNorwegian (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesMaleNorwegian : public UR6HostageVoices
{
};
struct UR6HostageVoicesMalePortuguese_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6HostageVoicesMalePortuguese (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HostageVoicesMalePortuguese : public UR6HostageVoices
{
};
struct UR6TerroristVoicesSpanish1_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6TerroristVoicesSpanish1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6TerroristVoicesSpanish1 : public UR6TerroristVoices
{
};
struct UR6TerroristVoicesSpanish2_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6TerroristVoicesSpanish2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6TerroristVoicesSpanish2 : public UR6TerroristVoices
{
};
struct UR6TerroristVoicesGerman1_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6TerroristVoicesGerman1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6TerroristVoicesGerman1 : public UR6TerroristVoices
{
};
struct UR6TerroristVoicesGerman2_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6TerroristVoicesGerman2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6TerroristVoicesGerman2 : public UR6TerroristVoices
{
};
struct UR6TerroristVoicesPortuguese_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6TerroristVoicesPortuguese (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6TerroristVoicesPortuguese : public UR6TerroristVoices
{
};
struct UR6RainbowOtherTeamVoices1_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6RainbowOtherTeamVoices1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RainbowOtherTeamVoices1 : public UR6RainbowOtherTeamVoices
{
};
struct UR6RainbowOtherTeamVoices2_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6RainbowOtherTeamVoices2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RainbowOtherTeamVoices2 : public UR6RainbowOtherTeamVoices
{
};
struct UR6CommonRainbowMemberVoices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6CommonRainbowMemberVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6CommonRainbowMemberVoices : public UR6CommonRainbowVoices
{
};

// *****************************************************************************
// UR6CommonRainbowPlayerVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6CommonRainbowPlayerVoices : public UR6CommonRainbowVoices
{
};
struct UR6MultiCoopMemberVoices_execPlayRainbowTeamVoices_Parms
{
	class AR6Pawn* aPawn;                                                     //CPF_Parm
	BYTE eVoices;                                                             //CPF_Parm
};
struct UR6MultiCoopMemberVoices_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6MultiCoopMemberVoices (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MultiCoopMemberVoices : public UR6MultiCoopVoices
{
public:
	class USound* m_sndGasThreat;                                             //0
	class USound* m_sndGrenadeThreat;                                         //0
};
struct UR6MultiCoopPlayerVoices1_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6MultiCoopPlayerVoices1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MultiCoopPlayerVoices1 : public UR6MultiCoopVoices
{
};
struct UR6MultiCoopPlayerVoices2_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6MultiCoopPlayerVoices2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MultiCoopPlayerVoices2 : public UR6MultiCoopVoices
{
};
struct UR6MultiCoopPlayerVoices3_execInit_Parms
{
	class AActor* aActor;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6MultiCoopPlayerVoices3 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MultiCoopPlayerVoices3 : public UR6MultiCoopVoices
{
};

// *****************************************************************************
// AR6DoorLockedIcon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DoorLockedIcon : public AR6ReferenceIcons
{
};

// *****************************************************************************
// AR6DoorIcon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DoorIcon : public AR6ReferenceIcons
{
};

enum EOpeningSide{
	 Top=0
	,Bottom=1
	,Left=2
	,Right=3
};
enum eWindowCircumstantialAction{
	 CA_None=0
	,CA_Open=1
	,CA_Close=2
	,CA_Climb=3
	,CA_Grenade=4
	,CA_OpenAndGrenade=5
	,CA_GrenadeFrag=6
	,CA_GrenadeGas=7
	,CA_GrenadeFlash=8
	,CA_GrenadeSmoke=9
};
struct AR6IOSlidingWindow_execR6FillGrenadeSubAction_Parms
{
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	INT iSubMenu;                                                             //CPF_Parm
	class APlayerController* PlayerController;                                //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct AR6IOSlidingWindow_eventR6QueryCircumstantialAction_Parms
{
	FLOAT fDistance;                                                          //CPF_Parm
	class AR6AbstractCircumstantialActionQuery* Query;                        //CPF_Parm|CPF_OutParm
	class APlayerController* PlayerController;                                //CPF_Parm
	BITFIELD bIsOpen : 1;                                                     //0
};
struct AR6IOSlidingWindow_execendAction_Parms
{
};
struct AR6IOSlidingWindow_execupdateAction_Parms
{
	FLOAT fDeltaMouse;                                                        //CPF_Parm
	class AActor* actionInstigator;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vNewLocation;                                               //0
	class FVector vX;                                                         //0
	class FVector vY;                                                         //0
	class FVector vZ;                                                         //0
	FLOAT fWindowMovement;                                                    //0
};
struct AR6IOSlidingWindow_execstartAction_Parms
{
	FLOAT fDeltaMouse;                                                        //CPF_Parm
	class AActor* actionInstigator;                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6IOSlidingWindow_execResetOriginalData_Parms
{
	class FVector vNewLocation;                                               //0
	class FVector vX;                                                         //0
	class FVector vY;                                                         //0
	class FVector vZ;                                                         //0
};
struct AR6IOSlidingWindow_execSaveOriginalData_Parms
{
};

// *****************************************************************************
// AR6IOSlidingWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6IOSlidingWindow : public AR6IActionObject
{
public:
	BYTE eOpening;                                                            //CPF_Edit
	INT m_iInitialOpening;                                                    //CPF_Edit
	INT sm_iInitialOpening;                                                   //0
	BITFIELD m_bIsWindowLocked : 1;                                           //CPF_Edit
	BITFIELD sm_bIsWindowLocked : 1;                                          //0
	BITFIELD m_bIsWindowClosed : 1;                                           //0
	FLOAT C_fWindowOpen;                                                      //0
	FLOAT m_iMaxOpening;                                                      //CPF_Edit
	FLOAT m_TotalMovement;                                                    //0
	class FVector sm_Location;                                                //0
};

// *****************************************************************************
// AR6TerroristIcon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TerroristIcon : public AR6ReferenceIcons
{
};

// *****************************************************************************
// AR6CameraSpot (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6CameraSpot : public AActor
{
};
struct AR6ExplodingBarel_execExplode_Parms
{
	class AR6GrenadeDecal* GrenadeDecal;                                      //0
	class FRotator GrenadeDecalRotation;                                      //0
	class ALight* pEffectLight;                                               //0
	class FVector vDecalLoc;                                                  //0
	FLOAT fDistFromBarel;                                                     //0
	class AActor* aActor;                                                     //0
	class AR6Pawn* pPawn;                                                     //0
	class AR6InteractiveObject* pIO;                                          //0
	class AR6PlayerController* pPC;                                           //0
	INT iKillResult;                                                          //0
};
struct AR6ExplodingBarel_execR6TakeDamage_Parms
{
	INT iKillValue;                                                           //CPF_Parm
	INT iStunValue;                                                           //CPF_Parm
	class APawn* instigatedBy;                                                //CPF_Parm
	class FVector vHitLocation;                                               //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
	INT iBulletToArmorModifier;                                               //CPF_Parm
	INT iBulletGroup;                                                         //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iDamage;                                                              //0
};

// *****************************************************************************
// AR6ExplodingBarel (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ExplodingBarel : public AR6InteractiveObject
{
public:
	INT m_iEnergy;                                                            //CPF_Edit
	FLOAT m_fExplosionRadius;                                                 //CPF_Edit
	FLOAT m_fKillBlastRadius;                                                 //CPF_Edit
	class AEmitter* m_pEmmiter;                                               //0
	class UClass* m_pExplosionLight;                                          //0
};

// =============================================================================
// R6Charts (Class From DLL)
// =============================================================================
class DLL_IMPORT R6Charts
{
public:
	INT BulletGoesThroughCharacter(INT, INT, INT, INT);
	struct stResultTable * GetKillTable(enum eBodyPart);
	struct stResultTable * GetStunTable(enum eBodyPart);
	R6Charts();
	static struct stBodyPart m_stKillChart();
	static struct stBodyPart m_stStunChart();
	class R6Charts & operator=(class R6Charts const &);
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
