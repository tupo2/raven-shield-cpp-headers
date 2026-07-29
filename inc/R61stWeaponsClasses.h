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
** Unreal native C++ headers for the R61stWeapons package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R61STWEAPONS_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

// -----------------------------------------------------------------------------
// HandsDown ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT HandsDown
{
};

// -----------------------------------------------------------------------------
// FiringWeapon ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FiringWeapon
{
};

// -----------------------------------------------------------------------------
// Waiting ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT Waiting
{
};
struct AR6AbstractFirstPersonHands_execSetAssociatedWeapon_Parms
{
	class AR6AbstractFirstPersonWeapon* AWeapon;                              //CPF_Parm
};
struct AR6AbstractFirstPersonHands_execStopWalkingAnimation_Parms
{
};
struct AR6AbstractFirstPersonHands_execPlayWalkingAnimation_Parms
{
};
struct AR6AbstractFirstPersonHands_execResetNeutralAnim_Parms
{
};
struct AR6AbstractFirstPersonHands_execPostBeginPlay_Parms
{
};
struct AR6AbstractFirstPersonHands_execSetAssociatedGadget_Parms
{
	class AR6AbstractGadget* AGadget;                                         //CPF_Parm
};

// *****************************************************************************
// AR6AbstractFirstPersonHands (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6AbstractFirstPersonHands : public AR6AbstractFirstPersonWeapon
{
public:
	BITFIELD m_bPlayWaitAnim : 1;                                             //0
	BITFIELD m_bCanQuitOnAnimEnd : 1;                                         //0
	BITFIELD m_bCannotPlayEmpty : 1;                                          //0
	BITFIELD m_bInBurst : 1;                                                  //0
	BITFIELD m_bBipodDeployed : 1;                                            //0
	BITFIELD bShowLog : 1;                                                    //0
	BITFIELD bPlayerWalking : 1;                                              //0
	FLOAT m_fAnimAcceleration;                                                //0
	class AR6AbstractFirstPersonWeapon* AssociatedWeapon;                     //0
	class AR6AbstractGadget* AssociatedGadget;                                //0
	FName m_HandFire;                                                         //CPF_Edit
	FName m_HandFireLast;                                                     //CPF_Edit
	FName m_HandBipodFire;                                                    //CPF_Edit
	FName m_HandReloadEmpty;                                                  //CPF_Edit
	FName m_HandBipodReloadEmpty;                                             //CPF_Edit
	FName m_WaitAnim1;                                                        //CPF_Edit
	FName m_WaitAnim2;                                                        //CPF_Edit
	FName m_WalkAnim;                                                         //CPF_Edit
};
struct AR61stLMGWeapon_execPlayFireAnim_Parms
{
};
struct AR61stLMGWeapon_execPlayFireLastAnim_Parms
{
};
struct AR61stLMGWeapon_execLoopWeaponBurst_Parms
{
};
struct AR61stLMGWeapon_execStartWeaponBurst_Parms
{
};
struct AR61stLMGWeapon_execStopWeaponBurst_Parms
{
};
struct AR61stLMGWeapon_execHideBullet_Parms
{
	INT iWhichBullet;                                                         //CPF_Parm
};
struct AR61stLMGWeapon_execShowBullets_Parms
{
	INT i;                                                                    //0
};
struct AR61stLMGWeapon_execPostBeginPlay_Parms
{
	INT i;                                                                    //0
};
struct AR61stLMGWeapon_execDestroyBullets_Parms
{
	INT i;                                                                    //0
};

// *****************************************************************************
// AR61stLMGWeapon (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stLMGWeapon : public AR6AbstractFirstPersonWeapon
{
public:
	class AR61stWeaponStaticMesh* m_Bullets[8];                               //0
	class UStaticMesh* m_RWing;                                               //0
	class UStaticMesh* m_2Wing;                                               //0
	class UStaticMesh* m_LWing;                                               //0
	FName m_BipodFireBurstBegin;                                              //0
	FName m_BipodFireBurstCycle;                                              //0
	FName m_BipodFireBurstEnd;                                                //0
	FName m_FireBurstBegin;                                                   //0
	FName m_FireBurstCycle;                                                   //0
	FName m_FireBurstEnd;                                                     //0
};
struct AR61stHandsGripLMG_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripLMG (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripLMG : public AR6AbstractFirstPersonHands
{
};
struct AR61stHandsGripShotgun_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripShotgun (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripShotgun : public AR6AbstractFirstPersonHands
{
};
struct AR61stHandsGripMP5_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripMP5 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripMP5 : public AR6AbstractFirstPersonHands
{
};
struct AR61stSubMp5SD5_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stSubMp5SD5 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stSubMp5SD5 : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stHandsGripSPP_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripSPP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripSPP : public AR6AbstractFirstPersonHands
{
};

// -----------------------------------------------------------------------------
// DiscardWeaponAfterFire ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT DiscardWeaponAfterFire
{
};
struct AR61stHandsGripC4_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripC4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripC4 : public AR6AbstractFirstPersonHands
{
};
struct AR61stHandsGripGrenade_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripGrenade (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripGrenade : public AR6AbstractFirstPersonHands
{
};
struct AR61stHandsGripHBS_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripHBS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripHBS : public AR6AbstractFirstPersonHands
{
};
struct AR61stHBS_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHBS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHBS : public AR6AbstractFirstPersonWeapon
{
};

// *****************************************************************************
// AR61stWeaponStaticMesh (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stWeaponStaticMesh : public AActor
{
};
struct AR61stLMGRPD_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stLMGRPD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stLMGRPD : public AR61stLMGWeapon
{
};
struct AR61stHandsLMGRPD_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsLMGRPD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsLMGRPD : public AR61stHandsGripLMG
{
};
struct AR61stShotgunM1_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stShotgunM1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stShotgunM1 : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stHandsShotgunM1_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsShotgunM1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsShotgunM1 : public AR61stHandsGripShotgun
{
public:
	BITFIELD m_bReloadCycle : 1;                                              //0
	BITFIELD m_bPlayedEnd : 1;                                                //0
};
struct AR61stHandsAssaultAK47_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsAssaultAK47 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsAssaultAK47 : public AR61stHandsGripMP5
{
};
struct AR61stAssaultAK47_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stAssaultAK47 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stAssaultAK47 : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stBreachingCharge_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stBreachingCharge (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stBreachingCharge : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stHandsGripBreach_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripBreach (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripBreach : public AR6AbstractFirstPersonHands
{
};
struct AR61stGrenadeTearGas_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stGrenadeTearGas (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stGrenadeTearGas : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stGrenadeSmoke_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stGrenadeSmoke (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stGrenadeSmoke : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stGrenadeHE_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stGrenadeHE (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stGrenadeHE : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stGrenadeFlashBang_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stGrenadeFlashBang (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stGrenadeFlashBang : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stPistol92FS_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stPistol92FS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stPistol92FS : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stHandsGripPistol_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsGripPistol (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsGripPistol : public AR6AbstractFirstPersonHands
{
};
struct AR61stSubMp5A4_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stSubMp5A4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stSubMp5A4 : public AR61stSubMp5SD5
{
};
struct AR61stSubMac119_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stSubMac119 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stSubMac119 : public AR6AbstractFirstPersonWeapon
{
};
struct AR61stHandsSubMac119_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR61stHandsSubMac119 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR61stHandsSubMac119 : public AR61stHandsGripSPP
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
