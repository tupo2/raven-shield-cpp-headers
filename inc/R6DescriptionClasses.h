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
** Unreal native C++ headers for the R6Description package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6DESCRIPTION_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

// *****************************************************************************
// UR6Description (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Description : public UObject
{
public:
	class UTexture* m_2DMenuTexture;                                          //0
	struct FRegion m_2dMenuRegion;                                            //0
	class FString m_NameID;                                                   //CPF_NeedCtorLink
	class FString m_NameTag;                                                  //CPF_NeedCtorLink
	class FString m_ClassName;                                                //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6PrimaryWeaponDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PrimaryWeaponDescription : public UR6Description
{
public:
	TArray<INT> m_ARangePercent;                                              //CPF_NeedCtorLink
	TArray<INT> m_ADamagePercent;                                             //CPF_NeedCtorLink
	TArray<INT> m_AAccuracyPercent;                                           //CPF_NeedCtorLink
	TArray<INT> m_ARecoilPercent;                                             //CPF_NeedCtorLink
	TArray<INT> m_ARecoveryPercent;                                           //CPF_NeedCtorLink
	TArray<class FString> m_WeaponTags;                                       //CPF_NeedCtorLink
	TArray<class FString> m_WeaponClasses;                                    //CPF_NeedCtorLink
	TArray<class UClass*> m_MyGadgets;                                        //CPF_NeedCtorLink
	TArray<class UClass*> m_Bullets;                                          //CPF_NeedCtorLink
	class FString m_MagTag;                                                   //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6SecondaryWeaponDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6SecondaryWeaponDescription : public UR6Description
{
public:
	TArray<INT> m_ARangePercent;                                              //CPF_NeedCtorLink
	TArray<INT> m_ADamagePercent;                                             //CPF_NeedCtorLink
	TArray<INT> m_AAccuracyPercent;                                           //CPF_NeedCtorLink
	TArray<INT> m_ARecoilPercent;                                             //CPF_NeedCtorLink
	TArray<INT> m_ARecoveryPercent;                                           //CPF_NeedCtorLink
	TArray<class FString> m_WeaponTags;                                       //CPF_NeedCtorLink
	TArray<class FString> m_WeaponClasses;                                    //CPF_NeedCtorLink
	TArray<class UClass*> m_MyGadgets;                                        //CPF_NeedCtorLink
	TArray<class UClass*> m_Bullets;                                          //CPF_NeedCtorLink
	class FString m_MagTag;                                                   //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6GadgetDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6GadgetDescription : public UR6Description
{
};

// *****************************************************************************
// UR6ArmorDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6ArmorDescription : public UR6Description
{
public:
	BITFIELD m_bHideFromMenu : 1;                                             //0
	FName m_LimitedToClass;                                                   //0
};

// *****************************************************************************
// UR6BulletDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6BulletDescription : public UR6Description
{
public:
	class FString m_SubsonicClassName;                                        //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6WeaponGadgetDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6WeaponGadgetDescription : public UR6Description
{
public:
	BITFIELD m_bPriGadgetWAvailable : 1;                                      //0
	BITFIELD m_bSecGadgetWAvailable : 1;                                      //0
};

// *****************************************************************************
// UR6DescPrimaryMags (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPrimaryMags : public UR6GadgetDescription
{
public:
	INT m_iNewTagsToAdd;                                                      //0
	TArray<struct FTexRegion> m_Mags;                                         //CPF_NeedCtorLink
	TArray<class FString> m_MagTags;                                          //CPF_NeedCtorLink
};

// *****************************************************************************
// UR6SubGunDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6SubGunDescription : public UR6PrimaryWeaponDescription
{
};

// *****************************************************************************
// UR6ShotgunDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6ShotgunDescription : public UR6PrimaryWeaponDescription
{
};

// *****************************************************************************
// UR6AssaultDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6AssaultDescription : public UR6PrimaryWeaponDescription
{
};

// *****************************************************************************
// UR6LMGDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6LMGDescription : public UR6PrimaryWeaponDescription
{
};

// *****************************************************************************
// UR6SniperDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6SniperDescription : public UR6PrimaryWeaponDescription
{
};

// *****************************************************************************
// UR6PistolsDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6PistolsDescription : public UR6SecondaryWeaponDescription
{
};

// *****************************************************************************
// UR6MachinePistolsDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6MachinePistolsDescription : public UR6SecondaryWeaponDescription
{
};

// *****************************************************************************
// UR6GrenadeDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6GrenadeDescription : public UR6GadgetDescription
{
};

// *****************************************************************************
// UR6ExplosiveDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6ExplosiveDescription : public UR6GadgetDescription
{
};

// *****************************************************************************
// UR6HBDeviceDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6HBDeviceDescription : public UR6GadgetDescription
{
};

// *****************************************************************************
// UR6KitDescription (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6KitDescription : public UR6GadgetDescription
{
};
struct UR6DescriptionManager_execGetPrimaryBulletDesc_Parms
{
	class UClass* WeaponDescription;                                          //CPF_Parm
	class FString token;                                                      //CPF_Parm|CPF_NeedCtorLink
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
	class FString caps_Token;                                                 //CPF_NeedCtorLink
};
struct UR6DescriptionManager_execGetPrimaryWeaponGadgetDesc_Parms
{
	class UClass* WeaponDescription;                                          //CPF_Parm
	class FString token;                                                      //CPF_Parm|CPF_NeedCtorLink
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
	class FString caps_Token;                                                 //CPF_NeedCtorLink
};
struct UR6DescriptionManager_execGetSecondaryBulletDesc_Parms
{
	class UClass* WeaponDescription;                                          //CPF_Parm
	class FString token;                                                      //CPF_Parm|CPF_NeedCtorLink
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
	class FString caps_Token;                                                 //CPF_NeedCtorLink
};
struct UR6DescriptionManager_execGetSecondaryWeaponGadgetDesc_Parms
{
	class UClass* WeaponDescription;                                          //CPF_Parm
	class FString token;                                                      //CPF_Parm|CPF_NeedCtorLink
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
	class FString caps_Token;                                                 //CPF_NeedCtorLink
};
struct UR6DescriptionManager_execfindPrimaryDefaultAmmo_Parms
{
	class UClass* WeaponDescriptionClass;                                     //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
};
struct UR6DescriptionManager_execfindSecondaryDefaultAmmo_Parms
{
	class UClass* WeaponDescriptionClass;                                     //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
	INT i;                                                                    //0
	BITFIELD Found : 1;                                                       //0
};

// *****************************************************************************
// UR6DescriptionManager (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescriptionManager : public UObject
{
};

// *****************************************************************************
// UR6DescSecondaryMags (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSecondaryMags : public UR6DescPrimaryMags
{
};

// *****************************************************************************
// UR6DescWeaponGadgetNone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescWeaponGadgetNone : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescBulletNone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescBulletNone : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescPrimaryWeaponNone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPrimaryWeaponNone : public UR6PrimaryWeaponDescription
{
};

// *****************************************************************************
// UR6DescGadgetNone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescGadgetNone : public UR6GadgetDescription
{
};

// *****************************************************************************
// UR6DescFlashBangGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescFlashBangGadget : public UR6GrenadeDescription
{
};

// *****************************************************************************
// UR6DescSmokeGrenadeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSmokeGrenadeGadget : public UR6GrenadeDescription
{
};

// *****************************************************************************
// UR6DescLight (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLight : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMedium (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMedium : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavy (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavy : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightGreyCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightGreyCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumGreyCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumGreyCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyGreyCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyGreyCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightBlue (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightBlue : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumBlue (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumBlue : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyBlue (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyBlue : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightBlueCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightBlueCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumBlueCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumBlueCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyBlueCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyBlueCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightEuroCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightEuroCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumEuroCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumEuroCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyEuroCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyEuroCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightGreen (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightGreen : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumGreen (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumGreen : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyGreen (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyGreen : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightGreenCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightGreenCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumGreenCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumGreenCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyGreenCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyGreenCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightWinter (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightWinter : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumWinter (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumWinter : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyWinter (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyWinter : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightWinterCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightWinterCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumWinterCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumWinterCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyWinterCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyWinterCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightTan (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightTan : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumTan (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumTan : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyTan (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyTan : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescLightDesertCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLightDesertCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescMediumDesertCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMediumDesertCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescHeavyDesertCamo (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHeavyDesertCamo : public UR6ArmorDescription
{
};

// *****************************************************************************
// UR6DescSilencerSubGuns (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSilencerSubGuns : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescMiniScope (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMiniScope : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6Desc9mmParabellumFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc9mmParabellumFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc9mmParabellumJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc9mmParabellumJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc556mmNATOFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc556mmNATOFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescCMAG556mm (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescCMAG556mm : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescMAGPistolHigh (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMAGPistolHigh : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescSilencerPistol (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSilencerPistol : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6Desc762mmNATOFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc762mmNATOFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescThermalScope (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescThermalScope : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescSilencerSnipers (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSilencerSnipers : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescMAG9mmHigh (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMAG9mmHigh : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescCMAG9mmMP5 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescCMAG9mmMP5 : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescCMAG762mm (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescCMAG762mm : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6Desc12gaugeBuck (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc12gaugeBuck : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc12gaugeSlug (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc12gaugeSlug : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc45calAutoJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc45calAutoJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc9x21mmRFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc9x21mmRFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc45calAutoFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc45calAutoFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc762mmNATOJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc762mmNATOJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc762mmM43FMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc762mmM43FMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescCMAG9mmUMP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescCMAG9mmUMP : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6Desc765mmAutoFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc765mmAutoFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescDrumMAGAK (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescDrumMAGAK : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6Desc765mmAutoJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc765mmAutoJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc57x28mmFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc57x28mmFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescMAGCZ61High (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMAGCZ61High : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6Desc10mmAutoJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc10mmAutoJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc762x54mmRJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc762x54mmRJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescCMAG9mmMTAR21 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescCMAG9mmMTAR21 : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6Desc10mmAutoFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc10mmAutoFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc40calAutoJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc40calAutoJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc357calMagnumFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc357calMagnumFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc9x39mmSP6FMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc9x39mmSP6FMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc357calMagnumJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc357calMagnumJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc40calAutoFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc40calAutoFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc30calMagnumJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc30calMagnumJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc30calMagnumFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc30calMagnumFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc50calM33FMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc50calM33FMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc50calM33JHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc50calM33JHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc50calPistolFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc50calPistolFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc50calPistolJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc50calPistolJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc762x54mmRFMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc762x54mmRFMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc545mm7N6FMJ (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc545mm7N6FMJ : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescMAGCZ61High2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescMAGCZ61High2 : public UR6WeaponGadgetDescription
{
};

// *****************************************************************************
// UR6DescAssaultL85A1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultL85A1 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescAssaultM14 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultM14 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescAssaultM16A2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultM16A2 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescAssaultM4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultM4 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescAssaultM82 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultM82 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescAssaultTAR21 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultTAR21 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescAssaultType97 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultType97 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescBreachingChargeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescBreachingChargeGadget : public UR6ExplosiveDescription
{
};

// *****************************************************************************
// UR6DescAssaultGalilARM (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultGalilARM : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescClaymoreGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescClaymoreGadget : public UR6ExplosiveDescription
{
};

// *****************************************************************************
// UR6Desc762mmM43JHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc762mmM43JHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescAssaultG3A3 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultG3A3 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescDiffuseKit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescDiffuseKit : public UR6KitDescription
{
};

// *****************************************************************************
// UR6Desc57x28mmJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc57x28mmJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescAssaultG36K (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultG36K : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescElectronicKit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescElectronicKit : public UR6KitDescription
{
};

// *****************************************************************************
// UR6DescFalseHBGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescFalseHBGadget : public UR6HBDeviceDescription
{
};

// *****************************************************************************
// UR6DescFragGrenadeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescFragGrenadeGadget : public UR6GrenadeDescription
{
};

// *****************************************************************************
// UR6DescGasMask (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescGasMask : public UR6GadgetDescription
{
};

// *****************************************************************************
// UR6DescHBSGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHBSGadget : public UR6HBDeviceDescription
{
};

// *****************************************************************************
// UR6DescHBSJammerGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHBSJammerGadget : public UR6HBDeviceDescription
{
};

// *****************************************************************************
// UR6DescHBSSAJammerGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescHBSSAJammerGadget : public UR6HBDeviceDescription
{
};

// *****************************************************************************
// UR6DescLMG21E (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLMG21E : public UR6LMGDescription
{
};

// *****************************************************************************
// UR6Desc556mmNATOJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc556mmNATOJHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescLMG23E (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLMG23E : public UR6LMGDescription
{
};

// *****************************************************************************
// UR6DescLMGM249 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLMGM249 : public UR6LMGDescription
{
};

// *****************************************************************************
// UR6DescLMGM60E4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLMGM60E4 : public UR6LMGDescription
{
};

// *****************************************************************************
// UR6DescLMGRPD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLMGRPD : public UR6LMGDescription
{
};

// *****************************************************************************
// UR6DescLockPickKit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescLockPickKit : public UR6KitDescription
{
};

// *****************************************************************************
// UR6DescAssaultFNC (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultFNC : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6Desc545mm7N6JHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc545mm7N6JHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6DescPistol92FS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistol92FS : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolAPArmy (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolAPArmy : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolCZ61 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolCZ61 : public UR6MachinePistolsDescription
{
};

// *****************************************************************************
// UR6DescAssaultFAMASG2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultFAMASG2 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescPistolDesertEagle357 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolDesertEagle357 : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolDesertEagle50 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolDesertEagle50 : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolMac119 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolMac119 : public UR6MachinePistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolMicroUzi (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolMicroUzi : public UR6MachinePistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolMk23 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolMk23 : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolP228 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolP228 : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolSPP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolSPP : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolSR2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolSR2 : public UR6MachinePistolsDescription
{
};

// *****************************************************************************
// UR6DescPistolUSP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescPistolUSP : public UR6PistolsDescription
{
};

// *****************************************************************************
// UR6DescAssaultFAL (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultFAL : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescRemoteChargeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescRemoteChargeGadget : public UR6ExplosiveDescription
{
};

// *****************************************************************************
// UR6DescShotgunM1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescShotgunM1 : public UR6ShotgunDescription
{
};

// *****************************************************************************
// UR6DescShotgunSPAS12 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescShotgunSPAS12 : public UR6ShotgunDescription
{
};

// *****************************************************************************
// UR6DescShotgunUSAS12 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescShotgunUSAS12 : public UR6ShotgunDescription
{
};

// *****************************************************************************
// UR6DescAssaultAUG (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultAUG : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescSniperAWCovert (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSniperAWCovert : public UR6SniperDescription
{
};

// *****************************************************************************
// UR6DescSniperDragunov (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSniperDragunov : public UR6SniperDescription
{
};

// *****************************************************************************
// UR6DescSniperM82A1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSniperM82A1 : public UR6SniperDescription
{
};

// *****************************************************************************
// UR6DescSniperPSG1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSniperPSG1 : public UR6SniperDescription
{
};

// *****************************************************************************
// UR6DescSniperSSG3000 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSniperSSG3000 : public UR6SniperDescription
{
};

// *****************************************************************************
// UR6DescSniperVSSVintorez (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSniperVSSVintorez : public UR6SniperDescription
{
};

// *****************************************************************************
// UR6DescSniperWA2000 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSniperWA2000 : public UR6SniperDescription
{
};

// *****************************************************************************
// UR6DescSubCZ61 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubCZ61 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubM12S (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubM12S : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubMac119 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubMac119 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubMicroUzi (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubMicroUzi : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubMP510A2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubMP510A2 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubMP5A4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubMP5A4 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubMP5KPDW (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubMP5KPDW : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubMP5SD5 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubMP5SD5 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubMTAR21 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubMTAR21 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubP90 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubP90 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubSR2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubSR2 : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubTMP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubTMP : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubUMP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubUMP : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescSubUzi (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescSubUzi : public UR6SubGunDescription
{
};

// *****************************************************************************
// UR6DescTearGasGrenadeGadget (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescTearGasGrenadeGadget : public UR6GrenadeDescription
{
};

// *****************************************************************************
// UR6DescAssaultAK74 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultAK74 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6DescAssaultAK47 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6DescAssaultAK47 : public UR6AssaultDescription
{
};

// *****************************************************************************
// UR6Desc9x39mmSP6JHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc9x39mmSP6JHP : public UR6BulletDescription
{
};

// *****************************************************************************
// UR6Desc9x21mmRJHP (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UR6Desc9x21mmRJHP : public UR6BulletDescription
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
