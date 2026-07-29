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
** Unreal native C++ headers for the WinDrv package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName WINDRV_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

// *****************************************************************************
// UWindowsViewport (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UWindowsViewport : public UViewport
{
public:
	virtual INT Exec(TCHAR const *, class FOutputDevice &);
	virtual ~UWindowsViewport();
	virtual void Destroy();
	virtual void ShutdownAfterError();
	virtual INT Lock(BYTE *, INT *);
	virtual void Unlock();
	virtual INT IsFullscreen();
	virtual INT ResizeViewport(DWORD, INT, INT);
	virtual void SetModeCursor();
	virtual void UpdateWindowFrame();
	virtual void OpenWindow(DWORD, INT, INT, INT, INT, INT);
	virtual void CloseWindow();
	virtual void UpdateInput(INT, FLOAT);
	virtual void * GetWindow();
	virtual void SetMouseCapture(INT, INT, INT);
	virtual void Repaint(INT);
	virtual void TryRenderDevice(TCHAR const *, INT, INT, INT);
	virtual void Hold(INT);
	virtual void Minimize();
	virtual void Maximize();
	virtual void Restore();
	virtual void CheckCD();
	virtual void AcquireKeyboard();
	virtual void ReleaseKeyboard();
	virtual INT KeyPressed(INT);
	INT CauseInputEvent(INT, enum EInputAction, FLOAT);
	static struct IDirectInput8W * DirectInput8();
	void EndFullscreen();
	static INT STDCALL EnumAxesCallback(struct DIDEVICEOBJECTINSTANCEW const *, void *);
	static INT STDCALL EnumJoysticksCallback(struct DIDEVICEINSTANCEW const *, void *);
	class UWindowsClient * GetOuterUWindowsClient() const;
	DWORD GetViewportButtonFlags(DWORD);
	static void CDECL InternalConstructor(void *);
	static struct IDirectInputDevice8W * Joystick();
	static struct DIDEVCAPS JoystickCaps();
	INT JoystickInputEvent(FLOAT, enum EInputKey, FLOAT, INT);
	static struct IDirectInputDevice8W * Keyboard();
	static struct IDirectInputDevice8W * Mouse();
	void SetTopness();
	static class UClass * CDECL StaticClass();
	void ToggleFullscreen();
	UWindowsViewport(class UWindowsViewport const &);
	UWindowsViewport();
	long ViewportWndProc(unsigned int, unsigned int, long);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UWindowsViewport & operator=(class UWindowsViewport const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UWindowsClient (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UWindowsClient : public UClient
{
public:
	BITFIELD UseJoystick : 1;                                                 //CPF_Config
	BITFIELD StartupFullscreen : 1;                                           //CPF_Config
	virtual void NotifyDestroy(void *);
	virtual ~UWindowsClient();
	virtual void Destroy();
	virtual void ShutdownAfterError();
	virtual void PostEditChange();
	virtual void Init(class UEngine *);
	virtual void ShowViewportWindows(DWORD, INT);
	virtual void EnableViewportWindows(DWORD, INT);
	virtual void Tick();
	virtual INT Exec(TCHAR const *, class FOutputDevice &);
	virtual class UViewport * NewViewport(class FName);
	virtual void MakeCurrent(class UViewport *);
	virtual class UViewport * GetLastCurrent();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	UWindowsClient(class UWindowsClient const &);
	UWindowsClient();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UWindowsClient & operator=(class UWindowsClient const &);
private:
	static class UClass PrivateStaticClass();
};

// =============================================================================
// WWindowsViewportWindow (Class From DLL)
// =============================================================================
class DLL_IMPORT WWindowsViewportWindow
{
public:
	virtual ~WWindowsViewportWindow();
	virtual TCHAR const * GetPackageName();
	virtual void GetWindowClassName(TCHAR *);
	virtual long WndProc(unsigned int, unsigned int, long);
	WWindowsViewportWindow(class WWindowsViewportWindow const &);
	WWindowsViewportWindow(class UWindowsViewport *);
	WWindowsViewportWindow();
	class WWindowsViewportWindow & operator=(class WWindowsViewportWindow const &);
};

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
