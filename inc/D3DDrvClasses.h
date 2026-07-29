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
** Unreal native C++ headers for the D3DDrv package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName D3DDRV_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

// *****************************************************************************
// UD3DRenderDevice (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UD3DRenderDevice : public URenderDevice
{
public:
	BITFIELD UsePrecaching : 1;                                               //CPF_Config
	BITFIELD UseTrilinear : 1;                                                //CPF_Config
	char Unknown3[0x0004];
	BITFIELD UseVSync : 1;                                                    //CPF_Config
	BITFIELD UseHardwareTL : 1;                                               //CPF_Config
	BITFIELD UseHardwareVS : 1;                                               //CPF_Config
	BITFIELD UseCubemaps : 1;                                                 //CPF_Config
	char Unknown7[0x0014];
	BITFIELD UseTripleBuffering : 1;                                          //CPF_Config
	BITFIELD ReduceMouseLag : 1;                                              //CPF_Config
	char Unknown9[0x0004];
	INT AdapterNumber;                                                        //CPF_Config
	char Unknown10[0x0004];
	INT MaxPixelShaderVersion;                                                //CPF_Config
	virtual INT Exec(TCHAR const *, class FOutputDevice &);
	virtual ~UD3DRenderDevice();
	virtual INT Init();
	virtual INT SetRes(class UViewport *, INT, INT, INT);
	virtual void Exit(class UViewport *);
	virtual void Flush(class UViewport *);
	virtual void FlushResource(QWORD);
	virtual void UpdateGamma(class UViewport *);
	virtual void RestoreGamma();
	virtual class FRenderInterface * Lock(class UViewport *, BYTE *, INT *);
	virtual void Unlock(class FRenderInterface *);
	virtual void Present(class UViewport *);
	virtual void ReadPixels(class UViewport *, class FColor *);
	virtual void SetEmulationMode(enum EHardwareEmulationMode);
	virtual struct FRenderCaps * GetRenderCaps();
	virtual INT OpenVideo(class UCanvas *, char *, char *, INT);
	virtual void CloseVideo(class UCanvas *);
	virtual void DisplayVideo(class UCanvas *, void *, INT);
	virtual void StartVideo(class UCanvas *, INT, INT, INT);
	virtual void StopVideo(class UCanvas *);
	virtual void Draw3DLine(class FVector, class FVector, class FColor, class UTexture *, FLOAT, FLOAT, FLOAT, FLOAT);
	virtual void ChangeDrawingSurface(enum ER6SwitchSurface, INT);
	virtual void HandleFullScreenEffects(INT, INT);
	virtual void GetAvailableResolutions(class TArray<struct FResolutionInfo> &);
	virtual DWORD GetAvailableVideoMemory();
	virtual INT SupportsTextureFormat(enum ETextureFormat);
	class FD3DResource * GetCachedResource(QWORD);
	class FD3DPixelShader * GetPixelShader(enum EPixelShader);
	class FD3DVertexShader * GetVertexShader(enum EVertexShader, struct FShaderDeclaration &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	UD3DRenderDevice(class UD3DRenderDevice const &);
	UD3DRenderDevice();
	INT UnSetRes(TCHAR const *, long);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UD3DRenderDevice & operator=(class UD3DRenderDevice const &);
private:
	static class UClass PrivateStaticClass();
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
