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
** Unreal native C++ headers for the R6Window package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6WINDOW_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

enum eCornerType{
	 No_Corners=0
	,No_Borders=1
	,Top_Corners=2
	,Bottom_Corners=3
	,All_Corners=4
};
struct UR6WindowListBox_execKeyFocusExit_Parms
{
};
struct UR6WindowListBox_execKeyFocusEnter_Parms
{
};
struct UR6WindowListBox_execIsASeparatorItem_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowListBox_execSwapItem_Parms
{
	class UUWindowListBoxItem* _pItem;                                        //CPF_Parm
	BITFIELD _bUp : 1;                                                        //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* TempItem;                                      //0
	class UUWindowListBoxItem* BkpItem;                                       //0
};
struct UR6WindowListBox_execCheckForPageUp_Parms
{
	class UUWindowListBoxItem* _StartItem;                                    //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* TempItem;                                      //0
	class UUWindowListBoxItem* ValidItem;                                     //0
	INT i;                                                                    //0
	INT iMaxItemsDisplayed;                                                   //0
	BITFIELD bIsASeparator : 1;                                               //0
};
struct UR6WindowListBox_execCheckForPageDown_Parms
{
	class UUWindowListBoxItem* _StartItem;                                    //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* TempItem;                                      //0
	class UUWindowListBoxItem* ValidItem;                                     //0
	INT i;                                                                    //0
	INT iMaxItemsDisplayed;                                                   //0
	BITFIELD bIsASeparator : 1;                                               //0
};
struct UR6WindowListBox_execCheckForLastItem_Parms
{
	class UUWindowListBoxItem* _LastItem;                                     //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	BITFIELD bIsASeparator : 1;                                               //0
};
struct UR6WindowListBox_execCheckForPrevItem_Parms
{
	class UUWindowListBoxItem* _StartItem;                                    //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* TempItem;                                      //0
	BITFIELD bIsASeparator : 1;                                               //0
};
struct UR6WindowListBox_execCheckForNextItem_Parms
{
	class UUWindowListBoxItem* _StartItem;                                    //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowListBoxItem* TempItem;                                      //0
	BITFIELD bIsASeparator : 1;                                               //0
};
struct UR6WindowListBox_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowListBoxItem* TempItem;                                      //0
	class UUWindowListBoxItem* OldSelection;                                  //0
};
struct UR6WindowListBox_execClear_Parms
{
};
struct UR6WindowListBox_execGetCenterXPos_Parms
{
	FLOAT _fTagWidth;                                                         //CPF_Parm
	FLOAT _fTextWidth;                                                        //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowListBox_execCenterIconInBox_Parms
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
struct UR6WindowListBox_execSetOverBorderColorEffect_Parms
{
	class FColor _vBorderColor;                                               //CPF_Parm
};
struct UR6WindowListBox_execGetSelectedItem_Parms
{
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowListBox_execDropSelection_Parms
{
};
struct UR6WindowListBox_execExternalDragOver_Parms
{
	class UUWindowDialogControl* ExternalControl;                             //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowListBox* B;                                                //0
	class UUWindowListBoxItem* OverItem;                                      //0
};
struct UR6WindowListBox_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListBox_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListBox_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowListBoxItem* OverItem;                                      //0
};
struct UR6WindowListBox_execMouseLeave_Parms
{
};
struct UR6WindowListBox_execMouseEnter_Parms
{
};
struct UR6WindowListBox_execDoubleClickItem_Parms
{
	class UUWindowListBoxItem* i;                                             //CPF_Parm
};
struct UR6WindowListBox_execReceiveDoubleClickItem_Parms
{
	class UR6WindowListBox* L;                                                //CPF_Parm
	class UUWindowListBoxItem* i;                                             //CPF_Parm
};
struct UR6WindowListBox_execDoubleClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListBox_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListBox_execSetSelected_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowListBoxItem* NewSelected;                                   //0
};
struct UR6WindowListBox_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
};
struct UR6WindowListBox_execMakeSelectedVisible_Parms
{
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
};
struct UR6WindowListBox_execGetItemAt_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowLookAndFeel* LAF;                                          //0
	class UUWindowList* CurItem;                                              //0
	FLOAT Y;                                                                  //0
	FLOAT fdrawWidth;                                                         //0
	FLOAT fListHeight;                                                        //0
	FLOAT fItemHeight;                                                        //0
	INT i;                                                                    //0
};
struct UR6WindowListBox_execSetCornerType_Parms
{
	BYTE _NewCornerType;                                                      //CPF_Parm
};
struct UR6WindowListBox_execResized_Parms
{
};
struct UR6WindowListBox_execGetSizeOfList_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowListBox_execGetSizeOfAnItem_Parms
{
	class UUWindowList* _pItem;                                               //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fTotalItemHeigth;                                                   //0
};
struct UR6WindowListBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UR6WindowLookAndFeel* LAF;                                          //0
	class UUWindowList* CurItem;                                              //0
	FLOAT Y;                                                                  //0
	FLOAT fdrawWidth;                                                         //0
	FLOAT fListHeight;                                                        //0
	FLOAT fItemHeight;                                                        //0
	INT i;                                                                    //0
};
struct UR6WindowListBox_execSort_Parms
{
};
struct UR6WindowListBox_execSetHelpText_Parms
{
	class FString t;                                                          //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowListBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowListBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListBox : public UUWindowListControl
{
public:
	BYTE m_eCornerType;                                                       //0
	INT m_iTotItemsDisplayed;                                                 //0
	BITFIELD m_bDragging : 1;                                                 //0
	BITFIELD m_bCanDrag : 1;                                                  //0
	BITFIELD m_bCanDragExternal : 1;                                          //0
	BITFIELD m_bActiveOverEffect : 1;                                         //0
	BITFIELD m_bIgnoreUserClicks : 1;                                         //0
	BITFIELD m_bForceCaps : 1;                                                //0
	BITFIELD m_bSkipDrawBorders : 1;                                          //0
	FLOAT m_fItemHeight;                                                      //0
	FLOAT m_fSpaceBetItem;                                                    //0
	FLOAT m_fDragY;                                                           //0
	FLOAT m_fXItemOffset;                                                     //0
	FLOAT m_fXItemRightPadding;                                               //0
	class UR6WindowVScrollbar* m_VertSB;                                      //0
	class UUWindowListBoxItem* m_SelectedItem;                                //0
	class UTexture* m_TIcon;                                                  //0
	class UR6WindowListBox* m_DoubleClickList;                                //0
	class UUWindowWindow* m_DoubleClickClient;                                //0
	class UClass* m_SBClass;                                                  //0
	class FColor m_vMouseOverWindow;                                          //0
	class FColor m_vInitBorderColor;                                          //0
	class FString m_szDefaultHelpText;                                        //CPF_NeedCtorLink
};
struct UR6WindowListRadio_execDoubleClickItem_Parms
{
	class UUWindowListBoxItem* i;                                             //CPF_Parm
};
struct UR6WindowListRadio_execReceiveDoubleClickItem_Parms
{
	class UR6WindowListRadio* L;                                              //CPF_Parm
	class UUWindowListBoxItem* i;                                             //CPF_Parm
};
struct UR6WindowListRadio_execDoubleClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListRadio_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListRadio_execSetSelected_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowListBoxItem* NewSelected;                                   //0
};
struct UR6WindowListRadio_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
};
struct UR6WindowListRadio_execMakeSelectedVisible_Parms
{
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
};
struct UR6WindowListRadio_execGetItemAt_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT Y;                                                                  //0
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
};
struct UR6WindowListRadio_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	FLOAT Y;                                                                  //0
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
};
struct UR6WindowListRadio_execSort_Parms
{
};
struct UR6WindowListRadio_execSetHelpText_Parms
{
	class FString t;                                                          //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowListRadio_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UUWindowListBoxItem* OverItem;                                      //0
	class FString szNewHelpText;                                              //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6WindowListRadio (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListRadio : public UUWindowListControl
{
public:
	FLOAT m_fItemHeight;                                                      //0
	class UUWindowListBoxItem* m_SelectedItem;                                //0
	class UR6WindowListRadio* m_DoubleClickList;                              //0
	class FString m_szDefaultHelpText;                                        //CPF_NeedCtorLink
};
struct UR6WindowTextListBox_execFindItemWithName_Parms
{
	class FString _ItemName;                                                  //CPF_Parm|CPF_NeedCtorLink
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* CurItem;                                              //0
};
struct UR6WindowTextListBox_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
	BITFIELD bNotify : 1;                                                     //0
};
struct UR6WindowTextListBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class FString szToDisplay;                                                //CPF_NeedCtorLink
	FLOAT TextY;                                                              //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	FLOAT fTemp;                                                              //0
	class UUWindowListBoxItem* pListBoxItem;                                  //0
};
struct UR6WindowTextListBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowTextListBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowTextListBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowTextListBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextListBox : public UR6WindowListBox
{
public:
	BYTE m_BGRenderStyle;                                                     //0
	FLOAT m_fFontSpacing;                                                     //0
	class UTexture* m_BGSelTexture;                                           //0
	class UFont* m_Font;                                                      //0
	class UFont* m_FontSeparator;                                             //0
	class FColor m_BGSelColor;                                                //0
	struct FRegion m_BGSelRegion;                                             //0
	class FColor m_SelTextColor;                                              //0
	class FColor m_SeparatorTextColor;                                        //0
	class FColor m_DisableTextColor;                                          //0
};
struct UR6WindowMPManager_execHandleLockedServerPopUp_Parms
{
	class FString _GamePassword;                                              //CPF_NeedCtorLink
};
struct UR6WindowMPManager_execHandlePunkBusterSvrSituation_Parms
{
	BITFIELD bHandlePBSrvSituation : 1;                                       //0
	class UR6GameManager* pGameMgr;                                           //0
};
struct UR6WindowMPManager_execDisplayErrorMsg_Parms
{
	class FString _szErrorMsg;                                                //CPF_Parm|CPF_NeedCtorLink
	BYTE _ePopUpID;                                                           //CPF_Parm
	class UR6WindowWrappedTextArea* pR6WrapLabelTemp;                         //0
};
struct UR6WindowMPManager_execPopUpBoxCreate_Parms
{
	FLOAT fX;                                                                 //0
	FLOAT fY;                                                                 //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTextHeight;                                                        //0
	class UR6WindowTextLabel* pR6TextLabelTemp;                               //0
	class UR6WindowWrappedTextArea* pR6WrapLabelTemp;                         //0
};

// *****************************************************************************
// UR6WindowMPManager (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowMPManager : public UUWindowWindow
{
public:
	BITFIELD bShowLog : 1;                                                    //0
	class UR6WindowPopUpBox* m_pError;                                        //0
	class UR6WindowPopUpBox* m_pLongError;                                    //0
	class UR6WindowPopUpBox* m_pPassword;                                     //0
	class UR6WindowEditBox* m_pPasswordEditBox;                               //0
	struct FPreJoinResponseInfo m_preJoinRespInfo;                            //CPF_NeedCtorLink
};

enum eButtonBoxType{
	 BBT_Normal=0
	,BBT_DeathCam=1
	,BBT_ResKit=2
};
struct UR6WindowButtonBox_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonBox_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonBox_execClick_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonBox_execGetSelectStatus_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowButtonBox_execSetNewWidth_Parms
{
	FLOAT _fWidth;                                                            //CPF_Parm
};
struct UR6WindowButtonBox_execSetButtonBox_Parms
{
	BITFIELD _bSelected : 1;                                                  //CPF_Parm
};
struct UR6WindowButtonBox_execModifyMsgBox_Parms
{
	class FString _szTextBox;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowButtonBox_execCreateTextAndMsgBox_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _szTextBox;                                                 //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fXText;                                                            //CPF_Parm
	INT _iButtonID;                                                           //CPF_Parm
};
struct UR6WindowButtonBox_execCreateTextAndBox_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fXText;                                                            //CPF_Parm
	INT _iButtonID;                                                           //CPF_Parm
	BITFIELD _bTextAfterBox : 1;                                              //CPF_Parm
	BITFIELD _bUseAutomaticResizeFont : 1;                                    //CPF_Parm
};
struct UR6WindowButtonBox_execInRange_Parms
{
	FLOAT _fTestValue;                                                        //CPF_Parm
	FLOAT _fMin;                                                              //CPF_Parm
	FLOAT _fMax;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowButtonBox_execCheckText_Box_Region_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	FLOAT fX;                                                                 //0
	FLOAT fY;                                                                 //0
	FLOAT FMin;                                                               //0
	FLOAT FMax;                                                               //0
};
struct UR6WindowButtonBox_execMouseLeave_Parms
{
};
struct UR6WindowButtonBox_execMouseEnter_Parms
{
};
struct UR6WindowButtonBox_execDrawResKitBotton_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fXBox;                                                             //CPF_Parm
	FLOAT _fYBox;                                                             //CPF_Parm
	BITFIELD _bMouseOverButton : 1;                                           //CPF_Parm
	FLOAT fYLineTop;                                                          //0
	FLOAT fYLineBottom;                                                       //0
};
struct UR6WindowButtonBox_execDrawCheckBox_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fXBox;                                                             //CPF_Parm
	FLOAT _fYBox;                                                             //CPF_Parm
	BITFIELD _bMouseOverButton : 1;                                           //CPF_Parm
};
struct UR6WindowButtonBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FColor vTempColor;                                                  //0
};
struct UR6WindowButtonBox_execAlignText_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fXStartPos;                                                        //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	class FString _szTextToAlign;                                             //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BYTE _eTextAlign;                                                         //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	TArray<class UFont*> ALowerFont;                                          //CPF_NeedCtorLink
	class FString szTmpText;                                                  //CPF_NeedCtorLink
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT fXTemp;                                                             //0
	FLOAT fLMarge;                                                            //0
	FLOAT fDistBetBoxAndText;                                                 //0
	INT i;                                                                    //0
};
struct UR6WindowButtonBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6WindowButtonBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonBox : public UUWindowButton
{
public:
	BYTE m_eButtonType;                                                       //0
	BITFIELD m_bRefresh : 1;                                                  //0
	BITFIELD m_bMouseIsOver : 1;                                              //0
	BITFIELD m_bMouseOnButton : 1;                                            //0
	BITFIELD m_bSelected : 1;                                                 //0
	BITFIELD m_bResizeToText : 1;                                             //0
	BITFIELD m_bAutomaticResizeFont : 1;                                      //0
	FLOAT m_fYTextPos;                                                        //0
	FLOAT m_fXText;                                                           //0
	FLOAT m_fXBox;                                                            //0
	FLOAT m_fYBox;                                                            //0
	FLOAT m_fXMsgBoxText;                                                     //0
	FLOAT m_fHMsgBoxText;                                                     //0
	class UTexture* m_TButtonBG;                                              //0
	class UTexture* m_TDownTexture;                                           //0
	class UFont* m_TextFont;                                                  //0
	class UUWindowWindow* m_AdviceWindow;                                     //0
	struct FRegion m_RButtonBG;                                               //0
	class FColor m_vBorder;                                                   //0
	class FColor m_vTextColor;                                                //0
	class FString m_szMsgBoxText;                                             //CPF_NeedCtorLink
	class FString m_szMiscText;                                               //CPF_NeedCtorLink
	class FString m_szToolTipWhenDisable;                                     //CPF_NeedCtorLink
};

enum eButtonType{
	 eNormalButton=0
	,eCounterButton=1
};
struct UR6WindowButton_execGetButtonType_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowButton_execSetButtonBorderColor_Parms
{
	class FColor _vButtonBorderColor;                                         //CPF_Parm
};
struct UR6WindowButton_execResizeToText_Parms
{
};
struct UR6WindowButton_execIsFontDownSizingNeeded_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT TextWidth;                                                          //0
	FLOAT TextXPos;                                                           //0
	class UCanvas* C;                                                         //0
};
struct UR6WindowButton_execCheckToDownSizeFont_Parms
{
	class UFont* _FallBackFont;                                               //CPF_Parm
	FLOAT _FallBackFontSpacing;                                               //CPF_Parm
};
struct UR6WindowButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tempSpace;                                                          //0
	class FColor vBorderColor;                                                //0
};
struct UR6WindowButton_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT TextWidth;                                                          //0
};
struct UR6WindowButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButton : public UUWindowButton
{
public:
	BYTE m_eButtonType;                                                       //0
	INT m_iDrawStyle;                                                         //0
	BITFIELD m_bResizeToText : 1;                                             //0
	BITFIELD m_bDrawBorders : 1;                                              //0
	BITFIELD m_bDrawSimpleBorder : 1;                                         //0
	BITFIELD m_bDrawSpecialBorder : 1;                                        //0
	BITFIELD m_bSetParam : 1;                                                 //0
	BITFIELD m_bDefineBorderColor : 1;                                        //0
	BITFIELD m_bCheckForDownSizeFont : 1;                                     //0
	FLOAT m_fLMarge;                                                          //0
	FLOAT m_fRMarge;                                                          //0
	FLOAT m_fFontSpacing;                                                     //0
	FLOAT m_fDownSizeFontSpacing;                                             //0
	FLOAT m_textSize;                                                         //0
	FLOAT m_fTotalButtonsSize;                                                //0
	FLOAT m_fMaxWinWidth;                                                     //0
	FLOAT m_fOrgWinLeft;                                                      //0
	class UR6WindowButton* m_pRefButtonPos;                                   //0
	class UR6WindowButton* m_pPreviousButtonPos;                              //0
	class UFont* m_buttonFont;                                                //0
	class UFont* m_DownSizeFont;                                              //0
	class UTexture* m_BGSelecTexture;                                         //0
	class FColor m_vButtonColor;                                              //0
};
struct UR6WindowComboControl_execCreated_Parms
{
};
struct UR6WindowComboControl_execSetDisableButton_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6WindowComboControl_execSetEditBoxTip_Parms
{
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowComboControl_execAdjustTextW_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowComboControl_execAdjustEditBoxW_Parms
{
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowComboControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowComboControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6WindowComboControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowComboControl : public UUWindowComboControl
{
public:
	INT m_iButtonID;                                                          //0
	class UR6WindowTextLabel* m_pComboTextLabel;                              //0
};

enum eCornerType{
	 No_Corners=0
	,Top_Corners=1
	,Bottom_Corners=2
	,All_Corners=3
};
enum eBorderType{
	 Border_Top=0
	,Border_Bottom=1
	,Border_Left=2
	,Border_Right=3
};

// -----------------------------------------------------------------------------
// FstBorderForm ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstBorderForm
{
public:
	class FColor vColor;                                                  //0
	FLOAT fXPos;                                                          //0
	FLOAT fYPos;                                                          //0
	FLOAT fWidth;                                                         //0
	BITFIELD bActive : 1;                                                 //0
};
struct UR6WindowSimpleFramedWindowExt_execGetActivateBorder_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowSimpleFramedWindowExt_execSetCornerColor_Parms
{
	INT _iCornerType;                                                         //CPF_Parm
	class FColor _Color;                                                      //CPF_Parm
};
struct UR6WindowSimpleFramedWindowExt_execActiveBackGround_Parms
{
	BITFIELD _bActivate : 1;                                                  //CPF_Parm
	class FColor _vBGColor;                                                   //CPF_Parm
};
struct UR6WindowSimpleFramedWindowExt_execSetNoBorder_Parms
{
};
struct UR6WindowSimpleFramedWindowExt_execActiveBorder_Parms
{
	INT _iBorderType;                                                         //CPF_Parm
	BITFIELD _Active : 1;                                                     //CPF_Parm
	INT i;                                                                    //0
	BITFIELD bNoBorderToDraw : 1;                                             //0
};
struct UR6WindowSimpleFramedWindowExt_execSetBorderParam_Parms
{
	INT _iBorderType;                                                         //CPF_Parm
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	class FColor _vColor;                                                     //CPF_Parm
};
struct UR6WindowSimpleFramedWindowExt_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FColor vBorderColor;                                                //0
	class FColor vCornerColor;                                                //0
};
struct UR6WindowSimpleFramedWindowExt_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowSimpleFramedWindowExt_execCreateClientWindow_Parms
{
	class UClass* ClientClass;                                                //CPF_Parm
};
struct UR6WindowSimpleFramedWindowExt_execCreated_Parms
{
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6WindowSimpleFramedWindowExt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowSimpleFramedWindowExt : public UUWindowWindow
{
public:
	BYTE m_eCornerType;                                                       //0
	INT m_DrawStyle;                                                          //0
	BITFIELD m_bNoBorderToDraw : 1;                                           //0
	BITFIELD m_bDrawBackGround : 1;                                           //0
	FLOAT m_fHBorderHeight;                                                   //0
	FLOAT m_fVBorderWidth;                                                    //0
	FLOAT m_fHBorderPadding;                                                  //0
	FLOAT m_fVBorderPadding;                                                  //0
	FLOAT m_fHBorderOffset;                                                   //0
	FLOAT m_fVBorderOffset;                                                   //0
	class UTexture* m_BGTexture;                                              //0
	class UTexture* m_HBorderTexture;                                         //0
	class UTexture* m_VBorderTexture;                                         //0
	class UTexture* m_topLeftCornerT;                                         //0
	class UUWindowWindow* m_ClientArea;                                       //0
	class UClass* m_ClientClass;                                              //0
	struct FRegion m_BGTextureRegion;                                         //0
	struct FRegion m_HBorderTextureRegion;                                    //0
	struct FRegion m_VBorderTextureRegion;                                    //0
	struct FRegion m_topLeftCornerR;                                          //0
	struct FstBorderForm m_sBorderForm[4];                                    //0
	class FColor m_eCornerColor[4];                                           //0
	class FColor m_vBGColor;                                                  //0
};
struct UR6WindowTextLabel_execSetNewText_Parms
{
	class FString _szNewText;                                                 //CPF_Parm|CPF_NeedCtorLink
	BITFIELD _bRefresh : 1;                                                   //CPF_Parm
};
struct UR6WindowTextLabel_execSetProperties_Parms
{
	class FString _text;                                                      //CPF_Parm|CPF_NeedCtorLink
	BYTE _Align;                                                              //CPF_Parm
	class UFont* _TypeOfFont;                                                 //CPF_Parm
	class FColor _TextColor;                                                  //CPF_Parm
	BITFIELD _bDrawBorders : 1;                                               //CPF_Parm
};
struct UR6WindowTextLabel_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	struct FRegion RTemp;                                                     //0
	FLOAT tempSpace;                                                          //0
};
struct UR6WindowTextLabel_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};

// *****************************************************************************
// UR6WindowTextLabel (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextLabel : public UUWindowWindow
{
public:
	BYTE Align;                                                               //0
	INT m_TextDrawstyle;                                                      //0
	INT m_DrawStyle;                                                          //0
	BITFIELD m_bDrawBorders : 1;                                              //0
	BITFIELD m_bRefresh : 1;                                                  //0
	BITFIELD m_bUseBGColor : 1;                                               //0
	BITFIELD m_bDrawBG : 1;                                                   //0
	BITFIELD m_bUseExtRegion : 1;                                             //0
	BITFIELD m_bResizeToText : 1;                                             //0
	BITFIELD m_bFixedYPos : 1;                                                //0
	FLOAT TextX;                                                              //0
	FLOAT TextY;                                                              //0
	FLOAT m_fFontSpacing;                                                     //0
	FLOAT m_fLMarge;                                                          //0
	FLOAT m_fHBorderHeight;                                                   //0
	FLOAT m_fVBorderWidth;                                                    //0
	FLOAT m_fHBorderPadding;                                                  //0
	FLOAT m_fVBorderPadding;                                                  //0
	class UFont* m_Font;                                                      //0
	class UTexture* m_BGTexture;                                              //0
	class UTexture* m_HBorderTexture;                                         //0
	class UTexture* m_VBorderTexture;                                         //0
	struct FRegion m_BGTextureRegion;                                         //0
	struct FRegion m_HBorderTextureRegion;                                    //0
	struct FRegion m_VBorderTextureRegion;                                    //0
	struct FRegion m_BGExtRegion;                                             //0
	class FColor TextColor;                                                   //0
	class FColor m_BGColor;                                                   //0
	class FString Text;                                                       //CPF_NeedCtorLink
};
struct UR6WindowTextListRadio_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTextX;                                                             //0
	FLOAT fTextY;                                                             //0
	class UUWindowListBoxItem* pListBoxItem;                                  //0
};
struct UR6WindowTextListRadio_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};

// *****************************************************************************
// UR6WindowTextListRadio (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextListRadio : public UR6WindowListRadio
{
public:
	class FColor m_SelTextColor;                                              //0
};

enum eCornerType{
	 No_Corners=0
	,Top_Corners=1
	,Bottom_Corners=2
	,All_Corners=3
};
struct UR6WindowSimpleFramedWindow_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tempSpace;                                                          //0
};
struct UR6WindowSimpleFramedWindow_execSetCornerType_Parms
{
	BYTE _eCornerType;                                                        //CPF_Parm
};
struct UR6WindowSimpleFramedWindow_execCreateClientWindow_Parms
{
	class UClass* ClientClass;                                                //CPF_Parm
};

// *****************************************************************************
// UR6WindowSimpleFramedWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowSimpleFramedWindow : public UUWindowWindow
{
public:
	BYTE m_eCornerType;                                                       //0
	INT m_DrawStyle;                                                          //0
	BITFIELD bShowLog : 1;                                                    //0
	FLOAT m_fHBorderHeight;                                                   //0
	FLOAT m_fVBorderWidth;                                                    //0
	FLOAT m_fHBorderPadding;                                                  //0
	FLOAT m_fVBorderPadding;                                                  //0
	FLOAT m_fHBorderOffset;                                                   //0
	FLOAT m_fVBorderOffset;                                                   //0
	class UTexture* m_HBorderTexture;                                         //0
	class UTexture* m_VBorderTexture;                                         //0
	class UTexture* m_topLeftCornerT;                                         //0
	class UUWindowWindow* m_ClientArea;                                       //0
	class UClass* m_ClientClass;                                              //0
	struct FRegion m_HBorderTextureRegion;                                    //0
	struct FRegion m_VBorderTextureRegion;                                    //0
	struct FRegion m_topLeftCornerR;                                          //0
};
struct UR6WindowTextListBoxExt_execGetSizeOfAnItem_Parms
{
	class UUWindowList* _pItem;                                               //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fTotalHeight;                                                       //0
	INT i;                                                                    //0
	INT iLineNumber;                                                          //0
};
struct UR6WindowTextListBoxExt_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6WindowListBoxItemExt* pIt;                                       //0
	class FString szToDisplay;                                                //CPF_NeedCtorLink
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	FLOAT fYPos;                                                              //0
	FLOAT fYAdjust;                                                           //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	INT k;                                                                    //0
};

// *****************************************************************************
// UR6WindowTextListBoxExt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextListBoxExt : public UR6WindowTextListBox
{
};
struct UR6WindowIGPlayerInfoListBox_execDrawIcon_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT _iPlayerStats;                                                        //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	struct FRegion RIconRegion;                                               //0
	struct FRegion RIconToDraw;                                               //0
};
struct UR6WindowIGPlayerInfoListBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class FString szTemp;                                                     //CPF_NeedCtorLink
	FLOAT TextY;                                                              //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	FLOAT fTemp;                                                              //0
	FLOAT fYPos;                                                              //0
	class UR6WindowListIGPlayerInfoItem* pItem;                               //0
};
struct UR6WindowIGPlayerInfoListBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowIGPlayerInfoListBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowIGPlayerInfoListBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowIGPlayerInfoListBox : public UR6WindowListBox
{
public:
	BYTE m_BGRenderStyle;                                                     //0
	INT m_fYOffSet;                                                           //0
	class UTexture* m_BGSelTexture;                                           //0
	class UFont* m_Font;                                                      //0
	class FColor m_BGSelColor;                                                //0
	struct FRegion m_BGSelRegion;                                             //0
	class FColor m_SelTextColor;                                              //0
	class FColor m_SpectatorColor;                                            //0
};
struct UR6WindowFramedWindow_execSetDisplayClose_Parms
{
	BITFIELD bNewDisplay : 1;                                                 //CPF_Parm
};
struct UR6WindowFramedWindow_execWindowHidden_Parms
{
};
struct UR6WindowFramedWindow_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT iKey;                                                                 //CPF_Parm
};
struct UR6WindowFramedWindow_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowFramedWindow_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fOldW;                                                              //0
	FLOAT fOldH;                                                              //0
	BYTE H;                                                                   //0
};
struct UR6WindowFramedWindow_execResized_Parms
{
	struct FRegion R;                                                         //0
};
struct UR6WindowFramedWindow_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BYTE H;                                                                   //0
};
struct UR6WindowFramedWindow_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowFramedWindow_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};
struct UR6WindowFramedWindow_execIsActive_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowFramedWindow_execGetLookAndFeelTexture_Parms
{
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowFramedWindow_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowFramedWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowFramedWindow : public UUWindowWindow
{
public:
	BYTE m_TitleAlign;                                                        //0
	BITFIELD m_bTLSizing : 1;                                                 //0
	BITFIELD m_bTSizing : 1;                                                  //0
	BITFIELD m_bTRSizing : 1;                                                 //0
	BITFIELD m_bLSizing : 1;                                                  //0
	BITFIELD m_bRSizing : 1;                                                  //0
	BITFIELD m_bBLSizing : 1;                                                 //0
	BITFIELD m_bBSizing : 1;                                                  //0
	BITFIELD m_bBRSizing : 1;                                                 //0
	BITFIELD m_bMoving : 1;                                                   //0
	BITFIELD m_bSizable : 1;                                                  //0
	BITFIELD m_bMovable : 1;                                                  //0
	BITFIELD m_bDisplayClose : 1;                                             //0
	FLOAT m_fMoveX;                                                           //0
	FLOAT m_fMoveY;                                                           //0
	FLOAT m_fMinWinWidth;                                                     //0
	FLOAT m_fMinWinHeight;                                                    //0
	FLOAT m_fTitleOffSet;                                                     //0
	class UUWindowWindow* m_ClientArea;                                       //0
	class UUWindowButton* m_CloseBoxButton;                                   //0
	class UClass* m_ClientClass;                                              //0
	class FString m_szWindowTitle;                                            //CPF_Localized|CPF_NeedCtorLink
	class FString m_szStatusBarText;                                          //CPF_NeedCtorLink
};
struct UR6WindowUbiLogIn_execHideWindow_Parms
{
};
struct UR6WindowUbiLogIn_execShowWindow_Parms
{
};
struct UR6WindowUbiLogIn_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
	class UR6WindowUbiLoginClient* pUbiLoginClient;                           //0
};
struct UR6WindowUbiLogIn_execPopUpBoxCreate_Parms
{
	class UR6WindowUbiLoginClient* pR6LoginClientTemp;                        //0
	class UR6WindowWrappedTextArea* pTextZone;                                //0
	FLOAT fX;                                                                 //0
	FLOAT fY;                                                                 //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fTextHeight;                                                        //0
};
struct UR6WindowUbiLogIn_execProcessGSMsg_Parms
{
	class FString _szMsg;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowUbiLogIn_execManager_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
};
struct UR6WindowUbiLogIn_execLogInAfterDisconnect_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
};
struct UR6WindowUbiLogIn_execStartLogInProcedure_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
};

// *****************************************************************************
// UR6WindowUbiLogIn (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowUbiLogIn : public UR6WindowMPManager
{
public:
	class UR6WindowPopUpBox* m_pR6UbiAccount;                                 //0
	class UR6WindowPopUpBox* m_pDisconnected;                                 //0
	class UR6GSServers* m_GameService;                                        //0
	class UUWindowWindow* m_pSendMessageDest;                                 //0
	class FString m_szInitError;                                              //CPF_NeedCtorLink
};

enum eJoinRoomChoice{
	 EJRC_NO=0
	,EJRC_BY_LOBBY_AND_ROOM_ID=1
};
struct UR6WindowUbiCDKeyCheck_execDisplayErrorMsg_Parms
{
	class FString _szErrorMsg;                                                //CPF_Parm|CPF_NeedCtorLink
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6WindowUbiCDKeyCheck_execProcessGSMsg_Parms
{
	class FString _szMsg;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowUbiCDKeyCheck_execSelectCDKeyBox_Parms
{
	BITFIELD _bClearEditBox : 1;                                              //CPF_Parm
	class UR6WindowEditBox* pR6EditBoxTemp;                                   //0
};
struct UR6WindowUbiCDKeyCheck_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6WindowUbiCDKeyCheck_execCreated_Parms
{
	class UR6WindowEditBox* pR6EditBoxTemp;                                   //0
	class UR6WindowTextLabel* pR6TextLabelTemp;                               //0
};

// *****************************************************************************
// UR6WindowUbiCDKeyCheck (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowUbiCDKeyCheck : public UR6WindowMPManager
{
public:
	BYTE m_eJoinRoomChoice;                                                   //0
	class UR6GSServers* m_GameService;                                        //0
	class UUWindowWindow* m_pSendMessageDest;                                 //0
	class UR6WindowPopUpBox* m_pPleaseWait;                                   //0
	class UR6WindowPopUpBox* m_pR6EnterCDKey;                                 //0
	class FString m_szPassword;                                               //CPF_NeedCtorLink
	class FString m_szLocMod;                                                 //CPF_NeedCtorLink
};
struct UR6WindowQueryServerInfo_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6WindowQueryServerInfo_execPopUpBoxCreate_Parms
{
	class UR6WindowEditBox* pR6EditBoxTemp;                                   //0
	class UR6WindowTextLabel* pR6TextLabelTemp;                               //0
};
struct UR6WindowQueryServerInfo_execIsSameGameVersion_Parms
{
	class FString _szPreJoinModName;                                          //CPF_Parm|CPF_NeedCtorLink
	class FString _szPreJoinInfoGameVer;                                      //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6ModMgr* pModMgr;                                                 //0
	class UR6Mod* pTempCurrentMod;                                            //0
	class UR6Mod* pBkpMod;                                                    //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT i;                                                                    //0
	BITFIELD bSameGameVersion : 1;                                            //0
};
struct UR6WindowQueryServerInfo_execManager_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
	FLOAT elapsedTime;                                                        //0
};
struct UR6WindowQueryServerInfo_execStartQueryServerInfoProcedure_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
	class FString _szServerIP;                                                //CPF_Parm|CPF_NeedCtorLink
	INT _iBeaconPort;                                                         //CPF_Parm
};

// *****************************************************************************
// UR6WindowQueryServerInfo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowQueryServerInfo : public UR6WindowMPManager
{
public:
	BITFIELD m_bWaitingForBeacon : 1;                                         //0
	BITFIELD m_bRoomValid : 1;                                                //0
	FLOAT m_fBeaconTime;                                                      //0
	class UR6WindowPopUpBox* m_pPleaseWait;                                   //0
	class UR6GSServers* m_GameService;                                        //0
	class UUWindowWindow* m_pSendMessageDest;                                 //0
};
struct UR6WindowUbiLoginClient_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6WindowUbiLoginClient_execSetupClientWindow_Parms
{
	FLOAT fWindowWidth;                                                       //CPF_Parm
	FLOAT fX;                                                                 //0
	FLOAT fY;                                                                 //0
	FLOAT fWidth;                                                             //0
	FLOAT fHeight;                                                            //0
};

// *****************************************************************************
// UR6WindowUbiLoginClient (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowUbiLoginClient : public UUWindowDialogClientWindow
{
public:
	class UR6WindowEditControl* m_pUserName;                                  //0
	class UR6WindowEditControl* m_pPassword;                                  //0
	class UR6WindowButtonBox* m_pSavePassword;                                //0
	class UR6WindowButtonBox* m_pAutoLogIn;                                   //0
	class UR6WindowButton* m_pCrAccountBut;                                   //0
	class UR6WindowTextLabelExt* m_pCrAccountText;                            //0
};

enum eJoinIPState{
	 EJOINIP_ENTER_IP=0
	,EJOINIP_WAITING_FOR_BEACON=1
	,EJOINIP_BEACON_FAIL=2
	,EJOINIP_WAITING_FOR_UBICOMLOGIN=3
};
struct UR6WindowJoinIP_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6WindowJoinIP_execPopUpBoxCreate_Parms
{
	class UR6WindowEditBox* pR6EditBoxTemp;                                   //0
	class UR6WindowTextLabel* pR6TextLabelTemp;                               //0
};
struct UR6WindowJoinIP_execManager_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
	FLOAT elapsedTime;                                                        //0
};
struct UR6WindowJoinIP_execStartCmdLineJoinIPProcedure_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
	class FString _szLastIP;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowJoinIP_execStartJoinIPProcedure_Parms
{
	class UUWindowWindow* _pCurrentWidget;                                    //CPF_Parm
	class FString _szLastIP;                                                  //CPF_Parm|CPF_NeedCtorLink
};

// *****************************************************************************
// UR6WindowJoinIP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowJoinIP : public UUWindowWindow
{
public:
	BYTE eState;                                                              //0
	BITFIELD m_bRoomValid : 1;                                                //0
	BITFIELD m_bStartByCmdLine : 1;                                           //0
	FLOAT m_fBeaconTime;                                                      //0
	class UR6WindowPopUpBox* m_pEnterIP;                                      //0
	class UR6WindowPopUpBox* m_pPleaseWait;                                   //0
	class UR6WindowPopUpBox* m_pError;                                        //0
	class UR6GSServers* m_GameService;                                        //0
	class UUWindowWindow* m_pSendMessageDest;                                 //0
	class FString m_szIP;                                                     //CPF_NeedCtorLink
};
struct UR6WindowButtonAndEditBox_execSetEditBoxTip_Parms
{
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowButtonAndEditBox_execSetDisableButtonAndEditBox_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6WindowButtonAndEditBox_execCreateEditBox_Parms
{
	FLOAT fWidth;                                                             //CPF_Parm
	INT fXPos;                                                                //0
};
struct UR6WindowButtonAndEditBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6WindowButtonAndEditBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonAndEditBox : public UR6WindowButtonBox
{
public:
	class UR6WindowEditControl* m_pEditBox;                                   //0
	class FString m_szEditTextHistory;                                        //CPF_NeedCtorLink
};
struct UR6WindowListGeneral_execChangeVisualItems_Parms
{
	BITFIELD _bVisible : 1;                                                   //CPF_Parm
	class UUWindowList* i;                                                    //0
};
struct UR6WindowListGeneral_execRemoveAllItems_Parms
{
	class UR6WindowListGeneralItem* ItemIndex;                                //0
};
struct UR6WindowListGeneral_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6WindowListGeneralItem* pListGenItem;                             //0
};
struct UR6WindowListGeneral_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fX;                                                                 //0
	FLOAT fY;                                                                 //0
	class UUWindowList* CurItem;                                              //0
};

// *****************************************************************************
// UR6WindowListGeneral (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListGeneral : public UUWindowListControl
{
public:
	FLOAT m_fItemWidth;                                                       //0
	FLOAT m_fItemHeight;                                                      //0
	FLOAT m_fStepBetweenItem;                                                 //0
};
struct UR6WindowEditControl_execSetEditBoxTip_Parms
{
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowEditControl_execSetEditControlStatus_Parms
{
	BITFIELD _bDisable : 1;                                                   //CPF_Parm
};
struct UR6WindowEditControl_execCreateTextLabel_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowEditControl_execModifyEditBoxW_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowEditControl_execForceCaps_Parms
{
	BITFIELD choice : 1;                                                      //CPF_Parm
};
struct UR6WindowEditControl_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UTexture* t;                                                        //0
};
struct UR6WindowEditControl_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowEditControl_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowEditControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowEditControl : public UUWindowEditControl
{
public:
	BITFIELD m_bUseSpecialPaint : 1;                                          //0
	BITFIELD m_bDisabled : 1;                                                 //0
	class UR6WindowTextLabel* m_pTextLabel;                                   //0
};
struct UR6WindowEditBox_execPaintEditBoxBG_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowEditBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT fStringLeftOfCaretW;                                                //0
	FLOAT H;                                                                  //0
};
struct UR6WindowEditBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6WindowEditBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowEditBox : public UUWindowEditBox
{
public:
	BITFIELD bCaps : 1;                                                       //0
	FLOAT m_fYTextPos;                                                        //0
	FLOAT m_fTextHeight;                                                      //0
	FLOAT m_fYBGPos;                                                          //0
	class UTexture* m_TBGEditTexture;                                         //0
	struct FRegion m_RBGEditTexture;                                          //0
	class FString m_szCurValue;                                               //CPF_NeedCtorLink
	class FString m_szValueToDisplay;                                         //CPF_NeedCtorLink
};

enum eCornerType{
	 No_Corners=0
	,Top_Corners=1
	,Bottom_Corners=2
	,All_Corners=3
};
enum eBorderType{
	 Border_Top=0
	,Border_Bottom=1
	,Border_Left=2
	,Border_Right=3
};
struct UR6WindowPopUpBox_execRemoveDisableDLG_Parms
{
};
struct UR6WindowPopUpBox_execAddDisableDLG_Parms
{
	class UR6GameOptions* pGameOptions;                                       //0
};
struct UR6WindowPopUpBox_execWindowEvent_Parms
{
	BYTE Msg;                                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Key;                                                                  //CPF_Parm
};
struct UR6WindowPopUpBox_execHideWindow_Parms
{
};
struct UR6WindowPopUpBox_execShowLockPopUp_Parms
{
};
struct UR6WindowPopUpBox_execShowWindow_Parms
{
};
struct UR6WindowPopUpBox_execClose_Parms
{
	BITFIELD bByParent : 1;                                                   //CPF_Parm
	class UR6GameOptions* pGameOptions;                                       //0
	BITFIELD bGOSaveConfig : 1;                                               //0
};
struct UR6WindowPopUpBox_execSetupPopUpBox_Parms
{
	BYTE Buttons;                                                             //CPF_Parm
	BYTE InESCResult;                                                         //CPF_Parm
	BYTE InEnterResult;                                                       //CPF_Parm
};
struct UR6WindowPopUpBox_execSetButtonsType_Parms
{
	INT _iButtonsType;                                                        //CPF_Parm
};
struct UR6WindowPopUpBox_execSetPopUpResizable_Parms
{
	BITFIELD _bResizable : 1;                                                 //CPF_Parm
};
struct UR6WindowPopUpBox_execResizePopUp_Parms
{
	FLOAT _fNewWidth;                                                         //CPF_Parm
	FLOAT fTemp;                                                              //0
	INT ITemp;                                                                //0
};
struct UR6WindowPopUpBox_execSetCornerColor_Parms
{
	INT _iCornerType;                                                         //CPF_Parm
	class FColor _Color;                                                      //CPF_Parm
};
struct UR6WindowPopUpBox_execSetNoBorder_Parms
{
};
struct UR6WindowPopUpBox_execActiveBorder_Parms
{
	INT _iBorderType;                                                         //CPF_Parm
	BITFIELD _Active : 1;                                                     //CPF_Parm
	INT i;                                                                    //0
	BITFIELD bNoBorderToDraw : 1;                                             //0
};
struct UR6WindowPopUpBox_execSetBorderParam_Parms
{
	INT _iBorderType;                                                         //CPF_Parm
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	class FColor _vColor;                                                     //CPF_Parm
};
struct UR6WindowPopUpBox_execCreatePopUpFrame_Parms
{
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	FLOAT fBorderSize;                                                        //0
	FLOAT fBorderWidth;                                                       //0
};
struct UR6WindowPopUpBox_execUpdateTimeInTextLabel_Parms
{
	INT _iNewTime;                                                            //CPF_Parm
	class FString _StringInstead;                                             //CPF_Parm|CPF_NeedCtorLink
	class FColor vTimeColor;                                                  //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6WindowPopUpBox_execTextWindowOnly_Parms
{
	class FString _szTitleText;                                               //CPF_Parm|CPF_NeedCtorLink
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowPopUpBox_execModifyTextWindow_Parms
{
	class FString _szTitleText;                                               //CPF_Parm|CPF_NeedCtorLink
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowPopUpBox_execCreateTextWindow_Parms
{
	class FString _szTitleText;                                               //CPF_Parm|CPF_NeedCtorLink
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowPopUpBox_execModifyPopUpFrameWindow_Parms
{
	class FString _szPopUpTitle;                                              //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fTextHeight;                                                       //CPF_Parm
	FLOAT _fXPos;                                                             //CPF_Parm
	FLOAT _fYPos;                                                             //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	INT _iButtonsType;                                                        //CPF_Parm
};
struct UR6WindowPopUpBox_execCreatePopUpFrameWindow_Parms
{
	class FString _szPopUpTitle;                                              //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fTextHeight;                                                       //CPF_Parm
	FLOAT _fXPos;                                                             //CPF_Parm
	FLOAT _fYPos;                                                             //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowPopUpBox_execCreateStdPopUpWindow_Parms
{
	class FString _szPopUpTitle;                                              //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fTextHeight;                                                       //CPF_Parm
	FLOAT _fXPos;                                                             //CPF_Parm
	FLOAT _fYPos;                                                             //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	INT _iButtonsType;                                                        //CPF_Parm
};
struct UR6WindowPopUpBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowPopUpBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT XOff;                                                               //0
	FLOAT fWinWidth;                                                          //0
	class FString _szTitleText;                                               //CPF_NeedCtorLink
	FLOAT _TextHeight;                                                        //0
	FLOAT _X;                                                                 //0
	FLOAT _Y;                                                                 //0
	FLOAT _fWidth;                                                            //0
	FLOAT _fHeight;                                                           //0
};
struct UR6WindowPopUpBox_execCreateClientWindow_Parms
{
	class UClass* ClientClass;                                                //CPF_Parm
	BITFIELD _bButtonBar : 1;                                                 //CPF_Parm
	BITFIELD _bDrawClientOnBorder : 1;                                        //CPF_Parm
};
struct UR6WindowPopUpBox_execCreated_Parms
{
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6WindowPopUpBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowPopUpBox : public UUWindowWindow
{
public:
	BYTE m_eCornerType;                                                       //0
	BYTE m_ePopUpID;                                                          //0
	BYTE Result;                                                              //0
	BYTE DefaultResult;                                                       //0
	INT m_DrawStyle;                                                          //0
	INT m_iPopUpButtonsType;                                                  //0
	BITFIELD m_bNoBorderToDraw : 1;                                           //0
	BITFIELD m_bBGFullScreen : 1;                                             //0
	BITFIELD m_bBGClientArea : 1;                                             //0
	BITFIELD m_bDetectKey : 1;                                                //0
	BITFIELD m_bForceButtonLine : 1;                                          //0
	BITFIELD m_bDisablePopUpActive : 1;                                       //0
	BITFIELD m_bPopUpLock : 1;                                                //0
	BITFIELD m_bTextWindowOnly : 1;                                           //0
	BITFIELD m_bResizePopUpOnTextLabel : 1;                                   //0
	BITFIELD m_bHideAllChild : 1;                                             //0
	FLOAT m_fHBorderHeight;                                                   //0
	FLOAT m_fVBorderWidth;                                                    //0
	FLOAT m_fHBorderPadding;                                                  //0
	FLOAT m_fVBorderPadding;                                                  //0
	FLOAT m_fHBorderOffset;                                                   //0
	FLOAT m_fVBorderOffset;                                                   //0
	class UTexture* m_BGTexture;                                              //0
	class UTexture* m_HBorderTexture;                                         //0
	class UTexture* m_VBorderTexture;                                         //0
	class UTexture* m_topLeftCornerT;                                         //0
	class UUWindowWindow* m_ClientArea;                                       //0
	class UUWindowWindow* m_ButClientArea;                                    //0
	class UR6WindowTextLabelExt* m_pTextLabel;                                //0
	class UClass* m_ClientClass;                                              //0
	struct FRegion m_BGTextureRegion;                                         //0
	struct FRegion m_HBorderTextureRegion;                                    //0
	struct FRegion m_VBorderTextureRegion;                                    //0
	struct FRegion m_topLeftCornerR;                                          //0
	struct FRegion m_RWindowBorder;                                           //0
	struct FRegion SimpleBorderRegion;                                        //0
	struct FstBorderForm m_sBorderForm[4];                                    //0
	class FColor m_eCornerColor[4];                                           //0
	class FColor m_vFullBGColor;                                              //0
	class FColor m_vClientAreaColor;                                          //0
};

// -----------------------------------------------------------------------------
// FTextLabel ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FTextLabel
{
public:
	class UFont* TextFont;                                                //0
	class FColor TextColorFont;                                           //0
	class FString m_szTextLabel;                                          //CPF_NeedCtorLink
	FLOAT X;                                                              //0
	FLOAT XTextPos;                                                       //0
	FLOAT Y;                                                              //0
	FLOAT fWidth;                                                         //0
	FLOAT fHeight;                                                        //0
	FLOAT fXLine;                                                         //0
	BYTE Align;                                                           //0
	BITFIELD bDrawLineAtEnd : 1;                                          //0
	BITFIELD bUpDownBG : 1;                                               //0
	BITFIELD bResizeToText : 1;                                           //0
};
struct UR6WindowTextLabelExt_execClear_Parms
{
	INT i;                                                                    //0
};
struct UR6WindowTextLabelExt_execGetTextColor_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	class FColor ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowTextLabelExt_execGetTextLabel_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6WindowTextLabelExt_execChangeColorLabel_Parms
{
	class FColor _vNewColorText;                                              //CPF_Parm
	INT _iIndex;                                                              //CPF_Parm
};
struct UR6WindowTextLabelExt_execChangeTextLabel_Parms
{
	class FString _szNewStringLabel;                                          //CPF_Parm|CPF_NeedCtorLink
	INT _iIndex;                                                              //CPF_Parm
};
struct UR6WindowTextLabelExt_execAddTextLabel_Parms
{
	class FString _szTextToAdd;                                               //CPF_Parm|CPF_NeedCtorLink
	FLOAT _X;                                                                 //CPF_Parm
	FLOAT _Y;                                                                 //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	BYTE _Align;                                                              //CPF_Parm
	BITFIELD _bDrawLineAtEnd : 1;                                             //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	BITFIELD _bResizeToText : 1;                                              //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT iIndex;                                                               //0
};
struct UR6WindowTextLabelExt_execDrawUpDownBG_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fW;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	class UTexture* BGTexture;                                                //0
	struct FRegion RTexture;                                                  //0
};
struct UR6WindowTextLabelExt_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tempSpace;                                                          //0
	INT i;                                                                    //0
	class UTexture* t;                                                        //0
};
struct UR6WindowTextLabelExt_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT fWinWidth;                                                          //0
	FLOAT fRelativeX;                                                         //0
	FLOAT fXTemp;                                                             //0
	INT i;                                                                    //0
};
struct UR6WindowTextLabelExt_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowTextLabelExt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextLabelExt : public UR6WindowSimpleFramedWindowExt
{
public:
	BYTE Align;                                                               //0
	INT m_TextDrawstyle;                                                      //0
	INT m_DrawStyle;                                                          //0
	INT m_iNumberOfLabel;                                                     //0
	BITFIELD m_bRefresh : 1;                                                  //0
	BITFIELD m_bCheckToDrawLine : 1;                                          //0
	BITFIELD m_bTextCenterToWindow : 1;                                       //0
	BITFIELD m_bUpDownBG : 1;                                                 //0
	FLOAT m_fTextX;                                                           //0
	FLOAT m_fTextY;                                                           //0
	FLOAT m_fFontSpacing;                                                     //0
	FLOAT m_fLMarge;                                                          //0
	FLOAT m_fYLineOffset;                                                     //0
	class UFont* m_Font;                                                      //0
	class UTexture* m_BGTexture;                                              //0
	class FColor m_vTextColor;                                                //0
	class FColor m_vLineColor;                                                //0
	struct FTextLabel m_sTextLabelArray[20];                                  //CPF_NeedCtorLink
	class FString Text;                                                       //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FstKeyAvailability ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstKeyAvailability
{
public:
	INT iKey;                                                             //0
	INT iWidgetKA;                                                        //0
};
struct UR6WindowRootWindow_execGetMapNameLocalisation_Parms
{
	class FString _szMapName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString _szMapNameLoc;                                              //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD _bReturnInitName : 1;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	INT j;                                                                    //0
	class UR6Console* R6Console;                                              //0
	class UR6MissionDescription* mission;                                     //0
	class ALevelInfo* pLevel;                                                 //0
};
struct UR6WindowRootWindow_execCheckConsoleTypingState_Parms
{
	FName _RequestConsoleState;                                               //CPF_Parm
};
struct UR6WindowRootWindow_execPaintBackground_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowWindow* _WidgetWindow;                                      //CPF_Parm
};
struct UR6WindowRootWindow_execSetLoadRandomBackgroundImage_Parms
{
	class FString _szFolder;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowRootWindow_execCloseAllWindow_Parms
{
	INT i;                                                                    //0
	INT iNbOfWindow;                                                          //0
};
struct UR6WindowRootWindow_execIsWidgetIsInHistory_Parms
{
	BYTE _eWidgetToFind;                                                      //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
};
struct UR6WindowRootWindow_execManagePrevWInHistory_Parms
{
	BITFIELD _bClearPrevWInHistory : 1;                                       //CPF_Parm
	INT _iNbOfWidgetInList;                                                   //CPF_Parm|CPF_OutParm
};
struct UR6WindowRootWindow_execGetPopUpFrame_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	class UR6WindowPopUpBox* ReturnValue;                                     //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UR6WindowPopUpBox* pPopUpFrame;                                     //0
};
struct UR6WindowRootWindow_execAddKeyInList_Parms
{
	INT _iKey;                                                                //CPF_Parm
	INT _iWKA;                                                                //CPF_Parm
	struct FstKeyAvailability stKeyATemp;                                     //0
};
struct UR6WindowRootWindow_execFillListOfKeyAvailability_Parms
{
};
struct UR6WindowRootWindow_execModifyPopUpInsideText_Parms
{
	TArray<class FString> _ANewText;                                          //CPF_Parm|CPF_NeedCtorLink
	class UR6WindowWrappedTextArea* pTextZone;                                //0
	INT i;                                                                    //0
};
struct UR6WindowRootWindow_execGetSimplePopUpID_Parms
{
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowRootWindow_execPopUpBoxDone_Parms
{
	BYTE Result;                                                              //CPF_Parm
	BYTE _ePopUpID;                                                           //CPF_Parm
};
struct UR6WindowRootWindow_execSimpleTextPopUp_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowRootWindow_execSimplePopUp_Parms
{
	class FString _szTitle;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	BYTE _ePopUpID;                                                           //CPF_Parm
	INT _iButtonsType;                                                        //CPF_Parm
	BITFIELD bAddDisableDlg : 1;                                              //CPF_Parm
	class UUWindowWindow* OwnerWindow;                                        //CPF_Parm
	class UR6WindowWrappedTextArea* pTextZone;                                //0
};

// *****************************************************************************
// UR6WindowRootWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowRootWindow : public UUWindowRootWindow
{
public:
	INT m_iWidgetKA;                                                          //0
	INT m_iLastKeyDown;                                                       //0
	class UR6WindowPopUpBox* m_pSimplePopUp;                                  //0
	class UTexture* m_BGTexture[2];                                           //0
	TArray<struct FStWidget> m_pListOfActiveWidget;                           //CPF_NeedCtorLink
	TArray<struct FstKeyAvailability> m_pListOfKeyAvailability;               //CPF_NeedCtorLink
	TArray<class UR6WindowPopUpBox*> m_pListOfFramePopUp;                     //CPF_NeedCtorLink
	struct FRegion m_RSimplePopUp;                                            //0
	struct FRegion m_RAddDlgSimplePopUp;                                      //0
	class FString m_szCurrentBackgroundSubDirectory;                          //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6WindowListGeneralItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListGeneralItem : public UUWindowListBoxItem
{
public:
	BITFIELD m_bFakeItem : 1;                                                 //0
	class UR6WindowCounter* m_pR6WindowCounter;                               //0
	class UR6WindowButtonBox* m_pR6WindowButtonBox;                           //0
	class UR6WindowComboControl* m_pR6WindowComboControl;                     //0
};

enum eAssociateButCase{
	 EABC_Down=0
	,EABC_Up=1
};
struct UR6WindowCounter_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6WindowCounter_execIsMouseDown_Parms
{
	class UUWindowDialogControl* _pButton;                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowCounter_execTick_Parms
{
	FLOAT DeltaTime;                                                          //CPF_Parm
	BITFIELD bButPressed : 1;                                                 //0
};
struct UR6WindowCounter_execSetAdviceParent_Parms
{
	BITFIELD _bAdviceParent : 1;                                              //CPF_Parm
};
struct UR6WindowCounter_execCheckSubButton_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT bSubValue;                                                          //0
};
struct UR6WindowCounter_execCheckAddButton_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowCounter_execCheckValue_Parms
{
	INT _iValue;                                                              //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowCounter_execCheckValueForUnlimitedCounter_Parms
{
	INT _iValue;                                                              //CPF_Parm
	BITFIELD _bDefaultValue : 1;                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowCounter_execSetCounterValue_Parms
{
	INT _iNewValue;                                                           //CPF_Parm
};
struct UR6WindowCounter_execSetDefaultValues_Parms
{
	INT _iMin;                                                                //CPF_Parm
	INT _iMax;                                                                //CPF_Parm
	INT _iDefaultValue;                                                       //CPF_Parm
};
struct UR6WindowCounter_execSetButtonToolTip_Parms
{
	class FString _szLeftToolTip;                                             //CPF_Parm|CPF_NeedCtorLink
	class FString _szRightToolTip;                                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowCounter_execCreateButtons_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fSizeOfCounter;                                                    //CPF_Parm
	struct FRegion RDisableRegion;                                            //0
	struct FRegion RNormalRegion;                                             //0
	FLOAT fHeight;                                                            //0
	FLOAT fButtonWidth;                                                       //0
	FLOAT fButtonHeight;                                                      //0
};
struct UR6WindowCounter_execSetLabelText_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UFont* _TextFont;                                                   //CPF_Parm
	class FColor _vTextColor;                                                 //CPF_Parm
};
struct UR6WindowCounter_execCreateLabelText_Parms
{
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};

// *****************************************************************************
// UR6WindowCounter (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowCounter : public UUWindowDialogClientWindow
{
public:
	INT m_iAssociateButCase;                                                  //0
	INT m_iStepCounter;                                                       //0
	INT m_iCounter;                                                           //0
	INT m_iMinCounter;                                                        //0
	INT m_iMaxCounter;                                                        //0
	INT m_iButtonID;                                                          //0
	BITFIELD m_bAdviceParent : 1;                                             //0
	BITFIELD m_bNotAcceptClick : 1;                                           //0
	BITFIELD m_bUnlimitedCounterOnZero : 1;                                   //0
	BITFIELD m_bButPressed : 1;                                               //0
	FLOAT m_fTimeCheckBut;                                                    //0
	FLOAT m_fTimeToWait;                                                      //0
	class UR6WindowCounter* m_pAssociateButton;                               //0
	class UR6WindowButton* m_pSubButton;                                      //0
	class UR6WindowButton* m_pPlusButton;                                     //0
	class UR6WindowTextLabel* m_pTextInfo;                                    //0
	class UR6WindowTextLabel* m_pNbOfCounter;                                 //0
};
struct UR6WindowLookAndFeel_execDrawPopUpTextBackGround_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawMPSpectatorIcon_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawMPDedicatedIcon_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawMPLockedIcon_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawMPFavoriteIcon_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawInGamePlayerStats_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	INT _iPlayerStats;                                                        //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawBGShading_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT Width;                                                              //CPF_Parm
	FLOAT Height;                                                             //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawBox_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT Width;                                                              //CPF_Parm
	FLOAT Height;                                                             //CPF_Parm
};
struct UR6WindowLookAndFeel_execButton_SetupEnumSignChoice_Parms
{
	class UUWindowButton* W;                                                  //CPF_Parm
	INT eRegionId;                                                            //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawPopUpFrameWindow_Parms
{
	class UR6WindowPopUpBox* W;                                               //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execR6FW_HitTest_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowLookAndFeel_execDrawButtonBorder_Parms
{
	class UUWindowWindow* W;                                                  //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	BITFIELD _bDefineBorderColor : 1;                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawSpecialButtonBorder_Parms
{
	class UR6WindowButton* B;                                                 //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowLookAndFeel_execR6FW_GetClientArea_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowLookAndFeel_execR6FW_SetupFrameButtons_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execR6FW_DrawWindowFrame_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execR6GetTexture_Parms
{
	class UR6WindowFramedWindow* W;                                           //CPF_Parm
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowLookAndFeel_execDrawHSplitterB_Parms
{
	class UR6WindowHSplitter* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawHSplitterT_Parms
{
	class UR6WindowHSplitter* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execDrawWinTop_Parms
{
	class UR6WindowHSplitter* W;                                              //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execR6List_DrawBackground_Parms
{
	class UR6WindowListBox* W;                                                //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowLookAndFeel_execList_DrawBackground_Parms
{
	class UUWindowListControl* W;                                             //CPF_Parm
	class UCanvas* C;                                                         //CPF_Parm
};

// *****************************************************************************
// UR6WindowLookAndFeel (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowLookAndFeel : public UUWindowLookAndFeel
{
public:
	INT m_iCloseBoxOffsetX;                                                   //0
	INT m_iCloseBoxOffsetY;                                                   //0
	INT m_iListHPadding;                                                      //0
	INT m_iListVPadding;                                                      //0
	INT m_iSize_ScrollBarFrameW;                                              //0
	INT m_iVScrollerWidth;                                                    //0
	INT m_iScrollerOffset;                                                    //0
	class UTexture* m_R6ScrollTexture;                                        //0
	class UTexture* m_TButtonBackGround;                                      //0
	struct FRegionButton m_SBUp;                                              //0
	struct FRegionButton m_SBDown;                                            //0
	struct FRegionButton m_SBRight;                                           //0
	struct FRegionButton m_SBLeft;                                            //0
	struct FRegion m_SBBackground;                                            //0
	struct FRegion m_SBVBorder;                                               //0
	struct FRegion m_SBHBorder;                                               //0
	struct FRegion m_SBScroller;                                              //0
	struct FRegion m_CloseBoxUp;                                              //0
	struct FRegion m_CloseBoxDown;                                            //0
	struct FRegion m_RButtonBackGround;                                       //0
	class FColor m_CBorder;                                                   //0
};
struct UR6WindowWrappedTextArea_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowWrappedTextArea_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowWrappedTextArea_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowWrappedTextArea_execResize_Parms
{
};
struct UR6WindowWrappedTextArea_execSetScrollable_Parms
{
	BITFIELD newScrollable : 1;                                               //CPF_Parm
};
struct UR6WindowWrappedTextArea_execSetBorderColor_Parms
{
	class FColor _NewColor;                                                   //CPF_Parm
};

// *****************************************************************************
// UR6WindowWrappedTextArea (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowWrappedTextArea : public UUWindowWrappedTextArea
{
public:
	INT m_BGDrawStyle;                                                        //0
	BITFIELD m_bDrawBorders : 1;                                              //0
	BITFIELD m_bUseBGColor : 1;                                               //0
	BITFIELD m_bUseBGTexture : 1;                                             //0
	FLOAT m_fHBorderHeight;                                                   //0
	FLOAT m_fVBorderWidth;                                                    //0
	FLOAT m_fHBorderPadding;                                                  //0
	FLOAT m_fVBorderPadding;                                                  //0
	class UTexture* m_HBorderTexture;                                         //0
	class UTexture* m_VBorderTexture;                                         //0
	class UTexture* m_BGTexture;                                              //0
	class UClass* m_SBClass;                                                  //0
	struct FRegion m_HBorderTextureRegion;                                    //0
	struct FRegion m_VBorderTextureRegion;                                    //0
	struct FRegion m_BGRegion;                                                //0
	class FColor m_BGColor;                                                   //0
};
struct UR6WindowBitMap_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6WindowBitMap (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowBitMap : public UUWindowBitmap
{
public:
	BITFIELD m_bUseColor : 1;                                                 //0
	BITFIELD m_bDrawBorder : 1;                                               //0
	class FColor m_TextureColor;                                              //0
};
struct UR6WindowStayDownButton_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	BITFIELD bChangeSelection : 1;                                            //0
};
struct UR6WindowStayDownButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tempSpace;                                                          //0
};

// *****************************************************************************
// UR6WindowStayDownButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowStayDownButton : public UR6WindowButton
{
public:
	BITFIELD m_bCanBeUnselected : 1;                                          //0
	BITFIELD m_bCheckSelectState : 1;                                         //0
	BITFIELD m_bUseOnlyNotifyMsg : 1;                                         //0
};
struct UR6WindowListRadioButton_execGetElement_Parms
{
	INT ButtonID;                                                             //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* CurItem;                                              //0
	BITFIELD Found : 1;                                                       //0
	INT i;                                                                    //0
};
struct UR6WindowListRadioButton_execSetDefaultButton_Parms
{
	class UUWindowList* Item;                                                 //CPF_Parm
};
struct UR6WindowListRadioButton_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
	class UUWindowListBoxItem* CurSelected;                                   //0
};
struct UR6WindowListRadioButton_execGetItemAt_Parms
{
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UUWindowListBoxItem* ReturnValue;                                   //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	class UUWindowList* CurItem;                                              //0
	INT i;                                                                    //0
	INT j;                                                                    //0
};
struct UR6WindowListRadioButton_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6WindowListButtonItem* pListButtonItem;                           //0
};
struct UR6WindowListRadioButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT MouseX;                                                             //CPF_Parm
	FLOAT MouseY;                                                             //CPF_Parm
	FLOAT X;                                                                  //0
	FLOAT Y;                                                                  //0
	class UUWindowList* CurItem;                                              //0
};
struct UR6WindowListRadioButton_execChangeItemsSize_Parms
{
	FLOAT iNewSize;                                                           //CPF_Parm
};
struct UR6WindowListRadioButton_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowListRadioButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListRadioButton : public UR6WindowTextListRadio
{
public:
	BITFIELD m_bCanBeUnselected : 1;                                          //0
	FLOAT m_fItemWidth;                                                       //0
	FLOAT m_fItemVPadding;                                                    //0
};
struct UR6WindowTeamSummary_execSetPlanningDetails_Parms
{
	class FString szWayPoint;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString szGoCode;                                                   //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowTeamSummary_execOperativeCount_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT addedOperative;                                                       //0
};
struct UR6WindowTeamSummary_execSetTeam_Parms
{
	INT _Team;                                                                //CPF_Parm
};
struct UR6WindowTeamSummary_execSetSelected_Parms
{
	BITFIELD _IsSelected : 1;                                                 //CPF_Parm
};
struct UR6WindowTeamSummary_execGetSpeciality_Parms
{
	class UR6Operative* _Operative;                                           //CPF_Parm
	struct FTexRegion ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FTexRegion Result;                                                 //0
};
struct UR6WindowTeamSummary_execGetOpHealth_Parms
{
	class UR6Operative* _Operative;                                           //CPF_Parm
	struct FTexRegion ReturnValue;                                            //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FTexRegion Result;                                                 //0
};
struct UR6WindowTeamSummary_execAddOperative_Parms
{
	class UR6Operative* _Operative;                                           //CPF_Parm
	INT addedOperative;                                                       //0
	class FString szPrimaryWeapon;                                            //CPF_NeedCtorLink
	class FString szArmor;                                                    //CPF_NeedCtorLink
	class UClass* PrimaryWeaponClass;                                         //0
	class UClass* ArmorDescriptionClass;                                      //0
	struct FRegion R;                                                         //0
};
struct UR6WindowTeamSummary_execInit_Parms
{
};
struct UR6WindowTeamSummary_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowTeamSummary (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTeamSummary : public UUWindowWindow
{
public:
	BITFIELD m_bIsSelected : 1;                                               //0
	FLOAT m_fSummaryHeight;                                                   //0
	FLOAT m_fOperativeSummaryHeight;                                          //0
	FLOAT m_fYPaddingBetweenElements;                                         //0
	class UR6Operative* m_teamOperatives[4];                                  //0
	class UR6WindowOperativePlanningSummary* m_OperativeSummary[4];           //0
	class UR6WindowTeamPlanningSummary* m_TeamPlanningSummary;                //0
};
struct UR6WindowTextIconsSubListBox_execSetTip_Parms
{
	class FString _szTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowTextIconsSubListBox_execUpdateButtons_Parms
{
	INT addButton;                                                            //CPF_Parm
	BITFIELD bDrawingAddOrRemove : 1;                                         //0
};
struct UR6WindowTextIconsSubListBox_execSetColor_Parms
{
	class FColor NewColor;                                                    //CPF_Parm
};
struct UR6WindowTextIconsSubListBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowTextIconsSubListBox_execRegister_Parms
{
	class UUWindowDialogClientWindow* W;                                      //CPF_Parm
};
struct UR6WindowTextIconsSubListBox_execResized_Parms
{
};
struct UR6WindowTextIconsSubListBox_execCreated_Parms
{
	struct FRegion normalReg;                                                 //0
	struct FRegion overReg;                                                   //0
	struct FRegion disabledReg;                                               //0
	struct FRegion downReg;                                                   //0
	FLOAT ButtonBorderWidth;                                                  //0
	FLOAT ButtonBorderHeight;                                                 //0
	FLOAT UpDownButtonWidth;                                                  //0
	FLOAT UpDownButtonHeight;                                                 //0
	FLOAT fLabelWidth;                                                        //0
	class UTexture* ButtonTexture;                                            //0
};

// *****************************************************************************
// UR6WindowTextIconsSubListBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextIconsSubListBox : public UUWindowDialogControl
{
public:
	INT m_LabelDrawStyle;                                                     //0
	INT m_IAddRemoveXPos;                                                     //0
	INT m_IAddRemoveYPos;                                                     //0
	INT m_IAddRemoveBgXPos;                                                   //0
	INT m_IAddRemoveBgYPos;                                                   //0
	INT m_IUpDownXPos;                                                        //0
	INT m_IUpDownBgXPos;                                                      //0
	INT m_IUpDownYPos;                                                        //0
	INT m_IUpDownBgYPos;                                                      //0
	INT m_IUpDownBetweenPadding;                                              //0
	INT m_maxItemsCount;                                                      //0
	class UR6WindowTextIconsListBox* m_listBox;                               //0
	class UR6WindowButton* m_RemoveButton;                                    //0
	class UR6WindowButton* m_AddButton;                                       //0
	class UR6WindowButton* m_UpButton;                                        //0
	class UR6WindowButton* m_DownButton;                                      //0
	class UR6WindowTextLabel* m_Title;                                        //0
	class UR6WindowBitMap* m_UpDownBg;                                        //0
	class UR6WindowBitMap* m_AddRemoveBg;                                     //0
	class UTexture* m_LabelTexture;                                           //0
	struct FRegion m_UpDownBgReg;                                             //0
	struct FRegion m_AddRemoveBgReg;                                          //0
	class FColor m_LabelColor;                                                //0
	struct FRegion m_LabelRegionTop;                                          //0
	struct FRegion m_LabelRegionTile;                                         //0
	struct FRegion m_LabelRegionBottom;                                       //0
	struct FRegionButton m_UpReg;                                             //0
	struct FRegionButton m_DownReg;                                           //0
};
struct UR6WindowListBoxItem_execFindItemIndex_Parms
{
	class UUWindowList* Item;                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* L;                                                    //0
	INT i;                                                                    //0
};
struct UR6WindowListBoxItem_execInsertLastAfterSeparator_Parms
{
	class UClass* C;                                                          //CPF_Parm
	INT iSeparatorID;                                                         //CPF_Parm
	class UR6WindowListBoxItem* ReturnValue;                                  //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* NewElement;                                           //0
	class UUWindowList* TempItem;                                             //0
	class UUWindowList* LastItem;                                             //0
	class UR6WindowListBoxItem* workItem;                                     //0
	class UR6WindowListBoxItem* Separator;                                    //0
	BITFIELD bSeparatorFound : 1;                                             //0
};
struct UR6WindowListBoxItem_execAppendAfterSeparator_Parms
{
	class UClass* C;                                                          //CPF_Parm
	INT iSeparatorID;                                                         //CPF_Parm
	class UR6WindowListBoxItem* ReturnValue;                                  //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* NewElement;                                           //0
	class UUWindowList* TempItem;                                             //0
	class UR6WindowListBoxItem* workItem;                                     //0
};

// *****************************************************************************
// UR6WindowListBoxItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListBoxItem : public UUWindowListBoxItem
{
public:
	INT m_iSeparatorID;                                                       //0
	BITFIELD m_IsSeparator : 1;                                               //0
	BITFIELD m_addedToSubList : 1;                                            //0
	class UTexture* m_Icon;                                                   //0
	class UR6WindowListBoxItem* m_ParentListItem;                             //0
	class UObject* m_Object;                                                  //0
	struct FRegion m_IconRegion;                                              //0
	struct FRegion m_IconSelectedRegion;                                      //0
	class FString m_szMisc;                                                   //CPF_NeedCtorLink
};
struct UR6WindowTextIconsListBox_execSetScrollable_Parms
{
	BITFIELD newScrollable : 1;                                               //CPF_Parm
};
struct UR6WindowTextIconsListBox_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
};
struct UR6WindowTextIconsListBox_execGetHealthIconRegion_Parms
{
	INT _iOperativeHealth;                                                    //CPF_Parm
	struct FRegion ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FRegion RTemp;                                                     //0
};
struct UR6WindowTextIconsListBox_execGetYIconPos_Parms
{
	FLOAT _fYItemPos;                                                         //CPF_Parm
	FLOAT _fItemHeight;                                                       //CPF_Parm
	FLOAT _fIconHeight;                                                       //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fTemp;                                                              //0
};
struct UR6WindowTextIconsListBox_execDrawHealthIcon_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fH;                                                                //CPF_Parm
	INT _iHealthStatus;                                                       //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	struct FRegion RHealthIcon;                                               //0
};
struct UR6WindowTextIconsListBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6WindowListBoxItem* pItem;                                        //0
	struct FRegion RIcon;                                                     //0
	class FString szClipText;                                                 //CPF_NeedCtorLink
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	FLOAT TextX;                                                              //0
	FLOAT TextY;                                                              //0
};
struct UR6WindowTextIconsListBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowTextIconsListBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowTextIconsListBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowTextIconsListBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextIconsListBox : public UR6WindowListBox
{
public:
	BYTE m_BGRenderStyle;                                                     //0
	BITFIELD bScrollable : 1;                                                 //0
	BITFIELD m_IgnoreAllreadySelected : 1;                                    //0
	FLOAT m_fFontSpacing;                                                     //0
	class UTexture* m_BGSelTexture;                                           //0
	class UTexture* m_HealthIconTexture;                                      //0
	class UFont* m_Font;                                                      //0
	class UFont* m_FontSeparator;                                             //0
	class FColor m_BGSelColor;                                                //0
	struct FRegion m_BGSelRegion;                                             //0
	class FColor m_SeparatorTextColor;                                        //0
	class FColor m_SelTextColor;                                              //0
	class FColor m_DisabledTextColor;                                         //0
};
struct UR6WindowSimpleCurvedFramedWindow_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT tempSpace;                                                          //0
};
struct UR6WindowSimpleCurvedFramedWindow_execSetCornerType_Parms
{
	BYTE _eCornerType;                                                        //CPF_Parm
};
struct UR6WindowSimpleCurvedFramedWindow_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowSimpleCurvedFramedWindow_execCreateClientWindow_Parms
{
	class UClass* ClientClass;                                                //CPF_Parm
};
struct UR6WindowSimpleCurvedFramedWindow_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowSimpleCurvedFramedWindow (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowSimpleCurvedFramedWindow : public UR6WindowSimpleFramedWindow
{
public:
	BYTE m_TitleAlign;                                                        //0
	FLOAT m_fFontSpacing;                                                     //0
	FLOAT m_fLMarge;                                                          //0
	class UR6WindowTextLabelCurved* m_topLabel;                               //0
	class UFont* m_Font;                                                      //0
	class FColor m_TextColor;                                                 //0
	class FString m_Title;                                                    //CPF_NeedCtorLink
};
struct UR6WindowTextLabelCurved_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowTextLabelCurved_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowTextLabelCurved (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextLabelCurved : public UR6WindowTextLabel
{
public:
	FLOAT m_RightCurveLineWidth;                                              //0
	FLOAT m_fVBorderOffset;                                                   //0
	FLOAT m_fRightCurveLineX;                                                 //0
	FLOAT m_fLeftCurveLineX;                                                  //0
	class UTexture* m_TLeftcurve;                                             //0
	class UTexture* m_TBetweenCurveBG;                                        //0
	class UTexture* m_TUnderLeftCurveBG;                                      //0
	class UTexture* m_topLeftCornerT;                                         //0
	struct FRegion m_RLeftcurve;                                              //0
	struct FRegion m_RBetweenCurveBG;                                         //0
	struct FRegion m_RUnderLeftCurveBG;                                       //0
	struct FRegion m_topLeftCornerR;                                          //0
};
struct UR6WindowPageSwitch_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6WindowPageSwitch_execPreviousPage_Parms
{
};
struct UR6WindowPageSwitch_execNextPage_Parms
{
};
struct UR6WindowPageSwitch_execUpdatePageNb_Parms
{
	class FString szText;                                                     //CPF_NeedCtorLink
};
struct UR6WindowPageSwitch_execSetCurrentPage_Parms
{
	INT iPage;                                                                //CPF_Parm
};
struct UR6WindowPageSwitch_execSetTotalPages_Parms
{
	INT iPage;                                                                //CPF_Parm
};
struct UR6WindowPageSwitch_execSetButtonToolTip_Parms
{
	class FString _szLeftToolTip;                                             //CPF_Parm|CPF_NeedCtorLink
	class FString _szRightToolTip;                                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowPageSwitch_execCreateButtons_Parms
{
};
struct UR6WindowPageSwitch_execSetLabelText_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UFont* _TextFont;                                                   //CPF_Parm
	class FColor _vTextColor;                                                 //CPF_Parm
};
struct UR6WindowPageSwitch_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowPageSwitch (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowPageSwitch : public UUWindowDialogClientWindow
{
public:
	INT m_iTotalPages;                                                        //0
	INT m_iCurrentPages;                                                      //0
	INT m_iButtonWidth;                                                       //0
	INT m_iButtonHeight;                                                      //0
	class UR6WindowButton* m_pNextButton;                                     //0
	class UR6WindowButton* m_pPreviousButton;                                 //0
	class UR6WindowTextLabel* m_pPageInfo;                                    //0
};
struct UR6WindowRightClickMenu_execCreated_Parms
{
};
struct UR6WindowRightClickMenu_execDisplayMenuHere_Parms
{
	FLOAT fXPos;                                                              //CPF_Parm
	FLOAT fYPos;                                                              //CPF_Parm
};
struct UR6WindowRightClickMenu_execCloseUp_Parms
{
};

// *****************************************************************************
// UR6WindowRightClickMenu (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowRightClickMenu : public UR6WindowComboControl
{
};
struct UR6WindowServerInfoOptionsBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT TextY;                                                              //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	class FString szText;                                                     //CPF_NeedCtorLink
	class UR6WindowListInfoOptionsItem* pListInfoOptItem;                     //0
};
struct UR6WindowServerInfoOptionsBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowServerInfoOptionsBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
};
struct UR6WindowServerInfoOptionsBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowServerInfoOptionsBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowServerInfoOptionsBox : public UR6WindowListBox
{
public:
	BITFIELD m_bDrawBorderAndBkg : 1;                                         //0
	class UFont* m_Font;                                                      //0
	class FColor m_SelTextColor;                                              //0
};
struct UR6WindowServerInfoMapBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT TextY;                                                              //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	class UR6WindowListInfoMapItem* pListInfoMapItem;                         //0
};
struct UR6WindowServerInfoMapBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowServerInfoMapBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
};
struct UR6WindowServerInfoMapBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowServerInfoMapBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowServerInfoMapBox : public UR6WindowListBox
{
public:
	BITFIELD m_bDrawBorderAndBkg : 1;                                         //0
	class UFont* m_Font;                                                      //0
	class FColor m_SelTextColor;                                              //0
};
struct UR6WindowServerInfoPlayerBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT TextY;                                                              //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	class UR6WindowListInfoPlayerItem* pListInfoPlayerItem;                   //0
};
struct UR6WindowServerInfoPlayerBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowServerInfoPlayerBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
};
struct UR6WindowServerInfoPlayerBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowServerInfoPlayerBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowServerInfoPlayerBox : public UR6WindowListBox
{
public:
	BITFIELD m_bDrawBorderAndBkg : 1;                                         //0
	class UFont* m_Font;                                                      //0
	class FColor TextColor;                                                   //0
	class FColor m_SelTextColor;                                              //0
};
struct UR6WindowServerListBox_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
};
struct UR6WindowServerListBox_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowServerListBox_execDrawIcon_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	INT _iPlayerStats;                                                        //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	struct FRegion RIconRegion;                                               //0
	struct FRegion RIconToDraw;                                               //0
};
struct UR6WindowServerListBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6WindowListServerItem* pSItem;                                    //0
	FLOAT TextY;                                                              //0
	FLOAT fYPos;                                                              //0
	FLOAT fTemp;                                                              //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	class FString szTemp;                                                     //CPF_NeedCtorLink
};
struct UR6WindowServerListBox_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowServerListBox_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
};
struct UR6WindowServerListBox_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowServerListBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowServerListBox : public UR6WindowListBox
{
public:
	BYTE m_BGRenderStyle;                                                     //0
	INT m_iPingTimeOut;                                                       //0
	BITFIELD m_bDrawBorderAndBkg : 1;                                         //0
	class UTexture* m_BGSelTexture;                                           //0
	class UFont* m_Font;                                                      //0
	class FColor m_BGSelColor;                                                //0
	struct FRegion m_BGSelRegion;                                             //0
	class FColor m_SelTextColor;                                              //0
};

enum eServerItem{
	 eSI_Favorites=0
	,eSI_Locked=1
	,eSI_Dedicated=2
	,eSI_PunkBuster=3
	,eSI_ServerName=4
	,eSI_Ping=5
	,eSI_GameType=6
	,eSI_GameMode=7
	,eSI_Map=8
	,eSI_Players=9
};
struct UR6WindowListServerItem_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowListServerItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListServerItem : public UUWindowListBoxItem
{
public:
	INT iPing;                                                                //0
	INT iMaxPlayers;                                                          //0
	INT iNumPlayers;                                                          //0
	INT iMainSvrListIdx;                                                      //0
	BITFIELD bFavorite : 1;                                                   //0
	BITFIELD bLocked : 1;                                                     //0
	BITFIELD bDedicated : 1;                                                  //0
	BITFIELD bPunkBuster : 1;                                                 //0
	BITFIELD bSameVersion : 1;                                                //0
	BITFIELD m_bNewItem : 1;                                                  //0
	struct FstCoordItem m_stServerItemPos[10];                                //0
	class FString szIPAddr;                                                   //CPF_NeedCtorLink
	class FString szName;                                                     //CPF_NeedCtorLink
	class FString szGameMode;                                                 //CPF_NeedCtorLink
	class FString szMap;                                                      //CPF_NeedCtorLink
	class FString szGameType;                                                 //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6WindowListInfoMapItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListInfoMapItem : public UUWindowListBoxItem
{
public:
	FLOAT fMapXOff;                                                           //0
	FLOAT fTypeXOff;                                                          //0
	FLOAT fMapWidth;                                                          //0
	FLOAT fTypeWidth;                                                         //0
	class FString szMap;                                                      //CPF_NeedCtorLink
	class FString szType;                                                     //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6WindowListInfoPlayerItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListInfoPlayerItem : public UUWindowListBoxItem
{
public:
	INT iSkills;                                                              //0
	INT iPing;                                                                //0
	INT iRank;                                                                //0
	FLOAT fNameXOff;                                                          //0
	FLOAT fSkillsXOff;                                                        //0
	FLOAT fTimeXOff;                                                          //0
	FLOAT fPingXOff;                                                          //0
	FLOAT fNameWidth;                                                         //0
	class FString szPlName;                                                   //CPF_NeedCtorLink
	class FString szTime;                                                     //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6WindowListInfoOptionsItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListInfoOptionsItem : public UUWindowListBoxItem
{
public:
	FLOAT fOptionsXOff;                                                       //0
	class FString szOptions;                                                  //CPF_NeedCtorLink
};
struct UR6WindowTabControl_execToolTip_Parms
{
	class FString strTip;                                                     //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowTabControl_execGetSelectedTabID_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowTabControlItem* i;                                          //0
};
struct UR6WindowTabControl_execGotoTab_Parms
{
	class UUWindowTabControlItem* NewSelected;                                //CPF_Parm
	BITFIELD bByUser : 1;                                                     //CPF_Parm
	FLOAT fGlobalX;                                                           //0
	FLOAT fGlobalY;                                                           //0
};
struct UR6WindowTabControl_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowTabControl (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTabControl : public UUWindowTabControl
{
};
struct UR6WindowListBoxCreditsItem_execInit_Parms
{
	class FString _szCreditsLine;                                             //CPF_Parm|CPF_NeedCtorLink
	class FString szTemp;                                                     //CPF_NeedCtorLink
	INT iMarkerPos1;                                                          //0
	INT iMarkerPos2;                                                          //0
};

// *****************************************************************************
// UR6WindowListBoxCreditsItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListBoxCreditsItem : public UUWindowList
{
public:
	INT m_iFont;                                                              //0
	INT m_iColor;                                                             //0
	INT m_iXPosOffset;                                                        //0
	INT m_iYPosOffset;                                                        //0
	BITFIELD m_bDrawALineUnderText : 1;                                       //0
	BITFIELD m_bConvertItemValue : 1;                                         //0
	FLOAT m_fHeight;                                                          //0
	class UFont* m_Font;                                                      //0
	class FColor m_TextColor;                                                 //0
	class FString m_szName;                                                   //CPF_NeedCtorLink
};
struct UR6WindowRadioButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6WindowRadioButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowRadioButton : public UR6WindowButton
{
public:
	BITFIELD bCenter : 1;                                                     //0
};
struct UR6WindowHScrollbar_execMouseLeave_Parms
{
};
struct UR6WindowHScrollbar_execMouseEnter_Parms
{
};
struct UR6WindowHScrollbar_execCreateSBTextLabel_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowHScrollbar_execGetScrollBarValue_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fRealValue;                                                         //0
};
struct UR6WindowHScrollbar_execSetScrollBarRange_Parms
{
	FLOAT _fMin;                                                              //CPF_Parm
	FLOAT _fMax;                                                              //CPF_Parm
	FLOAT _fStep;                                                             //CPF_Parm
};
struct UR6WindowHScrollbar_execSetScrollBarValue_Parms
{
	FLOAT _fNewValue;                                                         //CPF_Parm
	FLOAT fScrollValue;                                                       //0
};
struct UR6WindowHScrollbar_execCreateSB_Parms
{
	INT _iScrollBarID;                                                        //CPF_Parm
	FLOAT _fX;                                                                //CPF_Parm
	FLOAT _fY;                                                                //CPF_Parm
	FLOAT _fWidth;                                                            //CPF_Parm
	FLOAT _fHeight;                                                           //CPF_Parm
	class UUWindowDialogClientWindow* _DialogClientW;                         //CPF_Parm
};

// *****************************************************************************
// UR6WindowHScrollbar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowHScrollbar : public UUWindowDialogControl
{
public:
	class UR6WindowTextLabelExt* m_pSBText;                                   //0
	class UUWindowHScrollbar* m_pScrollBar;                                   //0
};
struct UR6WindowTextureBrowser_execClear_Parms
{
};
struct UR6WindowTextureBrowser_execGetCurrentSelectedTexture_Parms
{
};
struct UR6WindowTextureBrowser_execGetTextureAtIndex_Parms
{
	INT _index;                                                               //CPF_Parm
	class UTexture* ReturnValue;                                              //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowTextureBrowser_execSetCurrentTextureFromIndex_Parms
{
	INT _index;                                                               //CPF_Parm
};
struct UR6WindowTextureBrowser_execGetCurrentTextureIndex_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowTextureBrowser_execGetTextureIndex_Parms
{
	class UTexture* _Texture;                                                 //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowTextureBrowser_execRemoveTextureFromIndex_Parms
{
	INT _index;                                                               //CPF_Parm
};
struct UR6WindowTextureBrowser_execRemoveTexture_Parms
{
	class UTexture* _Texture;                                                 //CPF_Parm
};
struct UR6WindowTextureBrowser_execAddTexture_Parms
{
	class UTexture* _Texture;                                                 //CPF_Parm
	struct FRegion _Region;                                                   //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowTextureBrowser_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
};
struct UR6WindowTextureBrowser_execCreateTextLabel_Parms
{
	INT X;                                                                    //CPF_Parm
	INT Y;                                                                    //CPF_Parm
	INT W;                                                                    //CPF_Parm
	INT H;                                                                    //CPF_Parm
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowTextureBrowser_execCreateSB_Parms
{
	INT X;                                                                    //CPF_Parm
	INT Y;                                                                    //CPF_Parm
	INT W;                                                                    //CPF_Parm
	INT H;                                                                    //CPF_Parm
};
struct UR6WindowTextureBrowser_execSetBitmapBorder_Parms
{
	BITFIELD _bDrawBorder : 1;                                                //CPF_Parm
	class FColor _borderColor;                                                //CPF_Parm
};
struct UR6WindowTextureBrowser_execSetBitmapProperties_Parms
{
	BITFIELD _bStretch : 1;                                                   //CPF_Parm
	BITFIELD _bCenter : 1;                                                    //CPF_Parm
	INT _iDrawStyle;                                                          //CPF_Parm
	BITFIELD _bUseColor : 1;                                                  //CPF_Parm
	class FColor _TextureColor;                                               //CPF_Parm
};
struct UR6WindowTextureBrowser_execCreateBitmap_Parms
{
	INT X;                                                                    //CPF_Parm
	INT Y;                                                                    //CPF_Parm
	INT W;                                                                    //CPF_Parm
	INT H;                                                                    //CPF_Parm
};

// *****************************************************************************
// UR6WindowTextureBrowser (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextureBrowser : public UUWindowDialogClientWindow
{
public:
	INT m_iNbDisplayedElement;                                                //0
	BITFIELD m_bSBInitialized : 1;                                            //0
	BITFIELD m_bBitMapInitialized : 1;                                        //0
	BITFIELD bShowLog : 1;                                                    //0
	class UR6WindowBitMap* m_CurrentSelection;                                //0
	class UUWindowHScrollbar* m_HSB;                                          //0
	class UR6WindowTextLabelExt* m_pTextLabel;                                //0
	TArray<class UTexture*> m_TextureCollection;                              //CPF_NeedCtorLink
	TArray<struct FRegion> m_TextureRegionCollection;                         //CPF_NeedCtorLink
};

// -----------------------------------------------------------------------------
// FCheckBox ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FCheckBox
{
public:
	class FString szText;                                                 //CPF_NeedCtorLink
	FLOAT fXBoxPos;                                                       //0
	BITFIELD bSelected : 1;                                               //0
	INT iIndex;                                                           //0
};
struct UR6WindowButtonExt_execGetCheckBoxStatus_Parms
{
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowButtonExt_execSetCheckBoxStatus_Parms
{
	INT _iSelected;                                                           //CPF_Parm
};
struct UR6WindowButtonExt_execChangeCheckBoxStatus_Parms
{
};
struct UR6WindowButtonExt_execGetSelectStatus_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowButtonExt_execSetCheckBox_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fXBoxPos;                                                          //CPF_Parm
	BITFIELD _bSelected : 1;                                                  //CPF_Parm
	INT _iIndex;                                                              //CPF_Parm
};
struct UR6WindowButtonExt_execCreateTextAndBox_Parms
{
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString _szToolTip;                                                 //CPF_Parm|CPF_NeedCtorLink
	FLOAT _fXText;                                                            //CPF_Parm
	INT _iButtonID;                                                           //CPF_Parm
	INT _iNumberOfCheckBox;                                                   //CPF_Parm
};
struct UR6WindowButtonExt_execInRange_Parms
{
	FLOAT _fTestValue;                                                        //CPF_Parm
	FLOAT _fMin;                                                              //CPF_Parm
	FLOAT _fMax;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowButtonExt_execCheckText_Box_Region_Parms
{
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	FLOAT fX;                                                                 //0
	FLOAT fY;                                                                 //0
};
struct UR6WindowButtonExt_execMouseLeave_Parms
{
};
struct UR6WindowButtonExt_execMouseEnter_Parms
{
};
struct UR6WindowButtonExt_execDrawCheckBox_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	BITFIELD _bMouseOverButton : 1;                                           //CPF_Parm
	INT i;                                                                    //0
};
struct UR6WindowButtonExt_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class FColor vTempColor;                                                  //0
	INT i;                                                                    //0
};
struct UR6WindowButtonExt_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT fWinWidth;                                                          //0
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6WindowButtonExt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonExt : public UUWindowButton
{
public:
	INT m_iNumberOfCheckBox;                                                  //0
	INT m_iCurSelectedBox;                                                    //0
	INT m_iCheckBoxOver;                                                      //0
	BITFIELD m_bOneTime : 1;                                                  //0
	BITFIELD m_bMouseIsOver : 1;                                              //0
	BITFIELD m_bMouseOnButton : 1;                                            //0
	BITFIELD m_bSelected : 1;                                                 //0
	FLOAT m_fTextWidth;                                                       //0
	FLOAT m_fYTextPos;                                                        //0
	FLOAT m_fXText;                                                           //0
	FLOAT m_fYBox;                                                            //0
	class UTexture* m_TButtonBG;                                              //0
	class UTexture* m_TDownTexture;                                           //0
	class UFont* m_TextFont;                                                  //0
	struct FRegion m_RButtonBG;                                               //0
	class FColor m_vBorder;                                                   //0
	class FColor m_vTextColor;                                                //0
	struct FCheckBox m_stCheckBox[3];                                         //CPF_NeedCtorLink
};
struct UR6WindowListControls_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
};
struct UR6WindowListControls_execManageOverEffect_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UUWindowListBoxItem* OverItem;                                      //0
};
struct UR6WindowListControls_execMouseLeave_Parms
{
};
struct UR6WindowListControls_execMouseMove_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListControls_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT fXPos;                                                              //0
	FLOAT fW;                                                                 //0
	FLOAT fH;                                                                 //0
	FLOAT fTextY;                                                             //0
	INT temp;                                                                 //0
	class UTexture* t;                                                        //0
	class UUWindowListBoxItem* pListBoxItem;                                  //0
};
struct UR6WindowListControls_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UR6WindowLookAndFeel* LAF;                                          //0
	class UUWindowList* CurItem;                                              //0
	FLOAT Y;                                                                  //0
	FLOAT fdrawWidth;                                                         //0
	FLOAT fListHeight;                                                        //0
	FLOAT fItemHeight;                                                        //0
	INT i;                                                                    //0
};

// *****************************************************************************
// UR6WindowListControls (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListControls : public UR6WindowTextListBox
{
public:
	FLOAT m_fXOffSet;                                                         //0
	class UUWindowListBoxItem* m_pPreviousItem;                               //0
	class UTexture* m_BorderTexture;                                          //0
	struct FRegion m_BorderTextureRegion;                                     //0
};

enum eItemState{
	 eIS_Normal=0
	,eIS_Disable=1
	,eIS_Selected=2
	,eIS_CurrentChoice=3
};
struct UR6WindowListMODS_execFindCurrentMOD_Parms
{
	class UUWindowList* ReturnValue;                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class UUWindowList* CurItem;                                              //0
};
struct UR6WindowListMODS_execActivateMOD_Parms
{
	TArray<BYTE> AWIDList;                                                    //CPF_NeedCtorLink
	class UUWindowListBoxItem* pListBoxItem;                                  //0
};
struct UR6WindowListMODS_execSetItemState_Parms
{
	class UUWindowListBoxItem* _NewItem;                                      //CPF_Parm
	BYTE _eISState;                                                           //CPF_Parm
	BITFIELD _bForceSelection : 1;                                            //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowListMODS_execSetSelectedItem_Parms
{
	class UUWindowListBoxItem* NewSelected;                                   //CPF_Parm
	BITFIELD bNotify : 1;                                                     //0
};
struct UR6WindowListMODS_execGetSizeOfAnItem_Parms
{
	class UUWindowList* _pItem;                                               //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fTotalHeight;                                                       //0
	INT i;                                                                    //0
	INT iLineNumber;                                                          //0
};
struct UR6WindowListMODS_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UUWindowListBoxItem* pIt;                                           //0
	class FString szToDisplay;                                                //CPF_NeedCtorLink
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	FLOAT fYPos;                                                              //0
	INT i;                                                                    //0
	INT j;                                                                    //0
	struct FstItemProperties pCurrentItem;                                    //CPF_NeedCtorLink
};
struct UR6WindowListMODS_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UR6WindowLookAndFeel* LAF;                                          //0
	class UUWindowList* CurItem;                                              //0
	FLOAT Y;                                                                  //0
	FLOAT fdrawWidth;                                                         //0
	FLOAT fListHeight;                                                        //0
	FLOAT fItemHeight;                                                        //0
	INT i;                                                                    //0
};
struct UR6WindowListMODS_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowListMODS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListMODS : public UR6WindowTextListBox
{
public:
	class FColor m_CurrentChoiceColor;                                        //0
};
struct UR6WindowComboList_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UUWindowComboListItem* pComboListItem;                              //0
};
struct UR6WindowComboList_execDrawMenuBackground_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
};
struct UR6WindowComboList_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	INT Count;                                                                //0
	class UUWindowComboListItem* i;                                           //0
};
struct UR6WindowComboList_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	INT Count;                                                                //0
	class UUWindowComboListItem* i;                                           //0
	FLOAT ListX;                                                              //0
	FLOAT ListY;                                                              //0
};
struct UR6WindowComboList_execSetup_Parms
{
};
struct UR6WindowComboList_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowComboList (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowComboList : public UUWindowComboList
{
public:
	BYTE m_BGRenderStyle;                                                     //0
	BYTE m_BGSelRenderStyle;                                                  //0
	class UTexture* m_BGSelTexture;                                           //0
	class UClass* m_SBClass;                                                  //0
	class FColor m_BGColor;                                                   //0
	class FColor m_BGSelColor;                                                //0
	struct FRegion m_BGSelRegion;                                             //0
	class FColor m_SelTextColor;                                              //0
	class FColor m_DisableTextColor;                                          //0
};

// *****************************************************************************
// UR6WindowTextListBoxTest (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTextListBoxTest : public UR6WindowTextListBoxExt
{
};
struct UR6WindowPopUpBoxCW_execNotify_Parms
{
	class UUWindowDialogControl* C;                                           //CPF_Parm
	BYTE E;                                                                   //CPF_Parm
	class UR6WindowPopUpBox* P;                                               //0
};
struct UR6WindowPopUpBoxCW_execRemoveDisablePopUpButton_Parms
{
};
struct UR6WindowPopUpBoxCW_execAddDisablePopUpButton_Parms
{
	FLOAT fXBut;                                                              //0
	FLOAT fYBut;                                                              //0
};
struct UR6WindowPopUpBoxCW_execSetupPopUpBoxClient_Parms
{
	BYTE InButtons;                                                           //CPF_Parm
	BYTE InESCResult;                                                         //CPF_Parm
	BYTE InEnterResult;                                                       //CPF_Parm
	FLOAT fXBut;                                                              //0
	FLOAT fYBut;                                                              //0
	FLOAT fWidthBut;                                                          //0
	FLOAT fHeightBut;                                                         //0
	BITFIELD bButtonsValid : 1;                                               //0
};
struct UR6WindowPopUpBoxCW_execResized_Parms
{
};
struct UR6WindowPopUpBoxCW_execKeyDown_Parms
{
	INT Key;                                                                  //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	class UR6WindowPopUpBox* P;                                               //0
};

// *****************************************************************************
// UR6WindowPopUpBoxCW (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowPopUpBoxCW : public UUWindowDialogClientWindow
{
public:
	BYTE Buttons;                                                             //0
	BYTE EnterResult;                                                         //0
	BYTE ESCResult;                                                           //0
	class UR6WindowPopUpButton* m_pOKButton;                                  //0
	class UR6WindowPopUpButton* m_pCancelButton;                              //0
	class UR6WindowButtonBox* m_pDisablePopUpButton;                          //0
};
struct UR6WindowListBoxItemExt_execCompare_Parms
{
	class UUWindowList* t;                                                    //CPF_Parm
	class UUWindowList* B;                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FString TS;                                                         //CPF_NeedCtorLink
	class FString BS;                                                         //CPF_NeedCtorLink
};
struct UR6WindowListBoxItemExt_execHideLine_Parms
{
	INT _iLineNb;                                                             //CPF_Parm
};
struct UR6WindowListBoxItemExt_execSetItemText_Parms
{
	INT _index;                                                               //CPF_Parm
	class FString _szText;                                                    //CPF_Parm|CPF_NeedCtorLink
	struct FstItemDesc ItemDesc;                                              //CPF_NeedCtorLink
};
struct UR6WindowListBoxItemExt_execSetItemMisc_Parms
{
	INT _index;                                                               //CPF_Parm
	class FString _szMisc;                                                    //CPF_Parm|CPF_NeedCtorLink
	struct FstItemDesc ItemDesc;                                              //CPF_NeedCtorLink
};
struct UR6WindowListBoxItemExt_execGetItemMisc_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6WindowListBoxItemExt_execGetItemText_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UR6WindowListBoxItemExt_execSetItemDescriptionIndex_Parms
{
	INT _iIndex;                                                              //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UR6WindowListBoxItemExt_execSetItemParam_Parms
{
	INT _index;                                                               //CPF_Parm
	struct FstItemDesc _ItemParam;                                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowListBoxItemExt_execSetItemParameters_Parms
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
	struct FstItemDesc ItemDesc;                                              //CPF_NeedCtorLink
};
struct UR6WindowListBoxItemExt_execClearItem_Parms
{
};

// *****************************************************************************
// UR6WindowListBoxItemExt (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListBoxItemExt : public UUWindowListBoxItem
{
public:
	TArray<struct FstItemDesc> m_AItemDesc;                                   //CPF_NeedCtorLink
	struct FstItemDesc m_DescTemp;                                            //CPF_NeedCtorLink
};
struct UR6WindowVScrollbar_execCheckRange_Parms
{
};
struct UR6WindowVScrollbar_execSetRange_Parms
{
	FLOAT NewMinPos;                                                          //CPF_Parm
	FLOAT NewMaxPos;                                                          //CPF_Parm
	FLOAT NewMaxVisible;                                                      //CPF_Parm
	FLOAT NewScrollAmount;                                                    //CPF_Parm
};

// *****************************************************************************
// UR6WindowVScrollbar (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowVScrollbar : public UUWindowVScrollbar
{
public:
	class UClass* m_UpButtonClass;                                            //0
	class UClass* m_DownButtonClass;                                          //0
};

enum ESplitterType{
	 ST_TopWin=0
	,ST_SplitterTop=1
	,ST_SplitterBottom=2
};
struct UR6WindowHSplitter_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowHSplitter_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
};

// *****************************************************************************
// UR6WindowHSplitter (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowHSplitter : public UUWindowLabelControl
{
public:
	BYTE m_eSplitterType;                                                     //0
};
struct UR6WindowListButtonItem_execSetBack_Parms
{
};
struct UR6WindowListButtonItem_execSetFront_Parms
{
};

// *****************************************************************************
// UR6WindowListButtonItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListButtonItem : public UUWindowListBoxItem
{
public:
	class UR6WindowButton* m_Button;                                          //0
};
struct UR6WindowTeamPlanningSummary_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowTeamPlanningSummary_execSetTeamName_Parms
{
	class FString szTeamName;                                                 //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowTeamPlanningSummary_execSetPlanningValues_Parms
{
	class FString szWayPoint;                                                 //CPF_Parm|CPF_NeedCtorLink
	class FString szGoCode;                                                   //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowTeamPlanningSummary_execSetTeamColor_Parms
{
	class FColor _c;                                                          //CPF_Parm
	class FColor _DarkColor;                                                  //CPF_Parm
};
struct UR6WindowTeamPlanningSummary_execCreated_Parms
{
	FLOAT labelWidth;                                                         //0
	FLOAT RightLabelXPos;                                                     //0
	FLOAT fLabelHeight;                                                       //0
};

// *****************************************************************************
// UR6WindowTeamPlanningSummary (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowTeamPlanningSummary : public UUWindowWindow
{
public:
	BYTE m_BTopAlpha;                                                         //0
	BYTE m_BBottomAlpha;                                                      //0
	FLOAT m_fTopBGHeight;                                                     //0
	FLOAT m_fLabelXOffset;                                                    //0
	FLOAT m_fVlabelWidth;                                                     //0
	class UR6WindowTextLabel* m_Team;                                         //0
	class UR6WindowTextLabel* m_GoCode;                                       //0
	class UR6WindowTextLabel* m_Waypoint;                                     //0
	class UR6WindowTextLabel* m_GoCodeVal;                                    //0
	class UR6WindowTextLabel* m_WayPointVal;                                  //0
	class UTexture* m_TTopBG;                                                 //0
	struct FRegion m_RTopBG;                                                  //0
	class FColor m_CDarkTeamColor;                                            //0
};
struct UR6WindowOperativePlanningSummary_execAfterPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowOperativePlanningSummary_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowOperativePlanningSummary_execSetSelected_Parms
{
	BITFIELD _IsSelected : 1;                                                 //CPF_Parm
};
struct UR6WindowOperativePlanningSummary_execSetColor_Parms
{
	class FColor _LabelColor;                                                 //CPF_Parm
	class FColor _DarkColor;                                                  //CPF_Parm
};
struct UR6WindowOperativePlanningSummary_execsetLabels_Parms
{
	class FString szPrimaryWeapon;                                            //CPF_Parm|CPF_NeedCtorLink
	class FString szArmor;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString szOperativeName;                                            //CPF_Parm|CPF_NeedCtorLink
};
struct UR6WindowOperativePlanningSummary_execsetFace_Parms
{
	class UTexture* _T;                                                       //CPF_Parm
	struct FRegion _R;                                                        //CPF_Parm
};
struct UR6WindowOperativePlanningSummary_execsetSpeciality_Parms
{
	struct FTexRegion _T;                                                     //CPF_Parm
};
struct UR6WindowOperativePlanningSummary_execsetHealth_Parms
{
	struct FTexRegion _T;                                                     //CPF_Parm
};
struct UR6WindowOperativePlanningSummary_execCreated_Parms
{
	FLOAT fLabelHeight;                                                       //0
};

// *****************************************************************************
// UR6WindowOperativePlanningSummary (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowOperativePlanningSummary : public UUWindowWindow
{
public:
	BYTE m_BAlphaOpNameBg;                                                    //0
	BYTE m_BSelectedAlphaOpNameBg;                                            //0
	BYTE m_BCurrentAlpha;                                                     //0
	BYTE m_BAlphaBg;                                                          //0
	INT m_IXSpecialityOffset;                                                 //0
	INT m_IXHealthOffset;                                                     //0
	INT m_IYIconPos;                                                          //0
	INT m_IHealthWidth;                                                       //0
	INT m_IHealthHeight;                                                      //0
	INT m_ISpecialityWidth;                                                   //0
	INT m_ISpecialityHeight;                                                  //0
	BITFIELD m_bIsSelected : 1;                                               //0
	FLOAT m_fFaceWidth;                                                       //0
	FLOAT m_FaceHeight;                                                       //0
	FLOAT m_fNameLabelHeight;                                                 //0
	class UR6WindowBitMap* m_OperativeFace;                                   //0
	class UR6WindowBitMap* m_BMPSpeciality;                                   //0
	class UR6WindowBitMap* m_BMPHealth;                                       //0
	class UR6WindowTextLabel* m_PrimaryWeapon;                                //0
	class UR6WindowTextLabel* m_Armor;                                        //0
	class UR6WindowTextLabel* m_OperativeName;                                //0
	class UTexture* m_TBottomLabelBG;                                         //0
	struct FRegion m_RBottomLabelBG;                                          //0
	class FColor m_LabelColor;                                                //0
	class FColor m_CDarkColor;                                                //0
};

// *****************************************************************************
// UR6WindowListBoxAnchorButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListBoxAnchorButton : public UR6WindowButton
{
public:
	class UR6WindowListBoxItem* AnchoredElement;                              //0
};
struct UR6WindowButtonSort_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonSort_execBeforePaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //0
	FLOAT H;                                                                  //0
	FLOAT fWidth;                                                             //0
};

// *****************************************************************************
// UR6WindowButtonSort (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonSort : public UUWindowButton
{
public:
	BITFIELD m_bDrawSimpleBorder : 1;                                         //0
	BITFIELD m_bSetParam : 1;                                                 //0
	BITFIELD m_bAscending : 1;                                                //0
	BITFIELD m_bDrawSortIcon : 1;                                             //0
	BITFIELD m_bAbleToDrawSortIcon : 1;                                       //0
	FLOAT m_fLMarge;                                                          //0
	FLOAT m_fXSortIconPos;                                                    //0
	FLOAT m_fYSortIconPos;                                                    //0
	class UTexture* m_TSortIcon;                                              //0
	class UFont* m_buttonFont;                                                //0
	struct FRegion m_RSortIcon;                                               //0
};
struct UR6WindowButtonGear_execForceMouseOver_Parms
{
	BITFIELD _bForceMouseOver : 1;                                            //CPF_Parm
};
struct UR6WindowButtonGear_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonGear_execLMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonGear_execMMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowButtonGear_execRMouseDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6WindowButtonGear (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowButtonGear : public UR6WindowButton
{
public:
	BITFIELD m_HighLight : 1;                                                 //0
	BITFIELD m_bForceMouseOver : 1;                                           //0
	FLOAT m_fAlpha;                                                           //0
	class UTexture* m_HighLightTexture;                                       //0
};
struct UR6WindowListRestKit_execMouseWheelUp_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListRestKit_execMouseWheelDown_Parms
{
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};
struct UR6WindowListRestKit_execGetSizeOfAnItem_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	FLOAT fTotalItemHeigth;                                                   //0
};
struct UR6WindowListRestKit_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	class UR6WindowListGeneralItem* pListGenItem;                             //0
};
struct UR6WindowListRestKit_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT fMouseX;                                                            //CPF_Parm
	FLOAT fMouseY;                                                            //CPF_Parm
	class UUWindowList* CurItem;                                              //0
	class UR6WindowLookAndFeel* LAF;                                          //0
	FLOAT fItemHeight;                                                        //0
	FLOAT fListHeight;                                                        //0
	FLOAT fdrawWidth;                                                         //0
	FLOAT Y;                                                                  //0
	INT i;                                                                    //0
};
struct UR6WindowListRestKit_execCreated_Parms
{
};

// *****************************************************************************
// UR6WindowListRestKit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListRestKit : public UUWindowListControl
{
public:
	FLOAT m_fItemHeight;                                                      //0
	FLOAT m_fSpaceBetItem;                                                    //0
	FLOAT m_fXItemOffset;                                                     //0
	FLOAT m_fYOffSet;                                                         //0
	class UR6WindowVScrollbar* m_VertSB;                                      //0
	class UClass* m_SBClass;                                                  //0
};

enum ePlStatus{
	 ePlayerStatus_Alive=0
	,ePlayerStatus_Wounded=1
	,ePlayerStatus_Incapacitated=2
	,ePlayerStatus_Dead=3
	,ePlayerStatus_Spectator=4
	,ePlayerStatus_TooLate=5
};
enum ePLInfo{
	 ePL_Ready=0
	,ePL_HealthStatus=1
	,ePL_Name=2
	,ePL_RoundsWon=3
	,ePL_Kill=4
	,ePL_DeadCounter=5
	,ePL_Efficiency=6
	,ePL_RoundFired=7
	,ePL_RoundHit=8
	,ePL_KillerName=9
	,ePL_PingTime=10
};

// -----------------------------------------------------------------------------
// FstSettings ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FstSettings
{
public:
	FLOAT fXPos;                                                          //0
	FLOAT fWidth;                                                         //0
	BITFIELD bDisplay : 1;                                                //0
};
struct UR6WindowListIGPlayerInfoItem_execGetHealth_Parms
{
	BYTE _ePLStatus;                                                          //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UR6WindowListIGPlayerInfoItem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowListIGPlayerInfoItem : public UUWindowListBoxItem
{
public:
	BYTE eStatus;                                                             //0
	INT iKills;                                                               //0
	INT iMyDeadCounter;                                                       //0
	INT iEfficiency;                                                          //0
	INT iRoundsFired;                                                         //0
	INT iRoundsHit;                                                           //0
	INT iPingTime;                                                            //0
	INT m_iRainbowTeam;                                                       //0
	INT m_iOperativeID;                                                       //0
	BITFIELD bOwnPlayer : 1;                                                  //0
	BITFIELD bReady : 1;                                                      //0
	struct FstSettings stTagCoord[11];                                        //0
	class FString szPlName;                                                   //CPF_NeedCtorLink
	class FString szKillBy;                                                   //CPF_NeedCtorLink
	class FString szRoundsWon;                                                //CPF_NeedCtorLink
};
struct UR6WindowPopUpButton_execPaint_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
};

// *****************************************************************************
// UR6WindowPopUpButton (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowPopUpButton : public UUWindowButton
{
public:
	BITFIELD m_bDrawRedBG : 1;                                                //0
	BITFIELD m_bDrawGreenBG : 1;                                              //0
	class UTexture* m_TButBorderTex;                                          //0
	struct FRegion m_RButBorder;                                              //0
};
struct UR6WindowSimpleIGPlayerListBox_execDrawItem_Parms
{
	class UCanvas* C;                                                         //CPF_Parm
	class UUWindowList* Item;                                                 //CPF_Parm
	FLOAT X;                                                                  //CPF_Parm
	FLOAT Y;                                                                  //CPF_Parm
	FLOAT W;                                                                  //CPF_Parm
	FLOAT H;                                                                  //CPF_Parm
	FLOAT TextY;                                                              //0
	FLOAT tW;                                                                 //0
	FLOAT tH;                                                                 //0
	FLOAT fTemp;                                                              //0
	FLOAT fYPos;                                                              //0
	class FColor co;                                                          //0
	class UR6WindowListIGPlayerInfoItem* pListIGPlayerInfoItem;               //0
	class UR6WindowLookAndFeel* pLookAndFeel;                                 //0
};

// *****************************************************************************
// UR6WindowSimpleIGPlayerListBox (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WindowSimpleIGPlayerListBox : public UR6WindowIGPlayerInfoListBox
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
