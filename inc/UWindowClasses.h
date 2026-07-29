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
** Unreal native C++ headers for the UWindow package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName UWINDOW_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

enum ERestKitID{
	 ERestKit_SubMachineGuns=0
	,ERestKit_Shotguns=1
	,ERestKit_AssaultRifle=2
	,ERestKit_MachineGuns=3
	,ERestKit_SniperRifle=4
	,ERestKit_Pistol=5
	,ERestKit_MachinePistol=6
	,ERestKit_PriWpnGadget=7
	,ERestKit_SecWpnGadget=8
	,ERestKit_MiscGadget=9
	,ERestKit_Max=10
};
enum EButtonName{
	 EBN_None=0
	,EBN_RoundPerMatch=1
	,EBN_RoundTime=2
	,EBN_NB_Players=3
	,EBN_BombTimer=4
	,EBN_Spectator=5
	,EBN_RoundPerMission=6
	,EBN_TimeBetRound=7
	,EBN_NB_of_Terro=8
	,EBN_InternetServer=9
	,EBN_DedicatedServer=10
	,EBN_FriendlyFire=11
	,EBN_AllowTeamNames=12
	,EBN_AutoBalTeam=13
	,EBN_TKPenalty=14
	,EBN_AllowRadar=15
	,EBN_RotateMap=16
	,EBN_AIBkp=17
	,EBN_ForceFPersonWp=18
	,EBN_Recruit=19
	,EBN_Veteran=20
	,EBN_Elite=21
	,EBN_PunkBuster=22
	,EBN_DiffLevel=23
	,EBN_CamFirstPerson=24
	,EBN_CamThirdPerson=25
	,EBN_CamFreeThirdP=26
	,EBN_CamGhost=27
	,EBN_CamFadeToBk=28
	,EBN_CamTeamOnly=29
	,EBN_LogIn=30
	,EBN_LogOut=31
	,EBN_Join=32
	,EBN_JoinIP=33
	,EBN_Refresh=34
	,EBN_Create=35
	,EBN_Cancel=36
	,EBN_Launch=37
	,EBN_EditMsg=38
	,EBN_CancelUbiCom=39
	,EBN_EditSkinSel=40
	,EBN_Max=41
};
enum ERenderStyle{
	 STY_None=0
	,STY_Normal=1
	,STY_Masked=2
	,STY_Translucent=3
	,STY_Modulated=4
	,STY_Alpha=5
	,STY_Particle=6
	,STY_Highlight=7
};
enum EPopUpID{
	 EPopUpID_None=0
	,EPopUpID_MsgOfTheDay=1
	,EPopUpID_FileWriteError=2
	,EPopUpID_FileWriteErrorBackupPln=3
	,EPopUpID_SaveFileExist=4
	,EPopUpID_PlanDeleteError=5
	,EPopUpID_InvalidLoad=6
	,EPopUpID_MPServerOpt=7
	,EPopUpID_MPKitRest=8
	,EPopUpID_MPGearRoom=9
	,EPopUpID_EnterIP=10
	,EPopUpID_JoinIPError=11
	,EPopUpID_JoinIPWait=12
	,EPopUpID_UbiAccount=13
	,EPopUpID_LoginError=14
	,EPopUpID_UbiComDisconnected=15
	,EPopUpID_CDKeyPleaseWait=16
	,EPopUpID_EnterCDKey=17
	,EPopUpID_Password=18
	,EPopUpID_JoinRoomError=19
	,EPopUpID_JoinRoomErrorCDKeyInUse=20
	,EPopUpID_JoinRoomErrorCDKeySrvNotResp=21
	,EPopUpID_JoinRoomErrorPassWd=22
	,EPopUpID_JoinRoomErrorSrvFull=23
	,EPopUpID_ErrorConnect=24
	,EPopUpID_PunkBusterOnlyError=25
	,EPopUpID_PunkBusterDisabledServerWarn=26
	,EPopUpID_InvalidPassword=27
	,EPopUpID_QueryServerWait=28
	,EPopUpID_QueryServerError=29
	,EPopUpID_TKPenalty=30
	,EPopUpID_LeaveInGameToMultiMenu=31
	,EPopUpID_RefreshServerList=32
	,EPopUpID_DownLoadingInProgress=33
	,EPopUpID_AdvFilters=34
	,EPopUpID_CoopFilters=35
	,EPopUpID_InvalidMod=36
	,EPopUp_ID_GSCoOpMaxError=37
	,EPopUpID_UniformSel=38
	,EPopUpID_QuickPlay=39
	,EPopUpID_LoadDelPlan=40
	,EPopUpID_SaveDelPlan=41
	,EPopUpID_DeleteCampaign=42
	,EPopUpID_OverWriteCampaign=43
	,EPopUpID_DelAllWayPoints=44
	,EPopUpID_DelAllTeamsWayPoints=45
	,EPopUpID_LeavePlanningToMain=46
	,EPopUpID_SavePlanning=47
	,EPopUpID_LoadPlanning=48
	,EPopUpID_PlanningIncomplete=49
	,EPopUpID_LeaveInGameToMain=50
	,EPopUpID_LeaveInGameToQuit=51
	,EPopUpID_AbortMissionRetryAction=52
	,EPopUpID_AbortMissionRetryPlan=53
	,EPopUpID_QuitTraining=54
	,EPopUpID_OptionsResetDefault=55
	,EPopUpID_TextOnly=56
	,EPopUpID_Max=57
};
enum PropertyCondition{
	 PC_None=0
	,PC_LessThan=1
	,PC_Equal=2
	,PC_GreaterThan=3
	,PC_NotEqual=4
	,PC_Contains=5
	,PC_NotContains=6
};
enum MessageBoxResult{
	 MR_None=0
	,MR_Yes=1
	,MR_No=2
	,MR_OK=3
	,MR_Cancel=4
};
enum MessageBoxButtons{
	 MB_YesNo=0
	,MB_OKCancel=1
	,MB_OK=2
	,MB_YesNoCancel=3
	,MB_Cancel=4
	,MB_None=5
};
enum MenuSound{
	 MS_MenuPullDown=0
	,MS_MenuCloseUp=1
	,MS_MenuItem=2
	,MS_WindowOpen=3
	,MS_WindowClose=4
	,MS_ChangeTab=5
};
enum FrameHitTest{
	 HT_NW=0
	,HT_N=1
	,HT_NE=2
	,HT_W=3
	,HT_E=4
	,HT_SW=5
	,HT_S=6
	,HT_SE=7
	,HT_TitleBar=8
	,HT_DragHandle=9
	,HT_None=10
};
enum TextAlign{
	 TA_Left=0
	,TA_Right=1
	,TA_Center=2
};

// -----------------------------------------------------------------------------
// FTexRegion ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FTexRegion
{
public:
	INT X;                                                                //CPF_Edit
	INT Y;                                                                //CPF_Edit
	INT W;                                                                //CPF_Edit
	INT H;                                                                //CPF_Edit
	class UTexture* t;                                                    //CPF_Edit
};

// -----------------------------------------------------------------------------
// FHTMLStyle ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FHTMLStyle
{
public:
	INT BulletLevel;                                                      //0
	class FString LinkDestination;                                        //CPF_NeedCtorLink
	class FColor TextColor;                                               //0
	class FColor BGColor;                                                 //0
	BITFIELD bCenter : 1;                                                 //0
	BITFIELD bLink : 1;                                                   //0
	BITFIELD bUnderline : 1;                                              //0
	BITFIELD bNoBR : 1;                                                   //0
	BITFIELD bHeading : 1;                                                //0
	BITFIELD bBold : 1;                                                   //0
	BITFIELD bBlink : 1;                                                  //0
};

// -----------------------------------------------------------------------------
// FRegionButton ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FRegionButton
{
public:
	struct FRegion Up;                                                    //0
	struct FRegion Down;                                                  //0
	struct FRegion Over;                                                  //0
	struct FRegion Disabled;                                              //0
};
struct UUWindowBase_execBuildObjectWithProperties_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class FString ObjectClass;                                                //CPF_NeedCtorLink
	class FString PropertyName;                                               //CPF_NeedCtorLink
	class FString PropertyValue;                                              //CPF_NeedCtorLink
	class FString temp;                                                       //CPF_NeedCtorLink
	class UClass* C;                                                          //0
	class UObject* o;                                                         //0
};
struct UUWindowBase_execInStrAfter_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	class FString Match;                                                      //CPF_Parm|CPF_NeedCtorLink
	INT pos;                                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UUWindowBase_execGetRegion_Parms
{
	struct FTexRegion t;                                                      //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FRegion R;                                                         //0
};
struct UUWindowBase_execNewTexRegion_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UTexture* t;                                                        //CPF_Parm
	struct FTexRegion ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FTexRegion R;                                                      //0
};
struct UUWindowBase_execNewRegion_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FRegion R;                                                         //0
};

// *****************************************************************************
// UUWindowBase (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowBase : public UObject
{
public:
	BYTE Style;                                                               //CPF_Edit
};

enum WinMessage{
	 WM_LMouseDown=0
	,WM_LMouseUp=1
	,WM_MMouseDown=2
	,WM_MMouseUp=3
	,WM_RMouseDown=4
	,WM_RMouseUp=5
	,WM_MouseWheelDown=6
	,WM_MouseWheelUp=7
	,WM_KeyUp=8
	,WM_KeyDown=9
	,WM_KeyType=10
	,WM_Paint=11
};
enum eR6MenuWidgetMessage{
	 MWM_UBI_LOGIN_SUCCESS=0
	,MWM_UBI_LOGIN_FAIL=1
	,MWM_UBI_LOGIN_SKIPPED=2
	,MWM_CDKEYVAL_SKIPPED=3
	,MWM_CDKEYVAL_SUCCESS=4
	,MWM_CDKEYVAL_FAIL=5
	,MWM_UBI_JOINIP_SUCCESS=6
	,MWM_UBI_JOINIP_FAIL=7
	,MWM_QUERYSERVER_SUCCESS=8
	,MWM_QUERYSERVER_FAIL=9
	,MWM_QUERYSERVER_TRYAGAIN=10
};

// -----------------------------------------------------------------------------
// FMouseCursor ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FMouseCursor
{
public:
	class UTexture* Tex;                                                  //0
	INT HotX;                                                             //0
	INT HotY;                                                             //0
	BYTE WindowsCursor;                                                   //0
};
struct UUWindowWindow_execCheckKeyFocusWindow_Parms
{
	class UUWindowWindow* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execDoTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execWrapClipText_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	BITFIELD bCheckHotKey : 1;                                                //CPF_Parm
	INT Length;                                                               //CPF_Parm
	INT PaddingLength;                                                        //CPF_Parm
	BITFIELD bNoDraw : 1;                                                     //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT Xdefault;                                                           //0
	INT SpacePos;                                                             //0
	INT CRPos;                                                                //0
	INT WordPos;                                                              //0
	INT TotalPos;                                                             //0
	class FString Out;                                                        //CPF_NeedCtorLink
	class FString temp;                                                       //CPF_NeedCtorLink
	class FString Padding;                                                    //CPF_NeedCtorLink
	BITFIELD bCR : 1;                                                         //0
	BITFIELD bSentry : 1;                                                     //0
	INT i;                                                                    //0
	INT numLines;                                                             //0
	FLOAT pW;                                                                 //0
	FLOAT pH;                                                                 //0
};
struct UUWindowWindow_execClipText_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	BITFIELD bCheckHotKey : 1;                                                //CPF_Parm
};
struct UUWindowWindow_execDrawSimpleBackGround_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class FColor _BGColor;                                                    //CPF_Parm
	BYTE Alpha;                                                               //CPF_Parm
	class UTexture* BGTexture;                                                //0
	struct FRegion BGTextureRegion;                                           //0
	class FColor BGColor;                                                     //0
};
struct UUWindowWindow_execDrawSimpleBorder_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowWindow_execDrawStretchedTextureSegmentRot_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT tX;                                                                 //CPF_Parm
	FLOAT tY;                                                                 //CPF_Parm
	FLOAT tW;                                                                 //CPF_Parm
	FLOAT tH;                                                                 //CPF_Parm
	class UTexture* Tex;                                                      //CPF_Parm
	FLOAT fTexRotation;                                                       //CPF_Parm
	FLOAT OrgX;                                                               //0
	FLOAT OrgY;                                                               //0
	FLOAT ClipX;                                                              //0
	FLOAT ClipY;                                                              //0
};
struct UUWindowWindow_execDrawStretchedTexture_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UTexture* Tex;                                                      //CPF_Parm
};
struct UUWindowWindow_execDrawClippedTexture_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UTexture* Tex;                                                      //CPF_Parm
};
struct UUWindowWindow_execDrawVertTiledPieces_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT DestX;                                                              //CPF_Parm
	FLOAT DestY;                                                              //CPF_Parm
	FLOAT DestW;                                                              //CPF_Parm
	FLOAT DestH;                                                              //CPF_Parm
	struct FTexRegion T1;                                                     //CPF_Parm
	struct FTexRegion T2;                                                     //CPF_Parm
	struct FTexRegion T3;                                                     //CPF_Parm
	struct FTexRegion T4;                                                     //CPF_Parm
	struct FTexRegion T5;                                                     //CPF_Parm
	FLOAT Scale;                                                              //CPF_Parm
	struct FTexRegion Pieces[5];                                              //0
	struct FTexRegion R;                                                      //0
	INT PieceCount;                                                           //0
	INT j;                                                                    //0
	FLOAT Y;                                                                  //0
	FLOAT L;                                                                  //0
};
struct UUWindowWindow_execDrawHorizTiledPieces_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT DestX;                                                              //CPF_Parm
	FLOAT DestY;                                                              //CPF_Parm
	FLOAT DestW;                                                              //CPF_Parm
	FLOAT DestH;                                                              //CPF_Parm
	struct FTexRegion T1;                                                     //CPF_Parm
	struct FTexRegion T2;                                                     //CPF_Parm
	struct FTexRegion T3;                                                     //CPF_Parm
	struct FTexRegion T4;                                                     //CPF_Parm
	struct FTexRegion T5;                                                     //CPF_Parm
	FLOAT Scale;                                                              //CPF_Parm
	struct FTexRegion Pieces[5];                                              //0
	struct FTexRegion R;                                                      //0
	INT PieceCount;                                                           //0
	INT j;                                                                    //0
	FLOAT X;                                                                  //0
	FLOAT L;                                                                  //0
};
struct UUWindowWindow_execHideWindow_Parms
{
};
struct UUWindowWindow_execShowChildWindow_Parms
{
	class UUWindowWindow* Child;                                              //CPF_Parm
	BITFIELD bAtBack : 1;                                                     //CPF_Parm
	class UUWindowWindow* W;                                                  //0
};
struct UUWindowWindow_execShowWindow_Parms
{
};
struct UUWindowWindow_execHideChildWindow_Parms
{
	class UUWindowWindow* Child;                                              //CPF_Parm
	class UUWindowWindow* Window;                                             //0
};
struct UUWindowWindow_execWindowToGlobal_Parms
{
	FLOAT WinX;                                                               //CPF_Parm
	FLOAT WinY;                                                               //CPF_Parm
	FLOAT GlobalX;                                                            //CPF_Parm|CPF_OutParm
	FLOAT GlobalY;                                                            //CPF_Parm|CPF_OutParm
	class UUWindowWindow* P;                                                  //0
};
struct UUWindowWindow_execGlobalToWindow_Parms
{
	FLOAT GlobalX;                                                            //CPF_Parm
	FLOAT GlobalY;                                                            //CPF_Parm
	FLOAT WinX;                                                               //CPF_Parm|CPF_OutParm
	FLOAT WinY;                                                               //CPF_Parm|CPF_OutParm
	class UUWindowWindow* P;                                                  //0
};
struct UUWindowWindow_execGetMouseXY_Parms
{
	FLOAT X;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT Y;                                                                  //CPF_Parm|CPF_OutParm
	class UUWindowWindow* P;                                                  //0
};
struct UUWindowWindow_execCancelAcceptsFocus_Parms
{
};
struct UUWindowWindow_execSetAcceptsFocus_Parms
{
};
struct UUWindowWindow_execSendToBack_Parms
{
};
struct UUWindowWindow_execActivateWindow_Parms
{
	INT Depth;                                                                //CPF_Parm
	BITFIELD bTransientNoDeactivate : 1;                                      //CPF_Parm
};
struct UUWindowWindow_execMessageClients_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execPropagateKey_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execApplyResolutionOnWindowsPos_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowWindow* Child;                                              //0
	FLOAT fX;                                                                 //0
	FLOAT fY;                                                                 //0
};
struct UUWindowWindow_execFindWindowUnder_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowWindow* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execPaintClients_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT OrgX;                                                               //0
	FLOAT OrgY;                                                               //0
	FLOAT ClipX;                                                              //0
	FLOAT ClipY;                                                              //0
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execGetPlayerOwner_Parms
{
	class APlayerController* ReturnValue;                                     //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UUWindowWindow_execSetSize_Parms
{
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
};
struct UUWindowWindow_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
	class UUWindowWindow* Prev;                                               //0
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execEscClose_Parms
{
};
struct UUWindowWindow_execFocusOtherWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowWindow_execFocusWindow_Parms
{
};
struct UUWindowWindow_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execGetTime_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execRMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execKeyFocusExit_Parms
{
};
struct UUWindowWindow_execKeyFocusEnter_Parms
{
};
struct UUWindowWindow_execProcessMenuKey_Parms
{
	INT Key;                                                                  //CPF_Parm
	class FString KeyName;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowWindow_execKeyType_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMouseUpDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execHotKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execHotKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMouseLeave_Parms
{
};
struct UUWindowWindow_execDeactivated_Parms
{
};
struct UUWindowWindow_execActivated_Parms
{
};
struct UUWindowWindow_execMouseEnter_Parms
{
};
struct UUWindowWindow_execCreated_Parms
{
};
struct UUWindowWindow_execBeginPlay_Parms
{
};
struct UUWindowWindow_execRDoubleClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMDoubleClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execDoubleClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execRClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execMClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowWindow_execResized_Parms
{
};
struct UUWindowWindow_execGetButtonsDefinesUnique_Parms
{
	class UClass* WndClass;                                                   //CPF_Parm
	class UUWindowWindow* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execGetEntryLevel_Parms
{
	class ALevelInfo* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execGetLevel_Parms
{
	class ALevelInfo* ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execSaveConfigs_Parms
{
};
struct UUWindowWindow_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UUWindowWindow_execProcessGSMsg_Parms
{
	class FString _szMsg;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowWindow_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UUWindowWindow_execMenuLoadProfile_Parms
{
	BITFIELD _bServerProfile : 1;                                             //CPF_Parm
};
struct UUWindowWindow_execSetServerOptions_Parms
{
};
struct UUWindowWindow_execStripCRLF_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
};
struct UUWindowWindow_execReplaceText_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString Replace;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString With;                                                       //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
	class FString Input;                                                      //CPF_NeedCtorLink
};
struct UUWindowWindow_execSetCursor_Parms
{
	struct FMouseCursor C;                                                    //CPF_Parm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execNotifyWindow_Parms
{
	class UUWindowWindow* C;                                                  //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UUWindowWindow_execNotifyAfterLevelChange_Parms
{
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execNotifyBeforeLevelChange_Parms
{
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execNotifyQuitUnreal_Parms
{
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execSendMessage_Parms
{
	BYTE eMessage;                                                            //CPF_Parm
};
struct UUWindowWindow_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UUWindowWindow_execMessageBoxDone_Parms
{
	class UUWindowMessageBox* W;                                              //CPF_Parm
	BYTE Result;                                                              //CPF_Parm
};
struct UUWindowWindow_execMessageBox_Parms
{
	class FString Title;                                                      //CPF_Parm|CPF_NeedCtorLink
	class FString Message;                                                    //CPF_Parm|CPF_NeedCtorLink
	BYTE Buttons;                                                             //CPF_Parm
	BYTE ESCResult;                                                           //CPF_Parm
	BYTE EnterResult;                                                         //CPF_Parm
	INT TimeOut;                                                              //CPF_Parm
	class UUWindowMessageBox* ReturnValue;                                    //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowMessageBox* W;                                              //0
	class UUWindowFramedWindow* f;                                            //0
};
struct UUWindowWindow_execSetParent_Parms
{
	class UUWindowWindow* NewParent;                                          //CPF_Parm
};
struct UUWindowWindow_execCreateWindow_Parms
{
	class UClass* WndClass;                                                   //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UUWindowWindow* OwnerW;                                             //CPF_Parm
	BITFIELD bUnique : 1;                                                     //CPF_Parm
	FName ObjectName;                                                         //CPF_Parm
	class UUWindowWindow* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execGetParent_Parms
{
	class UClass* ParentClass;                                                //CPF_Parm
	BITFIELD bExactClass : 1;                                                 //CPF_Parm
	class UUWindowWindow* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* P;                                                  //0
};
struct UUWindowWindow_execWindowIsVisible_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execCheckMousePassThrough_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execWindowShown_Parms
{
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execWindowHidden_Parms
{
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execWaitModal_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execShowModal_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowWindow_execResolutionChanged_Parms
{
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UUWindowWindow* Child;                                              //0
};
struct UUWindowWindow_execBringToFront_Parms
{
};
struct UUWindowWindow_execTextSize_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	FLOAT W;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT H;                                                                  //CPF_Parm|CPF_OutParm
	INT _TotalWidth;                                                          //CPF_Parm
	INT _SpaceWidth;                                                          //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
};
struct UUWindowWindow_execGetDesiredDimensions_Parms
{
	FLOAT W;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT H;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT MaxW;                                                               //0
	FLOAT MaxH;                                                               //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	class UUWindowWindow* Child;                                              //0
	class UUWindowWindow* Found;                                              //0
};
struct UUWindowWindow_execFindChildWindow_Parms
{
	class UClass* ChildClass;                                                 //CPF_Parm
	BITFIELD bExactClass : 1;                                                 //CPF_Parm
	class UUWindowWindow* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowWindow* Child;                                              //0
	class UUWindowWindow* Found;                                              //0
};
struct UUWindowWindow_execSetAcceptsHotKeys_Parms
{
	BITFIELD bNewAccpetsHotKeys : 1;                                          //CPF_Parm
};
struct UUWindowWindow_execIsActive_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execGetLookAndFeelTexture_Parms
{
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execSetMouseWindow_Parms
{
};
struct UUWindowWindow_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowWindow_execMouseIsOver_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowWindow_execParseAmpersand_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString Result;                                                     //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString Underline;                                                  //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD bCalcUnderline : 1;                                              //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString temp;                                                       //CPF_NeedCtorLink
	INT pos;                                                                  //0
	INT NewPos;                                                               //0
	INT i;                                                                    //0
	BYTE HotKey;                                                              //0
};
struct UUWindowWindow_execRemoveAmpersand_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString Result;                                                     //CPF_NeedCtorLink
	class FString Underline;                                                  //CPF_NeedCtorLink
};
struct UUWindowWindow_execDrawMiscBevel_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UTexture* t;                                                        //CPF_Parm
	INT BevelType;                                                            //CPF_Parm
	struct FRegion R;                                                         //0
};
struct UUWindowWindow_execDrawUpBevel_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //0
};
struct UUWindowWindow_execDrawStretchedTextureSegment_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT tX;                                                                 //CPF_Parm
	FLOAT tY;                                                                 //CPF_Parm
	FLOAT tW;                                                                 //CPF_Parm
	FLOAT tH;                                                                 //CPF_Parm
	class UTexture* Tex;                                                      //CPF_Parm
};
struct UUWindowWindow_execClipTextWidth_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FLOAT W;                                                                  //CPF_Parm
	FLOAT OrgX;                                                               //0
	FLOAT OrgY;                                                               //0
	FLOAT ClipX;                                                              //0
	FLOAT ClipY;                                                              //0
	FLOAT finalWidth;                                                         //0
};

// *****************************************************************************
// UUWindowWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowWindow : public UUWindowBase
{
public:
	INT m_BorderStyle;                                                        //0
	BITFIELD bWindowVisible : 1;                                              //0
	BITFIELD bNoClip : 1;                                                     //0
	BITFIELD bMouseDown : 1;                                                  //0
	BITFIELD bRMouseDown : 1;                                                 //0
	BITFIELD bMMouseDown : 1;                                                 //0
	BITFIELD bAlwaysBehind : 1;                                               //0
	BITFIELD bAcceptsFocus : 1;                                               //0
	BITFIELD bAlwaysAcceptsFocus : 1;                                         //0
	BITFIELD bAlwaysOnTop : 1;                                                //0
	BITFIELD bLeaveOnscreen : 1;                                              //0
	BITFIELD bUWindowActive : 1;                                              //0
	BITFIELD bTransient : 1;                                                  //0
	BITFIELD bAcceptsHotKeys : 1;                                             //0
	BITFIELD bIgnoreLDoubleClick : 1;                                         //0
	BITFIELD bIgnoreMDoubleClick : 1;                                         //0
	BITFIELD bIgnoreRDoubleClick : 1;                                         //0
	BITFIELD m_bNotDisplayBkg : 1;                                            //0
	BITFIELD m_bPreCalculatePos : 1;                                          //0
	FLOAT WinLeft;                                                            //0
	FLOAT WinTop;                                                             //0
	FLOAT WinWidth;                                                           //0
	FLOAT WinHeight;                                                          //0
	FLOAT OrgXOffset;                                                         //0
	FLOAT OrgYOffset;                                                         //0
	FLOAT ClickTime;                                                          //0
	FLOAT MClickTime;                                                         //0
	FLOAT RClickTime;                                                         //0
	FLOAT ClickX;                                                             //0
	FLOAT ClickY;                                                             //0
	FLOAT MClickX;                                                            //0
	FLOAT MClickY;                                                            //0
	FLOAT RClickX;                                                            //0
	FLOAT RClickY;                                                            //0
	class UUWindowWindow* ParentWindow;                                       //0
	class UUWindowWindow* FirstChildWindow;                                   //0
	class UUWindowWindow* LastChildWindow;                                    //0
	class UUWindowWindow* NextSiblingWindow;                                  //0
	class UUWindowWindow* PrevSiblingWindow;                                  //0
	class UUWindowWindow* ActiveWindow;                                       //0
	class UUWindowRootWindow* Root;                                           //0
	class UUWindowWindow* OwnerWindow;                                        //0
	class UUWindowWindow* ModalWindow;                                        //0
	class UUWindowLookAndFeel* LookAndFeel;                                   //0
	class UTexture* m_BorderTexture;                                          //0
	struct FRegion ClippingRegion;                                            //0
	struct FRegion m_BorderTextureRegion;                                     //0
	class FColor m_BorderColor;                                               //0
	struct FMouseCursor Cursor;                                               //0
	class FString ToolTipString;                                              //CPF_NeedCtorLink
};
struct UUWindowDialogControl_execMouseLeave_Parms
{
};
struct UUWindowDialogControl_execMouseEnter_Parms
{
};
struct UUWindowDialogControl_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowDialogControl_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class APlayerController* P;                                               //0
	class UUWindowDialogControl* N;                                           //0
};
struct UUWindowDialogControl_execCheckExternalDrag_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowDialogControl* ReturnValue;                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT RootX;                                                              //0
	FLOAT RootY;                                                              //0
	FLOAT ExtX;                                                               //0
	FLOAT ExtY;                                                               //0
	class UUWindowWindow* W;                                                  //0
	class UUWindowDialogControl* C;                                           //0
};
struct UUWindowDialogControl_execExternalDragOver_Parms
{
	class UUWindowDialogControl* ExternalControl;                             //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowDialogControl_execNotify_Parms
{
	BYTE E;                                                                   //CPF_Parm
};
struct UUWindowDialogControl_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UUWindowDialogControl_execSetTextColor_Parms
{
	class FColor NewColor;                                                    //CPF_Parm
};
struct UUWindowDialogControl_execSetFont_Parms
{
	INT NewFont;                                                              //CPF_Parm
};
struct UUWindowDialogControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowDialogControl_execSetText_Parms
{
	class FString NewText;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowDialogControl_execSetHelpText_Parms
{
	class FString NewHelpText;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowDialogControl_execKeyFocusExit_Parms
{
};
struct UUWindowDialogControl_execKeyFocusEnter_Parms
{
};
struct UUWindowDialogControl_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowDialogControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowDialogControl : public UUWindowWindow
{
public:
	BYTE Align;                                                               //0
	INT Font;                                                                 //0
	BITFIELD bHasKeyboardFocus : 1;                                           //0
	BITFIELD bNoKeyboard : 1;                                                 //0
	BITFIELD bAcceptExternalDragDrop : 1;                                     //0
	FLOAT TextX;                                                              //0
	FLOAT TextY;                                                              //0
	FLOAT MinWidth;                                                           //0
	FLOAT MinHeight;                                                          //0
	class UUWindowDialogClientWindow* NotifyWindow;                           //0
	class UUWindowDialogControl* TabNext;                                     //0
	class UUWindowDialogControl* TabPrev;                                     //0
	class FColor TextColor;                                                   //0
	class FString Text;                                                       //CPF_NeedCtorLink
	class FString HelpText;                                                   //CPF_NeedCtorLink
};
struct UUWindowList_execShowThisItem_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowList_execCopyExistingListItem_Parms
{
	class UClass* ItemClass;                                                  //CPF_Parm
	class UUWindowList* SourceItem;                                           //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* i;                                                    //0
};
struct UUWindowList_execCountShown_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT C;                                                                    //0
	class UUWindowList* i;                                                    //0
};
struct UUWindowList_execDestroyListItem_Parms
{
};
struct UUWindowList_execDestroyList_Parms
{
	class UUWindowList* L;                                                    //0
	class UUWindowList* temp;                                                 //0
};
struct UUWindowList_execDisconnectList_Parms
{
};
struct UUWindowList_execSort_Parms
{
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* S;                                                    //0
	class UUWindowList* CurrentItem;                                          //0
	class UUWindowList* Previous;                                             //0
	class UUWindowList* Best;                                                 //0
	class UUWindowList* BestPrev;                                             //0
};
struct UUWindowList_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UUWindowList_execContinueSort_Parms
{
	class UUWindowList* N;                                                    //0
};
struct UUWindowList_execInsertItemAfter_Parms
{
	class UUWindowList* NewElement;                                           //CPF_Parm
	BITFIELD bCheckShowItem : 1;                                              //CPF_Parm
	class UUWindowList* N;                                                    //0
};
struct UUWindowList_execInsertItemBefore_Parms
{
	class UUWindowList* NewElement;                                           //CPF_Parm
};
struct UUWindowList_execInsertAfter_Parms
{
	class UClass* C;                                                          //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* NewElement;                                           //0
};
struct UUWindowList_execInsertBefore_Parms
{
	class UClass* C;                                                          //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* NewElement;                                           //0
};
struct UUWindowList_execCompare_Parms
{
	class UUWindowList* t;                                                    //CPF_Parm
	class UUWindowList* B;                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowList_execRemove_Parms
{
	class UUWindowList* t;                                                    //0
};
struct UUWindowList_execLeftMost_Parms
{
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* L;                                                    //0
};
struct UUWindowList_execRightMost_Parms
{
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* L;                                                    //0
};
struct UUWindowList_execGraftRight_Parms
{
	class UUWindowList* NewRight;                                             //CPF_Parm
};
struct UUWindowList_execGraftLeft_Parms
{
	class UUWindowList* NewLeft;                                              //CPF_Parm
};
struct UUWindowList_execCreateItem_Parms
{
	class UClass* C;                                                          //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* NewElement;                                           //0
};
struct UUWindowList_execClearItem_Parms
{
};
struct UUWindowList_execClear_Parms
{
};
struct UUWindowList_execAppendListCopy_Parms
{
	class UUWindowList* L;                                                    //CPF_Parm
};
struct UUWindowList_execFindEntry_Parms
{
	INT Index;                                                                //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* L;                                                    //0
	INT i;                                                                    //0
};
struct UUWindowList_execInsertItem_Parms
{
	class UUWindowList* NewElement;                                           //CPF_Parm
};
struct UUWindowList_execInsert_Parms
{
	class UClass* C;                                                          //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* NewElement;                                           //0
};
struct UUWindowList_execDoAppendItem_Parms
{
	class UUWindowList* NewElement;                                           //CPF_Parm
};
struct UUWindowList_execAppendItem_Parms
{
	class UUWindowList* NewElement;                                           //CPF_Parm
	class UUWindowList* Node;                                                 //0
	class UUWindowList* OldNode;                                              //0
	class UUWindowList* temp;                                                 //0
	INT test;                                                                 //0
};
struct UUWindowList_execAppend_Parms
{
	class UClass* C;                                                          //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* NewElement;                                           //0
};
struct UUWindowList_execValidate_Parms
{
	class UUWindowList* i;                                                    //0
	class UUWindowList* Previous;                                             //0
	INT Count;                                                                //0
};
struct UUWindowList_execSetupSentinel_Parms
{
	BITFIELD bInTreeSort : 1;                                                 //CPF_Parm
};
struct UUWindowList_execMoveItemSorted_Parms
{
	class UUWindowList* Item;                                                 //CPF_Parm
	class UUWindowList* L;                                                    //0
};
struct UUWindowList_execCount_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UUWindowList (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowList : public UUWindowBase
{
public:
	INT InternalCount;                                                        //0
	INT CompareCount;                                                         //0
	BITFIELD bItemOrderChanged : 1;                                           //0
	BITFIELD bSuspendableSort : 1;                                            //0
	BITFIELD bSortSuspended : 1;                                              //0
	BITFIELD bTreeSort : 1;                                                   //0
	BITFIELD m_bShowThisItem : 1;                                             //0
	class UUWindowList* Next;                                                 //0
	class UUWindowList* Last;                                                 //0
	class UUWindowList* Prev;                                                 //0
	class UUWindowList* Sentinel;                                             //0
	class UUWindowList* CurrentSortItem;                                      //0
	class UUWindowList* BranchLeft;                                           //0
	class UUWindowList* BranchRight;                                          //0
	class UUWindowList* ParentNode;                                           //0
};
struct UUWindowClientWindow_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
};

// *****************************************************************************
// UUWindowClientWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowClientWindow : public UUWindowWindow
{
};
struct UUWindowListControl_execClearListOfItems_Parms
{
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
	INT iListLength;                                                          //0
};
struct UUWindowListControl_execGetNextItem_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	class UUWindowList* prevItem;                                             //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
};
struct UUWindowListControl_execGetItemAtIndex_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
};
struct UUWindowListControl_execCreated_Parms
{
};
struct UUWindowListControl_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowListControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowListControl : public UUWindowDialogControl
{
public:
	class UUWindowList* Items;                                                //0
	class UClass* ListClass;                                                  //0
};
struct UUWindowFramedWindow_execCreated_Parms
{
};
struct UUWindowFramedWindow_execWindowHidden_Parms
{
};
struct UUWindowFramedWindow_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UUWindowFramedWindow_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowFramedWindow_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT OldW;                                                               //0
	FLOAT OldH;                                                               //0
	BYTE H;                                                                   //0
};
struct UUWindowFramedWindow_execResized_Parms
{
	struct FRegion R;                                                         //0
};
struct UUWindowFramedWindow_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BYTE H;                                                                   //0
};
struct UUWindowFramedWindow_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowFramedWindow_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowFramedWindow_execIsActive_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowFramedWindow_execGetLookAndFeelTexture_Parms
{
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UUWindowFramedWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowFramedWindow : public UUWindowWindow
{
public:
	BITFIELD bTLSizing : 1;                                                   //0
	BITFIELD bTSizing : 1;                                                    //0
	BITFIELD bTRSizing : 1;                                                   //0
	BITFIELD bLSizing : 1;                                                    //0
	BITFIELD bRSizing : 1;                                                    //0
	BITFIELD bBLSizing : 1;                                                   //0
	BITFIELD bBSizing : 1;                                                    //0
	BITFIELD bBRSizing : 1;                                                   //0
	BITFIELD bMoving : 1;                                                     //0
	BITFIELD bSizable : 1;                                                    //0
	BITFIELD bStatusBar : 1;                                                  //0
	FLOAT MoveX;                                                              //0
	FLOAT MoveY;                                                              //0
	FLOAT MinWinWidth;                                                        //0
	FLOAT MinWinHeight;                                                       //0
	class UUWindowWindow* ClientArea;                                         //0
	class UUWindowFrameCloseBox* CloseBox;                                    //0
	class UClass* ClientClass;                                                //0
	class FString WindowTitle;                                                //CPF_Localized|CPF_NeedCtorLink
	class FString StatusBarText;                                              //CPF_NeedCtorLink
};
struct UUWindowButton_execMClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowButton_execRClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowButton_execDoubleClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowButton_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowButton_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowButton_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowButton : public UUWindowDialogControl
{
public:
	INT m_iButtonID;                                                          //0
	BITFIELD bDisabled : 1;                                                   //0
	BITFIELD bStretched : 1;                                                  //0
	BITFIELD bUseRegion : 1;                                                  //0
	BITFIELD m_bSelected : 1;                                                 //0
	BITFIELD m_bDrawButtonBorders : 1;                                        //0
	BITFIELD m_bUseRotAngle : 1;                                              //0
	BITFIELD m_bPlayButtonSnd : 1;                                            //0
	BITFIELD m_bWaitSoundFinish : 1;                                          //0
	BITFIELD m_bSoundStart : 1;                                               //0
	FLOAT RegionScale;                                                        //0
	FLOAT ImageX;                                                             //0
	FLOAT ImageY;                                                             //0
	FLOAT m_fRotAngle;                                                        //0
	FLOAT m_fRotAngleWidth;                                                   //0
	FLOAT m_fRotAngleHeight;                                                  //0
	class UTexture* UpTexture;                                                //0
	class UTexture* DownTexture;                                              //0
	class UTexture* DisabledTexture;                                          //0
	class UTexture* OverTexture;                                              //0
	class USound* OverSound;                                                  //0
	class USound* DownSound;                                                  //0
	struct FRegion UpRegion;                                                  //0
	struct FRegion DownRegion;                                                //0
	struct FRegion DisabledRegion;                                            //0
	struct FRegion OverRegion;                                                //0
	class FColor m_SelectedTextColor;                                         //0
	class FColor m_DisabledTextColor;                                         //0
	class FColor m_OverTextColor;                                             //0
};
struct UUWindowDialogClientWindow_execGetDesiredDimensions_Parms
{
	FLOAT W;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT H;                                                                  //CPF_Parm|CPF_OutParm
};
struct UUWindowDialogClientWindow_execCreateControl_Parms
{
	class UClass* ControlClass;                                               //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UUWindowWindow* OwnerWindow;                                        //CPF_Parm
	BITFIELD _bNotTabRegister : 1;                                            //CPF_Parm
	class UUWindowDialogControl* ReturnValue;                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowDialogControl* C;                                           //0
};
struct UUWindowDialogClientWindow_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UUWindowDialogClientWindow_execOKPressed_Parms
{
};

// *****************************************************************************
// UUWindowDialogClientWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowDialogClientWindow : public UUWindowClientWindow
{
public:
	FLOAT DesiredWidth;                                                       //0
	FLOAT DesiredHeight;                                                      //0
	class UUWindowDialogControl* TabLast;                                     //0
};
struct UUWindowTabControl_execDeleteTab_Parms
{
	class UUWindowTabControlItem* Tab;                                        //CPF_Parm
	class UUWindowTabControlItem* NextTab;                                    //0
	class UUWindowTabControlItem* PrevTab;                                    //0
};
struct UUWindowTabControl_execGetTab_Parms
{
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UUWindowTabControlItem* ReturnValue;                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowTabControlItem* i;                                          //0
};
struct UUWindowTabControl_execGotoTab_Parms
{
	class UUWindowTabControlItem* NewSelected;                                //CPF_Parm
	BITFIELD bByUser : 1;                                                     //CPF_Parm
};
struct UUWindowTabControl_execInsertTab_Parms
{
	class UUWindowTabControlItem* BeforeTab;                                  //CPF_Parm
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	INT _iItemID;                                                             //CPF_Parm
	class UUWindowTabControlItem* ReturnValue;                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowTabControlItem* i;                                          //0
};
struct UUWindowTabControl_execAddTab_Parms
{
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	INT _iItemID;                                                             //CPF_Parm
	class UUWindowTabControlItem* ReturnValue;                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowTabControlItem* i;                                          //0
};
struct UUWindowTabControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	struct FRegion R;                                                         //0
	class UTexture* t;                                                        //0
};
struct UUWindowTabControl_execSetMultiLine_Parms
{
	BITFIELD InMultiLine : 1;                                                 //CPF_Parm
};
struct UUWindowTabControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowTabControl_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowTabControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowTabControl : public UUWindowListControl
{
public:
	BITFIELD bMultiLine : 1;                                                  //0
	BITFIELD bSelectNearestTabOnRemove : 1;                                   //0
	BITFIELD m_bTabButton : 1;                                                //0
	class UUWindowTabControlLeftButton* LeftButton;                           //0
	class UUWindowTabControlRightButton* RightButton;                         //0
	class UUWindowTabControlTabArea* TabArea;                                 //0
	class UUWindowTabControlItem* SelectedTab;                                //0
};
struct UUWindowDynamicTextArea_execRemoveWrap_Parms
{
	class UUWindowDynamicTextRow* L;                                          //CPF_Parm
	class UUWindowDynamicTextRow* N;                                          //0
};
struct UUWindowDynamicTextArea_execRemoveNextWord_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString NextWord;                                                   //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UUWindowDynamicTextArea_execSplitRowAt_Parms
{
	class UUWindowDynamicTextRow* L;                                          //CPF_Parm
	INT SplitPos;                                                             //CPF_Parm
	class UUWindowDynamicTextRow* ReturnValue;                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowDynamicTextRow* N;                                          //0
};
struct UUWindowDynamicTextArea_execGetWrapPos_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowDynamicTextRow* L;                                          //CPF_Parm
	FLOAT MaxWidth;                                                           //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT LineWidth;                                                          //0
	FLOAT NextWordWidth;                                                      //0
	class FString Input;                                                      //CPF_NeedCtorLink
	class FString NextWord;                                                   //CPF_NeedCtorLink
	INT WordsThisRow;                                                         //0
	INT WrapPos;                                                              //0
};
struct UUWindowDynamicTextArea_execDrawTextLine_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowDynamicTextRow* L;                                          //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT X;                                                                  //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UUWindowDynamicTextArea_execWrapRow_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowDynamicTextRow* L;                                          //CPF_Parm
	class UUWindowDynamicTextRow* CurrentRow;                                 //0
	class UUWindowDynamicTextRow* N;                                          //0
	FLOAT MaxWidth;                                                           //0
	INT WrapPos;                                                              //0
};
struct UUWindowDynamicTextArea_execWordWrap_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	BITFIELD bForce : 1;                                                      //CPF_Parm
	class UUWindowDynamicTextRow* L;                                          //0
};
struct UUWindowDynamicTextArea_execCheckMaxRows_Parms
{
	class UUWindowDynamicTextRow* ReturnValue;                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowDynamicTextRow* L;                                          //0
};
struct UUWindowDynamicTextArea_execAddText_Parms
{
	class FString NewLine;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UUWindowDynamicTextRow* ReturnValue;                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowDynamicTextRow* L;                                          //0
	class FString temp;                                                       //CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UUWindowDynamicTextArea_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
	class UUWindowDynamicTextRow* L;                                          //0
	INT SkipCount;                                                            //0
	INT DrawCount;                                                            //0
	INT i;                                                                    //0
	FLOAT Y;                                                                  //0
	FLOAT Junk;                                                               //0
	BITFIELD bWrapped : 1;                                                    //0
};
struct UUWindowDynamicTextArea_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowDynamicTextArea_execTextAreaTextSize_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	FLOAT W;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT H;                                                                  //CPF_Parm|CPF_OutParm
};
struct UUWindowDynamicTextArea_execTextAreaClipText_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT DrawX;                                                              //CPF_Parm
	FLOAT DrawY;                                                              //CPF_Parm
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	BITFIELD bCheckHotKey : 1;                                                //CPF_Parm
};
struct UUWindowDynamicTextArea_execSetTextColor_Parms
{
	class FColor C;                                                           //CPF_Parm
};
struct UUWindowDynamicTextArea_execSetFont_Parms
{
	INT f;                                                                    //CPF_Parm
};
struct UUWindowDynamicTextArea_execSetAbsoluteFont_Parms
{
	class UFont* f;                                                           //CPF_Parm
};
struct UUWindowDynamicTextArea_execClear_Parms
{
};
struct UUWindowDynamicTextArea_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowDynamicTextArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowDynamicTextArea : public UUWindowDialogControl
{
public:
	INT MaxLines;                                                             //CPF_Config
	INT Count;                                                                //0
	INT VisibleRows;                                                          //0
	INT Font;                                                                 //0
	BITFIELD bTopCentric : 1;                                                 //0
	BITFIELD bScrollOnResize : 1;                                             //0
	BITFIELD bVCenter : 1;                                                    //0
	BITFIELD bHCenter : 1;                                                    //0
	BITFIELD bAutoScrollbar : 1;                                              //0
	BITFIELD bVariableRowHeight : 1;                                          //0
	BITFIELD bDirty : 1;                                                      //0
	FLOAT DefaultTextHeight;                                                  //0
	FLOAT WrapWidth;                                                          //0
	FLOAT OldW;                                                               //0
	FLOAT OldH;                                                               //0
	class UUWindowDynamicTextRow* List;                                       //0
	class UUWindowVScrollbar* VertSB;                                         //0
	class UFont* AbsoluteFont;                                                //0
	class UClass* RowClass;                                                   //0
	class FColor TextColor;                                                   //0
};
struct UUWindowTabControlItem_execSetItemColor_Parms
{
	class FColor _vSelected;                                                  //CPF_Parm
	class FColor _vNormal;                                                    //CPF_Parm
};
struct UUWindowTabControlItem_execSetFixTabSize_Parms
{
	FLOAT _fFixTabWidth;                                                      //CPF_Parm
};
struct UUWindowTabControlItem_execRightClickTab_Parms
{
};
struct UUWindowTabControlItem_execSetCaption_Parms
{
	class FString NewCaption;                                                 //CPF_Parm|CPF_NeedCtorLink
};

// *****************************************************************************
// UUWindowTabControlItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowTabControlItem : public UUWindowList
{
public:
	INT RowNumber;                                                            //0
	INT m_iItemID;                                                            //0
	BITFIELD bFlash : 1;                                                      //0
	BITFIELD m_bMouseOverItem : 1;                                            //0
	FLOAT TabTop;                                                             //0
	FLOAT TabLeft;                                                            //0
	FLOAT TabWidth;                                                           //0
	FLOAT TabHeight;                                                          //0
	FLOAT m_fFixWidth;                                                        //0
	class UUWindowTabControl* Owner;                                          //0
	class FColor m_vSelectedColor;                                            //0
	class FColor m_vNormalColor;                                              //0
	class FString Caption;                                                    //CPF_NeedCtorLink
	class FString HelpText;                                                   //CPF_NeedCtorLink
};
struct UUWindowTextAreaControl_execClear_Parms
{
	BITFIELD _bClearArrayOnly : 1;                                            //CPF_Parm
	BITFIELD _bWrapText : 1;                                                  //CPF_Parm
	INT i;                                                                    //0
};
struct UUWindowTextAreaControl_execSetPrompt_Parms
{
	class FString NewPrompt;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowTextAreaControl_execResized_Parms
{
};
struct UUWindowTextAreaControl_execAddTextWithCanvas_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fXOffSet;                                                          //CPF_Parm
	FLOAT _fYOffset;                                                          //CPF_Parm
	class FString NewLine;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UFont* _Font;                                                       //CPF_Parm
	class FColor FontColor;                                                   //CPF_Parm
	class FString szTempTextArea[80];                                         //CPF_NeedCtorLink
	class FString Out;                                                        //CPF_NeedCtorLink
	class FString temp;                                                       //CPF_NeedCtorLink
	class FString szTSResult;                                                 //CPF_NeedCtorLink
	FLOAT XWordPos;                                                           //0
	FLOAT fWidthToReduce;                                                     //0
	FLOAT fTotalWToReduce;                                                    //0
	FLOAT WordWidth;                                                          //0
	FLOAT WordHeight;                                                         //0
	INT WordPos;                                                              //0
	INT TotalPos;                                                             //0
	INT PrevPos;                                                              //0
	INT TotalLinePos;                                                         //0
	INT numLines;                                                             //0
	INT PrevNumLines;                                                         //0
	INT i;                                                                    //0
	INT iRealSizeOfWord;                                                      //0
	INT iNbLineTemp;                                                          //0
	INT iNbLineTempTotal;                                                     //0
	BITFIELD bSentry : 1;                                                     //0
};
struct UUWindowTextAreaControl_execAddText_Parms
{
	class FString _szNewLine;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FColor _TextColor;                                                  //CPF_Parm
	class UFont* _Font;                                                       //CPF_Parm
};
struct UUWindowTextAreaControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT Line;                                                                 //0
	INT TempHead;                                                             //0
	INT TempTail;                                                             //0
	FLOAT XL;                                                                 //0
	FLOAT YL;                                                                 //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UUWindowTextAreaControl_execSetAbsoluteFont_Parms
{
	class UFont* f;                                                           //CPF_Parm
};
struct UUWindowTextAreaControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowTextAreaControl_execSetScrollable_Parms
{
	BITFIELD newScrollable : 1;                                               //CPF_Parm
};
struct UUWindowTextAreaControl_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowTextAreaControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowTextAreaControl : public UUWindowDialogControl
{
public:
	INT Font;                                                                 //0
	INT BufSize;                                                              //0
	INT Head;                                                                 //0
	INT Tail;                                                                 //0
	INT Lines;                                                                //0
	INT VisibleRows;                                                          //0
	BITFIELD bCursor : 1;                                                     //0
	BITFIELD bScrollable : 1;                                                 //0
	BITFIELD bShowCaret : 1;                                                  //0
	BITFIELD bScrollOnResize : 1;                                             //0
	BITFIELD m_bWrapClipText : 1;                                             //0
	FLOAT m_fXOffSet;                                                         //0
	FLOAT m_fYOffSet;                                                         //0
	FLOAT LastDrawTime;                                                       //0
	class UFont* TextFontArea[80];                                            //0
	class UFont* AbsoluteFont;                                                //0
	class UUWindowVScrollbar* VertSB;                                         //0
	class FColor TextColorArea[80];                                           //0
	class FString TextArea[80];                                               //CPF_NeedCtorLink
	class FString Prompt;                                                     //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// UWindow ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT UWindow
{
};

// -----------------------------------------------------------------------------
// UWindowCanPlay ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT UWindowCanPlay
{
};
struct UWindowConsole_execMenuLoadProfile_Parms
{
	BITFIELD _bServerProfile : 1;                                             //CPF_Parm
};
struct UWindowConsole_execNotifyAfterLevelChange_Parms
{
};
struct UWindowConsole_execNotifyLevelChange_Parms
{
};
struct UWindowConsole_execHistoryDown_Parms
{
};
struct UWindowConsole_execHistoryUp_Parms
{
};
struct UWindowConsole_execUpdateHistory_Parms
{
};
struct UWindowConsole_eventMessage_Parms
{
	class FString Msg;                                                        //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FLOAT MsgLife;                                                            //CPF_Parm
};
struct UWindowConsole_execRenderUWindow_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	class UUWindowWindow* NewFocusWindow;                                     //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UWindowConsole_execCreateRootWindow_Parms
{
	class UCanvas* Canvas;                                                    //CPF_Parm
	INT i;                                                                    //0
};
struct UWindowConsole_execCloseUWindow_Parms
{
};
struct UWindowConsole_execLaunchUWindow_Parms
{
};
struct UWindowConsole_execToggleUWindow_Parms
{
};
struct UWindowConsole_execKeyEvent_Parms
{
	BYTE Key;                                                                 //CPF_Parm
	BYTE Action;                                                              //CPF_Parm
	FLOAT Delta;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE k;                                                                   //0
};
struct UWindowConsole_execResetUWindow_Parms
{
};
struct UWindowConsole_execHideConsole_Parms
{
};
struct UWindowConsole_execShowConsole_Parms
{
};
struct UWindowConsole_execGetRestKitDescName_Parms
{
	class AGameReplicationInfo* _GRI;                                         //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //CPF_Parm
};

// *****************************************************************************
// UWindowConsole (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UWindowConsole : public UConsole
{
public:
	INT Scrollback;                                                           //0
	INT numLines;                                                             //0
	INT TopLine;                                                              //0
	INT TextLines;                                                            //0
	INT ConsoleLines;                                                         //0
	BITFIELD bNoStuff : 1;                                                    //0
	BITFIELD bTyping : 1;                                                     //0
	BITFIELD bShowLog : 1;                                                    //0
	BITFIELD bCreatedRoot : 1;                                                //0
	BITFIELD bShowConsole : 1;                                                //CPF_Config
	BITFIELD bBlackout : 1;                                                   //0
	BITFIELD bUWindowType : 1;                                                //0
	BITFIELD bUWindowActive : 1;                                              //0
	BITFIELD bLocked : 1;                                                     //0
	BITFIELD bLevelChange : 1;                                                //0
	FLOAT MsgTime;                                                            //0
	FLOAT MsgTickTime;                                                        //0
	FLOAT MsgTick[64];                                                        //0
	FLOAT OldClipX;                                                           //0
	FLOAT OldClipY;                                                           //0
	FLOAT MouseX;                                                             //0
	FLOAT MouseY;                                                             //0
	FLOAT MouseScale;                                                         //CPF_Config
	class UViewport* Viewport;                                                //0
	class UUWindowRootWindow* Root;                                           //0
	FName ConsoleState;                                                       //0
	class UClass* ConsoleClass;                                               //0
	class FString MsgText[64];                                                //CPF_NeedCtorLink
	class FString RootWindow;                                                 //CPF_Edit|CPF_Config|CPF_NeedCtorLink
	class FString OldLevel;                                                   //CPF_NeedCtorLink
	class FString szStoreIP;                                                  //CPF_NeedCtorLink
};

enum eGameWidgetID{
	 WidgetID_None=0
	,InGameID_EscMenu=1
	,InGameID_Debriefing=2
	,InGameID_TrainingInstruction=3
	,TrainingWidgetID=4
	,SinglePlayerWidgetID=5
	,CampaignPlanningID=6
	,MainMenuWidgetID=7
	,IntelWidgetID=8
	,PlanningWidgetID=9
	,RetryCampaignPlanningID=10
	,RetryCustomMissionPlanningID=11
	,GearRoomWidgetID=12
	,ExecuteWidgetID=13
	,CustomMissionWidgetID=14
	,MultiPlayerWidgetID=15
	,OptionsWidgetID=16
	,PreviousWidgetID=17
	,CreditsWidgetID=18
	,MPCreateGameWidgetID=19
	,UbiComWidgetID=20
	,UbiComModWidgetID=21
	,NonUbiWidgetID=22
	,InGameMPWID_Writable=23
	,InGameMPWID_TeamJoin=24
	,InGameMPWID_Intermission=25
	,InGameMPWID_InterEndRound=26
	,InGameMPWID_EscMenu=27
	,InGameMpWID_RecMessages=28
	,InGameMpWID_MsgOffensive=29
	,InGameMpWID_MsgDefensive=30
	,InGameMpWID_MsgReply=31
	,InGameMpWID_MsgStatus=32
	,InGameMPWID_Vote=33
	,InGameMPWID_CountDown=34
	,InGameID_OperativeSelector=35
	,MultiPlayerError=36
	,MultiPlayerErrorUbiCom=37
	,MenuQuitID=38
};
enum eRootID{
	 RootID_UWindow=0
	,RootID_R6Menu=1
	,RootID_R6MenuInGame=2
	,RootID_R6MenuInGameMulti=3
};
struct UUWindowRootWindow_execProcessGSMsg_Parms
{
	class FString _szMsg;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowRootWindow_execUnRegisterMsgWindow_Parms
{
};
struct UUWindowRootWindow_execRegisterMsgWindow_Parms
{
	class UUWindowWindow* _NotifyMsgWindow;                                   //CPF_Parm
};
struct UUWindowRootWindow_execTrapKey_Parms
{
	BITFIELD _bIncludeMouseMove : 1;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowRootWindow_execDrawBackGroundEffect_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FColor _BGColor;                                                    //CPF_Parm
	FLOAT OrgX;                                                               //0
	FLOAT OrgY;                                                               //0
	FLOAT ClipX;                                                              //0
	FLOAT ClipY;                                                              //0
};
struct UUWindowRootWindow_execPaintBackground_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowWindow* _WidgetWindow;                                      //CPF_Parm
};
struct UUWindowRootWindow_execSetLoadRandomBackgroundImage_Parms
{
	class FString _szFolder;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowRootWindow_execSetNewMODS_Parms
{
	class FString _szNewBkgFolder;                                            //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bForceRefresh : 1;                                              //CPF_Parm
};
struct UUWindowRootWindow_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UUWindowRootWindow_execDoQuitGame_Parms
{
};
struct UUWindowRootWindow_execQuitGame_Parms
{
};
struct UUWindowRootWindow_execSetMousePos_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowRootWindow_execHideWindow_Parms
{
};
struct UUWindowRootWindow_execChangeLookAndFeel_Parms
{
	class FString NewLookAndFeel;                                             //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowRootWindow_execSetupFonts_Parms
{
};
struct UUWindowRootWindow_execSetResolution_Parms
{
	FLOAT _NewWidth;                                                          //CPF_Parm
	FLOAT _NewHeight;                                                         //CPF_Parm
};
struct UUWindowRootWindow_execSetScale_Parms
{
	FLOAT NewScale;                                                           //CPF_Parm
};
struct UUWindowRootWindow_execResized_Parms
{
};
struct UUWindowRootWindow_execCloseActiveWindow_Parms
{
};
struct UUWindowRootWindow_execMouseUpDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowHotkeyWindowList* L;                                        //0
};
struct UUWindowRootWindow_execHotKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowHotkeyWindowList* L;                                        //0
};
struct UUWindowRootWindow_execHotKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowHotkeyWindowList* L;                                        //0
};
struct UUWindowRootWindow_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UUWindowRootWindow_execIsAHotKeyWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowHotkeyWindowList* L;                                        //0
};
struct UUWindowRootWindow_execRemoveHotkeyWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UUWindowHotkeyWindowList* L;                                        //0
};
struct UUWindowRootWindow_execAddHotkeyWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowRootWindow_execIsActive_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowRootWindow_execGetLookAndFeelTexture_Parms
{
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowRootWindow_execCaptureMouse_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowRootWindow_execCancelCapture_Parms
{
};
struct UUWindowRootWindow_execCheckCaptureMouseDown_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
};
struct UUWindowRootWindow_execCheckCaptureMouseUp_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
};
struct UUWindowRootWindow_execDrawMouse_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
};
struct UUWindowRootWindow_execMoveMouse_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowWindow* NewMouseWindow;                                     //0
	FLOAT tX;                                                                 //0
	FLOAT tY;                                                                 //0
};
struct UUWindowRootWindow_execCreated_Parms
{
};
struct UUWindowRootWindow_execGetLookAndFeel_Parms
{
	class FString LFClassName;                                                //CPF_Parm|CPF_NeedCtorLink
	class UUWindowLookAndFeel* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	class UClass* LFClass;                                                    //0
};
struct UUWindowRootWindow_execBeginPlay_Parms
{
};
struct UUWindowRootWindow_execGetMapNameLocalisation_Parms
{
	class FString _szMapName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _szMapNameLoc;                                              //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD _bReturnInitName : 1;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowRootWindow_execModifyPopUpInsideText_Parms
{
	TArray<class FString> _ANewText;                                          //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowRootWindow_execSimplePopUp_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	BYTE _ePopUpID;                                                           //CPF_Parm
	INT _iButtonsType;                                                        //CPF_Parm
	BITFIELD bAddDisableDlg : 1;                                              //CPF_Parm
	class UUWindowWindow* OwnerWindow;                                        //CPF_Parm
};
struct UUWindowRootWindow_execGetSimplePopUpID_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowRootWindow_execPlanningShouldDrawPath_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowRootWindow_execPlanningShouldProcessKey_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowRootWindow_execStopPlayMode_Parms
{
};
struct UUWindowRootWindow_execChangeInstructionWidget_Parms
{
	class AActor* pISV;                                                       //CPF_Parm
	BITFIELD bShow : 1;                                                       //CPF_Parm
	INT iBox;                                                                 //CPF_Parm
	INT iParagraph;                                                           //CPF_Parm
};
struct UUWindowRootWindow_execUpdateMenus_Parms
{
	INT iWhatToUpdate;                                                        //CPF_Parm
};
struct UUWindowRootWindow_execResetMenus_Parms
{
	BITFIELD _bConnectionFailed : 1;                                          //CPF_Parm
};
struct UUWindowRootWindow_execChangeCurrentWidget_Parms
{
	BYTE widgetID;                                                            //CPF_Parm
};

// *****************************************************************************
// UUWindowRootWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowRootWindow : public UUWindowWindow
{
public:
	BYTE m_eRootId;                                                           //0
	BYTE m_eCurWidgetInUse;                                                   //0
	BYTE m_ePrevWidgetInUse;                                                  //0
	BITFIELD bMouseCapture : 1;                                               //0
	BITFIELD bRequestQuit : 1;                                                //0
	BITFIELD bAllowConsole : 1;                                               //0
	BITFIELD m_bUseAimIcon : 1;                                               //0
	BITFIELD m_bUseDragIcon : 1;                                              //0
	BITFIELD m_bScaleWindowToRoot : 1;                                        //0
	BITFIELD m_bWidgetResolutionFix : 1;                                      //0
	FLOAT MouseX;                                                             //0
	FLOAT MouseY;                                                             //0
	FLOAT OldMouseX;                                                          //0
	FLOAT OldMouseY;                                                          //0
	FLOAT GUIScale;                                                           //0
	FLOAT RealWidth;                                                          //0
	FLOAT RealHeight;                                                         //0
	FLOAT QuitTime;                                                           //0
	FLOAT m_fWindowScaleX;                                                    //0
	FLOAT m_fWindowScaleY;                                                    //0
	class UUWindowWindow* MouseWindow;                                        //0
	class UWindowConsole* Console;                                            //0
	class UUWindowWindow* FocusedWindow;                                      //0
	class UUWindowWindow* KeyFocusWindow;                                     //0
	class UUWindowHotkeyWindowList* HotkeyWindows;                            //0
	class UFont* Fonts[30];                                                   //0
	class UUWindowLookAndFeel* LooksAndFeels[20];                             //0
	class UR6GameColors* Colors;                                              //0
	class UUWindowMenuClassDefines* MenuClassDefines;                         //0
	class UUWindowWindow* m_NotifyMsgWindow;                                  //0
	struct FMouseCursor NormalCursor;                                         //0
	struct FMouseCursor MoveCursor;                                           //0
	struct FMouseCursor DiagCursor1;                                          //0
	struct FMouseCursor HandCursor;                                           //0
	struct FMouseCursor HSplitCursor;                                         //0
	struct FMouseCursor VSplitCursor;                                         //0
	struct FMouseCursor DiagCursor2;                                          //0
	struct FMouseCursor NSCursor;                                             //0
	struct FMouseCursor WECursor;                                             //0
	struct FMouseCursor WaitCursor;                                           //0
	struct FMouseCursor AimCursor;                                            //0
	struct FMouseCursor DragCursor;                                           //0
	class FString LookAndFeelClass;                                           //CPF_Config|CPF_NeedCtorLink
};
struct UUWindowConsoleWindow_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
};
struct UUWindowConsoleWindow_execSetDimensions_Parms
{
};
struct UUWindowConsoleWindow_execResolutionChanged_Parms
{
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
};
struct UUWindowConsoleWindow_execShowWindow_Parms
{
};
struct UUWindowConsoleWindow_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowConsoleWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowConsoleWindow : public UUWindowFramedWindow
{
public:
	FLOAT OldParentWidth;                                                     //0
	FLOAT OldParentHeight;                                                    //0
};
struct UUWindowMessageBox_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
};
struct UUWindowMessageBox_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowMessageBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	struct FRegion R;                                                         //0
};
struct UUWindowMessageBox_execSetupMessageBox_Parms
{
	class FString Title;                                                      //CPF_Parm|CPF_NeedCtorLink
	class FString Message;                                                    //CPF_Parm|CPF_NeedCtorLink
	BYTE Buttons;                                                             //CPF_Parm
	BYTE InESCResult;                                                         //CPF_Parm
	BYTE InEnterResult;                                                       //CPF_Parm
	INT InTimeOut;                                                            //CPF_Parm
};

// *****************************************************************************
// UUWindowMessageBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowMessageBox : public UUWindowFramedWindow
{
public:
	BYTE Result;                                                              //0
	INT TimeOut;                                                              //0
	INT FrameCount;                                                           //0
	BITFIELD bSetupSize : 1;                                                  //0
	FLOAT TimeOutTime;                                                        //0
};
struct UUWindowLookAndFeel_execDrawSimpleBorder_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execControlFrame_Draw_Parms
{
	class UUWindowControlFrame* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execControlFrame_SetupSizes_Parms
{
	class UUWindowControlFrame* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execPlayMenuSound_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	BYTE S;                                                                   //CPF_Parm
};
struct UUWindowLookAndFeel_execButton_DrawSmallButton_Parms
{
	class UUWindowSmallButton* B;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execMenu_DrawPulldownMenuItem_Parms
{
	class UUWindowPulldownMenu* M;                                            //CPF_Parm
	class UUWindowPulldownMenuItem* Item;                                     //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	BITFIELD bSelected : 1;                                                   //CPF_Parm
};
struct UUWindowLookAndFeel_execMenu_DrawPulldownMenuBackground_Parms
{
	class UUWindowPulldownMenu* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execMenu_DrawMenuBarItem_Parms
{
	class UUWindowMenuBar* B;                                                 //CPF_Parm
	class UUWindowMenuBarItem* i;                                             //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execMenu_DrawMenuBar_Parms
{
	class UUWindowMenuBar* W;                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execTab_DrawTabPageArea_Parms
{
	class UUWindowPageControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowPageWindow* P;                                              //CPF_Parm
};
struct UUWindowLookAndFeel_execTab_SetTabPageSize_Parms
{
	class UUWindowPageControl* W;                                             //CPF_Parm
	class UUWindowPageWindow* P;                                              //CPF_Parm
};
struct UUWindowLookAndFeel_execTab_SetupRightButton_Parms
{
	class UUWindowTabControlRightButton* W;                                   //CPF_Parm
};
struct UUWindowLookAndFeel_execTab_SetupLeftButton_Parms
{
	class UUWindowTabControlLeftButton* W;                                    //CPF_Parm
};
struct UUWindowLookAndFeel_execTab_GetTabSize_Parms
{
	class UUWindowTabControlTabArea* Tab;                                     //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	FLOAT W;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT H;                                                                  //CPF_Parm|CPF_OutParm
};
struct UUWindowLookAndFeel_execTab_DrawTab_Parms
{
	class UUWindowTabControlTabArea* Tab;                                     //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	BITFIELD bActiveTab : 1;                                                  //CPF_Parm
	BITFIELD bLeftmostTab : 1;                                                //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bShowText : 1;                                                   //CPF_Parm
};
struct UUWindowLookAndFeel_execSB_HDraw_Parms
{
	class UUWindowHScrollbar* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execSB_VDraw_Parms
{
	class UUWindowVScrollbar* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execSB_SetupRightButton_Parms
{
	class UUWindowSBRightButton* W;                                           //CPF_Parm
};
struct UUWindowLookAndFeel_execSB_SetupLeftButton_Parms
{
	class UUWindowSBLeftButton* W;                                            //CPF_Parm
};
struct UUWindowLookAndFeel_execSB_SetupDownButton_Parms
{
	class UUWindowSBDownButton* W;                                            //CPF_Parm
};
struct UUWindowLookAndFeel_execSB_SetupUpButton_Parms
{
	class UUWindowSBUpButton* W;                                              //CPF_Parm
};
struct UUWindowLookAndFeel_execEditbox_Draw_Parms
{
	class UUWindowEditControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execEditbox_SetupSizes_Parms
{
	class UUWindowEditControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execComboList_DrawItem_Parms
{
	class UUWindowComboList* Combo;                                           //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bSelected : 1;                                                   //CPF_Parm
};
struct UUWindowLookAndFeel_execComboList_DrawBackground_Parms
{
	class UUWindowComboList* W;                                               //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execCombo_SetupRightButton_Parms
{
	class UUWindowComboRightButton* W;                                        //CPF_Parm
};
struct UUWindowLookAndFeel_execCombo_SetupLeftButton_Parms
{
	class UUWindowComboLeftButton* W;                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execCombo_SetupButton_Parms
{
	class UUWindowComboButton* W;                                             //CPF_Parm
};
struct UUWindowLookAndFeel_execCombo_Draw_Parms
{
	class UUWindowComboControl* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execCombo_SetupSizes_Parms
{
	class UUWindowComboControl* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execDrawClientArea_Parms
{
	class UUWindowClientWindow* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execFW_SetupFrameButtons_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execFW_HitTest_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowLookAndFeel_execFW_GetClientArea_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowLookAndFeel_execFW_DrawWindowFrame_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowLookAndFeel_execSetup_Parms
{
};
struct UUWindowLookAndFeel_execGetTexture_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UUWindowLookAndFeel (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowLookAndFeel : public UUWindowBase
{
public:
	INT FrameTitleX;                                                          //CPF_Edit
	INT FrameTitleY;                                                          //CPF_Edit
	INT ColumnHeadingHeight;                                                  //CPF_Edit
	INT EditBoxBevel;                                                         //CPF_Edit
	FLOAT Size_ComboHeight;                                                   //CPF_Edit
	FLOAT Size_ComboButtonWidth;                                              //CPF_Edit
	FLOAT Size_ScrollbarWidth;                                                //CPF_Edit
	FLOAT Size_ScrollbarButtonHeight;                                         //CPF_Edit
	FLOAT Size_MinScrollbarHeight;                                            //CPF_Edit
	FLOAT Size_TabAreaHeight;                                                 //CPF_Edit
	FLOAT Size_TabAreaOverhangHeight;                                         //CPF_Edit
	FLOAT Size_TabSpacing;                                                    //CPF_Edit
	FLOAT Size_TabXOffset;                                                    //CPF_Edit
	FLOAT Size_TabTextOffset;                                                 //CPF_Edit
	FLOAT Pulldown_ItemHeight;                                                //CPF_Edit
	FLOAT Pulldown_VBorder;                                                   //CPF_Edit
	FLOAT Pulldown_HBorder;                                                   //CPF_Edit
	FLOAT Pulldown_TextBorder;                                                //CPF_Edit
	class UTexture* Active;                                                   //CPF_Edit
	class UTexture* Inactive;                                                 //CPF_Edit
	class UTexture* ActiveS;                                                  //CPF_Edit
	class UTexture* InactiveS;                                                //CPF_Edit
	class UTexture* Misc;                                                     //CPF_Edit
	struct FRegion FrameTL;                                                   //CPF_Edit
	struct FRegion FrameT;                                                    //CPF_Edit
	struct FRegion FrameTR;                                                   //CPF_Edit
	struct FRegion FrameL;                                                    //CPF_Edit
	struct FRegion FrameR;                                                    //CPF_Edit
	struct FRegion FrameBL;                                                   //CPF_Edit
	struct FRegion FrameB;                                                    //CPF_Edit
	struct FRegion FrameBR;                                                   //CPF_Edit
	class FColor FrameActiveTitleColor;                                       //CPF_Edit
	class FColor FrameInactiveTitleColor;                                     //CPF_Edit
	class FColor HeadingActiveTitleColor;                                     //CPF_Edit
	class FColor HeadingInActiveTitleColor;                                   //CPF_Edit
	struct FRegion BevelUpTL;                                                 //CPF_Edit
	struct FRegion BevelUpT;                                                  //CPF_Edit
	struct FRegion BevelUpTR;                                                 //CPF_Edit
	struct FRegion BevelUpL;                                                  //CPF_Edit
	struct FRegion BevelUpR;                                                  //CPF_Edit
	struct FRegion BevelUpBL;                                                 //CPF_Edit
	struct FRegion BevelUpB;                                                  //CPF_Edit
	struct FRegion BevelUpBR;                                                 //CPF_Edit
	struct FRegion BevelUpArea;                                               //CPF_Edit
	struct FRegion MiscBevelTL[4];                                            //CPF_Edit
	struct FRegion MiscBevelT[4];                                             //CPF_Edit
	struct FRegion MiscBevelTR[4];                                            //CPF_Edit
	struct FRegion MiscBevelL[4];                                             //CPF_Edit
	struct FRegion MiscBevelR[4];                                             //CPF_Edit
	struct FRegion MiscBevelBL[4];                                            //CPF_Edit
	struct FRegion MiscBevelB[4];                                             //CPF_Edit
	struct FRegion MiscBevelBR[4];                                            //CPF_Edit
	struct FRegion MiscBevelArea[4];                                          //CPF_Edit
	struct FRegion ComboBtnUp;                                                //CPF_Edit
	struct FRegion ComboBtnDown;                                              //CPF_Edit
	struct FRegion ComboBtnDisabled;                                          //CPF_Edit
	struct FRegion ComboBtnOver;                                              //CPF_Edit
	struct FRegion HLine;                                                     //CPF_Edit
	class FColor EditBoxTextColor;                                            //CPF_Edit
	struct FRegion TabSelectedL;                                              //CPF_Edit
	struct FRegion TabSelectedM;                                              //CPF_Edit
	struct FRegion TabSelectedR;                                              //CPF_Edit
	struct FRegion TabUnselectedL;                                            //CPF_Edit
	struct FRegion TabUnselectedM;                                            //CPF_Edit
	struct FRegion TabUnselectedR;                                            //CPF_Edit
	struct FRegion TabBackground;                                             //CPF_Edit
};
struct UUWindowHotkeyWindowList_execFindWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UUWindowHotkeyWindowList* ReturnValue;                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowHotkeyWindowList* L;                                        //0
};

// *****************************************************************************
// UUWindowHotkeyWindowList (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowHotkeyWindowList : public UUWindowList
{
public:
	class UUWindowWindow* Window;                                             //0
};
struct UUWindowMenuClassDefines_execCreated_Parms
{
	class FString szMenuDefFile;                                              //CPF_NeedCtorLink
};

// *****************************************************************************
// UUWindowMenuClassDefines (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowMenuClassDefines : public UObject
{
public:
	class UClass* ClassMPServerOption;                                        //CPF_Config
	class UClass* ClassButtonsDefines;                                        //CPF_Config
	class UClass* ClassMPCreateGameTabOpt;                                    //CPF_Config
	class UClass* ClassMPCreateGameTabAdvOpt;                                 //CPF_Config
	class UClass* ClassMPMenuTabGameModeFilters;                              //CPF_Config
	class UClass* ClassMainWidget;                                            //CPF_Config
	class UClass* ClassIntelWidget;                                           //CPF_Config
	class UClass* ClassPlanningWidget;                                        //CPF_Config
	class UClass* ClassExecuteWidget;                                         //CPF_Config
	class UClass* ClassSinglePlayerWidget;                                    //CPF_Config
	class UClass* ClassCustomMissionWidget;                                   //CPF_Config
	class UClass* ClassTrainingWidget;                                        //CPF_Config
	class UClass* ClassMultiPlayerWidget;                                     //CPF_Config
	class UClass* ClassOptionsWidget;                                         //CPF_Config
	class UClass* ClassCreditsWidget;                                         //CPF_Config
	class UClass* ClassGearWidget;                                            //CPF_Config
	class UClass* ClassMPCreateGameWidget;                                    //CPF_Config
	class UClass* ClassUbiComWidget;                                          //CPF_Config
	class UClass* ClassNonUbiComWidget;                                       //CPF_Config
	class UClass* ClassQuitWidget;                                            //CPF_Config
	class UClass* ClassActionPointPupUpMenu;                                  //CPF_Config
	class UClass* ClassMovementModePupUpMenu;                                 //CPF_Config
	class UClass* ClassGSServer;                                              //CPF_Config
	class UClass* ClassLanServer;                                             //CPF_Config
	class UClass* ClassUbiLogIn;                                              //CPF_Config
	class UClass* ClassUbiCDKeyCheck;                                         //CPF_Config
	class UClass* ClassQueryServerInfo;                                       //CPF_Config
	class UClass* ClassUbiLoginClient;                                        //CPF_Config
	class UClass* ClassMultiJoinIP;                                           //CPF_Config
	class UClass* ClassWritableMapWidget;                                     //CPF_Config
	class UClass* ClassJoinTeamWidget;                                        //CPF_Config
	class UClass* ClassInterWidget;                                           //CPF_Config
	class UClass* ClassInGameEsc;                                             //CPF_Config
	class UClass* ClassInGameRecMessages;                                     //CPF_Config
	class UClass* ClassInGameMsgOffensive;                                    //CPF_Config
	class UClass* ClassInGameMsgDefensive;                                    //CPF_Config
	class UClass* ClassInGameMsgReply;                                        //CPF_Config
	class UClass* ClassInGameMsgStatus;                                       //CPF_Config
	class UClass* ClassInGameVote;                                            //CPF_Config
	class UClass* ClassInGameOptionsWidget;                                   //CPF_Config
	class UClass* ClassCountDown;                                             //CPF_Config
	class UClass* ClassInGameOperativeSelectorWidget;                         //CPF_Config
	class UClass* ClassInGameObjectives;                                      //CPF_Config
	class UClass* ClassInGameEscNavBar;                                       //CPF_Config
	class UClass* ClassGameMenuCom;                                           //CPF_Config
	class UClass* ClassMenuCDKeyManager;                                      //CPF_Config
	class UClass* ClassOptionsGame;                                           //CPF_Config
	class UClass* ClassOptionsSound;                                          //CPF_Config
	class UClass* ClassOptionsGraphic;                                        //CPF_Config
	class UClass* ClassOptionsHud;                                            //CPF_Config
	class UClass* ClassOptionsMulti;                                          //CPF_Config
	class UClass* ClassOptionsControls;                                       //CPF_Config
	class UClass* ClassOptionsMOD;                                            //CPF_Config
	class UClass* ClassOptionsPatchService;                                   //CPF_Config
	class FString RegularRoot;                                                //CPF_Config|CPF_NeedCtorLink
	class FString InGameMultiRoot;                                            //CPF_Config|CPF_NeedCtorLink
	class FString InGameSingleRoot;                                           //CPF_Config|CPF_NeedCtorLink
};
struct UUWindowFrameCloseBox_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowFrameCloseBox_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowFrameCloseBox_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowFrameCloseBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowFrameCloseBox : public UUWindowButton
{
};
struct UUWindowConsoleClientWindow_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowConsoleClientWindow_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowConsoleClientWindow_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class FString S;                                                          //CPF_NeedCtorLink
};
struct UUWindowConsoleClientWindow_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowConsoleClientWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowConsoleClientWindow : public UUWindowDialogClientWindow
{
public:
	class UUWindowConsoleTextAreaControl* TextArea;                           //0
	class UUWindowEditControl* EditControl;                                   //0
};
struct UUWindowMessageBoxCW_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UUWindowMessageBox* P;                                              //0
};
struct UUWindowMessageBoxCW_execSetupMessageBoxClient_Parms
{
	class FString InMessage;                                                  //CPF_Parm|CPF_NeedCtorLink
	BYTE InButtons;                                                           //CPF_Parm
	BYTE InEnterResult;                                                       //CPF_Parm
};
struct UUWindowMessageBoxCW_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UUWindowMessageBoxCW_execGetHeight_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowMessageBoxCW_execResized_Parms
{
};
struct UUWindowMessageBoxCW_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowMessageBoxCW_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowMessageBox* P;                                              //0
};
struct UUWindowMessageBoxCW_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowMessageBoxCW (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowMessageBoxCW : public UUWindowDialogClientWindow
{
public:
	BYTE Buttons;                                                             //0
	BYTE EnterResult;                                                         //0
	class UUWindowSmallButton* YesButton;                                     //0
	class UUWindowSmallButton* NoButton;                                      //0
	class UUWindowSmallButton* OKButton;                                      //0
	class UUWindowSmallButton* CancelButton;                                  //0
	class UUWindowMessageBoxArea* MessageArea;                                //0
	class FString YesText;                                                    //CPF_Localized|CPF_NeedCtorLink
	class FString NoText;                                                     //CPF_Localized|CPF_NeedCtorLink
	class FString OKText;                                                     //CPF_Localized|CPF_NeedCtorLink
	class FString CancelText;                                                 //CPF_Localized|CPF_NeedCtorLink
};
struct UUWindowControlFrame_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowControlFrame_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowControlFrame_execSetFrame_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowControlFrame (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowControlFrame : public UUWindowWindow
{
public:
	class UUWindowWindow* Framed;                                             //0
};
struct UUWindowSmallButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSmallButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UUWindowSmallButton_execAutoWidth_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UUWindowSmallButton_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowSmallButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowSmallButton : public UUWindowButton
{
};
struct UUWindowPulldownMenu_execMenuCmd_Parms
{
	INT Item;                                                                 //CPF_Parm
	INT j;                                                                    //0
	class UUWindowPulldownMenuItem* i;                                        //0
};
struct UUWindowPulldownMenu_execKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowPulldownMenuItem* i;                                        //0
};
struct UUWindowPulldownMenu_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowPulldownMenuItem* i;                                        //0
};
struct UUWindowPulldownMenu_execFocusOtherWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowPulldownMenu_execGetMenuBar_Parms
{
	class UUWindowMenuBar* ReturnValue;                                       //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowPulldownMenu_execCloseUp_Parms
{
	BITFIELD bByOwner : 1;                                                    //CPF_Parm
	class UUWindowPulldownMenuItem* i;                                        //0
};
struct UUWindowPulldownMenu_execExecuteItem_Parms
{
	class UUWindowPulldownMenuItem* i;                                        //CPF_Parm
};
struct UUWindowPulldownMenu_execBeforeExecuteItem_Parms
{
	class UUWindowPulldownMenuItem* i;                                        //CPF_Parm
};
struct UUWindowPulldownMenu_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
};
struct UUWindowPulldownMenu_execDrawMenuBackground_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowPulldownMenu_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Count;                                                                //0
	class UUWindowPulldownMenuItem* i;                                        //0
};
struct UUWindowPulldownMenu_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT MaxWidth;                                                           //0
	INT Count;                                                                //0
	class UUWindowPulldownMenuItem* i;                                        //0
};
struct UUWindowPulldownMenu_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowPulldownMenu_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowPulldownMenu_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowPulldownMenu_execShowWindow_Parms
{
	class UUWindowPulldownMenuItem* i;                                        //0
};
struct UUWindowPulldownMenu_execSetSelected_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowPulldownMenuItem* NewSelected;                              //0
};
struct UUWindowPulldownMenu_execPerformSelect_Parms
{
	class UUWindowPulldownMenuItem* NewSelected;                              //CPF_Parm
};
struct UUWindowPulldownMenu_execSelect_Parms
{
	class UUWindowPulldownMenuItem* i;                                        //CPF_Parm
};
struct UUWindowPulldownMenu_execDeSelect_Parms
{
};
struct UUWindowPulldownMenu_execClear_Parms
{
};
struct UUWindowPulldownMenu_execCreated_Parms
{
};
struct UUWindowPulldownMenu_execAddMenuItem_Parms
{
	class FString C;                                                          //CPF_Parm|CPF_NeedCtorLink
	class UTexture* G;                                                        //CPF_Parm
	class UUWindowPulldownMenuItem* ReturnValue;                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowPulldownMenuItem* i;                                        //0
};

// *****************************************************************************
// UUWindowPulldownMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowPulldownMenu : public UUWindowListControl
{
public:
	INT ItemHeight;                                                           //0
	INT VBorder;                                                              //0
	INT HBorder;                                                              //0
	INT TextBorder;                                                           //0
	class UUWindowPulldownMenuItem* Selected;                                 //0
	class UUWindowList* Owner;                                                //0
};
struct UUWindowPulldownMenuItem_execGetMenuBar_Parms
{
	class UUWindowMenuBar* ReturnValue;                                       //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowPulldownMenuItem_execCloseUp_Parms
{
};
struct UUWindowPulldownMenuItem_execDeSelect_Parms
{
};
struct UUWindowPulldownMenuItem_execSetCaption_Parms
{
	class FString C;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString Junk;                                                       //CPF_NeedCtorLink
	class FString Junk2;                                                      //CPF_NeedCtorLink
};
struct UUWindowPulldownMenuItem_execSelect_Parms
{
};
struct UUWindowPulldownMenuItem_execCreateSubMenu_Parms
{
	class UClass* MenuClass;                                                  //CPF_Parm
	class UUWindowWindow* InOwnerWindow;                                      //CPF_Parm
	class UUWindowPulldownMenu* ReturnValue;                                  //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UUWindowPulldownMenuItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowPulldownMenuItem : public UUWindowList
{
public:
	BYTE HotKey;                                                              //0
	BITFIELD bChecked : 1;                                                    //0
	BITFIELD bDisabled : 1;                                                   //0
	FLOAT ItemTop;                                                            //0
	class UTexture* Graphic;                                                  //0
	class UUWindowPulldownMenu* SubMenu;                                      //0
	class UUWindowPulldownMenu* Owner;                                        //0
	class FString Caption;                                                    //CPF_NeedCtorLink
};
struct UUWindowMenuBar_execDrawMenuBar_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowMenuBar_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class FString Text;                                                       //CPF_NeedCtorLink
	class FString Underline;                                                  //CPF_NeedCtorLink
	class UUWindowMenuBarItem* pMenuBarItem;                                  //0
};
struct UUWindowMenuBar_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execSelect_Parms
{
	class UUWindowMenuBarItem* i;                                             //CPF_Parm
};
struct UUWindowMenuBar_execMouseLeave_Parms
{
};
struct UUWindowMenuBar_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execResolutionChanged_Parms
{
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execAddItem_Parms
{
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UUWindowMenuBarItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execAddHelpItem_Parms
{
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UUWindowMenuBarItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execCreated_Parms
{
};
struct UUWindowMenuBar_execMenuCmd_Parms
{
	INT Menu;                                                                 //CPF_Parm
	INT Item;                                                                 //CPF_Parm
	class UUWindowMenuBarItem* i;                                             //0
	INT j;                                                                    //0
};
struct UUWindowMenuBar_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execHotKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowMenuBar_execHotKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowMenuBarItem* i;                                             //0
};
struct UUWindowMenuBar_execGetMenuBar_Parms
{
	class UUWindowMenuBar* ReturnValue;                                       //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowMenuBar_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
};
struct UUWindowMenuBar_execCloseUp_Parms
{
};

// *****************************************************************************
// UUWindowMenuBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowMenuBar : public UUWindowListControl
{
public:
	INT Spacing;                                                              //0
	BITFIELD bAltDown : 1;                                                    //0
	class UUWindowMenuBarItem* Selected;                                      //0
	class UUWindowMenuBarItem* Over;                                          //0
};
struct UUWindowMenuBarItem_execGetMenuBar_Parms
{
	class UUWindowMenuBar* ReturnValue;                                       //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowMenuBarItem_execCloseUp_Parms
{
};
struct UUWindowMenuBarItem_execSelect_Parms
{
};
struct UUWindowMenuBarItem_execDeSelect_Parms
{
};
struct UUWindowMenuBarItem_execCreateMenu_Parms
{
	class UClass* MenuClass;                                                  //CPF_Parm
	class UUWindowPulldownMenu* ReturnValue;                                  //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowMenuBarItem_execSetCaption_Parms
{
	class FString C;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString Junk;                                                       //CPF_NeedCtorLink
	class FString Junk2;                                                      //CPF_NeedCtorLink
};
struct UUWindowMenuBarItem_execSetHelp_Parms
{
	BITFIELD B : 1;                                                           //CPF_Parm
};

// *****************************************************************************
// UUWindowMenuBarItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowMenuBarItem : public UUWindowList
{
public:
	BYTE HotKey;                                                              //0
	BITFIELD bHelp : 1;                                                       //0
	FLOAT ItemLeft;                                                           //0
	FLOAT ItemWidth;                                                          //0
	class UUWindowMenuBar* Owner;                                             //0
	class UUWindowPulldownMenu* Menu;                                         //0
	class FString Caption;                                                    //CPF_NeedCtorLink
};
struct UUWindowPageControl_execFirstPage_Parms
{
	class UUWindowPageControlPage* ReturnValue;                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowPageControl_execGotoTab_Parms
{
	class UUWindowTabControlItem* NewSelected;                                //CPF_Parm
	BITFIELD bByUser : 1;                                                     //CPF_Parm
	class UUWindowPageControlPage* i;                                         //0
};
struct UUWindowPageControl_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
	class UUWindowPageControlPage* i;                                         //0
};
struct UUWindowPageControl_execDeletePage_Parms
{
	class UUWindowPageControlPage* P;                                         //CPF_Parm
};
struct UUWindowPageControl_execGetPage_Parms
{
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UUWindowPageControlPage* ReturnValue;                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowPageControl_execInsertPage_Parms
{
	class UUWindowPageControlPage* BeforePage;                                //CPF_Parm
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UClass* PageClass;                                                  //CPF_Parm
	FName ObjectName;                                                         //CPF_Parm
	class UUWindowPageControlPage* ReturnValue;                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowPageControlPage* P;                                         //0
};
struct UUWindowPageControl_execAddPage_Parms
{
	class FString Caption;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UClass* PageClass;                                                  //CPF_Parm
	FName ObjectName;                                                         //CPF_Parm
	class UUWindowPageControlPage* ReturnValue;                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowPageControlPage* P;                                         //0
};
struct UUWindowPageControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowPageControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT OldWinHeight;                                                       //0
	class UUWindowPageControlPage* i;                                         //0
};
struct UUWindowPageControl_execGetDesiredDimensions_Parms
{
	FLOAT W;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT H;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT MaxW;                                                               //0
	FLOAT MaxH;                                                               //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	class UUWindowPageControlPage* i;                                         //0
};
struct UUWindowPageControl_execNotifyAfterLevelChange_Parms
{
	class UUWindowPageControlPage* i;                                         //0
};
struct UUWindowPageControl_execNotifyBeforeLevelChange_Parms
{
	class UUWindowPageControlPage* i;                                         //0
};
struct UUWindowPageControl_execNotifyQuitUnreal_Parms
{
	class UUWindowPageControlPage* i;                                         //0
};
struct UUWindowPageControl_execResolutionChanged_Parms
{
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UUWindowPageControlPage* i;                                         //0
};

// *****************************************************************************
// UUWindowPageControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowPageControl : public UUWindowTabControl
{
};
struct UUWindowPageWindow_execRightClickTab_Parms
{
};

// *****************************************************************************
// UUWindowPageWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowPageWindow : public UUWindowDialogClientWindow
{
public:
	class UUWindowPageControlPage* OwnerTab;                                  //0
};
struct UUWindowTabControlRightButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowTabControlRightButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowTabControlRightButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowTabControlRightButton : public UUWindowButton
{
};
struct UUWindowTabControlLeftButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowTabControlLeftButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowTabControlLeftButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowTabControlLeftButton : public UUWindowButton
{
};

enum eTabCase{
	 eTab_Left=0
	,eTab_Middle=1
	,eTab_Right=2
	,eTab_Left_RightCut=3
	,eTab_Middle_RightCut=4
};
struct UUWindowTabControlTabArea_execCheckToolTip_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	class UUWindowTabControlItem* Item;                                       //0
};
struct UUWindowTabControlTabArea_execResetMouseOverOnItem_Parms
{
	class UUWindowTabControlItem* i;                                          //0
	INT Count;                                                                //0
};
struct UUWindowTabControlTabArea_execCheckMouseOverOnItem_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	class UUWindowTabControlItem* ReturnValue;                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowTabControlItem* i;                                          //0
	class UUWindowTabControlItem* ItemTemp;                                   //0
	INT Count;                                                                //0
	FLOAT fXMin;                                                              //0
	FLOAT fXMax;                                                              //0
};
struct UUWindowTabControlTabArea_execCheckMousePassThrough_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowTabControlTabArea_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	BITFIELD bShowText : 1;                                                   //CPF_Parm
	class UUWindowTabControlItem* pTabControlItem;                            //0
};
struct UUWindowTabControlTabArea_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowTabControlItem* i;                                          //0
	INT Count;                                                                //0
};
struct UUWindowTabControlTabArea_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowTabControlTabArea_execMouseLeave_Parms
{
};
struct UUWindowTabControlTabArea_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowTabControlItem* i;                                          //0
	INT Count;                                                                //0
};
struct UUWindowTabControlTabArea_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowTabControlItem* i;                                          //0
	class UUWindowTabControlItem* ITemp;                                      //0
	INT Count;                                                                //0
	INT Row;                                                                  //0
	INT iTabNumber;                                                           //0
	FLOAT t;                                                                  //0
	BITFIELD bNextTabSelected : 1;                                            //0
	BITFIELD bPrevTabSelected : 1;                                            //0
};
struct UUWindowTabControlTabArea_execLayoutTabs_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowTabControlTabArea_execSizeTabsMultiLine_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowTabControlItem* i;                                          //0
	class UUWindowTabControlItem* Selected;                                   //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	INT MinRow;                                                               //0
	FLOAT RowWidths[10];                                                      //0
	INT TabCounts[10];                                                        //0
	INT j;                                                                    //0
	BITFIELD bTryAnotherRow : 1;                                              //0
};
struct UUWindowTabControlTabArea_execSizeTabsSingleLine_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowTabControlItem* i;                                          //0
	class UUWindowTabControlItem* Selected;                                   //0
	class UUWindowTabControlItem* LastHidden;                                 //0
	INT Count;                                                                //0
	INT TabCount;                                                             //0
	FLOAT ItemX;                                                              //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT fTotalTabsWidth;                                                    //0
	BITFIELD bHaveMore : 1;                                                   //0
};
struct UUWindowTabControlTabArea_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowTabControlTabArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowTabControlTabArea : public UUWindowWindow
{
public:
	BYTE m_eTabCase;                                                          //0
	INT TabOffset;                                                            //0
	INT TabRows;                                                              //0
	INT m_iTotalTab;                                                          //0
	BITFIELD bArrangeRowsLikeTimHates : 1;                                    //CPF_Config|CPF_GlobalConfig
	BITFIELD bShowSelected : 1;                                               //0
	BITFIELD bDragging : 1;                                                   //0
	BITFIELD bFlashShown : 1;                                                 //0
	BITFIELD m_bDisplayToolTip : 1;                                           //0
	FLOAT UnFlashTime;                                                        //0
	class UUWindowTabControlItem* FirstShown;                                 //0
	class UUWindowTabControlItem* DragTab;                                    //0
	class FColor m_vEffectColor;                                              //0
};
struct UUWindowHScrollbar_execSetBorderColor_Parms
{
	class FColor C;                                                           //CPF_Parm
};
struct UUWindowHScrollbar_execSetHideWhenDisable_Parms
{
	BITFIELD _bHideWhenDisable : 1;                                           //CPF_Parm
};
struct UUWindowHScrollbar_execAdviceParent_Parms
{
	BITFIELD _bMouseEnter : 1;                                                //CPF_Parm
};
struct UUWindowHScrollbar_execMouseLeave_Parms
{
};
struct UUWindowHScrollbar_execMouseEnter_Parms
{
};
struct UUWindowHScrollbar_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowHScrollbar_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
	BITFIELD bLeft : 1;                                                       //0
	BITFIELD bRight : 1;                                                      //0
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
};
struct UUWindowHScrollbar_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowHScrollbar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowHScrollbar_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowHScrollbar_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UUWindowHScrollbar_execCreated_Parms
{
};
struct UUWindowHScrollbar_execCheckRange_Parms
{
};
struct UUWindowHScrollbar_execSetRange_Parms
{
	FLOAT NewMinPos;                                                          //CPF_Parm
	FLOAT NewMaxPos;                                                          //CPF_Parm
	FLOAT NewMaxVisible;                                                      //CPF_Parm
	FLOAT NewScrollAmount;                                                    //CPF_Parm
};
struct UUWindowHScrollbar_execScroll_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT OldPos;                                                             //0
};
struct UUWindowHScrollbar_execShow_Parms
{
	FLOAT P;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowHScrollbar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowHScrollbar : public UUWindowDialogControl
{
public:
	INT m_iScrollBarID;                                                       //0
	BITFIELD bDisabled : 1;                                                   //0
	BITFIELD bDragging : 1;                                                   //0
	BITFIELD m_bHideSBWhenDisable : 1;                                        //0
	FLOAT MinPos;                                                             //0
	FLOAT MaxPos;                                                             //0
	FLOAT MaxVisible;                                                         //0
	FLOAT pos;                                                                //0
	FLOAT ThumbStart;                                                         //0
	FLOAT ThumbWidth;                                                         //0
	FLOAT NextClickTime;                                                      //0
	FLOAT DragX;                                                              //0
	FLOAT ScrollAmount;                                                       //0
	class UUWindowSBLeftButton* LeftButton;                                   //0
	class UUWindowSBRightButton* RightButton;                                 //0
	class FColor m_SelectedColor;                                             //0
	class FColor m_NormalColor;                                               //0
};
struct UUWindowVScrollbar_execSetHideWhenDisable_Parms
{
	BITFIELD _bHideWhenDisable : 1;                                           //CPF_Parm
};
struct UUWindowVScrollbar_execSetBorderColor_Parms
{
	class FColor C;                                                           //CPF_Parm
};
struct UUWindowVScrollbar_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowVScrollbar_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
	BITFIELD bUp : 1;                                                         //0
	BITFIELD bDown : 1;                                                       //0
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
};
struct UUWindowVScrollbar_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowVScrollbar_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowVScrollbar_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowVScrollbar_execisHidden_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowVScrollbar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowVScrollbar_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowVScrollbar_execSetEffect_Parms
{
	BITFIELD _effect : 1;                                                     //CPF_Parm
};
struct UUWindowVScrollbar_execCreated_Parms
{
};
struct UUWindowVScrollbar_execCheckRange_Parms
{
};
struct UUWindowVScrollbar_execSetRange_Parms
{
	FLOAT NewMinPos;                                                          //CPF_Parm
	FLOAT NewMaxPos;                                                          //CPF_Parm
	FLOAT NewMaxVisible;                                                      //CPF_Parm
	FLOAT NewScrollAmount;                                                    //CPF_Parm
};
struct UUWindowVScrollbar_execScroll_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT OldPos;                                                             //0
};
struct UUWindowVScrollbar_execShow_Parms
{
	FLOAT P;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowVScrollbar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowVScrollbar : public UUWindowWindow
{
public:
	BITFIELD bDragging : 1;                                                   //0
	BITFIELD bDisabled : 1;                                                   //0
	BITFIELD m_bHideSBWhenDisable : 1;                                        //0
	BITFIELD m_bUseSpecialEffect : 1;                                         //0
	FLOAT MinPos;                                                             //0
	FLOAT MaxPos;                                                             //0
	FLOAT MaxVisible;                                                         //0
	FLOAT pos;                                                                //0
	FLOAT ThumbStart;                                                         //0
	FLOAT ThumbHeight;                                                        //0
	FLOAT NextClickTime;                                                      //0
	FLOAT DragY;                                                              //0
	FLOAT ScrollAmount;                                                       //0
	class UUWindowSBUpButton* UpButton;                                       //0
	class UUWindowSBDownButton* DownButton;                                   //0
};
struct UUWindowSBRightButton_execMouseEnter_Parms
{
};
struct UUWindowSBRightButton_execMouseLeave_Parms
{
};
struct UUWindowSBRightButton_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UUWindowSBRightButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBRightButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBRightButton_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowSBRightButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowSBRightButton : public UUWindowButton
{
public:
	BITFIELD m_bHideSBWhenDisable : 1;                                        //0
	FLOAT NextClickTime;                                                      //0
};
struct UUWindowSBLeftButton_execMouseEnter_Parms
{
};
struct UUWindowSBLeftButton_execMouseLeave_Parms
{
};
struct UUWindowSBLeftButton_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UUWindowSBLeftButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBLeftButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBLeftButton_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowSBLeftButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowSBLeftButton : public UUWindowButton
{
public:
	BITFIELD m_bHideSBWhenDisable : 1;                                        //0
	FLOAT NextClickTime;                                                      //0
};
struct UUWindowSBDownButton_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UUWindowSBDownButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBDownButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBDownButton_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowSBDownButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowSBDownButton : public UUWindowButton
{
public:
	BITFIELD m_bHideSBWhenDisable : 1;                                        //0
	FLOAT NextClickTime;                                                      //0
};
struct UUWindowSBUpButton_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UUWindowSBUpButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBUpButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowSBUpButton_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowSBUpButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowSBUpButton : public UUWindowButton
{
public:
	BITFIELD m_bHideSBWhenDisable : 1;                                        //0
	FLOAT NextClickTime;                                                      //0
};
struct UUWindowEditControl_execKeyFocusExit_Parms
{
};
struct UUWindowEditControl_execKeyFocusEnter_Parms
{
};
struct UUWindowEditControl_execFocusWindow_Parms
{
};
struct UUWindowEditControl_execSetDelayedNotify_Parms
{
	BITFIELD bDelayedNotify : 1;                                              //CPF_Parm
};
struct UUWindowEditControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowEditControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowEditControl_execSetMaxLength_Parms
{
	INT MaxLength;                                                            //CPF_Parm
};
struct UUWindowEditControl_execSetValue_Parms
{
	class FString NewValue;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString NewValue2;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowEditControl_execGetValue2_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UUWindowEditControl_execGetValue_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UUWindowEditControl_execClear_Parms
{
};
struct UUWindowEditControl_execSetEditTextColor_Parms
{
	class FColor NewColor;                                                    //CPF_Parm
};
struct UUWindowEditControl_execSetHistory_Parms
{
	BITFIELD bInHistory : 1;                                                  //CPF_Parm
};
struct UUWindowEditControl_execSetFont_Parms
{
	INT NewFont;                                                              //CPF_Parm
};
struct UUWindowEditControl_execSetNumericFloat_Parms
{
	BITFIELD bNumericFloat : 1;                                               //CPF_Parm
};
struct UUWindowEditControl_execSetNumericOnly_Parms
{
	BITFIELD bNumericOnly : 1;                                                //CPF_Parm
};
struct UUWindowEditControl_execCreated_Parms
{
	class FColor C;                                                           //0
};

// *****************************************************************************
// UUWindowEditControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowEditControl : public UUWindowDialogControl
{
public:
	FLOAT EditBoxWidth;                                                       //0
	FLOAT EditAreaDrawX;                                                      //0
	FLOAT EditAreaDrawY;                                                      //0
	class UUWindowEditBox* EditBox;                                           //0
};
struct UUWindowComboList_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboList_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboList_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboList_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UUWindowComboList_execFocusOtherWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowComboList_execCloseUp_Parms
{
};
struct UUWindowComboList_execExecuteItem_Parms
{
	class UUWindowComboListItem* i;                                           //CPF_Parm
};
struct UUWindowComboList_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
};
struct UUWindowComboList_execDrawMenuBackground_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UUWindowComboList_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Count;                                                                //0
	class UUWindowComboListItem* i;                                           //0
};
struct UUWindowComboList_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT MaxWidth;                                                           //0
	INT Count;                                                                //0
	class UUWindowComboListItem* i;                                           //0
	FLOAT ListX;                                                              //0
	FLOAT ListY;                                                              //0
	FLOAT ExtraWidth;                                                         //0
};
struct UUWindowComboList_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboList_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboList_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboList_execDisableAllItems_Parms
{
	class UUWindowComboListItem* i;                                           //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execGetItem_Parms
{
	class FString Value;                                                      //CPF_Parm|CPF_NeedCtorLink
	class UUWindowComboListItem* ReturnValue;                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowComboListItem* i;                                           //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execSetSelected_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowComboListItem* NewSelected;                                 //0
	class UUWindowComboListItem* Item;                                        //0
	INT i;                                                                    //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execInsertItem_Parms
{
	class FString Value;                                                      //CPF_Parm|CPF_NeedCtorLink
	class FString Value2;                                                     //CPF_Parm|CPF_NeedCtorLink
	INT SortWeight;                                                           //CPF_Parm
	class UUWindowComboListItem* i;                                           //0
};
struct UUWindowComboList_execAddItem_Parms
{
	class FString Value;                                                      //CPF_Parm|CPF_NeedCtorLink
	class FString Value2;                                                     //CPF_Parm|CPF_NeedCtorLink
	INT SortWeight;                                                           //CPF_Parm
	class UUWindowComboListItem* i;                                           //0
};
struct UUWindowComboList_execGetItemValue2_Parms
{
	INT Index;                                                                //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UUWindowComboListItem* i;                                           //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execRemoveItem_Parms
{
	INT Index;                                                                //CPF_Parm
	class UUWindowComboListItem* i;                                           //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execGetItemValue_Parms
{
	INT Index;                                                                //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UUWindowComboListItem* i;                                           //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execFindItemIndex2_Parms
{
	class FString Value2;                                                     //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bIgnoreCase : 1;                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowComboListItem* i;                                           //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execFindItemIndex_Parms
{
	class FString Value;                                                      //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bIgnoreCase : 1;                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowComboListItem* i;                                           //0
	INT Count;                                                                //0
};
struct UUWindowComboList_execCreated_Parms
{
};
struct UUWindowComboList_execSetup_Parms
{
};
struct UUWindowComboList_execGetLookAndFeelTexture_Parms
{
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowComboList_execClear_Parms
{
};
struct UUWindowComboList_execWindowShown_Parms
{
};
struct UUWindowComboList_execSort_Parms
{
};

// *****************************************************************************
// UUWindowComboList (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowComboList : public UUWindowListControl
{
public:
	INT ItemHeight;                                                           //0
	INT VBorder;                                                              //0
	INT HBorder;                                                              //0
	INT TextBorder;                                                           //0
	INT MaxVisible;                                                           //0
	class UUWindowComboControl* Owner;                                        //0
	class UUWindowVScrollbar* VertSB;                                         //0
	class UUWindowComboListItem* Selected;                                    //0
};
struct UUWindowComboRightButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT i;                                                                    //0
};
struct UUWindowComboRightButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowComboRightButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowComboRightButton : public UUWindowButton
{
};
struct UUWindowComboLeftButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT i;                                                                    //0
};
struct UUWindowComboLeftButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowComboLeftButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowComboLeftButton : public UUWindowButton
{
};
struct UUWindowComboButton_execFocusOtherWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowComboButton_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboButton_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowComboButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowComboButton : public UUWindowButton
{
public:
	class UUWindowComboControl* Owner;                                        //0
};
struct UUWindowComboControl_execCloseUp_Parms
{
};
struct UUWindowComboControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboControl_execDisableAllItems_Parms
{
};
struct UUWindowComboControl_execGetItem_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_NeedCtorLink
	class UUWindowComboListItem* ReturnValue;                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowComboControl_execInsertItem_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString S2;                                                         //CPF_Parm|CPF_NeedCtorLink
	INT SortWeight;                                                           //CPF_Parm
};
struct UUWindowComboControl_execAddItem_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString S2;                                                         //CPF_Parm|CPF_NeedCtorLink
	INT SortWeight;                                                           //CPF_Parm
};
struct UUWindowComboControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowComboControl_execSetMaxLength_Parms
{
	INT MaxLength;                                                            //CPF_Parm
};
struct UUWindowComboControl_execSetValue_Parms
{
	class FString NewValue;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString NewValue2;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UUWindowComboControl_execGetValue2_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UUWindowComboControl_execGetValue_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UUWindowComboControl_execSetSelectedIndex_Parms
{
	INT Index;                                                                //CPF_Parm
};
struct UUWindowComboControl_execGetSelectedIndex_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowComboControl_execSetEditable_Parms
{
	BITFIELD bNewCanEdit : 1;                                                 //CPF_Parm
};
struct UUWindowComboControl_execSetEditTextColor_Parms
{
	class FColor NewColor;                                                    //CPF_Parm
};
struct UUWindowComboControl_execSetFont_Parms
{
	INT NewFont;                                                              //CPF_Parm
};
struct UUWindowComboControl_execSetNumericFloat_Parms
{
	BITFIELD bNumericFloat : 1;                                               //CPF_Parm
};
struct UUWindowComboControl_execSetNumericOnly_Parms
{
	BITFIELD bNumericOnly : 1;                                                //CPF_Parm
};
struct UUWindowComboControl_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
};
struct UUWindowComboControl_execFindItemIndex2_Parms
{
	class FString v2;                                                         //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bIgnoreCase : 1;                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowComboControl_execRemoveItem_Parms
{
	INT Index;                                                                //CPF_Parm
};
struct UUWindowComboControl_execFindItemIndex_Parms
{
	class FString V;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bIgnoreCase : 1;                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowComboControl_execNotify_Parms
{
	BYTE E;                                                                   //CPF_Parm
};
struct UUWindowComboControl_execSetButtons_Parms
{
	BITFIELD bInButtons : 1;                                                  //CPF_Parm
};
struct UUWindowComboControl_execCreated_Parms
{
};
struct UUWindowComboControl_execFocusOtherWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowComboControl_execClear_Parms
{
};
struct UUWindowComboControl_execClearValue_Parms
{
};
struct UUWindowComboControl_execSort_Parms
{
};
struct UUWindowComboControl_execDropDown_Parms
{
};

// *****************************************************************************
// UUWindowComboControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowComboControl : public UUWindowDialogControl
{
public:
	BITFIELD bListVisible : 1;                                                //0
	BITFIELD bCanEdit : 1;                                                    //0
	BITFIELD bButtons : 1;                                                    //0
	BITFIELD m_bDisabled : 1;                                                 //0
	BITFIELD m_bSelectedByUser : 1;                                           //0
	FLOAT EditBoxWidth;                                                       //0
	FLOAT EditAreaDrawX;                                                      //0
	FLOAT EditAreaDrawY;                                                      //0
	class UUWindowEditBox* EditBox;                                           //0
	class UUWindowComboButton* Button;                                        //0
	class UUWindowComboLeftButton* LeftButton;                                //0
	class UUWindowComboRightButton* RightButton;                              //0
	class UUWindowComboList* List;                                            //0
	class UClass* ListClass;                                                  //0
};

// *****************************************************************************
// UUWindowConsoleTextAreaControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowConsoleTextAreaControl : public UUWindowDynamicTextArea
{
};
struct UUWindowMessageBoxArea_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowMessageBoxArea_execGetHeight_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	FLOAT H;                                                                  //0
	INT L;                                                                    //0
	FLOAT OldWinHeight;                                                       //0
};

// *****************************************************************************
// UUWindowMessageBoxArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowMessageBoxArea : public UUWindowWindow
{
public:
	class FString Message;                                                    //CPF_NeedCtorLink
};
struct UUWindowPageControlPage_execNextPage_Parms
{
	class UUWindowPageControlPage* ReturnValue;                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowPageControlPage_execRightClickTab_Parms
{
};

// *****************************************************************************
// UUWindowPageControlPage (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowPageControlPage : public UUWindowTabControlItem
{
public:
	class UUWindowPageWindow* Page;                                           //0
};
struct UUWindowEditBox_execMouseLeave_Parms
{
};
struct UUWindowEditBox_execMouseEnter_Parms
{
};
struct UUWindowEditBox_execDropSelection_Parms
{
};
struct UUWindowEditBox_execKeyFocusExit_Parms
{
};
struct UUWindowEditBox_execKeyFocusEnter_Parms
{
};
struct UUWindowEditBox_execDoubleClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowEditBox_execFocusOtherWindow_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
};
struct UUWindowEditBox_execFocusWindow_Parms
{
};
struct UUWindowEditBox_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
};
struct UUWindowEditBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT TextY;                                                              //0
};
struct UUWindowEditBox_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowEditBox_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowEditBox_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowEditBox_execKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowEditBox_execKeyType_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
};
struct UUWindowEditBox_execEditCut_Parms
{
};
struct UUWindowEditBox_execEditPaste_Parms
{
};
struct UUWindowEditBox_execEditCopy_Parms
{
};
struct UUWindowEditBox_execMoveEnd_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowEditBox_execMoveHome_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowEditBox_execWordRight_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowEditBox_execMoveRight_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowEditBox_execMoveLeft_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowEditBox_execWordLeft_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UUWindowEditBox_execDelete_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString NewValue;                                                   //CPF_NeedCtorLink
};
struct UUWindowEditBox_execBackspace_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString NewValue;                                                   //CPF_NeedCtorLink
};
struct UUWindowEditBox_execInsert_Parms
{
	BYTE C;                                                                   //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString NewValue;                                                   //CPF_NeedCtorLink
};
struct UUWindowEditBox_execInsertText_Parms
{
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UUWindowEditBox_execNotify_Parms
{
	BYTE E;                                                                   //CPF_Parm
};
struct UUWindowEditBox_execGetValue2_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UUWindowEditBox_execGetValue_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UUWindowEditBox_execSelectAll_Parms
{
};
struct UUWindowEditBox_execClear_Parms
{
};
struct UUWindowEditBox_execSetValue_Parms
{
	class FString NewValue;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString NewValue2;                                                  //CPF_Parm|CPF_NeedCtorLink
	BITFIELD noUpdateHistory : 1;                                             //CPF_Parm
};
struct UUWindowEditBox_execSetEditable_Parms
{
	BITFIELD bEditable : 1;                                                   //CPF_Parm
};
struct UUWindowEditBox_execSetHistory_Parms
{
	BITFIELD bInHistory : 1;                                                  //CPF_Parm
};
struct UUWindowEditBox_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowEditBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowEditBox : public UUWindowDialogControl
{
public:
	INT CaretOffset;                                                          //0
	INT MaxLength;                                                            //0
	BITFIELD bShowCaret : 1;                                                  //0
	BITFIELD bNumericOnly : 1;                                                //0
	BITFIELD bNumericFloat : 1;                                               //0
	BITFIELD bCanEdit : 1;                                                    //0
	BITFIELD bAllSelected : 1;                                                //0
	BITFIELD bDelayedNotify : 1;                                              //0
	BITFIELD bChangePending : 1;                                              //0
	BITFIELD bControlDown : 1;                                                //0
	BITFIELD bShiftDown : 1;                                                  //0
	BITFIELD bHistory : 1;                                                    //0
	BITFIELD bKeyDown : 1;                                                    //0
	BITFIELD m_bMouseOn : 1;                                                  //0
	BITFIELD m_bDrawEditBorders : 1;                                          //0
	BITFIELD m_bUseNewPaint : 1;                                              //0
	BITFIELD m_CurrentlyEditing : 1;                                          //0
	BITFIELD bSelectOnFocus : 1;                                              //0
	BITFIELD bPassword : 1;                                                   //0
	BITFIELD m_bDrawEditBoxBG : 1;                                            //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT LastDrawTime;                                                       //0
	FLOAT offset;                                                             //0
	class UUWindowDialogControl* NotifyOwner;                                 //0
	class UUWindowEditBoxHistory* HistoryList;                                //0
	class UUWindowEditBoxHistory* CurrentHistory;                             //0
	class FString Value;                                                      //CPF_NeedCtorLink
	class FString Value2;                                                     //CPF_NeedCtorLink
	class FString OldValue;                                                   //CPF_NeedCtorLink
};
struct UUWindowComboListItem_execCompare_Parms
{
	class UUWindowList* t;                                                    //CPF_Parm
	class UUWindowList* B;                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowComboListItem* TI;                                          //0
	class UUWindowComboListItem* BI;                                          //0
	class FString TS;                                                         //CPF_NeedCtorLink
	class FString BS;                                                         //CPF_NeedCtorLink
};

// *****************************************************************************
// UUWindowComboListItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowComboListItem : public UUWindowList
{
public:
	INT SortWeight;                                                           //0
	BITFIELD bDisabled : 1;                                                   //0
	FLOAT ItemTop;                                                            //0
	class FString Value;                                                      //CPF_NeedCtorLink
	class FString Value2;                                                     //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FstItemProperties ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstItemProperties
{
public:
	class FString szText;                                                 //CPF_NeedCtorLink
	class UFont* TextFont;                                                //0
	FLOAT fXPos;                                                          //0
	FLOAT fYPos;                                                          //0
	FLOAT fWidth;                                                         //0
	FLOAT fHeigth;                                                        //0
	INT iLineNumber;                                                      //0
	BYTE eAlignment;                                                      //0
};

// -----------------------------------------------------------------------------
// FstSubTextBox ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstSubTextBox
{
public:
	class FString szGameTypeSelect;                                       //CPF_NeedCtorLink
	FLOAT fXOffset;                                                       //0
	FLOAT fHeight;                                                        //0
	class UFont* FontSubText;                                             //0
};

// -----------------------------------------------------------------------------
// FstCoordItem ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstCoordItem
{
public:
	FLOAT fXPos;                                                          //0
	FLOAT fWidth;                                                         //0
};
struct UUWindowListBoxItem_execSetItemParameters_Parms
{
	INT _index;                                                               //CPF_Parm
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UFont* _TextFont;                                                   //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	INT _iLineNumber;                                                         //CPF_Parm
	BYTE _eAlignement;                                                        //CPF_Parm
	struct FstItemProperties stItemParam;                                     //CPF_NeedCtorLink
};
struct UUWindowListBoxItem_execClearItem_Parms
{
};
struct UUWindowListBoxItem_execCompare_Parms
{
	class UUWindowList* t;                                                    //CPF_Parm
	class UUWindowList* B;                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString TS;                                                         //CPF_NeedCtorLink
	class FString BS;                                                         //CPF_NeedCtorLink
};

// *****************************************************************************
// UUWindowListBoxItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowListBoxItem : public UUWindowList
{
public:
	INT m_iFontIndex;                                                         //0
	INT m_iItemID;                                                            //0
	BITFIELD bSelected : 1;                                                   //0
	BITFIELD m_bUseSubText : 1;                                               //0
	BITFIELD m_bImALine : 1;                                                  //0
	BITFIELD m_bNotAffectByNotify : 1;                                        //0
	BITFIELD m_bDisabled : 1;                                                 //0
	FLOAT m_fXFakeEditBox;                                                    //0
	FLOAT m_fWFakeEditBox;                                                    //0
	TArray<struct FstItemProperties> m_AItemProperties;                       //CPF_NeedCtorLink
	struct FstSubTextBox m_stSubText;                                         //CPF_NeedCtorLink
	class FColor m_vItemColor;                                                //0
	class FString HelpText;                                                   //CPF_NeedCtorLink
	class FString m_szToolTip;                                                //CPF_NeedCtorLink
	class FString m_szFakeEditBoxValue;                                       //CPF_NeedCtorLink
	class FString m_szActionKey;                                              //CPF_NeedCtorLink
};
struct UUWindowBitmap_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT XAdjust;                                                              //0
	INT YAdjust;                                                              //0
	INT RegW;                                                                 //0
	INT RegH;                                                                 //0
};

// *****************************************************************************
// UUWindowBitmap (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowBitmap : public UUWindowDialogControl
{
public:
	INT m_iDrawStyle;                                                         //0
	BITFIELD bStretch : 1;                                                    //0
	BITFIELD bCenter : 1;                                                     //0
	BITFIELD m_bHorizontalFlip : 1;                                           //0
	BITFIELD m_bVerticalFlip : 1;                                             //0
	FLOAT m_ImageX;                                                           //0
	FLOAT m_ImageY;                                                           //0
	class UTexture* t;                                                        //0
	struct FRegion R;                                                         //0
};
struct UUWindowWrappedTextArea_execNewAddText_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT i;                                                                    //0
	INT iTempLines;                                                           //0
	class UFont* TempTextFontArea[80];                                        //0
	class FColor TempTextColorArea[80];                                       //0
	class FString TempTextArea[80];                                           //CPF_NeedCtorLink
};
struct UUWindowWrappedTextArea_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT XL;                                                                 //0
	FLOAT YL;                                                                 //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT AddLine;                                                              //0
	BITFIELD bUseAreaFont : 1;                                                //0
};
struct UUWindowWrappedTextArea_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UUWindowWrappedTextArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowWrappedTextArea : public UUWindowTextAreaControl
{
};

// *****************************************************************************
// UUWindowInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowInfo : public UObject
{
public:
	TArray<class FString> m_AModsInfo;                                        //CPF_Config|CPF_NeedCtorLink
};

// *****************************************************************************
// UUWindowDynamicTextRow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowDynamicTextRow : public UUWindowList
{
public:
	BITFIELD bRowDirty : 1;                                                   //0
	class UUWindowDynamicTextRow* WrapParent;                                 //0
	class FString Text;                                                       //CPF_NeedCtorLink
};

// *****************************************************************************
// UUWindowEditBoxHistory (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowEditBoxHistory : public UUWindowList
{
public:
	class FString HistoryText;                                                //CPF_NeedCtorLink
};
struct UUWindowLabelControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UUWindowLabelControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UUWindowLabelControl_execCreated_Parms
{
};

// *****************************************************************************
// UUWindowLabelControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UUWindowLabelControl : public UUWindowDialogControl
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
