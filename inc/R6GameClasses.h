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
** Unreal native C++ headers for the R6Game package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6GAME_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif
struct AR6GameInfo_execCheckForHostage_Parms
{
	class UR6MissionObjectiveBase* mo;                                        //CPF_Parm
	INT iMinNum;                                                              //CPF_Parm
	INT iTotal;                                                               //0
	class AR6Hostage* aHostage;                                               //0
};
struct AR6GameInfo_execCheckForTerrorist_Parms
{
	class UR6MissionObjectiveBase* mo;                                        //CPF_Parm
	INT iMinNum;                                                              //CPF_Parm
	INT iTotal;                                                               //0
	class AR6Terrorist* aTerrorist;                                           //0
};
struct AR6GameInfo_execCheckForExtractionZone_Parms
{
	class UR6MissionObjectiveBase* mo;                                        //CPF_Parm
	INT iTotal;                                                               //0
	class AR6ExtractionZone* aExtractZone;                                    //0
};
struct AR6GameInfo_execSetDefaultTeamFriendlies_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6GameInfo_execGetTeamNumBit_Parms
{
	INT Num;                                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execSetPawnTeamFriendlies_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
};
struct AR6GameInfo_execIncrementRoundsFired_Parms
{
	class APawn* Instigator;                                                  //CPF_Parm
	BITFIELD ForceIncrement : 1;                                              //CPF_Parm
	class AR6RainbowPawn* _pawnIterator;                                      //0
	class APlayerController* _playerController;                               //0
};
struct AR6GameInfo_execInitGameReplicationInfo_Parms
{
};
struct AR6GameInfo_execPlayTeleportEffect_Parms
{
	BITFIELD bOut : 1;                                                        //CPF_Parm
	BITFIELD bSound : 1;                                                      //CPF_Parm
};
struct AR6GameInfo_execR6GameInfoMakeNoise_Parms
{
	BYTE eType;                                                               //CPF_Parm
	class AActor* soundsource;                                                //CPF_Parm
};
struct AR6GameInfo_execRestartGame_Parms
{
	class AR6PlayerController* P;                                             //0
};
struct AR6GameInfo_execGetNoiseMgr_Parms
{
	class UR6AbstractNoiseMgr* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetTrainingMgr_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
	class AR6TrainingMgr* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetHostageVoicesMgr_Parms
{
	BYTE eNationality;                                                        //CPF_Parm
	BITFIELD IsFemale : 1;                                                    //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetTerroristVoicesMgr_Parms
{
	BYTE eNationality;                                                        //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetRainbowOtherTeamVoicesMgr_Parms
{
	INT iIDVoicesMgr;                                                         //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetRainbowMemberVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetRainbowPlayerVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetCommonRainbowMemberVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetCommonRainbowPlayerVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetMultiCommonVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetPreRecordedMsgVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetMultiCoopMemberVoicesMgr_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetMultiCoopPlayerVoicesMgr_Parms
{
	INT iTeam;                                                                //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iIndex;                                                               //0
};
struct AR6GameInfo_execInstructAllTeamsToFollowPlanning_Parms
{
	class AR6RainbowTeam* aRainbowTeam[3];                                    //0
	INT i;                                                                    //0
	INT iNbTeam;                                                              //0
};
struct AR6GameInfo_execInstructAllTeamsToHoldPosition_Parms
{
	class AR6RainbowTeam* aRainbowTeam[3];                                    //0
	INT i;                                                                    //0
	INT iNbTeam;                                                              //0
};
struct AR6GameInfo_execChangeTeams_Parms
{
	class APlayerController* inPlayerController;                              //CPF_Parm
	BITFIELD bNextTeam : 1;                                                   //CPF_Parm
	class AActor* newRainbowTeam;                                             //CPF_Parm
	class AR6PawnReplicationInfo* aPawnRepInfo;                               //0
	class AR6PlayerController* aPC;                                           //0
	class AR6RainbowAI* tempAIController;                                     //0
	class AR6RainbowTeam* aCurrentTeam;                                       //0
	class AR6RainbowTeam* aNewTeam;                                           //0
	BITFIELD bPlayerDied : 1;                                                 //0
};
struct AR6GameInfo_execChangeOperatives_Parms
{
	class APlayerController* inPlayerController;                              //CPF_Parm
	INT iTeamId;                                                              //CPF_Parm
	INT iOperativeID;                                                         //CPF_Parm
	class AR6RainbowTeam* aNewTeam;                                           //0
	class AR6PlayerController* aPlayerController;                             //0
};
struct AR6GameInfo_execGetNewTeam_Parms
{
	class AActor* aCurrentTeam;                                               //CPF_Parm
	BITFIELD bNextTeam : 1;                                                   //CPF_Parm
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6RainbowTeam* aRainbowTeam[3];                                    //0
	class AR6RainbowTeam* aNewTeam;                                           //0
	INT i;                                                                    //0
	INT iCurrentTeam;                                                         //0
	INT iNewTeam;                                                             //0
};
struct AR6GameInfo_execIsARainbowAlive_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6GameReplicationInfo* gInfo;                                      //0
	INT iTeam;                                                                //0
	INT iRainbow;                                                             //0
};
struct AR6GameInfo_execRainbowOperativesStillAlive_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6GameReplicationInfo* repInfo;                                    //0
};
struct AR6GameInfo_execFindTeamInsertionZone_Parms
{
	INT iSpawningPointNumber;                                                 //CPF_Parm
	class AR6InsertionZone* ReturnValue;                                      //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iCurrentZoneNumber;                                                   //0
	class AR6InsertionZone* anInsertionZone;                                  //0
	class AR6InsertionZone* pSelectedInsertionZone;                           //0
};
struct AR6GameInfo_execCreateRainbowTeam_Parms
{
	INT NewTeamNumber;                                                        //CPF_Parm
	class AR6TeamStartInfo* TeamInfo;                                         //CPF_Parm
	BITFIELD bIsPlaying : 1;                                                  //CPF_Parm
	INT iTeamStart;                                                           //CPF_Parm
	class APlayerController* aRainbowPC;                                      //CPF_Parm
	class ANavigationPoint* StartingPoint;                                    //0
	class AR6RainbowTeam* newTeam;                                            //0
};
struct AR6GameInfo_execDeployCharacters_Parms
{
	class APlayerController* ControlledByPlayer;                              //CPF_Parm
	class AR6StartGameInfo* StartGameInfo;                                    //0
	INT CurrentTeam;                                                          //0
	class UPlayer* CurrentPlayer;                                             //0
	class UInteraction* CurrentConsole;                                       //0
	class AR6DeploymentZone* PZone;                                           //0
	class AR6ActionPoint* pActionPoint;                                       //0
	class AR6Terrorist* pTerrorist;                                           //0
	INT iSoundNb;                                                             //0
	class UR6ModMgr* pModManager;                                             //0
};
struct AR6GameInfo_eventPostLogin_Parms
{
	class APlayerController* NewPlayer;                                       //CPF_Parm
	class UR6FileManagerPlanning* pFileManager;                               //0
};
struct AR6GameInfo_execLoadPlanningInTraining_Parms
{
};
struct AR6GameInfo_execFind2DTexture_Parms
{
	class FString TeamClass;                                                  //CPF_Parm|CPF_NeedCtorLink
	class UMaterial* MenuTexture;                                             //CPF_Parm|CPF_OutParm
	struct FRegion TextureRegion;                                             //CPF_Parm|CPF_OutParm
	class UClass* DescriptionClass;                                           //0
	BITFIELD bTeamFound : 1;                                                  //0
	INT i;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
	class UR6ModMgr* pModManager;                                             //0
};
struct AR6GameInfo_execR6SetPawnClassInMultiPlayer_Parms
{
	class AController* _playerController;                                     //CPF_Parm
	class UClass* CurrentPawnClass;                                           //0
	class UR6ModMgr* pModManager;                                             //0
};
struct AR6GameInfo_execRestartPlayer_Parms
{
	class AController* aPlayer;                                               //CPF_Parm
	class ANavigationPoint* StartSpot;                                        //0
	INT iStartPos;                                                            //0
	class UClass* DefaultPlayerClass;                                         //0
	class FRotator rStartingPointRot;                                         //0
};
struct AR6GameInfo_execStats_getPlayerInfo_Parms
{
	class FString sz;                                                         //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class AR6Pawn* pPawn;                                                     //CPF_Parm
	class APlayerReplicationInfo* pInfo;                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString szHealth;                                                   //CPF_NeedCtorLink
	INT iKills;                                                               //0
};
struct AR6GameInfo_execRatePlayerStart_Parms
{
	class ANavigationPoint* NavPoint;                                         //CPF_Parm
	BYTE Team;                                                                //CPF_Parm
	class AController* Player;                                                //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6AbstractInsertionZone* _startPoint;                              //0
	FLOAT Score;                                                              //0
	FLOAT NextDist;                                                           //0
	class AController* OtherPlayer;                                           //0
};
struct AR6GameInfo_execFindPlayerStart_Parms
{
	class AController* Player;                                                //CPF_Parm
	BYTE InTeam;                                                              //CPF_Parm
	class FString incomingName;                                               //CPF_Parm|CPF_NeedCtorLink
	class ANavigationPoint* ReturnValue;                                      //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6AbstractInsertionZone* NavPoint;                                 //0
	class AR6AbstractInsertionZone* BestStart;                                //0
	class APlayerStart* _tempStart;                                           //0
	FLOAT BestRating;                                                         //0
	FLOAT NewRating;                                                          //0
	class APlayerStart* _checkStarts;                                         //0
	class FString szGameType;                                                 //CPF_NeedCtorLink
};
struct AR6GameInfo_execR6FindPlayerStart_Parms
{
	class AController* Player;                                                //CPF_Parm
	INT SpawnPointNumber;                                                     //CPF_Parm
	class FString incomingName;                                               //CPF_Parm|CPF_NeedCtorLink
	class ANavigationPoint* ReturnValue;                                      //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class ANavigationPoint* NavPoint;                                         //0
	class APlayerStart* _tempStart;                                           //0
	class APlayerStart* _checkStarts;                                         //0
};
struct AR6GameInfo_execSpawnNumberToNavPoint_Parms
{
	INT _iSpawnNumber;                                                        //CPF_Parm
	class ANavigationPoint* _StartNavPoint;                                   //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6AbstractInsertionZone* NavPoint;                                 //0
	class AController* OtherPlayer;                                           //0
	FLOAT NextDist;                                                           //0
};
struct AR6GameInfo_execLogout_Parms
{
	class AController* Exiting;                                               //CPF_Parm
	BITFIELD bMessage : 1;                                                    //0
	class AController* P;                                                     //0
	class AR6PlayerController* _playerController;                             //0
	class AR6PlayerController* _iterController;                               //0
	INT iAlphaNb;                                                             //0
	INT iBravoNb;                                                             //0
};
struct AR6GameInfo_execRemoveAIBackup_Parms
{
	class AR6PlayerController* _playerController;                             //CPF_Parm
	INT iMember;                                                              //0
	INT iMemberCount;                                                         //0
};
struct AR6GameInfo_eventPreLogOut_Parms
{
	class APlayerController* ExitingPlayer;                                   //CPF_Parm
};
struct AR6GameInfo_eventLogin_Parms
{
	class FString Portal;                                                     //CPF_Parm|CPF_NeedCtorLink
	class FString Options;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString Error;                                                      //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class APlayerController* ReturnValue;                                     //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class ANavigationPoint* StartSpot;                                        //0
	class APlayerController* NewPlayer;                                       //0
	class APawn* TestPawn;                                                    //0
	class FString InName;                                                     //CPF_NeedCtorLink
	class FString InPassword;                                                 //CPF_NeedCtorLink
	class FString InChecksum;                                                 //CPF_NeedCtorLink
	class FString InClass;                                                    //CPF_NeedCtorLink
	BYTE InTeam;                                                              //0
	INT i;                                                                    //0
	class AActor* A;                                                          //0
	INT iSpawnPointNum;                                                       //0
	class FRotator rStartSpotRot;                                             //0
};
struct AR6GameInfo_execDeployRainbowTeam_Parms
{
	class APlayerController* NewPlayer;                                       //CPF_Parm
	class AR6RainbowTeam* newTeam;                                            //0
	INT iMembers;                                                             //0
	INT iActiveTotal;                                                         //0
	INT iActiveGreen;                                                         //0
	class AR6RainbowStartInfo* Info;                                          //0
};
struct AR6GameInfo_execGetRainbowAIFromTable_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6RainbowAI* rainbowAI;                                            //0
	INT i;                                                                    //0
};
struct AR6GameInfo_execCreateBackupRainbowAI_Parms
{
	class AR6RainbowAI* rainbowAI;                                            //0
	INT i;                                                                    //0
	class UR6ModMgr* pModManager;                                             //0
};
struct AR6GameInfo_execSetGamePassword_Parms
{
	class FString szPasswd;                                                   //CPF_Parm|CPF_NeedCtorLink
};
struct AR6GameInfo_eventInitGame_Parms
{
	class FString Options;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString Error;                                                      //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString InOpt;                                                      //CPF_NeedCtorLink
	class AMapList* myList;                                                   //0
	class UClass* ML;                                                         //0
	class FString KeyName;                                                    //CPF_NeedCtorLink
	INT iCounter;                                                             //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct AR6GameInfo_execUpdateRepResArrays_Parms
{
	class UClass* SubGunClass;                                                //0
	class UClass* ShotGunClass;                                               //0
	class UClass* AssaultRifleClass;                                          //0
	class UClass* MachGunClass;                                               //0
	class UClass* SniperRifleClass;                                           //0
	class UClass* PistolClass;                                                //0
	class UClass* MachPistolClass;                                            //0
	class UClass* PriGadgClass;                                               //0
	class UClass* SecGadgClass;                                               //0
	class UClass* MiscGadgClass;                                              //0
	class UR6ServerInfo* pServerOptions;                                      //0
	INT i;                                                                    //0
	class AR6GameReplicationInfo* _GRI;                                       //0
};
struct AR6GameInfo_execPostBeginPlay_Parms
{
	class AR6DeploymentZone* PZone;                                           //0
	INT i;                                                                    //0
	BITFIELD bFound : 1;                                                      //0
	TArray<class FString> AGadgetNameID;                                      //CPF_NeedCtorLink
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct AR6GameInfo_execIsInResArray_Parms
{
	class FString szWeaponNameId;                                             //CPF_Parm|CPF_NeedCtorLink
	class FString RestrictionArray[32];                                       //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6GameInfo_execIsTertiaryWeaponRestricted_Parms
{
	class FString szWeaponName;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class AR6GameReplicationInfo* _GRI;                                       //0
	class UClass* WeaponClass;                                                //0
	class FString RequestedWeapon;                                            //CPF_NeedCtorLink
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* _GadgetClass;                                               //0
};
struct AR6GameInfo_execIsSecondaryWeaponRestricted_Parms
{
	class FString szWeaponName;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class AR6GameReplicationInfo* _GRI;                                       //0
	class UClass* WeaponClass;                                                //0
	class FString RequestedWeapon;                                            //CPF_NeedCtorLink
	class UClass* SecondaryWeaponClass;                                       //0
};
struct AR6GameInfo_execIsSecondaryGadgetRestricted_Parms
{
	class FString szWeaponGadgetName;                                         //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class AR6GameReplicationInfo* _GRI;                                       //0
	class UClass* WeaponGadgetClass;                                          //0
	class FString RequestedGadget;                                            //CPF_NeedCtorLink
};
struct AR6GameInfo_execIsPrimaryGadgetRestricted_Parms
{
	class FString szWeaponGadgetName;                                         //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class AR6GameReplicationInfo* _GRI;                                       //0
	class UClass* WeaponGadgetClass;                                          //0
	class FString RequestedGadget;                                            //CPF_NeedCtorLink
};
struct AR6GameInfo_execIsPrimaryWeaponRestricted_Parms
{
	class FString szWeaponName;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UClass* WeaponClass;                                                //0
	class AR6GameReplicationInfo* _GRI;                                       //0
	class FString WeaponClassNameId;                                          //CPF_NeedCtorLink
};
struct AR6GameInfo_execIsTertiaryWeaponRestrictedForGamePlay_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	class FString szWeaponName;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execIsTertiaryWeaponRestrictedToPawn_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execIsSecondaryWeaponRestrictedToPawn_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execIsPrimaryWeaponRestrictedToPawn_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_eventAcceptInventory_Parms
{
	class APawn* PlayerPawn;                                                  //CPF_Parm
	struct FPlayerPrefInfo m_PlayerPrefs;                                     //CPF_NeedCtorLink
	class AR6Pawn* aPawn;                                                     //0
	class AR6Rainbow* aRainbow;                                               //0
	class FString szSecWeapon;                                                //CPF_NeedCtorLink
	class FString caps_szSecGadget;                                           //CPF_NeedCtorLink
};
struct AR6GameInfo_execSetRainbowTeam_Parms
{
	INT eTeamName;                                                            //CPF_Parm
	class AR6RainbowTeam* newTeam;                                            //CPF_Parm
};
struct AR6GameInfo_execGetRainbowTeam_Parms
{
	INT eTeamName;                                                            //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execGetAStartSpot_Parms
{
	class AR6AbstractInsertionZone* ReturnValue;                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6AbstractInsertionZone* aZone;                                    //0
};
struct AR6GameInfo_execFirstPassReset_Parms
{
	INT i;                                                                    //0
};
struct AR6GameInfo_execGetNbHumanPlayerInTeam_Parms
{
	INT iAlphaNb;                                                             //CPF_Parm|CPF_OutParm
	INT iBravoNb;                                                             //CPF_Parm|CPF_OutParm
};
struct AR6GameInfo_execSetUdpBeacon_Parms
{
	class AInternetInfo* _udpBeacon;                                          //CPF_Parm
};
struct AR6GameInfo_execSubmissionUpdateLadderStat_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execLogoutUpdatePlayersCtrlInfo_Parms
{
	class AController* Exiting;                                               //CPF_Parm
};
struct AR6GameInfo_execSubmissionSrvRoundFinish_Parms
{
};
struct AR6GameInfo_execSubmissionNotifySendStartMatch_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execSubmissionSrvRoundStart_Parms
{
};
struct AR6GameInfo_execInitScoreSubmission_Parms
{
	BITFIELD _bStatsSetting : 1;                                              //CPF_Parm
};
struct AR6GameInfo_execGetSystemUserName_Parms
{
	class FString szUserName;                                                 //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
};
struct AR6GameInfo_execNativeLogout_Parms
{
	class APlayerController* Exiting;                                         //CPF_Parm
};
struct AR6GameInfo_execSetController_Parms
{
	class APlayerController* PController;                                     //CPF_Parm
	class UPlayer* pPlayer;                                                   //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_eventUpdateServer_Parms
{
};
struct AR6GameInfo_execChangeName_Parms
{
	class AController* Other;                                                 //CPF_Parm
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	BITFIELD bNameChange : 1;                                                 //CPF_Parm
	BITFIELD bDontBroadcastNameChange : 1;                                    //CPF_Parm
	class AR6Rainbow* aRainbow;                                               //0
	class AR6Pawn* pOther;                                                    //0
	class FString szPreviousName;                                             //CPF_NeedCtorLink
	class AR6PlayerController* P;                                             //0
};
struct AR6GameInfo_execGetNbTerroNeutralized_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Terrorist* aTerrorist;                                           //0
	INT iTerroNeutralized;                                                    //0
};
struct AR6GameInfo_eventCanPlayOutroVideo_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_eventCanPlayIntroVideo_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execEnteredExtractionZone_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AR6Hostage* hostage;                                                //0
};
struct AR6GameInfo_execDestroyBeacon_Parms
{
	class AUdpBeacon* aBeacon;                                                //0
};
struct AR6GameInfo_execSetUnlimitedPractice_Parms
{
	BITFIELD bUnlimitedPractice : 1;                                          //CPF_Parm
	BITFIELD bInGameProcess : 1;                                              //CPF_Parm
	class UR6GameOptions* pGameOptions;                                       //0
};
struct AR6GameInfo_execIsUnlimitedPractice_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6GameOptions* pGameOptions;                                       //0
};
struct AR6GameInfo_execRemoveTerroFromList_Parms
{
	class APawn* toRemove;                                                    //CPF_Parm
	INT i;                                                                    //0
	class AR6Terrorist* aTerrorist;                                           //0
};
struct AR6GameInfo_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
	class AR6Hostage* hostage;                                                //0
};
struct AR6GameInfo_execResetBroadcastGameMsg_Parms
{
	class AController* P;                                                     //0
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execBroadcastMissionObjMsg_Parms
{
	class FString szLocFile;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString szPreMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class USound* sndGameStatus;                                              //CPF_Parm
	INT iLifeTime;                                                            //CPF_Parm
	class AController* P;                                                     //0
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execBroadcastGameMsg_Parms
{
	class FString szLocFile;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString szPreMsg;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szMsgID;                                                    //CPF_Parm|CPF_NeedCtorLink
	class USound* sndGameStatus;                                              //CPF_Parm
	INT iLifeTime;                                                            //CPF_Parm
	class AController* P;                                                     //0
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execBroadcastGameTypeDescription_Parms
{
	class AController* P;                                                     //0
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execProcessPlayerReadyStatus_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6PlayerController* _playerController;                             //0
	class AController* P;                                                     //0
	INT _iCount;                                                              //0
};
struct AR6GameInfo_execSetTeamKillerPenalty_Parms
{
	class APawn* DeadPawn;                                                    //CPF_Parm
	class APawn* KillerPawn;                                                  //CPF_Parm
	class AR6PlayerController* pControllerDead;                               //0
	class AR6PlayerController* pControllerKiller;                             //0
};
struct AR6GameInfo_execSpawnAIandInitGoInGame_Parms
{
	class AR6MissionObjectiveMgr* aMgr;                                       //0
	class AR6IORotatingDoor* Door;                                            //0
};
struct AR6GameInfo_execSetGameTypeInLocal_Parms
{
	class AR6PlayerController* PController;                                   //0
	class AController* P;                                                     //0
	class AActor* anActor;                                                    //0
};
struct AR6GameInfo_execSpawnAI_Parms
{
	class AR6DeploymentZone* PZone;                                           //0
	class AR6Terrorist* pTerrorist;                                           //0
};
struct AR6GameInfo_execResetRound_Parms
{
};
struct AR6GameInfo_execRestartGameMgr_Parms
{
	class AR6MapList* myList;                                                 //0
	BITFIELD bChangeLevelAllowed : 1;                                         //0
	class APlayerController* _playerController;                               //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct AR6GameInfo_execResetPenalty_Parms
{
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execResetPlayerBlur_Parms
{
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execSetPlayerInPenaltyBox_Parms
{
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execResetOriginalData_Parms
{
};
struct AR6GameInfo_execAdminResetRound_Parms
{
	class APlayerReplicationInfo* _PRI;                                       //0
};
struct AR6GameInfo_execResetMatchStat_Parms
{
	class APlayerReplicationInfo* PRI;                                        //0
};
struct AR6GameInfo_execMPSelectOperativeFace_Parms
{
	BITFIELD bIsFemale : 1;                                                   //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iOperativeID;                                                         //0
};
struct AR6GameInfo_execSearchOperativesArray_Parms
{
	BITFIELD bIsFemale : 1;                                                   //CPF_Parm
	INT iStartIndex;                                                          //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct AR6GameInfo_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	class AController* _playerController;                                     //0
	class AR6PlayerController* _R6PlayerController;                           //0
	class AController* P;                                                     //0
	class AR6PlayerController* _iterController;                               //0
	class AR6HostageAI* CurrentHostage;                                       //0
	BITFIELD bLoggedIntoGS : 1;                                               //0
	class UR6Console* aConsole;                                               //0
};
struct AR6GameInfo_execApplyTeamKillerPenalty_Parms
{
	class APawn* aPawn;                                                       //CPF_Parm
	class AR6PlayerController* PController;                                   //0
};
struct AR6GameInfo_execProcessChangeLevelSystem_Parms
{
};
struct AR6GameInfo_execIsLastRoundOfTheMatch_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6GameInfo_execSetJumpingMaps_Parms
{
	BITFIELD _flagSetting : 1;                                                //CPF_Parm
	INT iNextMapIndex;                                                        //CPF_Parm
};
struct AR6GameInfo_execPlayerReadySelected_Parms
{
	class APlayerController* _Controller;                                     //CPF_Parm
	class AController* _aController;                                          //0
	INT iHumanCount;                                                          //0
};
struct AR6GameInfo_execInitObjectivesOfStoryMode_Parms
{
	INT i;                                                                    //0
	INT Index;                                                                //0
};
struct AR6GameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;                                     //CPF_Parm
	class FString Reason;                                                     //CPF_Parm|CPF_NeedCtorLink
	class AR6PlayerController* PlayerController;                              //0
};
struct AR6GameInfo_execBaseEndGame_Parms
{
};
struct AR6GameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;                                     //CPF_Parm
	class FString Reason;                                                     //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6GameOptions* pGameOptions;                                       //0
};
struct AR6GameInfo_execUpdateRepMissionObjectives_Parms
{
	INT i;                                                                    //0
	INT iRep;                                                                 //0
	INT iMaxRep;                                                              //0
};
struct AR6GameInfo_execUpdateRepMissionObjectivesStatus_Parms
{
};
struct AR6GameInfo_execResetRepMissionObjectives_Parms
{
};
struct AR6GameInfo_execInitObjectives_Parms
{
	INT Index;                                                                //0
	INT iMaxRep;                                                              //0
	INT iRep;                                                                 //0
	INT i;                                                                    //0
	class AGameReplicationInfo* G;                                            //0
};

// *****************************************************************************
// AR6GameInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GameInfo : public AR6AbstractGameInfo
{
public:
	BYTE R6DefaultWeaponInput;                                                //0
	BYTE m_eEndGameWidgetID;                                                  //0
	BYTE m_bCurrentFemaleId;                                                  //0
	BYTE m_bCurrentMaleId;                                                    //0
	BYTE m_bRainbowFaces[30];                                                 //0
	INT m_iCurrentID;                                                         //0
	INT m_iMaxOperatives;                                                     //0
	INT m_iJumpMapIndex;                                                      //0
	INT m_iRoundsPerMatch;                                                    //0
	INT m_iDeathCameraMode;                                                   //0
	INT m_iSubMachineGunsResMask;                                             //0
	INT m_iShotGunResMask;                                                    //0
	INT m_iAssRifleResMask;                                                   //0
	INT m_iMachGunResMask;                                                    //0
	INT m_iSnipRifleResMask;                                                  //0
	INT m_iPistolResMask;                                                     //0
	INT m_iMachPistolResMask;                                                 //0
	INT m_iGadgPrimaryResMask;                                                //0
	INT m_iGadgSecondaryResMask;                                              //0
	INT m_iGadgMiscResMask;                                                   //0
	INT m_iNbOfRestart;                                                       //0
	INT m_iIDVoicesMgr;                                                       //0
	INT m_iUbiComGameMode;                                                    //0
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD bNoRestart : 1;                                                  //0
	BITFIELD m_bServerAllowRadarRep : 1;                                      //0
	BITFIELD m_bRepAllowRadarOption : 1;                                      //0
	BITFIELD m_bIsRadarAllowed : 1;                                           //0
	BITFIELD m_bIsWritableMapAllowed : 1;                                     //0
	BITFIELD m_bUsingPlayerCampaign : 1;                                      //0
	BITFIELD m_bUsingCampaignBriefing : 1;                                    //0
	BITFIELD m_bUnlockAllDoors : 1;                                           //0
	BITFIELD m_bJumpingMaps : 1;                                              //0
	BITFIELD m_bAutoBalance : 1;                                              //0
	BITFIELD m_bTKPenalty : 1;                                                //0
	BITFIELD m_bPWSubMachGunRes : 1;                                          //0
	BITFIELD m_bPWShotGunRes : 1;                                             //0
	BITFIELD m_bPWAssRifleRes : 1;                                            //0
	BITFIELD m_bPWMachGunRes : 1;                                             //0
	BITFIELD m_bPWSnipRifleRes : 1;                                           //0
	BITFIELD m_bSWPistolRes : 1;                                              //0
	BITFIELD m_bSWMachPistolRes : 1;                                          //0
	BITFIELD m_bGadgPrimaryRes : 1;                                           //0
	BITFIELD m_bGadgSecondayRes : 1;                                          //0
	BITFIELD m_bGadgMiscRes : 1;                                              //0
	BITFIELD m_bShowNames : 1;                                                //0
	BITFIELD m_bFFPWeapon : 1;                                                //0
	BITFIELD m_bAdminPasswordReq : 1;                                         //0
	BITFIELD m_bAIBkp : 1;                                                    //0
	BITFIELD m_bRotateMap : 1;                                                //0
	BITFIELD m_bFadeStarted : 1;                                              //0
	BITFIELD m_bFeedbackHostageKilled : 1;                                    //0
	BITFIELD m_bFeedbackHostageExtracted : 1;                                 //0
	BITFIELD m_bStopPostBetweenRoundCountdown : 1;                            //0
	FLOAT m_fRoundStartTime;                                                  //0
	FLOAT m_fRoundEndTime;                                                    //0
	FLOAT m_fPausedAtTime;                                                    //0
	FLOAT m_fBombTime;                                                        //0
	FLOAT m_fInGameStartTime;                                                 //0
	class UR6CommonRainbowVoices* m_CommonRainbowPlayerVoicesMgr;             //0
	class UR6CommonRainbowVoices* m_CommonRainbowMemberVoicesMgr;             //0
	class UR6RainbowPlayerVoices* m_RainbowPlayerVoicesMgr;                   //0
	class UR6RainbowMemberVoices* m_RainbowMemberVoicesMgr;                   //0
	class UR6MultiCoopVoices* m_MultiCoopMemberVoicesMgr;                     //0
	class UR6PreRecordedMsgVoices* m_PreRecordedMsgVoicesMgr;                 //0
	class UR6MultiCommonVoices* m_MultiCommonVoicesMgr;                       //0
	class ANavigationPoint* LastStartSpot;                                    //0
	class UR6GSServers* m_GameService;                                        //0
	class UR6GSServers* m_PersistantGameService;                              //0
	class UMaterial* DefaultFaceTexture;                                      //0
	class UClass* m_HudClass;                                                 //0
	TArray<class UR6RainbowOtherTeamVoices*> m_RainbowOtherTeamVoicesMgr;     //CPF_NeedCtorLink
	TArray<class UR6MultiCoopVoices*> m_MultiCoopPlayerVoicesMgr;             //CPF_NeedCtorLink
	TArray<class UR6TerroristVoices*> m_TerroristVoicesMgr;                   //CPF_NeedCtorLink
	TArray<class UR6HostageVoices*> m_HostageVoicesMaleMgr;                   //CPF_NeedCtorLink
	TArray<class UR6HostageVoices*> m_HostageVoicesFemaleMgr;                 //CPF_NeedCtorLink
	TArray<class AR6Terrorist*> m_listAllTerrorists;                          //CPF_NeedCtorLink
	TArray<class AR6RainbowAI*> m_RainbowAIBackup;                            //CPF_NeedCtorLink
	TArray<class FString> m_mapList;                                          //CPF_NeedCtorLink
	TArray<class FString> m_gameModeList;                                     //CPF_NeedCtorLink
	class FPlane DefaultFaceCoords;                                           //0
	class FString m_szMessageOfDay;                                           //CPF_NeedCtorLink
	class FString m_szSvrName;                                                //CPF_NeedCtorLink
	virtual ~AR6GameInfo();
	virtual void PostBeginPlay();
	virtual void InitGameInfoGameService();
	virtual void MasterServerManager();
	virtual void AbortScoreSubmission();
	AR6GameInfo(class AR6GameInfo const &);
	AR6GameInfo();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void execGetSystemUserName(struct FFrame &, void * const);
	void execInitScoreSubmission(struct FFrame &, void * const);
	void execLogoutUpdatePlayersCtrlInfo(struct FFrame &, void * const);
	void execNativeLogout(struct FFrame &, void * const);
	void execSetController(struct FFrame &, void * const);
	void execSubmissionNotifySendStartMatch(struct FFrame &, void * const);
	void execSubmissionSrvRoundFinish(struct FFrame &, void * const);
	void execSubmissionSrvRoundStart(struct FFrame &, void * const);
	void execSubmissionUpdateLadderStat(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6GameInfo & operator=(class AR6GameInfo const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6StoryModeGame_execGetIntelVideoName_Parms
{
	class UR6MissionDescription* Desc;                                        //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6StoryModeGame_execGetNextRookieIndex_Parms
{
	class FString _szOperativeClass;                                          //CPF_Parm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6PlayerCampaign* MyCampaign;                                      //0
	class UR6MissionRoster* oDetailOfTheOperative;                            //0
	INT i;                                                                    //0
	INT iNbOfOperatives;                                                      //0
	INT ITemp;                                                                //0
	INT iRookieIndex;                                                         //0
};
struct AR6StoryModeGame_execUpdatePlayerCampaign_Parms
{
	class UR6PlayerCampaign* MyCampaign;                                      //0
	class UR6MissionRoster* oDetailOfTheOperative;                            //0
	class UR6Operative* oOperative;                                           //0
	class UR6Operative* oOperativeTmp;                                        //0
	TArray<INT> iOperativeInMission;                                          //CPF_NeedCtorLink
	BITFIELD bAlreadyUpdate : 1;                                              //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	class AR6Rainbow* aR6Rainbow;                                             //0
	class AR6RainbowTeam* aR6Team;                                            //0
	class UR6Console* R6Console;                                              //0
};
struct AR6StoryModeGame_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;                                     //CPF_Parm
	class FString Reason;                                                     //CPF_Parm|CPF_NeedCtorLink
	class AR6GameReplicationInfo* gameRepInfo;                                //0
	class UR6MissionObjectiveBase* obj;                                       //0
};
struct AR6StoryModeGame_execInitObjectives_Parms
{
};

// *****************************************************************************
// AR6StoryModeGame (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6StoryModeGame : public AR6GameInfo
{
};
struct UR6Operative_execCopyOperative_Parms
{
	class UR6Operative* aOperative;                                           //CPF_Parm
	INT i;                                                                    //0
};
struct UR6Operative_execDisplayStats_Parms
{
};
struct UR6Operative_execUpdateSkills_Parms
{
	INT iD5;                                                                  //0
	INT iD2;                                                                  //0
	FLOAT fDecision;                                                          //0
	FLOAT fIncreaseSkill;                                                     //0
};
struct UR6Operative_execGetRealOperativeClass_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	INT ITemp;                                                                //0
};
struct UR6Operative_execIsOperativeReady_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6Operative_execGetHealthStatus_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString Result;                                                     //CPF_NeedCtorLink
};
struct UR6Operative_execGetTextDescription_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szDescription;                                              //CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6Operative_execGetShootPercent_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetNbRoundsOnTarget_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetNbRoundsfired_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetNbTerrokilled_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetNbMissionPlayed_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetWeight_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetHeight_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetBirthDate_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetIDNumber_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetEyesColor_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetHairColor_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetState_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetCity_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetCountry_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetGender_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetHistory_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetSpeciality_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetShortName_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Operative_execGetName_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};

// *****************************************************************************
// UR6Operative (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative : public UObject
{
public:
	INT m_iUniqueID;                                                          //0
	INT m_iRookieID;                                                          //0
	INT m_RMenuFaceX;                                                         //0
	INT m_RMenuFaceY;                                                         //0
	INT m_RMenuFaceW;                                                         //0
	INT m_RMenuFaceH;                                                         //0
	INT m_RMenuFaceSmallX;                                                    //0
	INT m_RMenuFaceSmallY;                                                    //0
	INT m_RMenuFaceSmallW;                                                    //0
	INT m_RMenuFaceSmallH;                                                    //0
	INT m_iHealth;                                                            //0
	INT m_iNbMissionPlayed;                                                   //0
	INT m_iTerrokilled;                                                       //0
	INT m_iRoundsfired;                                                       //0
	INT m_iRoundsOntarget;                                                    //0
	FLOAT m_fAssault;                                                         //0
	FLOAT m_fDemolitions;                                                     //0
	FLOAT m_fElectronics;                                                     //0
	FLOAT m_fSniper;                                                          //0
	FLOAT m_fStealth;                                                         //0
	FLOAT m_fSelfControl;                                                     //0
	FLOAT m_fLeadership;                                                      //0
	FLOAT m_fObservation;                                                     //0
	class UTexture* m_TMenuFace;                                              //0
	class UTexture* m_TMenuFaceSmall;                                         //0
	FName m_CanUseArmorType;                                                  //0
	TArray<class UTexture*> m_OperativeFaces;                                 //CPF_NeedCtorLink
	class FString m_szOperativeClass;                                         //CPF_NeedCtorLink
	class FString m_szCountryID;                                              //CPF_NeedCtorLink
	class FString m_szCityID;                                                 //CPF_NeedCtorLink
	class FString m_szStateID;                                                //CPF_NeedCtorLink
	class FString m_szSpecialityID;                                           //CPF_NeedCtorLink
	class FString m_szHairColorID;                                            //CPF_NeedCtorLink
	class FString m_szEyesColorID;                                            //CPF_NeedCtorLink
	class FString m_szGenderID;                                               //CPF_NeedCtorLink
	class FString m_szGender;                                                 //CPF_NeedCtorLink
	class FString m_szPrimaryWeapon;                                          //CPF_NeedCtorLink
	class FString m_szPrimaryWeaponGadget;                                    //CPF_NeedCtorLink
	class FString m_szPrimaryWeaponBullet;                                    //CPF_NeedCtorLink
	class FString m_szPrimaryGadget;                                          //CPF_NeedCtorLink
	class FString m_szSecondaryWeapon;                                        //CPF_NeedCtorLink
	class FString m_szSecondaryWeaponGadget;                                  //CPF_NeedCtorLink
	class FString m_szSecondaryWeaponBullet;                                  //CPF_NeedCtorLink
	class FString m_szSecondaryGadget;                                        //CPF_NeedCtorLink
	class FString m_szArmor;                                                  //CPF_NeedCtorLink
	virtual ~UR6Operative();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void TransferFile(class FArchive &);
	UR6Operative(class UR6Operative const &);
	UR6Operative();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6Operative & operator=(class UR6Operative const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6SoundVolume_eventUnTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	INT iSoundIndex;                                                          //0
	class AController* C;                                                     //0
};
struct AR6SoundVolume_eventTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	INT iSoundIndex;                                                          //0
	class AController* C;                                                     //0
	BITFIELD bMissionPack : 1;                                                //0
};

// *****************************************************************************
// AR6SoundVolume (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SoundVolume : public AVolume
{
public:
	BYTE m_eSoundSlot;                                                        //CPF_Edit
	TArray<class USound*> m_EntrySound;                                       //CPF_Edit|CPF_NeedCtorLink
	TArray<class USound*> m_ExitSound;                                        //CPF_Edit|CPF_NeedCtorLink
	virtual ~AR6SoundVolume();
	AR6SoundVolume(class AR6SoundVolume const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6SoundVolume & operator=(class AR6SoundVolume const &);
protected:
	AR6SoundVolume();
private:
	static class UClass PrivateStaticClass();
};
struct UR6MObjAcceptableLosses_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
	INT iLost;                                                                //0
	class AR6Pawn* aPawn;                                                     //0
	FLOAT fTotal;                                                             //0
};
struct UR6MObjAcceptableLosses_execReset_Parms
{
};

// *****************************************************************************
// UR6MObjAcceptableLosses (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjAcceptableLosses : public UR6MissionObjectiveBase
{
public:
	BYTE m_ePawnTypeKiller;                                                   //0
	BYTE m_ePawnTypeDead;                                                     //0
	INT m_iAcceptableLost;                                                    //CPF_Edit
	INT m_iKillerTeamID;                                                      //0
	BITFIELD m_bConsiderSuicide : 1;                                          //CPF_Edit
};

// *****************************************************************************
// AR6PracticeModeGame (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PracticeModeGame : public AR6StoryModeGame
{
};

// *****************************************************************************
// AR6PlanningRangeGrenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningRangeGrenade : public AR6ReferenceIcons
{
};
struct AR6HUD_execMessage_Parms
{
	class APlayerReplicationInfo* PRI;                                        //CPF_Parm
	class FString Msg;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FName MsgType;                                                            //CPF_Parm
};
struct AR6HUD_execStopFadeToBlack_Parms
{
	class UCanvas* C;                                                         //0
};
struct AR6HUD_execStartFadeToBlack_Parms
{
	INT iSec;                                                                 //CPF_Parm
	INT iPercentageOfBlack;                                                   //CPF_Parm
	class UCanvas* C;                                                         //0
	INT iBlack;                                                               //0
	FLOAT fAlpha;                                                             //0
};
struct AR6HUD_execDisplayBombTimer_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
	FLOAT fPosX;                                                              //0
	FLOAT fPosY;                                                              //0
	FLOAT fPosYDelta;                                                         //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT fDefaultNamePosX;                                                   //0
	class FString szTime;                                                     //CPF_NeedCtorLink
	class FString szBomb;                                                     //CPF_NeedCtorLink
	class AR6IOBomb* pBomb;                                                   //0
};
struct AR6HUD_execDisplayRemainingTime_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fBkpOrigX;                                                          //0
	FLOAT fBkpOrigY;                                                          //0
	FLOAT fPosX;                                                              //0
	FLOAT fPosY;                                                              //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT fDefaultNamePosX;                                                   //0
	class FString szTime;                                                     //CPF_NeedCtorLink
};
struct AR6HUD_execDisplayNoDeathCamera_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FString szText;                                                     //CPF_NeedCtorLink
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT f;                                                                  //0
};
struct AR6HUD_execActivateNoDeathCameraMsg_Parms
{
	BITFIELD bToggleOn : 1;                                                   //CPF_Parm
};
struct AR6HUD_eventPostFadeRender_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
};
struct AR6HUD_execDrawHUD_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FVector viewLocation;                                               //0
	class FRotator ViewRotation;                                              //0
	INT flashBangCoefficient;                                                 //0
	class AR6Pawn* aPlayerPawn;                                               //0
};
struct AR6HUD_eventPostRender_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct AR6HUD_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct AR6HUD_execUpdateHudFilter_Parms
{
	class UR6GameOptions* GameOptions;                                        //0
	INT iStepCount;                                                           //0
	BITFIELD bDisplayFPWeapon : 1;                                            //0
};
struct AR6HUD_execInitBombTimer_Parms
{
	BITFIELD bDisplayTimeBomb : 1;                                            //CPF_Parm
	class AR6IOBomb* ioBomb;                                                  //0
};
struct AR6HUD_execTimer_Parms
{
};
struct AR6HUD_execResetOriginalData_Parms
{
};
struct AR6HUD_execPostBeginPlay_Parms
{
};
struct AR6HUD_execHudStep_Parms
{
	INT iBox;                                                                 //CPF_Parm
	INT iIDStep;                                                              //CPF_Parm
	BITFIELD bFlash : 1;                                                      //CPF_Parm
};
struct AR6HUD_execDrawNativeHUD_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct AR6HUD_execSetDefaultFontSettings_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct AR6HUD_execDisplayMessages_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};

// *****************************************************************************
// AR6HUD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6HUD : public AR6AbstractHUD
{
public:
	BYTE m_eLastMovementMode;                                                 //0
	BYTE m_eLastTeamState;                                                    //0
	BYTE m_eLastOtherTeamState[2];                                            //0
	BYTE m_eLastPlayerAPAction;                                               //0
	BYTE m_eLastGoCode;                                                       //0
	INT m_iBulletCount;                                                       //0
	INT m_iMaxBulletCount;                                                    //0
	INT m_iMagCount;                                                          //0
	INT m_iCurrentMag;                                                        //0
	BITFIELD m_bDrawHUDinScript : 1;                                          //CPF_Edit
	BITFIELD m_bGMIsSinglePlayer : 1;                                         //0
	BITFIELD m_bGMIsCoop : 1;                                                 //0
	BITFIELD m_bGMIsTeamAdverserial : 1;                                      //0
	BITFIELD m_bShowCharacterInfo : 1;                                        //0
	BITFIELD m_bShowCurrentTeamInfo : 1;                                      //0
	BITFIELD m_bShowOtherTeamInfo : 1;                                        //0
	BITFIELD m_bShowWeaponInfo : 1;                                           //0
	BITFIELD m_bShowFPWeapon : 1;                                             //0
	BITFIELD m_bShowWaypointInfo : 1;                                         //0
	BITFIELD m_bShowActionIcon : 1;                                           //0
	BITFIELD m_bShowMPRadar : 1;                                              //0
	BITFIELD m_bShowTeamMatesNames : 1;                                       //0
	BITFIELD m_bUpdateHUDInTraining : 1;                                      //0
	BITFIELD m_bDisplayTimeBomb : 1;                                          //0
	BITFIELD m_bDisplayRemainingTime : 1;                                     //0
	BITFIELD m_bNoDeathCamera : 1;                                            //0
	BITFIELD m_bLastSniperHold : 1;                                           //0
	BITFIELD m_bShowPressGoCode : 1;                                          //0
	BITFIELD m_bPressGoCodeCanBlink : 1;                                      //0
	FLOAT m_fPosX;                                                            //0
	FLOAT m_fPosY;                                                            //0
	FLOAT m_fScaleX;                                                          //0
	FLOAT m_fScaleY;                                                          //0
	FLOAT m_fScale;                                                           //0
	class AR6GameReplicationInfo* m_GameRepInfo;                              //0
	class AR6PlayerController* m_PlayerOwner;                                 //0
	class UTexture* m_FlashbangFlash;                                         //0
	class UTexture* m_TexNightVision;                                         //0
	class UTexture* m_TexHeatVision;                                          //0
	class UMaterial* m_TexHeatVisionActor;                                    //0
	class UMaterial* m_TexHUDElements;                                        //0
	class UMaterial* m_pCurrentMaterial;                                      //0
	class UTexture* m_HeartBeatMaskMul;                                       //0
	class UTexture* m_HeartBeatMaskAdd;                                       //0
	class UTexture* m_Waypoint;                                               //0
	class UTexture* m_WaypointArrow;                                          //0
	class UTexture* m_InGamePlanningPawnIcon;                                 //0
	class UTexture* m_LoadingScreen;                                          //0
	class UTexture* m_TexNoise;                                               //0
	class UMaterial* m_TexProneTrail;                                         //0
	class UFinalBlend* m_pAlphaBlend;                                         //0
	class AActor* m_pNextWayPoint;                                            //0
	class UMaterial* m_TexRadarTextures[10];                                  //0
	class AR6RainbowTeam* m_pLastRainbowTeam;                                 //0
	TArray<class AR6IOBomb*> m_aIOBombs;                                      //CPF_NeedCtorLink
	class FColor m_iCurrentTeamColor;                                         //0
	class FColor m_CharacterInfoBoxColor;                                     //0
	class FColor m_CharacterInfoOutlineColor;                                 //0
	class FColor m_WeaponBoxColor;                                            //0
	class FColor m_WeaponOutlineColor;                                        //0
	class FColor m_TeamBoxColor;                                              //0
	class FColor m_TeamBoxOutlineColor;                                       //0
	class FColor m_OtherTeamBoxColor;                                         //0
	class FColor m_OtherTeamOutlineColor;                                     //0
	class FColor m_WPIconBox;                                                 //0
	class FColor m_WPIconOutlineColor;                                        //0
	struct FR6HUDState m_HUDElements[16];                                     //0
	class FString m_szMovementMode;                                           //CPF_NeedCtorLink
	class FString m_szTeamState;                                              //CPF_NeedCtorLink
	class FString m_szOtherTeamState[2];                                      //CPF_NeedCtorLink
	class FString m_aszOtherTeamName[2];                                      //CPF_NeedCtorLink
	class FString m_szLastPlayerAPAction;                                     //CPF_NeedCtorLink
	class FString m_szPressGoCode;                                            //CPF_NeedCtorLink
	class FString m_szTeam;                                                   //CPF_NeedCtorLink
	virtual ~AR6HUD();
	virtual void Destroy();
	virtual void Serialize(class FArchive &);
	virtual void Spawned();
	virtual void DrawRadar(class FCameraSceneNode *, class UViewport *);
	virtual void DrawInGameMap(class FCameraSceneNode *, class UViewport *);
	AR6HUD(class AR6HUD const &);
	AR6HUD();
	void DisplayOtherTeamInfo(class FCanvasUtil &, class UCanvas *, INT, class AR6RainbowTeam *, class FColor &, INT);
	void DrawCharacterInfo(class AR6Rainbow *, FLOAT, FLOAT, class FColor &, class FCanvasUtil *, class UCanvas *);
	void DrawSingleCharacterInfo(class AR6Rainbow *, FLOAT, FLOAT, class FColor &, class FCanvasUtil *, class UCanvas *);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void UpdateHUDColors(class FColor);
	void execDrawNativeHUD(struct FFrame &, void * const);
	void execHudStep(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6HUD & operator=(class AR6HUD const &);
private:
	static class UClass PrivateStaticClass();
};
struct UR6GameManager_eventGMProcessMsg_Parms
{
	class FString _szMsg;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6GameManager_execSetLocalPlayerCtrl_Parms
{
	class APlayerController* _localPlayer;                                    //CPF_Parm
};
struct UR6GameManager_execGetGameMgrGameService_Parms
{
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GameManager_execSetConsoleInGameMgr_Parms
{
	class UConsole* _pConsole;                                                //CPF_Parm
};

// *****************************************************************************
// UR6GameManager (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6GameManager : public UR6AbstractGameManager
{
public:
	class UR6GSServers* m_GameMgrGameService;                                 //0
	class UR6Console* m_GameMgrConsole;                                       //0
	virtual ~UR6GameManager();
	virtual void InitializeGameService(class UConsole *);
	virtual void UnInitialize();
	virtual void GameServiceTick(class UConsole *);
	virtual void ConnectionInterrupted(INT);
	virtual void ClientLeaveServer();
	virtual void LaunchListenSrv(class FString, class FString);
	virtual void StartJoinServer(class FString, class FString, INT);
	virtual void StartPreJoinProcedure(INT);
	virtual INT StartLogInProcedure();
	virtual void SetGSCreateUbiServer(INT);
	virtual INT GetGSCreateUbiServer();
	void DoConsoleCommand(class FString, class UConsole *);
	void GSClientManager(class UConsole *);
	void InitializeGSClient();
	static void CDECL InternalConstructor(void *);
	void MSClientManager(class UConsole *);
	void MinimizeAndPauseMusic(class UConsole *);
	static class UClass * CDECL StaticClass();
	UR6GameManager(class UR6GameManager const &);
	UR6GameManager();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6GameManager & operator=(class UR6GameManager const &);
private:
	static class UClass PrivateStaticClass();
};

// -----------------------------------------------------------------------------
// PostBetweenRoundTime ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT PostBetweenRoundTime
{
};

// -----------------------------------------------------------------------------
// InBetweenRoundMenu ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT InBetweenRoundMenu
{
};
struct AR6MultiPlayerGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;                                     //CPF_Parm
	class FString Reason;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct AR6MultiPlayerGameInfo_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
	class AR6PlayerController* PlayerController;                              //0
	class AController* C;                                                     //0
};
struct AR6MultiPlayerGameInfo_execLogout_Parms
{
	class AController* Exiting;                                               //CPF_Parm
	INT iIdx;                                                                 //0
};
struct AR6MultiPlayerGameInfo_execSetCompilingStats_Parms
{
	BITFIELD bStatsSetting : 1;                                               //CPF_Parm
};
struct AR6MultiPlayerGameInfo_execIsTeamSelectionLocked_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6MultiPlayerGameInfo_execSetLockOnTeamSelection_Parms
{
	BITFIELD _bLocked : 1;                                                    //CPF_Parm
};
struct AR6MultiPlayerGameInfo_execProcessAutoBalanceTeam_Parms
{
	INT iAlphaNb;                                                             //0
	INT iBravoNb;                                                             //0
	BITFIELD _gameTypeTeamAdversarial : 1;                                    //0
	class AController* P;                                                     //0
};
struct AR6MultiPlayerGameInfo_execCanAutoBalancePlayer_Parms
{
	class AR6PlayerController* pCtrl;                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6MultiPlayerGameInfo_execResetPlayerTeam_Parms
{
	class AController* aPlayer;                                               //CPF_Parm
};
struct AR6MultiPlayerGameInfo_eventPostLogin_Parms
{
	class APlayerController* NewPlayer;                                       //CPF_Parm
	class AR6PlayerController* _NewPlayer;                                    //0
};
struct AR6MultiPlayerGameInfo_execIsBetweenRoundTimeOver_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6MultiPlayerGameInfo_eventLogin_Parms
{
	class FString Portal;                                                     //CPF_Parm|CPF_NeedCtorLink
	class FString Options;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString Error;                                                      //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class APlayerController* ReturnValue;                                     //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6AbstractInsertionZone* StartSpot;                                //0
	class AActor* CamSpot;                                                    //0
	class FVector CamLoc;                                                     //0
	class FRotator CamRot;                                                    //0
	class APlayerController* NewPlayer;                                       //0
	class AR6PlayerController* P;                                             //0
	class FString InClass;                                                    //CPF_NeedCtorLink
	class FString InName;                                                     //CPF_NeedCtorLink
	class FString InPassword;                                                 //CPF_NeedCtorLink
	class FString InChecksum;                                                 //CPF_NeedCtorLink
	BYTE InTeam;                                                              //0
	INT iSpawnPointNum;                                                       //0
	class FString szJoinMessage;                                              //CPF_NeedCtorLink
	class UR6ModMgr* pModManager;                                             //0
	INT _iPBEnabled;                                                          //0
};
struct AR6MultiPlayerGameInfo_execAtCapacity_Parms
{
	BITFIELD bSpectator : 1;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6MultiPlayerGameInfo_execInitObjectives_Parms
{
	INT Index;                                                                //0
};
struct AR6MultiPlayerGameInfo_execGetRainbowTeamColourIndex_Parms
{
	INT eTeamName;                                                            //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6MultiPlayerGameInfo_execGetSpawnPointNum_Parms
{
	class FString Options;                                                    //CPF_Parm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6MultiPlayerGameInfo_execLogVoteInfo_Parms
{
};
struct AR6MultiPlayerGameInfo_execHandleVotesTick_Parms
{
	INT _iForVotes;                                                           //0
	INT _iAgainstVotes;                                                       //0
	class AController* _itController;                                         //0
	class AR6PlayerController* _playerController;                             //0
	class FString szResultString;                                             //CPF_NeedCtorLink
	class FString szPlayerName;                                               //CPF_NeedCtorLink
	BITFIELD _bResult : 1;                                                    //0
	BITFIELD bChangeMapVote : 1;                                              //0
	class AR6GameReplicationInfo* pGRI;                                       //0
};
struct AR6MultiPlayerGameInfo_execProcessKickVote_Parms
{
	class APlayerController* _KickPlayer;                                     //CPF_Parm
	class FString InstigatorName;                                             //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AController* _itController;                                         //0
	class AR6PlayerController* _playerController;                             //0
};
struct AR6MultiPlayerGameInfo_execProcessChangeMapVote_Parms
{
	class FString InstigatorName;                                             //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AController* _itController;                                         //0
	class AR6PlayerController* _playerController;                             //0
};
struct AR6MultiPlayerGameInfo_execIncrementRoundsPlayed_Parms
{
	class AController* P;                                                     //0
	class AR6PlayerController* _aPlayerController;                            //0
};
struct AR6MultiPlayerGameInfo_execGetNbHumanPlayerInTeam_Parms
{
	INT iAlphaNb;                                                             //CPF_Parm|CPF_OutParm
	INT iBravoNb;                                                             //CPF_Parm|CPF_OutParm
	class AController* P;                                                     //0
};
struct AR6MultiPlayerGameInfo_execResetPlayerReady_Parms
{
	class AController* P;                                                     //0
};

// *****************************************************************************
// AR6MultiPlayerGameInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MultiPlayerGameInfo : public AR6GameInfo
{
public:
	BITFIELD m_TeamSelectionLocked : 1;                                       //0
	FLOAT m_fNextCheckPlayerReadyTime;                                        //0
	FLOAT m_fLastUpdateTime;                                                  //0
	class UR6MObjTimer* m_missionObjTimer;                                    //0
	class USound* m_sndSoundTimeFailure;                                      //0
	virtual ~AR6MultiPlayerGameInfo();
	AR6MultiPlayerGameInfo(class AR6MultiPlayerGameInfo const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6MultiPlayerGameInfo & operator=(class AR6MultiPlayerGameInfo const &);
protected:
	AR6MultiPlayerGameInfo();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// AR6WaterVolume (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6WaterVolume : public AR6SoundVolume
{
public:
	virtual ~AR6WaterVolume();
	AR6WaterVolume(class AR6WaterVolume const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6WaterVolume & operator=(class AR6WaterVolume const &);
protected:
	AR6WaterVolume();
private:
	static class UClass PrivateStaticClass();
};
struct AR6InstructionSoundVolume_execSetHudStep_Parms
{
};
struct AR6InstructionSoundVolume_execReadyToChangeText_Parms
{
};
struct AR6InstructionSoundVolume_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct AR6InstructionSoundVolume_execChangeTextAndSound_Parms
{
};
struct AR6InstructionSoundVolume_execStopInstruction_Parms
{
};
struct AR6InstructionSoundVolume_execSkipToNextInstruction_Parms
{
};
struct AR6InstructionSoundVolume_eventUnTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AController* C;                                                     //0
};
struct AR6InstructionSoundVolume_eventTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
	class AController* C;                                                     //0
};
struct AR6InstructionSoundVolume_execResetOriginalData_Parms
{
};
struct AR6InstructionSoundVolume_execUseSound_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6InstructionSoundVolume (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6InstructionSoundVolume : public AR6SoundVolume
{
public:
	INT m_iBoxNumber;                                                         //CPF_Edit
	INT m_iSoundIndex;                                                        //0
	INT m_iHudStep;                                                           //0
	INT m_IDHudStep;                                                          //0
	INT m_fTimerStep;                                                         //0
	BITFIELD m_bSoundIsPlaying : 1;                                           //0
	FLOAT m_fTime;                                                            //0
	FLOAT m_fTimerSound;                                                      //0
	FLOAT m_fTimeHud;                                                         //0
	class USound* m_sndIntructionSoundStop;                                   //CPF_Edit
	class AR6TrainingMgr* m_TrainingMgr;                                      //0
	virtual ~AR6InstructionSoundVolume();
	AR6InstructionSoundVolume(class AR6InstructionSoundVolume const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void execUseSound(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6InstructionSoundVolume & operator=(class AR6InstructionSoundVolume const &);
protected:
	AR6InstructionSoundVolume();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UR6MissionRoster (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MissionRoster : public UObject
{
public:
	TArray<class UR6Operative*> m_MissionOperatives;                          //CPF_NeedCtorLink
	virtual ~UR6MissionRoster();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void TransferFile(class FArchive &);
	UR6MissionRoster(class UR6MissionRoster const &);
	UR6MissionRoster();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6MissionRoster & operator=(class UR6MissionRoster const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UR6PlayerCampaign (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PlayerCampaign : public UObject
{
public:
	BYTE m_bCampaignCompleted;                                                //0
	INT m_iDifficultyLevel;                                                   //0
	INT m_iNoMission;                                                         //0
	class UR6MissionRoster* m_OperativesMissionDetails;                       //0
	class FString m_FileName;                                                 //CPF_NeedCtorLink
	class FString m_CampaignFileName;                                         //CPF_NeedCtorLink
	virtual ~UR6PlayerCampaign();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6PlayerCampaign(class UR6PlayerCampaign const &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6PlayerCampaign & operator=(class UR6PlayerCampaign const &);
protected:
	UR6PlayerCampaign();
private:
	static class UClass PrivateStaticClass();
};
struct UR6FileManagerCampaign_execSaveCampaign_Parms
{
	class UR6PlayerCampaign* MyCampaign;                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6FileManagerCampaign_execLoadCampaign_Parms
{
	class UR6PlayerCampaign* MyCampaign;                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UR6FileManagerCampaign (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6FileManagerCampaign : public UR6FileManager
{
public:
	virtual ~UR6FileManagerCampaign();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6FileManagerCampaign(class UR6FileManagerCampaign const &);
	void execLoadCampaign(struct FFrame &, void * const);
	void execSaveCampaign(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6FileManagerCampaign & operator=(class UR6FileManagerCampaign const &);
protected:
	UR6FileManagerCampaign();
private:
	static class UClass PrivateStaticClass();
};
struct UR6FileManagerPlanning_execGetNumberOfFiles_Parms
{
	class FString MapName;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString szGameType;                                                 //CPF_Parm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6FileManagerPlanning_execSavePlanning_Parms
{
	class FString szMapName;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString szLocalizedMapName;                                         //CPF_Parm|CPF_NeedCtorLink
	class FString szEnglishGT;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString szGameType;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString szFileName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class AR6StartGameInfo* sgi;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6FileManagerPlanning_execLoadPlanning_Parms
{
	class FString szMapName;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString szLocalizedMapName;                                         //CPF_Parm|CPF_NeedCtorLink
	class FString szEnglishGT;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString szGameType;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString szFileName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class AR6StartGameInfo* sgi;                                              //CPF_Parm
	class FString LoadErrorMsgMapName;                                        //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString LoadErrorMsgGameType;                                       //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UR6FileManagerPlanning (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6FileManagerPlanning : public UR6FileManager
{
public:
	INT m_iCurrentTeam;                                                       //0
	virtual ~UR6FileManagerPlanning();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6FileManagerPlanning(class UR6FileManagerPlanning const &);
	void execGetNumberOfFiles(struct FFrame &, void * const);
	void execLoadPlanning(struct FFrame &, void * const);
	void execSavePlanning(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6FileManagerPlanning & operator=(class UR6FileManagerPlanning const &);
protected:
	UR6FileManagerPlanning();
private:
	static class UClass PrivateStaticClass();
};
struct UR6PlanningInfo_execSetActionType_Parms
{
	BYTE eNewType;                                                            //CPF_Parm
};
struct UR6PlanningInfo_execSetGrenadeLocation_Parms
{
	class FVector vHitLocation;                                               //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execGetNextDoorToBreach_Parms
{
	class AActor* aPoint;                                                     //CPF_Parm
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6ActionPoint* nextActionPoint;                                    //0
};
struct UR6PlanningInfo_execGetDoorToBreach_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execGetSnipingCoordinates_Parms
{
	class FVector vLocation;                                                  //CPF_Parm|CPF_OutParm
	class FRotator rRotation;                                                 //CPF_Parm|CPF_OutParm
};
struct UR6PlanningInfo_execAjustSnipeDirection_Parms
{
	class FVector vHitLocation;                                               //CPF_Parm
};
struct UR6PlanningInfo_execSetCurrentPointAction_Parms
{
	BYTE eAction;                                                             //CPF_Parm
};
struct UR6PlanningInfo_execDeleteAllNode_Parms
{
};
struct UR6PlanningInfo_execDeleteNode_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6ActionPoint* pCurrentPoint;                                      //0
	class AR6ReferenceIcons* tempAI;                                          //0
	class AR6PathFlag* tempPF;                                                //0
};
struct UR6PlanningInfo_execSetAsCurrentNode_Parms
{
	class AR6ActionPoint* pSelectedNode;                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execResetID_Parms
{
	class AR6ActionPoint* pNode;                                              //0
};
struct UR6PlanningInfo_execRemovePointsRefsToCtrl_Parms
{
	class AR6ActionPoint* pActionPoint;                                       //0
	INT iCurrentNode;                                                         //0
};
struct UR6PlanningInfo_execSetToEndNode_Parms
{
};
struct UR6PlanningInfo_execSetToStartNode_Parms
{
};
struct UR6PlanningInfo_execSetToNextNode_Parms
{
};
struct UR6PlanningInfo_execSetToPrevNode_Parms
{
};
struct UR6PlanningInfo_execSetPointRotation_Parms
{
	class FVector vDirection;                                                 //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct UR6PlanningInfo_execSetLastPointRotation_Parms
{
	class FVector vDirection;                                                 //0
	class AR6InsertionZone* anInsertionZone;                                  //0
	class FRotator rFirstPointRotation;                                       //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct UR6PlanningInfo_execMoveCurrentPoint_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6ActionPoint* BehindMe;                                           //0
	class AR6ActionPoint* FrontMe;                                            //0
	class AR6ActionPoint* CurrentPoint;                                       //0
};
struct UR6PlanningInfo_execAddPoint_Parms
{
	class AR6ActionPoint* pNewPoint;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6ActionPoint* BehindMe;                                           //0
};
struct UR6PlanningInfo_execInsertPoint_Parms
{
	class AR6ActionPoint* pNewPoint;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6ActionPoint* BehindMe;                                           //0
	class AR6ActionPoint* FrontMe;                                            //0
};
struct UR6PlanningInfo_execSelectTeam_Parms
{
	BITFIELD bIsSelected : 1;                                                 //CPF_Parm
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct UR6PlanningInfo_execSetPathDisplay_Parms
{
	BITFIELD bDisplay : 1;                                                    //CPF_Parm
	INT iCurrentNode;                                                         //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct UR6PlanningInfo_execResetPointsOrientation_Parms
{
};
struct UR6PlanningInfo_execInitPlanning_Parms
{
	INT iTeamId;                                                              //CPF_Parm
	class AR6PlanningCtrl* pPlanningCtrl;                                     //CPF_Parm
	INT iBackupLastNode;                                                      //0
	INT iCurrentActionPoint;                                                  //0
	INT iLoadedNumberOfNodes;                                                 //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
	class AR6ActionPoint* pNextPoint;                                         //0
};
struct UR6PlanningInfo_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
	class AR6GameInfo* Game;                                                  //0
	INT iCurrentActionPoint;                                                  //0
};
struct UR6PlanningInfo_execFindPathToNextPoint_Parms
{
	class AR6ActionPoint* pStartPoint;                                        //CPF_Parm
	class AR6ActionPoint* pPointToReach;                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execDeletePoint_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execInsertToTeam_Parms
{
	class AR6ActionPoint* pNewPoint;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execAddToTeam_Parms
{
	class AR6ActionPoint* pNewPoint;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execReadNode_Parms
{
	class AR6PlayerController* pMyPlayer;                                     //0
	class AActor* NextPoint;                                                  //0
	class AR6RainbowTeam* pCurrentTeam;                                       //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct UR6PlanningInfo_execMemberReached_Parms
{
	class AR6ActionPoint* PTarget;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class FVector vDiff;                                                      //0
	FLOAT fZDiff;                                                             //0
};
struct UR6PlanningInfo_execNotifyActionPoint_Parms
{
	BYTE eMsg;                                                                //CPF_Parm
	BYTE eCode;                                                               //CPF_Parm
	class AR6ActionPoint* pPrevPoint;                                         //0
	class AR6RainbowTeam* pCurrentTeam;                                       //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct UR6PlanningInfo_execGetActionLocation_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execGetNbActionPoint_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execGetActionPointID_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execSetToPreviousActionPoint_Parms
{
};
struct UR6PlanningInfo_execPreviewNextActionPoint_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AActor* pPointToReturn;                                             //0
};
struct UR6PlanningInfo_execGetNextActionPoint_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AActor* pPointToReturn;                                             //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct UR6PlanningInfo_execSkipCurrentDestination_Parms
{
	class AR6ActionPoint* pPrevPoint;                                         //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
	class AR6RainbowTeam* pCurrentTeam;                                       //0
};
struct UR6PlanningInfo_execGetFirstActionPoint_Parms
{
	class AActor* ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execGetMovementSpeed_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execSetMovementSpeed_Parms
{
	BYTE eNewSpeed;                                                           //CPF_Parm
};
struct UR6PlanningInfo_execGetMovementMode_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execSetMovementMode_Parms
{
	BYTE eNewMode;                                                            //CPF_Parm
};
struct UR6PlanningInfo_execNextActionPointHasAction_Parms
{
	class AActor* aPoint;                                                     //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6ActionPoint* actionPoint;                                        //0
	class AR6ActionPoint* nextActionPoint;                                    //0
};
struct UR6PlanningInfo_execGetAction_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execSetAction_Parms
{
	BYTE eNewAction;                                                          //CPF_Parm
};
struct UR6PlanningInfo_execGetActionType_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execGetNextPoint_Parms
{
	class AR6ActionPoint* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6PlanningInfo_execGetPoint_Parms
{
	class AR6ActionPoint* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UR6PlanningInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PlanningInfo : public UR6AbstractPlanningInfo
{
public:
	virtual ~UR6PlanningInfo();
	virtual void AddPoint(class AActor *);
	virtual void TransferFile(class FArchive &);
	virtual class AActor * GetTeamLeader();
	static void CDECL InternalConstructor(void *);
	INT NoStairsBetweenPoints(class AActor *);
	static class UClass * CDECL StaticClass();
	UR6PlanningInfo(class UR6PlanningInfo const &);
	UR6PlanningInfo();
	void execAddToTeam(struct FFrame &, void * const);
	void execDeletePoint(struct FFrame &, void * const);
	void execFindPathToNextPoint(struct FFrame &, void * const);
	void execInsertToTeam(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6PlanningInfo & operator=(class UR6PlanningInfo const &);
private:
	static class UClass PrivateStaticClass();
};
struct AR6PlanningCtrl_execStopPlayingPlanning_Parms
{
};
struct AR6PlanningCtrl_execStartPlayingPlanning_Parms
{
};
struct AR6PlanningCtrl_execMoveCamOver_Parms
{
};
struct AR6PlanningCtrl_execGetMovementMode_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlanningCtrl_execGetCurrentActionType_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlanningCtrl_execGetCurrentPoint_Parms
{
	class AR6ActionPoint* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlanningCtrl_execGotoNode_Parms
{
};
struct AR6PlanningCtrl_execGotoPrevNode_Parms
{
};
struct AR6PlanningCtrl_execGoToNextNode_Parms
{
};
struct AR6PlanningCtrl_execGotoLastNode_Parms
{
};
struct AR6PlanningCtrl_execGotoFirstNode_Parms
{
};
struct AR6PlanningCtrl_execDeleteEverySingleNode_Parms
{
};
struct AR6PlanningCtrl_execPositionCameraOnInsertionZone_Parms
{
	class AR6InsertionZone* anInsertionZone;                                  //0
};
struct AR6PlanningCtrl_execDeleteAllNode_Parms
{
};
struct AR6PlanningCtrl_execDeleteOneNode_Parms
{
};
struct AR6PlanningCtrl_execCastActionPointAt_Parms
{
	class FVector vLocation;                                                  //CPF_Parm
	INT iFirstFloor;                                                          //CPF_Parm
	INT iSecondFloor;                                                         //CPF_Parm
	INT X;                                                                    //CPF_Parm
	INT Y;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bResult : 1;                                                     //0
	BITFIELD bReturnValue : 1;                                                //0
	class AR6ActionPoint* pNewActionPoint;                                    //0
	class UR6PlanningInfo* pTeamInfo;                                         //0
	class AR6InsertionZone* pInsertionZone;                                   //0
};
struct AR6PlanningCtrl_execMoveActionPointTo_Parms
{
	class FVector vHitLocation;                                               //CPF_Parm
	INT iFirstFloor;                                                          //CPF_Parm
	INT iSecondFloor;                                                         //CPF_Parm
	class AR6ActionPoint* pCurrentActionPoint;                                //0
	class FVector vBackupLocation;                                            //0
};
struct AR6PlanningCtrl_execGetActionTypeTexture_Parms
{
	BYTE EActionType;                                                         //CPF_Parm
	INT iMilestone;                                                           //CPF_Parm
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlanningCtrl_execResetIDs_Parms
{
};
struct AR6PlanningCtrl_execResetAllID_Parms
{
};
struct AR6PlanningCtrl_execCancelActionPointAction_Parms
{
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct AR6PlanningCtrl_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FVector vHitLocation;                                               //0
};
struct AR6PlanningCtrl_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AActor* pHitActor;                                                  //0
	class AActor* pHitActorBackup;                                            //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class FVector vSpawnOffset;                                               //0
	class AR6ActionPoint* FirstActionPoint;                                   //0
	INT iChangeLevelTo;                                                       //0
	class AR6Ladder* aHitActorLadder;                                         //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct AR6PlanningCtrl_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AActor* pHitActor;                                                  //0
	class FVector vHitLocation;                                               //0
	INT iChangeLevelTo;                                                       //0
};
struct AR6PlanningCtrl_execRMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct AR6PlanningCtrl_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AActor* pHitActor;                                                  //0
	class FVector vHitLocation;                                               //0
	class FVector vHitNormal;                                                 //0
	class FVector vSpawnOffset;                                               //0
	class AR6ActionPoint* FirstActionPoint;                                   //0
	INT iChangeLevelTo;                                                       //0
	class AR6Ladder* aHitActorLadder;                                         //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct AR6PlanningCtrl_execChangeLevelDisplay_Parms
{
	INT iStep;                                                                //CPF_Parm
};
struct AR6PlanningCtrl_execAjust3DRotation_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct AR6PlanningCtrl_execTurnOff3DMove_Parms
{
};
struct AR6PlanningCtrl_execTurnOn3DMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct AR6PlanningCtrl_execTurnOff3DView_Parms
{
};
struct AR6PlanningCtrl_execToggle3DView_Parms
{
};
struct AR6PlanningCtrl_execAdjustView_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct AR6PlanningCtrl_execFixFOV_Parms
{
};
struct AR6PlanningCtrl_eventPlayerCalcView_Parms
{
	class AActor* aViewActor;                                                 //CPF_Parm|CPF_OutParm
	class FVector vCameraLocation;                                            //CPF_Parm|CPF_OutParm
	class FRotator rCameraRotation;                                           //CPF_Parm|CPF_OutParm
};
struct AR6PlanningCtrl_execViewGoldTeam_Parms
{
};
struct AR6PlanningCtrl_execViewGreenTeam_Parms
{
};
struct AR6PlanningCtrl_execViewRedTeam_Parms
{
};
struct AR6PlanningCtrl_execSwitchToGoldTeam_Parms
{
	BITFIELD bForceFunction : 1;                                              //CPF_Parm
};
struct AR6PlanningCtrl_execSwitchToGreenTeam_Parms
{
	BITFIELD bForceFunction : 1;                                              //CPF_Parm
};
struct AR6PlanningCtrl_execSwitchToRedTeam_Parms
{
	BITFIELD bForceFunction : 1;                                              //CPF_Parm
};
struct AR6PlanningCtrl_execLastWaypoint_Parms
{
};
struct AR6PlanningCtrl_execFirstWaypoint_Parms
{
};
struct AR6PlanningCtrl_execNextWaypoint_Parms
{
};
struct AR6PlanningCtrl_execPrevWaypoint_Parms
{
};
struct AR6PlanningCtrl_execDeleteWaypoint_Parms
{
};
struct AR6PlanningCtrl_eventPlayerTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
	class FVector vAxisX;                                                     //0
	class FVector vAxisY;                                                     //0
	class FVector vAxisZ;                                                     //0
	class FVector vHitLocation;                                               //0
	FLOAT fMovementX;                                                         //0
	FLOAT fMovementY;                                                         //0
	FLOAT fAngle;                                                             //0
	INT iCurrentPlanning;                                                     //0
	class AR6ActionPoint* pCurrentPoint;                                      //0
};
struct AR6PlanningCtrl_eventDestroyed_Parms
{
};
struct AR6PlanningCtrl_execInitNewPlanning_Parms
{
	INT iSelectedTeam;                                                        //CPF_Parm
};
struct AR6PlanningCtrl_execSetPlanningInfo_Parms
{
};
struct AR6PlanningCtrl_execSet3DViewPosition_Parms
{
	INT NewX;                                                                 //CPF_Parm
	INT NewY;                                                                 //CPF_Parm
	INT NewH;                                                                 //CPF_Parm
	INT NewW;                                                                 //CPF_Parm
};
struct AR6PlanningCtrl_execPostBeginPlay_Parms
{
	class AZoneInfo* PZone;                                                   //0
	INT iCurrentPlanning;                                                     //0
	INT iCurrentInsertionNumber;                                              //0
	class AR6InsertionZone* anInsertionZone;                                  //0
	class AR6IORotatingDoor* aDoor;                                           //0
	class AR6IOSlidingWindow* aWindow;                                        //0
	class AR6ReferenceIcons* pSpawnedIcon;                                    //0
	class AR6ReferenceIcons* RefIco;                                          //0
	class AR6AbstractInsertionZone* NavPoint;                                 //0
	class AR6AbstractExtractionZone* ExtZone;                                 //0
};
struct AR6PlanningCtrl_execPlanningTrace_Parms
{
	class FVector vTraceEnd;                                                  //CPF_Parm
	class FVector vTraceStart;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlanningCtrl_execGetXYPoint_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT Height;                                                             //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6PlanningCtrl_execGetClickResult_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FVector HitLocation;                                                //CPF_Parm|CPF_OutParm
	class AActor* HitActor;                                                   //CPF_Parm|CPF_OutParm
	INT iChangeLevelTo;                                                       //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6PlanningCtrl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningCtrl : public APlayerController
{
public:
	INT m_iCurrentTeam;                                                       //0
	INT m_3DWindowPositionX;                                                  //0
	INT m_3DWindowPositionY;                                                  //0
	INT m_3DWindowPositionW;                                                  //0
	INT m_3DWindowPositionH;                                                  //0
	INT m_iLevelDisplay;                                                      //0
	BITFIELD m_bRender3DView : 1;                                             //0
	BITFIELD m_bMove3DView : 1;                                               //0
	BITFIELD m_bActionPointSelected : 1;                                      //0
	BITFIELD m_bCanMoveFirstPoint : 1;                                        //0
	BITFIELD m_bClickToFindLocation : 1;                                      //0
	BITFIELD m_bClickedOnRange : 1;                                           //0
	BITFIELD m_bSetSnipeDirection : 1;                                        //0
	BITFIELD m_bPlayMode : 1;                                                 //0
	BITFIELD m_bLockCamera : 1;                                               //0
	BITFIELD bShowLog : 1;                                                    //CPF_Edit
	BITFIELD m_bFirstTick : 1;                                                //0
	FLOAT m_fLastMouseX;                                                      //0
	FLOAT m_fLastMouseY;                                                      //0
	FLOAT m_fZoom;                                                            //0
	FLOAT m_fZoomDelta;                                                       //0
	FLOAT m_fZoomRate;                                                        //0
	FLOAT m_fZoomMin;                                                         //0
	FLOAT m_fZoomMax;                                                         //0
	FLOAT m_fZoomFactor;                                                      //0
	FLOAT m_fCameraAngle;                                                     //0
	FLOAT m_fAngleRate;                                                       //0
	FLOAT m_fAngleMax;                                                        //0
	FLOAT m_fRotateDelta;                                                     //0
	FLOAT m_fRotateRate;                                                      //0
	FLOAT m_fCamRate;                                                         //0
	FLOAT m_fCastingHeight;                                                   //CPF_Edit
	FLOAT m_fDebugRangeScale;                                                 //0
	class UR6PlanningInfo* m_pTeamInfo[3];                                    //0
	class UR6FileManagerPlanning* m_pFileManager;                             //0
	class AR6CameraDirection* m_pCameraDirIcon;                               //0
	class AActor* m_pOldHitActor;                                             //0
	class UTexture* m_pIconTex[12];                                           //0
	class AActor* m_CamSpot;                                                  //0
	class USound* m_PlanningBadClickSnd;                                      //0
	class USound* m_PlanningGoodClickSnd;                                     //0
	class USound* m_PlanningRemoveSnd;                                        //0
	class FVector m_vCurrentCameraPos;                                        //0
	class FVector m_vCamPos;                                                  //0
	class FVector m_vCamPosNoRot;                                             //0
	class FVector m_vCamDesiredPos;                                           //0
	class FRotator m_rCamRot;                                                 //0
	class FVector m_vCamDelta;                                                //0
	class FVector m_vMinLocation;                                             //0
	class FVector m_vMaxLocation;                                             //0
	virtual ~AR6PlanningCtrl();
	AR6PlanningCtrl(class AR6PlanningCtrl const &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void execGetClickResult(struct FFrame &, void * const);
	void execGetXYPoint(struct FFrame &, void * const);
	void execPlanningTrace(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6PlanningCtrl & operator=(class AR6PlanningCtrl const &);
protected:
	AR6PlanningCtrl();
private:
	static class UClass PrivateStaticClass();
};
struct AR6ActionPoint_execRotateView_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fDeltaX;                                                            //0
	FLOAT fDeltaY;                                                            //0
	class FRotator NodeRotation;                                              //0
};
struct AR6ActionPoint_execInit3DView_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct AR6ActionPoint_execSetDrawColor_Parms
{
	class FColor NewColor;                                                    //CPF_Parm
};
struct AR6ActionPoint_execTimer_Parms
{
};
struct AR6ActionPoint_execSelectPoint_Parms
{
};
struct AR6ActionPoint_execUnselectPoint_Parms
{
};
struct AR6ActionPoint_execSetFirstPointTexture_Parms
{
};
struct AR6ActionPoint_execCanIThrowGrenadeThroughDoor_Parms
{
	class FVector vHitLocation;                                               //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6IORotatingDoor* pRotatingDoor;                                   //0
	class AR6Door* pDoorNav;                                                  //0
};
struct AR6ActionPoint_execSetGrenade_Parms
{
	class FVector vHitLocation;                                               //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6PlanningGrenade* pGrenadeIcon;                                   //0
};
struct AR6ActionPoint_execSetMileStoneIcon_Parms
{
	INT iMilestone;                                                           //CPF_Parm
};
struct AR6ActionPoint_execFindDoor_Parms
{
	class FVector vDistanceVect;                                              //0
	INT iPreviousDistance;                                                    //0
	class AR6IORotatingDoor* pRotatingDoor;                                   //0
	class AR6Door* pDoorTest;                                                 //0
};
struct AR6ActionPoint_execSetPointAction_Parms
{
	BYTE eAction;                                                             //CPF_Parm
	BITFIELD bLoading : 1;                                                    //CPF_Parm
};
struct AR6ActionPoint_execChangeActionType_Parms
{
	BYTE eNewType;                                                            //CPF_Parm
	BITFIELD bDoIReset : 1;                                                   //0
};
struct AR6ActionPoint_execCanIDrawLine_Parms
{
	class AActor* FromPoint;                                                  //CPF_Parm
	class AActor* ToPoint;                                                    //CPF_Parm
	INT iDisplayingFloor;                                                     //CPF_Parm
	BITFIELD bDisplayInfo : 1;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6Stairs* StairsFromPoint;                                         //0
	class AR6Stairs* StairsToPoint;                                           //0
};
struct AR6ActionPoint_execDrawPath_Parms
{
	BITFIELD bDisplayInfo : 1;                                                //CPF_Parm
	INT iCurrentPoint;                                                        //0
	class UMaterial* pLineMaterial;                                           //0
	FLOAT fDashSize;                                                          //0
};
struct AR6ActionPoint_execInitMyPathFlag_Parms
{
	class AR6PathFlag* pPrevFlag;                                             //0
};

// *****************************************************************************
// AR6ActionPoint (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ActionPoint : public AR6ActionPointAbstract
{
public:
	BYTE m_eMovementMode;                                                     //0
	BYTE m_eMovementSpeed;                                                    //0
	BYTE m_eAction;                                                           //0
	BYTE m_eActionType;                                                       //0
	INT m_iRainbowTeamName;                                                   //0
	INT m_iMileStoneNum;                                                      //0
	INT m_iNodeID;                                                            //0
	INT m_iInitialMousePosX;                                                  //0
	INT m_iInitialMousePosY;                                                  //0
	BITFIELD m_bActionCompleted : 1;                                          //0
	BITFIELD m_bActionPointReached : 1;                                       //0
	BITFIELD m_bDoorInRange : 1;                                              //0
	BITFIELD bShowLog : 1;                                                    //0
	class UTexture* m_pCurrentTexture;                                        //0
	class UTexture* m_pSelected;                                              //0
	class AR6IORotatingDoor* pDoor;                                           //0
	class AR6PlanningCtrl* m_pPlanningCtrl;                                   //0
	class AR6PathFlag* m_pMyPathFlag;                                         //0
	class AR6ReferenceIcons* m_pActionIcon;                                   //0
	class FColor m_CurrentColor;                                              //0
	class FVector m_vActionDirection;                                         //0
	class FRotator m_rActionRotation;                                         //0
	virtual ~AR6ActionPoint();
	AR6ActionPoint(class AR6ActionPoint const &);
	AR6ActionPoint();
	static void CDECL InternalConstructor(void *);
	void SetRotationToward(class FVector);
	static class UClass * CDECL StaticClass();
	void TransferFile(class FArchive &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AR6ActionPoint & operator=(class AR6ActionPoint const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UR6PlayerCustomMission (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PlayerCustomMission : public UObject
{
public:
	TArray<class FString> m_aCampaignFileName;                                //CPF_NeedCtorLink
	TArray<INT> m_iNbMapUnlock;                                               //CPF_NeedCtorLink
	virtual ~UR6PlayerCustomMission();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6PlayerCustomMission(class UR6PlayerCustomMission const &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6PlayerCustomMission & operator=(class UR6PlayerCustomMission const &);
protected:
	UR6PlayerCustomMission();
private:
	static class UClass PrivateStaticClass();
};

enum eLeaveGame{
	 LG_MainMenu=0
	,LG_NextLevel=1
	,LG_Trainning=2
	,LG_MultiPlayerMenu=3
	,LG_RetryPlanningCustomMission=4
	,LG_CustomMissionMenu=5
	,LG_RetryPlanningCampaign=6
	,LG_QuitGame=7
	,LG_MultiPlayerError=8
	,LG_InitMod=9
};

// -----------------------------------------------------------------------------
// TrainingInstruction ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT TrainingInstruction
{
};

// -----------------------------------------------------------------------------
// Game ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Game
{
};
struct UR6Console_execGetRestKitDescName_Parms
{
	class AGameReplicationInfo* gameRepInfo;                                  //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //CPF_Parm
	INT _iCount;                                                              //0
	BITFIELD _bFound : 1;                                                     //0
	class UClass* WeaponClass;                                                //0
	class AR6GameReplicationInfo* _GRI;                                       //0
	class UR6Mod* pCurrentMod;                                                //0
	INT i;                                                                    //0
};
struct UR6Console_execGetAllMissionDescriptions_Parms
{
	class FString szCurrentMapDir;                                            //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iFiles;                                                               //0
	INT iIniFiles;                                                            //0
	INT Index;                                                                //0
	class UR6FileManager* pIniFileManager;                                    //0
	class FString szName;                                                     //CPF_NeedCtorLink
	class FString szFileName;                                                 //CPF_NeedCtorLink
	class FString szIniName;                                                  //CPF_NeedCtorLink
	class FString szIniFilename;                                              //CPF_NeedCtorLink
	BITFIELD bMissionIsValid : 1;                                             //0
	class UR6FileManager* pFileManager;                                       //0
};
struct UR6Console_execMapAlreadyInList_Parms
{
	class FString szIniFilename;                                              //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UR6Console_execUpdateCurrentMapAvailable_Parms
{
	class UR6PlayerCampaign* pCampaign;                                       //CPF_Parm
	BITFIELD bCheckCampaignMission : 1;                                       //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bFileChange : 1;                                                 //0
	BITFIELD bInTab : 1;                                                      //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	class FString szIniFile;                                                  //CPF_NeedCtorLink
	class UR6Campaign* pCampaignMatch;                                        //0
};
struct UR6Console_execUnlockMissions_Parms
{
	INT i;                                                                    //0
	INT iMissionIndex;                                                        //0
	INT iMaxMissionIndex;                                                     //0
	class UR6Campaign* campaign;                                              //0
};
struct UR6Console_execGetCampaignFromString_Parms
{
	class FString szName;                                                     //CPF_Parm|CPF_NeedCtorLink
	class UR6Campaign* ReturnValue;                                           //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6Console_execGetSpawnNumber_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6StartGameInfo* StartGameInfo;                                    //0
};
struct UR6Console_execSendGoCode_Parms
{
	BYTE eGo;                                                                 //CPF_Parm
	INT i;                                                                    //0
};
struct UR6Console_execunlock_Parms
{
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6Console_execStartR6Game_Parms
{
	BITFIELD bResetLevel : 1;                                                 //CPF_Parm
	class AR6PlayerController* aPC;                                           //0
	class AR6GameInfo* pGameInfo;                                             //0
};
struct UR6Console_execLaunchTraining_Parms
{
};
struct UR6Console_execLaunchR6MultiPlayerGame_Parms
{
};
struct UR6Console_execLaunchR6Game_Parms
{
	BITFIELD bSkipFrameAndStart_ : 1;                                         //CPF_Parm
};
struct UR6Console_execResetR6Game_Parms
{
};
struct UR6Console_execCreateInGameMenus_Parms
{
	class UUWindowMenuClassDefines* pMenuDefGSServers;                        //0
};
struct UR6Console_execPreloadMapForPlanning_Parms
{
	INT iPlayerSpawnNumber;                                                   //0
};
struct UR6Console_execCloseR6MainMenu_Parms
{
	BITFIELD bKeepInputSystem : 1;                                            //CPF_Parm
};
struct UR6Console_execCleanPlanning_Parms
{
};
struct UR6Console_execCleanSound_Parms
{
	BYTE _bwhatToDo;                                                          //CPF_Parm
};
struct UR6Console_execLeaveR6Game_Parms
{
	BYTE _bwhatToDo;                                                          //CPF_Parm
	class UCanvas* C;                                                         //0
	BITFIELD bCleanUp : 1;                                                    //0
	class UR6ServerInfo* ServerInfo;                                          //0
};
struct UR6Console_execCleanAndChangeMod_Parms
{
	TArray<BYTE> _AWIDListToUse;                                              //CPF_Parm|CPF_NeedCtorLink
};
struct UR6Console_execNotifyLevelChange_Parms
{
};
struct UR6Console_eventLaunchR6MainMenu_Parms
{
	class UUWindowMenuClassDefines* pMenuDefGSServers;                        //0
	INT i;                                                                    //0
};
struct UR6Console_execLaunchInstructionMenu_Parms
{
	class AR6InstructionSoundVolume* pISV;                                    //CPF_Parm
	BITFIELD bShow : 1;                                                       //CPF_Parm
	INT iBox;                                                                 //CPF_Parm
	INT iParagraph;                                                           //CPF_Parm
};
struct UR6Console_execKeyEvent_Parms
{
	BYTE Key;                                                                 //CPF_Parm
	BYTE Action;                                                              //CPF_Parm
	FLOAT Delta;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6Console_eventGetStoreGamePwd_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6Console_execPostRender_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
};
struct UR6Console_execKeyType_Parms
{
	BYTE Key;                                                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6Console_eventR6ProgressMsg_Parms
{
	class FString _Str1;                                                      //CPF_Parm|CPF_NeedCtorLink
	class FString _Str2;                                                      //CPF_Parm|CPF_NeedCtorLink
	FLOAT Seconds;                                                            //CPF_Parm
	TArray<class FString> ATextMsg;                                           //CPF_NeedCtorLink
};
struct UR6Console_eventR6ConnectionInProgress_Parms
{
};
struct UR6Console_eventR6ConnectionInterrupted_Parms
{
};
struct UR6Console_eventR6ConnectionSuccess_Parms
{
};
struct UR6Console_eventR6ConnectionFailed_Parms
{
	class FString szError;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UR6Console_eventServerDisconnected_Parms
{
};
struct UR6Console_eventUserDisconnected_Parms
{
};
struct UR6Console_execSetGameServiceLinks_Parms
{
	class APlayerController* _localPlayer;                                    //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6Console_execInitializedGameService_Parms
{
};
struct UR6Console_eventInitialized_Parms
{
};
struct UR6Console_execInitMod_Parms
{
	class FString szCampaign;                                                 //CPF_NeedCtorLink
	INT iAdditionalModIndex;                                                  //0
};
struct UR6Console_execLoadCampaignIni_Parms
{
	class FString szCampaign;                                                 //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD bFound : 1;                                                      //0
};
struct UR6Console_execInitCampaignAndMissionDescription_Parms
{
	class UR6FileManager* pFileManager;                                       //0
	class FString szCampaignName;                                             //CPF_NeedCtorLink
	class FString szCampaignPathName;                                         //CPF_NeedCtorLink
	INT iAdditionalModIndex;                                                  //0
};
struct UR6Console_execCreateRootWindow_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
};
struct UR6Console_eventMessage_Parms
{
	class FString Msg;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FLOAT MsgLife;                                                            //CPF_Parm
	class APlayerController* PController;                                     //0
};

// *****************************************************************************
// UR6Console (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Console : public UWindowConsole
{
public:
	BYTE m_eNextStep;                                                         //0
	INT m_iLastCheckTime;                                                     //0
	INT m_iLastSuccCheckTime;                                                 //0
	BITFIELD bResetLevel : 1;                                                 //0
	BITFIELD bLaunchWasCalled : 1;                                            //0
	BITFIELD bLaunchMultiPlayer : 1;                                          //0
	BITFIELD bReturnToMenu : 1;                                               //0
	BITFIELD bCancelFire : 1;                                                 //0
	BITFIELD m_bInGamePlanningKeyDown : 1;                                    //0
	BITFIELD m_bSkipAFrameAndStart : 1;                                       //0
	BITFIELD m_bRenderMenuOneTime : 1;                                        //0
	BITFIELD m_bStartR6GameInProgress : 1;                                    //0
	class UR6Campaign* m_CurrentCampaign;                                     //0
	class UR6PlayerCampaign* m_PlayerCampaign;                                //0
	class UR6GSServers* m_GameService;                                        //0
	class UR6LanServers* m_LanServers;                                        //0
	class UR6PlayerCustomMission* m_playerCustomMission;                      //0
	class USound* m_StopMainMenuMusic;                                        //0
	TArray<class UR6Campaign*> m_aCampaigns;                                  //CPF_NeedCtorLink
	TArray<class UR6MissionDescription*> m_aMissionDescriptions;              //CPF_NeedCtorLink
	TArray<BYTE> m_AWIDList;                                                  //CPF_NeedCtorLink
	class FString m_szLastError;                                              //CPF_NeedCtorLink
	class FString szStoreGamePassWd;                                          //CPF_NeedCtorLink
};
struct UR6Campaign_execLogInfo_Parms
{
	INT i;                                                                    //0
};
struct UR6Campaign_execInitCampaign_Parms
{
	class ALevelInfo* aLevel;                                                 //CPF_Parm
	class FString szFileName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class UR6Console* Console;                                                //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iMission;                                                             //0
	class FString szIniFile;                                                  //CPF_NeedCtorLink
	BITFIELD bFound : 1;                                                      //0
};

// *****************************************************************************
// UR6Campaign (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Campaign : public UObject
{
public:
	TArray<class FString> missions;                                           //CPF_Config|CPF_NeedCtorLink
	TArray<class UR6MissionDescription*> m_missions;                          //CPF_NeedCtorLink
	TArray<class FString> m_OperativeClassName;                               //CPF_Config|CPF_NeedCtorLink
	TArray<class FString> m_OperativeBackupClassName;                         //CPF_Config|CPF_NeedCtorLink
	class FString m_szCampaignFile;                                           //CPF_NeedCtorLink
	class FString LocalizationFile;                                           //CPF_Config|CPF_NeedCtorLink
};

// *****************************************************************************
// UR6RookieAssault (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RookieAssault : public UR6Operative
{
};
struct UR6MObjAcceptableCivilianLossesByRainbow_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
	class AR6Hostage* H;                                                      //0
};

// *****************************************************************************
// UR6MObjAcceptableCivilianLossesByRainbow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjAcceptableCivilianLossesByRainbow : public UR6MObjAcceptableLosses
{
};
struct UR6MObjAcceptableCivilianLossesByTerro_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
	class AR6Hostage* H;                                                      //0
};

// *****************************************************************************
// UR6MObjAcceptableCivilianLossesByTerro (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjAcceptableCivilianLossesByTerro : public UR6MObjAcceptableLosses
{
};
struct UR6MObjAcceptableHostageLossesByRainbow_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
	class AR6Hostage* H;                                                      //0
};

// *****************************************************************************
// UR6MObjAcceptableHostageLossesByRainbow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjAcceptableHostageLossesByRainbow : public UR6MObjAcceptableLosses
{
};
struct UR6MObjAcceptableHostageLossesByTerro_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
	class AR6Hostage* H;                                                      //0
};

// *****************************************************************************
// UR6MObjAcceptableHostageLossesByTerro (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjAcceptableHostageLossesByTerro : public UR6MObjAcceptableLosses
{
};

// *****************************************************************************
// UR6MObjAcceptableRainbowLosses (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjAcceptableRainbowLosses : public UR6MObjAcceptableLosses
{
};
struct AR6ExtractionZone_execUnTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};
struct AR6ExtractionZone_execTouch_Parms
{
	class AActor* Other;                                                      //CPF_Parm
};

// *****************************************************************************
// AR6ExtractionZone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ExtractionZone : public AR6AbstractExtractionZone
{
};

// -----------------------------------------------------------------------------
// FSTPawnMovement ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTPawnMovement
{
public:
	FLOAT fStandSlow;                                                     //0
	FLOAT fStandFast;                                                     //0
	FLOAT fCrouchSlow;                                                    //0
	FLOAT fCrouchFast;                                                    //0
	FLOAT fProne;                                                         //0
	BYTE eType;                                                           //0
};

// -----------------------------------------------------------------------------
// FSTSound ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTSound
{
public:
	FLOAT fSndDist;                                                       //0
	BYTE eType;                                                           //0
};
struct UR6NoiseMgr_eventR6MakePawnMovementNoise_Parms
{
	class AR6AbstractPawn* Pawn;                                              //CPF_Parm
	FLOAT fDist;                                                              //0
	BYTE EPawnType;                                                           //0
	class AR6Pawn* aR6Pawn;                                                   //0
	BITFIELD bIsRunning : 1;                                                  //0
	struct FSTPawnMovement pawnMove;                                          //0
	FLOAT fStealth;                                                           //0
};
struct UR6NoiseMgr_eventR6MakeNoise_Parms
{
	BYTE ESoundType;                                                          //CPF_Parm
	class AActor* Source;                                                     //CPF_Parm
	FLOAT fDist;                                                              //0
	class AR6AbstractPawn* aR6Pawn;                                           //0
	BYTE ENoiseType;                                                          //0
	BYTE EPawnType;                                                           //0
	class AR6Weapons* srcWeapon;                                              //0
};
struct UR6NoiseMgr_execMakeANoise_Parms
{
	class AActor* Source;                                                     //CPF_Parm
	FLOAT fDist;                                                              //CPF_Parm
	BYTE ENoiseType;                                                          //CPF_Parm
	BYTE EPawnType;                                                           //CPF_Parm
	BYTE ESoundType;                                                          //CPF_Parm
};
struct UR6NoiseMgr_execInit_Parms
{
};

// *****************************************************************************
// UR6NoiseMgr (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6NoiseMgr : public UR6AbstractNoiseMgr
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	struct FSTSound m_SndBulletImpact;                                        //CPF_Config
	struct FSTSound m_SndBulletRicochet;                                      //CPF_Config
	struct FSTSound m_SndGrenadeImpact;                                       //CPF_Config
	struct FSTSound m_SndGrenadeLike;                                         //CPF_Config
	struct FSTSound m_sndExplosion;                                           //CPF_Config
	struct FSTSound m_SndChoking;                                             //CPF_Config
	struct FSTSound m_SndTalking;                                             //CPF_Config
	struct FSTSound m_SndScreaming;                                           //CPF_Config
	struct FSTSound m_SndReload;                                              //CPF_Config
	struct FSTSound m_SndEquipping;                                           //CPF_Config
	struct FSTSound m_SndDead;                                                //CPF_Config
	struct FSTSound m_SndDoor;                                                //CPF_Config
	struct FSTPawnMovement m_Rainbow;                                         //CPF_Config
	struct FSTPawnMovement m_Terro;                                           //CPF_Config
	struct FSTPawnMovement m_Hostage;                                         //CPF_Config
};

enum ETrainingWeapons{
	 TW_SMG=0
	,TW_Pistol=1
	,TW_Sniper=2
	,TW_HBSensor=3
	,TW_Assault=4
	,TW_AssaultSilenced=5
	,TW_LMG=6
	,TW_Shotgun=7
	,TW_Grenades=8
	,TW_BreachCharge=9
	,TW_RemoteCharge=10
	,TW_Claymore=11
	,TW_MAX=12
};
struct AR6TrainingMgr_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;                                     //CPF_Parm
	class FString Reason;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct AR6TrainingMgr_execGetIntelVideoName_Parms
{
	class UR6MissionDescription* Desc;                                        //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AR6TrainingMgr_execLaunchAction_Parms
{
	INT iBoxNb;                                                               //CPF_Parm
	INT iSoundIndex;                                                          //CPF_Parm
	class AR6GameReplicationInfo* aGRI;                                       //0
};
struct AR6TrainingMgr_execLoadPlanningInTraining_Parms
{
	class UR6FileManagerPlanning* pFileManager;                               //0
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class FString szLoadErrorMsgMapName;                                      //CPF_NeedCtorLink
	class FString szLoadErrorMsgGameType;                                     //CPF_NeedCtorLink
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szGameTypeDirName;                                          //CPF_NeedCtorLink
	class FString szEnglishGTDirectory;                                       //CPF_NeedCtorLink
	class UR6MissionDescription* missionDescription;                          //0
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct AR6TrainingMgr_execSwitchToWeapon_Parms
{
	BYTE eWT;                                                                 //CPF_Parm
	BITFIELD bSwitch : 1;                                                     //CPF_Parm
	class AR6Pawn* pPawn;                                                     //0
	class AR6DemolitionsGadget* pGadget;                                      //0
	class AR6EngineWeapon* wpn;                                               //0
};
struct AR6TrainingMgr_execShowWeaponAndAttachment_Parms
{
	class AR6EngineWeapon* AWeapon;                                           //CPF_Parm
	BITFIELD bShow : 1;                                                       //CPF_Parm
	class AR6AbstractWeapon* pWeapon;                                         //0
};
struct AR6TrainingMgr_execResetGunAmmo_Parms
{
	INT i;                                                                    //0
};
struct AR6TrainingMgr_execLoadWeapons_Parms
{
	INT i;                                                                    //0
	class AR6Pawn* pPawn;                                                     //0
};
struct AR6TrainingMgr_execDeployCharacters_Parms
{
	class APlayerController* ControlledByPlayer;                              //CPF_Parm
	class AR6RainbowAI* aRainbowAI;                                           //0
	INT i;                                                                    //0
	class AR6PlayerController* aPC;                                           //0
	class AR6Pawn* pPawn;                                                     //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class AR6StartGameInfo* StartGameInfo;                                    //0
};
struct AR6TrainingMgr_execGetTrainingMgr_Parms
{
	class AR6Pawn* P;                                                         //CPF_Parm
	class AR6TrainingMgr* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TrainingMgr_execCanChangeText_Parms
{
	INT iBoxNumber;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TrainingMgr_execGetEndGamePauseTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6TrainingMgr_execIsBasicMap_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString szMapName;                                                  //CPF_NeedCtorLink
};

// *****************************************************************************
// AR6TrainingMgr (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TrainingMgr : public AR6PracticeModeGame
{
public:
	BYTE m_eCurrentWeapon;                                                    //0
	INT m_WeaponsSlot[12];                                                    //0
	BITFIELD m_bInitialized : 1;                                              //0
	class AR6EngineWeapon* m_Weapons[12];                                     //0
	class FString m_WeaponsName[12];                                          //CPF_NeedCtorLink
};

// *****************************************************************************
// AR6InsertionZone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6InsertionZone : public AR6AbstractInsertionZone
{
};

// -----------------------------------------------------------------------------
// FollowPlan ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FollowPlan
{
};
struct AR6PlanningPawn_execPlayDuck_Parms
{
};
struct AR6PlanningPawn_execArrowReachedNavPoint_Parms
{
};
struct AR6PlanningPawn_execArrowRotationIsOK_Parms
{
};
struct AR6PlanningPawn_eventLanded_Parms
{
	class FVector HitNormal;                                                  //CPF_Parm
};
struct AR6PlanningPawn_eventFalling_Parms
{
};
struct AR6PlanningPawn_execStopFollowingPlanning_Parms
{
};
struct AR6PlanningPawn_execFollowPlanning_Parms
{
	class UR6PlanningInfo* m_pTeamInfo;                                       //CPF_Parm
};
struct AR6PlanningPawn_execClientReStart_Parms
{
};
struct AR6PlanningPawn_eventChangeAnimation_Parms
{
};
struct AR6PlanningPawn_eventPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6PlanningPawn (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningPawn : public AR6Pawn
{
public:
	FLOAT m_fSpeed;                                                           //0
	class AR6ArrowIcon* m_ArrowInPlanningView;                                //0
	class UR6PlanningInfo* m_PlanToFollow;                                    //0
	class AActor* m_pActorToReach;                                            //0
	class FRotator m_rDirRot;                                                 //0
};
struct AR6CameraDirection_execSetPlanningRotation_Parms
{
	class FRotator PointRotation;                                             //CPF_Parm
};

// *****************************************************************************
// AR6CameraDirection (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6CameraDirection : public AR6ReferenceIcons
{
};

// -----------------------------------------------------------------------------
// FollowPath ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FollowPath
{
};

// *****************************************************************************
// AR6ArrowIcon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ArrowIcon : public AR6ReferenceIcons
{
public:
	class FVector m_vPointToReach;                                            //0
	class FVector m_vStartLocation;                                           //0
};

// *****************************************************************************
// UR6PlanningPlayerInput (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PlanningPlayerInput : public UPlayerInput
{
};
struct AR6PlanningSnipe_execSetDirectionRotator_Parms
{
	class FVector vTowards;                                                   //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FRotator rActionRotator;                                            //0
	class FVector vResultVector;                                              //0
};

// *****************************************************************************
// AR6PlanningSnipe (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningSnipe : public AR6ReferenceIcons
{
};
struct AR6PathFlag_execRefreshLocation_Parms
{
	FLOAT fEvenCheck;                                                         //0
	class FVector vFirstVector;                                               //0
	class FVector vSecondVector;                                              //0
	INT iMiddleNodeIndex;                                                     //0
	class AR6ActionPoint* OwnerPoint;                                         //0
	class AActor* aMiddlePoint1;                                              //0
	class AActor* aMiddlePoint2;                                              //0
	class AActor* aMiddlePoint3;                                              //0
};
struct AR6PathFlag_execSetDrawColor_Parms
{
	class FColor NewColor;                                                    //CPF_Parm
};
struct AR6PathFlag_execSetModeDisplay_Parms
{
	BYTE eMode;                                                               //CPF_Parm
};

// *****************************************************************************
// AR6PathFlag (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PathFlag : public AR6ReferenceIcons
{
public:
	class UTexture* m_pIconTex[3];                                            //0
};
struct AR6PlanningGrenade_execSetGrenadeType_Parms
{
	BYTE eGrenade;                                                            //CPF_Parm
};

// *****************************************************************************
// AR6PlanningGrenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningGrenade : public AR6ReferenceIcons
{
public:
	class UTexture* m_pIconTex[4];                                            //0
};

// *****************************************************************************
// AR6PlanningRangeFragGrenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningRangeFragGrenade : public AR6PlanningRangeGrenade
{
};
struct AR6PlanningBreach_execSetSpriteAngle_Parms
{
	INT iDoorClosedYaw;                                                       //CPF_Parm
	class FVector vPointLocation;                                             //CPF_Parm
	class FVector vDirection;                                                 //0
	class FRotator rPointDoorRotator;                                         //0
	INT iYawDifference;                                                       //0
};

// *****************************************************************************
// AR6PlanningBreach (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningBreach : public AR6ReferenceIcons
{
};
struct UR6MObjTimer_execTimerCallback_Parms
{
	FLOAT fTime;                                                              //CPF_Parm
};

// *****************************************************************************
// UR6MObjTimer (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjTimer : public UR6MissionObjectiveBase
{
};

// *****************************************************************************
// UR6RookieSniper (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RookieSniper : public UR6Operative
{
};

// *****************************************************************************
// UR6RookieDemolitions (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RookieDemolitions : public UR6Operative
{
};

// *****************************************************************************
// UR6RookieElectronics (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RookieElectronics : public UR6Operative
{
};

// *****************************************************************************
// UR6RookieRecon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6RookieRecon : public UR6Operative
{
};
struct AR6BroadcastHandler_execBroadcast_Parms
{
	class AActor* Sender;                                                     //CPF_Parm
	class FString Msg;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FName type;                                                               //CPF_Parm
	class AR6PlayerController* aSender;                                       //0
	class AR6Pawn* aSenderPawn;                                               //0
	class AR6PlayerController* B;                                             //0
	class AGameReplicationInfo* _GRI;                                         //0
	class APlayerReplicationInfo* PRI;                                        //0
	BITFIELD bSend : 1;                                                       //0
	BITFIELD bGameTypeMsg : 1;                                                //0
};
struct AR6BroadcastHandler_execDebugBroadcaster_Parms
{
	class AR6PlayerController* A;                                             //CPF_Parm
	BITFIELD bSender : 1;                                                     //CPF_Parm
	class FString szName;                                                     //CPF_NeedCtorLink
};
struct AR6BroadcastHandler_execBroadcastTeam_Parms
{
	class AActor* Sender;                                                     //CPF_Parm
	class FString Msg;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FName type;                                                               //CPF_Parm
	class AR6PlayerController* aSender;                                       //0
	class AR6Pawn* aSenderPawn;                                               //0
	class APlayerReplicationInfo* SenderPRI;                                  //0
	class AR6PlayerController* B;                                             //0
	BITFIELD bSend : 1;                                                       //0
	BITFIELD bGameTypeMsg : 1;                                                //0
};
struct AR6BroadcastHandler_execIsPlayerDead_Parms
{
	class AR6PlayerController* A;                                             //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6BroadcastHandler_execIsSameTeam_Parms
{
	class AR6PlayerController* A;                                             //CPF_Parm
	class AR6PlayerController* B;                                             //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6BroadcastHandler_execIsATeamMember_Parms
{
	class AR6PlayerController* A;                                             //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AR6BroadcastHandler_execIsSpectator_Parms
{
	class AR6PlayerController* A;                                             //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AR6BroadcastHandler (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BroadcastHandler : public ABroadcastHandler
{
public:
	BITFIELD m_bShowLog : 1;                                                  //0
};

// *****************************************************************************
// UR6Operative29 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative29 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative28 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative28 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative27 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative27 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative26 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative26 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative25 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative25 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative24 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative24 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative23 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative23 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative22 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative22 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative21 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative21 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative20 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative20 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative19 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative19 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative18 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative18 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative17 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative17 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative16 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative16 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative15 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative15 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative14 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative14 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative13 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative13 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative12 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative12 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative11 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative11 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative10 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative10 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative9 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative9 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative8 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative8 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative7 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative7 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative6 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative6 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative5 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative5 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative4 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative3 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative3 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative2 : public UR6Operative
{
};

// *****************************************************************************
// UR6Operative1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Operative1 : public UR6Operative
{
};
struct UR6MObjNeutralizeTerrorist_execPawnSecure_Parms
{
	class APawn* secured;                                                     //CPF_Parm
	FLOAT fNeutralized;                                                       //0
	INT iTotal;                                                               //0
	class AR6Terrorist* aTerrorist;                                           //0
	INT i;                                                                    //0
	INT iResult;                                                              //0
};
struct UR6MObjNeutralizeTerrorist_execPawnKilled_Parms
{
	class APawn* killed;                                                      //CPF_Parm
};
struct UR6MObjNeutralizeTerrorist_execInit_Parms
{
	INT iTotal;                                                               //0
	class AR6Terrorist* aTerrorist;                                           //0
};

// *****************************************************************************
// UR6MObjNeutralizeTerrorist (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MObjNeutralizeTerrorist : public UR6MissionObjectiveBase
{
public:
	INT m_iNeutralizePercentage;                                              //CPF_Edit
	BITFIELD m_bMustSecureTerroInDepZone : 1;                                 //CPF_Edit
	class AR6DeploymentZone* m_depZone;                                       //CPF_Edit
};

// *****************************************************************************
// AR6PlanningHUD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlanningHUD : public AHUD
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
