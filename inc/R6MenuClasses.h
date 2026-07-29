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
** Unreal native C++ headers for the R6Menu package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6MENU_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

enum eCreateGameWindow_ID{
	 eCGW_NotDefine=0
	,eCGW_Opt=1
	,eCGW_Camera=2
	,eCGW_MapList=3
	,eCGW_Password=4
	,eCGW_AdminPassword=5
	,eCGW_LeftAdvOpt=6
	,eCGW_RightAdvOpt=7
};

// -----------------------------------------------------------------------------
// FstServerGameOpt ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstServerGameOpt
{
public:
	class UUWindowWindow* pGameOptList;                                   //0
	BYTE eGameMode;                                                       //0
	BYTE eCGWindowID;                                                     //0
};
struct UR6MenuMPCreateGameTab_execManageR6ButtonAndEditBoxNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execManageR6ButtonBoxNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execManageR6ButtonNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	BITFIELD bProcessNotify : 1;                                              //0
};
struct UR6MenuMPCreateGameTab_execSetServerOptions_Parms
{
};
struct UR6MenuMPCreateGameTab_execRefreshCGButtons_Parms
{
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTab_execRefreshServerOpt_Parms
{
	BITFIELD _bNewServerProfile : 1;                                          //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execSendNewServerSettings_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPCreateGameTab_execSendNewMapSettings_Parms
{
	BYTE _bMapCount;                                                          //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPCreateGameTab_execRefresh_Parms
{
};
struct UR6MenuMPCreateGameTab_execGetCurrentGameMode_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPCreateGameTab_execSetCurrentGameMode_Parms
{
	BYTE _eGameMode;                                                          //CPF_Parm
	BITFIELD _bAdviceLinkWindow : 1;                                          //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTab_execUpdateMenuOptions_Parms
{
	INT _iButID;                                                              //CPF_Parm
	BITFIELD _bNewValue : 1;                                                  //CPF_Parm
	class UR6WindowListGeneral* _pOptionsList;                                //CPF_Parm
	BITFIELD _bChangeByUserClick : 1;                                         //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execGetList_Parms
{
	BYTE _eGameMode;                                                          //CPF_Parm
	BYTE _eCGWindowID;                                                        //CPF_Parm
	class UUWindowWindow* ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTab_execAddWindowInCreateGameArray_Parms
{
	struct FstServerGameOpt _NewList;                                         //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execAddLinkWindow_Parms
{
	class UR6MenuMPCreateGameTab* _pLinkWindow;                               //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execSetButtonAndEditBox_Parms
{
	BYTE _eCGW_ID;                                                            //CPF_Parm
	class FString _szEditBoxValue;                                            //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bSelected : 1;                                                  //CPF_Parm
	class UR6WindowButtonAndEditBox* pBut;                                    //0
};
struct UR6MenuMPCreateGameTab_execCreateButAndEditBox_Parms
{
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _W;                                                                 //CPF_Parm
	FLOAT _H;                                                                 //CPF_Parm
	class FString _szButName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _szButTip;                                                  //CPF_Parm|CPF_NeedCtorLink
	class FString _szCheckBoxTip;                                             //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowButtonAndEditBox* ReturnValue;                             //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowButtonAndEditBox* pNewBut;                                 //0
};
struct UR6MenuMPCreateGameTab_execUpdateButtons_Parms
{
	BYTE _eGameMode;                                                          //CPF_Parm
	BYTE _eCGWindowID;                                                        //CPF_Parm
	BITFIELD _bUpdateValue : 1;                                               //CPF_Parm
};
struct UR6MenuMPCreateGameTab_execCreateListOfButtons_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	BYTE _eGameMode;                                                          //CPF_Parm
	BYTE _eCGWindowID;                                                        //CPF_Parm
	struct FstServerGameOpt stNewSGOItem;                                     //0
	class UR6WindowListGeneral* pTempList;                                    //0
};
struct UR6MenuMPCreateGameTab_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPCreateGameTab (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPCreateGameTab : public UUWindowDialogClientWindow
{
public:
	BYTE m_eCurrentGameMode;                                                  //0
	BITFIELD m_bInitComplete : 1;                                             //0
	BITFIELD m_bNewServerProfile : 1;                                         //0
	BITFIELD m_bInGame : 1;                                                   //0
	class UR6MenuButtonsDefines* m_pButtonsDef;                               //0
	TArray<class UR6MenuMPCreateGameTab*> m_ALinkWindow;                      //CPF_NeedCtorLink
	TArray<struct FstServerGameOpt> m_AServerGameOpt;                         //CPF_NeedCtorLink
	TArray<BYTE> m_ANbOfGameMode;                                             //CPF_NeedCtorLink
	TArray<class FString> m_ALocGameMode;                                     //CPF_NeedCtorLink
};
struct UR6MenuWidget_execReset_Parms
{
};
struct UR6MenuWidget_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWidget_execSetMousePos_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6MenuWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuWidget : public UUWindowDialogClientWindow
{
public:
	FLOAT m_fLeftMouseXClipping;                                              //0
	FLOAT m_fLeftMouseYClipping;                                              //0
	FLOAT m_fRightMouseXClipping;                                             //0
	FLOAT m_fRightMouseYClipping;                                             //0
};
struct UR6MenuOptionsTab_execSetComboControlButton_Parms
{
	struct FRegion _RDefaultW;                                                //CPF_Parm
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szTip;                                                     //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowComboControl* ReturnValue;                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowComboControl* _pR6WindowComboControl;                      //0
};
struct UR6MenuOptionsTab_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuOptionsTab_execRestoreDefaultValue_Parms
{
};
struct UR6MenuOptionsTab_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6MenuOptionsTab_execUpdateOptionsInEngine_Parms
{
};
struct UR6MenuOptionsTab_execUpdateOptionsInPage_Parms
{
};
struct UR6MenuOptionsTab_execInitResetButton_Parms
{
};
struct UR6MenuOptionsTab_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsTab_execInitPageOptions_Parms
{
};
struct UR6MenuOptionsTab_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOptionsTab (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsTab : public UUWindowDialogClientWindow
{
public:
	BITFIELD m_bDrawLineOverButton : 1;                                       //0
	BITFIELD m_bInitComplete : 1;                                             //0
	BITFIELD m_bInGame : 1;                                                   //0
	class UR6WindowButton* m_pGeneralButUse;                                  //0
	struct FRegion SimpleBorderRegion;                                        //0
	class FString m_szGeneralButLoc;                                          //CPF_NeedCtorLink
	class FString m_szGeneralButTip;                                          //CPF_NeedCtorLink
};
struct UR6MenuPopupListButton_execChangeItemsSize_Parms
{
	FLOAT fNewWidth;                                                          //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuPopupListButton_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6WindowListButtonItem* pListButtonItem;                           //0
};
struct UR6MenuPopupListButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	class UUWindowList* CurItem;                                              //0
	class FColor lcolor;                                                      //0
};
struct UR6MenuPopupListButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
	INT i;                                                                    //0
	INT iCurrentNbButton;                                                     //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fMaxWidth;                                                          //0
	FLOAT fMaxHeight;                                                         //0
	BITFIELD bNeedRisize : 1;                                                 //0
};

// *****************************************************************************
// UR6MenuPopupListButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuPopupListButton : public UR6WindowListRadioButton
{
public:
	INT m_iNbButton;                                                          //0
	BITFIELD bInitialized : 1;                                                //0
	class UR6WindowListButtonItem* m_ButtonItem[10];                          //0
	class UTexture* m_SeperatorLineTexture;                                   //0
	class UFont* m_FontForButtons;                                            //0
	struct FRegion m_SeperatorLineRegion;                                     //0
};
struct UR6MenuMPCreateGameTabOptions_execManageComboControlNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class UR6MenuMapList* pCurrentMapList;                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execManageR6ButtonNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPCreateGameTabOptions_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	BITFIELD bProcessNotify : 1;                                              //0
};
struct UR6MenuMPCreateGameTabOptions_execSetServerOptions_Parms
{
	class UUWindowWindow* pCGWWindow;                                         //0
	class UR6WindowListGeneral* pListGen;                                     //0
	INT iCounter;                                                             //0
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class FString szSvrName;                                                  //CPF_NeedCtorLink
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class UR6ServerInfo* _ServerSettings;                                     //0
	class AR6MapList* myList;                                                 //0
	INT iButtonValue;                                                         //0
};
struct UR6MenuMPCreateGameTabOptions_execRefreshServerOpt_Parms
{
	BITFIELD _bNewServerProfile : 1;                                          //CPF_Parm
	INT iIndex;                                                               //0
	class UR6ServerInfo* pServerOpt;                                          //0
	class UR6MenuMapList* pCurrentMapList;                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execUpdateAllMapList_Parms
{
	class UR6MenuMapList* pTempList;                                          //0
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execUpdateMenuOptions_Parms
{
	INT _iButID;                                                              //CPF_Parm
	BITFIELD _bNewValue : 1;                                                  //CPF_Parm
	class UR6WindowListGeneral* _pOptionsList;                                //CPF_Parm
	BITFIELD _bChangeByUserClick : 1;                                         //CPF_Parm
	BITFIELD bButState : 1;                                                   //0
};
struct UR6MenuMPCreateGameTabOptions_execUpdateCamSpecialCase_Parms
{
	BITFIELD _bButtonSel : 1;                                                 //CPF_Parm
	BITFIELD _bUpdateDeathCam : 1;                                            //CPF_Parm
	BITFIELD bCamState : 1;                                                   //0
	BITFIELD bCamFirstPerson : 1;                                             //0
	BITFIELD bCamThirdPerson : 1;                                             //0
	BITFIELD bCamFreeThPerson : 1;                                            //0
	BITFIELD bCamGhost : 1;                                                   //0
	BITFIELD bCanTeamOnly : 1;                                                //0
	BITFIELD bCamGhostDis : 1;                                                //0
	class UR6WindowListGeneral* pCamList;                                     //0
};
struct UR6MenuMPCreateGameTabOptions_execGetCameraSelection_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pCameraList;                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bSelection : 1;                                                  //0
};
struct UR6MenuMPCreateGameTabOptions_execUpdateCamera_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	BITFIELD _bValue : 1;                                                     //CPF_Parm
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
	class UR6WindowListGeneral* _pCamList;                                    //CPF_Parm
	BITFIELD _bBackupValue : 1;                                               //CPF_Parm
};
struct UR6MenuMPCreateGameTabOptions_execGetCreateGamePassword_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6MenuMPCreateGameTabOptions_execIsAdminPasswordValid_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowButtonAndEditBox* pAdminPassword;                          //0
};
struct UR6MenuMPCreateGameTabOptions_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
	class UR6MenuSkinsSelection* pSkinsSelector;                              //0
	class UR6MenuMapListExt* pTempMapList;                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execPopUpSetSkins_Parms
{
	class UR6MenuSkinsSelection* pSkinsSelector;                              //0
};
struct UR6MenuMPCreateGameTabOptions_execPopUpMOTDEditionBox_Parms
{
	class UR6WindowEditBox* pR6EditBoxTemp;                                   //0
};
struct UR6MenuMPCreateGameTabOptions_execFillSelectedMapList_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuMapList* pCurrentMapList;                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execUpdateSkinButton_Parms
{
	class UR6MenuMapList* pMapList;                                           //0
};
struct UR6MenuMPCreateGameTabOptions_execInitEditSkinsButton_Parms
{
};
struct UR6MenuMPCreateGameTabOptions_execInitEditMsgButton_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
};
struct UR6MenuMPCreateGameTabOptions_execUpdateButtons_Parms
{
	BYTE _eGameMode;                                                          //CPF_Parm
	BYTE _eCGWindowID;                                                        //CPF_Parm
	BITFIELD _bUpdateValue : 1;                                               //CPF_Parm
	class UR6WindowListGeneral* pTempList;                                    //0
	class UR6ServerInfo* pServerInfo;                                         //0
};
struct UR6MenuMPCreateGameTabOptions_execInitAllMapList_Parms
{
	class UR6MenuMapList* pMapList;                                           //0
	struct FstServerGameOpt stNewSGOItem;                                     //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execInitAdminPassword_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	class UR6WindowButtonAndEditBox* pButton;                                 //0
	struct FstServerGameOpt stNewSGOItem;                                     //0
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execInitPassword_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	class UR6WindowButtonAndEditBox* pButton;                                 //0
	struct FstServerGameOpt stNewSGOItem;                                     //0
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execInitOptionsTab_Parms
{
	BITFIELD _bInGame : 1;                                                    //CPF_Parm
	struct FstServerGameOpt stNewSGOItem;                                     //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fSizeOfCounter;                                                     //0
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTabOptions_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPCreateGameTabOptions (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPCreateGameTabOptions : public UR6MenuMPCreateGameTab
{
public:
	BITFIELD m_bBkpCamFadeToBk : 1;                                           //0
	BITFIELD m_bBkpCamFirstPerson : 1;                                        //0
	BITFIELD m_bBkpCamThirdPerson : 1;                                        //0
	BITFIELD m_bBkpCamFreeThirdP : 1;                                         //0
	BITFIELD m_bBkpCamGhost : 1;                                              //0
	BITFIELD m_bBkpCamTeamOnly : 1;                                           //0
	BITFIELD m_bBkpTKPenalty : 1;                                             //0
	class UR6WindowTextLabelExt* m_pOptionsText;                              //0
	class UR6WindowComboControl* m_pOptionsGameMode;                          //0
	class UR6WindowEditControl* m_pServerNameEdit;                            //0
	class UR6WindowButton* m_pOptionsWelcomeMsg;                              //0
	class UR6WindowButton* m_pEditSkins;                                      //0
	class UR6WindowPopUpBox* m_pMsgOfTheDayPopUp;                             //0
	class UR6WindowPopUpBox* m_pPopUpChooseSkins;                             //0
	TArray<class FString> m_SelectedMapList;                                  //CPF_NeedCtorLink
	TArray<class FString> m_SelectedModeList;                                 //CPF_NeedCtorLink
	class FString m_szMsgOfTheDay;                                            //CPF_NeedCtorLink
};
struct UR6MenuLaptopWidget_execDrawLaptopFrame_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuLaptopWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuLaptopWidget_execSetMousePos_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fMouseX;                                                            //0
	FLOAT fMouseY;                                                            //0
};
struct UR6MenuLaptopWidget_execCreated_Parms
{
	class UR6MenuRSLookAndFeel* LAF;                                          //0
	struct FRegion R;                                                         //0
};

// *****************************************************************************
// UR6MenuLaptopWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLaptopWidget : public UR6MenuWidget
{
public:
	FLOAT m_fLaptopPadding;                                                   //0
	class UR6MenuNavigationBar* m_NavBar;                                     //0
	class UR6MenuHelpTextFrameBar* m_HelpTextBar;                             //0
	class UR6MenuSimpleWindow* m_EmptyBox1;                                   //0
	class UR6MenuSimpleWindow* m_EmptyBox2;                                   //0
	class UUWindowWindow* m_Right;                                            //0
	class UUWindowWindow* m_Left;                                             //0
	class UUWindowWindow* m_Bottom;                                           //0
	class UUWindowWindow* m_Top;                                              //0
	class UTexture* m_TBackGround;                                            //0
	struct FRegion m_RBackGround;                                             //0
};
struct UR6MenuFramePopup_execAjustPosition_Parms
{
	BITFIELD bDisplayUp : 1;                                                  //CPF_Parm
	BITFIELD bDisplayLeft : 1;                                                //CPF_Parm
};
struct UR6MenuFramePopup_execShowWindow_Parms
{
};
struct UR6MenuFramePopup_execResized_Parms
{
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
};
struct UR6MenuFramePopup_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	struct FRegion R;                                                         //0
	struct FRegion temp;                                                      //0
	class FColor iColor;                                                      //0
};
struct UR6MenuFramePopup_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6MenuFramePopup (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuFramePopup : public UR6WindowFramedWindow
{
public:
	INT m_iNbButton;                                                          //0
	INT m_iTeamColor;                                                         //0
	INT m_iFrameWidth;                                                        //0
	INT m_iTextureSize;                                                       //0
	BITFIELD m_bDisplayUp : 1;                                                //0
	BITFIELD m_bDisplayLeft : 1;                                              //0
	BITFIELD m_bInitialized : 1;                                              //0
	FLOAT m_fTitleBarHeight;                                                  //0
	FLOAT m_fTitleBarWidth;                                                   //0
	class UR6WindowListRadioButton* m_ButtonList;                             //0
	class UTexture* m_Texture;                                                //0
};
struct UR6MenuEscObjectives_execUpdateObjectives_Parms
{
	class AR6MissionObjectiveMgr* moMgr;                                      //0
	class UR6GameOptions* pGameOptions;                                       //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6MenuEscObjectives_execCreated_Parms
{
	INT i;                                                                    //0
	INT Y;                                                                    //0
};

// *****************************************************************************
// UR6MenuEscObjectives (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuEscObjectives : public UUWindowWindow
{
public:
	FLOAT m_fXTitleOffset;                                                    //0
	FLOAT m_fYTitleOffset;                                                    //0
	FLOAT m_fLabelHeight;                                                     //0
	FLOAT m_fObjHeight;                                                       //0
	FLOAT m_fObjYOffset;                                                      //0
	class UR6WindowTextLabel* m_Title;                                        //0
	class UR6WindowTextLabel* m_NoObj;                                        //0
	class UR6MenuObjectiveLabel* m_Objectives[10];                            //0
	class FString m_szTextFailed;                                             //CPF_NeedCtorLink
};
struct UR6MenuInGameEscSinglePlayerNavBar_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuInGameEscSinglePlayerNavBar_execSetTrainingNavbar_Parms
{
};
struct UR6MenuInGameEscSinglePlayerNavBar_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuInGameEscSinglePlayerNavBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuInGameEscSinglePlayerNavBar : public UUWindowDialogClientWindow
{
public:
	BITFIELD m_bInTraining : 1;                                               //0
	FLOAT m_fHelpTextHeight;                                                  //0
	FLOAT m_fButtonsYPos;                                                     //0
	FLOAT m_fExitXPos;                                                        //0
	FLOAT m_fMainMenuXPos;                                                    //0
	FLOAT m_fOptionsXPos;                                                     //0
	FLOAT m_fAbortXPos;                                                       //0
	FLOAT m_fContinueXPos;                                                    //0
	class UR6MenuMPInGameHelpBar* m_HelpTextBar;                              //0
	class UR6WindowButton* m_ExitButton;                                      //0
	class UR6WindowButton* m_MainMenuButton;                                  //0
	class UR6WindowButton* m_OptionsButton;                                   //0
	class UR6WindowButton* m_AbortButton;                                     //0
	class UR6WindowButton* m_ContinueButton;                                  //0
	class UTexture* m_TExitButton;                                            //0
	class UTexture* m_TMainMenuButton;                                        //0
	class UTexture* m_TOptionsButton;                                         //0
	class UTexture* m_TAbortButton;                                           //0
	class UTexture* m_TContinueButton;                                        //0
	class UTexture* m_TRetryTrainingButton;                                   //0
	struct FRegion m_RExitButtonUp;                                           //0
	struct FRegion m_RExitButtonDown;                                         //0
	struct FRegion m_RExitButtonDisabled;                                     //0
	struct FRegion m_RExitButtonOver;                                         //0
	struct FRegion m_RMainMenuButtonUp;                                       //0
	struct FRegion m_RMainMenuButtonDown;                                     //0
	struct FRegion m_RMainMenuButtonDisabled;                                 //0
	struct FRegion m_RMainMenuButtonOver;                                     //0
	struct FRegion m_ROptionsButtonUp;                                        //0
	struct FRegion m_ROptionsButtonDown;                                      //0
	struct FRegion m_ROptionsButtonDisabled;                                  //0
	struct FRegion m_ROptionsButtonOver;                                      //0
	struct FRegion m_RAbortButtonUp;                                          //0
	struct FRegion m_RAbortButtonDown;                                        //0
	struct FRegion m_RAbortButtonDisabled;                                    //0
	struct FRegion m_RAbortButtonOver;                                        //0
	struct FRegion m_RContinueButtonUp;                                       //0
	struct FRegion m_RContinueButtonDown;                                     //0
	struct FRegion m_RContinueButtonDisabled;                                 //0
	struct FRegion m_RContinueButtonOver;                                     //0
	struct FRegion m_RRetryTrainingButtonUp;                                  //0
	struct FRegion m_RRetryTrainingButtonDown;                                //0
	struct FRegion m_RRetryTrainingButtonDisabled;                            //0
	struct FRegion m_RRetryTrainingButtonOver;                                //0
};
struct UR6MenuOptionsMODS_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuOptionsMODS_execSetMenuMODS_Parms
{
	class UR6WindowListBoxItem* NewItem;                                      //0
	INT i;                                                                    //0
	class UR6ModMgr* pModManager;                                             //0
	class UR6Mod* pTempMod;                                                   //0
	class FString szInstallStatus;                                            //CPF_NeedCtorLink
};
struct UR6MenuOptionsMODS_execInitPageOptions_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
};

// *****************************************************************************
// UR6MenuOptionsMODS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsMODS : public UR6MenuOptionsTab
{
public:
	class UR6WindowListMODS* m_pListOfMods;                                   //0
	class UUWindowInfo* m_pInfo;                                              //0
};
struct UR6MenuMapList_execSetOrderButtons_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MenuMapList_execSetButtonRegion_Parms
{
	BITFIELD _bInverseTex : 1;                                                //CPF_Parm
};
struct UR6MenuMapList_execManageComboChange_Parms
{
	class UUWindowListBoxItem* Item;                                          //0
	class UUWindowComboListItem* pComboListItem;                              //0
};
struct UR6MenuMapList_execWindowStateChange_Parms
{
	class UUWindowListBoxItem* Item;                                          //0
};
struct UR6MenuMapList_execManageTextListBox_Parms
{
	class UUWindowListBoxItem* Item;                                          //0
	class UUWindowListBoxItem* NextItem;                                      //0
	class UUWindowListBoxItem* prevItem;                                      //0
};
struct UR6MenuMapList_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMapList_execFillGameTypeMapArray_Parms
{
	TArray<class FString> _SelectedMapList;                                   //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	TArray<class FString> _SelectedGameTypeList;                              //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* CurItem;                                       //0
	INT i;                                                                    //0
};
struct UR6MenuMapList_execFindMapInStartMapList_Parms
{
	class FString _szMapName;                                                 //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* CurItem;                                       //0
};
struct UR6MenuMapList_execCopyAndAddItemInList_Parms
{
	class UUWindowListBoxItem* _ItemToAdd;                                    //CPF_Parm
	class UUWindowListControl* _ListAddItem;                                  //CPF_Parm
	class UUWindowListBoxItem* NewItem;                                       //0
};
struct UR6MenuMapList_execManageAvailableGameTypes_Parms
{
	class UUWindowList* _pSelectItem;                                         //CPF_Parm
	BITFIELD _bKeepItemGameType : 1;                                          //CPF_Parm
	class UUWindowComboListItem* pComboListItem;                              //0
	class UR6MissionDescription* pCurMissionDesc;                             //0
	class FString szGameTypeFind;                                             //CPF_NeedCtorLink
	class FString szFirstGameTypeFound;                                       //CPF_NeedCtorLink
	class FString szItemGameType;                                             //CPF_NeedCtorLink
	class UR6Console* R6Console;                                              //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szEditBoxValue;                                             //CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD bUseSameGameType : 1;                                            //0
	class ALevelInfo* pLevel;                                                 //0
};
struct UR6MenuMapList_execInitMode_Parms
{
	class FString _szIndex;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString szGameTypeFind;                                             //CPF_NeedCtorLink
	class FString szFirstGameType;                                            //CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD bFindGameType : 1;                                               //0
	BITFIELD bFirstValue : 1;                                                 //0
	class ALevelInfo* pLevel;                                                 //0
};
struct UR6MenuMapList_execSetGameModeToDisplay_Parms
{
	class FString _szIndex;                                                   //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMapList_execFillFinalMapListInGame_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class UUWindowListBoxItem* NewItem;                                       //0
	INT i;                                                                    //0
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class AR6GameReplicationInfo* _GRI;                                       //0
	class ALevelInfo* pLevel;                                                 //0
};
struct UR6MenuMapList_execFillFinalMapList_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class UUWindowListBoxItem* NewItem;                                       //0
	INT i;                                                                    //0
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class UR6ServerInfo* pServerOpt;                                          //0
	class ALevelInfo* pLevel;                                                 //0
};
struct UR6MenuMapList_execIsFinalMapListEmpty_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMapList_execGetGameModeFromList_Parms
{
	class FString _szGameType;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
};
struct UR6MenuMapList_execGetNewServerProfileGameMode_Parms
{
	BITFIELD _bInGame : 1;                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class FString szResult;                                                   //CPF_NeedCtorLink
	class UR6ServerInfo* pServerOpt;                                          //0
	class AR6GameReplicationInfo* _GRI;                                       //0
};
struct UR6MenuMapList_execFillMapListItem_Parms
{
	class UR6WindowListBoxItem* NewItem;                                      //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	class FString szLocMapName;                                               //CPF_NeedCtorLink
	class UR6Console* R6Console;                                              //0
	class UR6MissionDescription* mission;                                     //0
	class ALevelInfo* pLevel;                                                 //0
	class FString szMod;                                                      //CPF_NeedCtorLink
	class FString szRavenShieldMod;                                           //CPF_NeedCtorLink
	BITFIELD bLoadMap : 1;                                                    //0
};
struct UR6MenuMapList_execCreateButtons_Parms
{
	struct FRegion RDisableRegion;                                            //0
	struct FRegion RNormalRegion;                                             //0
	struct FRegion ROverRegion;                                               //0
	FLOAT fHeight;                                                            //0
	FLOAT fButtonWidth;                                                       //0
	FLOAT fButtonHeight;                                                      //0
};
struct UR6MenuMapList_execCreated_Parms
{
	class UUWindowListBoxItem* CurItem;                                       //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fXSecondWindow;                                                     //0
};

// *****************************************************************************
// UR6MenuMapList (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMapList : public UUWindowDialogClientWindow
{
public:
	BYTE m_eMyGameMode;                                                       //0
	INT m_iTextIndex;                                                         //0
	BITFIELD m_bFromStartList : 1;                                            //0
	BITFIELD m_bInGame : 1;                                                   //0
	class UR6WindowTextLabelExt* m_pTextInfo;                                 //0
	class UR6WindowTextListBoxExt* m_pStartMapList;                           //0
	class UR6WindowTextListBoxExt* m_pFinalMapList;                           //0
	class UR6WindowComboControl* m_pGameTypeCombo;                            //0
	class UTexture* m_pButtonTexture;                                         //0
	class UUWindowButton* m_pSelectButton;                                    //0
	class UUWindowButton* m_pSubButton;                                       //0
	class UUWindowButton* m_pPlusButton;                                      //0
	struct FRegion m_RArrowUp;                                                //0
	struct FRegion m_RArrowDown;                                              //0
	struct FRegion m_RArrowDisabled;                                          //0
	struct FRegion m_RArrowOver;                                              //0
	class FString m_szLocGameMode;                                            //CPF_NeedCtorLink
};
struct UR6MenuHelpTextBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuHelpTextBar_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};

// *****************************************************************************
// UR6MenuHelpTextBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuHelpTextBar : public UUWindowWindow
{
public:
	FLOAT m_fTextX;                                                           //0
	FLOAT m_fTextY;                                                           //0
	class FString m_szText;                                                   //CPF_NeedCtorLink
	class FString m_szDefaultText;                                            //CPF_NeedCtorLink
};
struct UR6MenuEquipmentDetailControl_execShowWindow_Parms
{
};
struct UR6MenuEquipmentDetailControl_execSortDescriptions_Parms
{
	BITFIELD _bAscending : 1;                                                 //CPF_Parm
	TArray<class UClass*> Descriptions;                                       //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString LocalizationFile;                                           //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bUseTags : 1;                                                    //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
	class UClass* temp;                                                       //0
	BITFIELD bSwap : 1;                                                       //0
};
struct UR6MenuEquipmentDetailControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuEquipmentDetailControl_execChangePage_Parms
{
	INT _Page;                                                                //CPF_Parm
};
struct UR6MenuEquipmentDetailControl_execenableWeaponStats_Parms
{
	BITFIELD _enable : 1;                                                     //CPF_Parm
};
struct UR6MenuEquipmentDetailControl_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* WeaponGadgetDescriptionClass;                               //0
	class UClass* WeaponBulletDescriptionClass;                               //0
	class UClass* ArmorDescriptionClass;                                      //0
	class UClass* GadgetDescriptionClass;                                     //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class FString NewString;                                                  //CPF_NeedCtorLink
	INT itemPos;                                                              //0
	INT i;                                                                    //0
};
struct UR6MenuEquipmentDetailControl_execIsAmorAvailable_Parms
{
	class UClass* lookedUpArmor;                                              //CPF_Parm
	class UR6Operative* currentOperative;                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD bArmorIsAvailble : 1;                                            //0
};
struct UR6MenuEquipmentDetailControl_execGetDefaultArmor_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execBuildAvailableMissionArmors_Parms
{
	class UClass* ArmorDescriptionClass;                                      //0
	INT i;                                                                    //0
	INT nbArmor;                                                              //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6ModMgr* pModManager;                                             //0
};
struct UR6MenuEquipmentDetailControl_execCreateGadgetsSeparators_Parms
{
	class UR6WindowListBoxItem* ReturnValue;                                  //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6WindowListBoxItem* FirstInsertedItem;                            //0
};
struct UR6MenuEquipmentDetailControl_execCreateSecondaryWeaponsSeparators_Parms
{
	class UR6WindowListBoxItem* ReturnValue;                                  //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6WindowListBoxItem* FirstInsertedItem;                            //0
};
struct UR6MenuEquipmentDetailControl_execCreatePrimaryWeaponsSeparators_Parms
{
	class UR6WindowListBoxItem* ReturnValue;                                  //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6WindowListBoxItem* FirstInsertedItem;                            //0
};
struct UR6MenuEquipmentDetailControl_execBuildAvailableEquipment_Parms
{
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* GadgetClass;                                                //0
	INT i;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
	INT j;                                                                    //0
};
struct UR6MenuEquipmentDetailControl_execUpdateAnchorButtons_Parms
{
	BYTE _AEType;                                                             //CPF_Parm
};
struct UR6MenuEquipmentDetailControl_execFillListBox_Parms
{
	INT _equipmentType;                                                       //CPF_Parm
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* WeaponBulletDescriptionClass;                               //0
	class UClass* GadgetClass;                                                //0
	class UClass* WeaponGadgetDescriptionClass;                               //0
	class UClass* ArmorDescriptionClass;                                      //0
	class UR6ArmorDescription* ArmorForAvailabilityTest;                      //0
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6WindowListBoxItem* FirstInsertedItem;                            //0
	class UR6Operative* currentOperative;                                     //0
	INT i;                                                                    //0
};
struct UR6MenuEquipmentDetailControl_execNotifyEquipmentChanged_Parms
{
	INT EquipmentSelected;                                                    //CPF_Parm
	class UClass* DecriptionClass;                                            //CPF_Parm
};
struct UR6MenuEquipmentDetailControl_execGetCurrentArmor_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execGetCurrentGadget_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execGetCurrentWeaponBullet_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execGetCurrentWeaponGadget_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execGetCurrentSecondaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execGetCurrentPrimaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execGetCurrentOperative_Parms
{
	class UR6Operative* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentDetailControl_execCreated_Parms
{
	class FColor labelFontColor;                                              //0
	class FColor co;                                                          //0
	class UTexture* BorderTexture;                                            //0
};

// *****************************************************************************
// UR6MenuEquipmentDetailControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuEquipmentDetailControl : public UUWindowDialogClientWindow
{
public:
	INT m_CurrentEquipmentType;                                               //0
	BITFIELD m_bDrawListBg : 1;                                               //0
	FLOAT m_fListBoxLabelHeight;                                              //0
	FLOAT m_fListBoxHeight;                                                   //0
	FLOAT m_fAnchorAreaHeight;                                                //0
	class UR6WindowTextLabel* m_Title;                                        //0
	class UR6WindowTextListBox* m_listBox;                                    //0
	class UR6WindowWrappedTextArea* m_EquipmentText;                          //0
	class UFont* m_DescriptionTextFont;                                       //0
	class UR6MenuEquipmentAnchorButtons* m_AnchorButtons;                     //0
	class UR6MenuWeaponStats* m_WeaponStats;                                  //0
	class UR6MenuWeaponDetailRadioArea* m_Buttons;                            //0
	TArray<class UClass*> m_APrimaryWeapons;                                  //CPF_NeedCtorLink
	TArray<class UClass*> m_ASecondaryWeapons;                                //CPF_NeedCtorLink
	TArray<class UClass*> m_AGadgets;                                         //CPF_NeedCtorLink
	TArray<class UClass*> m_AArmors;                                          //CPF_NeedCtorLink
	class FColor m_DescriptionTextColor;                                      //0
};
struct UR6MenuEquipmentSelectControl_execUpdateDetails_Parms
{
	struct FTexRegion TR;                                                     //0
};
struct UR6MenuEquipmentSelectControl_execGetCurrentArmor_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentSelectControl_execCenterGadgetTexture_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD Result : 1;                                                      //0
	class UR6MenuGearWidget* GearRoom;                                        //0
};
struct UR6MenuEquipmentSelectControl_execGetCurrentGadgetTex_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	struct FTexRegion ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentSelectControl_execGetCurrentWeaponBullet_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentSelectControl_execGetCurrentWeaponGadget_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentSelectControl_execGetCurrentSecondaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentSelectControl_execGetCurrentPrimaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuEquipmentSelectControl_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuEquipmentSelectControl_execsetHighLight_Parms
{
	class UR6WindowButtonGear* newButton;                                     //CPF_Parm
};
struct UR6MenuEquipmentSelectControl_execDisableControls_Parms
{
	BITFIELD _Disable : 1;                                                    //CPF_Parm
};
struct UR6MenuEquipmentSelectControl_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuEquipmentSelectControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuEquipmentSelectControl : public UUWindowDialogClientWindow
{
public:
	BITFIELD m_bDisableControls : 1;                                          //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fArmorWindowWidth;                                                //0
	FLOAT m_fPrimaryWindowHeight;                                             //0
	FLOAT m_fSecondaryWindowHeight;                                           //0
	FLOAT m_fPrimaryGadgetWindowHeight;                                       //0
	class UR6MenuGearPrimaryWeapon* m_2DWeaponPrimary;                        //0
	class UR6MenuGearSecondaryWeapon* m_2DWeaponSecondary;                    //0
	class UR6MenuGearGadget* m_2DGadgetPrimary;                               //0
	class UR6MenuGearGadget* m_2DGadgetSecondary;                             //0
	class UR6MenuGearArmor* m_2DArmor;                                        //0
	class UR6MenuAssignAllButton* m_AssignAllToAllButton;                     //0
	class UTexture* m_TAssignAllToAllButton;                                  //0
	class UR6WindowButtonGear* m_HighlightedButton;                           //0
	struct FRegion m_RAssignAllToAllUp;                                       //0
	struct FRegion m_RAssignAllToAllOver;                                     //0
	struct FRegion m_RAssignAllToAllDown;                                     //0
	struct FRegion m_RAssignAllToAllDisable;                                  //0
	class FColor m_DisableColor;                                              //0
	class FColor m_EnableColor;                                               //0
};
struct UR6MenuLegendPage_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6MenuLegendItem* pR6MenuLegendItem;                               //0
	class UR6WindowListButtonItem* pListButtonItem;                           //0
};
struct UR6MenuLegendPage_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	class UUWindowList* CurItem;                                              //0
	class FColor lcolor;                                                      //0
};
struct UR6MenuLegendPage_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
	INT i;                                                                    //0
	INT iCurrentNbButton;                                                     //0
	FLOAT fTitleHeight;                                                       //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fMaxWidth;                                                          //0
};
struct UR6MenuLegendPage_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLegendPage (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendPage : public UR6MenuPopupListButton
{
public:
	INT m_iTextureSize;                                                       //0
	INT m_iSpaceBetweenTextureNText;                                          //0
	INT m_iSpaceEnd;                                                          //0
	FLOAT m_fTitleWidth;                                                      //0
	class FString m_szPageTitle;                                              //CPF_Localized|CPF_NeedCtorLink
};
struct UR6MenuGearGadget_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuGearGadget_execCreated_Parms
{
};
struct UR6MenuGearGadget_execForceMouseOver_Parms
{
	BITFIELD _bForceMouseOver : 1;                                            //CPF_Parm
};
struct UR6MenuGearGadget_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuGearGadget_execSetButtonsStatus_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MenuGearGadget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuGearGadget_execSetGadgetTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};

// *****************************************************************************
// UR6MenuGearGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuGearGadget : public UUWindowDialogControl
{
public:
	BITFIELD m_bAssignAllButton : 1;                                          //0
	BITFIELD m_bCenterTexture : 1;                                            //0
	FLOAT m_2DGadgetWidth;                                                    //0
	class UR6MenuAssignAllButton* m_AssignAll;                                //0
	class UR6WindowButtonGear* m_2DGadget;                                    //0
};
struct UR6MenuGearPrimaryWeapon_execForceMouseOver_Parms
{
	BITFIELD _bForceMouseOver : 1;                                            //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execSetButtonsStatus_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execSetBulletTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execSetWeaponGadgetTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execSetWeaponTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuGearPrimaryWeapon_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuGearPrimaryWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuGearPrimaryWeapon : public UUWindowDialogControl
{
public:
	BITFIELD m_bAssignAllButton : 1;                                          //0
	BITFIELD m_bCenterTexture : 1;                                            //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_2DWeaponWidth;                                                    //0
	FLOAT m_2DWeaponHeight;                                                   //0
	FLOAT m_fBulletWidth;                                                     //0
	FLOAT m_2DBulletHeight;                                                   //0
	class UR6MenuAssignAllButton* m_AssignAll;                                //0
	class UR6WindowButtonGear* m_2DWeapon;                                    //0
	class UR6WindowButtonGear* m_2DBullet;                                    //0
	class UR6WindowButtonGear* m_2DWeaponGadget;                              //0
	class UTexture* m_LinesTexture;                                           //0
	struct FRegion m_LinesRegion;                                             //0
	class FColor m_InsideLinesColor;                                          //0
};
struct UR6MenuGearSecondaryWeapon_execForceMouseOver_Parms
{
	BITFIELD _bForceMouseOver : 1;                                            //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execSetButtonsStatus_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execSetBulletTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execSetWeaponGadgetTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execSetWeaponTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuGearSecondaryWeapon_execCreated_Parms
{
	FLOAT m_2DWeaponGadgetHeight;                                             //0
};

// *****************************************************************************
// UR6MenuGearSecondaryWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuGearSecondaryWeapon : public UUWindowDialogControl
{
public:
	BITFIELD m_bAssignAllButton : 1;                                          //0
	BITFIELD m_bCenterTexture : 1;                                            //0
	FLOAT m_2DWeaponWidth;                                                    //0
	FLOAT m_2DWeaponHeight;                                                   //0
	FLOAT m_2DBulletHeight;                                                   //0
	class UR6MenuAssignAllButton* m_AssignAll;                                //0
	class UR6WindowButtonGear* m_2DWeapon;                                    //0
	class UR6WindowButtonGear* m_2DBullet;                                    //0
	class UR6WindowButtonGear* m_2DWeaponGadget;                              //0
	class UTexture* m_LinesTexture;                                           //0
	struct FRegion m_LinesRegion;                                             //0
	class FColor m_InsideLinesColor;                                          //0
};
struct UR6MenuMPServerOption_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPServerOption_execSendNewMapSettings_Parms
{
	BYTE _bMapCount;                                                          //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class AR6GameReplicationInfo* R6GameRepInfo;                              //0
	class AR6PlayerController* pPlayContr;                                    //0
	class FString szCurrentSrvMap;                                            //CPF_NeedCtorLink
	class FString szMenuMap;                                                  //CPF_NeedCtorLink
	class FString szCurrentSrvGameType;                                       //CPF_NeedCtorLink
	class FString szMenuGameType;                                             //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT iTotFinalListItem;                                                    //0
	INT iTotGameRepItem;                                                      //0
	INT iTotalMax;                                                            //0
	INT iLastValidItem;                                                       //0
	INT iUpdate;                                                              //0
	BITFIELD bSettingsChange : 1;                                             //0
};
struct UR6MenuMPServerOption_execSendNewServerSettings_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6GameReplicationInfo* pGameRepInfo;                               //0
	class AR6PlayerController* pPlayContr;                                    //0
	class UR6WindowListGeneral* pTempButList;                                 //0
	class UR6WindowListGeneral* pTempCamList;                                 //0
	INT iTempValue;                                                           //0
	BITFIELD bTempValue : 1;                                                  //0
	BITFIELD bSettingsChange : 1;                                             //0
	BITFIELD bLogSettingsChange : 1;                                          //0
};
struct UR6MenuMPServerOption_execUpdateButtons_Parms
{
	BYTE _eGameMode;                                                          //CPF_Parm
	BYTE _eCGWindowID;                                                        //CPF_Parm
	BITFIELD _bUpdateValue : 1;                                               //CPF_Parm
	class UR6WindowListGeneral* pTempList;                                    //0
	class AR6GameReplicationInfo* pR6GameRepInfo;                             //0
};
struct UR6MenuMPServerOption_execRefreshServerOpt_Parms
{
	BITFIELD _bNewServerProfile : 1;                                          //CPF_Parm
	INT iIndex;                                                               //0
	class AR6GameReplicationInfo* pGameRepInfo;                               //0
	class UR6MenuMapList* pCurrentMapList;                                    //0
};
struct UR6MenuMPServerOption_execRefresh_Parms
{
};
struct UR6MenuMPServerOption_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPServerOption (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPServerOption : public UR6MenuMPCreateGameTabOptions
{
public:
	BITFIELD m_bServerSettingsChange : 1;                                     //0
	BITFIELD m_bImAnAdmin : 1;                                                //0
	class UUWindowWindow* m_pServerOptFakeW;                                  //0
	class UUWindowWindow* m_pServerOptFakeW2;                                 //0
	class UR6WindowTextLabel* m_InTheReleaseLabel;                            //0
};

enum eButLocalizationExt{
	 eBLE_None=0
	,eBLE_DisableToolTip=1
};

// -----------------------------------------------------------------------------
// FSTButton ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTButton
{
public:
	class FString szButtonName;                                           //CPF_NeedCtorLink
	class FString szTip;                                                  //CPF_NeedCtorLink
	FLOAT fWidth;                                                         //0
	FLOAT fHeight;                                                        //0
	INT iButtonID;                                                        //0
};
struct UR6MenuButtonsDefines_execAssociateButtons_Parms
{
	INT _iButtonID1;                                                          //CPF_Parm
	INT _iButtonID2;                                                          //CPF_Parm
	INT _iAssociateButCase;                                                   //CPF_Parm
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowList* ListItem;                                             //0
	class UR6WindowListGeneralItem* pItem1;                                   //0
	class UR6WindowListGeneralItem* pItem2;                                   //0
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execFindButtonItem_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* ListItem;                                             //0
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execAddFakeButton_Parms
{
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowWindow* _OwnerWindow;                                       //CPF_Parm
	class UR6WindowListGeneralItem* GeneralItem;                              //0
};
struct UR6MenuButtonsDefines_execIsButtonBoxDisabled_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execGetButtonBoxValue_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execChangeButtonBoxValue_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	BITFIELD _bNewValue : 1;                                                  //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	BITFIELD _bDisabled : 1;                                                  //CPF_Parm
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execAddButtonBox_Parms
{
	struct FSTButton _stButton;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bSelected : 1;                                                  //CPF_Parm
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowDialogClientWindow* _pParentWindow;                         //CPF_Parm
	class UR6WindowButtonBox* pR6WindowButtonBox;                             //0
	class UR6WindowListGeneralItem* GeneralItem;                              //0
};
struct UR6MenuButtonsDefines_execAddButtonBool_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	BITFIELD _bInitialValue : 1;                                              //CPF_Parm
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowWindow* _OwnerWindow;                                       //CPF_Parm
	struct FSTButton stButtonTemp;                                            //CPF_NeedCtorLink
	INT iInitialValue;                                                        //0
};
struct UR6MenuButtonsDefines_execSetButtonCounterUnlimited_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	BITFIELD _bUnlimitedCounterOnZero : 1;                                    //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execGetButtonCounterValue_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execChangeButtonCounterValue_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	INT _iNewValue;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	BITFIELD _bNotAcceptClick : 1;                                            //CPF_Parm
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execAddCounterButton_Parms
{
	struct FSTButton _stButton;                                               //CPF_Parm|CPF_NeedCtorLink
	INT _iMinValue;                                                           //CPF_Parm
	INT _iMaxValue;                                                           //CPF_Parm
	INT _iDefaultValue;                                                       //CPF_Parm
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowWindow* _pParentWindow;                                     //CPF_Parm
	class UR6WindowCounter* pR6WindowCounter;                                 //0
	class UR6WindowListGeneralItem* GeneralItem;                              //0
	class FString szLeftTip;                                                  //CPF_NeedCtorLink
	class FString szRightTip;                                                 //CPF_NeedCtorLink
};
struct UR6MenuButtonsDefines_execAddButtonInt_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	INT _iMin;                                                                //CPF_Parm
	INT _iMax;                                                                //CPF_Parm
	INT _iInitialValue;                                                       //CPF_Parm
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowWindow* _OwnerWindow;                                       //CPF_Parm
	struct FSTButton stButtonTemp;                                            //CPF_NeedCtorLink
};
struct UR6MenuButtonsDefines_execGetButtonComboValue_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execChangeButtonComboValue_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class FString _szNewValue;                                                //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	BITFIELD _bDisabled : 1;                                                  //CPF_Parm
	INT iTemFind;                                                             //0
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execAddItemInComboButton_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class FString _NewItem;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _SecondValue;                                               //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowListGeneral* _pListToUse;                                  //CPF_Parm
	class UR6WindowListGeneralItem* TempItem;                                 //0
};
struct UR6MenuButtonsDefines_execAddCombo_Parms
{
	struct FSTButton _stButton;                                               //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowDialogClientWindow* _pParentWindow;                         //CPF_Parm
	class UR6WindowComboControl* pR6WindowComboControl;                       //0
	class UR6WindowListGeneralItem* GeneralItem;                              //0
};
struct UR6MenuButtonsDefines_execAddButtonCombo_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _R6WindowListGeneral;                         //CPF_Parm
	class UUWindowWindow* _OwnerWindow;                                       //CPF_Parm
	struct FSTButton stButtonTemp;                                            //CPF_NeedCtorLink
};
struct UR6MenuButtonsDefines_execGetCounterTipLoc_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class FString _szLeftTip;                                                 //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString _szRightTip;                                                //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
};
struct UR6MenuButtonsDefines_execGetButtonLoc_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	BITFIELD _bTip : 1;                                                       //CPF_Parm
	BYTE _eBLE;                                                               //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szName;                                                     //CPF_NeedCtorLink
	class FString szTip;                                                      //CPF_NeedCtorLink
	class FString szExt;                                                      //CPF_NeedCtorLink
};
struct UR6MenuButtonsDefines_execSetButtonsSizes_Parms
{
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};

// *****************************************************************************
// UR6MenuButtonsDefines (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuButtonsDefines : public UUWindowWindow
{
public:
	FLOAT m_fWidth;                                                           //0
	FLOAT m_fHeight;                                                          //0
};
struct UR6MenuMPCreateGameTabAdvOptions_execSetServerOptions_Parms
{
	class UR6ServerInfo* _ServerSettings;                                     //0
	class UR6WindowListGeneral* pListGen;                                     //0
	BITFIELD bPBButtonValue : 1;                                              //0
};
struct UR6MenuMPCreateGameTabAdvOptions_execUpdateMenuOptions_Parms
{
	INT _iButID;                                                              //CPF_Parm
	BITFIELD _bNewValue : 1;                                                  //CPF_Parm
	class UR6WindowListGeneral* _pOptionsList;                                //CPF_Parm
	BITFIELD _bChangeByUserClick : 1;                                         //CPF_Parm
	BITFIELD bButState : 1;                                                   //0
};
struct UR6MenuMPCreateGameTabAdvOptions_execUpdateCamSpecialCase_Parms
{
	BITFIELD _bButtonSel : 1;                                                 //CPF_Parm
	BITFIELD _bUpdateDeathCam : 1;                                            //CPF_Parm
	BITFIELD bCamState : 1;                                                   //0
	BITFIELD bCamFirstPerson : 1;                                             //0
	BITFIELD bCamThirdPerson : 1;                                             //0
	BITFIELD bCamFreeThPerson : 1;                                            //0
	BITFIELD bCamGhost : 1;                                                   //0
	BITFIELD bCanTeamOnly : 1;                                                //0
	BITFIELD bCamGhostDis : 1;                                                //0
	class UR6WindowListGeneral* pCamList;                                     //0
};
struct UR6MenuMPCreateGameTabAdvOptions_execGetCameraSelection_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class UR6WindowListGeneral* _pCameraList;                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bSelection : 1;                                                  //0
};
struct UR6MenuMPCreateGameTabAdvOptions_execUpdateCamera_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	BITFIELD _bValue : 1;                                                     //CPF_Parm
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
	class UR6WindowListGeneral* _pCamList;                                    //CPF_Parm
	BITFIELD _bBackupValue : 1;                                               //CPF_Parm
};
struct UR6MenuMPCreateGameTabAdvOptions_execUpdateButtons_Parms
{
	BYTE _eGameMode;                                                          //CPF_Parm
	BYTE _eCGWindowID;                                                        //CPF_Parm
	BITFIELD _bUpdateValue : 1;                                               //CPF_Parm
	class UR6WindowListGeneral* pTempList;                                    //0
	class UR6ServerInfo* pServerInfo;                                         //0
};
struct UR6MenuMPCreateGameTabAdvOptions_execInitAdvOptionsTab_Parms
{
	BITFIELD _bInGame : 1;                                                    //CPF_Parm
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	INT i;                                                                    //0
};
struct UR6MenuMPCreateGameTabAdvOptions_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPCreateGameTabAdvOptions (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPCreateGameTabAdvOptions : public UR6MenuMPCreateGameTab
{
public:
	BITFIELD m_bBkpCamFadeToBk : 1;                                           //0
	BITFIELD m_bBkpCamFirstPerson : 1;                                        //0
	BITFIELD m_bBkpCamThirdPerson : 1;                                        //0
	BITFIELD m_bBkpCamFreeThirdP : 1;                                         //0
	BITFIELD m_bBkpCamGhost : 1;                                              //0
	BITFIELD m_bBkpCamTeamOnly : 1;                                           //0
	class UR6WindowTextLabelExt* m_pOptionsTextAdv;                           //0
};
struct UR6MenuMPMenuTab_execManageR6ButtonBoxNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPMenuTab_execManageR6ComboControlNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPMenuTab_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPMenuTab_execInitServerTab_Parms
{
	FLOAT fWidth;                                                             //0
	FLOAT fPreviousPos;                                                       //0
};
struct UR6MenuMPMenuTab_execInitFilterTab_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
};
struct UR6MenuMPMenuTab_execInitGameModeTab_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
};
struct UR6MenuMPMenuTab_execUpdateGameTypeFilter_Parms
{
	class UR6MenuMultiPlayerWidget* Menu;                                     //0
};

// *****************************************************************************
// UR6MenuMPMenuTab (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPMenuTab : public UUWindowDialogClientWindow
{
public:
	class UR6WindowTextLabelExt* m_pGameModeText;                             //0
	class UR6WindowButtonBox* m_pGameTypeDeadMatch;                           //0
	class UR6WindowButtonBox* m_pGameTypeTDeadMatch;                          //0
	class UR6WindowButtonBox* m_pGameTypeDisarmBomb;                          //0
	class UR6WindowButtonBox* m_pGameTypeHostageAdv;                          //0
	class UR6WindowButtonBox* m_pGameTypeEscort;                              //0
	class UR6WindowButtonBox* m_pGameTypeMission;                             //0
	class UR6WindowButtonBox* m_pGameTypeTerroHunt;                           //0
	class UR6WindowButtonBox* m_pGameTypeHostageCoop;                         //0
	class UR6WindowTextLabelExt* m_pFilterText;                               //0
	class UR6WindowButtonBox* m_pFilterUnlock;                                //0
	class UR6WindowButtonBox* m_pFilterFavorites;                             //0
	class UR6WindowButtonBox* m_pFilterDedicated;                             //0
	class UR6WindowButtonBox* m_pFilterPunkBuster;                            //0
	class UR6WindowButtonBox* m_pFilterNotEmpty;                              //0
	class UR6WindowButtonBox* m_pFilterNotFull;                               //0
	class UR6WindowButtonBox* m_pFilterResponding;                            //0
	class UR6WindowButtonBox* m_pFilterSameVersion;                           //0
	class UR6WindowComboControl* m_pFilterFasterThan;                         //0
	class UR6WindowTextLabelExt* m_pServerInfo;                               //0
};
struct UR6MenuMainWidget_execShowWindow_Parms
{
};
struct UR6MenuMainWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMainWidget_execCreated_Parms
{
	INT iRand;                                                                //0
	class UR6GameOptions* pGameOptions;                                       //0
};

// *****************************************************************************
// UR6MenuMainWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMainWidget : public UR6MenuWidget
{
public:
	FLOAT m_fButtonXpos;                                                      //0
	FLOAT m_fButtonWidth;                                                     //0
	FLOAT m_fButtonHeight;                                                    //0
	FLOAT m_fFirstButtonYpos;                                                 //0
	FLOAT m_fButtonOffset;                                                    //0
	class UR6WindowButtonMainMenu* m_ButtonSinglePlayer;                      //0
	class UR6WindowButtonMainMenu* m_ButtonCustomMission;                     //0
	class UR6WindowButtonMainMenu* m_ButtonMultiPlayer;                       //0
	class UR6WindowButtonMainMenu* m_ButtonTraining;                          //0
	class UR6WindowButtonMainMenu* m_ButtonOption;                            //0
	class UR6WindowButtonMainMenu* m_ButtonCredits;                           //0
	class UR6WindowButtonMainMenu* m_ButtonQuit;                              //0
	class UR6WindowTextLabel* m_Version;                                      //0
};

enum EMenuIntelButtonID{
	 ButtonControlID=0
	,ButtonClarkID=1
	,ButtonSweenyID=2
	,ButtonNewsID=3
	,ButtonMissionID=4
};
struct UR6MenuIntelWidget_execStopIntelWidgetSound_Parms
{
};
struct UR6MenuIntelWidget_execManageButtonSelection_Parms
{
	INT _eButtonSelection;                                                    //CPF_Parm
	BITFIELD bChangeText : 1;                                                 //0
	class UR6MissionDescription* CurrentMission;                              //0
};
struct UR6MenuIntelWidget_execSetMissionText_Parms
{
	class FString _szOriginal;                                                //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD bFindText : 1;                                                   //0
	class UR6MissionDescription* CurrentMission;                              //0
};
struct UR6MenuIntelWidget_execDisplayText_Parms
{
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	class UFont* _TextFont;                                                   //CPF_Parm
	class FColor _Color;                                                      //CPF_Parm
	class UR6WindowWrappedTextArea* _R6WindowWrappedTextArea;                 //CPF_Parm
};
struct UR6MenuIntelWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuIntelWidget_execShowWindow_Parms
{
	INT itempSpeaker;                                                         //0
	INT i;                                                                    //0
	class UR6MissionDescription* CurrentMission;                              //0
	class AR6MissionObjectiveMgr* moMgr;                                      //0
};
struct UR6MenuIntelWidget_execHideWindow_Parms
{
};
struct UR6MenuIntelWidget_execReset_Parms
{
};
struct UR6MenuIntelWidget_execCreated_Parms
{
	INT labelWidth;                                                           //0
};

// *****************************************************************************
// UR6MenuIntelWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuIntelWidget : public UR6MenuLaptopWidget
{
public:
	INT m_iCurrentSpeaker;                                                    //0
	BITFIELD m_bAddText : 1;                                                  //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fLaptopPadding;                                                   //0
	FLOAT m_fPaddingBetweenElements;                                          //0
	FLOAT m_fVideoLeft;                                                       //0
	FLOAT m_fVideoRight;                                                      //0
	FLOAT m_fVideoTop;                                                        //0
	FLOAT m_fVideoBottom;                                                     //0
	FLOAT m_fLabelHeight;                                                     //0
	FLOAT m_fSpeakerWidgetWidth;                                              //0
	FLOAT m_fSpeakerWidgetHeight;                                             //0
	FLOAT m_fRightTileModulo;                                                 //0
	FLOAT m_fLeftTileModulo;                                                  //0
	FLOAT m_fBottomTileModulo;                                                //0
	FLOAT m_fRightBGWidth;                                                    //0
	FLOAT m_fUpBGWidth;                                                       //0
	FLOAT m_fBottomHeight;                                                    //0
	class UR6WindowWrappedTextArea* m_SrcrollingTextArea;                     //0
	class UR6WindowWrappedTextArea* m_MissionObjectives;                      //0
	class UR6MenuVideo* m_MissionDesc;                                        //0
	class UR6WindowBitMap* m_2DSpeaker;                                       //0
	class UTexture* m_TSpeaker;                                               //0
	class UR6MenuIntelRadioArea* m_SpeakerControls;                           //0
	class UR6WindowTextLabel* m_CodeName;                                     //0
	class UR6WindowTextLabel* m_DateTime;                                     //0
	class UR6WindowTextLabel* m_Location;                                     //0
	class UTexture* m_Texture;                                                //0
	class UFont* m_labelFont;                                                 //0
	class UFont* m_R6Font14;                                                  //0
	class USound* m_sndPlayEvent;                                             //0
	struct FRegion m_RControl;                                                //0
	struct FRegion m_RClark;                                                  //0
	struct FRegion m_RSweeney;                                                //0
	struct FRegion m_RNewsWire;                                               //0
	struct FRegion m_RMissionOrder;                                           //0
	class FString m_szScrollingText;                                          //CPF_NeedCtorLink
};
struct UR6MenuPlanningWidget_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
};
struct UR6MenuPlanningWidget_execCloseAllPopup_Parms
{
};
struct UR6MenuPlanningWidget_execDisplayPathFlagPopUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD bDisplayUp : 1;                                                  //0
	BITFIELD bDisplayLeft : 1;                                                //0
};
struct UR6MenuPlanningWidget_execDisplayActionTypePopUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD bDisplayUp : 1;                                                  //0
	BITFIELD bDisplayLeft : 1;                                                //0
};
struct UR6MenuPlanningWidget_execKeyType_Parms
{
	INT iInputKey;                                                            //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuPlanningWidget_execSetMousePos_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fMouseX;                                                            //0
	FLOAT fMouseY;                                                            //0
};
struct UR6MenuPlanningWidget_execMouseMove_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
};
struct UR6MenuPlanningWidget_execRMouseUp_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
};
struct UR6MenuPlanningWidget_execRMouseDown_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
};
struct UR6MenuPlanningWidget_execLMouseUp_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
};
struct UR6MenuPlanningWidget_execLMouseDown_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
};
struct UR6MenuPlanningWidget_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
	struct FRegion TheRegion;                                                 //0
};
struct UR6MenuPlanningWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuPlanningWidget_execShowWindow_Parms
{
	class ALevelInfo* li;                                                     //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6GameOptions* pGameOptions;                                       //0
	class UR6MenuRootWindow* r6Root;                                          //0
};
struct UR6MenuPlanningWidget_execHide3DAndLegend_Parms
{
};
struct UR6MenuPlanningWidget_execHideWindow_Parms
{
	class ALevelInfo* li;                                                     //0
};
struct UR6MenuPlanningWidget_execResetTeams_Parms
{
	INT iWhatToReset;                                                         //CPF_Parm
};
struct UR6MenuPlanningWidget_execReset_Parms
{
};
struct UR6MenuPlanningWidget_execCreated_Parms
{
	INT i;                                                                    //0
	class UR6MenuRSLookAndFeel* LAF;                                          //0
	struct FRegion TheRegion;                                                 //0
	FLOAT fLaptopPadding;                                                     //0
	INT labelWidth;                                                           //0
	class UR6WindowWrappedTextArea* WrapTextArea;                             //0
};

// *****************************************************************************
// UR6MenuPlanningWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuPlanningWidget : public UR6MenuLaptopWidget
{
public:
	BITFIELD m_bPopUpMenuPoint : 1;                                           //0
	BITFIELD m_bPopUpMenuSpeed : 1;                                           //0
	BITFIELD m_bMoveUDByLaptop : 1;                                           //0
	BITFIELD m_bMoveRLByLaptop : 1;                                           //0
	BITFIELD m_bClosePopup : 1;                                               //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fLabelHeight;                                                     //0
	FLOAT m_fLMouseDownX;                                                     //0
	FLOAT m_fLMouseDownY;                                                     //0
	class UR6MenuPlanningBar* m_PlanningBar;                                  //0
	class UR6Menu3DViewOnOffButton* m_3DButton;                               //0
	class UR6MenuLegendButton* m_LegendButton;                                //0
	class UR6Window3DButton* m_3DWindow;                                      //0
	class UR6WindowLegend* m_LegendWindow;                                    //0
	class UR6WindowTextLabel* m_CodeName;                                     //0
	class UR6WindowTextLabel* m_DateTime;                                     //0
	class UR6WindowTextLabel* m_Location;                                     //0
	class UFont* m_labelFont;                                                 //0
	class UR6MenuActionPointMenu* m_PopUpMenuPoint;                           //0
	class UR6MenuModeMenu* m_PopUpMenuMode;                                   //0
	class UUWindowWindow* DEB_FocusedWindow;                                  //0
};
struct UR6MenuExecuteWidget_execGetTeamStart_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuExecuteWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT boxX;                                                               //0
};
struct UR6MenuExecuteWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuExecuteWidget_execUpdateTeamRoster_Parms
{
	INT i;                                                                    //0
	INT Y;                                                                    //0
	class UR6WindowTeamSummary* TeamSummarys[3];                              //0
	class UR6WindowButton* TeamSummaryButton[3];                              //0
	class UR6Operative* tmpOperative;                                         //0
	class UR6WindowTextIconsListBox* tmpListBox[3];                           //0
	class UR6WindowTextIconsListBox* currentListBox;                          //0
	class UR6WindowListBoxItem* tmpItem;                                      //0
	class UR6MenuRootWindow* r6Root;                                          //0
	BITFIELD bselectedSet : 1;                                                //0
};
struct UR6MenuExecuteWidget_execCalculatePlanningDetails_Parms
{
	class UR6PlanningInfo* PlanningInfo;                                      //0
	INT iWaypoint;                                                            //0
	INT iGoCode;                                                              //0
	INT i;                                                                    //0
	INT Y;                                                                    //0
	class UR6WindowTeamSummary* TeamSummarys[3];                              //0
};
struct UR6MenuExecuteWidget_execShowWindow_Parms
{
	class AR6MissionObjectiveMgr* moMgr;                                      //0
	INT i;                                                                    //0
	class FString szDescription;                                              //CPF_NeedCtorLink
	class UR6GameOptions* pGameOptions;                                       //0
	class UR6MissionDescription* CurrentMission;                              //0
};
struct UR6MenuExecuteWidget_execCreated_Parms
{
	FLOAT labelWidth;                                                         //0
	FLOAT fTeamSummaryYPos;                                                   //0
};

// *****************************************************************************
// UR6MenuExecuteWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuExecuteWidget : public UR6MenuLaptopWidget
{
public:
	FLOAT m_fObjWidth;                                                        //0
	FLOAT m_fObjHeight;                                                       //0
	FLOAT m_fMapWidth;                                                        //0
	FLOAT m_fTeamSummaryWidth;                                                //0
	FLOAT m_fTeamSummaryYPadding;                                             //0
	FLOAT m_fTeamSummaryXPadding;                                             //0
	FLOAT m_fTeamSummaryMaxHeight;                                            //0
	FLOAT m_fGoPlanningButtonX;                                               //0
	FLOAT m_fGoGameButtonX;                                                   //0
	FLOAT m_fObserverButtonX;                                                 //0
	FLOAT m_fButtonHeight;                                                    //0
	FLOAT m_fButtonAreaY;                                                     //0
	FLOAT m_fButtonY;                                                         //0
	class UR6WindowTextLabel* m_CodeName;                                     //0
	class UR6WindowTextLabel* m_DateTime;                                     //0
	class UR6WindowTextLabel* m_Location;                                     //0
	class UR6WindowWrappedTextArea* m_MissionObjectives;                      //0
	class UR6WindowBitMap* m_SmallMap;                                        //0
	class UR6WindowTeamSummary* m_RedSummary;                                 //0
	class UR6WindowTeamSummary* m_GreenSummary;                               //0
	class UR6WindowTeamSummary* m_GoldSummary;                                //0
	class UR6WindowButton* m_RedSummaryButton;                                //0
	class UR6WindowButton* m_GreenSummaryButton;                              //0
	class UR6WindowButton* m_GoldSummaryButton;                               //0
	class UR6WindowButton* m_GoPlanningButton;                                //0
	class UR6WindowButton* m_GoGameButton;                                    //0
	class UR6WindowButton* m_ObserverButton;                                  //0
	class UTexture* m_TObserverButton;                                        //0
	class UTexture* m_TGoPlanningButton;                                      //0
	class UTexture* m_TGoGameButton;                                          //0
	struct FRegion m_RGoPlanningButtonUp;                                     //0
	struct FRegion m_RGoPlanningButtonDown;                                   //0
	struct FRegion m_RGoPlanningButtonOver;                                   //0
	struct FRegion m_RGoPlanningButtonDisabled;                               //0
	struct FRegion m_RGoGameButtonUp;                                         //0
	struct FRegion m_RGoGameButtonDown;                                       //0
	struct FRegion m_RGoGameButtonOver;                                       //0
	struct FRegion m_RGoGameButtonDisabled;                                   //0
	struct FRegion m_RObserverButtonUp;                                       //0
	struct FRegion m_RObserverButtonDown;                                     //0
	struct FRegion m_RObserverButtonOver;                                     //0
	struct FRegion m_RObserverButtonDisabled;                                 //0
};

enum eWidgetID{
	 CampaignSelect=0
	,CampaignCreate=1
};
enum ECampaignButID{
	 ButtonResumeID=0
	,ButtonNewID=1
	,ButtonDeleteID=2
	,ButtonAccept=3
};
struct UR6MenuSinglePlayerWidget_execSetCurrentBut_Parms
{
	INT _iNewCurBut;                                                          //CPF_Parm
};
struct UR6MenuSinglePlayerWidget_execForceFontDownSizing_Parms
{
};
struct UR6MenuSinglePlayerWidget_execButtonsUsingDownSizeFont_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD Result : 1;                                                      //0
};
struct UR6MenuSinglePlayerWidget_execCreateButtons_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fYPos;                                                              //0
};
struct UR6MenuSinglePlayerWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuSinglePlayerWidget_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuSinglePlayerWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuSinglePlayerWidget_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuSinglePlayerWidget_execUpdateSelectedCampaign_Parms
{
	class UR6PlayerCampaign* _PlayerCampaign;                                 //CPF_Parm
	class UR6MenuCampaignDescription* tempVar;                                //0
	class UR6Campaign* CampaignType;                                          //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6WindowBitMap* mapBitmap;                                         //0
};
struct UR6MenuSinglePlayerWidget_execDeleteCurrentSelectedCampaign_Parms
{
};
struct UR6MenuSinglePlayerWidget_execTryCreatingCampaign_Parms
{
};
struct UR6MenuSinglePlayerWidget_execCampaignExists_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString temp;                                                       //CPF_NeedCtorLink
	class FString szDir;                                                      //CPF_NeedCtorLink
	class UR6MenuSinglePlayerCampaignCreate* R6PCC;                           //0
};
struct UR6MenuSinglePlayerWidget_execButtonClicked_Parms
{
	INT ButtonID;                                                             //CPF_Parm
};
struct UR6MenuSinglePlayerWidget_execswitchWidget_Parms
{
	BYTE newWidget;                                                           //CPF_Parm
};
struct UR6MenuSinglePlayerWidget_execHideWindow_Parms
{
};
struct UR6MenuSinglePlayerWidget_execShowWindow_Parms
{
};
struct UR6MenuSinglePlayerWidget_execCreated_Parms
{
	class UFont* ButtonFont;                                                  //0
	class UUWindowWrappedTextArea* localHelpZone;                             //0
	INT XPos;                                                                 //0
};

// *****************************************************************************
// UR6MenuSinglePlayerWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSinglePlayerWidget : public UR6MenuWidget
{
public:
	INT m_iFont;                                                              //0
	INT m_iSelectedButtonID;                                                  //0
	BITFIELD bShowLog : 1;                                                    //0
	class UR6WindowButton* m_ButtonMainMenu;                                  //0
	class UR6WindowButton* m_ButtonOptions;                                   //0
	class UR6WindowButton* m_ButtonStart;                                     //0
	class UR6WindowSimpleFramedWindow* m_Map;                                 //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6MenuSinglePlayerCampaignSelect* m_CampaignSelect;                //0
	class UR6WindowSimpleCurvedFramedWindow* m_CampaignCreate;                //0
	class UR6MenuHelpWindow* m_pHelpWindow;                                   //0
	class UR6FileManagerCampaign* m_pFileManager;                             //0
	class UR6WindowSimpleFramedWindow* m_CampaignDescription;                 //0
	class UR6WindowButton* m_pButResumeCampaign;                              //0
	class UR6WindowButton* m_pButNewCampaign;                                 //0
	class UR6WindowButton* m_pButDelCampaign;                                 //0
	class UR6WindowButton* m_pButCurrent;                                     //0
	class UFont* m_LeftButtonFont;                                            //0
	class UFont* m_LeftDownSizeFont;                                          //0
	class FColor m_HelpTextColor;                                             //0
	class FString m_ButtonStartText[2];                                       //CPF_NeedCtorLink
	class FString m_ButtonStartHelpText[2];                                   //CPF_NeedCtorLink
};
struct UR6MenuCustomMissionWidget_execForceFontDownSizing_Parms
{
};
struct UR6MenuCustomMissionWidget_execButtonsUsingDownSizeFont_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD Result : 1;                                                      //0
};
struct UR6MenuCustomMissionWidget_execCreateButtons_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fYPos;                                                              //0
};
struct UR6MenuCustomMissionWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6WindowBitMap* mapBitmap;                                         //0
};
struct UR6MenuCustomMissionWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCustomMissionWidget_execUpdateBackground_Parms
{
};
struct UR6MenuCustomMissionWidget_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuCustomMissionWidget_execInitCustomMission_Parms
{
	BITFIELD bCheckedRvSDir : 1;                                              //0
	BITFIELD bCheckCampaignMission : 1;                                       //0
	class FString szDir;                                                      //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT iFiles;                                                               //0
	class UR6MenuRootWindow* r6Root;                                          //0
	class UR6PlayerCampaign* MyCampaign;                                      //0
	class UR6Console* R6Console;                                              //0
};
struct UR6MenuCustomMissionWidget_execRefreshList_Parms
{
	INT i;                                                                    //0
	INT iCampaign;                                                            //0
	INT iMission;                                                             //0
	class UR6Console* R6Console;                                              //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6WindowListBoxItem* ItemToSelect;                                 //0
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class UR6MissionDescription* mission;                                     //0
};
struct UR6MenuCustomMissionWidget_execCampainMapExistInMapList_Parms
{
	class UR6MissionDescription* pMission;                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iMission;                                                             //0
};
struct UR6MenuCustomMissionWidget_execShowWindow_Parms
{
};
struct UR6MenuCustomMissionWidget_execGotoPlanning_Parms
{
	class UR6MenuRootWindow* r6Root;                                          //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6Console* R6Console;                                              //0
};
struct UR6MenuCustomMissionWidget_execValidateBeforePlanning_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuRootWindow* r6Root;                                          //0
};
struct UR6MenuCustomMissionWidget_execCreated_Parms
{
	class UFont* ButtonFont;                                                  //0
	class FColor co;                                                          //0
	class FColor TitleTextColor;                                              //0
	INT iFiles;                                                               //0
	INT i;                                                                    //0
	class FString szFileName;                                                 //CPF_NeedCtorLink
	BITFIELD bInTab : 1;                                                      //0
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6MenuRootWindow* r6Root;                                          //0
	INT XPos;                                                                 //0
};

// *****************************************************************************
// UR6MenuCustomMissionWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCustomMissionWidget : public UR6MenuWidget
{
public:
	INT CustomMissionGameType;                                                //CPF_Config
	BITFIELD bShowLog : 1;                                                    //0
	class UR6WindowButton* m_ButtonStart;                                     //0
	class UR6WindowButton* m_ButtonMainMenu;                                  //0
	class UR6WindowButton* m_ButtonOptions;                                   //0
	class UR6WindowSimpleFramedWindow* m_Map;                                 //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6WindowTextLabelCurved* m_LGameLevelTitle;                        //0
	class UR6WindowTextListBox* m_GameLevelBox;                               //0
	class UR6WindowSimpleCurvedFramedWindow* m_DifficultyArea;                //0
	class UR6FileManagerCampaign* m_pFileManager;                             //0
	class UR6MenuHelpWindow* m_pHelpWindow;                                   //0
	class UR6WindowButton* m_pButPraticeMission;                              //0
	class UR6WindowButton* m_pButLoneWolf;                                    //0
	class UR6WindowButton* m_pButTerroHunt;                                   //0
	class UR6WindowButton* m_pButHostageRescue;                               //0
	class UR6WindowButton* m_pButCurrent;                                     //0
	class UR6WindowSimpleFramedWindow* m_TerroArea;                           //0
	class UFont* m_LeftButtonFont;                                            //0
	class UFont* m_LeftDownSizeFont;                                          //0
	class FColor m_TitleTextColor;                                            //0
	class FString m_LastMapPlayed;                                            //CPF_NeedCtorLink
	class FString CustomMissionMap;                                           //CPF_Config|CPF_NeedCtorLink
};
struct UR6MenuTrainingWidget_execCreated_Parms
{
	class UFont* ButtonFont;                                                  //0
	INT XPos;                                                                 //0
	class UR6WindowBitMap* mapBitmap;                                         //0
};
struct UR6MenuTrainingWidget_execForceFontDownSizing_Parms
{
};
struct UR6MenuTrainingWidget_execButtonsUsingDownSizeFont_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD Result : 1;                                                      //0
};
struct UR6MenuTrainingWidget_execCreateButtons_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fYPos;                                                              //0
};
struct UR6MenuTrainingWidget_execStartTraining_Parms
{
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class UR6FileManagerPlanning* pFileManager;                               //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iNbTeam;                                                              //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szMenuMapName;                                              //CPF_NeedCtorLink
	class FString szSaveName;                                                 //CPF_NeedCtorLink
	class FString szLoadErrorMsg;                                             //CPF_NeedCtorLink
};
struct UR6MenuTrainingWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuTrainingWidget_execSetCurrentMissionInTraining_Parms
{
	class UR6MissionDescription* mission;                                     //0
	class UR6Console* R6Console;                                              //0
	INT iMission;                                                             //0
	class FString szMapName1;                                                 //CPF_NeedCtorLink
	class FString szMapName2;                                                 //CPF_NeedCtorLink
};
struct UR6MenuTrainingWidget_execCurrentSelectedButton_Parms
{
	class UR6WindowButton* _IwasPressed;                                      //CPF_Parm
	class UR6WindowBitMap* mapBitmap;                                         //0
};
struct UR6MenuTrainingWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTrainingWidget_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuTrainingWidget_execShowWindow_Parms
{
};

// *****************************************************************************
// UR6MenuTrainingWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTrainingWidget : public UR6MenuWidget
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	class UR6WindowButton* m_ButtonStart;                                     //0
	class UR6WindowButton* m_ButtonMainMenu;                                  //0
	class UR6WindowButton* m_ButtonOptions;                                   //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6MenuHelpWindow* m_pHelpWindow;                                   //0
	class UR6WindowSimpleFramedWindow* m_Map;                                 //0
	class UTexture* m_mapPreviews[9];                                         //0
	class UR6WindowButton* m_pButBasics;                                      //0
	class UR6WindowButton* m_pButShooting;                                    //0
	class UR6WindowButton* m_pButExplosives;                                  //0
	class UR6WindowButton* m_pButRoomClearing1;                               //0
	class UR6WindowButton* m_pButRoomClearing2;                               //0
	class UR6WindowButton* m_pButRoomClearing3;                               //0
	class UR6WindowButton* m_pButHostageRescue1;                              //0
	class UR6WindowButton* m_pButHostageRescue2;                              //0
	class UR6WindowButton* m_pButHostageRescue3;                              //0
	class UR6WindowButton* m_pButCurrent;                                     //0
	class UFont* m_LeftButtonFont;                                            //0
	class UFont* m_LeftDownSizeFont;                                          //0
	class FColor m_TitleTextColor;                                            //0
	class FString m_mapNames[9];                                              //CPF_NeedCtorLink
};

enum MultiPlayerTabID{
	 TAB_Lan_Server=0
	,TAB_Internet_Server=1
	,TAB_Game_Mode=2
	,TAB_Tech_Filter=3
	,TAB_Server_Info=4
};
enum eLoginSuccessAction{
	 eLSAct_None=0
	,eLSAct_JoinIP=1
	,eLSAct_Join=2
	,eLSAct_InternetTab=3
	,eLSAct_LaunchServer=4
	,eLSAct_CloseWindow=5
	,eLSAct_SwitchToInternetTab=6
};
enum eServerInfoID{
	 eServerInfoID_DeathMatch=0
	,eServerInfoID_TeamDeathMatch=1
	,eServerInfoID_Bomb=2
	,eServerInfoID_HostageAdv=3
	,eServerInfoID_Escort=4
	,eServerInfoID_Mission=5
	,eServerInfoID_Terrorist=6
	,eServerInfoID_HostageCoop=7
	,eServerInfoID_Defend=8
	,eServerInfoID_Recon=9
	,eServerInfoID_Unlocked=10
	,eServerInfoID_Favorites=11
	,eServerInfoID_Dedicated=12
	,eServerInfoID_PunkBuster=13
	,eServerInfoID_NotEmpty=14
	,eServerInfoID_NotFull=15
	,eServerInfoID_Responding=16
	,eServerInfoID_HasPlayer=17
	,eServerInfoID_SameVersion=18
};
struct UR6MenuMultiPlayerWidget_execResetMultiplayerMenu_Parms
{
	class AClientBeaconReceiver* _BeaconReceiver;                             //0
};
struct UR6MenuMultiPlayerWidget_execBackToMainMenu_Parms
{
	class AClientBeaconReceiver* _BeaconReceiver;                             //0
};
struct UR6MenuMultiPlayerWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execSendMessage_Parms
{
	BYTE eMessage;                                                            //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execInitRightClickMenu_Parms
{
};
struct UR6MenuMultiPlayerWidget_execInitSecondTabWindow_Parms
{
	FLOAT fWidth;                                                             //0
};
struct UR6MenuMultiPlayerWidget_execInitServerInfoOptions_Parms
{
	class UFont* ButtonFont;                                                  //0
	INT iFiles;                                                               //0
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6MenuMultiPlayerWidget_execInitServerInfoMap_Parms
{
	class UFont* ButtonFont;                                                  //0
	INT iFiles;                                                               //0
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6MenuMultiPlayerWidget_execInitServerInfoPlayer_Parms
{
	class UFont* ButtonFont;                                                  //0
	INT iFiles;                                                               //0
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6MenuMultiPlayerWidget_execInitServerList_Parms
{
	class UFont* ButtonFont;                                                  //0
	INT iFiles;                                                               //0
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6MenuMultiPlayerWidget_execInitFirstTabWindow_Parms
{
	FLOAT fWidth;                                                             //0
};
struct UR6MenuMultiPlayerWidget_execInitInfoBar_Parms
{
	FLOAT fWidth;                                                             //0
	FLOAT fPreviousPos;                                                       //0
};
struct UR6MenuMultiPlayerWidget_execInitButton_Parms
{
	class UFont* ButtonFont;                                                  //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	class UR6MenuButtonsDefines* pButtonsDef;                                 //0
};
struct UR6MenuMultiPlayerWidget_execInitText_Parms
{
};
struct UR6MenuMultiPlayerWidget_execResortServerList_Parms
{
	INT iCategory;                                                            //CPF_Parm
	BITFIELD _bAscending : 1;                                                 //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execUpdateFavorites_Parms
{
};
struct UR6MenuMultiPlayerWidget_execDisplayRightClickMenu_Parms
{
};
struct UR6MenuMultiPlayerWidget_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execPromptConnectionError_Parms
{
	class UR6MenuRootWindow* r6Root;                                          //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6MenuMultiPlayerWidget_execDelServerFromFavorites_Parms
{
};
struct UR6MenuMultiPlayerWidget_execAddServerToFavorites_Parms
{
};
struct UR6MenuMultiPlayerWidget_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execQueryReceivedStartPreJoin_Parms
{
	BITFIELD bRoomValid : 1;                                                  //0
};
struct UR6MenuMultiPlayerWidget_execJoinSelectedServerRequested_Parms
{
	INT iBeaconPort;                                                          //0
};
struct UR6MenuMultiPlayerWidget_execQuickJoin_Parms
{
};
struct UR6MenuMultiPlayerWidget_execClearServerInfo_Parms
{
};
struct UR6MenuMultiPlayerWidget_execGetServerInfo_Parms
{
	class UR6ServerList* pServerList;                                         //CPF_Parm
	class UR6WindowListInfoPlayerItem* NewItemPlayer;                         //0
	class UR6WindowListInfoMapItem* NewItemMap;                               //0
	class UR6WindowListInfoOptionsItem* NewItemOptions;                       //0
	class UR6MenuButtonsDefines* pButtonsDef;                                 //0
	INT i;                                                                    //0
	INT iNum;                                                                 //0
};
struct UR6MenuMultiPlayerWidget_execGetGSServers_Parms
{
	class UR6WindowListServerItem* NewItem;                                   //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iNumServers;                                                          //0
	INT iNumServersDisplay;                                                   //0
	class FString szSelSvrIP;                                                 //CPF_NeedCtorLink
	BITFIELD bFirstSvr : 1;                                                   //0
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class ALevelInfo* pLevel;                                                 //0
	class UR6Console* Console;                                                //0
	INT iNbPages;                                                             //0
	INT iStartingIndex;                                                       //0
	INT iEndIndex;                                                            //0
	struct FstGameServer _stGameServer;                                       //CPF_NeedCtorLink
};
struct UR6MenuMultiPlayerWidget_execGetLanServers_Parms
{
	class UR6WindowListServerItem* NewItem;                                   //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iNumServers;                                                          //0
	INT iNumServersDisplay;                                                   //0
	class FString szSelSvrIP;                                                 //CPF_NeedCtorLink
	BITFIELD bFirstSvr : 1;                                                   //0
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class ALevelInfo* pLevel;                                                 //0
	class UR6Console* Console;                                                //0
	INT iNbPages;                                                             //0
	INT iStartingIndex;                                                       //0
	INT iEndIndex;                                                            //0
	struct FstGameServer _stGameServer;                                       //CPF_NeedCtorLink
};
struct UR6MenuMultiPlayerWidget_execRefresh_Parms
{
	BITFIELD bActivatedByUser : 1;                                            //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMultiPlayerWidget_execUpdateFilters_Parms
{
	class UR6ModMgr* pModMgr;                                                 //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iNbOfServers;                                                         //0
	BITFIELD bFound : 1;                                                      //0
	BITFIELD bIsRavenShield : 1;                                              //0
	BITFIELD bIsLanServers : 1;                                               //0
	class FString szCurrentMod;                                               //CPF_NeedCtorLink
	class FString szTempGDGameType;                                           //CPF_NeedCtorLink
	struct FstGameServer stTempGameServerItem;                                //CPF_NeedCtorLink
};
struct UR6MenuMultiPlayerWidget_execUpdateServerFilters_Parms
{
};
struct UR6MenuMultiPlayerWidget_execSetServerFilterFasterThan_Parms
{
	INT iFasterThan;                                                          //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execSetServerFilterBooleans_Parms
{
	INT _iServerInfoID;                                                       //CPF_Parm
	BITFIELD _bNewChoice : 1;                                                 //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execManageTabSelection_Parms
{
	INT _MPTabChoiceID;                                                       //CPF_Parm
};
struct UR6MenuMultiPlayerWidget_execManageToolTip_Parms
{
	class FString _strTip;                                                    //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bForceATip : 1;                                                 //CPF_Parm
	class FString szTemp1;                                                    //CPF_NeedCtorLink
	class FString szTemp2;                                                    //CPF_NeedCtorLink
	INT iNbOfServers;                                                         //0
};
struct UR6MenuMultiPlayerWidget_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMultiPlayerWidget_execShowWindow_Parms
{
	class FString _szIPAddress;                                               //CPF_NeedCtorLink
};
struct UR6MenuMultiPlayerWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6WindowTextLabel* pR6TextLabelTemp;                               //0
};
struct UR6MenuMultiPlayerWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMultiPlayerWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMultiPlayerWidget : public UR6MenuWidget
{
public:
	BYTE m_ConnectionTab;                                                     //0
	BYTE m_FilterTab;                                                         //0
	BYTE m_LoginSuccessAction;                                                //0
	INT m_FrameCounter;                                                       //0
	INT m_iTimeLastUpdate;                                                    //0
	INT m_iLastSortCategory;                                                  //0
	INT m_iLastTabSel;                                                        //CPF_Config
	INT m_iTotalPlayers;                                                      //0
	INT m_iFilterFasterThan;                                                  //CPF_Config
	BITFIELD m_bListUpdateReq : 1;                                            //0
	BITFIELD m_bLastTypeOfSort : 1;                                           //0
	BITFIELD m_bFPassWindowActv : 1;                                          //0
	BITFIELD m_bJoinIPInProgress : 1;                                         //0
	BITFIELD m_bQueryServerInfoInProgress : 1;                                //0
	BITFIELD m_bGetServerInfo : 1;                                            //0
	BITFIELD m_bLanRefreshFPass : 1;                                          //0
	BITFIELD m_bIntRefreshFPass : 1;                                          //0
	BITFIELD m_bNeedUpdateServerFilter : 1;                                   //0
	BITFIELD m_bFilterDeathMatch : 1;                                         //CPF_Config
	BITFIELD m_bFilterTeamDeathMatch : 1;                                     //CPF_Config
	BITFIELD m_bFilterDisarmBomb : 1;                                         //CPF_Config
	BITFIELD m_bFilterHostageRescueAdv : 1;                                   //CPF_Config
	BITFIELD m_bFilterEscortPilot : 1;                                        //CPF_Config
	BITFIELD m_bFilterMission : 1;                                            //CPF_Config
	BITFIELD m_bFilterTerroristHunt : 1;                                      //CPF_Config
	BITFIELD m_bFilterHostageRescueCoop : 1;                                  //CPF_Config
	BITFIELD m_bFilterUnlockedOnly : 1;                                       //CPF_Config
	BITFIELD m_bFilterFavoritesOnly : 1;                                      //CPF_Config
	BITFIELD m_bFilterDedicatedServersOnly : 1;                               //CPF_Config
	BITFIELD m_bFilterServersNotEmpty : 1;                                    //CPF_Config
	BITFIELD m_bFilterServersNotFull : 1;                                     //CPF_Config
	BITFIELD m_bFilterResponding : 1;                                         //CPF_Config
	BITFIELD m_bFilterSameVersion : 1;                                        //CPF_Config
	BITFIELD m_bFilterPunkBusterServerOnly : 1;                               //CPF_Config
	FLOAT m_fMouseX;                                                          //0
	FLOAT m_fMouseY;                                                          //0
	FLOAT m_fRefeshDeltaTime;                                                 //0
	FLOAT m_fLastUpdateServerFilterTime;                                      //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6WindowButton* m_ButtonMainMenu;                                  //0
	class UR6WindowButton* m_ButtonOptions;                                   //0
	class UR6WindowPageSwitch* m_PageCount;                                   //0
	class UR6WindowButtonMultiMenu* m_ButtonLogInOut;                         //0
	class UR6WindowButtonMultiMenu* m_ButtonJoin;                             //0
	class UR6WindowButtonMultiMenu* m_ButtonJoinIP;                           //0
	class UR6WindowButtonMultiMenu* m_ButtonRefresh;                          //0
	class UR6WindowButtonMultiMenu* m_ButtonCreate;                           //0
	class UR6WindowTextLabelCurved* m_FirstTabWindow;                         //0
	class UR6WindowTextLabelCurved* m_SecondTabWindow;                        //0
	class UR6WindowTextLabelExt* m_ServerDescription;                         //0
	class UR6MenuMPButServerList* m_pButServerList;                           //0
	class UR6MenuMPManageTab* m_pFirstTabManager;                             //0
	class UR6MenuMPManageTab* m_pSecondTabManager;                            //0
	class UR6MenuMPMenuTab* m_pSecondWindow;                                  //0
	class UR6MenuMPMenuTab* m_pSecondWindowGameMode;                          //0
	class UR6MenuMPMenuTab* m_pSecondWindowFilter;                            //0
	class UR6MenuMPMenuTab* m_pSecondWindowServerInfo;                        //0
	class UR6WindowSimpleFramedWindowExt* m_pFirstWindowBorder;               //0
	class UR6WindowSimpleFramedWindowExt* m_pSecondWindowBorder;              //0
	class UR6MenuHelpWindow* m_pHelpTextWindow;                               //0
	class UR6WindowServerListBox* m_ServerListBox;                            //0
	class UR6WindowServerInfoPlayerBox* m_ServerInfoPlayerBox;                //0
	class UR6WindowServerInfoMapBox* m_ServerInfoMapBox;                      //0
	class UR6WindowServerInfoOptionsBox* m_ServerInfoOptionsBox;              //0
	class UR6GSServers* m_GameService;                                        //0
	class UR6LanServers* m_LanServers;                                        //0
	class UUWindowListBoxItem* m_oldSelItem;                                  //0
	class UR6WindowUbiLogIn* m_pLoginWindow;                                  //0
	class UR6WindowJoinIP* m_pJoinIPWindow;                                   //0
	class UR6WindowQueryServerInfo* m_pQueryServerInfo;                       //0
	class UR6WindowRightClickMenu* m_pRightClickMenu;                         //0
	class FString m_szGamePwd;                                                //CPF_NeedCtorLink
	class FString m_szPopUpIP;                                                //CPF_Config|CPF_NeedCtorLink
	class FString m_szServerIP;                                               //CPF_NeedCtorLink
	class FString m_szMultiLoc[2];                                            //CPF_NeedCtorLink
};

enum eOptionsWindow{
	 OW_Game=0
	,OW_Sound=1
	,OW_Graphic=2
	,OW_Hud=3
	,OW_Multiplayer=4
	,OW_Controls=5
	,OW_MOD=6
	,OW_PatchService=7
};

// -----------------------------------------------------------------------------
// FstOptionsPage ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstOptionsPage
{
public:
	class UUWindowWindow* pOptionsPage;                                   //0
	class UR6WindowButtonOptions* pAssociateButton;                       //0
	class FString szPageTitle;                                            //CPF_NeedCtorLink
	BYTE ePageID;                                                         //0
};
struct UR6MenuOptionsWidget_execResizeAllOptionsButtons_Parms
{
};
struct UR6MenuOptionsWidget_execInitOptionsButtons_Parms
{
	class UFont* ButtonFont;                                                  //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fYPos;                                                              //0
};
struct UR6MenuOptionsWidget_execCreateAndAddPageOptionsToList_Parms
{
	class UClass* _PageToCreate;                                              //CPF_Parm
	class UR6WindowButtonOptions* _pAssociateButton;                          //CPF_Parm
	BYTE _ePageID;                                                            //CPF_Parm
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class UR6MenuOptionsTab* NewOptionsPage;                                  //0
	struct FstOptionsPage NewItem;                                            //CPF_NeedCtorLink
};
struct UR6MenuOptionsWidget_execInitOptionsWindow_Parms
{
};
struct UR6MenuOptionsWidget_execInitTitle_Parms
{
};
struct UR6MenuOptionsWidget_execMenuOptionsLoadProfile_Parms
{
};
struct UR6MenuOptionsWidget_execRefreshOptions_Parms
{
	INT i;                                                                    //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsWidget_execUpdateOptions_Parms
{
	INT i;                                                                    //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsWidget_execManageOptionsSelection_Parms
{
	INT _OptionsChoice;                                                       //CPF_Parm
	BYTE eCurrentPageDisplay;                                                 //0
	INT i;                                                                    //0
};
struct UR6MenuOptionsWidget_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOptionsWidget_execHideWindow_Parms
{
};
struct UR6MenuOptionsWidget_execShowWindow_Parms
{
};
struct UR6MenuOptionsWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOptionsWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsWidget : public UR6MenuWidget
{
public:
	BYTE m_eCurrentPageDisplay;                                               //0
	BITFIELD m_bInGame : 1;                                                   //0
	class UR6WindowTextLabelCurved* m_pOptionsTextLabel;                      //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6WindowSimpleFramedWindowExt* m_pOptionsBorder;                   //0
	class UR6MenuHelpWindow* m_pHelpWindow;                                   //0
	class UR6WindowButtonOptions* m_ButtonReturn;                             //0
	class UR6WindowButtonOptions* m_ButtonGame;                               //0
	class UR6WindowButtonOptions* m_ButtonSound;                              //0
	class UR6WindowButtonOptions* m_ButtonGraphic;                            //0
	class UR6WindowButtonOptions* m_ButtonHudFilter;                          //0
	class UR6WindowButtonOptions* m_ButtonMultiPlayer;                        //0
	class UR6WindowButtonOptions* m_ButtonControls;                           //0
	class UR6WindowButtonOptions* m_ButtonMODS;                               //0
	class UR6WindowButtonOptions* m_ButtonPatchService;                       //0
	class UFont* m_SmallButtonFont;                                           //0
	TArray<struct FstOptionsPage> m_AListOptionsPages;                        //CPF_NeedCtorLink
	class FString m_sDisplayLOGO;                                             //CPF_NeedCtorLink
};
struct UR6MenuCreditsWidget_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UR6MenuCreditsWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuCreditsWidget_execFillListOfCredits_Parms
{
	class UR6WindowListBoxCreditsItem* pItem;                                 //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UR6MenuCreditsWidget_execHideWindow_Parms
{
};
struct UR6MenuCreditsWidget_execShowWindow_Parms
{
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
};
struct UR6MenuCreditsWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6WindowRootWindow* R6WRoot;                                       //0
};
struct UR6MenuCreditsWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCreditsWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCreditsWidget : public UR6MenuWidget
{
public:
	INT m_IBottomVideoY;                                                      //0
	INT m_IBottomVideoH;                                                      //0
	INT m_IRightVideoX;                                                       //0
	INT m_IRightVideoTextX;                                                   //0
	INT m_IRightVideoW;                                                       //0
	INT m_ILeftVideoW;                                                        //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6WindowButton* m_ButtonMainMenu;                                  //0
	class UR6MenuCredits* m_ListOfCredits;                                    //0
	TArray<class FString> CreditsName;                                        //CPF_Config|CPF_NeedCtorLink
	struct FRegion m_RVideo;                                                  //0
};

enum e2DEquipment{
	 Primary_Weapon=0
	,Primary_WeaponGadget=1
	,Primary_Bullet=2
	,Primary_Gadget=3
	,Secondary_Weapon=4
	,Secondary_WeaponGadget=5
	,Secondary_Bullet=6
	,Secondary_Gadget=7
	,Armor=8
	,All_Primary=9
	,All_Secondary=10
	,All_PrimaryGadget=11
	,All_SecondaryGadget=12
	,All_Armor=13
	,All_ToAll=14
};
enum eOperativeTeam{
	 Red_Team=0
	,Green_Team=1
	,Gold_Team=2
	,No_Team=3
};
struct UR6MenuGearWidget_execIsTeamConfigValid_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuGearWidget_execLoadRosterFromStartInfo_Parms
{
	class AR6StartGameInfo* StartGameInfo;                                    //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
	INT L;                                                                    //0
	INT TeamIDs[8];                                                           //0
	class UR6WindowTextIconsSubListBox* tmpListBox[3];                        //0
	class UR6WindowTextIconsSubListBox* currentListBox;                       //0
	BITFIELD Found : 1;                                                       //0
	BITFIELD bOperativeIsNotReady : 1;                                        //0
	BITFIELD bRookieCase : 1;                                                 //0
	BITFIELD bIDMatch : 1;                                                    //0
	class UR6WindowListBoxItem* TempItem;                                     //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6WindowListBoxItem* bkpValidItem;                                 //0
	class UR6Operative* tmpOperative;                                         //0
	class UR6WindowListBoxItem* selectedOperativeItem;                        //0
	INT selectedOperativeTeamId;                                              //0
};
struct UR6MenuGearWidget_execSetStartTeamInfoForSaving_Parms
{
	class AR6StartGameInfo* StartGameInfo;                                    //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
	class UR6WindowTextIconsListBox* tmpListBox[3];                           //0
	class UR6WindowTextIconsListBox* currentListBox;                          //0
	class UR6Operative* tmpOperative;                                         //0
	class UR6WindowListBoxItem* tmpItem;                                      //0
	BITFIELD Found : 1;                                                       //0
};
struct UR6MenuGearWidget_execSetStartTeamInfo_Parms
{
	class AR6StartGameInfo* StartGameInfo;                                    //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
	INT rainbowAdded;                                                         //0
	class UR6WindowTextIconsListBox* tmpListBox[3];                           //0
	class UR6WindowTextIconsListBox* currentListBox;                          //0
	class UR6Operative* tmpOperative;                                         //0
	class UR6WindowListBoxItem* tmpItem;                                      //0
	class FString Tag;                                                        //CPF_NeedCtorLink
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* PrimaryWeaponBulletClass;                                   //0
	class UClass* SecondaryWeaponBulletClass;                                 //0
	class UClass* PrimaryGadgetClass;                                         //0
	class UClass* SecondaryGadgetClass;                                       //0
	class UClass* PrimaryWeaponGadgetClass;                                   //0
	class UClass* SecondaryWeaponGadgetClass;                                 //0
	class UClass* ArmorDescriptionClass;                                      //0
	BITFIELD Found : 1;                                                       //0
};
struct UR6MenuGearWidget_execGetGadgetTexture_Parms
{
	class UClass* _CurrentGadget;                                             //CPF_Parm
	struct FTexRegion ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bFound : 1;                                                      //0
	class FString Tag;                                                        //CPF_NeedCtorLink
	INT i;                                                                    //0
	struct FTexRegion TR;                                                     //0
};
struct UR6MenuGearWidget_execEquipmentChanged_Parms
{
	INT EquipmentSelected;                                                    //CPF_Parm
	class UClass* DecriptionClass;                                            //CPF_Parm
	class UClass* inDescriptionClass;                                         //0
};
struct UR6MenuGearWidget_execEquipmentSelected_Parms
{
	BYTE EquipmentSelected;                                                   //CPF_Parm
	class UR6WindowTextIconsListBox* listboxes[3];                            //0
	class UR6Operative* tmpOperative;                                         //0
	class UR6WindowListBoxItem* tmpItem;                                      //0
	INT i;                                                                    //0
};
struct UR6MenuGearWidget_execSetupOperative_Parms
{
	class UR6Operative* OpToChek;                                             //CPF_Parm|CPF_OutParm
	class UClass* currentArmor;                                               //0
};
struct UR6MenuGearWidget_execOperativeSelected_Parms
{
	class UR6Operative* selectedOperative;                                    //CPF_Parm
	BYTE _selectedTeam;                                                       //CPF_Parm
	class UUWindowWindow* _pActiveWindow;                                     //CPF_Parm
};
struct UR6MenuGearWidget_execReset_Parms
{
	class UR6MissionDescription* CurrentMission;                              //0
};
struct UR6MenuGearWidget_execShowWindow_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuGearWidget_execCreated_Parms
{
	INT labelWidth;                                                           //0
	struct FRegion R;                                                         //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
	class UClass* ExtraMags;                                                  //0
};

// *****************************************************************************
// UR6MenuGearWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuGearWidget : public UR6MenuLaptopWidget
{
public:
	BYTE m_currentOperativeTeam;                                              //0
	INT m_IRosterListLeftPad;                                                 //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fPaddingBetweenElements;                                          //0
	class UR6WindowTextLabel* m_CodeName;                                     //0
	class UR6WindowTextLabel* m_DateTime;                                     //0
	class UR6WindowTextLabel* m_Location;                                     //0
	class UFont* m_labelFont;                                                 //0
	class UR6MenuDynTeamListsControl* m_RosterListCtrl;                       //0
	class UR6MenuOperativeDetailControl* m_OperativeDetails;                  //0
	class UR6MenuEquipmentSelectControl* m_Equipment2dSelect;                 //0
	class UR6MenuEquipmentDetailControl* m_EquipmentDetails;                  //0
	class UR6Operative* m_currentOperative;                                   //0
	class UR6DescPrimaryMags* m_PrimaryMagsGadget;                            //0
	class UClass* m_OpFirstWeaponDesc;                                        //0
	class UClass* m_OpSecondaryWeaponDesc;                                    //0
	class UClass* m_OpFirstWeaponGadgetDesc;                                  //0
	class UClass* m_OpSecondWeaponGadgetDesc;                                 //0
	class UClass* m_OpFirstWeaponBulletDesc;                                  //0
	class UClass* m_OpSecondWeaponBulletDesc;                                 //0
	class UClass* m_OpFirstGadgetDesc;                                        //0
	class UClass* m_OpSecondGadgetDesc;                                       //0
	class UClass* m_OpArmorDesc;                                              //0
};

enum eRestrictionKit{
	 KIT_SubMachineGuns=0
	,KIT_Shotguns=1
};
enum eCreateGameTabID{
	 TAB_Options=0
	,TAB_AdvancedOptions=1
	,TAB_Kit=2
};
struct UR6MenuMPCreateGameWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPCreateGameWidget_execInitTabWindow_Parms
{
	FLOAT fWidth;                                                             //0
	FLOAT fYPos;                                                              //0
};
struct UR6MenuMPCreateGameWidget_execInitButton_Parms
{
	class UFont* ButtonFont;                                                  //0
	FLOAT fYOffset;                                                           //0
};
struct UR6MenuMPCreateGameWidget_execInitText_Parms
{
};
struct UR6MenuMPCreateGameWidget_execMenuServerLoadProfile_Parms
{
};
struct UR6MenuMPCreateGameWidget_execRefreshCreateGameMenu_Parms
{
};
struct UR6MenuMPCreateGameWidget_execManageTabSelection_Parms
{
	INT _MPTabChoiceID;                                                       //CPF_Parm
};
struct UR6MenuMPCreateGameWidget_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMPCreateGameWidget_execSendMessage_Parms
{
	BYTE eMessage;                                                            //CPF_Parm
};
struct UR6MenuMPCreateGameWidget_execShowWindow_Parms
{
};
struct UR6MenuMPCreateGameWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPCreateGameWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPCreateGameWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPCreateGameWidget : public UR6MenuWidget
{
public:
	BITFIELD m_bLoginInProgress : 1;                                          //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6WindowButton* m_ButtonMainMenu;                                  //0
	class UR6WindowButton* m_ButtonOptions;                                   //0
	class UR6WindowButtonMultiMenu* m_ButtonCancel;                           //0
	class UR6WindowButtonMultiMenu* m_ButtonLaunch;                           //0
	class UR6WindowTextLabelCurved* m_FirstTabWindow;                         //0
	class UR6MenuMPManageTab* m_pFirstTabManager;                             //0
	class UR6MenuMPCreateGameTab* m_pCreateTabWindow;                         //0
	class UR6MenuMPCreateGameTabOptions* m_pCreateTabOptions;                 //0
	class UR6MenuMPCreateGameTabKitRest* m_pCreateTabKit;                     //0
	class UR6MenuMPCreateGameTabAdvOptions* m_pCreateTabAdvOptions;           //0
	class UR6MenuHelpWindow* m_pHelpTextWindow;                               //0
	class UR6WindowSimpleFramedWindowExt* m_pWindowBorder;                    //0
	class UR6WindowUbiLogIn* m_pLoginWindow;                                  //0
};
struct UR6MenuUbiComWidget_execHideWindow_Parms
{
};
struct UR6MenuUbiComWidget_execShowWindow_Parms
{
};
struct UR6MenuUbiComWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuUbiComWidget_execCreated_Parms
{
	FLOAT fButtonXpos;                                                        //0
	FLOAT fButtonWidth;                                                       //0
	FLOAT fButtonHeight;                                                      //0
	FLOAT fFirstButtonYpos;                                                   //0
	FLOAT fButtonOffset;                                                      //0
};
struct UR6MenuUbiComWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuUbiComWidget_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6MenuUbiComWidget_execPromptConnectionError_Parms
{
	class UR6MenuRootWindow* r6Root;                                          //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6MenuUbiComWidget_execSendMessage_Parms
{
	BYTE eMessage;                                                            //CPF_Parm
	BYTE eJoinRoom;                                                           //0
	BITFIELD bRoomValid : 1;                                                  //0
	class FString _szIPAddress;                                               //CPF_NeedCtorLink
};
struct UR6MenuUbiComWidget_execProcessGSMsg_Parms
{
	class FString _szMsg;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuUbiComWidget_execSwitchToAppropriateMod_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	TArray<BYTE> AWIDList;                                                    //CPF_NeedCtorLink
	class UR6ModMgr* pModManager;                                             //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD bModExist : 1;                                                   //0
};
struct UR6MenuUbiComWidget_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
	class UR6ModMgr* pModManager;                                             //0
	class UR6GameManager* pGameMgr;                                           //0
	BITFIELD bRequestSrvInfo : 1;                                             //0
};

// *****************************************************************************
// UR6MenuUbiComWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuUbiComWidget : public UR6MenuWidget
{
public:
	BITFIELD m_bQueryServerInfoInProgress : 1;                                //0
	BITFIELD m_bIsACustomMod : 1;                                             //0
	BITFIELD m_bIsAnOfficialMod : 1;                                          //0
	class UR6GSServers* m_GameService;                                        //0
	class UR6WindowButtonMainMenu* m_ButtonQuit;                              //0
	class UR6WindowButtonMainMenu* m_ButtonReturn;                            //0
	class UR6MenuUbiComModsWidget* m_UbiComModsWidget;                        //0
	class UR6WindowQueryServerInfo* m_pQueryServerInfo;                       //0
	class FString m_szIPAddress;                                              //CPF_NeedCtorLink
};
struct UR6MenuNonUbiWidget_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6MenuNonUbiWidget_execPromptConnectionError_Parms
{
	class UR6MenuRootWindow* r6Root;                                          //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6MenuNonUbiWidget_execQueryReceivedStartPreJoin_Parms
{
	BYTE eJoinRoom;                                                           //0
	BITFIELD bRoomValid : 1;                                                  //0
};
struct UR6MenuNonUbiWidget_execSendMessage_Parms
{
	BYTE eMessage;                                                            //CPF_Parm
	class FString _szIPAddress;                                               //CPF_NeedCtorLink
};
struct UR6MenuNonUbiWidget_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UR6MenuNonUbiWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FString szTemp;                                                     //CPF_NeedCtorLink
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UR6MenuNonUbiWidget_execShowWindow_Parms
{
};
struct UR6MenuNonUbiWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuNonUbiWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuNonUbiWidget : public UR6MenuWidget
{
public:
	BITFIELD m_bLoginInProgress : 1;                                          //0
	BITFIELD m_bJoinIPInProgress : 1;                                         //0
	BITFIELD m_bQueryServerInfoInProgress : 1;                                //0
	BITFIELD m_bNonUbiMatchMakingClient : 1;                                  //0
	class UR6GSServers* m_GameService;                                        //0
	class UR6WindowUbiLogIn* m_pLoginWindow;                                  //0
	class UR6WindowJoinIP* m_pJoinIPWindow;                                   //0
	class UR6WindowQueryServerInfo* m_pQueryServerInfo;                       //0
	class FString m_szGamePwd;                                                //CPF_NeedCtorLink
};
struct UR6MenuQuit_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuQuit_execShowWindow_Parms
{
};
struct UR6MenuQuit_execHideWindow_Parms
{
};
struct UR6MenuQuit_execCreated_Parms
{
	class UFont* ButtonFont;                                                  //0
};

// *****************************************************************************
// UR6MenuQuit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuQuit : public UR6MenuWidget
{
public:
	class UR6WindowButton* m_ButtonMainMenu;                                  //0
	class UR6WindowButton* m_ButtonQuit;                                      //0
	class UR6MenuVideo* m_QuitVideo;                                          //0
};
struct UR6MenuActionPointMenu_execHideWindow_Parms
{
};
struct UR6MenuActionPointMenu_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuActionPointMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuActionPointMenu : public UR6MenuFramePopup
{
};
struct UR6MenuModeMenu_execHideWindow_Parms
{
};
struct UR6MenuModeMenu_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuModeMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuModeMenu : public UR6MenuFramePopup
{
};
struct UR6MenuInGameWritableMapWidget_execHideWindow_Parms
{
};
struct UR6MenuInGameWritableMapWidget_execShowWindow_Parms
{
};
struct UR6MenuInGameWritableMapWidget_execNotify_Parms
{
	class UUWindowDialogControl* Button;                                      //CPF_Parm
	BYTE Msg;                                                                 //CPF_Parm
};
struct UR6MenuInGameWritableMapWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT USize;                                                                //0
	INT VSize;                                                                //0
	class UTexture* mapTexture;                                               //0
};
struct UR6MenuInGameWritableMapWidget_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tX;                                                                 //0
	FLOAT tY;                                                                 //0
	class FVector V;                                                          //0
};
struct UR6MenuInGameWritableMapWidget_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuInGameWritableMapWidget_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuInGameWritableMapWidget_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FString szMsg;                                                      //CPF_NeedCtorLink
	class FColor C;                                                           //0
	INT iColorIndex;                                                          //0
};
struct UR6MenuInGameWritableMapWidget_execMouseLeave_Parms
{
};
struct UR6MenuInGameWritableMapWidget_execSendLineToTeam_Parms
{
	class FString Msg;                                                        //CPF_NeedCtorLink
	INT i;                                                                    //0
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	class FColor C;                                                           //0
	class ALevelInfo* pLevel;                                                 //0
};
struct UR6MenuInGameWritableMapWidget_execCreated_Parms
{
	INT iIconsCount;                                                          //0
	INT iPosX;                                                                //0
	struct FRegion ButtonRegion;                                              //0
};

// *****************************************************************************
// UR6MenuInGameWritableMapWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuInGameWritableMapWidget : public UR6MenuWidget
{
public:
	INT c_iNbOfIcons;                                                         //0
	BITFIELD m_bIsDrawing : 1;                                                //0
	class UR6ColorPicker* m_cColorPicker;                                     //0
	class UR6WindowRadioButton* m_Icons[16];                                  //0
	class UR6WindowRadioButton* m_CurrentSelectedIcon;                        //0
};
struct UR6MenuMPJoinTeamWidget_execHideWindow_Parms
{
};
struct UR6MenuMPJoinTeamWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPJoinTeamWidget_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMPJoinTeamWidget_execRefreshBitmaps_Parms
{
};
struct UR6MenuMPJoinTeamWidget_execCreateBitmaps_Parms
{
};
struct UR6MenuMPJoinTeamWidget_execCreateTextLabels_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTemp;                                                              //0
	FLOAT fSizeOfCounter;                                                     //0
};
struct UR6MenuMPJoinTeamWidget_execRefreshButtonsStatus_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPJoinTeamWidget_execRefreshButtons_Parms
{
	class FString _szCurrentGameType;                                         //CPF_Parm|CPF_NeedCtorLink
	FLOAT fSpectatorYPos;                                                     //0
};
struct UR6MenuMPJoinTeamWidget_execCreateButtons_Parms
{
	class UFont* ButtonFont;                                                  //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
};
struct UR6MenuMPJoinTeamWidget_execRefreshServerInfo_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPJoinTeamWidget_execSetMenuToDisplay_Parms
{
	class FString _szCurrentGameType;                                         //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMPJoinTeamWidget_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	class FString szAutoSelection;                                            //CPF_NeedCtorLink
};
struct UR6MenuMPJoinTeamWidget_execFillDescriptionArray_Parms
{
	class UClass* DescriptionClass;                                           //0
	INT i;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPJoinTeamWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPJoinTeamWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPJoinTeamWidget : public UR6MenuWidget
{
public:
	INT m_iYBetweenButtonPadding;                                             //0
	INT m_iButtonHeight;                                                      //0
	INT m_iButtonWidth;                                                       //0
	INT m_iSingleCharXPos;                                                    //0
	INT m_iSingleCharYPos;                                                    //0
	INT m_iLeftCharXPos;                                                      //0
	INT m_iLeftCharYPos;                                                      //0
	INT m_iRightCharXPos;                                                     //0
	INT m_iRightCharYPos;                                                     //0
	INT m_iBetweenCharXPos;                                                   //0
	INT m_iBetweenCharYPos;                                                   //0
	BITFIELD m_bIsTeamGame : 1;                                               //0
	FLOAT m_fTimeForRefresh;                                                  //0
	FLOAT m_fTimeAutoTeam;                                                    //0
	class UR6WindowButtonMPInGame* m_pButAlphaTeam;                           //0
	class UR6WindowButtonMPInGame* m_pButBravoTeam;                           //0
	class UR6WindowButtonMPInGame* m_pButAutoTeam;                            //0
	class UR6WindowButtonMPInGame* m_pButSpectator;                           //0
	class UR6WindowButtonMPInGame* m_pButCurrentSelected;                     //0
	class UR6WindowTextLabelExt* m_pInfoText;                                 //0
	class UR6MenuHelpWindow* m_pHelpTextWindow;                               //0
	class UR6WindowBitMap* m_SingleChar;                                      //0
	class UR6WindowBitMap* m_LeftChar;                                        //0
	class UR6WindowBitMap* m_RightChar;                                       //0
	class UR6WindowBitMap* m_BetweenCharIcon;                                 //0
	class UTexture* m_TBetweenChar;                                           //0
	class UTexture* m_TSpectatorChar;                                         //0
	class UTexture* m_TAlphaChar;                                             //0
	class UTexture* m_TBetaChar;                                              //0
	TArray<class UClass*> m_AArmorDescriptions;                               //CPF_NeedCtorLink
	struct FRegion m_pHelpReg;                                                //0
	struct FRegion m_RBetweenChar;                                            //0
	struct FRegion m_RSpectatorChar;                                          //0
	struct FRegion m_RAlphaChar;                                              //0
	struct FRegion m_RBetaChar;                                               //0
	class FString m_szMenuGreenTeamPawnClass;                                 //CPF_NeedCtorLink
	class FString m_szMenuRedTeamPawnClass;                                   //CPF_NeedCtorLink
};
struct UR6MenuMPInterWidget_execIsMissionSuccess_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInterWidget_execGetLastMissionSuccess_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInterWidget_execIsMissionInProgress_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInterWidget_execSetNavBarInActive_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
	BITFIELD _bError : 1;                                                     //CPF_Parm
};
struct UR6MenuMPInterWidget_execSetWindowSize_Parms
{
	class UUWindowWindow* _W;                                                 //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
};
struct UR6MenuMPInterWidget_execRefreshGearMenu_Parms
{
	BITFIELD _bForceUpdate : 1;                                               //CPF_Parm
	BITFIELD bForceUpdate : 1;                                                //0
};
struct UR6MenuMPInterWidget_execRefreshServerInfo_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInterWidget_execSetClientServerSettings_Parms
{
	BITFIELD _bChange : 1;                                                    //CPF_Parm
	class UR6MenuMPCreateGameTab* pServerOpt;                                 //0
	class UR6MenuMPRestKitMain* pKitRest;                                     //0
	BITFIELD bSetNewSettings : 1;                                             //0
	BYTE _bMapCount;                                                          //0
};
struct UR6MenuMPInterWidget_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6MenuMPInterWidget_execHideWindow_Parms
{
};
struct UR6MenuMPInterWidget_execForceClosePopUp_Parms
{
};
struct UR6MenuMPInterWidget_execPopUpKitRestMenu_Parms
{
	class UR6MenuMPRestKitMain* pR6MenuMPRestKitMain;                         //0
};
struct UR6MenuMPInterWidget_execPopUpServerOptMenu_Parms
{
};
struct UR6MenuMPInterWidget_execPopUpGearMenu_Parms
{
};
struct UR6MenuMPInterWidget_execSetInterWidgetMenu_Parms
{
	class FString _szCurrentGameType;                                         //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bActiveMenuBar : 1;                                             //CPF_Parm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	FLOAT fXPos;                                                              //0
	FLOAT fWidth;                                                             //0
	FLOAT fAvailableSpace;                                                    //0
	BITFIELD bActiveMenuBar : 1;                                              //0
};
struct UR6MenuMPInterWidget_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UR6MenuMPInterWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPInterWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInterWidget : public UR6MenuWidget
{
public:
	BYTE m_InGameOptionsChange;                                               //0
	INT m_Counter;                                                            //0
	BITFIELD m_bDisplayNavBar : 1;                                            //0
	BITFIELD m_bRefreshRestKit : 1;                                           //0
	BITFIELD m_bForceRefreshOfGear : 1;                                       //0
	BITFIELD m_bNavBarActive : 1;                                             //0
	FLOAT m_fYStartTeamBarPos;                                                //0
	class UR6MenuMPInterHeader* m_pMPInterHeader;                             //0
	class UR6MenuMPTeamBar* m_pR6AlphaTeam;                                   //0
	class UR6MenuMPTeamBar* m_pR6BravoTeam;                                   //0
	class UR6MenuMPTeamBar* m_pR6MissionObj;                                  //0
	class UR6MenuMPInGameNavBar* m_pInGameNavBar;                             //0
	class UR6WindowPopUpBox* m_pPopUpBoxCurrent;                              //0
	class UR6WindowPopUpBox* m_pPopUpGearRoom;                                //0
	class UR6WindowPopUpBox* m_pPopUpServerOption;                            //0
	class UR6WindowPopUpBox* m_pPopUpKitRest;                                 //0
	class FString m_szCurGameType;                                            //CPF_NeedCtorLink
};
struct UR6MenuMPInGameEsc_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct UR6MenuMPInGameEsc_execCreated_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	FLOAT fYNavBarPos;                                                        //0
};

// *****************************************************************************
// UR6MenuMPInGameEsc (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameEsc : public UR6MenuWidget
{
public:
	BITFIELD m_bExitGamePopUp : 1;                                            //0
	BITFIELD m_bEscAvailable : 1;                                             //0
	FLOAT m_fTimeForRefreshObj;                                               //0
	class UR6MenuMPInGameEscNavBar* m_pEscNavBar;                             //0
	class UR6MenuMPInGameObj* m_pInGameObj;                                   //0
};
struct UR6MenuMPInGameRecMessages_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	FLOAT fBkpOrgX;                                                           //0
	FLOAT fBkpOrgY;                                                           //0
};
struct UR6MenuMPInGameRecMessages_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6MenuInGameMultiPlayerRootWindow* RootWindow;                     //0
};
struct UR6MenuMPInGameRecMessages_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	INT i;                                                                    //0
};
struct UR6MenuMPInGameRecMessages_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPInGameRecMessages_execCreated_Parms
{
	class UR6WindowTextLabel* pR6TextLabelTemp;                               //0
	class FColor LabelTextColor;                                              //0
};

// *****************************************************************************
// UR6MenuMPInGameRecMessages (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameRecMessages : public UR6MenuWidget
{
public:
	BITFIELD m_bFirstTimePaint : 1;                                           //0
	FLOAT m_fOffsetTxtPos;                                                    //0
	class UR6WindowTextLabel* m_TextPreRecMessages[5];                        //0
	class UR6WindowPopUpBox* m_pInGameRecMessagesPopUp;                       //0
	struct FRegion m_RRecMsg;                                                 //0
};
struct UR6MenuMPInGameMsgOffensive_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	FLOAT fBkpOrgX;                                                           //0
	FLOAT fBkpOrgY;                                                           //0
};
struct UR6MenuMPInGameMsgOffensive_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6Rainbow* aRainbow;                                               //0
	class AR6PlayerController* aPC;                                           //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameMsgOffensive_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	INT i;                                                                    //0
};
struct UR6MenuMPInGameMsgOffensive_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPInGameMsgOffensive_execCreated_Parms
{
	class FColor LabelTextColor;                                              //0
};

// *****************************************************************************
// UR6MenuMPInGameMsgOffensive (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameMsgOffensive : public UR6MenuWidget
{
public:
	BITFIELD m_bFirstTimePaint : 1;                                           //0
	FLOAT m_fOffsetTxtPos;                                                    //0
	class UR6WindowTextLabel* m_TextOffensive[7];                             //0
	class UR6WindowPopUpBox* m_pInGameOffensivePopUp;                         //0
	struct FRegion m_RMsgSize;                                                //0
};
struct UR6MenuMPInGameMsgDefensive_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	FLOAT fBkpOrgX;                                                           //0
	FLOAT fBkpOrgY;                                                           //0
};
struct UR6MenuMPInGameMsgDefensive_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6Rainbow* aRainbow;                                               //0
	class AR6PlayerController* aPC;                                           //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameMsgDefensive_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	INT i;                                                                    //0
};
struct UR6MenuMPInGameMsgDefensive_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPInGameMsgDefensive_execCreated_Parms
{
	class FColor LabelTextColor;                                              //0
};

// *****************************************************************************
// UR6MenuMPInGameMsgDefensive (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameMsgDefensive : public UR6MenuWidget
{
public:
	BITFIELD m_bFirstTimePaint : 1;                                           //0
	FLOAT m_fOffsetTxtPos;                                                    //0
	class UR6WindowTextLabel* m_TextDefensive[7];                             //0
	class UR6WindowPopUpBox* m_pInGameGiveOrderPopUp;                         //0
	struct FRegion m_RMsgSize;                                                //0
};
struct UR6MenuMPInGameMsgReply_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPInGameMsgReply_execCreated_Parms
{
	class FColor LabelTextColor;                                              //0
};
struct UR6MenuMPInGameMsgReply_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	FLOAT fBkpOrgX;                                                           //0
	FLOAT fBkpOrgY;                                                           //0
};
struct UR6MenuMPInGameMsgReply_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6Rainbow* aRainbow;                                               //0
	class AR6PlayerController* aPC;                                           //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameMsgReply_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6MenuMPInGameMsgReply (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameMsgReply : public UR6MenuWidget
{
public:
	BITFIELD m_bFirstTimePaint : 1;                                           //0
	FLOAT m_fOffsetTxtPos;                                                    //0
	class UR6WindowTextLabel* m_TextReply[7];                                 //0
	class UR6WindowPopUpBox* m_pInGameReplyPopUp;                             //0
	struct FRegion m_RMsgSize;                                                //0
};
struct UR6MenuMPInGameMsgStatus_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	FLOAT fBkpOrgX;                                                           //0
	FLOAT fBkpOrgY;                                                           //0
};
struct UR6MenuMPInGameMsgStatus_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6Rainbow* aRainbow;                                               //0
	class AR6PlayerController* aPC;                                           //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameMsgStatus_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	INT i;                                                                    //0
};
struct UR6MenuMPInGameMsgStatus_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPInGameMsgStatus_execCreated_Parms
{
	class FColor LabelTextColor;                                              //0
};

// *****************************************************************************
// UR6MenuMPInGameMsgStatus (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameMsgStatus : public UR6MenuWidget
{
public:
	BITFIELD m_bFirstTimePaint : 1;                                           //0
	FLOAT m_fOffsetTxtPos;                                                    //0
	class UR6WindowTextLabel* m_TextStatus[7];                                //0
	class UR6WindowPopUpBox* m_pInGameStatusPopUp;                            //0
	struct FRegion m_RMsgSize;                                                //0
};
struct UR6MenuMPInGameVote_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	FLOAT fBkpOrgX;                                                           //0
	FLOAT fBkpOrgY;                                                           //0
};
struct UR6MenuMPInGameVote_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6MenuInGameMultiPlayerRootWindow* R6CurrentRoot;                  //0
	BITFIELD bCloseVoteMenu : 1;                                              //0
};
struct UR6MenuMPInGameVote_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FString szTitle;                                                    //CPF_NeedCtorLink
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	INT i;                                                                    //0
};
struct UR6MenuMPInGameVote_execCreated_Parms
{
	class UR6WindowTextLabel* pR6TextLabelTemp;                               //0
	class FColor LabelTextColor;                                              //0
};

// *****************************************************************************
// UR6MenuMPInGameVote (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameVote : public UR6MenuWidget
{
public:
	BITFIELD m_bFirstTimePaint : 1;                                           //0
	FLOAT m_fOffsetTxtPos;                                                    //0
	class UR6WindowTextLabel* m_AVoteText[4];                                 //0
	class UR6WindowPopUpBox* m_pPopUpBG;                                      //0
	struct FRegion m_RVote;                                                   //0
	class FString m_szPlayerNameToKick;                                       //CPF_NeedCtorLink
};
struct UR6MenuMPCountDown_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT iServerCountDownTime;                                                 //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPCountDown_execCreated_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};

// *****************************************************************************
// UR6MenuMPCountDown (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPCountDown : public UUWindowWindow
{
public:
	INT m_iLastValue;                                                         //0
	INT m_iFrameRefresh;                                                      //0
	class UR6WindowTextLabel* m_pCountDownLabel;                              //0
	class UR6WindowTextLabel* m_pCountDown;                                   //0
};
struct UR6MenuInGameOperativeSelectorWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT iOperative;                                                           //0
	INT iTeam;                                                                //0
	INT iPosX;                                                                //0
	INT iPosY;                                                                //0
	class FString szTeam;                                                     //CPF_NeedCtorLink
	FLOAT fTeamPosX;                                                          //0
	FLOAT fTeamPosY;                                                          //0
	class AR6Rainbow* P;                                                      //0
	class AR6TeamMemberReplicationInfo* pTeamMemberRepInfo;                   //0
};
struct UR6MenuInGameOperativeSelectorWidget_execHideWindow_Parms
{
	INT iOperativePos;                                                        //0
};
struct UR6MenuInGameOperativeSelectorWidget_execShowWindow_Parms
{
};
struct UR6MenuInGameOperativeSelectorWidget_execUpdateOperativeItems_Parms
{
	class AR6GameReplicationInfo* gameRepInfo;                                //0
	INT iOperative;                                                           //0
	INT iOperativeCount;                                                      //0
	INT iOperativePos;                                                        //0
	INT iPosX;                                                                //0
	INT iPosY;                                                                //0
	INT iTeam;                                                                //0
	class AR6RainbowTeam* MPTeam;                                             //0
	class AR6TeamMemberReplicationInfo* pTeamMemberRepInfo;                   //0
	class AR6Rainbow* P;                                                      //0
};

// *****************************************************************************
// UR6MenuInGameOperativeSelectorWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuInGameOperativeSelectorWidget : public UR6MenuWidget
{
public:
	INT c_OutsideMarginX;                                                     //0
	INT c_OutsideMarginY;                                                     //0
	INT c_InsideMarginX;                                                      //0
	INT c_InsideMarginY;                                                      //0
	INT c_ColumnWidth;                                                        //0
	INT c_RowHeight;                                                          //0
	BITFIELD m_bInitalized : 1;                                               //0
	BITFIELD m_bIsSinglePlayer : 1;                                           //0
	class USound* m_OperativeOpenSnd;                                         //0
	class UR6GameOptions* m_pGameOptions;                                     //0
	TArray<class UR6OperativeSelectorItem*> aItems;                           //CPF_NeedCtorLink
};
struct UR6MenuMPInGameObj_execUpdateObjectives_Parms
{
	class FString szObjectiveDesc;                                            //CPF_NeedCtorLink
	class FString szLocalization;                                             //CPF_NeedCtorLink
	INT i;                                                                    //0
	class AGameReplicationInfo* repInfo;                                      //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameObj_execSetNewObjWindowSizes_Parms
{
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _W;                                                                 //CPF_Parm
	FLOAT _H;                                                                 //CPF_Parm
	BITFIELD _bCoopType : 1;                                                  //CPF_Parm
	INT i;                                                                    //0
	INT iNbOfObj;                                                             //0
};
struct UR6MenuMPInGameObj_execCreateObjWindow_Parms
{
	INT Y;                                                                    //0
	INT iNbOfObj;                                                             //0
};
struct UR6MenuMPInGameObj_execCreated_Parms
{
	INT ITemp;                                                                //0
};

// *****************************************************************************
// UR6MenuMPInGameObj (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameObj : public UR6MenuEscObjectives
{
public:
	class UR6WindowWrappedTextArea* m_pGreenTeam;                             //0
	class UR6WindowWrappedTextArea* m_pRedTeam;                               //0
	TArray<class UR6MenuObjectiveLabel*> m_AObjectives;                       //CPF_NeedCtorLink
	class FString m_AAdvLoc[2];                                               //CPF_NeedCtorLink
};
struct UR6MenuMPInGameEscNavBar_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameEscNavBar_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPInGameEscNavBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameEscNavBar : public UR6MenuInGameEscSinglePlayerNavBar
{
public:
	class UTexture* m_TMPContinueButton;                                      //0
	struct FRegion m_RMPContinueButtonUp;                                     //0
	struct FRegion m_RMPContinueButtonDown;                                   //0
	struct FRegion m_RMPContinueButtonDisabled;                               //0
	struct FRegion m_RMPContinueButtonOver;                                   //0
	struct FRegion m_RPopUp;                                                  //0
};
struct UR6MPGameMenuCom_execGetPlayerDidASelection_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MPGameMenuCom_execIsInGame_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MPGameMenuCom_execGetNbOfTeamPlayer_Parms
{
	BITFIELD _bGreenTeam : 1;                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT iGreenTeam;                                                           //0
	INT iRedTeam;                                                             //0
	INT iNbOfPlayer;                                                          //0
	INT iIndex;                                                               //0
};
struct UR6MPGameMenuCom_execSetClientServerSettings_Parms
{
	BITFIELD _bCanChangeOptions : 1;                                          //CPF_Parm
};
struct UR6MPGameMenuCom_execNewServerState_Parms
{
	class AR6PlayerController* _localPlayer;                                  //0
};
struct UR6MPGameMenuCom_execSetVoteResult_Parms
{
	BITFIELD _bKickPlayer : 1;                                                //CPF_Parm
};
struct UR6MPGameMenuCom_execActiveVoteMenu_Parms
{
	BITFIELD _bActiveMenu : 1;                                                //CPF_Parm
	class FString _szPlayerNameToKick;                                        //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MPGameMenuCom_execCountDownPopUpBoxDone_Parms
{
};
struct UR6MPGameMenuCom_eventCountDownPopUpBox_Parms
{
};
struct UR6MPGameMenuCom_execTKPopUpDone_Parms
{
	BITFIELD _bApplyTeamKillerPenalty : 1;                                    //CPF_Parm
};
struct UR6MPGameMenuCom_execTKPopUpBox_Parms
{
	class FString _KillerName;                                                //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MPGameMenuCom_execGetGameType_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6MPGameMenuCom_execInitialisePlayerSetupInfo_Parms
{
};
struct UR6MPGameMenuCom_execSavePlayerSetupInfo_Parms
{
};
struct UR6MPGameMenuCom_execGeTTeamSelection_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FPlayerMenuInfo _PlayerMenuInfo;                                   //CPF_NeedCtorLink
};
struct UR6MPGameMenuCom_execIsInBetweenRoundMenu_Parms
{
	BITFIELD _bIncludeCMSInit : 1;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MPGameMenuCom_execSetReadyButton_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MPGameMenuCom_execRefreshReadyButtonStatus_Parms
{
};
struct UR6MPGameMenuCom_execSetPlayerReadyStatus_Parms
{
	BITFIELD _bPlayerReady : 1;                                               //CPF_Parm
};
struct UR6MPGameMenuCom_execDisconnectClient_Parms
{
	class ALevelInfo* _Level;                                                 //CPF_Parm
	class AUdpBeacon* aBeacon;                                                //0
};
struct UR6MPGameMenuCom_execSetupPlayerPrefs_Parms
{
	class FString Tag;                                                        //CPF_NeedCtorLink
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* PrimaryWeaponBulletClass;                                   //0
	class UClass* SecondaryWeaponBulletClass;                                 //0
	class UClass* PrimaryGadgetClass;                                         //0
	class UClass* SecondaryGadgetClass;                                       //0
	class UClass* PrimaryWeaponGadgetClass;                                   //0
	class UClass* SecondaryWeaponGadgetClass;                                 //0
	class UClass* ArmorDescriptionClass;                                      //0
	BITFIELD Found : 1;                                                       //0
	INT k;                                                                    //0
	class UClass* replaceGadgetClass;                                         //0
};
struct UR6MPGameMenuCom_execSetStatMenuState_Parms
{
	BYTE _eNewClientMenuState;                                                //CPF_Parm
	BITFIELD bCloseSimplePopUpBox : 1;                                        //0
};
struct UR6MPGameMenuCom_execIsAPlayerSelection_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MPGameMenuCom_execGetPlayerSelection_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MPGameMenuCom_execPlayerSelection_Parms
{
	BYTE newTeam;                                                             //CPF_Parm
};
struct UR6MPGameMenuCom_execSelectTeam_Parms
{
};

// *****************************************************************************
// UR6MPGameMenuCom (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MPGameMenuCom : public UR6GameMenuCom
{
public:
	class UR6MenuInGameMultiPlayerRootWindow* m_pCurrentRoot;                 //0
};
struct UR6MenuCDKeyManager_execSaveGameServiceConfig_Parms
{
};
struct UR6MenuCDKeyManager_execJoinServer_Parms
{
	class FString _szIPAddress;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString _szPassword;                                                //CPF_Parm|CPF_NeedCtorLink
	class UR6Console* pR6Console;                                             //0
	class FString szOptions;                                                  //CPF_NeedCtorLink
	class FString szCharacterName;                                            //CPF_NeedCtorLink
	class FString m_ArmorName;                                                //CPF_NeedCtorLink
	class FString m_WeaponNameOne;                                            //CPF_NeedCtorLink
	class FString m_WeaponGadgetNameOne;                                      //CPF_NeedCtorLink
	class FString m_BulletTypeOne;                                            //CPF_NeedCtorLink
	class FString m_WeaponNameTwo;                                            //CPF_NeedCtorLink
	class FString m_WeaponGadgetNameTwo;                                      //CPF_NeedCtorLink
	class FString m_BulletTypeTwo;                                            //CPF_NeedCtorLink
	class FString m_GadgetNameOne;                                            //CPF_NeedCtorLink
	class FString m_GadgetNameTwo;                                            //CPF_NeedCtorLink
	class FString szAllAuthID;                                                //CPF_NeedCtorLink
	INT iPlayerSpawnNumber;                                                   //0
};
struct UR6MenuCDKeyManager_execLaunchServer_Parms
{
	class UConsole* pConsole;                                                 //0
	class UR6Console* pR6Console;                                             //0
	class UR6MenuMPCreateGameTabOptions* pMPCreateGTOpt;                      //0
	struct FIpAddr _localAddr;                                                //0
};
struct UR6MenuCDKeyManager_execSendMessage_Parms
{
	BYTE eMessage;                                                            //CPF_Parm
};
struct UR6MenuCDKeyManager_execSetWindowUser_Parms
{
	BYTE _eGameWID;                                                           //CPF_Parm
	class UUWindowWindow* _ProcedureOwner;                                    //CPF_Parm
};
struct UR6MenuCDKeyManager_execProcessCDKeyMessage_Parms
{
	BYTE eMessage;                                                            //CPF_Parm
	class FString _szIPAddress;                                               //CPF_NeedCtorLink
};
struct UR6MenuCDKeyManager_execFinishCDKeyProcess_Parms
{
};
struct UR6MenuCDKeyManager_execStartCDKeyProcess_Parms
{
	BYTE _eJoinUbiComRoom;                                                    //CPF_Parm
	struct FPreJoinResponseInfo _preJResponseInfo;                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuCDKeyManager_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCDKeyManager (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCDKeyManager : public UUWindowWindow
{
public:
	BYTE m_eCurrentWID;                                                       //0
	BITFIELD m_bPreJoinInProgress : 1;                                        //0
	BITFIELD m_bShowManagerCDKeyLog : 1;                                      //0
	class UR6WindowUbiCDKeyCheck* m_pCDKeyCheckWindow;                        //0
	class UUWindowWindow* m_pProcedureOwner;                                  //0
};
struct UR6MenuOptionsGame_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuOptionsWidget* OptionsWidget;                                //0
	BITFIELD bUpdateGameOptions : 1;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGame_execRestoreDefaultValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGame_execUpdateOptionsInPage_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGame_execUpdateOptionsInEngine_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGame_execInitPageOptions_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTemp;                                                              //0
	FLOAT fSizeOfCounter;                                                     //0
	FLOAT fXRightOffset;                                                      //0
	class UFont* ButtonFont;                                                  //0
	INT iAutoAimBitmapHeight;                                                 //0
	INT iAutoAimVPadding;                                                     //0
	INT iSBButtonWidth;                                                       //0
};

// *****************************************************************************
// UR6MenuOptionsGame (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsGame : public UR6MenuOptionsTab
{
public:
	INT m_iRefMouseSens;                                                      //0
	class UR6WindowButtonBox* m_pOptionAlwaysRun;                             //0
	class UR6WindowButtonBox* m_pOptionInvertMouse;                           //0
	class UR6WindowButtonBox* m_pPopUpLoadPlan;                               //0
	class UR6WindowButtonBox* m_pPopUpQuickPlay;                              //0
	class UR6WindowTextureBrowser* m_pAutoAim;                                //0
	class UTexture* m_pAutoAimTexture;                                        //0
	class UR6WindowHScrollbar* m_pOptionMouseSens;                            //0
	struct FRegion m_pAutoAimTextReg[4];                                      //0
};
struct UR6MenuOptionsSound_execManageNotifyForSound_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuOptionsSound_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	BITFIELD bUpdateGameOptions : 1;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsSound_execRestoreDefaultValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsSound_execConvertToAudioString_Parms
{
	INT _iValueToConvert;                                                     //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
};
struct UR6MenuOptionsSound_execConvertToAVEnum_Parms
{
	class FString _szValueToConvert;                                          //CPF_Parm|CPF_NeedCtorLink
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eAVResult;                                                           //0
};
struct UR6MenuOptionsSound_execConvertToSndQualityString_Parms
{
	INT _iValue;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6MenuOptionsSound_execConvertToSndQuality_Parms
{
	class FString _szValue;                                                   //CPF_Parm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuOptionsSound_execUpdateOptionsInPage_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsSound_execUpdateOptionsInEngine_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsSound_execInitPageOptions_Parms
{
	struct FRegion rRegionW;                                                  //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTemp;                                                              //0
	FLOAT fSizeOfCounter;                                                     //0
	FLOAT fXRightOffset;                                                      //0
	class UFont* ButtonFont;                                                  //0
};
struct UR6MenuOptionsSound_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOptionsSound (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsSound : public UR6MenuOptionsTab
{
public:
	INT m_iRefAmbientVolume;                                                  //0
	INT m_iRefVoicesVolume;                                                   //0
	INT m_iRefMusicVolume;                                                    //0
	BITFIELD m_bEAXNotSupported : 1;                                          //0
	class UR6WindowHScrollbar* m_pAmbientVolume;                              //0
	class UR6WindowHScrollbar* m_pVoicesVolume;                               //0
	class UR6WindowHScrollbar* m_pMusicVolume;                                //0
	class UR6WindowComboControl* m_pSndQuality;                               //0
	class UR6WindowComboControl* m_pAudioVirtual;                             //0
	class UR6WindowButtonBox* m_pSndHardware;                                 //0
	class UR6WindowButtonBox* m_pEAX;                                         //0
	class UR6WindowBitMap* m_EaxLogo;                                         //0
	class UTexture* m_EaxTexture;                                             //0
	struct FRegion m_EaxTextureReg;                                           //0
	class FString m_pComboLevel[4];                                           //CPF_NeedCtorLink
	class FString m_pSndLocEnum[3];                                           //CPF_NeedCtorLink
};
struct UR6MenuOptionsGraphic_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuOptionsWidget* OptionsWidget;                                //0
	BITFIELD bUpdateGameOptions : 1;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGraphic_execRestoreDefaultValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGraphic_execGetResolutionXY_Parms
{
	INT iSX;                                                                  //CPF_Parm|CPF_OutParm
	INT iSY;                                                                  //CPF_Parm|CPF_OutParm
	INT iRR;                                                                  //CPF_Parm|CPF_OutParm
	INT iX;                                                                   //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class FString szTemp2;                                                    //CPF_NeedCtorLink
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGraphic_execAddVideoResolution_Parms
{
	class UR6WindowComboControl* _pR6WindowComboControl;                      //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iWidth;                                                               //0
	INT iHeight;                                                              //0
	INT iRefreshRate;                                                         //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGraphic_execAddGraphComboControlItem_Parms
{
	INT _iAddItemMask;                                                        //CPF_Parm
	class UR6WindowComboControl* _pR6WindowComboControl;                      //CPF_Parm
	class FString _szGraphicsEnumName;                                        //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bCheckFor32MegVideoCard : 1;                                    //CPF_Parm
	BITFIELD bAddHiItem : 1;                                                  //0
};
struct UR6MenuOptionsGraphic_execConvertToGraphicString_Parms
{
	INT _iAddItemMask;                                                        //CPF_Parm
	INT _iValueToConvert;                                                     //CPF_Parm
	class FString _szGraphicsEnumName;                                        //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bCheckFor32MegVideoCard : 1;                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
};
struct UR6MenuOptionsGraphic_execConvertToELEnum_Parms
{
	class FString _szValueToConvert;                                          //CPF_Parm|CPF_NeedCtorLink
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eELResult;                                                           //0
};
struct UR6MenuOptionsGraphic_execConvertToGLEnum_Parms
{
	class FString _szValueToConvert;                                          //CPF_Parm|CPF_NeedCtorLink
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eGLResult;                                                           //0
};
struct UR6MenuOptionsGraphic_execUpdateOptionsInPage_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGraphic_execUpdateOptionsInEngine_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGraphic_execInitPageOptions_Parms
{
	struct FRegion rRegionW;                                                  //0
	FLOAT fYStep;                                                             //0
	class UFont* ButtonFont;                                                  //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsGraphic_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOptionsGraphic (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsGraphic : public UR6MenuOptionsTab
{
public:
	BITFIELD m_bUpdateFileOnly : 1;                                           //0
	class UR6WindowComboControl* m_pVideoRes;                                 //0
	class UR6WindowComboControl* m_pTextureDetail;                            //0
	class UR6WindowComboControl* m_pLightmapDetail;                           //0
	class UR6WindowComboControl* m_pRainbowsDetail;                           //0
	class UR6WindowComboControl* m_pHostagesDetail;                           //0
	class UR6WindowComboControl* m_pTerrosDetail;                             //0
	class UR6WindowComboControl* m_pRainbowsShadowLevel;                      //0
	class UR6WindowComboControl* m_pHostagesShadowLevel;                      //0
	class UR6WindowComboControl* m_pTerrosShadowLevel;                        //0
	class UR6WindowComboControl* m_pGoreLevel;                                //0
	class UR6WindowComboControl* m_pDecalsDetail;                             //0
	class UR6WindowButtonBox* m_pAnimGeometry;                                //0
	class UR6WindowButtonBox* m_pHideDeadBodies;                              //0
	class UR6WindowButtonBox* m_pLowDetailSmoke;                              //0
	class FString m_pComboLevel[4];                                           //CPF_NeedCtorLink
};
struct UR6MenuOptionsHud_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuOptionsWidget* OptionsWidget;                                //0
	BITFIELD bUpdateGameOptions : 1;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsHud_execRestoreDefaultValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsHud_execUpdateHudOptionsTex_Parms
{
};
struct UR6MenuOptionsHud_execCreateHudBitmapWindow_Parms
{
	class UTexture* _Tex;                                                     //CPF_Parm
	BITFIELD _bDrawSimpleBorder : 1;                                          //CPF_Parm
	class UR6WindowBitMap* ReturnValue;                                       //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowBitMap* _NewR6WindowBitMap;                                //0
};
struct UR6MenuOptionsHud_execCreateHudOptionsTex_Parms
{
};
struct UR6MenuOptionsHud_execUpdateOptionsInPage_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsHud_execUpdateOptionsInEngine_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsHud_execInitPageOptions_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTemp;                                                              //0
	FLOAT fSizeOfCounter;                                                     //0
	class UFont* ButtonFont;                                                  //0
};

// *****************************************************************************
// UR6MenuOptionsHud (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsHud : public UR6MenuOptionsTab
{
public:
	class UR6WindowButtonBox* m_pHudWeaponName;                               //0
	class UR6WindowButtonBox* m_pHudShowFPWeapon;                             //0
	class UR6WindowButtonBox* m_pHudOtherTInfo;                               //0
	class UR6WindowButtonBox* m_pHudCurTInfo;                                 //0
	class UR6WindowButtonBox* m_pHudCircumIcon;                               //0
	class UR6WindowButtonBox* m_pHudWpInfo;                                   //0
	class UR6WindowButtonBox* m_pHudReticule;                                 //0
	class UR6WindowButtonBox* m_pHudShowTNames;                               //0
	class UR6WindowButtonBox* m_pHudCharInfo;                                 //0
	class UR6WindowButtonBox* m_pHudShowRadar;                                //0
	class UR6WindowBitMap* m_pHudBGTex;                                       //0
	class UR6WindowBitMap* m_pHudWeaponNameTex;                               //0
	class UR6WindowBitMap* m_pHudShowFPWeaponTex;                             //0
	class UR6WindowBitMap* m_pHudOtherTInfoTex;                               //0
	class UR6WindowBitMap* m_pHudCurTInfoTex;                                 //0
	class UR6WindowBitMap* m_pHudCircumIconTex;                               //0
	class UR6WindowBitMap* m_pHudWpInfoTex;                                   //0
	class UR6WindowBitMap* m_pHudReticuleTex;                                 //0
	class UR6WindowBitMap* m_pHudCharInfoTex;                                 //0
	class UR6WindowBitMap* m_pHudShowTNamesTex;                               //0
	class UR6WindowBitMap* m_pHudShowRadarTex;                                //0
};
struct UR6MenuOptionsMulti_execInitPageOptions_Parms
{
	struct FRegion rRegionW;                                                  //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTemp;                                                              //0
	FLOAT fSizeOfCounter;                                                     //0
	class UFont* ButtonFont;                                                  //0
};
struct UR6MenuOptionsMulti_execCreated_Parms
{
};
struct UR6MenuOptionsMulti_execManageNotifyForNetwork_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuOptionsMulti_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuOptionsWidget* OptionsWidget;                                //0
	BITFIELD bUpdateGameOptions : 1;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsMulti_execRestoreDefaultValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsMulti_execConvertToNetSpeedString_Parms
{
	INT _iValueToConvert;                                                     //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
};
struct UR6MenuOptionsMulti_execConvertToNSEnum_Parms
{
	class FString _szValueToConvert;                                          //CPF_Parm|CPF_NeedCtorLink
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eNSResult;                                                           //0
};
struct UR6MenuOptionsMulti_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct UR6MenuOptionsMulti_execSetPBOptDisable_Parms
{
};
struct UR6MenuOptionsMulti_execSetPBOptValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsMulti_execUpdateOptionsInPage_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsMulti_execUpdateOptionsInEngine_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};

// *****************************************************************************
// UR6MenuOptionsMulti (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsMulti : public UR6MenuOptionsTab
{
public:
	BITFIELD m_bPBNotInstalled : 1;                                           //0
	BITFIELD m_bPBWaitForInit : 1;                                            //0
	class UR6WindowEditControl* m_pOptionPlayerName;                          //0
	class UR6WindowComboControl* m_pSpeedConnection;                          //0
	class UR6WindowButtonExt* m_pOptionGender;                                //0
	class UR6MenuArmpatchSelect* m_pArmpatchChooser;                          //0
	class UR6WindowButtonBox* m_bTriggerLagWanted;                            //0
	class UR6WindowButtonBox* m_pPunkBusterOpt;                               //0
	struct FRegion m_RArmpatchBitmapPos;                                      //0
	struct FRegion m_RArmpatchListPos;                                        //0
	class FString m_pConnectionSpeed[5];                                      //CPF_NeedCtorLink
};
struct UR6MenuOptionsControls_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuOptionsWidget* OptionsWidget;                                //0
	BITFIELD bUpdateGameOptions : 1;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsControls_execRestoreDefaultValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsControls_execIsKeyValid_Parms
{
	INT _Key;                                                                 //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bValidKey : 1;                                                   //0
};
struct UR6MenuOptionsControls_execKeyPressed_Parms
{
	INT Key;                                                                  //CPF_Parm
	class UR6WindowTextLabelExt* pR6TextLabelExt;                             //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class FString szKeyName;                                                  //CPF_NeedCtorLink
	BITFIELD bUpdate : 1;                                                     //0
	BITFIELD bPlanningInput : 1;                                              //0
};
struct UR6MenuOptionsControls_execRefreshKeyItem_Parms
{
	class FString _szNewKeyValue;                                             //CPF_Parm|CPF_NeedCtorLink
	class UUWindowListBoxItem* pItem;                                         //0
};
struct UR6MenuOptionsControls_execGetCurKeyInputClass_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuOptionsControls_execGetCurKeyName_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6MenuOptionsControls_execGetCurActionKey_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6MenuOptionsControls_execGetCurrentKeyItem_Parms
{
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuOptionsControls_execCloseAllKeyPopUp_Parms
{
	BITFIELD _bCloseKeyControlTo : 1;                                         //CPF_Parm
};
struct UR6MenuOptionsControls_execManagePopUpKey_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	class UR6WindowTextLabelExt* pR6TextLabelExt;                             //0
};
struct UR6MenuOptionsControls_execCreateKeyPopUp_Parms
{
	class UR6WindowTextLabelExt* pR6TextLabelExt;                             //0
	FLOAT fPopUpWidth;                                                        //0
};
struct UR6MenuOptionsControls_execGetLocKeyNameByActionKey_Parms
{
	class FString _szActionKey;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bPlanningInput : 1;                                             //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	BYTE Key;                                                                 //0
};
struct UR6MenuOptionsControls_execUpdateOptionsInPage_Parms
{
	class UUWindowList* ListItem;                                             //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6MenuOptionsControls_execAddKeyItem_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _szActionKey;                                               //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowListControls* _pR6WindowListControls;                      //CPF_Parm
	BITFIELD _bPlanningInput : 1;                                             //CPF_Parm
	class UUWindowListBoxItem* NewItem;                                       //0
};
struct UR6MenuOptionsControls_execAddTitleItem_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowListControls* _pR6WindowListControls;                      //CPF_Parm
	class UUWindowListBoxItem* NewItem;                                       //0
};
struct UR6MenuOptionsControls_execAddLineItem_Parms
{
	class UR6WindowListControls* _pR6WindowListControls;                      //CPF_Parm
	class UUWindowListBoxItem* NewItem;                                       //0
};
struct UR6MenuOptionsControls_execInitPageOptions_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
};

// *****************************************************************************
// UR6MenuOptionsControls (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsControls : public UR6MenuOptionsTab
{
public:
	INT m_iKeyToAssign;                                                       //0
	class UR6WindowListControls* m_pListControls;                             //0
	class UUWindowListBoxItem* m_pCurItem;                                    //0
	class UR6MenuOptionsMapKeys* m_pOptControls;                              //0
	class UR6WindowPopUpBox* m_pPopUpKeyBG;                                   //0
	class UR6WindowPopUpBox* m_pKeyMenuReAssignPopUp;                         //0
	class FString m_szOldActionKey;                                           //CPF_NeedCtorLink
};
struct UR6MenuOptionsPatchService_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuOptionsWidget* OptionsWidget;                                //0
	BITFIELD bUpdateGameOptions : 1;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsPatchService_execRestoreDefaultValue_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsPatchService_execToggleUpdateStatus_Parms
{
	BITFIELD _bPerformPSAction : 1;                                           //CPF_Parm
};
struct UR6MenuOptionsPatchService_execSetUpdateStatusOff_Parms
{
	BITFIELD _bPerformPSAction : 1;                                           //CPF_Parm
};
struct UR6MenuOptionsPatchService_execSetUpdateStatusOn_Parms
{
	BITFIELD _bPerformPSAction : 1;                                           //CPF_Parm
};
struct UR6MenuOptionsPatchService_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct UR6MenuOptionsPatchService_execUpdatePatchStatus_Parms
{
	BYTE PatchState;                                                          //0
	BYTE ExitCause;                                                           //0
	FLOAT totalBytes;                                                         //0
	FLOAT fCurrentFileBytes;                                                  //0
	FLOAT recvdBytes;                                                         //0
	FLOAT fCurrentFileRecvdBytes;                                             //0
	class FString Progress;                                                   //CPF_NeedCtorLink
	class FString NewText;                                                    //CPF_NeedCtorLink
};
struct UR6MenuOptionsPatchService_execGetDownloadString_Parms
{
	FLOAT totalBytes;                                                         //CPF_Parm
	FLOAT recvdBytes;                                                         //CPF_Parm
	class FString Str;                                                        //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString bytesProgress;                                              //CPF_NeedCtorLink
	class FString percentProgress;                                            //CPF_NeedCtorLink
};
struct UR6MenuOptionsPatchService_execGetDownloadPercentageStringValues_Parms
{
	FLOAT totalBytes;                                                         //CPF_Parm
	FLOAT recvdBytes;                                                         //CPF_Parm
	class FString bytesProgress;                                              //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString percentProgress;                                            //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString strTotal;                                                   //CPF_NeedCtorLink
	class FString strRecvd;                                                   //CPF_NeedCtorLink
	class FString metric;                                                     //CPF_NeedCtorLink
	FLOAT divider;                                                            //0
};
struct UR6MenuOptionsPatchService_execGetDownloadMetric_Parms
{
	FLOAT totalBytes;                                                         //CPF_Parm
	class FString metric;                                                     //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	FLOAT divider;                                                            //CPF_Parm|CPF_OutParm
};
struct UR6MenuOptionsPatchService_execUpdateOptionsInPage_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsPatchService_execUpdateOptionsInEngine_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuOptionsPatchService_execInitPageOptions_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	BITFIELD bUpdateAllowed : 1;                                              //0
};

// *****************************************************************************
// UR6MenuOptionsPatchService (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsPatchService : public UR6MenuOptionsTab
{
public:
	FLOAT m_lastUpdateServiceClick;                                           //0
	class UR6WindowButtonBox* m_pOptionAutoPatchDownload;                     //0
	class UR6WindowButton* m_pStartDownloadButton;                            //0
	class UR6WindowWrappedTextArea* m_pPatchStatus;                           //0
};

// -----------------------------------------------------------------------------
// FstItemDesc ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstItemDesc
{
public:
	class FString szText;                                                 //CPF_NeedCtorLink
	class FString szMisc;                                                 //CPF_NeedCtorLink
	class UFont* TextFont;                                                //0
	FLOAT fXPos;                                                          //0
	FLOAT fYPos;                                                          //0
	FLOAT fWidth;                                                         //0
	FLOAT fHeigth;                                                        //0
	INT iLineNumber;                                                      //0
	BYTE eAlignment;                                                      //0
	BITFIELD bDisplay : 1;                                                //0
};

// -----------------------------------------------------------------------------
// FArmorInfo ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FArmorInfo
{
public:
	class UClass* armorClass;                                             //0
	class FString szArmorPkg;                                             //CPF_NeedCtorLink
};
struct UR6MenuSkinsSelection_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6MenuSkinsSelection_execChangeCurrentMapSkin_Parms
{
	INT Skin;                                                                 //CPF_Parm
	class UR6WindowListBoxItemExt* CurItem;                                   //0
	class UR6WindowListBoxItemExt* SelItem;                                   //0
};
struct UR6MenuSkinsSelection_execSameSkins_Parms
{
	class UR6WindowListBoxItemExt* Item1;                                     //CPF_Parm
	class UR6WindowListBoxItemExt* Item2;                                     //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuSkinsSelection_execSetButtonRegion_Parms
{
	BITFIELD _bInverseTex : 1;                                                //CPF_Parm
};
struct UR6MenuSkinsSelection_execCopyItemInList_Parms
{
	class UR6WindowListBoxItemExt* _ItemToAdd;                                //CPF_Parm
	class UUWindowListControl* _ListAddItem;                                  //CPF_Parm
	class UR6WindowListBoxItemExt* ReturnValue;                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListBoxItemExt* NewItem;                                   //0
	struct FstItemDesc ItemDesc;                                              //CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UR6MenuSkinsSelection_execGetAllValues_Parms
{
	class UR6MenuMapListExt* _pMyList;                                        //CPF_Parm|CPF_OutParm
	class UR6WindowListBoxItemExt* CurItem;                                   //0
};
struct UR6MenuSkinsSelection_execCopyAllValues_Parms
{
	class UR6MenuMapListExt* _pMyList;                                        //CPF_Parm
	class UR6WindowListBoxItemExt* CurItem;                                   //0
	class UR6WindowListBoxItemExt* CreateItem;                                //0
	class UR6WindowListBoxItemExt* FoundItem;                                 //0
	BITFIELD Found : 1;                                                       //0
};
struct UR6MenuSkinsSelection_execBuildAvailableMissionArmors_Parms
{
	class UClass* ArmorDescriptionClass;                                      //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6Console* R6Console;                                              //0
	struct FArmorInfo pArmorInfo;                                             //CPF_NeedCtorLink
	TArray<class UClass*> AArmors;                                            //CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT nbArmor;                                                              //0
	BITFIELD bFind : 1;                                                       //0
	class UR6ModMgr* pModManager;                                             //0
};
struct UR6MenuSkinsSelection_execFillArmorList_Parms
{
	class UClass* ArmorDescriptionClass;                                      //0
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6WindowListBoxItem* GreenItem;                                    //0
	class UR6WindowListBoxItem* RedItem;                                      //0
	class UR6WindowListBoxItemExt* MapListItem;                               //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UR6MenuSkinsSelection_execUpdateImages_Parms
{
	struct FRegion R;                                                         //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6MenuSkinsSelection_execFirstDisplay_Parms
{
};
struct UR6MenuSkinsSelection_execShowWindow_Parms
{
};
struct UR6MenuSkinsSelection_execCreated_Parms
{
	FLOAT fXPos;                                                              //0
	FLOAT fXStep;                                                             //0
};

// *****************************************************************************
// UR6MenuSkinsSelection (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSkinsSelection : public UUWindowDialogClientWindow
{
public:
	BITFIELD m_bFirstDisplay : 1;                                             //0
	class UR6WindowTextLabelExt* m_pTextInfo;                                 //0
	class UR6WindowTextListBoxExt* m_pMapList;                                //0
	class UR6WindowTextListBox* m_ArmorListBox;                               //0
	class UR6MenuMPArmor* m_2DArmor;                                          //0
	class UClass* m_GreenArmorDesc;                                           //0
	class UClass* m_RedArmorDesc;                                             //0
	TArray<struct FArmorInfo> m_AArmors;                                      //CPF_NeedCtorLink
};
struct UR6MenuMapListExt_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	BITFIELD bUpdate : 1;                                                     //0
};
struct UR6MenuMapListExt_execFillGameTypeMapArray_Parms
{
	TArray<class FString> _SelectedMapList;                                   //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	TArray<class FString> _SelectedGameTypeList;                              //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* CurItem;                                       //0
	INT i;                                                                    //0
};
struct UR6MenuMapListExt_execAssignParamsToNewItem_Parms
{
	class UR6WindowListBoxItemExt* NewItem;                                   //CPF_Parm
	INT _index;                                                               //CPF_Parm
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szMisc;                                                    //CPF_Parm|CPF_NeedCtorLink
	struct FRegion R;                                                         //CPF_Parm
	INT _iLineNumber;                                                         //CPF_Parm
	BITFIELD _bNotDisplay : 1;                                                //CPF_Parm
	struct FstItemDesc NewItemDesc;                                           //CPF_NeedCtorLink
};
struct UR6MenuMapListExt_execCopyAndAddItemInList_Parms
{
	class UUWindowListBoxItem* _ItemToAdd;                                    //CPF_Parm
	class UUWindowListControl* _ListAddItem;                                  //CPF_Parm
	class UR6WindowListBoxItemExt* NewItem;                                   //0
	class UR6WindowListBoxItemExt* ItemToAdd;                                 //0
	struct FRegion ItemR;                                                     //0
	class FString szGreenArmor;                                               //CPF_NeedCtorLink
	class FString szRedArmor;                                                 //CPF_NeedCtorLink
	class FString szGreenPkg;                                                 //CPF_NeedCtorLink
	class FString szRedPkg;                                                   //CPF_NeedCtorLink
};
struct UR6MenuMapListExt_execManageAvailableGameTypes_Parms
{
	class UUWindowList* _pSelectItem;                                         //CPF_Parm
	BITFIELD _bKeepItemGameType : 1;                                          //CPF_Parm
	class UUWindowComboListItem* pComboListItem;                              //0
	class UR6MissionDescription* pCurMissionDesc;                             //0
	class FString szGameTypeFind;                                             //CPF_NeedCtorLink
	class FString szGameTypeClassName;                                        //CPF_NeedCtorLink
	class FString szFirstGameTypeFound;                                       //CPF_NeedCtorLink
	class FString szItemGameType;                                             //CPF_NeedCtorLink
	class UR6Console* R6Console;                                              //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szEditBoxValue;                                             //CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD bUseSameGameType : 1;                                            //0
	class ALevelInfo* pLevel;                                                 //0
};
struct UR6MenuMapListExt_execFillFinalMapList_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class UR6WindowListBoxItemExt* NewItem;                                   //0
	INT i;                                                                    //0
	struct FRegion ItemR;                                                     //0
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class FString szResult;                                                   //CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class FString szGreenArmor;                                               //CPF_NeedCtorLink
	class FString szRedArmor;                                                 //CPF_NeedCtorLink
	class FString szGreenPkg;                                                 //CPF_NeedCtorLink
	class FString szRedPkg;                                                   //CPF_NeedCtorLink
	class UR6ServerInfo* pServerOpt;                                          //0
	class ALevelInfo* pLevel;                                                 //0
	struct FRegion ItemRegion;                                                //0
};
struct UR6MenuMapListExt_execFillMapListItem_Parms
{
	class UR6WindowListBoxItemExt* NewItem;                                   //0
	class UR6MissionDescription* mission;                                     //0
	class UR6Console* R6Console;                                              //0
	class ALevelInfo* pLevel;                                                 //0
	struct FRegion ItemR;                                                     //0
	class FString szLocMapName;                                               //CPF_NeedCtorLink
	class FString szMod;                                                      //CPF_NeedCtorLink
	class FString szRavenShieldMod;                                           //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
	BITFIELD bLoadMap : 1;                                                    //0
};
struct UR6MenuMapListExt_execCreated_Parms
{
	class UUWindowListBoxItem* CurItem;                                       //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fXSecondWindow;                                                     //0
};
struct UR6MenuMapListExt_execSetOrderButtons_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MenuMapListExt_execSetAllArmor_Parms
{
	INT i;                                                                    //0
	class UR6WindowListBoxItemExt* CurItem;                                   //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szItemGameType;                                             //CPF_NeedCtorLink
	class FString szGreenArmor;                                               //CPF_NeedCtorLink
	class FString szRedArmor;                                                 //CPF_NeedCtorLink
	class UR6MissionDescription* mission;                                     //0
	class UR6Console* R6Console;                                              //0
};
struct UR6MenuMapListExt_execGetInitArmor_Parms
{
	class FString _szMapName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _szGameType;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString _szGreenArmor;                                              //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString _szRedArmor;                                                //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString _szGreenPkg;                                                //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class FString _szRedPkg;                                                  //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	class UClass* ArmorDescriptionClass;                                      //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6Console* R6Console;                                              //0
	class FString szGreenArmor;                                               //CPF_NeedCtorLink
	class FString szRedArmor;                                                 //CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class FString szValidEntry;                                               //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT nbArmor;                                                              //0
	BITFIELD bFind : 1;                                                       //0
	BITFIELD bFindBothArmor : 1;                                              //0
	BITFIELD bFindGreenArmor : 1;                                             //0
	BITFIELD bFindRedArmor : 1;                                               //0
	class UR6ModMgr* pModManager;                                             //0
};
struct UR6MenuMapListExt_execManageComboChange_Parms
{
	class UR6WindowListBoxItemExt* Item;                                      //0
	class UUWindowComboListItem* pComboListItem;                              //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	class FString szGreenArmor;                                               //CPF_NeedCtorLink
	class FString szRedArmor;                                                 //CPF_NeedCtorLink
	class FString szGreenPkg;                                                 //CPF_NeedCtorLink
	class FString szRedPkg;                                                   //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6MenuMapListExt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMapListExt : public UR6MenuMapList
{
public:
	BITFIELD m_bFinalListEmpty : 1;                                           //0
};

// -----------------------------------------------------------------------------
// FStWidget ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FStWidget
{
public:
	class UUWindowWindow* m_pWidget;                                      //0
	class UR6WindowPopUpBox* m_pPopUpFrame;                               //0
	BYTE m_eGameWidgetID;                                                 //0
	FName m_WidgetConsoleState;                                           //0
	INT iWidgetKA;                                                        //0
};
struct UR6MenuInGameMultiPlayerRootWindow_execMenuLoadProfile_Parms
{
	BITFIELD _bServerProfile : 1;                                             //CPF_Parm
};
struct UR6MenuInGameMultiPlayerRootWindow_execUpdateTimeInBetRound_Parms
{
	INT _iNewTime;                                                            //CPF_Parm
	class FString _StringInstead;                                             //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
	INT iNbOfWindow;                                                          //0
};
struct UR6MenuInGameMultiPlayerRootWindow_execTrapKey_Parms
{
	BITFIELD _bIncludeMouseMove : 1;                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuInGameMultiPlayerRootWindow_execProcessKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuInGameMultiPlayerRootWindow_execProcessKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BYTE eNextWidgetIDUp;                                                     //0
	BYTE eNextWidgetIDDown;                                                   //0
	INT i;                                                                    //0
	INT iNbOfKeys;                                                            //0
	BITFIELD bProcessWChange : 1;                                             //0
	BITFIELD bProcessKeyToAllMenu : 1;                                        //0
	BITFIELD bIsInBetweenRound : 1;                                           //0
	class APlayerController* PC;                                              //0
};
struct UR6MenuInGameMultiPlayerRootWindow_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UR6MenuInGameMultiPlayerRootWindow_execIsGameMenuComInitialized_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuInGameMultiPlayerRootWindow_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FString szTemp;                                                     //CPF_NeedCtorLink
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UR6MenuInGameMultiPlayerRootWindow_execTick_Parms
{
	FLOAT Delta;                                                              //CPF_Parm
};
struct UR6MenuInGameMultiPlayerRootWindow_execDrawMouse_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	FLOAT fMouseClipX;                                                        //0
	FLOAT fMouseClipY;                                                        //0
	class UTexture* MouseTex;                                                 //0
};
struct UR6MenuInGameMultiPlayerRootWindow_execMoveMouse_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowWindow* NewMouseWindow;                                     //0
	FLOAT tX;                                                                 //0
	FLOAT tY;                                                                 //0
};
struct UR6MenuInGameMultiPlayerRootWindow_execNotifyAfterLevelChange_Parms
{
};
struct UR6MenuInGameMultiPlayerRootWindow_execNotifyBeforeLevelChange_Parms
{
};
struct UR6MenuInGameMultiPlayerRootWindow_execVoteMenu_Parms
{
	class FString _szPlayerNameToKick;                                        //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _ActiveMenu : 1;                                                 //CPF_Parm
};
struct UR6MenuInGameMultiPlayerRootWindow_execCloseSimplePopUpBox_Parms
{
};
struct UR6MenuInGameMultiPlayerRootWindow_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6MenuInGameMultiPlayerRootWindow_execSimplePopUp_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	BYTE _ePopUpID;                                                           //CPF_Parm
	INT _iButtonsType;                                                        //CPF_Parm
	BITFIELD bAddDisableDlg : 1;                                              //CPF_Parm
	class UUWindowWindow* OwnerWindow;                                        //CPF_Parm
};
struct UR6MenuInGameMultiPlayerRootWindow_execUpdateCurrentGameMode_Parms
{
};
struct UR6MenuInGameMultiPlayerRootWindow_execChangeWidget_Parms
{
	BYTE widgetID;                                                            //CPF_Parm
	BITFIELD _bClearPrevWInHistory : 1;                                       //CPF_Parm
	BITFIELD _bCloseAll : 1;                                                  //CPF_Parm
	struct FStWidget pStNewWidget;                                            //0
	FName ConsoleState;                                                       //0
	INT iNbOfShowWindow;                                                      //0
	INT i;                                                                    //0
};
struct UR6MenuInGameMultiPlayerRootWindow_execChangeCurrentWidget_Parms
{
	BYTE widgetID;                                                            //CPF_Parm
};
struct UR6MenuInGameMultiPlayerRootWindow_execFillListOfKeyAvailability_Parms
{
};
struct UR6MenuInGameMultiPlayerRootWindow_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuInGameMultiPlayerRootWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuInGameMultiPlayerRootWindow : public UR6WindowRootWindow
{
public:
	BYTE m_eCurrentGameMode;                                                  //0
	BITFIELD bShowLog : 1;                                                    //0
	BITFIELD m_bActiveBar : 1;                                                //0
	BITFIELD m_bActiveVoteMenu : 1;                                           //0
	BITFIELD m_bCanDisplayOperativeSelector : 1;                              //0
	BITFIELD m_bPreventMenuSwitch : 1;                                        //0
	BITFIELD m_bMenuInvalid : 1;                                              //0
	BITFIELD m_bPlayerDidASelection : 1;                                      //0
	BITFIELD m_bJoinTeamWidget : 1;                                           //0
	BITFIELD m_bTrapKey : 1;                                                  //0
	class UR6MenuInGameWritableMapWidget* m_InGameWritableMapWidget;          //0
	class UR6MenuMPJoinTeamWidget* m_pJoinTeamWidget;                         //0
	class UR6MenuMPInterWidget* m_pIntermissionMenuWidget;                    //0
	class UR6MenuMPInGameEsc* m_pInGameEscMenu;                               //0
	class UR6MenuMPInGameRecMessages* m_pRecMessagesMenuWidget;               //0
	class UR6MenuMPInGameMsgOffensive* m_pOffensiveMenuWidget;                //0
	class UR6MenuMPInGameMsgDefensive* m_pDefensiveMenuWidget;                //0
	class UR6MenuMPInGameMsgReply* m_pReplyMenuWidget;                        //0
	class UR6MenuMPInGameMsgStatus* m_pStatusMenuWidget;                      //0
	class UR6MenuMPInGameVote* m_pVoteWidget;                                 //0
	class UR6MPGameMenuCom* m_R6GameMenuCom;                                  //0
	class UR6MenuOptionsWidget* m_pOptionsWidget;                             //0
	class UR6MenuMPCountDown* m_pCountDownWidget;                             //0
	class UR6MenuInGameOperativeSelectorWidget* m_InGameOperativeSelectorWidget;  //0
	class USound* m_sndOpenDrawingTool;                                       //0
	class USound* m_sndCloseDrawingTool;                                      //0
	struct FRegion m_RJoinWidget;                                             //0
	struct FRegion m_RInterWidget;                                            //0
	struct FRegion m_REscPopUp;                                               //0
	class FString m_szCurrentGameType;                                        //CPF_NeedCtorLink
	class FString m_szGameModeLoc[2];                                         //CPF_NeedCtorLink
	class FString m_szCurrentGameModeLoc;                                     //CPF_NeedCtorLink
};
struct UR6MenuNavigationBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuNavigationBar_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuRootWindow* r6Root;                                          //0
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuNavigationBar_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuNavigationBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuNavigationBar : public UUWindowDialogClientWindow
{
public:
	INT m_iNavBarLocation[9];                                                 //0
	INT m_iBigButtonHeight;                                                   //0
	class UR6WindowButton* m_MainMenuButton;                                  //0
	class UR6WindowButton* m_OptionsButton;                                   //0
	class UR6WindowButton* m_BriefingButton;                                  //0
	class UR6WindowButton* m_GearButton;                                      //0
	class UR6WindowButton* m_PlanningButton;                                  //0
	class UR6WindowButton* m_PlayButton;                                      //0
	class UR6WindowButton* m_SaveButton;                                      //0
	class UR6WindowButton* m_LoadButton;                                      //0
	class UR6WindowButton* m_QuickPlayButton;                                 //0
	class UTexture* m_TMainMenuTexture;                                       //0
	struct FRegion m_RMainMenuButtonUp;                                       //0
	struct FRegion m_RMainMenuButtonDown;                                     //0
	struct FRegion m_RMainMenuButtonDisabled;                                 //0
	struct FRegion m_RMainMenuButtonOver;                                     //0
	struct FRegion m_ROptionsButtonUp;                                        //0
	struct FRegion m_ROptionsButtonDown;                                      //0
	struct FRegion m_ROptionsButtonDisabled;                                  //0
	struct FRegion m_ROptionsButtonOver;                                      //0
	struct FRegion m_RBriefingButtonUp;                                       //0
	struct FRegion m_RBriefingButtonDown;                                     //0
	struct FRegion m_RBriefingButtonDisabled;                                 //0
	struct FRegion m_RBriefingButtonOver;                                     //0
	struct FRegion m_RGearButtonUp;                                           //0
	struct FRegion m_RGearButtonDown;                                         //0
	struct FRegion m_RGearButtonDisabled;                                     //0
	struct FRegion m_RGearButtonOver;                                         //0
	struct FRegion m_RPlanningButtonUp;                                       //0
	struct FRegion m_RPlanningButtonDown;                                     //0
	struct FRegion m_RPlanningButtonDisabled;                                 //0
	struct FRegion m_RPlanningButtonOver;                                     //0
	struct FRegion m_RPlayButtonUp;                                           //0
	struct FRegion m_RPlayButtonDown;                                         //0
	struct FRegion m_RPlayButtonDisabled;                                     //0
	struct FRegion m_RPlayButtonOver;                                         //0
	struct FRegion m_RSaveButtonUp;                                           //0
	struct FRegion m_RSaveButtonDown;                                         //0
	struct FRegion m_RSaveButtonDisabled;                                     //0
	struct FRegion m_RSaveButtonOver;                                         //0
	struct FRegion m_RLoadButtonUp;                                           //0
	struct FRegion m_RLoadButtonDown;                                         //0
	struct FRegion m_RLoadButtonDisabled;                                     //0
	struct FRegion m_RLoadButtonOver;                                         //0
	struct FRegion m_RQuickPlayButtonUp;                                      //0
	struct FRegion m_RQuickPlayButtonDown;                                    //0
	struct FRegion m_RQuickPlayButtonDisabled;                                //0
	struct FRegion m_RQuickPlayButtonOver;                                    //0
};

enum eButtonActionType{
	 Button_Game=0
	,Button_Sound=1
	,Button_Graphic=2
	,Button_Hud=3
	,Button_Multiplayer=4
	,Button_Controls=5
	,Button_MODS=6
	,Button_PatchService=7
	,Button_Return=8
};
struct UR6WindowButtonOptions_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6MenuRootWindow* r6Root;                                          //0
};

// *****************************************************************************
// UR6WindowButtonOptions (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonOptions : public UR6WindowButton
{
public:
	BYTE m_eButton_Action;                                                    //0
	class UTexture* m_TOverButton;                                            //0
	struct FRegion m_ROverButtonFade;                                         //0
	struct FRegion m_ROverButton;                                             //0
};

enum eButtonActionType{
	 Button_SinglePlayer=0
	,Button_CustomMission=1
	,Button_Multiplayer=2
	,Button_Training=3
	,Button_Options=4
	,Button_Replays=5
	,Button_Credits=6
	,Button_Quit=7
	,Button_UbiComQuit=8
	,Button_UbiComReturn=9
};
struct UR6WindowButtonMainMenu_execDrawButtonText_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FColor currentTextColor;                                            //CPF_Parm
	INT currentStyle;                                                         //CPF_Parm
};
struct UR6WindowButtonMainMenu_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tH;                                                                 //0
	INT currentTextStyle;                                                     //0
};
struct UR6WindowButtonMainMenu_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT ftextSize;                                                          //0
};
struct UR6WindowButtonMainMenu_execCreated_Parms
{
};
struct UR6WindowButtonMainMenu_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6MenuRootWindow* r6Root;                                          //0
};
struct UR6WindowButtonMainMenu_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
};
struct UR6WindowButtonMainMenu_execResizeToText_Parms
{
};
struct UR6WindowButtonMainMenu_execDrawButtonScrollEffect_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FColor currentDrawColor;                                            //CPF_Parm
	INT currentStyle;                                                         //CPF_Parm
	INT targetPos;                                                            //0
	INT lastDisplayedPos;                                                     //0
	INT iDisplayXPos;                                                         //0
	INT iWidthModifier;                                                       //0
	class UR6MenuRSLookAndFeel* currentLookAndFeel;                           //0
};
struct UR6WindowButtonMainMenu_execDrawButtonBackGround_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FColor currentDrawColor;                                            //CPF_Parm
	INT currentStyle;                                                         //CPF_Parm
};

// *****************************************************************************
// UR6WindowButtonMainMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonMainMenu : public UUWindowButton
{
public:
	BYTE m_eButton_Action;                                                    //0
	INT m_iTextRightPadding;                                                  //0
	INT m_iMinXPos;                                                           //0
	INT m_iMaxXPos;                                                           //0
	INT m_iTotalScroll;                                                       //0
	BITFIELD m_bResizeToText : 1;                                             //0
	FLOAT m_fProgressTime;                                                    //0
	FLOAT m_TextWidth;                                                        //0
	FLOAT m_fLMarge;                                                          //0
	FLOAT m_fFontSpacing;                                                     //0
	class UTexture* m_OverAlphaTexture;                                       //0
	class UTexture* m_OverScrollingTexture;                                   //0
	class UFont* m_buttonFont;                                                //0
	struct FRegion m_OverAlphaRegion;                                         //0
	struct FRegion m_OverScrollingRegion;                                     //0
	class FColor m_DownTextColor;                                             //0
};

enum eSignChoiceButton{
	 eSCB_Accept=0
	,eSCB_Cancel=1
};
enum ENavBarButton{
	 NBB_Home=0
	,NBB_Option=1
	,NBB_Archive=2
	,NBB_TeleCom=3
	,NBB_Roster=4
	,NBB_Gear=5
	,NBB_Planning=6
	,NBB_Play=7
	,NBB_Load=8
	,NBB_Save=9
};
enum ERSBLButton{
	 ERSBL_BLActive=0
	,ERSBL_BLLeft=1
	,ERSBL_BLRight=2
};

// -----------------------------------------------------------------------------
// FSTLapTopFrame ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTLapTopFrame
{
public:
	struct FRegion TL;                                                    //0
	struct FRegion t;                                                     //0
	struct FRegion TR;                                                    //0
	struct FRegion L;                                                     //0
	struct FRegion R;                                                     //0
	struct FRegion BL;                                                    //0
	struct FRegion B;                                                     //0
	struct FRegion BR;                                                    //0
	struct FRegion L2;                                                    //0
	struct FRegion R2;                                                    //0
	struct FRegion L3;                                                    //0
	struct FRegion R3;                                                    //0
	struct FRegion L4;                                                    //0
	struct FRegion R4;                                                    //0
};

// -----------------------------------------------------------------------------
// FSTFrameColor ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTFrameColor
{
public:
	class FColor TextColor;                                               //0
	class FColor SelTextColor;                                            //0
	class FColor DisableColor;                                            //0
	class FColor TitleColor;                                              //0
	class FColor TitleBack;                                               //0
	class FColor ButtonBack;                                              //0
	class FColor SelButtonBack;                                           //0
	class FColor ButtonLine;                                              //0
};

// -----------------------------------------------------------------------------
// FSTLapTopFramePlus ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTLapTopFramePlus
{
public:
	struct FRegion T1;                                                    //0
	struct FRegion T2;                                                    //0
	struct FRegion T3;                                                    //0
	struct FRegion T4On;                                                  //0
	struct FRegion T4Off;                                                 //0
};

// -----------------------------------------------------------------------------
// FSTWindowFrame ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FSTWindowFrame
{
public:
	struct FRegion TL;                                                    //0
	struct FRegion t;                                                     //0
	struct FRegion TR;                                                    //0
	struct FRegion L;                                                     //0
	struct FRegion R;                                                     //0
	struct FRegion BL;                                                    //0
	struct FRegion B;                                                     //0
	struct FRegion BR;                                                    //0
};
struct UR6MenuRSLookAndFeel_execDrawBGShading_Parms
{
	class UUWindowWindow* Window;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execDrawBox_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT Width;                                                              //CPF_Parm
	FLOAT Height;                                                             //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execDrawSpecialButtonBorder_Parms
{
	class UR6WindowButton* Button;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT XPos;                                                                 //0
	INT MidWidth;                                                             //0
};
struct UR6MenuRSLookAndFeel_execDrawButtonBorder_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	BITFIELD _bDefineBorderColor : 1;                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execDrawNavigationBar_Parms
{
	class UR6MenuNavigationBar* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	INT iXStart;                                                              //0
	INT iXTexSize;                                                            //0
	INT iXWidth;                                                              //0
	INT iYTexSize;                                                            //0
	struct FRegion R;                                                         //0
	class FColor cTemp;                                                       //0
};
struct UR6MenuRSLookAndFeel_execDrawPopupButtonDisable_Parms
{
	class UR6MenuPopUpStayDownButton* W;                                      //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class FColor MenuColor;                                                   //0
};
struct UR6MenuRSLookAndFeel_execDrawPopupButtonOver_Parms
{
	class UR6MenuPopUpStayDownButton* W;                                      //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class FColor MenuColor;                                                   //0
};
struct UR6MenuRSLookAndFeel_execDrawPopupButtonUp_Parms
{
	class UR6MenuPopUpStayDownButton* W;                                      //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class FColor MenuColor;                                                   //0
};
struct UR6MenuRSLookAndFeel_execDrawPopupButtonDown_Parms
{
	class UR6MenuPopUpStayDownButton* W;                                      //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	INT iColor;                                                               //0
	class FColor MenuColor;                                                   //0
};
struct UR6MenuRSLookAndFeel_execDrawHSplitterB_Parms
{
	class UR6WindowHSplitter* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execDrawHSplitterT_Parms
{
	class UR6WindowHSplitter* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execDrawWinTop_Parms
{
	class UR6WindowHSplitter* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execMenu_DrawPulldownMenuItem_Parms
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
struct UR6MenuRSLookAndFeel_execMenu_DrawPulldownMenuBackground_Parms
{
	class UUWindowPulldownMenu* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execMenu_DrawMenuBarItem_Parms
{
	class UUWindowMenuBar* B;                                                 //CPF_Parm
	class UUWindowMenuBarItem* i;                                             //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execMenu_DrawMenuBar_Parms
{
	class UUWindowMenuBar* W;                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execTab_GetTabSize_Parms
{
	class UUWindowTabControlTabArea* Tab;                                     //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	FLOAT W;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT H;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT fTW;                                                                //0
	FLOAT fTH;                                                                //0
};
struct UR6MenuRSLookAndFeel_execTab_DrawTabPageArea_Parms
{
	class UUWindowPageControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowPageWindow* P;                                              //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execTab_SetTabPageSize_Parms
{
	class UUWindowPageControl* W;                                             //CPF_Parm
	class UUWindowPageWindow* P;                                              //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execTab_SetupRightButton_Parms
{
	class UUWindowTabControlRightButton* W;                                   //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execTab_SetupLeftButton_Parms
{
	class UUWindowTabControlLeftButton* W;                                    //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execSB_HDraw_Parms
{
	class UUWindowHScrollbar* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	INT BoxWidth;                                                             //0
};
struct UR6MenuRSLookAndFeel_execSB_VDraw_Parms
{
	class UUWindowVScrollbar* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	INT BoxHeight;                                                            //0
};
struct UR6MenuRSLookAndFeel_execSB_SetupRightButton_Parms
{
	class UUWindowSBRightButton* W;                                           //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execSB_SetupLeftButton_Parms
{
	class UUWindowSBLeftButton* W;                                            //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execSB_SetupDownButton_Parms
{
	class UUWindowSBDownButton* W;                                            //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execSB_SetupUpButton_Parms
{
	class UUWindowSBUpButton* W;                                              //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execTab_DrawTab_Parms
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
	struct FRegion R;                                                         //0
	struct FRegion Temp_RTabLeft;                                             //0
	struct FRegion Temp_RTabRight;                                            //0
	class FString szText;                                                     //CPF_NeedCtorLink
	FLOAT fTW;                                                                //0
	FLOAT fTH;                                                                //0
	FLOAT fXOffset;                                                           //0
};
struct UR6MenuRSLookAndFeel_execEditbox_Draw_Parms
{
	class UUWindowEditControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execEditbox_SetupSizes_Parms
{
	class UUWindowEditControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fTW;                                                                //0
	FLOAT fTH;                                                                //0
	INT B;                                                                    //0
};
struct UR6MenuRSLookAndFeel_execCombo_SetupButton_Parms
{
	class UUWindowComboButton* W;                                             //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execComboList_DrawItem_Parms
{
	class UUWindowComboList* Combo;                                           //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class FString Text;                                                       //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execComboList_DrawBackground_Parms
{
	class UUWindowComboList* W;                                               //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execList_DrawBackground_Parms
{
	class UUWindowListControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execR6List_DrawBackground_Parms
{
	class UR6WindowListBox* W;                                                //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execCombo_Draw_Parms
{
	class UUWindowComboControl* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execCombo_SetupSizes_Parms
{
	class UUWindowComboControl* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fTW;                                                                //0
	FLOAT fTH;                                                                //0
};
struct UR6MenuRSLookAndFeel_execDrawClientArea_Parms
{
	class UUWindowClientWindow* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execR6FW_HitTest_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuRSLookAndFeel_execFW_HitTest_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuRSLookAndFeel_execR6FW_GetClientArea_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FRegion R;                                                         //0
};
struct UR6MenuRSLookAndFeel_execFW_GetClientArea_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FRegion R;                                                         //0
};
struct UR6MenuRSLookAndFeel_execR6FW_SetupFrameButtons_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execFW_SetupFrameButtons_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6MenuRSLookAndFeel_execDrawPopUpFrameWindow_Parms
{
	class UR6WindowPopUpBox* W;                                               //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* TBackGround;                                              //0
	class FColor vBorderColor;                                                //0
	class FColor vCornerColor;                                                //0
};
struct UR6MenuRSLookAndFeel_execR6FW_DrawWindowFrame_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* t;                                                        //0
	struct FRegion R;                                                         //0
};
struct UR6MenuRSLookAndFeel_execFW_DrawWindowFrame_Parms
{
	class UUWindowFramedWindow* W;                                            //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* t;                                                        //0
	struct FRegion R;                                                         //0
	struct FRegion temp;                                                      //0
};
struct UR6MenuRSLookAndFeel_execR6GetTexture_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuRSLookAndFeel_execButton_SetupMapList_Parms
{
	class UUWindowButton* W;                                                  //CPF_Parm
	BITFIELD _bInverseTex : 1;                                                //CPF_Parm
	struct FRegionButton RTemp;                                               //0
};
struct UR6MenuRSLookAndFeel_execButton_SetupEnumSignChoice_Parms
{
	class UUWindowButton* W;                                                  //CPF_Parm
	INT eRegionId;                                                            //CPF_Parm
};
struct UR6MenuRSLookAndFeel_execSetup_Parms
{
};
struct UR6MenuRSLookAndFeel_execGetTextHeaderSize_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuRSLookAndFeel_execCenterIconInBox_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	struct FRegion _RIconRegion;                                              //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FRegion RTemp;                                                     //0
	FLOAT fTemp;                                                              //0
};
struct UR6MenuRSLookAndFeel_execDrawInGamePlayerStats_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	INT _iPlayerStats;                                                        //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT fXOffset;                                                           //0
	struct FRegion RIconRegion;                                               //0
	struct FRegion RIconToDraw;                                               //0
};
struct UR6MenuRSLookAndFeel_execDrawPopUpTextBackGround_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	struct FRegion RTexture;                                                  //0
	FLOAT fY;                                                                 //0
	FLOAT fHeight;                                                            //0
};

// *****************************************************************************
// UR6MenuRSLookAndFeel (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuRSLookAndFeel : public UR6WindowLookAndFeel
{
public:
	INT m_iMultiplyer;                                                        //0
	INT m_fVSBButtonImageX;                                                   //0
	INT m_fHSBButtonImageX;                                                   //0
	INT m_fVSBButtonImageY;                                                   //0
	INT m_fHSBButtonImageY;                                                   //0
	INT m_fComboImageX;                                                       //0
	INT m_fComboImageY;                                                       //0
	FLOAT m_fCurrentPct;                                                      //0
	FLOAT m_fScrollRate;                                                      //0
	FLOAT m_fTextHeaderHeight;                                                //0
	class UTexture* m_NavBarTex;                                              //0
	class UTexture* m_TIcon;                                                  //0
	class UTexture* m_TSquareBg;                                              //0
	struct FRegion m_FrameSBL;                                                //0
	struct FRegion m_FrameSB;                                                 //0
	struct FRegion m_FrameSBR;                                                //0
	struct FRegionButton m_BLTitleL;                                          //0
	struct FRegionButton m_BLTitleC;                                          //0
	struct FRegionButton m_BLTitleR;                                          //0
	struct FRegion m_PopupArrowUp;                                            //0
	struct FRegion m_PopupArrowDown;                                          //0
	struct FSTLapTopFrame m_stLapTopFrame;                                    //0
	struct FSTLapTopFramePlus m_stLapTopFramePlus;                            //0
	struct FRegion m_NavBarBack[12];                                          //0
	struct FRegion m_topLeftCornerR;                                          //0
	struct FRegionButton m_RBAcceptCancel[2];                                 //0
	struct FRegionButton m_RArrow[2];                                         //0
	struct FRegion m_SBScrollerActive;                                        //0
	struct FRegion m_SBUpGear;                                                //0
	struct FRegion m_SBDownGear;                                              //0
	struct FRegion m_RSquareBgLeft;                                           //0
	struct FRegion m_RSquareBgMid;                                            //0
	struct FRegion m_RSquareBgRight;                                          //0
};
struct UR6MenuSimpleWindow_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuSimpleWindow_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuSimpleWindow_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6MenuSimpleWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSimpleWindow : public UUWindowWindow
{
public:
	BITFIELD m_bDrawSimpleBorder : 1;                                         //0
	class UUWindowWindow* pAdviceParent;                                      //0
};
struct UR6MenuHelpTextFrameBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuHelpTextFrameBar_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuHelpTextFrameBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuHelpTextFrameBar : public UUWindowWindow
{
public:
	class UR6MenuHelpTextBar* m_HelpTextBar;                                  //0
};
struct UR6MenuIntelRadioArea_execAssociateTextWithButton_Parms
{
	class UR6WindowStayDownButton* _R6Button;                                 //CPF_Parm
	class FString _szTextToFind;                                              //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bHaveTextForButton : 1;                                          //0
};
struct UR6MenuIntelRadioArea_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuIntelRadioArea_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6WindowStayDownButton* tmpButton;                                 //0
};
struct UR6MenuIntelRadioArea_execAssociateButtons_Parms
{
};
struct UR6MenuIntelRadioArea_execReset_Parms
{
};
struct UR6MenuIntelRadioArea_execCreated_Parms
{
	class FColor cFontColor;                                                  //0
	class UFont* ButtonFont;                                                  //0
	class UTexture* BGSelecTexture;                                           //0
	struct FRegion BGRegion;                                                  //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fStepBetweenControl;                                                //0
};

// *****************************************************************************
// UR6MenuIntelRadioArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuIntelRadioArea : public UUWindowDialogClientWindow
{
public:
	class UR6WindowStayDownButton* m_ControlButton;                           //0
	class UR6WindowStayDownButton* m_ClarkButton;                             //0
	class UR6WindowStayDownButton* m_SweenyButton;                            //0
	class UR6WindowStayDownButton* m_NewsButton;                              //0
	class UR6WindowStayDownButton* m_MissionButton;                           //0
	class UR6WindowStayDownButton* m_CurrentSelectedButton;                   //0
};
struct UR6MenuVideo_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuVideo_execStopVideo_Parms
{
	class UCanvas* C;                                                         //0
};
struct UR6MenuVideo_execPlayVideo_Parms
{
	INT _iXStartPos;                                                          //CPF_Parm
	INT _iYStartPos;                                                          //CPF_Parm
	class FString _szVideoFileName;                                           //CPF_Parm|CPF_NeedCtorLink
};

// *****************************************************************************
// UR6MenuVideo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuVideo : public UUWindowWindow
{
public:
	INT m_iCentered;                                                          //0
	INT m_iXStartPos;                                                         //0
	INT m_iYStartPos;                                                         //0
	BITFIELD m_bAlreadyStart : 1;                                             //0
	BITFIELD m_bPlayVideo : 1;                                                //0
	BITFIELD bShowLog : 1;                                                    //0
	class FString m_szVideoFilename;                                          //CPF_NeedCtorLink
};
struct UR6MenuRootWindow_execInitBeaconService_Parms
{
};
struct UR6MenuRootWindow_execSetNewMODS_Parms
{
	class FString _szNewBkgFolder;                                            //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bForceRefresh : 1;                                              //CPF_Parm
};
struct UR6MenuRootWindow_execNotifyWindow_Parms
{
	class UUWindowWindow* C;                                                  //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuRootWindow_execMenuLoadProfile_Parms
{
	BITFIELD _bServerProfile : 1;                                             //CPF_Parm
};
struct UR6MenuRootWindow_execHarmonizeMenuFonts_Parms
{
	class UFont* ButtonFont;                                                  //0
	class UFont* DownSizeFont;                                                //0
};
struct UR6MenuRootWindow_execPartialResetOriginalData_Parms
{
	class AR6DecalManager* aMgr;                                              //0
};
struct UR6MenuRootWindow_execLeaveForGame_Parms
{
	BITFIELD _ObserverMode : 1;                                               //CPF_Parm
	INT _iTeamStart;                                                          //CPF_Parm
	class AR6StartGameInfo* StartGameInfo;                                    //0
};
struct UR6MenuRootWindow_execIsPlanningEmpty_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD Result : 1;                                                      //0
	class UR6PlanningInfo* PlanningInfo;                                      //0
	INT i;                                                                    //0
};
struct UR6MenuRootWindow_execDeleteAPlanning_Parms
{
	class FString szFileName;                                                 //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString szPathAndFilename;                                          //CPF_NeedCtorLink
	class FString ErrorMsg;                                                   //CPF_NeedCtorLink
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szGameTypeDirName;                                          //CPF_NeedCtorLink
	class FString szEnglishGTDirectory;                                       //CPF_NeedCtorLink
	class UR6MissionDescription* mission;                                     //0
	INT i;                                                                    //0
};
struct UR6MenuRootWindow_execLoadAPlanning_Parms
{
	class FString _szFileName;                                                //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString szLoadErrorMsg;                                             //CPF_NeedCtorLink
	class FString szLoadErrorMsgMapName;                                      //CPF_NeedCtorLink
	class FString szLoadErrorMsgGameType;                                     //CPF_NeedCtorLink
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class UR6MissionDescription* mission;                                     //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szGameTypeDirName;                                          //CPF_NeedCtorLink
	class FString szEnglishGTDirectory;                                       //CPF_NeedCtorLink
	INT iMission;                                                             //0
	BITFIELD bFoundMission : 1;                                               //0
};
struct UR6MenuRootWindow_execIsSaveFileAlreadyExist_Parms
{
	class FString _szFileName;                                                //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString szPathAndFilename;                                          //CPF_NeedCtorLink
	class FString szGameTypeDirName;                                          //CPF_NeedCtorLink
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class UR6MissionDescription* mission;                                     //0
	class FString szEnglishGTDirectory;                                       //CPF_NeedCtorLink
};
struct UR6MenuRootWindow_execFillListOfSavedPlan_Parms
{
	class UR6WindowTextListBox* _pListOfSavedPlan;                            //CPF_Parm
	class UR6WindowListBoxItem* NewItem;                                      //0
	class FString szFileName;                                                 //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT iMax;                                                                 //0
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class UR6MissionDescription* mission;                                     //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szGameTypeDirName;                                          //CPF_NeedCtorLink
	class FString szEnglishGTDirectory;                                       //CPF_NeedCtorLink
};
struct UR6MenuRootWindow_execSetServerOptions_Parms
{
};
struct UR6MenuRootWindow_execStopWidgetSound_Parms
{
};
struct UR6MenuRootWindow_execStopPlayMode_Parms
{
};
struct UR6MenuRootWindow_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
	class FString szFileName;                                                 //CPF_NeedCtorLink
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6WindowTextListBox* SavedPlanningListBox;                         //0
	class AR6StartGameInfo* StartGameInfo;                                    //0
	class UR6MissionDescription* mission;                                     //0
	class FString szMapName;                                                  //CPF_NeedCtorLink
	class FString szGameTypeDirName;                                          //CPF_NeedCtorLink
	class FString szEnglishGTDirectory;                                       //CPF_NeedCtorLink
};
struct UR6MenuRootWindow_execSimplePopUp_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	BYTE _ePopUpID;                                                           //CPF_Parm
	INT _iButtonsType;                                                        //CPF_Parm
	BITFIELD bAddDisableDlg : 1;                                              //CPF_Parm
	class UUWindowWindow* OwnerWindow;                                        //CPF_Parm
};
struct UR6MenuRootWindow_execPopUpMenu_Parms
{
	BITFIELD _bautoLoadPrompt : 1;                                            //CPF_Parm
	INT i;                                                                    //0
	INT iMax;                                                                 //0
	class UR6WindowListBoxItem* NewItem;                                      //0
	class FString szFileName;                                                 //CPF_NeedCtorLink
};
struct UR6MenuRootWindow_execNotifyAfterLevelChange_Parms
{
};
struct UR6MenuRootWindow_execLaunchQuickPlay_Parms
{
	class FString szFileName;                                                 //CPF_NeedCtorLink
};
struct UR6MenuRootWindow_execGotoPlanning_Parms
{
	class UPlayer* CurrentPlayer;                                             //0
	class APlayerController* NewController;                                   //0
	class AR6IORotatingDoor* RotDoor;                                         //0
	class AR6DeploymentZone* DeployZone;                                      //0
};
struct UR6MenuRootWindow_execGotoCampaignPlanning_Parms
{
	BITFIELD _bRetrying : 1;                                                  //CPF_Parm
	class UR6PlayerCampaign* PlayerCampaign;                                  //0
	INT iNbArrayElements;                                                     //0
	INT i;                                                                    //0
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6Console* CurrentConsole;                                         //0
};
struct UR6MenuRootWindow_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UR6MenuRootWindow_execKeyType_Parms
{
	INT iInputKey;                                                            //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuRootWindow_execResetCustomMissionOperatives_Parms
{
	class UR6Operative* tmpOperative;                                         //0
	class UClass* tmpOperativeClass;                                          //0
	INT iNbArrayElements;                                                     //0
	INT iNbTotalOperatives;                                                   //0
	INT i;                                                                    //0
	class UR6ModMgr* pModManager;                                             //0
};
struct UR6MenuRootWindow_execPlanningShouldDrawPath_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuRootWindow_execPlanningShouldProcessKey_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuRootWindow_execChangeCurrentWidget_Parms
{
	BYTE widgetID;                                                            //CPF_Parm
	BITFIELD bDontQuitNow : 1;                                                //0
};
struct UR6MenuRootWindow_execIsInsidePlanning_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuRootWindow_execClosePopups_Parms
{
};
struct UR6MenuRootWindow_execMoveMouse_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuRootWindow_execUpdateMenus_Parms
{
	INT iWhatToUpdate;                                                        //CPF_Parm
};
struct UR6MenuRootWindow_execResetMenus_Parms
{
	BITFIELD _bConnectionFailed : 1;                                          //CPF_Parm
};
struct UR6MenuRootWindow_execDrawMouse_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	FLOAT fMouseClipX;                                                        //0
	FLOAT fMouseClipY;                                                        //0
	class UTexture* MouseTex;                                                 //0
};
struct UR6MenuRootWindow_execSet3dView_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6MenuRootWindow_execAssignShowFirstWidget_Parms
{
};
struct UR6MenuRootWindow_execCreated_Parms
{
	class UR6WindowEditBox* EditPopUpBox;                                     //0
	class UR6WindowTextListBox* SavedPlanningListBox;                         //0
	class UR6GameOptions* pGameOptions;                                       //0
};

// *****************************************************************************
// UR6MenuRootWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuRootWindow : public UR6WindowRootWindow
{
public:
	BYTE m_ePopUpID;                                                          //0
	BITFIELD m_bReloadPlan : 1;                                               //0
	BITFIELD m_bLoadingPlanning : 1;                                          //0
	BITFIELD m_bPlayerPlanInitialized : 1;                                    //0
	BITFIELD m_bPlayerDoNotWant3DView : 1;                                    //0
	BITFIELD m_bPlayerWantLegend : 1;                                         //0
	BITFIELD bShowLog : 1;                                                    //0
	BITFIELD m_bJoinServerProcess : 1;                                        //0
	class UTexture* m_BGTexture0;                                             //0
	class UTexture* m_BGTexture1;                                             //0
	class UR6MenuWidget* m_CurrentWidget;                                     //0
	class UR6MenuWidget* m_PreviousWidget;                                    //0
	class UR6MenuIntelWidget* m_IntelWidget;                                  //0
	class UR6MenuPlanningWidget* m_PlanningWidget;                            //0
	class UR6MenuExecuteWidget* m_ExecuteWidget;                              //0
	class UR6MenuMainWidget* m_MainMenuWidget;                                //0
	class UR6MenuSinglePlayerWidget* m_SinglePlayerWidget;                    //0
	class UR6MenuCustomMissionWidget* m_CustomMissionWidget;                  //0
	class UR6MenuTrainingWidget* m_TrainingWidget;                            //0
	class UR6MenuMultiPlayerWidget* m_MultiPlayerWidget;                      //0
	class UR6MenuOptionsWidget* m_OptionsWidget;                              //0
	class UR6MenuCreditsWidget* m_CreditsWidget;                              //0
	class UR6MenuGearWidget* m_GearRoomWidget;                                //0
	class UR6MenuCDKeyManager* m_pMenuCDKeyManager;                           //0
	class UR6MenuMPCreateGameWidget* m_pMPCreateGameWidget;                   //0
	class UR6MenuUbiComWidget* m_pUbiComWidget;                               //0
	class UR6MenuUbiComModsWidget* m_pUbiComModsWidget;                       //0
	class UR6MenuNonUbiWidget* m_pNonUbiWidget;                               //0
	class UR6MenuQuit* m_pMenuQuit;                                           //0
	class UR6FileManager* m_pFileManager;                                     //0
	class UR6WindowPopUpBox* m_PopUpSavePlan;                                 //0
	class UR6WindowPopUpBox* m_PopUpLoadPlan;                                 //0
	class USound* m_MainMenuMusic;                                            //0
	TArray<class UR6Operative*> m_GameOperatives;                             //CPF_NeedCtorLink
};
struct UR6MenuListActionTypeButton_execShowPopup_Parms
{
	FLOAT fGlobalLeft;                                                        //0
	FLOAT fGlobalTop;                                                         //0
};
struct UR6MenuListActionTypeButton_execShowWindow_Parms
{
	BYTE eType;                                                               //0
};
struct UR6MenuListActionTypeButton_execHidePopup_Parms
{
};
struct UR6MenuListActionTypeButton_execDisplayMilestoneButton_Parms
{
	BITFIELD bDoIDisplay : 1;                                                 //0
};
struct UR6MenuListActionTypeButton_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
	class UR6PlanningInfo* Planning;                                          //0
};
struct UR6MenuListActionTypeButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuListActionTypeButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuListActionTypeButton : public UR6MenuPopupListButton
{
public:
	BITFIELD m_bAutoSelect : 1;                                               //0
	class UR6MenuActionMenu* m_WinAction;                                     //0
};
struct UR6Menu3DViewOnOffButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6Menu3DViewOnOffButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6MenuRootWindow* r6Root;                                          //0
};
struct UR6Menu3DViewOnOffButton_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6Menu3DViewOnOffButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6Menu3DViewOnOffButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6Menu3DViewOnOffButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Menu3DViewOnOffButton : public UR6WindowStayDownButton
{
};
struct UR6MenuLegendButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuLegendButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuLegendButton_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuLegendButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuLegendButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLegendButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendButton : public UR6WindowStayDownButton
{
};
struct UR6MenuPlanningBar_execCreated_Parms
{
	INT i;                                                                    //0
	FLOAT fCurrentW;                                                          //0
};
struct UR6MenuPlanningBar_execResetTeams_Parms
{
	INT iWhatToReset;                                                         //CPF_Parm
};
struct UR6MenuPlanningBar_execReset_Parms
{
};

// *****************************************************************************
// UR6MenuPlanningBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuPlanningBar : public UUWindowWindow
{
public:
	class UR6MenuTeamBar* m_TeamBar;                                          //0
	class UR6MenuDelNodeBar* m_DelNodeBar;                                    //0
	class UR6MenuViewCamBar* m_ViewCamBar;                                    //0
	class UR6MenuTimeLineBar* m_TimeLine;                                     //0
	class FColor m_iColor;                                                    //0
};
struct UR6Window3DButton_execSetButtonColor_Parms
{
	class FColor cButtonColor;                                                //CPF_Parm
};
struct UR6Window3DButton_execClose3DWindow_Parms
{
};
struct UR6Window3DButton_execToggle3DWindow_Parms
{
};
struct UR6Window3DButton_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6Window3DButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6Window3DButton_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6Window3DButton_execMouseEnter_Parms
{
};
struct UR6Window3DButton_execMouseLeave_Parms
{
};
struct UR6Window3DButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tempSpace;                                                          //0
	class FColor vBorderColor;                                                //0
};
struct UR6Window3DButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6Window3DButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6Window3DButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Window3DButton : public UUWindowButton
{
public:
	INT m_iDrawStyle;                                                         //0
	BITFIELD m_bDisplayWindow : 1;                                            //0
	BITFIELD m_bLMouseDown : 1;                                               //0
	class FColor m_cButtonColor;                                              //0
};
struct UR6WindowLegend_execCloseLegendWindow_Parms
{
};
struct UR6WindowLegend_execToggleLegend_Parms
{
};
struct UR6WindowLegend_execPreviousPage_Parms
{
};
struct UR6WindowLegend_execNextPage_Parms
{
};
struct UR6WindowLegend_execResized_Parms
{
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	FLOAT fBiggestButtonList;                                                 //0
};
struct UR6WindowLegend_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT iTeamColor;                                                           //0
};
struct UR6WindowLegend_execCreated_Parms
{
	class UTexture* ButtonTexture;                                            //0
};

// *****************************************************************************
// UR6WindowLegend (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowLegend : public UR6MenuFramePopup
{
public:
	INT m_iCurrentPage;                                                       //0
	INT m_NavButtonSize;                                                      //0
	BITFIELD m_bDisplayWindow : 1;                                            //0
	BITFIELD m_bInitialized : 1;                                              //0
	class UR6MenuLegendPage* m_LegendPages[5];                                //0
	class UUWindowButton* m_PreviousPageButton;                               //0
	class UUWindowButton* m_NextPageButton;                                   //0
	class UR6WindowBitMap* m_PrevBg;                                          //0
	class UR6WindowBitMap* m_NextBg;                                          //0
	struct FRegion ButtonBg;                                                  //0
};
struct UR6MenuDynTeamListsControl_execDistributeSpaces_Parms
{
	INT _iSpaceToAdd;                                                         //CPF_Parm
	INT _iHList;                                                              //CPF_Parm|CPF_OutParm
	INT _iMaxListHeigth;                                                      //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iSpaceLeft;                                                           //0
};
struct UR6MenuDynTeamListsControl_execResizeSubLists_Parms
{
	INT iRedListBoxH;                                                         //0
	INT iGreenListBoxH;                                                       //0
	INT iGoldListBoxH;                                                        //0
	INT iAddSpace;                                                            //0
	INT iMaxListHeigth;                                                       //0
	INT iAvailableSpace;                                                      //0
};
struct UR6MenuDynTeamListsControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuDynTeamListsControl_execEmptyRosterList_Parms
{
};
struct UR6MenuDynTeamListsControl_execFillRosterList_Parms
{
	class UR6WindowListBoxItem* TempItem;                                     //0
	class UTexture* ButtonTexture;                                            //0
	struct FRegion R;                                                         //0
	struct FRegion RS;                                                        //0
	INT i;                                                                    //0
	INT SeparatorID;                                                          //0
	INT iUniqueID;                                                            //0
	class UR6MenuRootWindow* r6Root;                                          //0
	class UR6Operative* tmpOperative;                                         //0
	class UR6MenuGearWidget* gearWidget;                                      //0
	BITFIELD Found : 1;                                                       //0
};
struct UR6MenuDynTeamListsControl_execCreateAnchoredButtons_Parms
{
};
struct UR6MenuDynTeamListsControl_execCreateRosterListBox_Parms
{
	class FColor co;                                                          //0
	class UFont* listBoxTitleFont;                                            //0
};
struct UR6MenuDynTeamListsControl_execRefreshButtons_Parms
{
	INT iShowAdd;                                                             //0
	INT totalCount;                                                           //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6MenuGearWidget* gearWidget;                                      //0
};
struct UR6MenuDynTeamListsControl_execAddOperativeToSubList_Parms
{
	class UR6WindowTextIconsSubListBox* _SubListBox;                          //CPF_Parm
	INT totalCount;                                                           //0
	class UR6WindowListBoxItem* TempItem;                                     //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6Operative* selectedOperative;                                    //0
	class UR6MenuGearWidget* gearWidget;                                      //0
	BITFIELD bFound : 1;                                                      //0
};
struct UR6MenuDynTeamListsControl_execRemoveOperativeInSubList_Parms
{
	class UR6WindowTextIconsSubListBox* _SubListBox;                          //CPF_Parm
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6Operative* selectedOperative;                                    //0
	class UR6MenuGearWidget* gearWidget;                                      //0
};
struct UR6MenuDynTeamListsControl_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	INT itemPos;                                                              //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6WindowListBoxItem* ListItem;                                     //0
	class UUWindowList* UListItem;                                            //0
	class UR6MenuGearWidget* gearWidget;                                      //0
	class UR6Operative* selectedOperative;                                    //0
	class UR6WindowTextIconsSubListBox* tmpSubListBox;                        //0
};
struct UR6MenuDynTeamListsControl_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuDynTeamListsControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuDynTeamListsControl : public UUWindowDialogClientWindow
{
public:
	INT m_SubListTopHeight;                                                   //0
	INT m_iMaxOperativeCount;                                                 //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fButtonTabWidth;                                                  //0
	FLOAT m_fButtonTabHeight;                                                 //0
	FLOAT m_MinSubListHeight;                                                 //0
	FLOAT m_SubListByItemHeight;                                              //0
	FLOAT TotalSublistsHeight;                                                //0
	FLOAT m_fVPadding;                                                        //0
	FLOAT m_fFirsButtonOffset;                                                //0
	FLOAT m_fHButtonPadding;                                                  //0
	FLOAT m_fHButtonOffset;                                                   //0
	class UR6WindowListBoxAnchorButton* m_ASSAULTButton;                      //0
	class UR6WindowListBoxAnchorButton* m_ReconButton;                        //0
	class UR6WindowListBoxAnchorButton* m_SNIPERButton;                       //0
	class UR6WindowListBoxAnchorButton* m_DemolitionButton;                   //0
	class UR6WindowListBoxAnchorButton* m_ElectronicButton;                   //0
	class UTexture* m_TButtonTexture;                                         //0
	class UR6WindowTextIconsListBox* m_listBox;                               //0
	class UR6WindowTextIconsSubListBox* m_RedListBox;                         //0
	class UR6WindowTextIconsSubListBox* m_GreenListBox;                       //0
	class UR6WindowTextIconsSubListBox* m_GoldListBox;                        //0
	class UTexture* m_BorderTexture;                                          //0
	struct FRegion m_RASSAULTUp;                                              //0
	struct FRegion m_RASSAULTOver;                                            //0
	struct FRegion m_RASSAULTDown;                                            //0
	struct FRegion m_RAssaultDisabled;                                        //0
	struct FRegion m_RReconUp;                                                //0
	struct FRegion m_RReconOver;                                              //0
	struct FRegion m_RReconDown;                                              //0
	struct FRegion m_RReconDisabled;                                          //0
	struct FRegion m_RSNIPERUp;                                               //0
	struct FRegion m_RSNIPEROver;                                             //0
	struct FRegion m_RSNIPERDown;                                             //0
	struct FRegion m_RSniperDisabled;                                         //0
	struct FRegion m_RDemolitionUp;                                           //0
	struct FRegion m_RDemolitionOver;                                         //0
	struct FRegion m_RDemolitionDown;                                         //0
	struct FRegion m_RDemolitionDisabled;                                     //0
	struct FRegion m_RElectronicUp;                                           //0
	struct FRegion m_RElectronicOver;                                         //0
	struct FRegion m_RElectronicDown;                                         //0
	struct FRegion m_RElectronicDisabled;                                     //0
	struct FRegion RAssault;                                                  //0
	struct FRegion RRecon;                                                    //0
	struct FRegion RSniper;                                                   //0
	struct FRegion RDemo;                                                     //0
	struct FRegion RElectro;                                                  //0
	struct FRegion RSAssault;                                                 //0
	struct FRegion RSRecon;                                                   //0
	struct FRegion RSSniper;                                                  //0
	struct FRegion RSDemo;                                                    //0
	struct FRegion RSElectro;                                                 //0
	struct FRegion m_BorderRegion;                                            //0
};
struct UR6MenuCampaignDescription_execCreated_Parms
{
	FLOAT labelWidth;                                                         //0
	FLOAT RightLabelX;                                                        //0
	FLOAT DifficultyWidth;                                                    //0
	FLOAT NameWidth;                                                          //0
};

// *****************************************************************************
// UR6MenuCampaignDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCampaignDescription : public UUWindowWindow
{
public:
	INT m_DrawStyle;                                                          //0
	FLOAT m_HPadding;                                                         //0
	FLOAT m_VPadding;                                                         //0
	FLOAT m_VSpaceBetweenElements;                                            //0
	FLOAT m_LabelHeight;                                                      //0
	class UR6WindowTextLabel* m_MissionTitle;                                 //0
	class UR6WindowTextLabel* m_NameTitle;                                    //0
	class UR6WindowTextLabel* m_DifficultyTitle;                              //0
	class UR6WindowTextLabel* m_MissionValue;                                 //0
	class UR6WindowTextLabel* m_NameValue;                                    //0
	class UR6WindowTextLabel* m_DifficultyValue;                              //0
	class UTexture* m_BGTexture;                                              //0
	struct FRegion m_BGTextureRegion;                                         //0
	class FColor m_vBGColor;                                                  //0
};
struct UR6MenuSinglePlayerCampaignSelect_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6PlayerCampaign* PC;                                              //0
};
struct UR6MenuSinglePlayerCampaignSelect_execSetupCampaign_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6PlayerCampaign* PC;                                              //0
};
struct UR6MenuSinglePlayerCampaignSelect_execLoadCampaign_Parms
{
	class FString szCampaignName;                                             //CPF_Parm|CPF_NeedCtorLink
	class UR6PlayerCampaign* WorkCampaign;                                    //0
	class UR6WindowListBoxItem* NewItem;                                      //0
};
struct UR6MenuSinglePlayerCampaignSelect_execDeleteCampaign_Parms
{
	class FString temp;                                                       //CPF_NeedCtorLink
	class FString szDir;                                                      //CPF_NeedCtorLink
};
struct UR6MenuSinglePlayerCampaignSelect_execRefreshListBox_Parms
{
	INT iFiles;                                                               //0
	INT i;                                                                    //0
	class FString szFileName;                                                 //CPF_NeedCtorLink
	class FString szDir;                                                      //CPF_NeedCtorLink
	class UR6PlayerCampaign* PC;                                              //0
	class UR6MenuRootWindow* RootWindow;                                      //0
};
struct UR6MenuSinglePlayerCampaignSelect_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuSinglePlayerCampaignSelect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSinglePlayerCampaignSelect : public UUWindowDialogClientWindow
{
public:
	class UTexture* m_BGTexture;                                              //0
	class UR6WindowTextListBox* m_CampaignListBox;                            //0
	class UR6WindowTextLabelCurved* m_LCampaignTitle;                         //0
};
struct UR6MenuSinglePlayerCampaignCreate_execCreateCampaign_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuRootWindow* r6Root;                                          //0
	INT iNbArrayElements;                                                     //0
	INT iNbTotalOperatives;                                                   //0
	INT i;                                                                    //0
	class UR6Operative* tmpOperative;                                         //0
	class UClass* tmpOperativeClass;                                          //0
	class UR6PlayerCampaign* PlayerCampaign;                                  //0
	class UR6ModMgr* pModManager;                                             //0
};
struct UR6MenuSinglePlayerCampaignCreate_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuSinglePlayerCampaignCreate_execReset_Parms
{
};
struct UR6MenuSinglePlayerCampaignCreate_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuSinglePlayerCampaignCreate_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuSinglePlayerCampaignCreate_execCreated_Parms
{
	class FColor LabelTextColor;                                              //0
};

// *****************************************************************************
// UR6MenuSinglePlayerCampaignCreate (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSinglePlayerCampaignCreate : public UUWindowDialogClientWindow
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	class UR6WindowTextLabel* m_CampaignName;                                 //0
	class UR6WindowTextLabel* m_Difficulty;                                   //0
	class UR6WindowTextLabel* m_Difficulty1;                                  //0
	class UR6WindowTextLabel* m_Difficulty2;                                  //0
	class UR6WindowTextLabel* m_Difficulty3;                                  //0
	class UR6MenuDiffCustomMissionSelect* m_pDiffSelection;                   //0
	class UR6WindowEditControl* m_CampaignNameEdit;                           //0
};
struct UR6MenuHelpWindow_execAddTipText_Parms
{
	class FString _szNewText;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuHelpWindow_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuHelpWindow_execCreated_Parms
{
	class UUWindowWrappedTextArea* pHelpZone;                                 //0
	FLOAT fWidth;                                                             //0
};

// *****************************************************************************
// UR6MenuHelpWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuHelpWindow : public UR6WindowSimpleFramedWindowExt
{
public:
	BITFIELD m_bForceRefreshOnSameTip : 1;                                    //0
};
struct UR6MenuDiffCustomMissionSelect_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuDiffCustomMissionSelect_execGetDifficulty_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuDiffCustomMissionSelect_execSetDifficulty_Parms
{
	INT iDifficulty_;                                                         //CPF_Parm
};
struct UR6MenuDiffCustomMissionSelect_execCreated_Parms
{
	class UR6MenuButtonsDefines* pButtonsDef;                                 //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fYStep;                                                             //0
};

// *****************************************************************************
// UR6MenuDiffCustomMissionSelect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuDiffCustomMissionSelect : public UUWindowDialogClientWindow
{
public:
	INT CustomMissionDifficultyLevel;                                         //CPF_Config
	BITFIELD m_bAutoSave : 1;                                                 //0
	class UR6WindowButtonBox* m_pButLevel1;                                   //0
	class UR6WindowButtonBox* m_pButLevel2;                                   //0
	class UR6WindowButtonBox* m_pButLevel3;                                   //0
	class UR6WindowButtonBox* m_pButLastSel;                                  //0
};
struct UR6MenuCustomMissionNbTerroSelect_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCustomMissionNbTerroSelect_execGetNbTerro_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuCustomMissionNbTerroSelect_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCustomMissionNbTerroSelect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCustomMissionNbTerroSelect : public UUWindowDialogClientWindow
{
public:
	INT c_iNbTerroMax;                                                        //0
	INT c_iNbTerroMin;                                                        //0
	INT CustomMissionNbTerro;                                                 //CPF_Config
	FLOAT m_fLabelHeight;                                                     //0
	class UR6WindowTextLabel* m_TitleNbTerro;                                 //0
	class UR6WindowCounter* m_TerroCounter;                                   //0
};
struct UR6MenuMPManageTab_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6LanServers* pLanServers;                                         //0
	class UR6GSServers* pGameService;                                         //0
};
struct UR6MenuMPManageTab_execAddTabInControl_Parms
{
	class FString _Caption;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _TabToolTip;                                                //CPF_Parm|CPF_NeedCtorLink
	INT _ItemID;                                                              //CPF_Parm
	class UUWindowTabControlItem* pItem;                                      //0
};
struct UR6MenuMPManageTab_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPManageTab (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPManageTab : public UUWindowDialogClientWindow
{
public:
	class UR6WindowTabControl* m_pMainTabControl;                             //0
};
struct UR6MenuMPButServerList_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	BITFIELD bTypeOfSort : 1;                                                 //0
};
struct UR6MenuMPButServerList_execCreateServerListButton_Parms
{
	INT _iButtonID;                                                           //CPF_Parm
	class FString _szName;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szTip;                                                     //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	class UR6WindowButtonSort* _R6Button;                                     //CPF_Parm|CPF_OutParm
};
struct UR6MenuMPButServerList_execCreated_Parms
{
	class UR6ServerList* pSLDummy;                                            //0
	FLOAT fXOffset;                                                           //0
};

// *****************************************************************************
// UR6MenuMPButServerList (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPButServerList : public UUWindowDialogClientWindow
{
public:
	class UR6WindowButtonSort* m_pButFavorites;                               //0
	class UR6WindowButtonSort* m_pButLocked;                                  //0
	class UR6WindowButtonSort* m_pButDedicated;                               //0
	class UR6WindowButtonSort* m_pButPunkBuster;                              //0
	class UR6WindowButtonSort* m_pButPingTime;                                //0
	class UR6WindowButtonSort* m_pButName;                                    //0
	class UR6WindowButtonSort* m_pButGameType;                                //0
	class UR6WindowButtonSort* m_pButGameMode;                                //0
	class UR6WindowButtonSort* m_pButMap;                                     //0
	class UR6WindowButtonSort* m_pButNumPlayers;                              //0
	class UR6WindowButtonSort* m_pLastButtonClick;                            //0
};
struct UR6WindowButtonMultiMenu_execSetButLogInOutState_Parms
{
	BYTE _eNewButtonState;                                                    //CPF_Parm
};
struct UR6WindowButtonMultiMenu_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6MenuMPCreateGameTabOptions* pCreateTabOptions;                   //0
	class UR6MenuRootWindow* r6Root;                                          //0
	class UR6MenuMPManageTab* pFirstTabManager;                               //0
	class UR6LanServers* pLanServers;                                         //0
	class UR6GSServers* pGameService;                                         //0
	class UR6WindowListGeneral* pListGen;                                     //0
	class UR6MenuMPCreateGameWidget* pCreateGW;                               //0
	BITFIELD bInternetServer : 1;                                             //0
	class UR6ServerInfo* _ServerSettings;                                     //0
};
struct UR6WindowButtonMultiMenu_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonMultiMenu_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6WindowButtonMultiMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonMultiMenu : public UR6WindowButton
{
public:
	BYTE m_eButton_Action;                                                    //0
	BITFIELD m_bButtonIsReady : 1;                                            //0
	class UTexture* m_TOverButton;                                            //0
	struct FRegion m_ROverButtonFade;                                         //0
	struct FRegion m_ROverButton;                                             //0
};
struct UR6MenuInGameRootWindow_execMenuLoadProfile_Parms
{
	BITFIELD _bServerProfile : 1;                                             //CPF_Parm
};
struct UR6MenuInGameRootWindow_execProcessKeyUp_Parms
{
	INT Key;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuInGameRootWindow_execProcessKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuInGameRootWindow_execSimplePopUp_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	BYTE _ePopUpID;                                                           //CPF_Parm
	INT _iButtonsType;                                                        //CPF_Parm
	BITFIELD bAddDisableDlg : 1;                                              //CPF_Parm
	class UUWindowWindow* OwnerWindow;                                        //CPF_Parm
};
struct UR6MenuInGameRootWindow_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UR6MenuInGameRootWindow_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
	class AR6GameInfo* GameInfo;                                              //0
};
struct UR6MenuInGameRootWindow_execDrawMouse_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	FLOAT fMouseClipX;                                                        //0
	FLOAT fMouseClipY;                                                        //0
	class UTexture* MouseTex;                                                 //0
};
struct UR6MenuInGameRootWindow_execMoveMouse_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowWindow* NewMouseWindow;                                     //0
	FLOAT tX;                                                                 //0
	FLOAT tY;                                                                 //0
};
struct UR6MenuInGameRootWindow_execChangeWidget_Parms
{
	BYTE widgetID;                                                            //CPF_Parm
	BITFIELD _bClearPrevWInHistory : 1;                                       //CPF_Parm
	BITFIELD _bCloseAll : 1;                                                  //CPF_Parm
	struct FStWidget pStNewWidget;                                            //0
	FName ConsoleState;                                                       //0
	INT iNbOfShowWindow;                                                      //0
	INT i;                                                                    //0
};
struct UR6MenuInGameRootWindow_execChangeCurrentWidget_Parms
{
	BYTE widgetID;                                                            //CPF_Parm
};
struct UR6MenuInGameRootWindow_execChangeInstructionWidget_Parms
{
	class AActor* pISV;                                                       //CPF_Parm
	BITFIELD bShow : 1;                                                       //CPF_Parm
	INT iBox;                                                                 //CPF_Parm
	INT iParagraph;                                                           //CPF_Parm
	INT i;                                                                    //0
	INT iNbOfWindow;                                                          //0
	class AR6InstructionSoundVolume* aISV;                                    //0
};
struct UR6MenuInGameRootWindow_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuInGameRootWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuInGameRootWindow : public UR6WindowRootWindow
{
public:
	INT m_ESCMenuKey;                                                         //0
	BITFIELD m_bCanDisplayOperativeSelector : 1;                              //0
	BITFIELD m_bInEscMenu : 1;                                                //0
	BITFIELD m_bInTraining : 1;                                               //0
	BITFIELD m_bInPopUp : 1;                                                  //0
	FLOAT m_fTopLabelHeight;                                                  //0
	class UR6MenuDebriefingWidget* m_DebriefingWidget;                        //0
	class UR6MenuInGameInstructionWidget* m_pInstructionWidget;               //0
	class UR6MenuOptionsWidget* m_OptionsWidget;                              //0
	class UR6MenuInGameOperativeSelectorWidget* m_InGameOperativeSelectorWidget;  //0
	class UR6MenuInGameEsc* m_EscMenuWidget;                                  //0
	struct FRegion m_REscMenuWidget;                                          //0
	struct FRegion m_REscTraining;                                            //0
};
struct UR6MenuCredits_execResetCredits_Parms
{
};
struct UR6MenuCredits_execConvertItemValue_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UR6WindowListBoxCreditsItem* _pItemToConvert;                       //CPF_Parm|CPF_OutParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString szTemp;                                                     //CPF_NeedCtorLink
	FLOAT fTemp;                                                              //0
	FLOAT fTextW;                                                             //0
	FLOAT fTextH;                                                             //0
};
struct UR6MenuCredits_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT fXPos;                                                              //0
	FLOAT fYPos;                                                              //0
	FLOAT fW;                                                                 //0
	FLOAT fH;                                                                 //0
	class UR6WindowListBoxCreditsItem* pItem;                                 //0
};
struct UR6MenuCredits_execPaintCredits_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* CurItem;                                              //0
	class UR6WindowListBoxCreditsItem* R6CurItem;                             //0
	FLOAT y1;                                                                 //0
	FLOAT iCurrentYPos;                                                       //0
	BITFIELD bStopNextTime : 1;                                               //0
};
struct UR6MenuCredits_execPaintTexEffect_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UTexture* TexScrollEffect;                                          //0
};
struct UR6MenuCredits_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCredits_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};

// *****************************************************************************
// UR6MenuCredits (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCredits : public UUWindowListControl
{
public:
	INT m_iScrollIndex;                                                       //0
	INT m_iScrollStep;                                                        //0
	BITFIELD m_bStopScroll : 1;                                               //0
	FLOAT m_fScrollSpeed;                                                     //0
	FLOAT m_fTexScrollSpeed;                                                  //0
	FLOAT m_fScrollIndex;                                                     //0
	FLOAT m_fYScrollEffect;                                                   //0
	FLOAT m_fDelta;                                                           //0
	class UUWindowList* m_FirstItemOnScreen;                                  //0
};
struct UR6MenuOperativeDetailControl_execsetFace_Parms
{
	class UTexture* newFace;                                                  //CPF_Parm
	struct FRegion _R;                                                        //CPF_Parm
};
struct UR6MenuOperativeDetailControl_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOperativeDetailControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6Operative* currentOperative;                                     //0
};
struct UR6MenuOperativeDetailControl_execChangePage_Parms
{
	INT ButtonID;                                                             //CPF_Parm
};
struct UR6MenuOperativeDetailControl_execUpdateDetails_Parms
{
	class UR6Operative* currentOperative;                                     //0
	struct FRegion RMenuFace;                                                 //0
};
struct UR6MenuOperativeDetailControl_execCreated_Parms
{
	FLOAT fYOffset;                                                           //0
	FLOAT fHeight;                                                            //0
};

// *****************************************************************************
// UR6MenuOperativeDetailControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeDetailControl : public UUWindowDialogClientWindow
{
public:
	INT m_ITopLineYPos;                                                       //0
	INT m_IBottomLineYPos;                                                    //0
	BITFIELD m_bUpdateOperativeText : 1;                                      //0
	class UR6MenuOperativeDetailRadioArea* m_TopButtons;                      //0
	class UR6MenuOperativeHistory* m_HistoryPage;                             //0
	class UR6MenuOperativeSkills* m_SkillsPage;                               //0
	class UR6MenuOperativeBio* m_BioPage;                                     //0
	class UR6MenuOperativeStats* m_StatsPage;                                 //0
	class UR6WindowBitMap* m_OperativeFace;                                   //0
	class UUWindowWindow* m_CurrentPage;                                      //0
};
struct UR6MenuMPCreateGameTabKitRest_execCreated_Parms
{
};
struct UR6MenuMPCreateGameTabKitRest_execSetServerOptions_Parms
{
	INT iCounter;                                                             //0
	INT jCounter;                                                             //0
	class UR6ServerInfo* _ServerSettings;                                     //0
};
struct UR6MenuMPCreateGameTabKitRest_execInitKitTab_Parms
{
};

// *****************************************************************************
// UR6MenuMPCreateGameTabKitRest (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPCreateGameTabKitRest : public UR6MenuMPCreateGameTab
{
public:
	class UR6MenuMPRestKitMain* m_pMainRestriction;                           //0
};
struct UR6MenuMPRestKitMain_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPRestKitMain_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPRestKitMain_execTick_Parms
{
	FLOAT _fDelta;                                                            //CPF_Parm
};
struct UR6MenuMPRestKitMain_execGetR6GameReplicationInfo_Parms
{
	class AR6GameReplicationInfo* pGameRepInfo;                               //CPF_Parm|CPF_OutParm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPRestKitMain_execManageR6ButtonBoxNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	class AR6GameReplicationInfo* pGameRepInfo;                               //0
};
struct UR6MenuMPRestKitMain_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPRestKitMain_execCompareARestKit_Parms
{
	BYTE _eRestKitID;                                                         //CPF_Parm
	TArray<class FString> _ANextSrvRestriction;                               //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	TArray<class UClass*> _ACurServerRestKit;                                 //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowButtonBox* _pAButtonBox[20];                               //CPF_Parm
	BITFIELD _bStringArray : 1;                                               //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	TArray<class UClass*> ARestToRemove;                                      //CPF_NeedCtorLink
	TArray<class UClass*> ARestToAdd;                                         //CPF_NeedCtorLink
	TArray<class FString> szAOldCopyOfSrvRest;                                //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iTotOldMenuRest;                                                      //0
	INT iRestToRemove;                                                        //0
	INT iRestToAdd;                                                           //0
	BITFIELD bSettingsChange : 1;                                             //0
	BITFIELD bFindRes : 1;                                                    //0
};
struct UR6MenuMPRestKitMain_execSendNewRestrictionsKit_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class AR6GameReplicationInfo* R6GameRepInfo;                              //0
	BITFIELD bSettingsChange : 1;                                             //0
};
struct UR6MenuMPRestKitMain_execCopyStaticAToDynA_Parms
{
	class FString _ASrvRest[32];                                              //CPF_Parm|CPF_NeedCtorLink
	TArray<class FString> _ASrvRestCopy;                                      //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitMain_execRefreshKitRest_Parms
{
	class AR6GameReplicationInfo* pGameRepInfo;                               //0
	class UR6MenuInGameMultiPlayerRootWindow* R6CurrentRoot;                  //0
};
struct UR6MenuMPRestKitMain_execRefresh_Parms
{
	class FString szTextBox;                                                  //CPF_NeedCtorLink
};
struct UR6MenuMPRestKitMain_execRefreshCreateGameKitRest_Parms
{
};
struct UR6MenuMPRestKitMain_execInitRightPart_Parms
{
	class AR6GameReplicationInfo* pGameRepInfo;                               //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	BITFIELD bInGame : 1;                                                     //0
};
struct UR6MenuMPRestKitMain_execCreateKitRestriction_Parms
{
	class FString szTemp;                                                     //CPF_NeedCtorLink
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
	BITFIELD bInGame : 1;                                                     //0
	class AR6GameReplicationInfo* pGameRepInfo;                               //0
};

// *****************************************************************************
// UR6MenuMPRestKitMain (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPRestKitMain : public UUWindowDialogClientWindow
{
public:
	BITFIELD m_bUpdateInBetRound : 1;                                         //0
	BITFIELD m_bUpdateGameProgress : 1;                                       //0
	BITFIELD m_bImAnAdmin : 1;                                                //0
	class UR6MenuButtonsDefines* m_pButtonsDef;                               //0
	class UR6MenuSimpleWindow* m_pRestKitOptFakeW;                            //0
	class UR6WindowTextLabelExt* m_pKitText;                                  //0
	class UR6WindowButtonBox* m_pKitSubMachinesGuns;                          //0
	class UR6WindowButtonBox* m_pKitShotGuns;                                 //0
	class UR6WindowButtonBox* m_pKitAssaultRifles;                            //0
	class UR6WindowButtonBox* m_pKitMachinesGuns;                             //0
	class UR6WindowButtonBox* m_pKitSniperRifles;                             //0
	class UR6WindowButtonBox* m_pKitPistols;                                  //0
	class UR6WindowButtonBox* m_pKitMachinePistols;                           //0
	class UR6WindowButtonBox* m_pKitPrimaryWeapon;                            //0
	class UR6WindowButtonBox* m_pKitSecWeapon;                                //0
	class UR6WindowButtonBox* m_pKitMisc;                                     //0
	class UR6MenuMPRestKitSub* m_pSubMachinesGunsTab;                         //0
	class UR6MenuMPRestKitSub* m_pShotgunsTab;                                //0
	class UR6MenuMPRestKitSub* m_pAssaultRifleTab;                            //0
	class UR6MenuMPRestKitSub* m_pMachineGunsTab;                             //0
	class UR6MenuMPRestKitSub* m_pSniperRifleTab;                             //0
	class UR6MenuMPRestKitSub* m_pPistolTab;                                  //0
	class UR6MenuMPRestKitSub* m_pMachinePistolTab;                           //0
	class UR6MenuMPRestKitSub* m_pPriWpnGadgetTab;                            //0
	class UR6MenuMPRestKitSub* m_pSecWpnGadgetTab;                            //0
	class UR6MenuMPRestKitSub* m_pMiscGadgetTab;                              //0
	class UR6MenuMPRestKitSub* m_pCurrentSubKit;                              //0
	TArray<class FString> m_SrvRestSubMachineGunsACopy;                       //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestShotGunsACopy;                             //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestAssultRiflesACopy;                         //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestMachineGunsACopy;                          //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestSniperRiflesACopy;                         //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestPistolsACopy;                              //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestMachinePistolsACopy;                       //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestPrimaryACopy;                              //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestSecondaryACopy;                            //CPF_NeedCtorLink
	TArray<class FString> m_SrvRestMiscGadgetsACopy;                          //CPF_NeedCtorLink
	class FString m_ATextBoxLoc[2];                                           //CPF_NeedCtorLink
};
struct UR6MenuUbiComModsWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuUbiComModsWidget_execShowWindow_Parms
{
};
struct UR6MenuUbiComModsWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuUbiComModsWidget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuUbiComModsWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuUbiComModsWidget : public UR6MenuWidget
{
public:
	class UR6WindowTextLabelCurved* m_pOptionsTextLabel;                      //0
	class UR6WindowTextLabel* m_LMenuTitle;                                   //0
	class UR6WindowSimpleFramedWindowExt* m_pOptionsBorder;                   //0
	class UR6MenuOptionsMODSExt* m_pListOfMods;                               //0
	class UR6WindowButton* m_ButtonQuit;                                      //0
	class UR6WindowButton* m_ButtonReturnUbiCom;                              //0
};
struct UR6MenuListModeButton_execShowPopup_Parms
{
	FLOAT fGlobalLeft;                                                        //0
	FLOAT fGlobalTop;                                                         //0
};
struct UR6MenuListModeButton_execShowWindow_Parms
{
	BYTE eMode;                                                               //0
};
struct UR6MenuListModeButton_execHidePopup_Parms
{
};
struct UR6MenuListModeButton_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
	class UR6PlanningInfo* Planning;                                          //0
};
struct UR6MenuListModeButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuListModeButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuListModeButton : public UR6MenuPopupListButton
{
public:
	BITFIELD m_bAutoSelect : 1;                                               //0
	class UR6MenuSpeedMenu* m_WinSpeed;                                       //0
};
struct UR6ColorPicker_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT iSelectedColorIndex;                                                  //0
};
struct UR6ColorPicker_execGetSelectedColor_Parms
{
	class FColor ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6ColorPicker_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6ColorPicker (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6ColorPicker : public UUWindowDialogControl
{
public:
	INT m_iSelectedColorIndex;                                                //0
	class FColor m_aColorChoice[5];                                           //0
};

enum eButInGameActionType{
	 Button_AlphaTeam=0
	,Button_BravoTeam=1
	,Button_AutoTeam=2
	,Button_Spectator=3
	,Button_Play=4
};
struct UR6WindowButtonMPInGame_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};

// *****************************************************************************
// UR6WindowButtonMPInGame (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonMPInGame : public UR6WindowButton
{
public:
	BYTE m_eButInGame_Action;                                                 //0
	class UTexture* m_TOverButton;                                            //0
	struct FRegion m_ROverButtonFade;                                         //0
	struct FRegion m_ROverButton;                                             //0
};

enum e2DEquipment{
	 Primary_Weapon=0
	,Primary_WeaponGadget=1
	,Primary_Bullet=2
	,Primary_Gadget=3
	,Secondary_Weapon=4
	,Secondary_WeaponGadget=5
	,Secondary_Bullet=6
	,Secondary_Gadget=7
};
struct UR6MenuMPAdvGearWidget_execCheckGadget_Parms
{
	class FString _gadgetDesc;                                                //CPF_Parm|CPF_NeedCtorLink
	class UUWindowWindow* _caller;                                            //CPF_Parm
	BITFIELD _isSecondGadget : 1;                                             //CPF_Parm
	class UClass _replaceGadgetClass;                                         //CPF_Parm|CPF_OutParm
	class FString _otherGadget;                                               //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPAdvGearWidget_execRefreshGearInfo_Parms
{
	BITFIELD _bForceUpdate : 1;                                               //CPF_Parm
};
struct UR6MenuMPAdvGearWidget_execGetGadgetTexture_Parms
{
	class UClass* _CurrentGadget;                                             //CPF_Parm
	struct FTexRegion ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bFound : 1;                                                      //0
	class FString Tag;                                                        //CPF_NeedCtorLink
	INT i;                                                                    //0
	struct FTexRegion TR;                                                     //0
};
struct UR6MenuMPAdvGearWidget_execEquipmentChanged_Parms
{
	INT EquipmentSelected;                                                    //CPF_Parm
	class UClass* DecriptionClass;                                            //CPF_Parm
	class UClass* inDescriptionClass;                                         //0
};
struct UR6MenuMPAdvGearWidget_execEquipmentSelected_Parms
{
	BYTE EquipmentSelected;                                                   //CPF_Parm
	class UR6WindowListBoxItem* TempItem;                                     //0
};
struct UR6MenuMPAdvGearWidget_execCancelSelection_Parms
{
};
struct UR6MenuMPAdvGearWidget_execAcceptSelection_Parms
{
};
struct UR6MenuMPAdvGearWidget_execSetClassEquipment_Parms
{
};
struct UR6MenuMPAdvGearWidget_execSetOperativeEquipment_Parms
{
	BITFIELD _bCopyBkpToCurrent : 1;                                          //CPF_Parm
};
struct UR6MenuMPAdvGearWidget_execsetMenuComEquipment_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPAdvGearWidget_execVerifyEquipment_Parms
{
	INT _equipmentType;                                                       //CPF_Parm
	class FString _szEquipmentToValid;                                        //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class FString szEquipmentFind;                                            //CPF_NeedCtorLink
	INT i;                                                                    //0
	class UClass* PriWpnClass;                                                //0
	class FString szClassName;                                                //CPF_NeedCtorLink
	BITFIELD bFound : 1;                                                      //0
	class UClass* replacedGadgetClass;                                        //0
};
struct UR6MenuMPAdvGearWidget_execVerifyAllEquipment_Parms
{
	class FString _szPrimaryWeapon;                                           //CPF_Parm|CPF_NeedCtorLink
	class FString _szPrimaryWeaponGadget;                                     //CPF_Parm|CPF_NeedCtorLink
	class FString _szPrimaryGadget;                                           //CPF_Parm|CPF_NeedCtorLink
	class FString _szSecondaryWeapon;                                         //CPF_Parm|CPF_NeedCtorLink
	class FString _szSecondaryWeaponGadget;                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szSecondaryGadget;                                         //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMPAdvGearWidget_execGetMenuComEquipment_Parms
{
	BITFIELD _bCkeckEquipment : 1;                                            //CPF_Parm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPAdvGearWidget_execShowWindow_Parms
{
};
struct UR6MenuMPAdvGearWidget_execCreated_Parms
{
	INT labelWidth;                                                           //0
	struct FRegion R;                                                         //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
	class UClass* ExtraMags;                                                  //0
};

// *****************************************************************************
// UR6MenuMPAdvGearWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPAdvGearWidget : public UR6MenuWidget
{
public:
	BYTE m_e2DCurEquipmentSel;                                                //0
	INT m_iCounter;                                                           //0
	BITFIELD bShowLog : 1;                                                    //0
	class UR6MenuMPAdvEquipmentSelectControl* m_Equipment2dSelect;            //0
	class UR6MenuMPAdvEquipmentDetailControl* m_EquipmentDetails;             //0
	class UR6Operative* m_currentOperative;                                   //0
	class UR6Operative* m_BkpOperative;                                       //0
	class UR6DescPrimaryMags* m_PrimaryMagsGadget;                            //0
	class UClass* m_OpFirstWeaponDesc;                                        //0
	class UClass* m_OpSecondaryWeaponDesc;                                    //0
	class UClass* m_OpFirstWeaponGadgetDesc;                                  //0
	class UClass* m_OpSecondWeaponGadgetDesc;                                 //0
	class UClass* m_OpFirstWeaponBulletDesc;                                  //0
	class UClass* m_OpSecondWeaponBulletDesc;                                 //0
	class UClass* m_OpFirstGadgetDesc;                                        //0
	class UClass* m_OpSecondGadgetDesc;                                       //0
	class FString PrimaryGadgetDesc;                                          //CPF_NeedCtorLink
};

enum eIconType{
	 IT_Ready=0
	,IT_Health=1
	,IT_RoundsWon=2
	,IT_Kill=3
	,IT_DeadCounter=4
	,IT_Efficiency=5
	,IT_RoundFired=6
	,IT_RoundTaken=7
	,IT_KillerName=8
	,IT_Ping=9
};
enum eMenuLayout{
	 eML_Ready=0
	,eML_HealthStatus=1
	,eML_Name=2
	,eML_RoundsWon=3
	,eML_Kill=4
	,eML_DeadCounter=5
	,eML_Efficiency=6
	,eML_RoundFired=7
	,eML_RoundHit=8
	,eML_KillerName=9
	,eML_PingTime=10
};

// -----------------------------------------------------------------------------
// FstCoord ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstCoord
{
public:
	FLOAT fXPos;                                                          //0
	FLOAT fWidth;                                                         //0
};
struct UR6MenuMPTeamBar_execInitMenuLayout_Parms
{
	INT _MenuToDisplay;                                                       //CPF_Parm
};
struct UR6MenuMPTeamBar_execInitMissionWindows_Parms
{
};
struct UR6MenuMPTeamBar_execInitIGPlayerInfoList_Parms
{
};
struct UR6MenuMPTeamBar_execInitTeamBar_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
};
struct UR6MenuMPTeamBar_execDrawInGameTeamBarDownBorder_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6MenuMPTeamBar_execDrawInGameTeamBarUpBorder_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6MenuMPTeamBar_execAddIcon_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	BYTE _eIconType;                                                          //CPF_Parm
	struct FRegion RIconRegion;                                               //0
	struct FRegion RIconToDraw;                                               //0
	class UR6MenuRSLookAndFeel* R6LAF;                                        //0
	FLOAT fY;                                                                 //0
};
struct UR6MenuMPTeamBar_execAddVerticalLine_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6MenuMPTeamBar_execDrawInGameTeamBar_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	FLOAT fXOffset;                                                           //0
	FLOAT fWidth;                                                             //0
};
struct UR6MenuMPTeamBar_execGetPlayerListBorderHeight_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPTeamBar_execClearListOfItem_Parms
{
	class UR6WindowListIGPlayerInfoItem* NewItem;                             //0
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
	BITFIELD bAlreadyCreate : 1;                                              //0
};
struct UR6MenuMPTeamBar_execAddItems_Parms
{
	INT _iTeam;                                                               //CPF_Parm
	INT _iTotalOfPlayers;                                                     //CPF_Parm
	class UR6WindowListIGPlayerInfoItem* NewItem;                             //0
	class UUWindowList* CurItem;                                              //0
	class UUWindowList* ParseItem;                                            //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class UR6WindowIGPlayerInfoListBox* pListTemp;                            //0
	INT i;                                                                    //0
	INT iIndex;                                                               //0
	INT j;                                                                    //0
	BITFIELD bAddItem : 1;                                                    //0
	struct FPlayerMenuInfo _PlayerMenuInfo;                                   //CPF_NeedCtorLink
	class UR6MenuMPInterWidget* MpInter;                                      //0
	INT iTeamPlayerCount;                                                     //0
};
struct UR6MenuMPTeamBar_execRefresh_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
};
struct UR6MenuMPTeamBar_execRefreshTeamBarInfo_Parms
{
	INT _iTeam;                                                               //CPF_Parm
	INT iTotalOfPlayers;                                                      //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPTeamBar_execSetWindowSize_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	FLOAT fOldTop;                                                            //0
	FLOAT fOldLeft;                                                           //0
};
struct UR6MenuMPTeamBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6MenuMPTeamBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPTeamBar : public UUWindowWindow
{
public:
	INT m_iIndex[9];                                                          //0
	INT m_iTotalKills;                                                        //0
	INT m_iTotalNbOfDead;                                                     //0
	INT m_iTotalEfficiency;                                                   //0
	INT m_iTotalRoundsFired;                                                  //0
	INT m_iTotalRoundsTaken;                                                  //0
	INT m_iTotalRoomTake;                                                     //0
	BITFIELD m_bTeamMenuLayout : 1;                                           //0
	BITFIELD m_bDisplayObj : 1;                                               //0
	class UTexture* m_TIcon;                                                  //0
	class UR6WindowTextLabelExt* m_pTextTeamBar;                              //0
	class UR6WindowIGPlayerInfoListBox* m_IGPlayerInfoListBox;                //0
	class UR6WindowTextLabel* m_pTitleCoop;                                   //0
	class UR6MenuMPInGameObj* m_pMissionObj;                                  //0
	class FColor m_vTeamColor;                                                //0
	struct FstCoord m_stMenuCoord[11];                                        //0
	class FString m_szTeamName;                                               //CPF_NeedCtorLink
};
struct UR6MenuMPInterHeader_execReset_Parms
{
};
struct UR6MenuMPInterHeader_execResetDisplayInfo_Parms
{
};
struct UR6MenuMPInterHeader_execRefreshRoundInfo_Parms
{
	class AR6GameReplicationInfo* r6GameRep;                                  //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInterHeader_execRefreshInterHeaderInfo_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	class FString szIP;                                                       //CPF_NeedCtorLink
	class FString szGameType;                                                 //CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	FLOAT fCurrentTime;                                                       //0
	class AR6GameReplicationInfo* r6GameRep;                                  //0
	class UR6MenuMPInterWidget* MpInter;                                      //0
};
struct UR6MenuMPInterHeader_execInitTextHeader_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTemp;                                                              //0
	FLOAT fSizeOfCounter;                                                     //0
	class UFont* ButtonFont;                                                  //0
};
struct UR6MenuMPInterHeader_execDrawTeamScore_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FColor _cTeamColor;                                                 //CPF_Parm
	class FColor _cBGColor;                                                   //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
};
struct UR6MenuMPInterHeader_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fX;                                                                 //0
};
struct UR6MenuMPInterHeader_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPInterHeader (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInterHeader : public UUWindowWindow
{
public:
	INT m_iIndex[9];                                                          //0
	BITFIELD m_bDisplayTotVictory : 1;                                        //0
	BITFIELD m_bDisplayCoopStatus : 1;                                        //0
	BITFIELD m_bDisplayCoopBox : 1;                                           //0
	class UR6WindowTextLabelExt* m_pTextHeader;                               //0
	class FString m_szGameResult[5];                                          //CPF_NeedCtorLink
};
struct UR6MenuMPInGameNavBar_execSetNavBarButtonsStatus_Parms
{
	BITFIELD _bDisplay : 1;                                                   //CPF_Parm
};
struct UR6MenuMPInGameNavBar_execSetNavBarState_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
	BITFIELD _bDisableAllExceptReadyBut : 1;                                  //CPF_Parm
};
struct UR6MenuMPInGameNavBar_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMPInGameNavBar_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameNavBar_execAlignButtons_Parms
{
	FLOAT fFreeSpace;                                                         //0
	FLOAT fDistanceBetEachBut;                                                //0
};
struct UR6MenuMPInGameNavBar_execCheckForNavBarState_Parms
{
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPInGameNavBar_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPInGameNavBar_execCreated_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fHeight;                                                            //0
};

// *****************************************************************************
// UR6MenuMPInGameNavBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameNavBar : public UUWindowDialogClientWindow
{
public:
	INT m_iXNavBarLoc[4];                                                     //0
	INT m_iYNavBarLoc[4];                                                     //0
	FLOAT m_fPlayerButWidth;                                                  //0
	class UR6MenuMPInGameHelpBar* m_HelpTextBar;                              //0
	class UR6WindowButton* m_SelectTeamButton;                                //0
	class UR6WindowButton* m_ServerOptButton;                                 //0
	class UR6WindowButton* m_KitRestrictionButton;                            //0
	class UR6WindowButton* m_GearButton;                                      //0
	class UR6WindowButtonBox* m_pPlayerReady;                                 //0
	class UTexture* m_TSelectTeamButton;                                      //0
	class UTexture* m_TServerOptButton;                                       //0
	class UTexture* m_TKitRestrictionButton;                                  //0
	class UTexture* m_TGearButton;                                            //0
	struct FRegion m_RSelectTeamButtonUp;                                     //0
	struct FRegion m_RSelectTeamButtonDown;                                   //0
	struct FRegion m_RSelectTeamButtonDisabled;                               //0
	struct FRegion m_RSelectTeamButtonOver;                                   //0
	struct FRegion m_RServerOptButtonUp;                                      //0
	struct FRegion m_RServerOptButtonDown;                                    //0
	struct FRegion m_RServerOptButtonDisabled;                                //0
	struct FRegion m_RServerOptButtonOver;                                    //0
	struct FRegion m_RKitRestrictionButtonUp;                                 //0
	struct FRegion m_RKitRestrictionButtonDown;                               //0
	struct FRegion m_RKitRestrictionButtonDisabled;                           //0
	struct FRegion m_RKitRestrictionButtonOver;                               //0
	struct FRegion m_RGearButtonUp;                                           //0
	struct FRegion m_RGearButtonDown;                                         //0
	struct FRegion m_RGearButtonDisabled;                                     //0
	struct FRegion m_RGearButtonOver;                                         //0
};
struct UR6OperativeSelectorItem_execGetCharacterName_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6OperativeSelectorItem_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT iLifeU;                                                               //0
	INT iWeapon;                                                              //0
	BITFIELD bIsDead : 1;                                                     //0
	BITFIELD bCurrentSelection : 1;                                           //0
	BYTE NameAlpha;                                                           //0
	class FColor NameColor;                                                   //0
	class FColor NameBackgroundColor;                                         //0
	BYTE NameBackgroundAlpha;                                                 //0
	BYTE SpecAlpha;                                                           //0
	class FColor SpecColor;                                                   //0
	class FColor SpecAndWeaponBackgroundColor;                                //0
	BYTE SpecAndWeaponBackgroundAlpha;                                        //0
	class FColor WeaponColor;                                                 //0
	BYTE WeaponAlpha;                                                         //0
	BYTE FaceAlpha;                                                           //0
	class FColor LineColor;                                                   //0
	BYTE LineAlpha;                                                           //0
	class FString Name;                                                       //CPF_NeedCtorLink
	BITFIELD bIsPrimaryGadgetEmpty : 1;                                       //0
	BITFIELD bIsSecondaryGadgetEmpty : 1;                                     //0
	FLOAT fPosX;                                                              //0
	FLOAT fPosY;                                                              //0
	class APlayerController* PlayerOwner;                                     //0
};
struct UR6OperativeSelectorItem_execUpdatePositionMP_Parms
{
};
struct UR6OperativeSelectorItem_execUpdatePosition_Parms
{
};
struct UR6OperativeSelectorItem_execUpdateGadgets_Parms
{
	BITFIELD bIsPrimaryGadgetEmpty : 1;                                       //0
	BITFIELD bIsPrimaryGadgetSet : 1;                                         //0
	BITFIELD bIsSecondaryGadgetEmpty : 1;                                     //0
	BITFIELD bIsSecondaryGadgetSet : 1;                                       //0
};
struct UR6OperativeSelectorItem_execMouseLeave_Parms
{
};
struct UR6OperativeSelectorItem_execMouseEnter_Parms
{
};
struct UR6OperativeSelectorItem_execSetCharacterInfoMP_Parms
{
	class AR6TeamMemberReplicationInfo* repInfo;                              //CPF_Parm
};
struct UR6OperativeSelectorItem_execSetCharacterInfo_Parms
{
	class AR6Rainbow* Character;                                              //CPF_Parm
	INT iWeapon;                                                              //0
};
struct UR6OperativeSelectorItem_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6PlayerController* PlayerOwner;                                   //0
	class AR6RainbowTeam* teamManager;                                        //0
};

// *****************************************************************************
// UR6OperativeSelectorItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6OperativeSelectorItem : public UUWindowDialogControl
{
public:
	BYTE m_eHealth;                                                           //0
	INT m_iOperativeIndex;                                                    //0
	INT m_iTeam;                                                              //0
	INT NameX;                                                                //0
	INT NameY;                                                                //0
	INT SpecX;                                                                //0
	INT SpecY;                                                                //0
	INT WeaponX;                                                              //0
	INT WeaponY;                                                              //0
	INT WeaponHeight;                                                         //0
	INT LifeX;                                                                //0
	INT LifeY;                                                                //0
	BITFIELD m_bMouseOver : 1;                                                //0
	BITFIELD m_bIsDead : 1;                                                   //0
	BITFIELD m_bIsSinglePlayer : 1;                                           //0
	class AR6Rainbow* m_Operative;                                            //0
	class AR6TeamMemberReplicationInfo* m_MemberRepInfo;                      //0
	class USound* m_OperativeSelectSnd;                                       //0
	class UMaterial* HealthIconTexture;                                       //0
	class UMaterial* DefaultFaceTexture;                                      //0
	class FColor m_DarkColor;                                                 //0
	class FColor m_NormalColor;                                               //0
	class FPlane DefaultFaceCoords;                                           //0
	class FString m_szSpeciality;                                             //CPF_NeedCtorLink
	class FString m_WeaponsName[4];                                           //CPF_NeedCtorLink
	class FString m_szName;                                                   //CPF_NeedCtorLink
};
struct UR6MenuObjectiveLabel_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuObjectiveLabel_execSetNewLabelWindowSizes_Parms
{
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _W;                                                                 //CPF_Parm
	FLOAT _H;                                                                 //CPF_Parm
};
struct UR6MenuObjectiveLabel_execSetProperties_Parms
{
	class FString _Objective;                                                 //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _completed : 1;                                                  //CPF_Parm
	class FString _szFailed;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuObjectiveLabel_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuObjectiveLabel (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuObjectiveLabel : public UUWindowWindow
{
public:
	BITFIELD m_bObjectiveCompleted : 1;                                       //0
	FLOAT m_fYPaddingBetweenElements;                                         //0
	class UR6WindowTextLabel* m_Objective;                                    //0
	class UR6WindowTextLabel* m_ObjectiveFailed;                              //0
	class UTexture* m_TCheckBoxBorder;                                        //0
	class UTexture* m_TCheckBoxMark;                                          //0
	struct FRegion m_RCheckBoxBorder;                                         //0
	struct FRegion m_RCheckBoxMark;                                           //0
};
struct UR6MenuMPInGameHelpBar_execGetToolTip_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6MenuMPInGameHelpBar_execSetToolTip_Parms
{
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuMPInGameHelpBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPInGameHelpBar_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};

// *****************************************************************************
// UR6MenuMPInGameHelpBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPInGameHelpBar : public UR6MenuHelpTextBar
{
public:
	BITFIELD m_bUseExternSetTip : 1;                                          //0
	class FString m_szExternTip;                                              //CPF_NeedCtorLink
};
struct UR6MenuArmpatchSelect_execSetToolTip_Parms
{
	class FString _InString;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuArmpatchSelect_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuArmpatchSelect_execGetSelectedArmpatch_Parms
{
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6MenuArmpatchSelect_execSetDesiredSelectedArmpatch_Parms
{
	class FString _ArmPatchName;                                              //CPF_Parm|CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
	class UR6WindowListBoxItem* CurItem;                                      //0
	class FString inString;                                                   //CPF_NeedCtorLink
};
struct UR6MenuArmpatchSelect_execRefreshListBox_Parms
{
	INT iFiles;                                                               //0
	INT i;                                                                    //0
	class FString szFileName;                                                 //CPF_NeedCtorLink
	class UR6WindowListBoxItem* NewItem;                                      //0
};
struct UR6MenuArmpatchSelect_execCreateArmPatchBitmap_Parms
{
	INT X;                                                                    //CPF_Parm
	INT Y;                                                                    //CPF_Parm
	INT W;                                                                    //CPF_Parm
	INT H;                                                                    //CPF_Parm
};
struct UR6MenuArmpatchSelect_execCreateTextLabel_Parms
{
	INT X;                                                                    //CPF_Parm
	INT Y;                                                                    //CPF_Parm
	INT W;                                                                    //CPF_Parm
	INT H;                                                                    //CPF_Parm
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuArmpatchSelect_execCreateListBox_Parms
{
	INT X;                                                                    //CPF_Parm
	INT Y;                                                                    //CPF_Parm
	INT W;                                                                    //CPF_Parm
	INT H;                                                                    //CPF_Parm
};

// *****************************************************************************
// UR6MenuArmpatchSelect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuArmpatchSelect : public UUWindowDialogClientWindow
{
public:
	class UR6WindowTextListBox* m_ArmPatchListBox;                            //0
	class UR6WindowTextLabelExt* m_pTextLabel;                                //0
	class UUWindowBitmap* m_ArmpatchBitmap;                                   //0
	class UTexture* m_TDefaultTexture;                                        //0
	class UTexture* m_TBlankTexture;                                          //0
	class UTexture* m_TInvalidTexture;                                        //0
	class UR6WindowListBoxItem* m_DefaultItem;                                //0
	class UR6FileManager* m_pFileManager;                                     //0
	struct FRegion m_RBlankTexture;                                           //0
	class FString m_path;                                                     //CPF_NeedCtorLink
	class FString m_Ext;                                                      //CPF_NeedCtorLink
};
struct UR6MenuOptionsMapKeys_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsMapKeys_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsMapKeys_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsMapKeys_execMMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsMapKeys_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsMapKeys_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOptionsMapKeys_execHideWindow_Parms
{
};
struct UR6MenuOptionsMapKeys_execShowWindow_Parms
{
};
struct UR6MenuOptionsMapKeys_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuOptionsMapKeys_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOptionsMapKeys (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsMapKeys : public UUWindowDialogControl
{
public:
	INT m_iLastKeyPressed;                                                    //0
	class UR6WindowButton* m_pCancelButton;                                   //0
};
struct UR6MenuMPArmor_execForceMouseOver_Parms
{
	BITFIELD _bForceMouseOver : 1;                                            //CPF_Parm
};
struct UR6MenuMPArmor_execSetArmorBorderColor_Parms
{
	class UUWindowDialogControl* _ArmorButton;                                //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPArmor_execIsRedArmorSelect_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPArmor_execIsGreenArmorSelect_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPArmor_execSetHighLightRedArmor_Parms
{
	BITFIELD _bHighLight : 1;                                                 //CPF_Parm
};
struct UR6MenuMPArmor_execSetHighLightGreenArmor_Parms
{
	BITFIELD _bHighLight : 1;                                                 //CPF_Parm
};
struct UR6MenuMPArmor_execSetButtonsStatus_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
	BITFIELD _bRedTeam : 1;                                                   //CPF_Parm
	struct FRegion R;                                                         //0
};
struct UR6MenuMPArmor_execSetArmorTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
	BITFIELD _bRedTeam : 1;                                                   //CPF_Parm
};
struct UR6MenuMPArmor_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuMPArmor_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPArmor (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPArmor : public UUWindowDialogControl
{
public:
	class UR6WindowButtonGear* m_2DArmor;                                     //0
	class UR6WindowButtonGear* m_2DArmorRed;                                  //0
};
struct UR6MenuTimeLineBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineBar_execStopPlayMode_Parms
{
	class UR6MenuPlanningBar* PlanningBarWindow;                              //0
};
struct UR6MenuTimeLineBar_execActivatePlayMode_Parms
{
	class UR6MenuPlanningBar* PlanningBarWindow;                              //0
};
struct UR6MenuTimeLineBar_execReset_Parms
{
};
struct UR6MenuTimeLineBar_execCreated_Parms
{
	INT xPosition;                                                            //0
};

// *****************************************************************************
// UR6MenuTimeLineBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTimeLineBar : public UUWindowWindow
{
public:
	class UR6WindowButton* m_Button[6];                                       //0
};
struct UR6MenuPopUpStayDownButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuPopUpStayDownButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fGlobalX;                                                           //0
	FLOAT fGlobalY;                                                           //0
};
struct UR6MenuPopUpStayDownButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuPopUpStayDownButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuPopUpStayDownButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuPopUpStayDownButton : public UR6WindowButton
{
public:
	BITFIELD m_bSubMenu : 1;                                                  //0
};
struct UR6MenuLoadPlan_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class FString DelPlanMsg;                                                 //CPF_NeedCtorLink
};
struct UR6MenuLoadPlan_execResized_Parms
{
};
struct UR6MenuLoadPlan_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLoadPlan (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLoadPlan : public UUWindowDialogClientWindow
{
public:
	INT m_IBXPos;                                                             //0
	INT m_IBYPos;                                                             //0
	class UR6WindowTextListBox* m_pListOfSavedPlan;                           //0
	class UR6WindowButton* m_BDeletePlan;                                     //0
};
struct UR6MenuSavePlan_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class FString DelPlanMsg;                                                 //CPF_NeedCtorLink
};
struct UR6MenuSavePlan_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuSavePlan_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuSavePlan (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSavePlan : public UUWindowDialogClientWindow
{
public:
	INT m_IBXPos;                                                             //0
	INT m_IBYPos;                                                             //0
	class UR6WindowEditBox* m_pEditSaveNameBox;                               //0
	class UR6WindowTextListBox* m_pListOfSavedPlan;                           //0
	class UR6WindowButton* m_BDeletePlan;                                     //0
};
struct UR6MenuActionMenu_execAjustPosition_Parms
{
	BITFIELD bDisplayUp : 1;                                                  //CPF_Parm
	BITFIELD bDisplayLeft : 1;                                                //CPF_Parm
};
struct UR6MenuActionMenu_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuActionMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuActionMenu : public UR6MenuFramePopup
{
};
struct UR6MenuListActionButton_execShowWindow_Parms
{
	BYTE eAction;                                                             //0
};
struct UR6MenuListActionButton_execDisplayBreachDoor_Parms
{
	BITFIELD bDoIDisplay : 1;                                                 //CPF_Parm
};
struct UR6MenuListActionButton_execDisplaySnipeButton_Parms
{
	BITFIELD bDoIDisplay : 1;                                                 //CPF_Parm
};
struct UR6MenuListActionButton_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
	class UR6PlanningInfo* Planning;                                          //0
	class AR6PlanningCtrl* OwnerCtrl;                                         //0
	class UR6MenuActionButtonItem* SelectedItem;                              //0
};
struct UR6MenuListActionButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuListActionButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuListActionButton : public UR6MenuPopupListButton
{
public:
	BITFIELD m_bAutoSelect : 1;                                               //0
};

// *****************************************************************************
// UR6MenuActionTypeButtonItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuActionTypeButtonItem : public UR6WindowListButtonItem
{
public:
	BYTE m_eActionType;                                                       //0
};
struct UR6MenuTeamBar_execEscClose_Parms
{
};
struct UR6MenuTeamBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTeamBar_execReset_Parms
{
	class AR6PlanningCtrl* OwnerCtrl;                                         //0
};
struct UR6MenuTeamBar_execCreated_Parms
{
	INT i;                                                                    //0
	INT xPosition;                                                            //0
};
struct UR6MenuTeamBar_execResetTeams_Parms
{
	INT iWhatToReset;                                                         //CPF_Parm
	class AR6PlanningCtrl* OwnerCtrl;                                         //0
};
struct UR6MenuTeamBar_execSetTeamActive_Parms
{
	INT iActive;                                                              //CPF_Parm
	class AR6PlanningCtrl* OwnerCtrl;                                         //0
};

// *****************************************************************************
// UR6MenuTeamBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTeamBar : public UUWindowWindow
{
public:
	class UR6MenuTeamDisplayButton* m_DisplayList[3];                         //0
	class UR6MenuTeamButton* m_ActiveList[3];                                 //0
};
struct UR6MenuDelNodeBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuDelNodeBar_execCreated_Parms
{
	INT xPosition;                                                            //0
};

// *****************************************************************************
// UR6MenuDelNodeBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuDelNodeBar : public UUWindowWindow
{
public:
	class UR6WindowButton* m_Button[3];                                       //0
};
struct UR6MenuViewCamBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuViewCamBar_execKeepActive_Parms
{
	INT iActive;                                                              //CPF_Parm
};
struct UR6MenuViewCamBar_execCreated_Parms
{
	INT xPosition;                                                            //0
};

// *****************************************************************************
// UR6MenuViewCamBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuViewCamBar : public UUWindowWindow
{
public:
	class UR6WindowButton* m_Button[6];                                       //0
};
struct UR6LegendPreviousPageButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6LegendPreviousPageButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6LegendPreviousPageButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6LegendPreviousPageButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6LegendPreviousPageButton : public UUWindowButton
{
};
struct UR6LegendNextPageButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6LegendNextPageButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6LegendNextPageButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6LegendNextPageButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6LegendNextPageButton : public UUWindowButton
{
};
struct UR6MenuLegendPageObject_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLegendPageObject (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendPageObject : public UR6MenuLegendPage
{
};
struct UR6MenuLegendPageInteractive_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLegendPageInteractive (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendPageInteractive : public UR6MenuLegendPage
{
};
struct UR6MenuLegendPageROE_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLegendPageROE (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendPageROE : public UR6MenuLegendPage
{
};
struct UR6MenuLegendPageWPDesc_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLegendPageWPDesc (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendPageWPDesc : public UR6MenuLegendPage
{
};
struct UR6MenuLegendPageActions_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuLegendPageActions (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendPageActions : public UR6MenuLegendPage
{
};
struct UR6MenuDebriefingWidget_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuDebriefingWidget_execDisplayOperativeStats_Parms
{
	INT _OperativeId;                                                         //CPF_Parm
	class UR6Operative* tmpOperative;                                         //0
	class UR6PlayerCampaign* MyCampaign;                                      //0
	class UR6MissionRoster* PlayerCampaignOperatives;                         //0
	class UR6WindowListIGPlayerInfoItem* SelectedItem;                        //0
	struct FRegion R;                                                         //0
};
struct UR6MenuDebriefingWidget_execBuildMissionOperatives_Parms
{
	class UR6Operative* tmpOperative;                                         //0
	class UR6WindowListIGPlayerInfoItem* tmpItem;                             //0
};
struct UR6MenuDebriefingWidget_execHideWindow_Parms
{
	class UCanvas* C;                                                         //0
};
struct UR6MenuDebriefingWidget_execShowWindow_Parms
{
	class UR6MissionDescription* CurrentMission;                              //0
	class AR6MissionObjectiveMgr* moMgr;                                      //0
	INT i;                                                                    //0
	class FString szObjectiveDesc;                                            //CPF_NeedCtorLink
	class UCanvas* C;                                                         //0
};
struct UR6MenuDebriefingWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuDebriefingWidget_execCreated_Parms
{
	FLOAT labelWidth;                                                         //0
	FLOAT NavXPos;                                                            //0
	FLOAT fStatsHeight;                                                       //0
	FLOAT fStatsWidth;                                                        //0
};

// *****************************************************************************
// UR6MenuDebriefingWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuDebriefingWidget : public UR6MenuLaptopWidget
{
public:
	INT m_iCountFrame;                                                        //0
	BITFIELD m_bReadyShowWindow : 1;                                          //0
	BITFIELD m_bMissionVictory : 1;                                           //0
	FLOAT m_fObjHeight;                                                       //0
	FLOAT m_fMissionResultTitleHeight;                                        //0
	FLOAT m_fMissionResultTitleWidth;                                         //0
	FLOAT m_fNavAreaY;                                                        //0
	FLOAT m_fPaddingBetween;                                                  //0
	FLOAT m_fStatsWidth;                                                      //0
	class UR6WindowTextLabel* m_CodeName;                                     //0
	class UR6WindowTextLabel* m_DateTime;                                     //0
	class UR6WindowTextLabel* m_Location;                                     //0
	class UR6WindowWrappedTextArea* m_MissionObjectives;                      //0
	class UR6WindowTextLabel* m_MissionResultTitle;                           //0
	class UTexture* m_TBGMissionResult;                                       //0
	class UR6MenuDebriefNavBar* m_DebriefNavBar;                              //0
	class UR6MenuSingleTeamBar* m_pR6RainbowTeamBar;                          //0
	class UR6MenuCarreerStats* m_RainbowCarreerStats;                         //0
	class USound* m_sndVictoryMusic;                                          //0
	class USound* m_sndLossMusic;                                             //0
	TArray<class UR6Operative*> m_MissionOperatives;                          //CPF_NeedCtorLink
	struct FRegion m_RBGMissionResult;                                        //0
	struct FRegion m_RBGExtMissionResult;                                     //0
};
struct UR6MenuInGameEsc_execHideWindow_Parms
{
	class UR6MenuInGameRootWindow* r6Root;                                    //0
};
struct UR6MenuInGameEsc_execShowWindow_Parms
{
	class UR6MissionDescription* CurrentMission;                              //0
	class UR6MenuInGameRootWindow* r6Root;                                    //0
};
struct UR6MenuInGameEsc_execInitTrainingEsc_Parms
{
	class UR6MenuInGameRootWindow* r6Root;                                    //0
};
struct UR6MenuInGameEsc_execInitInGameEsc_Parms
{
	FLOAT labelWidth;                                                         //0
	class UR6MenuInGameRootWindow* r6Root;                                    //0
};
struct UR6MenuInGameEsc_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuInGameEsc (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuInGameEsc : public UR6MenuWidget
{
public:
	FLOAT m_fLabelHeight;                                                     //0
	FLOAT m_fNavBarHeight;                                                    //0
	FLOAT m_fRainbowStatsHeight;                                              //0
	class UR6WindowTextLabel* m_CodeName;                                     //0
	class UR6WindowTextLabel* m_DateTime;                                     //0
	class UR6WindowTextLabel* m_Location;                                     //0
	class UR6MenuInGameEscSinglePlayerNavBar* m_pInGameNavBar;                //0
	class UR6MenuSingleTeamBar* m_pR6RainbowTeamBar;                          //0
	class UR6MenuEscObjectives* m_EscObj;                                     //0
};
struct UR6MenuInGameInstructionWidget_execResolutionChanged_Parms
{
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
};
struct UR6MenuInGameInstructionWidget_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
	FLOAT fBkpOrgY;                                                           //0
};
struct UR6MenuInGameInstructionWidget_execChangeText_Parms
{
	class AR6InstructionSoundVolume* pISV;                                    //CPF_Parm
	INT iBox;                                                                 //CPF_Parm
	INT iParagraph;                                                           //CPF_Parm
	class FString szParagraphID;                                              //CPF_NeedCtorLink
	class FString szSectionID;                                                //CPF_NeedCtorLink
	class UR6WindowWrappedTextArea* TextArea;                                 //0
};
struct UR6MenuInGameInstructionWidget_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuInGameInstructionWidget_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fHeight;                                                            //0
	FLOAT fWidth;                                                             //0
	INT iNbLines;                                                             //0
	class UR6WindowWrappedTextArea* TextArea;                                 //0
};
struct UR6MenuInGameInstructionWidget_execCreated_Parms
{
	class UR6WindowWrappedTextArea* TextArea;                                 //0
};

// *****************************************************************************
// UR6MenuInGameInstructionWidget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuInGameInstructionWidget : public UR6MenuWidget
{
public:
	INT m_iArrayHudStep[3];                                                   //0
	BITFIELD bIsChangingText : 1;                                             //0
	FLOAT m_fYInstructionTextPos;                                             //0
	class UR6WindowSimpleFramedWindow* m_InstructionText;                     //0
	class AR6InstructionSoundVolume* m_pLastIntructionVolume;                 //0
	struct FRegion m_RMsgSize;                                                //0
	class FString m_szText;                                                   //CPF_NeedCtorLink
};
struct UR6MenuOperativeSkills_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOperativeSkills_execResizeCharts_Parms
{
	class UR6Operative* _CurrentOperative;                                    //CPF_Parm
};
struct UR6MenuOperativeSkills_execCreateTitle_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class UR6MenuOperativeSkillsLabel* ReturnValue;                           //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuOperativeSkillsLabel* pWSkillLabel;                          //0
};
struct UR6MenuOperativeSkills_execCreated_Parms
{
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT TotItemHeight;                                                      //0
	FLOAT offset;                                                             //0
};

// *****************************************************************************
// UR6MenuOperativeSkills (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeSkills : public UUWindowWindow
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fAssault;                                                         //0
	FLOAT m_fDemolitions;                                                     //0
	FLOAT m_fElectronics;                                                     //0
	FLOAT m_fSniper;                                                          //0
	FLOAT m_fStealth;                                                         //0
	FLOAT m_fSelfControl;                                                     //0
	FLOAT m_fLeadership;                                                      //0
	FLOAT m_fObservation;                                                     //0
	FLOAT m_fMaxChartWidth;                                                   //0
	FLOAT m_fNLeftPadding;                                                    //0
	FLOAT m_fBetweenLabelPadding;                                             //0
	FLOAT m_fTopYPadding;                                                     //0
	FLOAT m_fTitleHeight;                                                     //0
	FLOAT m_fYPaddingBetweenElements;                                         //0
	FLOAT m_fNumericLabelWidth;                                               //0
	class UR6MenuOperativeSkillsLabel* m_TAssault;                            //0
	class UR6MenuOperativeSkillsLabel* m_TDemolitions;                        //0
	class UR6MenuOperativeSkillsLabel* m_TElectronics;                        //0
	class UR6MenuOperativeSkillsLabel* m_TSniper;                             //0
	class UR6MenuOperativeSkillsLabel* m_TStealth;                            //0
	class UR6MenuOperativeSkillsLabel* m_TSelfControl;                        //0
	class UR6MenuOperativeSkillsLabel* m_TLeadership;                         //0
	class UR6MenuOperativeSkillsLabel* m_TObservation;                        //0
	class UR6MenuOperativeSkillsBitmap* m_LCAssault;                          //0
	class UR6MenuOperativeSkillsBitmap* m_LCDemolitions;                      //0
	class UR6MenuOperativeSkillsBitmap* m_LCElectronics;                      //0
	class UR6MenuOperativeSkillsBitmap* m_LCSniper;                           //0
	class UR6MenuOperativeSkillsBitmap* m_LCStealth;                          //0
	class UR6MenuOperativeSkillsBitmap* m_LCSelfControl;                      //0
	class UR6MenuOperativeSkillsBitmap* m_LCLeadership;                       //0
	class UR6MenuOperativeSkillsBitmap* m_LCObservation;                      //0
};
struct UR6MenuOperativeDetailRadioArea_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuOperativeDetailRadioArea_execCreated_Parms
{
	class UTexture* ButtonTexture;                                            //0
	INT YPos;                                                                 //0
};

// *****************************************************************************
// UR6MenuOperativeDetailRadioArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeDetailRadioArea : public UUWindowDialogClientWindow
{
public:
	FLOAT m_fButtonTabWidth;                                                  //0
	FLOAT m_fButtonTabHeight;                                                 //0
	FLOAT m_fFirstButtonOffset;                                               //0
	FLOAT m_fBetweenButtonOffset;                                             //0
	class UR6WindowStayDownButton* m_OperativeHistoryButton;                  //0
	class UR6WindowStayDownButton* m_OperativeSkillsButton;                   //0
	class UR6WindowStayDownButton* m_OperativeBioButton;                      //0
	class UR6WindowStayDownButton* m_OperativeStatsButton;                    //0
	class UR6WindowStayDownButton* m_CurrentSelectedButton;                   //0
	struct FRegion m_RHistoryUp;                                              //0
	struct FRegion m_RHistoryOver;                                            //0
	struct FRegion m_RHistoryDown;                                            //0
	struct FRegion m_RSkillsUp;                                               //0
	struct FRegion m_RSkillsOver;                                             //0
	struct FRegion m_RSkillsDown;                                             //0
	struct FRegion m_RBioUp;                                                  //0
	struct FRegion m_RBioOver;                                                //0
	struct FRegion m_RBioDown;                                                //0
	struct FRegion m_RStatsUp;                                                //0
	struct FRegion m_RStatsOver;                                              //0
	struct FRegion m_RStatsDown;                                              //0
};
struct UR6MenuOperativeHistory_execSetText_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class FString NewText;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeHistory_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOperativeHistory_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuOperativeHistory_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOperativeHistory (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeHistory : public UUWindowWindow
{
public:
	class UR6WindowWrappedTextArea* m_OperativeText;                          //0
	class UR6WindowTextLabel* m_Title;                                        //0
};
struct UR6MenuOperativeBio_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOperativeBio_execSetHealthStatus_Parms
{
	class FString _Health;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeBio_execSetGender_Parms
{
	class FString _szGender;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeBio_execSetEyesColor_Parms
{
	class FString _szEyes;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeBio_execSetHairColor_Parms
{
	class FString _szHair;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeBio_execSetWeight_Parms
{
	class FString _szWeight;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeBio_execSetHeight_Parms
{
	class FString _szHeight;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeBio_execSetBirthDate_Parms
{
	class FString _szBirthDate;                                               //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeBio_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuOperativeBio_execCreated_Parms
{
	FLOAT Y;                                                                  //0
	FLOAT X;                                                                  //0
	FLOAT TitlesHeight;                                                       //0
	FLOAT ValuesHeight;                                                       //0
};

// *****************************************************************************
// UR6MenuOperativeBio (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeBio : public UUWindowWindow
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fHSidePadding;                                                    //0
	FLOAT m_fTileLabelWidth;                                                  //0
	FLOAT m_fTopYPadding;                                                     //0
	FLOAT m_fTitleHeight;                                                     //0
	FLOAT m_fValueLabelWidth;                                                 //0
	FLOAT m_fYPaddingBetweenElements;                                         //0
	FLOAT m_fHealthHeight;                                                    //0
	class UR6MenuOperativeSkillsLabel* m_TDateBirth;                          //0
	class UR6MenuOperativeSkillsLabel* m_THeight;                             //0
	class UR6MenuOperativeSkillsLabel* m_TWeight;                             //0
	class UR6MenuOperativeSkillsLabel* m_THair;                               //0
	class UR6MenuOperativeSkillsLabel* m_TEyes;                               //0
	class UR6MenuOperativeSkillsLabel* m_TGender;                             //0
	class UR6WindowTextLabel* m_TStatus;                                      //0
	class UR6MenuOperativeSkillsLabel* m_NDateBirth;                          //0
	class UR6MenuOperativeSkillsLabel* m_NHeight;                             //0
	class UR6MenuOperativeSkillsLabel* m_NWeight;                             //0
	class UR6MenuOperativeSkillsLabel* m_NHair;                               //0
	class UR6MenuOperativeSkillsLabel* m_NEyes;                               //0
	class UR6MenuOperativeSkillsLabel* m_NGender;                             //0
};
struct UR6MenuOperativeStats_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOperativeStats_execSetShootPercent_Parms
{
	class FString _szShootPercent;                                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeStats_execSetRoundsOnTarget_Parms
{
	class FString _szRoundsOnTarget;                                          //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeStats_execSetRoundsFired_Parms
{
	class FString _szRoundsFired;                                             //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeStats_execSeTTerroKilled_Parms
{
	class FString _szTerroKilled;                                             //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeStats_execSetNbMissions_Parms
{
	class FString _szNbMissions;                                              //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuOperativeStats_execCreated_Parms
{
	FLOAT Y;                                                                  //0
	FLOAT X;                                                                  //0
	FLOAT TitlesHeight;                                                       //0
	FLOAT ValuesHeight;                                                       //0
};

// *****************************************************************************
// UR6MenuOperativeStats (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeStats : public UUWindowWindow
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fHSidePadding;                                                    //0
	FLOAT m_fTileLabelWidth;                                                  //0
	FLOAT m_fTopYPadding;                                                     //0
	FLOAT m_fTitleHeight;                                                     //0
	FLOAT m_fValueLabelWidth;                                                 //0
	FLOAT m_fYPaddingBetweenElements;                                         //0
	class UR6MenuOperativeSkillsLabel* m_TNbMissions;                         //0
	class UR6MenuOperativeSkillsLabel* m_TTerroKilled;                        //0
	class UR6MenuOperativeSkillsLabel* m_TRoundsFired;                        //0
	class UR6MenuOperativeSkillsLabel* m_TRoundsOnTarget;                     //0
	class UR6MenuOperativeSkillsLabel* m_TShootPercent;                       //0
	class UR6MenuOperativeSkillsLabel* m_TGender;                             //0
	class UR6MenuOperativeSkillsLabel* m_NNbMissions;                         //0
	class UR6MenuOperativeSkillsLabel* m_NTerroKilled;                        //0
	class UR6MenuOperativeSkillsLabel* m_NRoundsFired;                        //0
	class UR6MenuOperativeSkillsLabel* m_NRoundsOnTarget;                     //0
	class UR6MenuOperativeSkillsLabel* m_NShootPercent;                       //0
	class UR6MenuOperativeSkillsLabel* m_NGender;                             //0
};
struct UR6MenuWeaponStats_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWeaponStats_execResizeCharts_Parms
{
};
struct UR6MenuWeaponStats_execCreateTitle_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class UR6MenuOperativeSkillsLabel* ReturnValue;                           //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6MenuOperativeSkillsLabel* pWSkillLabel;                          //0
};
struct UR6MenuWeaponStats_execCreated_Parms
{
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT TotItemHeight;                                                      //0
	FLOAT offset;                                                             //0
};

// *****************************************************************************
// UR6MenuWeaponStats (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuWeaponStats : public UUWindowWindow
{
public:
	BITFIELD m_bDrawBorders : 1;                                              //0
	BITFIELD m_bDrawBG : 1;                                                   //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fInitRangePercent;                                                //0
	FLOAT m_fInitDamagePercent;                                               //0
	FLOAT m_fInitAccuracyPercent;                                             //0
	FLOAT m_fInitRecoilPercent;                                               //0
	FLOAT m_fInitRecoveryPercent;                                             //0
	FLOAT m_fRangePercent;                                                    //0
	FLOAT m_fDamagePercent;                                                   //0
	FLOAT m_fAccuracyPercent;                                                 //0
	FLOAT m_fRecoilPercent;                                                   //0
	FLOAT m_fRecoveryPercent;                                                 //0
	FLOAT m_fMaxChartWidth;                                                   //0
	FLOAT m_fNLeftPadding;                                                    //0
	FLOAT m_fBetweenLabelPadding;                                             //0
	FLOAT m_fTopYPadding;                                                     //0
	FLOAT m_fTitleHeight;                                                     //0
	FLOAT m_fYPaddingBetweenElements;                                         //0
	FLOAT m_fNumericLabelWidth;                                               //0
	class UR6MenuOperativeSkillsLabel* m_TRange;                              //0
	class UR6MenuOperativeSkillsLabel* m_TDamage;                             //0
	class UR6MenuOperativeSkillsLabel* m_TAccuracy;                           //0
	class UR6MenuOperativeSkillsLabel* m_TRecoil;                             //0
	class UR6MenuOperativeSkillsLabel* m_TRecovery;                           //0
	class UR6MenuOperativeSkillsBitmap* m_LCRange;                            //0
	class UR6MenuOperativeSkillsBitmap* m_LCDamage;                           //0
	class UR6MenuOperativeSkillsBitmap* m_LCAccuracy;                         //0
	class UR6MenuOperativeSkillsBitmap* m_LCRecoil;                           //0
	class UR6MenuOperativeSkillsBitmap* m_LCRecovery;                         //0
};

enum eAnchorEquipmentType{
	 AET_Primary=0
	,AET_Secondary=1
	,AET_Gadget=2
	,AET_None=3
};
struct UR6MenuEquipmentAnchorButtons_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuEquipmentAnchorButtons_execResize_Parms
{
};
struct UR6MenuEquipmentAnchorButtons_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuEquipmentAnchorButtons_execDisplayButtons_Parms
{
	BYTE _Equipment;                                                          //CPF_Parm
};
struct UR6MenuEquipmentAnchorButtons_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuEquipmentAnchorButtons (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuEquipmentAnchorButtons : public UUWindowDialogControl
{
public:
	BITFIELD m_bDrawBorders : 1;                                              //0
	FLOAT m_fButtonTabWidth;                                                  //0
	FLOAT m_fButtonTabHeight;                                                 //0
	FLOAT m_fPrimarWTabOffset;                                                //0
	FLOAT m_fPistolOffset;                                                    //0
	FLOAT m_fGrenadesOffset;                                                  //0
	FLOAT m_fPrimaryBetweenButtonOffset;                                      //0
	FLOAT m_fSecondaryBetweenButtonOffset;                                    //0
	FLOAT m_fGadgetsBetweenButtonOffset;                                      //0
	FLOAT m_fYTopOffset;                                                      //0
	class UR6WindowListBoxAnchorButton* m_ASSAULTButton;                      //0
	class UR6WindowListBoxAnchorButton* m_LMGButton;                          //0
	class UR6WindowListBoxAnchorButton* m_SHOTGUNButton;                      //0
	class UR6WindowListBoxAnchorButton* m_SNIPERButton;                       //0
	class UR6WindowListBoxAnchorButton* m_SUBGUNButton;                       //0
	class UR6WindowListBoxAnchorButton* m_PISTOLSButton;                      //0
	class UR6WindowListBoxAnchorButton* m_MACHINEPISTOLSButton;               //0
	class UR6WindowListBoxAnchorButton* m_GRENADESButton;                     //0
	class UR6WindowListBoxAnchorButton* m_EXPLOSIVESButton;                   //0
	class UR6WindowListBoxAnchorButton* m_HBDEVICEButton;                     //0
	class UR6WindowListBoxAnchorButton* m_KITSButton;                         //0
	class UR6WindowListBoxAnchorButton* m_GENERALButton;                      //0
	struct FRegion m_RASSAULTUp;                                              //0
	struct FRegion m_RASSAULTOver;                                            //0
	struct FRegion m_RASSAULTDown;                                            //0
	struct FRegion m_RLMGUp;                                                  //0
	struct FRegion m_RLMGOver;                                                //0
	struct FRegion m_RLMGDown;                                                //0
	struct FRegion m_RSHOTGUNUp;                                              //0
	struct FRegion m_RSHOTGUNOver;                                            //0
	struct FRegion m_RSHOTGUNDown;                                            //0
	struct FRegion m_RSNIPERUp;                                               //0
	struct FRegion m_RSNIPEROver;                                             //0
	struct FRegion m_RSNIPERDown;                                             //0
	struct FRegion m_RSUBGUNUp;                                               //0
	struct FRegion m_RSUBGUNOver;                                             //0
	struct FRegion m_RSUBGUNDown;                                             //0
	struct FRegion m_RPISTOLSUp;                                              //0
	struct FRegion m_RPISTOLSOver;                                            //0
	struct FRegion m_RPISTOLSDown;                                            //0
	struct FRegion m_RMACHINEPISTOLSUp;                                       //0
	struct FRegion m_RMACHINEPISTOLSOver;                                     //0
	struct FRegion m_RMACHINEPISTOLSDown;                                     //0
	struct FRegion m_RGRENADESUp;                                             //0
	struct FRegion m_RGRENADESOver;                                           //0
	struct FRegion m_RGRENADESDown;                                           //0
	struct FRegion m_REXPLOSIVESUp;                                           //0
	struct FRegion m_REXPLOSIVESOver;                                         //0
	struct FRegion m_REXPLOSIVESDown;                                         //0
	struct FRegion m_RHBDEVICEUp;                                             //0
	struct FRegion m_RHBDEVICEOver;                                           //0
	struct FRegion m_RHBDEVICEDown;                                           //0
	struct FRegion m_RKITSUp;                                                 //0
	struct FRegion m_RKITSOver;                                               //0
	struct FRegion m_RKITSDown;                                               //0
	struct FRegion m_GENERALUp;                                               //0
	struct FRegion m_GENERALOver;                                             //0
	struct FRegion m_GENERALDown;                                             //0
};
struct UR6MenuWeaponDetailRadioArea_execShowWindow_Parms
{
};
struct UR6MenuWeaponDetailRadioArea_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWeaponDetailRadioArea_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuWeaponDetailRadioArea_execCreated_Parms
{
	class UTexture* ButtonTexture;                                            //0
	FLOAT fYPos;                                                              //0
};

// *****************************************************************************
// UR6MenuWeaponDetailRadioArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuWeaponDetailRadioArea : public UUWindowDialogClientWindow
{
public:
	FLOAT m_fButtonTabWidth;                                                  //0
	FLOAT m_fButtonTabHeight;                                                 //0
	FLOAT m_fFirstButtonOffset;                                               //0
	FLOAT m_fBetweenButtonOffset;                                             //0
	class UR6WindowStayDownButton* m_WeaponHistoryButton;                     //0
	class UR6WindowStayDownButton* m_WeaponStatsButton;                       //0
	class UR6WindowStayDownButton* m_CurrentSelectedButton;                   //0
	struct FRegion m_RHistoryUp;                                              //0
	struct FRegion m_RHistoryOver;                                            //0
	struct FRegion m_RHistoryDown;                                            //0
	struct FRegion m_RStatsUp;                                                //0
	struct FRegion m_RStatsOver;                                              //0
	struct FRegion m_RStatsDown;                                              //0
};
struct UR6MenuGearArmor_execForceMouseOver_Parms
{
	BITFIELD _bForceMouseOver : 1;                                            //CPF_Parm
};
struct UR6MenuGearArmor_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuGearArmor_execSetButtonsStatus_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MenuGearArmor_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuGearArmor_execSetArmorTexture_Parms
{
	class UTexture* t;                                                        //CPF_Parm
	struct FRegion R;                                                         //CPF_Parm
};
struct UR6MenuGearArmor_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuGearArmor_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuGearArmor (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuGearArmor : public UUWindowDialogControl
{
public:
	class UR6WindowButtonGear* m_2DArmor;                                     //0
	class UR6MenuAssignAllButton* m_AssignAll;                                //0
};
struct UR6MenuAssignAllButton_execSetCompleteAssignAllButton_Parms
{
};
struct UR6MenuAssignAllButton_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuAssignAllButton_execSetButtonStatus_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6MenuAssignAllButton_execDrawSimpleBorder_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6MenuAssignAllButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuAssignAllButton_execMMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuAssignAllButton_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuAssignAllButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuAssignAllButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuAssignAllButton : public UR6WindowButton
{
public:
	BITFIELD m_bDrawLeftBorder : 1;                                           //0
	BITFIELD m_bDrawRightBorder : 1;                                          //0
	BITFIELD m_bDrawTopBorder : 1;                                            //0
	BITFIELD m_bDrawDownBorder : 1;                                           //0
	class FColor m_DisableColor;                                              //0
	class FColor m_EnableColor;                                               //0
};
struct UR6MenuMPRestKitSub_execRefreshSubKit_Parms
{
	BITFIELD _bAdmin : 1;                                                     //CPF_Parm
};
struct UR6MenuMPRestKitSub_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	BITFIELD bSelect : 1;                                                     //0
	class UR6MenuMPRestKitMain* R6RestKit;                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllMiscGadget_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllSecWpnGadget_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllPriWpnGadget_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllMachinePistol_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllPistol_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllSniperRifle_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllMachineGuns_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllAssaultRifle_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllShotguns_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execSelectAllSubMachineGuns_Parms
{
	BITFIELD bSelected : 1;                                                   //CPF_Parm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execUpdateRestKitButtonSel_Parms
{
	TArray<BYTE> pRestKitSelect;                                              //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowButtonBox* _ButtonsBox[20];                                //CPF_Parm|CPF_OutParm
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execCreateRestKitButtons_Parms
{
	TArray<class UClass*> pRestKitClass;                                      //CPF_Parm|CPF_NeedCtorLink
	TArray<BYTE> pRestKitSelect;                                              //CPF_Parm|CPF_NeedCtorLink
	class FString _szLocFile;                                                 //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowButtonBox* _ButtonsBox[20];                                //CPF_Parm|CPF_OutParm
	class UR6WindowListGeneralItem* NewItem;                                  //0
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	class FString ButtonTag;                                                  //CPF_NeedCtorLink
};
struct UR6MenuMPRestKitSub_execSortRestrictionKit_Parms
{
	TArray<class UClass*> _pAToSort;                                          //CPF_Parm|CPF_NeedCtorLink
	TArray<class UClass*> ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
	class UClass* sTemp;                                                      //0
	BITFIELD bSwap : 1;                                                       //0
};
struct UR6MenuMPRestKitSub_execGetGadgetRestrictionKit_Parms
{
	class UClass* pClassRestriction;                                          //CPF_Parm
	TArray<class FString> _pInitialRest;                                      //CPF_Parm|CPF_NeedCtorLink
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class FString _szInGameRestriction[32];                                   //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bSecWeaponGadget : 1;                                           //CPF_Parm
	TArray<class UClass*> ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	TArray<class UClass*> m_AOfRestrictions;                                  //CPF_NeedCtorLink
	class UClass* DescriptionClass;                                           //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
	INT iNbOfRest;                                                            //0
	BITFIELD bFindRes : 1;                                                    //0
	INT L;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPRestKitSub_execGetRestrictionKit_Parms
{
	class UClass* pClassRestriction;                                          //CPF_Parm
	TArray<class UClass*> _pInitialRest;                                      //CPF_Parm|CPF_NeedCtorLink
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class FString _szInGameRestriction[32];                                   //CPF_Parm|CPF_NeedCtorLink
	TArray<class UClass*> ReturnValue;                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
	TArray<class UClass*> m_AOfRestrictions;                                  //CPF_NeedCtorLink
	class UClass* DescriptionClass;                                           //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iNbOfRest;                                                            //0
	BITFIELD bFindRes : 1;                                                    //0
	INT k;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPRestKitSub_execUpdateMiscGadgetTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitMiscGadgetTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdateSecWpnGadgetTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitSecWpnGadgetTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
	class UClass* DescriptionClass;                                           //0
	BITFIELD bFound : 1;                                                      //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdatePriWpnGadgetTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitPriWpnGadgetTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
	class UClass* DescriptionClass;                                           //0
	BITFIELD bFound : 1;                                                      //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdateMachinePistolTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitMachinePistolTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdatePistolsTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitPistolTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdateSniperRifleTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitSniperRifleTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdateMachineGunsTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitMachineGunsTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdateAssaultRifleTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitAssaultRifleTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdateShotGunsTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitShotGunsTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execUpdateSubMachineGunsTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitSubMachineGunsTab_Parms
{
	class AR6GameReplicationInfo* _pR6GameRepInfo;                            //CPF_Parm
	INT i;                                                                    //0
	class UR6ServerInfo* pServerOptions;                                      //0
};
struct UR6MenuMPRestKitSub_execInitSelectButtons_Parms
{
	BITFIELD _bInGame : 1;                                                    //CPF_Parm
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
	FLOAT fYStep;                                                             //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	class UFont* ButtonFont;                                                  //0
	INT i;                                                                    //0
};
struct UR6MenuMPRestKitSub_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6MenuMPRestKitSub_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPRestKitSub (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPRestKitSub : public UUWindowDialogClientWindow
{
public:
	BITFIELD m_bIsInGame : 1;                                                 //0
	class UR6WindowButton* m_pSelectAll;                                      //0
	class UR6WindowButton* m_pUnSelectAll;                                    //0
	class UR6WindowButtonBox* m_pSubMachineGuns[20];                          //0
	class UR6WindowButtonBox* m_pShotguns[20];                                //0
	class UR6WindowButtonBox* m_pAssaultRifle[20];                            //0
	class UR6WindowButtonBox* m_pMachineGuns[20];                             //0
	class UR6WindowButtonBox* m_pSniperRifle[20];                             //0
	class UR6WindowButtonBox* m_pPistol[20];                                  //0
	class UR6WindowButtonBox* m_pMachinePistol[20];                           //0
	class UR6WindowButtonBox* m_pPriWpnGadget[20];                            //0
	class UR6WindowButtonBox* m_pSecWpnGadget[20];                            //0
	class UR6WindowButtonBox* m_pMiscGadget[20];                              //0
	class UR6WindowListRestKit* m_pRestKitButList;                            //0
	TArray<class UClass*> m_ASubMachineGuns;                                  //CPF_NeedCtorLink
	TArray<class UClass*> m_AShotguns;                                        //CPF_NeedCtorLink
	TArray<class UClass*> m_AAssaultRifle;                                    //CPF_NeedCtorLink
	TArray<class UClass*> m_AMachineGuns;                                     //CPF_NeedCtorLink
	TArray<class UClass*> m_ASniperRifle;                                     //CPF_NeedCtorLink
	TArray<class UClass*> m_APistol;                                          //CPF_NeedCtorLink
	TArray<class UClass*> m_AMachinePistol;                                   //CPF_NeedCtorLink
	TArray<class UClass*> m_APriWpnGadget;                                    //CPF_NeedCtorLink
	TArray<class UClass*> m_ASecWpnGadget;                                    //CPF_NeedCtorLink
	TArray<class UClass*> m_AMiscGadget;                                      //CPF_NeedCtorLink
	TArray<BYTE> m_ASelected;                                                 //CPF_NeedCtorLink
};
struct UR6MenuOptionsMODSExt_execActiveMod_Parms
{
	TArray<BYTE> AWIDList;                                                    //CPF_NeedCtorLink
};
struct UR6MenuOptionsMODSExt_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuOptionsMODSExt_execSetMenuMODS_Parms
{
	class UR6WindowListBoxItem* NewItem;                                      //0
	INT i;                                                                    //0
	class UR6ModMgr* pModManager;                                             //0
	class UR6Mod* pTempMod;                                                   //0
	class FString szInstallStatus;                                            //CPF_NeedCtorLink
};
struct UR6MenuOptionsMODSExt_execInitPageOptions_Parms
{
	FLOAT fXOffset;                                                           //0
	FLOAT fYOffset;                                                           //0
};
struct UR6MenuOptionsMODSExt_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOptionsMODSExt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOptionsMODSExt : public UR6MenuOptionsMODS
{
};
struct UR6MenuSpeedMenu_execAjustPosition_Parms
{
	BITFIELD bDisplayUp : 1;                                                  //CPF_Parm
	BITFIELD bDisplayLeft : 1;                                                //CPF_Parm
};
struct UR6MenuSpeedMenu_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuSpeedMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSpeedMenu : public UR6MenuFramePopup
{
};

// *****************************************************************************
// UR6MenuModeButtonItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuModeButtonItem : public UR6WindowListButtonItem
{
public:
	BYTE m_eMode;                                                             //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetAllWeaponGadget_Parms
{
	class UClass* WeaponGadgetClass;                                          //0
	TArray<class FString> ATemp;                                              //CPF_NeedCtorLink
	INT i;                                                                    //0
	INT k;                                                                    //0
	BITFIELD bEquipValid : 1;                                                 //0
	BITFIELD bFound : 1;                                                      //0
	INT j;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetAllGadgets_Parms
{
	class UClass* GadgetClass;                                                //0
	INT i;                                                                    //0
	BITFIELD bEquipValid : 1;                                                 //0
	INT j;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetAllSecondaryWeapon_Parms
{
	class UClass* SecondaryWeaponClass;                                       //0
	INT i;                                                                    //0
	BITFIELD bEquipValid : 1;                                                 //0
	INT j;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetAllPrimaryWeapon_Parms
{
	class UClass* PrimaryWeaponClass;                                         //0
	INT i;                                                                    //0
	BITFIELD bEquipValid : 1;                                                 //0
	INT j;                                                                    //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execCompareGearItemsWithServerRest_Parms
{
	class FString _AServerRest[32];                                           //CPF_Parm|CPF_NeedCtorLink
	TArray<class UClass*> _AGearItems;                                        //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT iSizeOfServRestArray;                                                 //0
	BITFIELD bFound : 1;                                                      //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execBuildAvailableEquipment_Parms
{
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* GadgetClass;                                                //0
	class UClass* WeaponGadgetClass;                                          //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
	BITFIELD bFound : 1;                                                      //0
	BITFIELD bEquipValid : 1;                                                 //0
	class UR6Mod* pCurrentMod;                                                //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execUpdateAnchorButtons_Parms
{
	BYTE _AEType;                                                             //CPF_Parm
};
struct UR6MenuMPAdvEquipmentDetailControl_execenableWeaponStats_Parms
{
	BITFIELD _enable : 1;                                                     //CPF_Parm
};
struct UR6MenuMPAdvEquipmentDetailControl_execFillListBox_Parms
{
	INT _equipmentType;                                                       //CPF_Parm
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* SecondaryWeaponClass;                                       //0
	class UClass* WeaponBulletDescriptionClass;                               //0
	class UClass* GadgetClass;                                                //0
	class UClass* WeaponGadgetDescriptionClass;                               //0
	class UUWindowList* FindItem;                                             //0
	class UR6WindowListBoxItem* NewItem;                                      //0
	class UR6WindowListBoxItem* SelectedItem;                                 //0
	class UR6WindowListBoxItem* FirstInsertedItem;                            //0
	class UR6WindowListBoxItem* OldSelectedItem;                              //0
	class UR6Operative* currentOperative;                                     //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT OldVertSBPos;                                                         //0
	BITFIELD bRestricted : 1;                                                 //0
	class UR6MenuInGameMultiPlayerRootWindow* r6Root;                         //0
};
struct UR6MenuMPAdvEquipmentDetailControl_execNotifyEquipmentChanged_Parms
{
	INT EquipmentSelected;                                                    //CPF_Parm
	class UClass* DecriptionClass;                                            //CPF_Parm
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetCurrentGadget_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetCurrentWeaponBullet_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetCurrentWeaponGadget_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetCurrentSecondaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetCurrentPrimaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentDetailControl_execGetCurrentOperative_Parms
{
	class UR6Operative* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentDetailControl_execCreated_Parms
{
	class FColor labelFontColor;                                              //0
	class FColor co;                                                          //0
	class UTexture* BorderTexture;                                            //0
};

// *****************************************************************************
// UR6MenuMPAdvEquipmentDetailControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPAdvEquipmentDetailControl : public UR6MenuEquipmentDetailControl
{
public:
	INT m_iLastListIndex;                                                     //0
	TArray<class UClass*> m_ADefaultPrimaryWeapons;                           //CPF_NeedCtorLink
	TArray<class UClass*> m_ADefaultSecondaryWeapons;                         //CPF_NeedCtorLink
	TArray<class UClass*> m_ADefaultGadgets;                                  //CPF_NeedCtorLink
	TArray<class FString> m_ADefaultWpnGadget;                                //CPF_NeedCtorLink
	TArray<class FString> m_APriWpnGadget;                                    //CPF_NeedCtorLink
	TArray<class FString> m_ASecWpnGadget;                                    //CPF_NeedCtorLink
};
struct UR6MenuMPAdvEquipmentSelectControl_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6MenuMPAdvEquipmentSelectControl_execCenterGadgetTexture_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentSelectControl_execGetCurrentGadgetTex_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	struct FTexRegion ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentSelectControl_execGetCurrentWeaponBullet_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentSelectControl_execGetCurrentWeaponGadget_Parms
{
	BITFIELD _Primary : 1;                                                    //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentSelectControl_execGetCurrentSecondaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentSelectControl_execGetCurrentPrimaryWeapon_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuMPAdvEquipmentSelectControl_execInit_Parms
{
};
struct UR6MenuMPAdvEquipmentSelectControl_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPAdvEquipmentSelectControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPAdvEquipmentSelectControl : public UR6MenuEquipmentSelectControl
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fPrimaryGadgetWindowWidth;                                        //0
};
struct UR6MenuTimeLinePlay_execStopPlaying_Parms
{
};
struct UR6MenuTimeLinePlay_execStartPlaying_Parms
{
};
struct UR6MenuTimeLinePlay_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6PlanningCtrl* OwnerCtrl;                                         //0
};
struct UR6MenuTimeLinePlay_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLinePlay_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuTimeLinePlay (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTimeLinePlay : public UR6WindowButton
{
public:
	BITFIELD m_bPlaying : 1;                                                  //0
	struct FRegion m_ButtonRegions[8];                                        //0
};
struct UR6MenuTimeLineLock_execResetCameraLock_Parms
{
};
struct UR6MenuTimeLineLock_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineLock_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuTimeLineLock_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineLock_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuTimeLineLock (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTimeLineLock : public UR6WindowButton
{
public:
	BITFIELD m_bLocked : 1;                                                   //0
	struct FRegion m_ButtonRegions[8];                                        //0
};
struct UR6MenuTimeLineGotoFirst_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineGotoFirst_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuTimeLineGotoFirst_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineGotoFirst_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuTimeLineGotoFirst (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTimeLineGotoFirst : public UR6WindowButton
{
};
struct UR6MenuTimeLinePrevious_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLinePrevious_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuTimeLinePrevious_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLinePrevious_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuTimeLinePrevious (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTimeLinePrevious : public UR6WindowButton
{
};
struct UR6MenuTimeLineNext_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineNext_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuTimeLineNext_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineNext_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuTimeLineNext (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTimeLineNext : public UR6WindowButton
{
};
struct UR6MenuTimeLineGotoLast_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineGotoLast_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuTimeLineGotoLast_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTimeLineGotoLast_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuTimeLineGotoLast (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTimeLineGotoLast : public UR6WindowButton
{
};
struct UR6MenuTeamDisplayButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTeamDisplayButton_execCreated_Parms
{
};
struct UR6MenuTeamDisplayButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fGlobalX;                                                           //0
	FLOAT fGlobalY;                                                           //0
};
struct UR6MenuTeamDisplayButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTeamDisplayButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};

// *****************************************************************************
// UR6MenuTeamDisplayButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTeamDisplayButton : public UR6WindowButton
{
public:
	INT m_iTeamColor;                                                         //0
	class UTexture* m_ActiveTexture;                                          //0
	struct FRegion m_ActiveRegion;                                            //0
};
struct UR6MenuTeamButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fGlobalX;                                                           //0
	FLOAT fGlobalY;                                                           //0
};
struct UR6MenuTeamButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTeamButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuTeamButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuTeamButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuTeamButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuTeamButton : public UR6WindowButton
{
public:
	INT m_iTeamColor;                                                         //0
	class UTexture* m_DotTexture;                                             //0
	struct FRegion m_DotRegion;                                               //0
};

// *****************************************************************************
// UR6MenuActionButtonItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuActionButtonItem : public UR6WindowListButtonItem
{
public:
	BYTE m_eAction;                                                           //0
};
struct UR6MenuWPDeleteButton_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuWPDeleteButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWPDeleteButton_execCreated_Parms
{
};
struct UR6MenuWPDeleteButton_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWPDeleteButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6MenuWPDeleteButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuWPDeleteButton : public UR6WindowButton
{
};
struct UR6MenuWPDeleteAllButton_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWPDeleteAllButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWPDeleteAllButton_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuWPDeleteAllButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWPDeleteAllButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuWPDeleteAllButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuWPDeleteAllButton : public UR6WindowButton
{
};
struct UR6MenuWPDeleteAllTeamButton_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWPDeleteAllTeamButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6PlanningCtrl* OwnerCtrl;                                         //0
};
struct UR6MenuWPDeleteAllTeamButton_execTick_Parms
{
	FLOAT fDeltaTime;                                                         //CPF_Parm
};
struct UR6MenuWPDeleteAllTeamButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuWPDeleteAllTeamButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuWPDeleteAllTeamButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuWPDeleteAllTeamButton : public UR6WindowButton
{
};
struct UR6MenuCamTurnCounterClockwiseButton_execMouseLeave_Parms
{
};
struct UR6MenuCamTurnCounterClockwiseButton_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamTurnCounterClockwiseButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamTurnCounterClockwiseButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuCamTurnCounterClockwiseButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamTurnCounterClockwiseButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCamTurnCounterClockwiseButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCamTurnCounterClockwiseButton : public UR6WindowButton
{
};
struct UR6MenuCamTurnClockwiseButton_execMouseLeave_Parms
{
};
struct UR6MenuCamTurnClockwiseButton_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamTurnClockwiseButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamTurnClockwiseButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuCamTurnClockwiseButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamTurnClockwiseButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCamTurnClockwiseButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCamTurnClockwiseButton : public UR6WindowButton
{
};
struct UR6MenuCamZoomInButton_execMouseLeave_Parms
{
};
struct UR6MenuCamZoomInButton_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamZoomInButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamZoomInButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuCamZoomInButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamZoomInButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCamZoomInButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCamZoomInButton : public UR6WindowButton
{
};
struct UR6MenuCamZoomOutButton_execMouseLeave_Parms
{
};
struct UR6MenuCamZoomOutButton_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class AR6PlanningCtrl* PlanningCtrl;                                      //0
};
struct UR6MenuCamZoomOutButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamZoomOutButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuCamZoomOutButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamZoomOutButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCamZoomOutButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCamZoomOutButton : public UR6WindowButton
{
};
struct UR6MenuCamFloorUpButton_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamFloorUpButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamFloorUpButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuCamFloorUpButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamFloorUpButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCamFloorUpButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCamFloorUpButton : public UR6WindowButton
{
};
struct UR6MenuCamFloorDownButton_execLMouseUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamFloorDownButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamFloorDownButton_execTick_Parms
{
	FLOAT fDelta;                                                             //CPF_Parm
};
struct UR6MenuCamFloorDownButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCamFloorDownButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCamFloorDownButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCamFloorDownButton : public UR6WindowButton
{
};

// *****************************************************************************
// UR6MenuLegendItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuLegendItem : public UR6WindowListButtonItem
{
public:
	BITFIELD m_bOtherTextureHeight : 1;                                       //0
	class UTexture* m_pObjectIcon;                                            //0
};
struct UR6MenuSingleTeamBar_execResize_Parms
{
};
struct UR6MenuSingleTeamBar_execCreateIGPListBox_Parms
{
};
struct UR6MenuSingleTeamBar_execGetPlayerListBorderHeight_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6MenuSingleTeamBar_execClearListOfItem_Parms
{
};
struct UR6MenuSingleTeamBar_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6MenuSingleTeamBar_execAddItems_Parms
{
	class UR6WindowListIGPlayerInfoItem* NewItem;                             //0
	INT i;                                                                    //0
	INT Y;                                                                    //0
	class AR6RainbowTeam* CurrentTeam;                                        //0
	class AR6GameInfo* GameInfo;                                              //0
};
struct UR6MenuSingleTeamBar_execRefreshTeamBarInfo_Parms
{
	class AR6MissionObjectiveMgr* moMgr;                                      //0
	FLOAT fMissionTime;                                                       //0
	BITFIELD bPlayTestLog : 1;                                                //0
	INT i;                                                                    //0
	INT iRainbowDead;                                                         //0
	INT iTerroNeutralized;                                                    //0
	class AR6RainbowTeam* CurrentTeam;                                        //0
	class AR6GameInfo* GameInfo;                                              //0
};
struct UR6MenuSingleTeamBar_execDrawInGameSingleTeamBar_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	FLOAT fXOffset;                                                           //0
	FLOAT fWidth;                                                             //0
	struct FRegion RIconRegion;                                               //0
	struct FRegion RIconToDraw;                                               //0
	class UR6MenuRSLookAndFeel* R6LAF;                                        //0
};
struct UR6MenuSingleTeamBar_execDrawInGameSingleTeamBarUpBorder_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6MenuSingleTeamBar_execDrawInGameSingleTeamBarDownBorder_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6MenuSingleTeamBar_execDrawInGameSingleTeamBarMiddleBorder_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6MenuSingleTeamBar_execCreated_Parms
{
	FLOAT YLabelPos;                                                          //0
	FLOAT fXOffset;                                                           //0
};
struct UR6MenuSingleTeamBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT IDblOffset;                                                           //0
};

// *****************************************************************************
// UR6MenuSingleTeamBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSingleTeamBar : public UUWindowDialogControl
{
public:
	INT m_IBorderVOffset;                                                     //0
	INT m_iTotalNeutralized;                                                  //0
	INT m_iTotalEfficiency;                                                   //0
	INT m_iTotalRoundsFired;                                                  //0
	INT m_iTotalRoundsTaken;                                                  //0
	INT m_INameTextPadding;                                                   //0
	INT m_IFirstItempYOffset;                                                 //0
	BITFIELD m_bDrawBorders : 1;                                              //0
	BITFIELD m_bDrawTotalsShading : 1;                                        //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fBottomTitleWidth;                                                //0
	FLOAT m_fTeamcolorWidth;                                                  //0
	FLOAT m_fRainbowWidth;                                                    //0
	FLOAT m_fHealthWidth;                                                     //0
	FLOAT m_fSkullWidth;                                                      //0
	FLOAT m_fEfficiencyWidth;                                                 //0
	FLOAT m_fShotsWidth;                                                      //0
	FLOAT m_fHitsWidth;                                                       //0
	class UR6WindowTextLabel* m_BottomTitle;                                  //0
	class UR6WindowTextLabel* m_TimeMissionTitle;                             //0
	class UR6WindowTextLabel* m_TimeMissionValue;                             //0
	class UR6WindowTextLabel* m_KillLabel;                                    //0
	class UR6WindowTextLabel* m_EfficiencyLabel;                              //0
	class UR6WindowTextLabel* m_RoundsFiredLabel;                             //0
	class UR6WindowTextLabel* m_RoundsTakenLabel;                             //0
	class UR6WindowSimpleIGPlayerListBox* m_IGPlayerInfoListBox;              //0
	class UTexture* m_TIcon;                                                  //0
	class UTexture* m_TBorder;                                                //0
	class UTexture* m_THighLight;                                             //0
	struct FRegion m_RBorder;                                                 //0
	struct FRegion m_RHighLight;                                              //0
};
struct UR6MenuDebriefNavBar_execAcceptMissionOutcome_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6PlayerCampaign* MyCampaign;                                      //0
	class UR6FileManagerCampaign* pFileManager;                               //0
	class UR6Console* R6Console;                                              //0
};
struct UR6MenuDebriefNavBar_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuDebriefNavBar_execDenyMissionOutcome_Parms
{
	class UR6FileManagerCampaign* FileManager;                                //0
	class UR6PlayerCampaign* MyCampaign;                                      //0
};
struct UR6MenuDebriefNavBar_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class AR6GameInfo* GameInfo;                                              //0
	class UR6PlayerCampaign* MyCampaign;                                      //0
	class UR6FileManagerCampaign* pFileManager;                               //0
};
struct UR6MenuDebriefNavBar_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuDebriefNavBar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuDebriefNavBar : public UUWindowDialogClientWindow
{
public:
	FLOAT m_fButtonsYPos;                                                     //0
	FLOAT m_fMainMenuXPos;                                                    //0
	FLOAT m_fOptionsXPos;                                                     //0
	FLOAT m_fActionXPos;                                                      //0
	FLOAT m_fPlanningXPos;                                                    //0
	FLOAT m_fContinueXPos;                                                    //0
	class UR6WindowButton* m_MainMenuButton;                                  //0
	class UR6WindowButton* m_OptionsButton;                                   //0
	class UR6WindowButton* m_ActionButton;                                    //0
	class UR6WindowButton* m_PlanningButton;                                  //0
	class UR6WindowButton* m_ContinueButton;                                  //0
	class UTexture* m_TMainMenuButton;                                        //0
	class UTexture* m_TOptionsButton;                                         //0
	class UTexture* m_TActionButton;                                          //0
	class UTexture* m_TPlanningButton;                                        //0
	class UTexture* m_TContinueButton;                                        //0
	struct FRegion m_RMainMenuButtonUp;                                       //0
	struct FRegion m_RMainMenuButtonDown;                                     //0
	struct FRegion m_RMainMenuButtonDisabled;                                 //0
	struct FRegion m_RMainMenuButtonOver;                                     //0
	struct FRegion m_ROptionsButtonUp;                                        //0
	struct FRegion m_ROptionsButtonDown;                                      //0
	struct FRegion m_ROptionsButtonDisabled;                                  //0
	struct FRegion m_ROptionsButtonOver;                                      //0
	struct FRegion m_RActionButtonUp;                                         //0
	struct FRegion m_RActionButtonDown;                                       //0
	struct FRegion m_RActionButtonDisabled;                                   //0
	struct FRegion m_RActionButtonOver;                                       //0
	struct FRegion m_RPlanningButtonUp;                                       //0
	struct FRegion m_RPlanningButtonDown;                                     //0
	struct FRegion m_RPlanningButtonDisabled;                                 //0
	struct FRegion m_RPlanningButtonOver;                                     //0
	struct FRegion m_RContinueButtonUp;                                       //0
	struct FRegion m_RContinueButtonDown;                                     //0
	struct FRegion m_RContinueButtonDisabled;                                 //0
	struct FRegion m_RContinueButtonOver;                                     //0
};
struct UR6MenuCarreerStats_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuCarreerStats_execUpdateHealthStatus_Parms
{
	class FString _szHealthStatus;                                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuCarreerStats_execUpdateSpeciality_Parms
{
	class FString _szOpSpeciality;                                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuCarreerStats_execUpdateName_Parms
{
	class FString _szOpName;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuCarreerStats_execUpdateTeam_Parms
{
	INT _Team;                                                                //CPF_Parm
};
struct UR6MenuCarreerStats_execUpdateFace_Parms
{
	class UTexture* _Face;                                                    //CPF_Parm
	struct FRegion _FaceRegion;                                               //CPF_Parm
};
struct UR6MenuCarreerStats_execUpdateStats_Parms
{
	class FString _MissionServed;                                             //CPF_Parm|CPF_NeedCtorLink
	class FString _TerroKilled;                                               //CPF_Parm|CPF_NeedCtorLink
	class FString _RoundsShot;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString _RoundsOnTarget;                                            //CPF_Parm|CPF_NeedCtorLink
	class FString _ShootPercent;                                              //CPF_Parm|CPF_NeedCtorLink
};
struct UR6MenuCarreerStats_execCreated_Parms
{
	INT YPos;                                                                 //0
	INT XPos;                                                                 //0
};

// *****************************************************************************
// UR6MenuCarreerStats (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCarreerStats : public UUWindowWindow
{
public:
	INT m_iPadding;                                                           //0
	INT m_iHeight;                                                            //0
	FLOAT m_fTitleHeight;                                                     //0
	FLOAT m_fYOffSet;                                                         //0
	FLOAT m_fXOffSet;                                                         //0
	FLOAT m_fLabelHeight;                                                     //0
	FLOAT m_fLOpNameX;                                                        //0
	FLOAT m_fLOpNameW;                                                        //0
	class UR6WindowTextLabel* m_LTitle;                                       //0
	class UR6WindowTextLabel* m_LMissionServed;                               //0
	class UR6WindowTextLabel* m_LTerroKilled;                                 //0
	class UR6WindowTextLabel* m_LRoundsFired;                                 //0
	class UR6WindowTextLabel* m_LRoundsOnTarget;                              //0
	class UR6WindowTextLabel* m_LShootPercent;                                //0
	class UR6WindowTextLabel* m_LOpName;                                      //0
	class UR6WindowTextLabel* m_LOpSpecility;                                 //0
	class UR6WindowTextLabel* m_LOpHealthStatus;                              //0
	class UR6WindowBitMap* m_RainBowLogo;                                     //0
	class UTexture* m_TRainBowLogo;                                           //0
	class UR6MenuCarreerOperative* m_OperativeFace;                           //0
	struct FRegion m_RRainBowLogo;                                            //0
};
struct UR6MenuOperativeSkillsLabel_execSetNumericValue_Parms
{
	INT _iOriginalValue;                                                      //CPF_Parm
	INT _iLastValue;                                                          //CPF_Parm
	INT ITemp;                                                                //0
	INT iOriginalValue;                                                       //0
};
struct UR6MenuOperativeSkillsLabel_execDrawNumericValue_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fX;                                                                 //0
	FLOAT fW;                                                                 //0
	FLOAT fH;                                                                 //0
	FLOAT fSizeOfBG;                                                          //0
};
struct UR6MenuOperativeSkillsLabel_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuOperativeSkillsLabel_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuOperativeSkillsLabel (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeSkillsLabel : public UR6WindowTextLabel
{
public:
	FLOAT m_fWidthOfFixArea;                                                  //0
	class FColor m_NumericValueColor;                                         //0
	class FString m_szNumericValue;                                           //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6MenuOperativeSkillsBitmap (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuOperativeSkillsBitmap : public UUWindowBitmap
{
};
struct UR6MenuListSpeedButton_execShowWindow_Parms
{
	BYTE eSpeed;                                                              //0
};
struct UR6MenuListSpeedButton_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
	class UR6PlanningInfo* Planning;                                          //0
};
struct UR6MenuListSpeedButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuListSpeedButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuListSpeedButton : public UR6MenuPopupListButton
{
public:
	BITFIELD m_bAutoSelect : 1;                                               //0
};
struct UR6MenuMPAdvGearPrimaryWeapon_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuMPAdvGearPrimaryWeapon_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPAdvGearPrimaryWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPAdvGearPrimaryWeapon : public UR6MenuGearPrimaryWeapon
{
};
struct UR6MenuMPAdvGearSecondaryWeapon_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuMPAdvGearSecondaryWeapon_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6MenuMPAdvGearSecondaryWeapon_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPAdvGearSecondaryWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPAdvGearSecondaryWeapon : public UR6MenuGearSecondaryWeapon
{
public:
	FLOAT m_fWeaponWidth;                                                     //0
	FLOAT m_fBulletWidth;                                                     //0
};
struct UR6MenuMPAdvGearGadget_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};
struct UR6MenuMPAdvGearGadget_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuMPAdvGearGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuMPAdvGearGadget : public UR6MenuGearGadget
{
};
struct UR6MenuCarreerOperative_execSetTeam_Parms
{
	INT _Team;                                                                //CPF_Parm
};
struct UR6MenuCarreerOperative_execsetFace_Parms
{
	class UTexture* _OperativeFace;                                           //CPF_Parm
	struct FRegion _FaceRegion;                                               //CPF_Parm
};
struct UR6MenuCarreerOperative_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6MenuCarreerOperative_execCreated_Parms
{
};

// *****************************************************************************
// UR6MenuCarreerOperative (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuCarreerOperative : public UUWindowWindow
{
public:
	FLOAT m_fXPos;                                                            //0
	FLOAT m_fXFacePos;                                                        //0
	FLOAT m_fYFacePos;                                                        //0
	FLOAT m_fTileHeight;                                                      //0
	class UR6WindowBitMap* m_OperativeFace;                                   //0
	struct FRegion RTopRight;                                                 //0
	struct FRegion RMidRight;                                                 //0
	struct FRegion RTopLeft;                                                  //0
	struct FRegion RMidLeft;                                                  //0
};

// *****************************************************************************
// UR6MenuSpeedButtonItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MenuSpeedButtonItem : public UR6WindowListButtonItem
{
public:
	BYTE m_eSpeed;                                                            //0
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
