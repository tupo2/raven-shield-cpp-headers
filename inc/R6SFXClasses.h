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
** Unreal native C++ headers for the R6SFX package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName R6SFX_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

// *****************************************************************************
// AR6SFXWallHit (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SFXWallHit : public AR6WallHit
{
};

// *****************************************************************************
// AR6Shell (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Shell : public AR6SFX
{
};

// *****************************************************************************
// AR6BloodEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BloodEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6BombFX (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BombFX : public AR6SFX
{
};

// *****************************************************************************
// AR6GrenadeLight (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GrenadeLight : public ALight
{
};

// *****************************************************************************
// AR6BloodImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BloodImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6HardMetalEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6HardMetalEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6MetalImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MetalImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6BreakablePhone (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BreakablePhone : public AR6SFX
{
};

// *****************************************************************************
// AR6MuzzleFlash12Gauge (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MuzzleFlash12Gauge : public AR6SFX
{
};

// *****************************************************************************
// AR6Shell12GaugeBuck (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Shell12GaugeBuck : public AR6Shell
{
};

// *****************************************************************************
// AR6ExplosiveDrum (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ExplosiveDrum : public AR6SFX
{
};

// *****************************************************************************
// AR6Fire_C (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Fire_C : public AR6SFX
{
};

// *****************************************************************************
// AR6Fire_Oil (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Fire_Oil : public AR6SFX
{
};

// *****************************************************************************
// AR6BreakableMetalDoor (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BreakableMetalDoor : public AR6SFX
{
};

// *****************************************************************************
// AR6BreakableGlass_256x128 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BreakableGlass_256x128 : public AR6SFX
{
};

// *****************************************************************************
// AR6BreakableGlass_184x124 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BreakableGlass_184x124 : public AR6SFX
{
};

// *****************************************************************************
// AR6Extincteur (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Extincteur : public AR6SFX
{
};

// *****************************************************************************
// AR6Breakable_TV (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Breakable_TV : public AR6SFX
{
};

// *****************************************************************************
// AR6SmokeEmitter_01Small (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SmokeEmitter_01Small : public AR6SFX
{
};

// *****************************************************************************
// AR6DirtEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DirtEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6ResonMetalEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ResonMetalEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6BrickEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BrickEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6ConcreteEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6ConcreteEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6SheetMetalEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SheetMetalEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6PlatreEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlatreEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6PlushEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlushEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6GlassEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GlassEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6BoomyWoodEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BoomyWoodEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6GenericEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GenericEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6Shell762mmm43 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Shell762mmm43 : public AR6Shell
{
};

// *****************************************************************************
// AR6MuzzleFlash762mm (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MuzzleFlash762mm : public AR6SFX
{
};

// *****************************************************************************
// AR6DirtImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6DirtImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6BrickImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BrickImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6PlatreImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlatreImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6SheetMetalImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SheetMetalImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6PlushImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlushImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6GlassImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GlassImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6FFSteamEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FFSteamEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6MetalFenceEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MetalFenceEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6WoodImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6WoodImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6GenericImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6GenericImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6PlantEffect_01 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlantEffect_01 : public AR6WallHit
{
};

// *****************************************************************************
// AR6WaterEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6WaterEffect : public AR6SFXWallHit
{
};

// *****************************************************************************
// AR6WaterFootStep (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6WaterFootStep : public AR6FootStep
{
};

// *****************************************************************************
// AR6FFSteamImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FFSteamImpact : public AR6LimitedSFX
{
};

// *****************************************************************************
// AR6PlantImpact_01 (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6PlantImpact_01 : public AR6SFX
{
};

// *****************************************************************************
// AR6WaterImpact (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6WaterImpact : public AR6SFX
{
};

// *****************************************************************************
// AR6BreachingChargeEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6BreachingChargeEffect : public AR6SFX
{
};

// *****************************************************************************
// AR6SmokeGrenadeEffectLOW (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SmokeGrenadeEffectLOW : public AR6SFX
{
};

// *****************************************************************************
// AR6SmokeGrenadeEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6SmokeGrenadeEffect : public AR6SFX
{
};

// *****************************************************************************
// AR6TearsGazGrenadeEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6TearsGazGrenadeEffect : public AR6SFX
{
};

// *****************************************************************************
// AR6FragGrenadeEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FragGrenadeEffect : public AR6SFX
{
};

// *****************************************************************************
// AR6FlashBangEffect (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6FlashBangEffect : public AR6SFX
{
};

// *****************************************************************************
// AR6MuzzleFlash9mm (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MuzzleFlash9mm : public AR6SFX
{
};

// *****************************************************************************
// AR6MuzzleFlashSub (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6MuzzleFlashSub : public AR6SFX
{
};

// *****************************************************************************
// AR6Shell9mmParabellum (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT AR6Shell9mmParabellum : public AR6Shell
{
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
