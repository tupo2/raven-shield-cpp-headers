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
** Unreal native C++ headers for the R6Abstract package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6ABSTRACT_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(GetSkill)
AUTOGENERATE_NAME(R6MakeNoise)
AUTOGENERATE_NAME(SpawnSelectedGadget)
struct UR6AbstractGameService_execMyID_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6AbstractGameService_execCallNativeProcessIcmpPing_Parms
{
	class FString _ServerIpAddress;                                           //CPF_Parm|CPF_NeedCtorLink
	INT piPingTime;                                                           //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6AbstractGameService_execCallNativeSetMatchResult_Parms
{
	class FString szUbiUserID;                                                //CPF_Parm|CPF_NeedCtorLink
	INT iField;                                                               //CPF_Parm
	INT iValue;                                                               //CPF_Parm
};
struct UR6AbstractGameService_execNativeSubmitMatchResult_Parms
{
};

// *****************************************************************************
// UR6AbstractGameService (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6AbstractGameService : public UObject
{
public:
	BITFIELD m_bServerWaitMatchStartReply : 1;                                //0
	BITFIELD m_bClientWaitMatchStartReply : 1;                                //0
	BITFIELD m_bClientWillSubmitResult : 1;                                   //0
	BITFIELD m_bWaitSubmitMatchReply : 1;                                     //0
	BITFIELD m_bMSClientLobbyDisconnect : 1;                                  //0
	BITFIELD m_bMSClientRouterDisconnect : 1;                                 //0
	class APlayerController* m_LocalPlayerController;                         //0
	class FString m_szUserID;                                                 //CPF_Config|CPF_NeedCtorLink
	virtual ~UR6AbstractGameService();
	virtual void Created();
	virtual void DisconnectAllCDKeyPlayers();
	virtual void RequestGSCDKeyAuthID();
	virtual void ResetAuthId();
	virtual void ServerRoundFinish();
	virtual void SubmitMatchResult();
	void UnInitializeGSClientSPW();
	virtual INT GetGroupID();
	virtual INT GetLobbyID();
	virtual INT GetLoggedInUbiDotCom();
	virtual INT GetRegServerInitialized();
	virtual INT GetServerRegistered();
	virtual INT InitGSCDKey();
	virtual INT InitGSClient();
	virtual INT IsMSClientIsInRequest();
	virtual INT IsServerJoined();
	virtual INT MSCLientLeaveServer();
	virtual INT SetGSClientComInterface();
	virtual void GSClientPostMessage(BYTE);
	virtual void ProcessIsLobbyDisconnect(FLOAT *);
	virtual void ProcessIsRouterDisconnect(FLOAT *);
	virtual void ProcessJoinServer(FLOAT *);
	virtual void RequestModCDKeyProcess(INT);
	virtual void ServerRoundStart(INT);
	virtual void SetGSGameState(BYTE);
	virtual void SetGameServiceRequestState(BYTE);
	virtual void SetLoginRegServer(BYTE);
	virtual void SetOwnSvrPort(INT);
	virtual void SetRegServerLoginRequest(BYTE);
	virtual BYTE GetGSGameState();
	virtual BYTE GetLoginRegServer();
	virtual void CDKeyDisconnecUser(class FString);
	virtual void GameServiceManager(INT, INT, INT, INT);
	virtual void MasterServerManager(class AR6AbstractGameInfo *, class ALevelInfo *);
	virtual void ProcessLoginMasterSrv(INT, FLOAT *);
	virtual void ProcessUbiComJoinServer(INT, INT, class FString, FLOAT *);
	virtual class FString GetAuthID(INT);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6AbstractGameService(class UR6AbstractGameService const &);
	UR6AbstractGameService();
	void execNativeSubmitMatchResult(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6AbstractGameService & operator=(class UR6AbstractGameService const &);
private:
	static class UClass PrivateStaticClass();
};

enum PatchState{
	 PS_Unknown=0
	,PS_Initializing=1
	,PS_DownloadVersionFile=2
	,PS_SelectPatch=3
	,PS_DownloadPatch=4
	,PS_Terminate=5
	,PS_RunPatch=6
};
struct UR6AbstractEviLPatchService_execGetState_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UR6AbstractEviLPatchService (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6AbstractEviLPatchService : public UObject
{
public:
	virtual ~UR6AbstractEviLPatchService();
	static void CDECL InternalConstructor(void *);
	void SetFunctionPtr(DWORD (CDECL*)(void));
	static class UClass * CDECL StaticClass();
	UR6AbstractEviLPatchService(class UR6AbstractEviLPatchService const &);
	UR6AbstractEviLPatchService();
	void execGetState(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6AbstractEviLPatchService & operator=(class UR6AbstractEviLPatchService const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6AbstractHUD_execActivateNoDeathCameraMsg_Parms
{
	BITFIELD bToggleOn : 1;                                                   //CPF_Parm
};
struct AR6AbstractHUD_execUpdateHudFilter_Parms
{
};
struct AR6AbstractHUD_execStopFadeToBlack_Parms
{
};
struct AR6AbstractHUD_execStartFadeToBlack_Parms
{
	INT iSec;                                                                 //CPF_Parm
	INT iPercentageOfBlack;                                                   //CPF_Parm
};
struct AR6AbstractHUD_execCycleHUDLayer_Parms
{
};
struct AR6AbstractHUD_execToggleHelmet_Parms
{
};
struct AR6AbstractHUD_execGetGoCodeStr_Parms
{
	BYTE goCode;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6AbstractHUD_execGetRes_Parms
{
};
struct AR6AbstractHUD_execHUDRes_Parms
{
	class FString strRes;                                                     //CPF_Parm|CPF_NeedCtorLink
	INT iPos;                                                                 //0
	INT X;                                                                    //0
	INT Y;                                                                    //0
};
struct AR6AbstractHUD_execDrawTexturePart_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* Tex;                                                      //CPF_Parm
	FLOAT fUStart;                                                            //CPF_Parm
	FLOAT fVStart;                                                            //CPF_Parm
	FLOAT fSizeX;                                                             //CPF_Parm
	FLOAT fSizeY;                                                             //CPF_Parm
};
struct AR6AbstractHUD_execDrawTextCenteredInBox_Parms
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
struct AR6AbstractHUD_execPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};

// *****************************************************************************
// AR6AbstractHUD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractHUD : public AHUD
{
public:
	INT m_iCycleHUDLayer;                                                     //0
	BITFIELD m_bToggleHelmet : 1;                                             //0
	BITFIELD m_bGetRes : 1;                                                   //0
	FLOAT m_fNewHUDResX;                                                      //0
	FLOAT m_fNewHUDResY;                                                      //0
	class FString m_szStatusDetail;                                           //CPF_NeedCtorLink
	virtual ~AR6AbstractHUD();
	AR6AbstractHUD(class AR6AbstractHUD const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractHUD & operator=(class AR6AbstractHUD const &);
protected:
	AR6AbstractHUD();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6AbstractExtractionZone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractExtractionZone : public ANavigationPoint
{
public:
	virtual ~AR6AbstractExtractionZone();
	virtual void CheckForErrors();
	AR6AbstractExtractionZone(class AR6AbstractExtractionZone const &);
	AR6AbstractExtractionZone();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractExtractionZone & operator=(class AR6AbstractExtractionZone const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6AbstractInsertionZone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractInsertionZone : public APlayerStart
{
public:
	INT m_iInsertionNumber;                                                   //CPF_Edit
	virtual ~AR6AbstractInsertionZone();
	virtual void CheckForErrors();
	AR6AbstractInsertionZone(class AR6AbstractInsertionZone const &);
	AR6AbstractInsertionZone();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractInsertionZone & operator=(class AR6AbstractInsertionZone const &);
private:
	static class UClass PrivateStaticClass();
};
struct UR6AbstractNoiseMgr_execInit_Parms
{
};
struct UR6AbstractNoiseMgr_execR6MakePawnMovementNoise_Parms
{
	class AR6AbstractPawn* Pawn;                                              //CPF_Parm
};
struct UR6AbstractNoiseMgr_eventR6MakeNoise_Parms
{
	BYTE eType;                                                               //CPF_Parm
	class AActor* Source;                                                     //CPF_Parm
};

// *****************************************************************************
// UR6AbstractNoiseMgr (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6AbstractNoiseMgr : public UObject
{
public:
	virtual ~UR6AbstractNoiseMgr();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6AbstractNoiseMgr(class UR6AbstractNoiseMgr const &);
	void eventR6MakeNoise(BYTE, class AActor *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6AbstractNoiseMgr & operator=(class UR6AbstractNoiseMgr const &);
protected:
	UR6AbstractNoiseMgr();
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// Reloading ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Reloading
{
};
struct AR6AbstractFirstPersonWeapon_eventDestroyed_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execPostBeginPlay_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execDestroySM_Parms
{
	class AActor* aActor;                                                     //0
};
struct AR6AbstractFirstPersonWeapon_execPlayFireLastAnim_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execPlayFireAnim_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execHideBullet_Parms
{
	INT iWhichBullet;                                                         //CPF_Parm
};
struct AR6AbstractFirstPersonWeapon_execSetAssociatedWeapon_Parms
{
	class AR6AbstractFirstPersonWeapon* AWeapon;                              //CPF_Parm
};
struct AR6AbstractFirstPersonWeapon_execSwitchFPAnim_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execSwitchFPMesh_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execResetNeutralAnim_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execStopWalkingAnimation_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execPlayWalkingAnimation_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execStopWeaponBurst_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execLoopWeaponBurst_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execStartWeaponBurst_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execDestroyBullets_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execFireGrenadeRoll_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execFireGrenadeThrow_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execStartTimer_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execStopTimer_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execStartBurst_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execLoopBurst_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execFireThreeShots_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execFireSingleShot_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execFireLastBullet_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execFireEmpty_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execInterruptFiring_Parms
{
};
struct AR6AbstractFirstPersonWeapon_execStopFiring_Parms
{
};

// *****************************************************************************
// AR6AbstractFirstPersonWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractFirstPersonWeapon : public AR6EngineFirstPersonWeapon
{
public:
	BITFIELD m_bWeaponBipodDeployed : 1;                                      //0
	BITFIELD m_bReloadEmpty : 1;                                              //0
	class AActor* m_smGun;                                                    //0
	class AActor* m_smGun2;                                                   //0
	FName m_Empty;                                                            //CPF_Edit
	FName m_Fire;                                                             //CPF_Edit
	FName m_FireEmpty;                                                        //CPF_Edit
	FName m_FireLast;                                                         //CPF_Edit
	FName m_Neutral;                                                          //CPF_Edit
	FName m_Reload;                                                           //CPF_Edit
	FName m_ReloadEmpty;                                                      //CPF_Edit
	FName m_BipodRaise;                                                       //CPF_Edit
	FName m_BipodDeploy;                                                      //CPF_Edit
	FName m_BipodDiscard;                                                     //CPF_Edit
	FName m_BipodClose;                                                       //CPF_Edit
	FName m_BipodNeutral;                                                     //CPF_Edit
	FName m_BipodReload;                                                      //CPF_Edit
	FName m_BipodReloadEmpty;                                                 //CPF_Edit
	FName m_WeaponNeutralAnim;                                                //0
	virtual ~AR6AbstractFirstPersonWeapon();
	AR6AbstractFirstPersonWeapon(class AR6AbstractFirstPersonWeapon const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractFirstPersonWeapon & operator=(class AR6AbstractFirstPersonWeapon const &);
protected:
	AR6AbstractFirstPersonWeapon();
private:
	static class UClass PrivateStaticClass();
};
struct AR6AbstractGadget_execToggle3rdBipod_Parms
{
	BITFIELD bBipodOpen : 1;                                                  //CPF_Parm
};
struct AR6AbstractGadget_execGetGadgetMuzzleOffset_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGadget_execActivateGadget_Parms
{
	BITFIELD bActivate : 1;                                                   //CPF_Parm
	BITFIELD bControllerInBehindView : 1;                                     //CPF_Parm
};
struct AR6AbstractGadget_execDestroyFPGadget_Parms
{
};
struct AR6AbstractGadget_execAttachFPGadget_Parms
{
};
struct AR6AbstractGadget_execUpdateAttachment_Parms
{
	class AR6EngineWeapon* weapOwner;                                         //CPF_Parm
};
struct AR6AbstractGadget_execInitGadget_Parms
{
	class AR6EngineWeapon* OwnerWeapon;                                       //CPF_Parm
	class APawn* OwnerCharacter;                                              //CPF_Parm
};
struct AR6AbstractGadget_eventDestroyed_Parms
{
};

// *****************************************************************************
// AR6AbstractGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractGadget : public AActor
{
public:
	BYTE m_eGadgetType;                                                       //0
	class AR6EngineWeapon* m_WeaponOwner;                                     //0
	class APawn* m_OwnerCharacter;                                            //0
	FName m_AttachmentName;                                                   //0
	class FString m_NameID;                                                   //CPF_NeedCtorLink
	class FString m_GadgetName;                                               //CPF_NeedCtorLink
	class FString m_GadgetShortName;                                          //CPF_NeedCtorLink
	virtual ~AR6AbstractGadget();
	virtual INT * GetOptimizedRepList(BYTE *, struct FPropertyRetirement *, INT *, class UPackageMap *, class UActorChannel *);
	AR6AbstractGadget(class AR6AbstractGadget const &);
	AR6AbstractGadget();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractGadget & operator=(class AR6AbstractGadget const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6AbstractCorpse_execAddImpulseToBone_Parms
{
	INT iTracedBone;                                                          //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
};
struct AR6AbstractCorpse_execFirstInit_Parms
{
	class AR6AbstractPawn* pawnOwner;                                         //CPF_Parm
};
struct AR6AbstractCorpse_execRenderBones_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct AR6AbstractCorpse_execTakeAHit_Parms
{
	INT iBone;                                                                //CPF_Parm
	class FVector vMomentum;                                                  //CPF_Parm
};
struct AR6AbstractCorpse_execRenderCorpseBones_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};

// *****************************************************************************
// AR6AbstractCorpse (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractCorpse : public AActor
{
public:
	virtual ~AR6AbstractCorpse();
	virtual void FirstInit(class AR6AbstractPawn *);
	virtual void RenderBones(class UCanvas *);
	virtual void AddImpulseToBone(INT, class FVector);
	AR6AbstractCorpse(class AR6AbstractCorpse const &);
	AR6AbstractCorpse();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void execAddImpulseToBone(struct FFrame &, void * const);
	void execFirstInit(struct FFrame &, void * const);
	void execRenderBones(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractCorpse & operator=(class AR6AbstractCorpse const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6AbstractGameInfo_execGetIntelVideoName_Parms
{
	class UR6MissionDescription* Desc;                                        //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6AbstractGameInfo_execLogVoteInfo_Parms
{
};
struct AR6AbstractGameInfo_execSetUnlimitedPractice_Parms
{
	BITFIELD bUnlimitedPractice : 1;                                          //CPF_Parm
	BITFIELD bSendMsg : 1;                                                    //CPF_Parm
};
struct AR6AbstractGameInfo_execIsUnlimitedPractice_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execProcessPlayerReadyStatus_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execNotifyMatchStart_Parms
{
};
struct AR6AbstractGameInfo_execIncrementRoundsFired_Parms
{
	class APawn* Instigator;                                                  //CPF_Parm
	BITFIELD ForceIncrement : 1;                                              //CPF_Parm
};
struct AR6AbstractGameInfo_execPlayerReadySelected_Parms
{
	class APlayerController* _Controller;                                     //CPF_Parm
};
struct AR6AbstractGameInfo_execPostBeginPlay_Parms
{
};
struct AR6AbstractGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;                                     //CPF_Parm
	class FString Reason;                                                     //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execApplyTeamKillerPenalty_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6AbstractGameInfo_execSetTeamKillerPenalty_Parms
{
	class APawn* DeadPawn;                                                    //CPF_Parm
	class APawn* KillerPawn;                                                  //CPF_Parm
};
struct AR6AbstractGameInfo_execSetDefaultTeamFriendlies_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6AbstractGameInfo_execSetPawnTeamFriendlies_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6AbstractGameInfo_execRemoveController_Parms
{
	class AController* aPlayer;                                               //CPF_Parm
};
struct AR6AbstractGameInfo_execResetPlayerTeam_Parms
{
	class AController* aPlayer;                                               //CPF_Parm
};
struct AR6AbstractGameInfo_execTimerCountdown_Parms
{
};
struct AR6AbstractGameInfo_execIObjectDestroyed_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	class AActor* anInteractiveObject;                                        //CPF_Parm
};
struct AR6AbstractGameInfo_execIObjectInteract_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	class AActor* anInteractiveObject;                                        //CPF_Parm
};
struct AR6AbstractGameInfo_execLeftExtractionZone_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6AbstractGameInfo_execEnteredExtractionZone_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6AbstractGameInfo_execCompleteMission_Parms
{
};
struct AR6AbstractGameInfo_execAbortMission_Parms
{
};
struct AR6AbstractGameInfo_execEndGameAndJumpToMapID_Parms
{
	INT iGotoMapId;                                                           //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct AR6AbstractGameInfo_execBaseEndGame_Parms
{
};
struct AR6AbstractGameInfo_execGetGameMsgLifeTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetEndGamePauseTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execIsLastRoundOfTheMatch_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execPawnSecure_Parms
{
	class APawn* secured;                                                     //CPF_Parm
};
struct AR6AbstractGameInfo_execPawnHeard_Parms
{
	class APawn* heard;                                                       //CPF_Parm
	class APawn* witness;                                                     //CPF_Parm
};
struct AR6AbstractGameInfo_execPawnSeen_Parms
{
	class APawn* seen;                                                        //CPF_Parm
	class APawn* witness;                                                     //CPF_Parm
};
struct AR6AbstractGameInfo_execRemoveTerroFromList_Parms
{
	class APawn* toRemove;                                                    //CPF_Parm
};
struct AR6AbstractGameInfo_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
};
struct AR6AbstractGameInfo_execRemoveObjectives_Parms
{
};
struct AR6AbstractGameInfo_execInitObjectives_Parms
{
};
struct AR6AbstractGameInfo_execSpawnAIandInitGoInGame_Parms
{
};
struct AR6AbstractGameInfo_execFind2DTexture_Parms
{
	class FString TeamClass;                                                  //CPF_Parm|CPF_NeedCtorLink
	class UMaterial* MenuTexture;                                             //CPF_Parm|CPF_OutParm
	struct FRegion TextureRegion;                                             //CPF_Parm|CPF_OutParm
};
struct AR6AbstractGameInfo_execResetRepMissionObjectives_Parms
{
};
struct AR6AbstractGameInfo_execUpdateRepMissionObjectives_Parms
{
};
struct AR6AbstractGameInfo_execUpdateRepMissionObjectivesStatus_Parms
{
};
struct AR6AbstractGameInfo_execBroadcastMissionObjMsg_Parms
{
	class FString szLocMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szPreMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class USound* sndGameStatus;                                              //CPF_Parm
	INT iLifeTime;                                                            //CPF_Parm
};
struct AR6AbstractGameInfo_execCreateMissionObjectiveMgr_Parms
{
};
struct AR6AbstractGameInfo_execGetNbOfRainbowAIToSpawn_Parms
{
	class APlayerController* aController;                                     //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execRainbowOperativesStillAlive_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetRainbowAIFromTable_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execCanSwitchTeamMember_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execIsTeamSelectionLocked_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execStartTimer_Parms
{
};
struct AR6AbstractGameInfo_execUnPauseCountDown_Parms
{
};
struct AR6AbstractGameInfo_execPauseCountDown_Parms
{
};
struct AR6AbstractGameInfo_execUpdateRepResArrays_Parms
{
};
struct AR6AbstractGameInfo_execSetJumpingMaps_Parms
{
	BITFIELD _flagSetting : 1;                                                //CPF_Parm
	INT iNextMapIndex;                                                        //CPF_Parm
};
struct AR6AbstractGameInfo_execResetPenalty_Parms
{
};
struct AR6AbstractGameInfo_execAdminResetRound_Parms
{
};
struct AR6AbstractGameInfo_execResetRound_Parms
{
};
struct AR6AbstractGameInfo_execProcessChangeMapVote_Parms
{
	class FString InstigatorName;                                             //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execProcessKickVote_Parms
{
	class APlayerController* _KickPlayer;                                     //CPF_Parm
	class FString KickersName;                                                //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetHostageVoicesMgr_Parms
{
	BYTE eNationality;                                                        //CPF_Parm
	BITFIELD bIsFemale : 1;                                                   //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetTerroristVoicesMgr_Parms
{
	BYTE eNationality;                                                        //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetRainbowOtherTeamVoicesMgr_Parms
{
	INT iIDVoicesMgr;                                                         //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetCommonRainbowMemberVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetCommonRainbowPlayerVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetRainbowMemberVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetRainbowPlayerVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetMultiCommonVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetPreRecordedMsgVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetMultiCoopMemberVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetMultiCoopPlayerVoicesMgr_Parms
{
	INT iTeam;                                                                //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetNoiseMgr_Parms
{
	class UR6AbstractNoiseMgr* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execBroadcastGameMsg_Parms
{
	class FString szLocFile;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString szPreMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class USound* sndGameStatus;                                              //CPF_Parm
	INT iLifeTime;                                                            //CPF_Parm
};
struct AR6AbstractGameInfo_execInstructAllTeamsToFollowPlanning_Parms
{
};
struct AR6AbstractGameInfo_execInstructAllTeamsToHoldPosition_Parms
{
};
struct AR6AbstractGameInfo_execChangeOperatives_Parms
{
	class APlayerController* inPlayerController;                              //CPF_Parm
	INT iTeamId;                                                              //CPF_Parm
	INT iOperativeID;                                                         //CPF_Parm
};
struct AR6AbstractGameInfo_execChangeTeams_Parms
{
	class APlayerController* inPlayerController;                              //CPF_Parm
	BITFIELD bPrevTeam : 1;                                                   //CPF_Parm
	class AActor* newRainbowTeam;                                             //CPF_Parm
};
struct AR6AbstractGameInfo_execGetNewTeam_Parms
{
	class AActor* aCurrentTeam;                                               //CPF_Parm
	BITFIELD bNextTeam : 1;                                                   //CPF_Parm
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractGameInfo_execGetRainbowTeam_Parms
{
	INT eTeamName;                                                            //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6AbstractGameInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractGameInfo : public AGameInfo
{
public:
	INT m_iNbOfRainbowAIToSpawn;                                              //0
	INT m_iNbOfTerroristToSpawn;                                              //0
	INT m_iDiffLevel;                                                         //0
	INT m_fTimerStartTime;                                                    //0
	BITFIELD m_bFriendlyFire : 1;                                             //0
	BITFIELD m_bEndGameIgnoreGamePlayCheck : 1;                               //0
	BITFIELD m_bGameOverButAllowDeath : 1;                                    //0
	BITFIELD m_bTimerStarted : 1;                                             //0
	BITFIELD m_bInternetSvr : 1;                                              //0
	FLOAT m_fEndingTime;                                                      //0
	FLOAT m_fTimeBetRounds;                                                   //0
	FLOAT m_fEndVoteTime;                                                     //0
	class APlayerController* m_Player;                                        //0
	class UR6AbstractNoiseMgr* m_noiseMgr;                                    //0
	class AR6MissionObjectiveMgr* m_missionMgr;                               //0
	class APlayerController* m_PlayerKick;                                    //0
	class APlayerController* m_pCurPlayerCtrlMdfSrvInfo;                      //0
	class AUdpBeacon* m_UdpBeacon;                                            //0
	class FString m_VoteInstigatorName;                                       //CPF_NeedCtorLink
	class FString m_szDefaultActionPlan;                                      //CPF_NeedCtorLink
	virtual ~AR6AbstractGameInfo();
	AR6AbstractGameInfo(class AR6AbstractGameInfo const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractGameInfo & operator=(class AR6AbstractGameInfo const &);
protected:
	AR6AbstractGameInfo();
private:
	static class UClass PrivateStaticClass();
};
struct AR6AbstractBullet_execDoorExploded_Parms
{
};

// *****************************************************************************
// AR6AbstractBullet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractBullet : public AActor
{
public:
	virtual ~AR6AbstractBullet();
	AR6AbstractBullet(class AR6AbstractBullet const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractBullet & operator=(class AR6AbstractBullet const &);
protected:
	AR6AbstractBullet();
private:
	static class UClass PrivateStaticClass();
};
struct AR6AbstractWeapon_execR6SetReticule_Parms
{
	class AController* LocalPlayerController;                                 //CPF_Parm
};
struct AR6AbstractWeapon_execCreateWeaponEmitters_Parms
{
};
struct AR6AbstractWeapon_execR6SetGadget_Parms
{
	class UClass* pWeaponGadgetClass;                                         //CPF_Parm
};
struct AR6AbstractWeapon_eventSpawnSelectedGadget_Parms
{
};
struct AR6AbstractWeapon_execGetBulletManager_Parms
{
	class AR6AbstractBulletManager* ReturnValue;                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6AbstractWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractWeapon : public AR6EngineWeapon
{
public:
	BITFIELD m_bHiddenWhenNotInUse : 1;                                       //0
	class AR6AbstractGadget* m_SelectedWeaponGadget;                          //0
	class AR6AbstractGadget* m_ScopeGadget;                                   //0
	class AR6AbstractGadget* m_BipodGadget;                                   //0
	class AR6AbstractGadget* m_MuzzleGadget;                                  //0
	class AR6AbstractGadget* m_MagazineGadget;                                //0
	class AR6AbstractFirstPersonWeapon* m_FPHands;                            //0
	class AR6AbstractFirstPersonWeapon* m_FPWeapon;                           //0
	class AR6AbstractGadget* m_FPGadget;                                      //0
	class UClass* m_WeaponGadgetClass;                                        //CPF_Net
	class UClass* m_pFPHandsClass;                                            //CPF_Edit
	class UClass* m_pFPWeaponClass;                                           //CPF_Edit
	virtual ~AR6AbstractWeapon();
	virtual void PreNetReceive();
	virtual void PostNetReceive();
	AR6AbstractWeapon(class AR6AbstractWeapon const &);
	AR6AbstractWeapon();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventSpawnSelectedGadget();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractWeapon & operator=(class AR6AbstractWeapon const &);
private:
	static class UClass PrivateStaticClass();
};

enum ESkills{
	 SKILL_Assault=0
	,SKILL_Demolitions=1
	,SKILL_Electronics=2
	,SKILL_Sniper=3
	,SKILL_Stealth=4
	,SKILL_SelfControl=5
	,SKILL_Leadership=6
	,SKILL_Observation=7
};
struct AR6AbstractPawn_execClientGetWeapon_Parms
{
	class AR6EngineWeapon* NewWeapon;                                         //CPF_Parm
};
struct AR6AbstractPawn_execGetWeapon_Parms
{
	class AR6AbstractWeapon* NewWeapon;                                       //CPF_Parm
};
struct AR6AbstractPawn_eventGetSkill_Parms
{
	BYTE eSkillName;                                                          //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6AbstractPawn (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractPawn : public APawn
{
public:
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	virtual ~AR6AbstractPawn();
	AR6AbstractPawn(class AR6AbstractPawn const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	FLOAT eventGetSkill(BYTE);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6AbstractPawn & operator=(class AR6AbstractPawn const &);
protected:
	AR6AbstractPawn();
private:
	static class UClass PrivateStaticClass();
};

enum EMissionObjectiveStatus{
	 eMissionObjStatus_none=0
	,eMissionObjStatus_success=1
	,eMissionObjStatus_failed=2
};
struct AR6MissionObjectiveMgr_execSetMissionObjCompleted_Parms
{
	class UR6MissionObjectiveBase* mobj;                                      //CPF_Parm
	BITFIELD bCompleted : 1;                                                  //CPF_Parm
	BITFIELD bFeedback : 1;                                                   //CPF_Parm
};
struct AR6MissionObjectiveMgr_eventDestroyed_Parms
{
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execGetMObjFailed_Parms
{
	class UR6MissionObjectiveBase* ReturnValue;                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class FString szFailure;                                                  //CPF_NeedCtorLink
};
struct AR6MissionObjectiveMgr_execToggleLog_Parms
{
	BITFIELD bToggle : 1;                                                     //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execCompleteMission_Parms
{
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execAbortMission_Parms
{
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execUpdate_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT iTotalMissionToComplete;                                              //0
	INT iCompleted;                                                           //0
	INT iTotalMissionFailed;                                                  //0
};
struct AR6MissionObjectiveMgr_execExitExtractionZone_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execEnteredExtractionZone_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execPawnSecure_Parms
{
	class APawn* securedPawn;                                                 //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execPawnHeard_Parms
{
	class APawn* heard;                                                       //CPF_Parm
	class APawn* witness;                                                     //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execPawnSeen_Parms
{
	class APawn* seen;                                                        //CPF_Parm
	class APawn* witness;                                                     //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execIObjectDestroyed_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	class AActor* anInteractiveObject;                                        //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execIObjectInteract_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	class AActor* anInteractiveObject;                                        //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execPawnKilled_Parms
{
	class APawn* killedPawn;                                                  //CPF_Parm
	INT i;                                                                    //0
};
struct AR6MissionObjectiveMgr_execTimerCallback_Parms
{
	FLOAT fTime;                                                              //CPF_Parm
};
struct AR6MissionObjectiveMgr_execRemoveObjectives_Parms
{
};
struct AR6MissionObjectiveMgr_execInit_Parms
{
	class AR6AbstractGameInfo* GameInfo;                                      //CPF_Parm
	INT i;                                                                    //0
	INT Index;                                                                //0
	INT iTimer;                                                               //0
};
struct AR6MissionObjectiveMgr_execSetMissionObjStatus_Parms
{
	BYTE eStatus;                                                             //CPF_Parm
};

// *****************************************************************************
// AR6MissionObjectiveMgr (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MissionObjectiveMgr : public AActor
{
public:
	BYTE m_eMissionObjectiveStatus;                                           //0
	BITFIELD m_bShowLog : 1;                                                  //0
	BITFIELD m_bDontUpdateMgr : 1;                                            //0
	BITFIELD m_bOnSuccessAllObjectivesAreCompleted : 1;                       //0
	BITFIELD m_bEnableCheckForErrors : 1;                                     //0
	class AR6AbstractGameInfo* m_GameInfo;                                    //0
	TArray<class UR6MissionObjectiveBase*> m_aMissionObjectives;              //CPF_NeedCtorLink
};
struct AR6AbstractBulletManager_execSpawnBullet_Parms
{
	class FVector VPosition;                                                  //CPF_Parm
	class FRotator rRotation;                                                 //CPF_Parm
	FLOAT fBulletSpeed;                                                       //CPF_Parm
	BITFIELD bFirstInShell : 1;                                               //CPF_Parm
};
struct AR6AbstractBulletManager_execAffectActor_Parms
{
	INT BulletGroup;                                                          //CPF_Parm
	class AActor* ActorAffected;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6AbstractBulletManager_execInitBulletMgr_Parms
{
	class APawn* TheInstigator;                                               //CPF_Parm
};
struct AR6AbstractBulletManager_execSetBulletParameter_Parms
{
	class AR6EngineWeapon* AWeapon;                                           //CPF_Parm
};

// *****************************************************************************
// AR6AbstractBulletManager (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractBulletManager : public AActor
{
};
struct AR6AbstractHelmet_execSetHelmetStaticMesh_Parms
{
	BITFIELD bOpen : 1;                                                       //CPF_Parm
};

// *****************************************************************************
// AR6AbstractHelmet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractHelmet : public AStaticMeshActor
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
