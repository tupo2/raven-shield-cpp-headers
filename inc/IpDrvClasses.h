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
** Unreal native C++ headers for the IpDrv package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName IPDRV_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(Accepted)
AUTOGENERATE_NAME(Closed)
AUTOGENERATE_NAME(Opened)
AUTOGENERATE_NAME(ReceivedBinary)
AUTOGENERATE_NAME(ReceivedLine)
AUTOGENERATE_NAME(ReceivedText)
AUTOGENERATE_NAME(ResolveFailed)
AUTOGENERATE_NAME(Resolved)

enum EReceiveMode{
	 RMODE_Manual=0
	,RMODE_Event=1
};
enum ELinkMode{
	 MODE_Text=0
	,MODE_Line=1
	,MODE_Binary=2
};
struct AInternetLink_eventResolveFailed_Parms
{
};
struct AInternetLink_eventResolved_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
};
struct AInternetLink_execGetLocalIP_Parms
{
	struct FIpAddr Arg;                                                       //CPF_Parm|CPF_OutParm
};
struct AInternetLink_execValidate_Parms
{
	class FString ValidationString;                                           //CPF_Parm|CPF_NeedCtorLink
	class FString GameName;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AInternetLink_execStringToIpAddr_Parms
{
	class FString Str;                                                        //CPF_Parm|CPF_NeedCtorLink
	struct FIpAddr Addr;                                                      //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AInternetLink_execIpAddrToString_Parms
{
	struct FIpAddr Arg;                                                       //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AInternetLink_execGetLastError_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AInternetLink_execResolve_Parms
{
	class FString Domain;                                                     //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
};
struct AInternetLink_execParseURL_Parms
{
	class FString URL;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString Addr;                                                       //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT Port;                                                                 //CPF_Parm|CPF_OutParm
	class FString LevelName;                                                  //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString EntryName;                                                  //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AInternetLink_execIsDataPending_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AInternetLink (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AInternetLink : public AInternetInfo
{
public:
	BYTE LinkMode;                                                            //0
	BYTE ReceiveMode;                                                         //0
	INT Socket;                                                               //0
	INT Port;                                                                 //0
	INT RemoteSocket;                                                         //0
	INT PrivateResolveInfo;                                                   //CPF_Native
	INT DataPending;                                                          //0
	virtual ~AInternetLink();
	virtual void Destroy();
	virtual INT Tick(FLOAT, enum ELevelTick);
	AInternetLink(class AInternetLink const &);
	AInternetLink();
	class FResolveInfo * & GetResolveInfo();
	unsigned INT & GetSocket();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventResolveFailed();
	void eventResolved(struct FIpAddr);
	void execGetLastError(struct FFrame &, void * const);
	void execGetLocalIP(struct FFrame &, void * const);
	void execIpAddrToString(struct FFrame &, void * const);
	void execIsDataPending(struct FFrame &, void * const);
	void execParseURL(struct FFrame &, void * const);
	void execResolve(struct FFrame &, void * const);
	void execStringToIpAddr(struct FFrame &, void * const);
	void execValidate(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AInternetLink & operator=(class AInternetLink const &);
private:
	static class UClass PrivateStaticClass();
};
struct AUdpLink_execBindPort_Parms
{
	INT Port;                                                                 //CPF_Parm
	BITFIELD bUseNextAvailable : 1;                                           //CPF_Parm
	class FString szLocalBoundIpAddress;                                      //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AUdpLink_execGetMaxAvailPorts_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AUdpLink_execCheckForPlayerTimeouts_Parms
{
};
struct AUdpLink_execSetPlayingTime_Parms
{
	class FString szIPAddr;                                                   //CPF_Parm|CPF_NeedCtorLink
	FLOAT fLoginTime;                                                         //CPF_Parm
	FLOAT fCurrentTime;                                                       //CPF_Parm
};
struct AUdpLink_execGetPlayingTime_Parms
{
	class FString szIPAddr;                                                   //CPF_Parm|CPF_NeedCtorLink
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AUdpLink_eventReceivedBinary_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	INT Count;                                                                //CPF_Parm
	BYTE B[255];                                                              //CPF_Parm
};
struct AUdpLink_eventReceivedLine_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	class FString Line;                                                       //CPF_Parm|CPF_NeedCtorLink
};
struct AUdpLink_eventReceivedText_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
};
struct AUdpLink_execReadBinary_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm|CPF_OutParm
	INT Count;                                                                //CPF_Parm
	BYTE B[255];                                                              //CPF_Parm|CPF_OutParm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AUdpLink_execReadText_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm|CPF_OutParm
	class FString Str;                                                        //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AUdpLink_execSendBinary_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	INT Count;                                                                //CPF_Parm
	BYTE B[255];                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AUdpLink_execSendText_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	class FString Str;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// AUdpLink (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AUdpLink : public AInternetLink
{
public:
	INT BroadcastAddr;                                                        //CPF_Edit
	virtual ~AUdpLink();
	virtual INT Tick(FLOAT, enum ELevelTick);
	virtual void PostScriptDestroyed();
	AUdpLink(class AUdpLink const &);
	AUdpLink();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void eventReceivedBinary(struct FIpAddr, INT, BYTE *);
	void eventReceivedLine(struct FIpAddr, class FString const &);
	void eventReceivedText(struct FIpAddr, class FString const &);
	void execBindPort(struct FFrame &, void * const);
	void execCheckForPlayerTimeouts(struct FFrame &, void * const);
	void execGetMaxAvailPorts(struct FFrame &, void * const);
	void execGetPlayingTime(struct FFrame &, void * const);
	void execReadBinary(struct FFrame &, void * const);
	void execReadText(struct FFrame &, void * const);
	void execSendBinary(struct FFrame &, void * const);
	void execSendText(struct FFrame &, void * const);
	void execSetPlayingTime(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class AUdpLink & operator=(class AUdpLink const &);
private:
	static class UClass PrivateStaticClass();
};
struct AUdpBeacon_execDisplayTime_Parms
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
struct AUdpBeacon_execTimer_Parms
{
	class AController* aPC;                                                   //0
};
struct AUdpBeacon_execBuildBeaconText_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString textData;                                                   //CPF_NeedCtorLink
	INT integerData;                                                          //0
	class FString MapListType;                                                //CPF_NeedCtorLink
	class AMapList* myList;                                                   //0
	class UClass* ML;                                                         //0
	INT iCounter;                                                             //0
	class APlayerController* aPC;                                             //0
	INT iNumPlayers;                                                          //0
	class FString szIPAddr;                                                   //CPF_NeedCtorLink
	FLOAT fPlayingTime[32];                                                   //0
	INT iPingTimeMS[32];                                                      //0
	INT iKillCount[32];                                                       //0
	class AController* _Controller;                                           //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct AUdpBeacon_execDestroyed_Parms
{
};
struct AUdpBeacon_execRespondPreJoinQuery_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	class FString textData;                                                   //CPF_NeedCtorLink
	INT integerData;                                                          //0
	class UR6ServerInfo* pServerOptions;                                      //0
	class APlayerController* aPC;                                             //0
	INT iNumPlayers;                                                          //0
};
struct AUdpBeacon_execInitBeaconProduct_Parms
{
};
struct AUdpBeacon_eventReceivedText_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	class UR6ServerInfo* pServerOptions;                                      //0
	BITFIELD bServerResistered : 1;                                           //0
};
struct AUdpBeacon_execBroadcastBeaconQuery_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
};
struct AUdpBeacon_execBroadcastBeacon_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	class FString textData;                                                   //CPF_NeedCtorLink
};
struct AUdpBeacon_execBeginPlay_Parms
{
	struct FIpAddr Addr;                                                      //0
};

// *****************************************************************************
// AUdpBeacon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AUdpBeacon : public AUdpLink
{
public:
	INT ServerBeaconPort;                                                     //CPF_Edit|CPF_Config|CPF_GlobalConfig
	INT BeaconPort;                                                           //CPF_Edit|CPF_Config|CPF_GlobalConfig
	INT UdpServerQueryPort;                                                   //0
	INT boundport;                                                            //0
	BITFIELD DoBeacon : 1;                                                    //CPF_Edit|CPF_Config|CPF_GlobalConfig
	FLOAT BeaconTimeout;                                                      //CPF_Edit|CPF_Config|CPF_GlobalConfig
	class FString BeaconProduct;                                              //CPF_Edit|CPF_Config|CPF_GlobalConfig|CPF_NeedCtorLink
	class FString KeyWordMarker;                                              //CPF_NeedCtorLink
	class FString PreJoinQueryMarker;                                         //CPF_NeedCtorLink
	class FString MaxPlayersMarker;                                           //CPF_NeedCtorLink
	class FString NumPlayersMarker;                                           //CPF_NeedCtorLink
	class FString MapNameMarker;                                              //CPF_NeedCtorLink
	class FString GameTypeMarker;                                             //CPF_NeedCtorLink
	class FString LockedMarker;                                               //CPF_NeedCtorLink
	class FString DecicatedMarker;                                            //CPF_NeedCtorLink
	class FString SvrNameMarker;                                              //CPF_NeedCtorLink
	class FString MenuGmNameMarker;                                           //CPF_NeedCtorLink
	class FString MapListMarker;                                              //CPF_NeedCtorLink
	class FString PlayerListMarker;                                           //CPF_NeedCtorLink
	class FString OptionsListMarker;                                          //CPF_NeedCtorLink
	class FString PlayerTimeMarker;                                           //CPF_NeedCtorLink
	class FString PlayerPingMarker;                                           //CPF_NeedCtorLink
	class FString PlayerKillMarker;                                           //CPF_NeedCtorLink
	class FString GamePortMarker;                                             //CPF_NeedCtorLink
	class FString RoundsPerMatchMarker;                                       //CPF_NeedCtorLink
	class FString RoundTimeMarker;                                            //CPF_NeedCtorLink
	class FString BetTimeMarker;                                              //CPF_NeedCtorLink
	class FString BombTimeMarker;                                             //CPF_NeedCtorLink
	class FString ShowNamesMarker;                                            //CPF_NeedCtorLink
	class FString InternetServerMarker;                                       //CPF_NeedCtorLink
	class FString FriendlyFireMarker;                                         //CPF_NeedCtorLink
	class FString AutoBalTeamMarker;                                          //CPF_NeedCtorLink
	class FString TKPenaltyMarker;                                            //CPF_NeedCtorLink
	class FString AllowRadarMarker;                                           //CPF_NeedCtorLink
	class FString GameVersionMarker;                                          //CPF_NeedCtorLink
	class FString LobbyServerIDMarker;                                        //CPF_NeedCtorLink
	class FString GroupIDMarker;                                              //CPF_NeedCtorLink
	class FString BeaconPortMarker;                                           //CPF_NeedCtorLink
	class FString NumTerroMarker;                                             //CPF_NeedCtorLink
	class FString AIBkpMarker;                                                //CPF_NeedCtorLink
	class FString RotateMapMarker;                                            //CPF_NeedCtorLink
	class FString ForceFPWpnMarker;                                           //CPF_NeedCtorLink
	class FString ModNameMarker;                                              //CPF_NeedCtorLink
	class FString PunkBusterMarker;                                           //CPF_NeedCtorLink
	class FString LocalIpAddress;                                             //CPF_NeedCtorLink
};

// *****************************************************************************
// UUpdateServerCommandlet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUpdateServerCommandlet : public UCommandlet
{
};

// *****************************************************************************
// UMasterServerCommandlet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UMasterServerCommandlet : public UCommandlet
{
};

// *****************************************************************************
// UDecompressCommandlet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UDecompressCommandlet : public UCommandlet
{
};

// *****************************************************************************
// UCompressCommandlet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UCompressCommandlet : public UCommandlet
{
};

// *****************************************************************************
// UTcpNetDriver (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UTcpNetDriver : public UNetDriver
{
public:
	BITFIELD AllowPlayerPortUnreach : 1;                                      //CPF_Config
	BITFIELD LogPortUnreach : 1;                                              //CPF_Config
	INT MaxConnPerIPPerMinute;                                                //CPF_Config
	BITFIELD LogMaxConnPerIPPerMin : 1;                                       //CPF_Config
	virtual ~UTcpNetDriver();
	virtual void LowLevelDestroy();
	virtual class FString LowLevelGetNetworkNumber();
	virtual INT InitConnect(class FNetworkNotify *, class FURL &, class FString &);
	virtual INT InitListen(class FNetworkNotify *, class FURL &, class FString &);
	virtual void TickDispatch(FLOAT);
	class UTcpipConnection * GetServerConnection();
	INT InitBase(INT, class FNetworkNotify *, class FURL &, class FString &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	UTcpNetDriver(class UTcpNetDriver const &);
	UTcpNetDriver();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UTcpNetDriver & operator=(class UTcpNetDriver const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UTcpipConnection (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UTcpipConnection : public UNetConnection
{
public:
	virtual ~UTcpipConnection();
	virtual class FString LowLevelGetRemoteAddress();
	virtual class FString LowLevelDescribe();
	virtual void LowLevelSend(void *, INT);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UTcpipConnection(class UTcpipConnection const &);
	UTcpipConnection(unsigned int, class UNetDriver *, struct sockaddr_in, enum EConnectionState, INT, class FURL const &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UTcpipConnection & operator=(class UTcpipConnection const &);
protected:
	UTcpipConnection();
private:
	static class UClass PrivateStaticClass();
};

enum ELinkState{
	 STATE_Initialized=0
	,STATE_Ready=1
	,STATE_Listening=2
	,STATE_Connecting=3
	,STATE_Connected=4
	,STATE_ListenClosePending=5
	,STATE_ConnectClosePending=6
	,STATE_ListenClosing=7
	,STATE_ConnectClosing=8
};
struct ATcpLink_eventReceivedBinary_Parms
{
	INT Count;                                                                //CPF_Parm
	BYTE B[255];                                                              //CPF_Parm
};
struct ATcpLink_eventReceivedLine_Parms
{
	class FString Line;                                                       //CPF_Parm|CPF_NeedCtorLink
};
struct ATcpLink_eventReceivedText_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
};
struct ATcpLink_eventClosed_Parms
{
};
struct ATcpLink_eventOpened_Parms
{
};
struct ATcpLink_eventAccepted_Parms
{
};
struct ATcpLink_execReadBinary_Parms
{
	INT Count;                                                                //CPF_Parm
	BYTE B[255];                                                              //CPF_Parm|CPF_OutParm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execReadText_Parms
{
	class FString Str;                                                        //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execSendBinary_Parms
{
	INT Count;                                                                //CPF_Parm
	BYTE B[255];                                                              //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execSendText_Parms
{
	class FString Str;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execIsConnected_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execClose_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execOpen_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execListen_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct ATcpLink_execBindPort_Parms
{
	INT Port;                                                                 //CPF_Parm
	BITFIELD bUseNextAvailable : 1;                                           //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// ATcpLink (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ATcpLink : public AInternetLink
{
public:
	BYTE LinkState;                                                           //0
	class UClass* AcceptClass;                                                //0
	TArray<BYTE> SendFIFO;                                                    //CPF_NeedCtorLink
	struct FIpAddr RemoteAddr;                                                //0
	virtual ~ATcpLink();
	virtual INT Tick(FLOAT, enum ELevelTick);
	virtual void PostScriptDestroyed();
	ATcpLink(class ATcpLink const &);
	ATcpLink();
	void CheckConnectionAttempt();
	void CheckConnectionQueue();
	INT FlushSendBuffer();
	static void CDECL InternalConstructor(void *);
	void PollConnections();
	void ShutdownConnection();
	static class UClass * CDECL StaticClass();
	void eventAccepted();
	void eventClosed();
	void eventOpened();
	void eventReceivedBinary(INT, BYTE *);
	void eventReceivedLine(class FString const &);
	void eventReceivedText(class FString const &);
	void execBindPort(struct FFrame &, void * const);
	void execClose(struct FFrame &, void * const);
	void execIsConnected(struct FFrame &, void * const);
	void execListen(struct FFrame &, void * const);
	void execOpen(struct FFrame &, void * const);
	void execReadBinary(struct FFrame &, void * const);
	void execReadText(struct FFrame &, void * const);
	void execSendBinary(struct FFrame &, void * const);
	void execSendText(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class ATcpLink & operator=(class ATcpLink const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UHTTPDownload (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UHTTPDownload : public UDownload
{
public:
	class FString RedirectToURL;                                              //CPF_Config|CPF_NeedCtorLink
	BITFIELD UseCompression : 1;                                              //CPF_Config
	char Unknown3[0x0410];
	class FString ProxyServerHost;                                            //CPF_Config|CPF_NeedCtorLink
	INT ProxyServerPort;                                                      //CPF_Config
};

// -----------------------------------------------------------------------------
// FPreJoinResponseInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FPreJoinResponseInfo
{
public:
	BITFIELD bResponseRcvd : 1;                                           //0
	INT iLobbyID;                                                         //0
	INT iGroupID;                                                         //0
	BITFIELD bLocked : 1;                                                 //0
	class FString szGameVersion;                                          //CPF_NeedCtorLink
	class FString szPreJoinModName;                                       //CPF_NeedCtorLink
	BITFIELD bInternetServer : 1;                                         //0
	INT iNumPlayers;                                                      //0
	INT iMaxPlayers;                                                      //0
	INT iPunkBusterEnabled;                                               //0
};

// -----------------------------------------------------------------------------
// FBeaconInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FBeaconInfo
{
public:
	struct FIpAddr Addr;                                                  //0
	FLOAT Time;                                                           //0
	class FString Text;                                                   //CPF_NeedCtorLink
	INT iNumPlayers;                                                      //0
	INT iMaxPlayers;                                                      //0
	class FString szCurrGameType;                                         //CPF_NeedCtorLink
	class FString szMapName;                                              //CPF_NeedCtorLink
	class FString szSvrName;                                              //CPF_NeedCtorLink
	BITFIELD bDedicated : 1;                                              //0
	BITFIELD bLocked : 1;                                                 //0
	class FString MapList[32];                                            //CPF_NeedCtorLink
	class FString szGameType[32];                                         //CPF_NeedCtorLink
	class FString szPlayerName[32];                                       //CPF_NeedCtorLink
	class FString szPlayerTime[32];                                       //CPF_NeedCtorLink
	INT iPlayerPingTime[32];                                              //0
	INT iPlayerKillCount[32];                                             //0
	INT iRoundsPerMap;                                                    //0
	FLOAT fRndTime;                                                       //0
	FLOAT fBetTime;                                                       //0
	FLOAT fBombTime;                                                      //0
	BITFIELD bShowNames : 1;                                              //0
	BITFIELD bInternetServer : 1;                                         //0
	BITFIELD bFriendlyFire : 1;                                           //0
	BITFIELD bAutoBalTeam : 1;                                            //0
	BITFIELD bTKPenalty : 1;                                              //0
	BITFIELD bNewData : 1;                                                //0
	BITFIELD bRadar : 1;                                                  //0
	INT iPort;                                                            //0
	class FString szGameVersion;                                          //CPF_NeedCtorLink
	INT iLobbyID;                                                         //0
	INT iGroupID;                                                         //0
	INT iBeaconPort;                                                      //0
	INT iNumTerro;                                                        //0
	BITFIELD bAIBkp : 1;                                                  //0
	BITFIELD bRotateMap : 1;                                              //0
	BITFIELD bForceFPWpn : 1;                                             //0
	class FString szModName;                                              //CPF_NeedCtorLink
	BITFIELD bPunkBuster : 1;                                             //0
};
struct AClientBeaconReceiver_execDecodeKeyWordPair_Parms
{
	class FString szKeyWord;                                                  //CPF_Parm|CPF_NeedCtorLink
	INT iIndex;                                                               //CPF_Parm
	INT iIntegerValue;                                                        //0
	BITFIELD bBooleanValue : 1;                                               //0
	class FString szStringValue;                                              //CPF_NeedCtorLink
	class FString szOptionName;                                               //CPF_NeedCtorLink
	INT j;                                                                    //0
	INT N;                                                                    //0
	INT pos;                                                                  //0
	class FString InOpt;                                                      //CPF_NeedCtorLink
	class FString LeftOpt;                                                    //CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execDecodeKeyWordString_Parms
{
	INT iBeaconIdx;                                                           //CPF_Parm
	class FString szKewWordString;                                            //CPF_Parm|CPF_NeedCtorLink
	INT pos;                                                                  //0
	INT counter;                                                              //0
	INT i;                                                                    //0
	class FString szOneKWMessage;                                             //CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execParseOption_Parms
{
	class FString Options;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString InKey;                                                      //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString Pair;                                                       //CPF_NeedCtorLink
	class FString Key;                                                        //CPF_NeedCtorLink
	class FString Value;                                                      //CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetKeyValue_Parms
{
	class FString Pair;                                                       //CPF_Parm|CPF_NeedCtorLink
	class FString Key;                                                        //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString Value;                                                      //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGrabOption_Parms
{
	class FString Options;                                                    //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString Result;                                                     //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execRefreshServers_Parms
{
	struct FIpAddr Addr;                                                      //0
	INT i;                                                                    //0
};
struct AClientBeaconReceiver_execClearBeacon_Parms
{
	INT i;                                                                    //CPF_Parm
	INT j;                                                                    //0
};
struct AClientBeaconReceiver_execGetPunkBusterEnabled_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetForceFirstPersonWeapon_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetRotateMap_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetAIBackup_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetNumTerrorists_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetBeaconPort_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetGroupID_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetLobbyID_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execSetNewDataFlag_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD bNewData : 1;                                                    //CPF_Parm
};
struct AClientBeaconReceiver_execGetServerGameVersion_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetNewDataFlag_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetCurrGameType_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetRadar_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetTKPenalty_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetAutoBalanceTeam_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetFriendlyFire_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetInternetServer_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetShowEnemyNames_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetGameType_Parms
{
	INT iBeacon;                                                              //CPF_Parm
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetPlayerKillCount_Parms
{
	INT iBeacon;                                                              //CPF_Parm
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetPlayerPingTime_Parms
{
	INT iBeacon;                                                              //CPF_Parm
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetPlayerTime_Parms
{
	INT iBeacon;                                                              //CPF_Parm
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetPlayerName_Parms
{
	INT iBeacon;                                                              //CPF_Parm
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetPlayerListSize_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT j;                                                                    //0
};
struct AClientBeaconReceiver_execGetOneMapName_Parms
{
	INT iBeacon;                                                              //CPF_Parm
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetMapListSize_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT j;                                                                    //0
};
struct AClientBeaconReceiver_execGetBombTime_Parms
{
	INT i;                                                                    //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetBetTime_Parms
{
	INT i;                                                                    //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetRoundTime_Parms
{
	INT i;                                                                    //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetRoundsPerMap_Parms
{
	INT i;                                                                    //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetDedicated_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetLocked_Parms
{
	INT i;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetModName_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetSvrName_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetFirstMapName_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetNumPlayers_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetPortNumber_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetMaxPlayers_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetBeaconIntAddress_Parms
{
	INT i;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_execGetBeaconListSize_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct AClientBeaconReceiver_eventReceivedText_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
	INT N;                                                                    //0
	INT pos;                                                                  //0
	class FString szSecondWord;                                               //CPF_NeedCtorLink
	class FString szThirdWord;                                                //CPF_NeedCtorLink
	class FString szRemainingText;                                            //CPF_NeedCtorLink
	class FString szOneKWMessage;                                             //CPF_NeedCtorLink
	class FString szPreJoinString;                                            //CPF_NeedCtorLink
	BITFIELD bBooleanValue : 1;                                               //0
	class FString szStringValue;                                              //CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execPreJoinQuery_Parms
{
	class FString szIP;                                                       //CPF_Parm|CPF_NeedCtorLink
	INT iBeaconPort;                                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FIpAddr Addr;                                                      //0
};
struct AClientBeaconReceiver_execBroadcastBeacon_Parms
{
	struct FIpAddr Addr;                                                      //CPF_Parm
	INT i;                                                                    //0
	struct FIpAddr lAddr;                                                     //0
};
struct AClientBeaconReceiver_execTimer_Parms
{
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct AClientBeaconReceiver_execDestroyed_Parms
{
};
struct AClientBeaconReceiver_execBeginPlay_Parms
{
	struct FIpAddr Addr;                                                      //0
};
struct AClientBeaconReceiver_execGetBeaconText_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct AClientBeaconReceiver_execGetBeaconAddress_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};

// *****************************************************************************
// AClientBeaconReceiver (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AClientBeaconReceiver : public AUdpBeacon
{
public:
	struct FBeaconInfo Beacons[32];                                           //CPF_NeedCtorLink
	struct FPreJoinResponseInfo PreJoinInfo;                                  //CPF_NeedCtorLink
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
