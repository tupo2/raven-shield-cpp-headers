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
** Unreal native C++ headers for the R6GameService package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6GAMESERVICE_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(EndOfRoundDataSent)
AUTOGENERATE_NAME(FillCreateGameInfo)
AUTOGENERATE_NAME(GetConsoleStoreIP)
AUTOGENERATE_NAME(GetLobbyAndGroupID)
AUTOGENERATE_NAME(GetLocallyBoundIpAddr)
AUTOGENERATE_NAME(GetMaxAvailPorts)
AUTOGENERATE_NAME(HandleNewLobbyConnection)
AUTOGENERATE_NAME(InitializeMod)
AUTOGENERATE_NAME(IsGlobalIDBanned)
AUTOGENERATE_NAME(ProcessServerMsg)
AUTOGENERATE_NAME(TempGetPBConnectStatus)

enum eSortCategory{
	 eSG_Favorite=0
	,eSG_Locked=1
	,eSG_Dedicated=2
	,eSG_PunkBuster=3
	,eSG_PingTime=4
	,eSG_Name=5
	,eSG_GameType=6
	,eSG_GameMode=7
	,eSG_Map=8
	,eSG_NumPlayers=9
};

// -----------------------------------------------------------------------------
// FstRemotePlayers ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstRemotePlayers
{
public:
	class FString szAlias;                                                //CPF_NeedCtorLink
	INT iPing;                                                            //0
	INT iGroupID;                                                         //0
	INT iLobbySrvID;                                                      //0
	INT iSkills;                                                          //0
	INT iRank;                                                            //0
	class FString szTime;                                                 //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FstGameTypeAndMap ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstGameTypeAndMap
{
public:
	class FString szMap;                                                  //CPF_NeedCtorLink
	class FString szGameType;                                             //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FstGameData ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstGameData
{
public:
	BITFIELD bUsePassword : 1;                                            //0
	BITFIELD bDedicatedServer : 1;                                        //0
	INT iRoundsPerMatch;                                                  //0
	INT iRoundTime;                                                       //0
	INT iBetTime;                                                         //0
	INT iBombTime;                                                        //0
	BITFIELD bShowNames : 1;                                              //0
	BITFIELD bInternetServer : 1;                                         //0
	BITFIELD bFriendlyFire : 1;                                           //0
	BITFIELD bAutoBalTeam : 1;                                            //0
	BITFIELD bTKPenalty : 1;                                              //0
	BITFIELD bRadar : 1;                                                  //0
	BITFIELD bAdversarial : 1;                                            //0
	BITFIELD bRotateMap : 1;                                              //0
	BITFIELD bAIBkp : 1;                                                  //0
	BITFIELD bForceFPWeapon : 1;                                          //0
	BITFIELD bPunkBuster : 1;                                             //0
	INT iNumMaps;                                                         //0
	INT iNumTerro;                                                        //0
	INT iPort;                                                            //0
	class FString szName;                                                 //CPF_NeedCtorLink
	class FString szModName;                                              //CPF_NeedCtorLink
	INT iMaxPlayer;                                                       //0
	INT iNbrPlayer;                                                       //0
	class FString szGameDataGameType;                                     //CPF_NeedCtorLink
	class FString szGameType;                                             //CPF_NeedCtorLink
	class FString szCurrentMap;                                           //CPF_NeedCtorLink
	class FString szMessageOfDay;                                         //CPF_NeedCtorLink
	class FString szGameVersion;                                          //CPF_NeedCtorLink
	TArray<struct FstGameTypeAndMap> gameMapList;                         //CPF_NeedCtorLink
	TArray<struct FstRemotePlayers> PlayerList;                           //CPF_NeedCtorLink
	class FString szPassword;                                             //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FstGameServer ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstGameServer
{
public:
	INT iGroupID;                                                         //0
	INT iLobbySrvID;                                                      //0
	INT iBeaconPort;                                                      //0
	INT iPing;                                                            //0
	class FString szIPAddress;                                            //CPF_NeedCtorLink
	class FString szAltIPAddress;                                         //CPF_NeedCtorLink
	BITFIELD bUseAltIP : 1;                                               //0
	BITFIELD bDisplay : 1;                                                //0
	BITFIELD bFavorite : 1;                                               //0
	BITFIELD bSameVersion : 1;                                            //0
	class FString szOptions;                                              //CPF_NeedCtorLink
	struct FstGameData sGameData;                                         //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FIpAddr ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FIpAddr
{
public:
	INT Addr;                                                             //0
	INT Port;                                                             //0
};

// -----------------------------------------------------------------------------
// FstValidationResponse ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstValidationResponse
{
public:
	INT iReqID;                                                           //0
	BYTE eStatus;                                                         //0
	BITFIELD bSuceeded : 1;                                               //0
	BITFIELD bTimeout : 1;                                                //0
	BYTE ucGlobalID[16];                                                  //0
};
struct UR6ServerList_eventGetLobbyAndGroupID_Parms
{
	INT _iLobbyID;                                                            //CPF_Parm|CPF_OutParm
	INT _iGroupID;                                                            //CPF_Parm|CPF_OutParm
};
struct UR6ServerList_execGetTotalPlayers_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT iTotal;                                                               //0
	INT iMaxPlayers;                                                          //0
};
struct UR6ServerList_execSortPlayersByKills_Parms
{
	BITFIELD _bAscending : 1;                                                 //CPF_Parm
	INT _iIdx;                                                                //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
	BITFIELD bSwap : 1;                                                       //0
	INT iListSize;                                                            //0
	struct FstRemotePlayers tempPlayer;                                       //CPF_NeedCtorLink
};
struct UR6ServerList_execgetSvrData_Parms
{
	INT iBeaconIdx;                                                           //CPF_Parm
	struct FstGameData ReturnValue;                                           //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	struct FstGameData sGameData;                                             //CPF_NeedCtorLink
	struct FstGameTypeAndMap sMapAndGame;                                     //CPF_NeedCtorLink
	struct FstRemotePlayers remPlayer;                                        //CPF_NeedCtorLink
	INT j;                                                                    //0
};
struct UR6ServerList_execCreated_Parms
{
};
struct UR6ServerList_execSetSelectedServer_Parms
{
	INT iServerListIndex;                                                     //CPF_Parm
};
struct UR6ServerList_execDelFromFavorites_Parms
{
	INT sortedListIdx;                                                        //CPF_Parm
	INT i;                                                                    //0
	INT favoritesListIndex;                                                   //0
	BITFIELD Found : 1;                                                       //0
	INT serverListIndex;                                                      //0
};
struct UR6ServerList_execAddToFavorites_Parms
{
	INT sortedListIdx;                                                        //CPF_Parm
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
	INT serverListIndex;                                                      //0
};
struct UR6ServerList_execIsAFavorite_Parms
{
	class FString szIPAddress;                                                //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD bFound : 1;                                                      //0
};
struct UR6ServerList_execgetServerListItem_Parms
{
	INT iSortIdx;                                                             //CPF_Parm
	struct FstGameServer _stGameServer;                                       //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT Index;                                                                //0
};
struct UR6ServerList_execGetDisplayListSize_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6ServerList_execNativeGetMaxPlayers_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6ServerList_execNativeGetOwnSvrPort_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6ServerList_execSortServers_Parms
{
	INT _iSortType;                                                           //CPF_Parm
	BITFIELD _bAscending : 1;                                                 //CPF_Parm
};
struct UR6ServerList_execNativeGetMilliSeconds_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6ServerList_execNativeGetPingTimeOut_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6ServerList_execNativeGetPingTime_Parms
{
	class FString IpAddr;                                                     //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6ServerList_execNativeUpdateFavorites_Parms
{
};
struct UR6ServerList_execNativeInitFavorites_Parms
{
};

// *****************************************************************************
// UR6ServerList (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6ServerList : public UR6AbstractGameService
{
public:
	INT m_iSelSrvIndex;                                                       //0
	INT m_iIndRefrIndex;                                                      //0
	BITFIELD m_bDedicatedServer : 1;                                          //0
	BITFIELD m_bServerListChanged : 1;                                        //0
	BITFIELD m_bServerInfoChanged : 1;                                        //0
	BITFIELD m_bSavePWSave : 1;                                               //CPF_Config
	BITFIELD m_bAutoLISave : 1;                                               //CPF_Config
	class AClientBeaconReceiver* m_ClientBeacon;                              //0
	TArray<class FString> m_favoriteServersList;                              //CPF_NeedCtorLink
	TArray<struct FstGameServer> m_GameServerList;                            //CPF_NeedCtorLink
	TArray<struct FstValidationResponse> m_ValidResponseList;                 //CPF_NeedCtorLink
	TArray<struct FstValidationResponse> m_ModValidResponseList;              //CPF_NeedCtorLink
	TArray<INT> m_GSLSortIdx;                                                 //CPF_NeedCtorLink
	struct FstGameServer m_CrGameSrvInfo;                                     //CPF_NeedCtorLink
	class FString m_szGameVersion;                                            //CPF_NeedCtorLink
	virtual ~UR6ServerList();
	virtual void SetOwnSvrPort(INT);
	virtual INT GetLobbyID();
	virtual INT GetGroupID();
	void FillSvrContainer();
	void InitFavorites();
	static void CDECL InternalConstructor(void *);
	void ResetSvrContainer();
	static class UClass * CDECL StaticClass();
	UR6ServerList(class UR6ServerList const &);
	UR6ServerList();
	void eventGetLobbyAndGroupID(INT &, INT &);
	void execGetDisplayListSize(struct FFrame &, void * const);
	void execNativeGetMaxPlayers(struct FFrame &, void * const);
	void execNativeGetMilliSeconds(struct FFrame &, void * const);
	void execNativeGetOwnSvrPort(struct FFrame &, void * const);
	void execNativeGetPingTime(struct FFrame &, void * const);
	void execNativeGetPingTimeOut(struct FFrame &, void * const);
	void execNativeInitFavorites(struct FFrame &, void * const);
	void execNativeUpdateFavorites(struct FFrame &, void * const);
	void execSortServers(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6ServerList & operator=(class UR6ServerList const &);
private:
	static class UClass PrivateStaticClass();
};
struct UR6ModGSInfo_execInitGSMod_Parms
{
	class FString szFileName;                                                 //CPF_NeedCtorLink
	class UR6ModMgr* pModManager;                                             //0
};
struct UR6ModGSInfo_execNativeInitModInfo_Parms
{
};

// *****************************************************************************
// UR6ModGSInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6ModGSInfo : public UObject
{
public:
	BYTE m_ucModActivationID[16];                                             //CPF_Config
	BITFIELD m_bModValidActivationID : 1;                                     //CPF_Config
	class FString m_szModGlobalID;                                            //CPF_Config|CPF_NeedCtorLink
	virtual ~UR6ModGSInfo();
	void InitMODCDKey();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6ModGSInfo(class UR6ModGSInfo const &);
	UR6ModGSInfo();
	void execNativeInitModInfo(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6ModGSInfo & operator=(class UR6ModGSInfo const &);
private:
	static class UClass PrivateStaticClass();
};
struct UR6LanServers_execLANSeversManager_Parms
{
	INT i;                                                                    //0
	INT j;                                                                    //0
	struct FstGameServer sSvr;                                                //CPF_NeedCtorLink
	BITFIELD bFound : 1;                                                      //0
	INT iIndex;                                                               //0
	class FString szSvrAddr;                                                  //CPF_NeedCtorLink
	BITFIELD bListChanged : 1;                                                //0
	INT iBeaconArraySize;                                                     //0
	class FString szCurrentMod;                                               //CPF_NeedCtorLink
};
struct UR6LanServers_execCreated_Parms
{
};
struct UR6LanServers_execSendBeaconToOneServer_Parms
{
	INT iIndex;                                                               //CPF_Parm
	struct FIpAddr Addr;                                                      //0
	class FString szIP;                                                       //CPF_NeedCtorLink
};
struct UR6LanServers_execRefreshOneServer_Parms
{
	INT sortedListIdx;                                                        //CPF_Parm
	INT serverListIndex;                                                      //0
};
struct UR6LanServers_execRefreshServers_Parms
{
};

// *****************************************************************************
// UR6LanServers (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6LanServers : public UR6ServerList
{
public:
	INT m_iIndRefrAttempts;                                                   //0
	INT m_iIndRefrEndTime;                                                    //0
	BITFIELD m_bIndRefrInProgress : 1;                                        //0
	virtual ~UR6LanServers();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UR6LanServers(class UR6LanServers const &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6LanServers & operator=(class UR6LanServers const &);
protected:
	UR6LanServers();
private:
	static class UClass PrivateStaticClass();
};
struct UR6GSServers_eventHandleNewLobbyConnection_Parms
{
	class ALevelInfo* _Level;                                                 //CPF_Parm
	class AController* P;                                                     //0
};
struct UR6GSServers_eventEndOfRoundDataSent_Parms
{
};
struct UR6GSServers_execGetSelectedServerIP_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szIPAddress;                                                //CPF_NeedCtorLink
	class FString szAltIPAddress;                                             //CPF_NeedCtorLink
};
struct UR6GSServers_execDisplayTime_Parms
{
	INT _iTimeToConvert;                                                      //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	FLOAT fTemp;                                                              //0
	INT iMin;                                                                 //0
	INT iSec;                                                                 //0
	INT ITemp;                                                                //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class FString szTime;                                                     //CPF_NeedCtorLink
};
struct UR6GSServers_eventFillCreateGameInfo_Parms
{
	class AGameInfo* pGameInfo;                                               //CPF_Parm
	class ALevelInfo* pLevel;                                                 //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
	class APlayerController* aPC;                                             //0
	class AController* _PC;                                                   //0
	INT iNumPlayers;                                                          //0
	INT iNumMaps;                                                             //0
	class AR6MapList* MapList;                                                //0
	INT iCounter;                                                             //0
	struct FstRemotePlayers sPlayer;                                          //CPF_NeedCtorLink
	struct FstGameTypeAndMap sMapAndGame;                                     //CPF_NeedCtorLink
};
struct UR6GSServers_execCallNativeSetMatchResult_Parms
{
	class FString szUbiUserID;                                                //CPF_Parm|CPF_NeedCtorLink
	INT iField;                                                               //CPF_Parm
	INT iValue;                                                               //CPF_Parm
};
struct UR6GSServers_execCallNativeProcessIcmpPing_Parms
{
	class FString _ServerIpAddress;                                           //CPF_Parm|CPF_NeedCtorLink
	INT piPingTime;                                                           //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_eventTempGetPBConnectStatus_Parms
{
	class APlayerController* _aPlayerController;                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6GSServers_eventIsGlobalIDBanned_Parms
{
	class AR6AbstractGameInfo* _GameInfo;                                     //CPF_Parm
	class FString _szGlobalID;                                                //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_eventProcessServerMsg_Parms
{
	class APlayerController* _aPlayerController;                              //CPF_Parm
	class FString _szErrorMsgKey;                                             //CPF_Parm|CPF_NeedCtorLink
};
struct UR6GSServers_execgetServerListSize_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_eventGetConsoleStoreIP_Parms
{
	class APlayerController* _aPlayerController;                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6GSServers_eventGetLocallyBoundIpAddr_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class AUdpBeacon* _udpBeacon;                                             //0
};
struct UR6GSServers_eventGetMaxAvailPorts_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execMyID_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6GSServers_execSetUbiAccount_Parms
{
	class FString szUserID;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szPassword;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6GSServers_execStartAutoLogin_Parms
{
};
struct UR6GSServers_eventInitializeMod_Parms
{
};
struct UR6GSServers_execSaveInfo_Parms
{
	BYTE ATemp[16];                                                           //0
	class FString szFileName;                                                 //CPF_NeedCtorLink
};
struct UR6GSServers_execNativeMSCLientJoinServer_Parms
{
	INT iLobbyID;                                                             //CPF_Parm
	INT iGroupID;                                                             //CPF_Parm
	class FString szPassword;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6GSServers_execNativeMSClientReqAltInfo_Parms
{
	INT iLobbyID;                                                             //CPF_Parm
	INT iGroupID;                                                             //CPF_Parm
};
struct UR6GSServers_execEnterCDKey_Parms
{
	class FString _szCDKey;                                                   //CPF_Parm|CPF_NeedCtorLink
};
struct UR6GSServers_execHandleAnyLobbyConnectionFail_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execNativeProcessIcmpPing_Parms
{
	class FString _ServerIpAddress;                                           //CPF_Parm|CPF_NeedCtorLink
	INT piPingTime;                                                           //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execNativeLogOutServer_Parms
{
	class AGameReplicationInfo* _GRI;                                         //CPF_Parm
};
struct UR6GSServers_execNativeUpdateServer_Parms
{
};
struct UR6GSServers_execNativeIsGSReadyToChangeMod_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execNativeIsWaitingForGSInit_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execNativeIsRouterDisconnect_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execSetLastServerQueried_Parms
{
	class FString szIPAddress;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct UR6GSServers_execNativeSetMatchResult_Parms
{
	class FString szUbiUserID;                                                //CPF_Parm|CPF_NeedCtorLink
	INT iField;                                                               //CPF_Parm
	INT iValue;                                                               //CPF_Parm
};
struct UR6GSServers_execGetMaxUbiServerNameSize_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execNativeGetMSClientInitialized_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execNativeGetSeconds_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execStopRefreshServers_Parms
{
};
struct UR6GSServers_execIsRefreshServersInProgress_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execRefreshOneServer_Parms
{
	INT iIdx;                                                                 //CPF_Parm
};
struct UR6GSServers_execRefreshServers_Parms
{
};
struct UR6GSServers_execUnInitializeMSClient_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execInitializeMSClient_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execInitGSCDKey_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6GSServers_execInitialize_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UR6GSServers (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6GSServers : public UR6ServerList
{
public:
	BYTE m_ucActivationID[16];                                                //CPF_Config
	INT m_iRSCDKeyPort;                                                       //CPF_Config
	INT m_iModCDKeyPort;                                                      //CPF_Config
	INT m_iRegSvrPort;                                                        //CPF_Config
	INT m_iGSNumPlayers;                                                      //0
	BITFIELD m_bValidActivationID : 1;                                        //CPF_Config
	BITFIELD m_bUseCDKey : 1;                                                 //CPF_Config
	BITFIELD m_bStartedByGSClient : 1;                                        //0
	BITFIELD m_bUbiComClientDied : 1;                                         //0
	BITFIELD m_bUbiComRoomDestroyed : 1;                                      //0
	BITFIELD m_bUbiAccntInfoEntered : 1;                                      //0
	BITFIELD m_bInitGame : 1;                                                 //0
	BITFIELD m_bLoggedInUbiDotCom : 1;                                        //0
	BITFIELD m_bAutoLoginInProgress : 1;                                      //0
	BITFIELD m_bAutoLoginFailed : 1;                                          //0
	BITFIELD m_bRefreshFinished : 1;                                          //0
	FLOAT m_fMaxTimeForResponse;                                              //0
	class UR6ModGSInfo* m_ModGSInfo;                                          //0
	class FString m_szUbiRemFileURL;                                          //CPF_Config|CPF_NeedCtorLink
	class FString m_szGSVersion;                                              //CPF_Config|CPF_NeedCtorLink
	class FString m_szGlobalID;                                               //CPF_Config|CPF_NeedCtorLink
	class FString m_szSavedPwd;                                               //CPF_Config|CPF_NeedCtorLink
	class FString m_szUbiHomePage;                                            //CPF_NeedCtorLink
	class FString m_szPassword;                                               //CPF_NeedCtorLink
	class FString m_szGSInitFileName;                                         //CPF_NeedCtorLink
	class FString m_szGSClientIP;                                             //CPF_NeedCtorLink
	class FString m_szGSServerName;                                           //CPF_NeedCtorLink
	class FString m_szGSPassword;                                             //CPF_NeedCtorLink
	virtual ~UR6GSServers();
	virtual void Destroy();
	virtual INT InitGSCDKey();
	virtual INT GetRegServerInitialized();
	virtual void SetGameServiceRequestState(BYTE);
	virtual void SetRegServerLoginRequest(BYTE);
	virtual void SetLoginRegServer(BYTE);
	virtual BYTE GetLoginRegServer();
	virtual INT GetServerRegistered();
	virtual void ServerRoundStart(INT);
	virtual void ServerRoundFinish();
	virtual void SubmitMatchResult();
	virtual void DisconnectAllCDKeyPlayers();
	virtual void CDKeyDisconnecUser(class FString);
	virtual void GameServiceManager(INT, INT, INT, INT);
	virtual void ProcessLoginMasterSrv(INT, FLOAT *);
	virtual void ProcessUbiComJoinServer(INT, INT, class FString, FLOAT *);
	virtual void ProcessIsRouterDisconnect(FLOAT *);
	virtual void ProcessIsLobbyDisconnect(FLOAT *);
	virtual void ProcessJoinServer(FLOAT *);
	virtual void MasterServerManager(class AR6AbstractGameInfo *, class ALevelInfo *);
	virtual void RequestModCDKeyProcess(INT);
	virtual void RequestGSCDKeyAuthID();
	virtual void ResetAuthId();
	virtual class FString GetAuthID(INT);
	virtual INT InitGSClient();
	virtual INT SetGSClientComInterface();
	virtual void SetGSGameState(BYTE);
	virtual BYTE GetGSGameState();
	virtual void GSClientPostMessage(BYTE);
	virtual INT MSCLientLeaveServer();
	virtual INT IsMSClientIsInRequest();
	virtual INT GetLoggedInUbiDotCom();
	virtual INT IsServerJoined();
	void AddPlayerToIDList(class FString, class FString, class FString, INT);
	INT CDKeyValidateUser(class FString, INT, INT);
	void CancelGSCDKeyActID();
	void CancelGSCDKeyAuthID();
	void CopyActivationIDInByteArray(BYTE *, BYTE *);
	void CreatedCDKey();
	void EnterCDKey(class FString);
	void GSClientUpdateServerInfo();
	class FString GetGlobalIdFromPlayerIDList(class FString);
	void Init(class FString);
	void InitCDKey(INT, INT);
	void InitMSClient();
	void InitProcessUpdateUbiServer(class AGameInfo *, class ALevelInfo *);
	INT InitializeMSClient();
	INT InitializeRegServer();
	static void CDECL InternalConstructor(void *);
	INT IsAuthIDSuccess();
	void LogGSVersion();
	void LogOutServer();
	void MSCLientJoinServer(INT, INT, class FString);
	void MSClientServerConnected(INT, INT);
	void NativeCDKeyPlayerStatusReply(class FString, BYTE, INT);
	INT OnSameSubNet(class FString);
	void PingRequest(class FString, class FString);
	INT PlayerIsInIDList(class FString, class FString, INT);
	void PollCallbacks(INT, INT, INT, INT);
	void PollClientCDKeyCallbacks(INT, INT, INT);
	void PollGSClientCallbacks(INT);
	void PollMSClientCallbacks(INT);
	void PollPingManager(INT);
	void PollRegServerCallbacks(INT);
	void ProcessAuthIdRequest(class AController *);
	void ProcessInternetSrv(class AR6AbstractGameInfo *, class ALevelInfo *);
	void ProcessJoinServerRequest();
	void ProcessMSClientInitRequest();
	void ProcessPC_CDKeyRequest(class AR6AbstractGameInfo *, class ALevelInfo *, class APlayerController *, INT);
	void ProcessRegServerGetLobbiesRequest();
	void ProcessRegServerLoginRequest();
	void ProcessRegServerLoginRouterRequest();
	void ProcessRegServerRegOnLobbyRequest();
	void ProcessRegServerUpdateRequest();
	void ProcessSubmitMatchResultReply();
	INT ReceiveAltInfo();
	INT ReceiveServer();
	void ReceiveValidation();
	void RefreshOneServer(INT);
	void RefreshServers();
	void RegServerGetLobbies();
	void RegServerRouterLogin();
	void RegisterServer();
	void RequestActivation(class FString, INT);
	void RequestAuthorization(INT);
	void RequestGSCDKeyActID();
	void RouterDisconnect();
	void ServerLogin();
	static class UClass * CDECL StaticClass();
	UR6GSServers(class UR6GSServers const &);
	UR6GSServers();
	void UnInitCDKey();
	INT UnInitMSClient();
	void UnInitRegServer();
	void UpdateServer();
	void eventEndOfRoundDataSent();
	void eventFillCreateGameInfo(class AGameInfo *, class ALevelInfo *);
	class FString eventGetConsoleStoreIP(class APlayerController *);
	class FString eventGetLocallyBoundIpAddr();
	INT eventGetMaxAvailPorts();
	void eventHandleNewLobbyConnection(class ALevelInfo *);
	void eventInitializeMod();
	DWORD eventIsGlobalIDBanned(class AR6AbstractGameInfo *, class FString const &);
	void eventProcessServerMsg(class APlayerController *, class FString const &);
	class FString eventTempGetPBConnectStatus(class APlayerController *);
	void execEnterCDKey(struct FFrame &, void * const);
	void execGetMaxUbiServerNameSize(struct FFrame &, void * const);
	void execHandleAnyLobbyConnectionFail(struct FFrame &, void * const);
	void execInitGSCDKey(struct FFrame &, void * const);
	void execInitialize(struct FFrame &, void * const);
	void execInitializeMSClient(struct FFrame &, void * const);
	void execIsRefreshServersInProgress(struct FFrame &, void * const);
	void execNativeGetMSClientInitialized(struct FFrame &, void * const);
	void execNativeGetSeconds(struct FFrame &, void * const);
	void execNativeIsGSReadyToChangeMod(struct FFrame &, void * const);
	void execNativeIsRouterDisconnect(struct FFrame &, void * const);
	void execNativeIsWaitingForGSInit(struct FFrame &, void * const);
	void execNativeLogOutServer(struct FFrame &, void * const);
	void execNativeMSCLientJoinServer(struct FFrame &, void * const);
	void execNativeMSClientReqAltInfo(struct FFrame &, void * const);
	void execNativeProcessIcmpPing(struct FFrame &, void * const);
	void execNativeSetMatchResult(struct FFrame &, void * const);
	void execNativeUpdateServer(struct FFrame &, void * const);
	void execRefreshOneServer(struct FFrame &, void * const);
	void execRefreshServers(struct FFrame &, void * const);
	void execSetLastServerQueried(struct FFrame &, void * const);
	void execStopRefreshServers(struct FFrame &, void * const);
	void execUnInitializeMSClient(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UR6GSServers & operator=(class UR6GSServers const &);
	void registerCDKeySDKCallbacks(class UR6GSServers *, void *, void *);
private:
	static class UClass PrivateStaticClass();
};

enum ExitCause{
	 EC_Unknown=0
	,EC_PatchStarted=1
	,EC_NoPatchNeeded=2
	,EC_FatalDownloadError=3
	,EC_PartialDownloadError=4
	,EC_UserAborted=5
	,EC_UserQuit=6
};
struct UeviLPatchService_execGetState_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UeviLPatchService_execCanRunUpdateService_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UeviLPatchService_execGetExitCause_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UeviLPatchService_execAbortPatchService_Parms
{
};
struct UeviLPatchService_execGetDownloadProgress_Parms
{
	FLOAT totalBytes;                                                         //CPF_Parm|CPF_OutParm
	FLOAT totalRecvdBytes;                                                    //CPF_Parm|CPF_OutParm
	FLOAT fileBytes;                                                          //CPF_Parm|CPF_OutParm
	FLOAT fileRecvdBytes;                                                     //CPF_Parm|CPF_OutParm
};
struct UeviLPatchService_execStartPatch_Parms
{
};

// *****************************************************************************
// UeviLPatchService (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UeviLPatchService : public UR6AbstractEviLPatchService
{
public:
	FLOAT m_bLastUpdateTime;                                                  //0
	virtual ~UeviLPatchService();
	static void CDECL FinalDestroy();
	static DWORD CDECL GetPatchServiceState();
	static void CDECL InternalConstructor(void *);
	void StartPatch();
	static class UClass * CDECL StaticClass();
	UeviLPatchService(class UeviLPatchService const &);
	UeviLPatchService();
	void execAbortPatchService(struct FFrame &, void * const);
	void execCanRunUpdateService(struct FFrame &, void * const);
	void execGetDownloadProgress(struct FFrame &, void * const);
	void execGetExitCause(struct FFrame &, void * const);
	void execGetState(struct FFrame &, void * const);
	void execStartPatch(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UeviLPatchService & operator=(class UeviLPatchService const &);
private:
	static class UClass PrivateStaticClass();
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
