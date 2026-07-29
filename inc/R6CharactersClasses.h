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
** Unreal native C++ headers for the R6Characters package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6CHARACTERS_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif
struct AR6TerroristPawn_execPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6TerroristPawn (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TerroristPawn : public AR6Terrorist
{
};
struct AR6RainbowPawn_execSetRainbowFaceTexture_Parms
{
	INT iFaceIndex;                                                           //0
	class FString aFaceTexture;                                               //CPF_NeedCtorLink
	class UTexture* aTexture;                                                 //0
};
struct AR6RainbowPawn_execSetFemaleParameters_Parms
{
};
struct AR6RainbowPawn_eventPostNetBeginPlay_Parms
{
};
struct AR6RainbowPawn_eventPostBeginPlay_Parms
{
};

// *****************************************************************************
// AR6RainbowPawn (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6RainbowPawn : public AR6Rainbow
{
};

// *****************************************************************************
// AR6RHelmet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6RHelmet : public AR6AbstractHelmet
{
};

// *****************************************************************************
// AR6TSkinhead1 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TSkinhead1 : public AR6TerroristPawn
{
};

// *****************************************************************************
// AR6FieldOfView (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FieldOfView : public AStaticMeshActor
{
};

// *****************************************************************************
// AR6TBusiness02 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TBusiness02 : public AR6TerroristPawn
{
};
struct AR6RHeavyHelmet_execSetHelmetStaticMesh_Parms
{
	BITFIELD bOpen : 1;                                                       //CPF_Parm
};

// *****************************************************************************
// AR6RHeavyHelmet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6RHeavyHelmet : public AR6RHelmet
{
};

// *****************************************************************************
// AR6RainbowHeavy (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6RainbowHeavy : public AR6RainbowPawn
{
};

// *****************************************************************************
// AR6TSkinhead2 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TSkinhead2 : public AR6TSkinhead1
{
};

// *****************************************************************************
// AR6TMilitant02 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TMilitant02 : public AR6TerroristPawn
{
};

// *****************************************************************************
// AR6TMilitant01 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TMilitant01 : public AR6TerroristPawn
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
