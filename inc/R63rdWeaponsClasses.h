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
** Unreal native C++ headers for the R63rdWeapons package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R63RDWEAPONS_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

// *****************************************************************************
// ALMGRPD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ALMGRPD : public AR6MachineGun
{
};

// *****************************************************************************
// AShotgunM1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AShotgunM1 : public AR6PumpShotgun
{
};

// *****************************************************************************
// AAssaultAK47 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AAssaultAK47 : public AR6AssaultRifle
{
};

// *****************************************************************************
// APistol92FS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT APistol92FS : public AR6Pistol
{
};

// *****************************************************************************
// ASubMP5A4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ASubMP5A4 : public AR6SubMachineGun
{
};

// *****************************************************************************
// ASubMac119 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ASubMac119 : public AR6SubMachineGun
{
};

// *****************************************************************************
// AR63rdMAGRPD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdMAGRPD : public AR6MagazineGadget
{
};

// *****************************************************************************
// ANormalLMGRPD (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ANormalLMGRPD : public ALMGRPD
{
};

// *****************************************************************************
// ANormalPistol92FS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ANormalPistol92FS : public APistol92FS
{
};

// *****************************************************************************
// ABuckShotgunM1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ABuckShotgunM1 : public AShotgunM1
{
};

// *****************************************************************************
// AR63rdMAG9mmStraight (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdMAG9mmStraight : public AR6MagazineGadget
{
};

// *****************************************************************************
// ANormalAssaultAK47 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ANormalAssaultAK47 : public AAssaultAK47
{
};

// *****************************************************************************
// AR63rdCMAG9mmMP5 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdCMAG9mmMP5 : public AR6MagazineGadget
{
};

// *****************************************************************************
// ACMagSubMP5A4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ACMagSubMP5A4 : public ASubMP5A4
{
};

// *****************************************************************************
// AR63rdMAGPistol (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdMAGPistol : public AR6MagazineGadget
{
};

// *****************************************************************************
// ASilencedPistol92FS (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ASilencedPistol92FS : public APistol92FS
{
};

// *****************************************************************************
// AR63rdMAG9mm (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdMAG9mm : public AR6MagazineGadget
{
};

// *****************************************************************************
// ANormalSubMP5A4 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ANormalSubMP5A4 : public ASubMP5A4
{
};

// *****************************************************************************
// ANormalSubMac119 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ANormalSubMac119 : public ASubMac119
{
};

// *****************************************************************************
// AR63rdMAGAK47 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR63rdMAGAK47 : public AR6MagazineGadget
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
