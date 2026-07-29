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
** Unreal native C++ headers for the R6WeaponGadgets package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6WEAPONGADGETS_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif
struct AR6BipodGadget_execToggle3rdBipod_Parms
{
	BITFIELD bBipodOpen : 1;                                                  //CPF_Parm
};
struct AR6BipodGadget_execUpdateAttachment_Parms
{
	class AR6EngineWeapon* weapOwner;                                         //CPF_Parm
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};

// *****************************************************************************
// AR6BipodGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BipodGadget : public AR6AbstractGadget
{
public:
	class UStaticMesh* CloseSM;                                               //CPF_Edit
	class UStaticMesh* OpenSM;                                                //CPF_Edit
};
struct AR6SilencerGadget_eventDestroyed_Parms
{
};
struct AR6SilencerGadget_execGetGadgetMuzzleOffset_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6SilencerGadget_execUpdateAttachment_Parms
{
	class AR6EngineWeapon* weapOwner;                                         //CPF_Parm
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6SilencerGadget_execAttachFPGadget_Parms
{
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6SilencerGadget_execDestroyFPGadget_Parms
{
	class AActor* aFPGadget;                                                  //0
};

// *****************************************************************************
// AR6SilencerGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SilencerGadget : public AR6AbstractGadget
{
public:
	class AActor* m_FPSilencerModel;                                          //0
	class UClass* m_pFPSilencerClass;                                         //0
};

// *****************************************************************************
// AR6WeaponGadgetMesh (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6WeaponGadgetMesh : public AActor
{
};
struct AR6MuzzleGadget_eventDestroyed_Parms
{
};
struct AR6MuzzleGadget_execUpdateAttachment_Parms
{
	class AR6EngineWeapon* weapOwner;                                         //CPF_Parm
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6MuzzleGadget_execAttachFPGadget_Parms
{
};
struct AR6MuzzleGadget_execDestroyFPGadget_Parms
{
	class AActor* temp;                                                       //0
};

// *****************************************************************************
// AR6MuzzleGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MuzzleGadget : public AR6AbstractGadget
{
public:
	class AActor* m_FPMuzzelModel;                                            //CPF_Net
	class UClass* m_pFPMuzzleClass;                                           //CPF_Edit
};

// *****************************************************************************
// AR63rdMuzzleMachineGuns (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdMuzzleMachineGuns : public AR6MuzzleGadget
{
};

// *****************************************************************************
// AR63rdLMGBipod (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdLMGBipod : public AR6BipodGadget
{
};

// *****************************************************************************
// AR61stSilencerPistol (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stSilencerPistol : public AR6WeaponGadgetMesh
{
};

// *****************************************************************************
// AR63rdSilencerPistol (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdSilencerPistol : public AR6SilencerGadget
{
};
struct AR6MagazineGadget_execUpdateAttachment_Parms
{
	class AR6EngineWeapon* weapOwner;                                         //CPF_Parm
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};

// *****************************************************************************
// AR6MagazineGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MagazineGadget : public AR6AbstractGadget
{
};

// *****************************************************************************
// AR61stMiniScope (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stMiniScope : public AR6WeaponGadgetMesh
{
};
struct AR6MiniScopeGadget_eventDestroyed_Parms
{
};
struct AR6MiniScopeGadget_execInitGadget_Parms
{
	class AR6EngineWeapon* OwnerWeapon;                                       //CPF_Parm
	class APawn* OwnerCharacter;                                              //CPF_Parm
};
struct AR6MiniScopeGadget_execActivateGadget_Parms
{
	BITFIELD bActivate : 1;                                                   //CPF_Parm
	BITFIELD bControllerInBehindView : 1;                                     //CPF_Parm
};
struct AR6MiniScopeGadget_execUpdateAttachment_Parms
{
	class AR6EngineWeapon* weapOwner;                                         //CPF_Parm
	class FVector vTagLocation;                                               //0
	class FRotator rTagRotator;                                               //0
};
struct AR6MiniScopeGadget_execAttachFPGadget_Parms
{
};
struct AR6MiniScopeGadget_execDestroyFPGadget_Parms
{
	class AActor* temp;                                                       //0
};

// *****************************************************************************
// AR6MiniScopeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MiniScopeGadget : public AR6AbstractGadget
{
public:
	class AActor* m_FPMiniScopeModel;                                         //0
	class UTexture* m_ScopeTexure;                                            //0
	class UTexture* m_ScopeAdd;                                               //0
	class UClass* m_pFPMiniScopeClass;                                        //CPF_Edit
};

// *****************************************************************************
// AR63rdMuzzleAK47 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdMuzzleAK47 : public AR6MuzzleGadget
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
