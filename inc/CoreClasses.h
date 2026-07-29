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
** Unreal native C++ headers for the Core package of RVS 1.6.
**                       © 2005 Temp2 temp1290@hotmail.com                       
** *****************************************************************************
*/

#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern DLL_IMPORT FName CORE_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

enum ECamOrientation{
	 CAMORIENT_None=0
	,CAMORIENT_LookAtActor=1
	,CAMORIENT_FacePath=2
	,CAMORIENT_Interpolate=3
	,CAMORIENT_Dolly=4
};
enum ePlayerTeamSelection{
	 PTS_UnSelected=0
	,PTS_AutoSelect=1
	,PTS_Alpha=2
	,PTS_Bravo=3
	,PTS_Spectator=4
};
enum ENodeNotify{
	 NODEMSG_NewAction=0
	,NODEMSG_NewMode=1
	,NODEMSG_NewSpeed=2
	,NODEMSG_NewNode=3
	,NODEMSG_GoCodeLaunched=4
	,NODEMSG_ActionNodeCompleted=5
	,NODEMSG_WaitingGoCode=6
	,NODEMSG_NodeReached=7
	,NODEMSG_PlayerLeft=8
	,NODEMSG_SnipeUntilGoCode=9
	,NODEMSG_BreachDoorAtGoCode=10
};
enum EPlanActionType{
	 PACTTYP_Normal=0
	,PACTTYP_Milestone=1
	,PACTTYP_GoCodeA=2
	,PACTTYP_GoCodeB=3
	,PACTTYP_GoCodeC=4
	,PACTTYP_Delete=5
};
enum EPlanAction{
	 PACT_None=0
	,PACT_Frag=1
	,PACT_Flash=2
	,PACT_Gas=3
	,PACT_Smoke=4
	,PACT_SnipeGoCode=5
	,PACT_Breach=6
	,PACT_OpenDoor=7
};
enum EMovementSpeed{
	 SPEED_Blitz=0
	,SPEED_Normal=1
	,SPEED_Cautious=2
};
enum EMovementMode{
	 MOVE_Assault=0
	,MOVE_Infiltrate=1
	,MOVE_Recon=2
};
enum EGoCode{
	 GOCODE_Alpha=0
	,GOCODE_Bravo=1
	,GOCODE_Charlie=2
	,GOCODE_Zulu=3
	,GOCODE_None=4
};

// -----------------------------------------------------------------------------
// FInterpCurvePoint ('Struct' From Unreal)
// -----------------------------------------------------------------------------
class DLL_IMPORT FInterpCurvePoint
{
public:
	FLOAT InVal;                                                          //CPF_Edit
	FLOAT OutVal;                                                         //CPF_Edit
	FInterpCurvePoint(FLOAT, FLOAT);
	FInterpCurvePoint();
	class FInterpCurvePoint & operator=(class FInterpCurvePoint const &);
	INT operator==(class FInterpCurvePoint const &);
};

// -----------------------------------------------------------------------------
// FInterpCurve ('Struct' From Unreal)
// -----------------------------------------------------------------------------
class DLL_IMPORT FInterpCurve
{
public:
	TArray<class FInterpCurvePoint> Points;                               //CPF_Edit|CPF_NeedCtorLink
	~FInterpCurve();
	void AddPoint(FLOAT, FLOAT);
	FLOAT Eval(FLOAT);
	FInterpCurve(class FInterpCurve const &);
	FInterpCurve();
	class FInterpCurve & operator=(class FInterpCurve const &);
};

// -----------------------------------------------------------------------------
// FRotator ('Struct' From Unreal)
// -----------------------------------------------------------------------------
/*
class DLL_IMPORT FRotator
{
public:
	INT Pitch;                                                            //CPF_Edit|CPF_Config
	INT Yaw;                                                              //CPF_Edit|CPF_Config
	INT Roll;                                                             //CPF_Edit|CPF_Config
	class FRotator Add(INT, INT, INT);
	class FRotator AddBounded(INT, INT, INT);
	class FRotator Clamp();
	class FRotator ClampPos();
	FRotator();
	FRotator(INT, INT, INT);
	FRotator(FLOAT);
	class FRotator GridSnap(class FRotator const &);
	INT IsZero() const;
	class FRotator Reduce() const;
	class FVector Vector();
	INT operator!=(class FRotator const &) const;
	class FRotator operator*(FLOAT) const;
	class FRotator operator*=(FLOAT);
	class FRotator operator+(class FRotator const &) const;
	class FRotator operator+=(class FRotator const &);
	class FRotator operator-(class FRotator const &) const;
	class FRotator operator-=(class FRotator const &);
	class FRotator & operator=(class FRotator const &);
	INT operator==(class FRotator const &) const;
};
*/
// -----------------------------------------------------------------------------
// FPlane ('Struct' From Unreal)
// -----------------------------------------------------------------------------
/*
class DLL_IMPORT FPlane
{
public:
	FLOAT W;                                                              //CPF_Edit|CPF_Config
	FPlane(class FPlane const &);
	FPlane(class FVector const &);
	FPlane(FLOAT, FLOAT, FLOAT, FLOAT);
	FPlane(class FVector, class FVector, class FVector);
	FPlane();
	FPlane(class FVector, FLOAT);
	FPlane(class FVector, class FPlane const &);
	class FPlane Flip() const;
	FLOAT PlaneDot(class FVector const &) const;
	class FPlane TransformBy(class FCoords const &) const;
	class FPlane TransformBy(class FMatrix const &) const;
	class FPlane TransformByUsingAdjointT(class FMatrix const &, class FMatrix const &) const;
	class FPlane TransformPlaneByOrtho(class FCoords const &) const;
	class FPlane TransformPlaneByOrtho(class FMatrix const &) const;
	INT operator!=(class FPlane const &) const;
	class FPlane operator*(class FPlane const &);
	class FPlane operator*(FLOAT) const;
	class FPlane operator*=(class FPlane const &);
	class FPlane operator*=(FLOAT);
	class FPlane operator+(class FPlane const &) const;
	class FPlane operator+=(class FPlane const &);
	class FPlane operator-(class FPlane const &) const;
	class FPlane operator-=(class FPlane const &);
	class FPlane operator/(FLOAT) const;
	class FPlane operator/=(FLOAT);
	class FPlane & operator=(class FPlane const &);
	INT operator==(class FPlane const &) const;
};

// -----------------------------------------------------------------------------
// FVector ('Struct' From Unreal)
// -----------------------------------------------------------------------------
class DLL_IMPORT FVector
{
public:
	FLOAT X;                                                              //CPF_Edit|CPF_Config
	FLOAT Y;                                                              //CPF_Edit|CPF_Config
	FLOAT Z;                                                              //CPF_Edit|CPF_Config
	void AddBounded(class FVector const &, FLOAT);
	INT Booleanize();
	class FVector BoundToCube(FLOAT);
	FLOAT & Component(INT);
	FVector(FLOAT);
	FVector(FLOAT, FLOAT, FLOAT);
	FVector();
	static class FVector const FVector0();
	void FindBestAxisVectors(class FVector &, class FVector &);
	FLOAT GetAbsMax() const;
	FLOAT GetMax() const;
	class FVector GetNonParallel();
	class FVector GetNormalized();
	class FVector GridSnap(class FVector const &);
	INT IsNearlyZero() const;
	INT IsUniform();
	INT IsZero() const;
	class FVector MirrorByPlane(class FPlane const &) const;
	class FVector MirrorByVector(class FVector const &) const;
	INT Normalize();
	class FVector PivotTransform(class FCoords const &) const;
	class FVector Projection() const;
	class FVector RotateAngleAxis(INT, class FVector const &) const;
	class FRotator Rotation();
	class FVector SafeNormal() const;
	FLOAT Size() const;
	FLOAT Size2D() const;
	FLOAT SizeSquared() const;
	FLOAT SizeSquared2D() const;
	class FVector TransformPointBy(class FCoords const &) const;
	class FVector TransformVectorBy(class FCoords const &) const;
	class FVector TransformVectorByTranspose(class FCoords const &) const;
	class FVector UnsafeNormal() const;
	INT operator!=(class FVector const &) const;
	class FVector operator*(class FVector const &) const;
	class FVector operator*(FLOAT) const;
	class FVector operator*=(class FVector const &);
	class FVector operator*=(FLOAT);
	class FVector operator+(class FVector const &) const;
	class FVector operator+=(class FVector const &);
	class FVector operator-(class FVector const &) const;
	class FVector operator-() const;
	class FVector operator-=(class FVector const &);
	class FVector operator/(FLOAT) const;
	class FVector operator/=(class FVector const &);
	class FVector operator/=(FLOAT);
	class FVector & operator=(class FVector const &);
	INT operator==(class FVector const &) const;
	FLOAT & operator[](INT);
	class FVector operator^(class FVector const &) const;
	FLOAT operator|(class FVector const &) const;
};
*/
// -----------------------------------------------------------------------------
// FRange ('Struct' From Unreal)
// -----------------------------------------------------------------------------
class DLL_IMPORT FRange
{
public:
	FLOAT Min;                                                            //CPF_Edit|CPF_Config
	FLOAT Max;                                                            //CPF_Edit|CPF_Config
	INT Booleanize();
	FLOAT & Component(INT);
	FRange(FLOAT);
	FRange(FLOAT, FLOAT);
	FRange();
	FLOAT GetCenter() const;
	FLOAT GetMax() const;
	FLOAT GetMin() const;
	FLOAT GetRand() const;
	FLOAT GetSRand() const;
	class FRange GridSnap(class FRange const &);
	INT IsNearlyZero() const;
	INT IsZero() const;
	FLOAT Size() const;
	INT operator!=(class FRange const &) const;
	class FRange operator*(class FRange const &) const;
	class FRange operator*(FLOAT) const;
	class FRange operator*=(class FRange const &);
	class FRange operator*=(FLOAT);
	class FRange operator+(class FRange const &) const;
	class FRange operator+(FLOAT) const;
	class FRange operator+=(class FRange const &);
	class FRange operator+=(FLOAT);
	class FRange operator-(class FRange const &) const;
	class FRange operator-(FLOAT) const;
	class FRange operator-() const;
	class FRange operator-=(class FRange const &);
	class FRange operator-=(FLOAT);
	class FRange operator/(FLOAT) const;
	class FRange operator/=(class FRange const &);
	class FRange operator/=(FLOAT);
	class FRange & operator=(class FRange const &);
	INT operator==(class FRange const &) const;
};

// -----------------------------------------------------------------------------
// FMatrix ('Struct' From Unreal)
// -----------------------------------------------------------------------------
/*
class DLL_IMPORT FMatrix
{
public:
	class FPlane XPlane;                                                  //CPF_Edit
	class FPlane YPlane;                                                  //CPF_Edit
	class FPlane ZPlane;                                                  //CPF_Edit
	class FPlane WPlane;                                                  //CPF_Edit
	~FMatrix();
	class FCoords Coords();
	FLOAT Determinant() const;
	FMatrix(class FPlane, class FPlane, class FPlane, class FPlane);
	FMatrix();
	static class FMatrix Identity();
	class FMatrix Inverse();
	void SetIdentity();
	class FPlane TransformFPlane(class FPlane const &) const;
	class FVector TransformFVector(class FVector const &) const;
	class FPlane TransformNormal(class FVector const &) const;
	class FMatrix Transpose();
	class FMatrix TransposeAdjoint() const;
	INT operator!=(class FMatrix &) const;
	class FMatrix operator*(class FMatrix) const;
	void operator*=(class FMatrix);
	class FMatrix & operator=(class FMatrix const &);
	INT operator==(class FMatrix &) const;
};

// -----------------------------------------------------------------------------
// FGuid ('Struct' From Unreal)
// -----------------------------------------------------------------------------
class DLL_IMPORT FGuid
{
public:
	INT A;                                                                //0
	INT B;                                                                //0
	INT C;                                                                //0
	INT D;                                                                //0
	FGuid(DWORD, DWORD, DWORD, DWORD);
	FGuid();
	static class FGuid SpecialGUIDArmPatches();
	TCHAR * String() const;
	class FGuid & operator=(class FGuid const &);
};
*/
// -----------------------------------------------------------------------------
// FCompressedPosition ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FCompressedPosition
{
public:
	class FVector Location;                                               //0
	class FRotator Rotation;                                              //0
	class FVector Velocity;                                               //0
};

// -----------------------------------------------------------------------------
// FRegion ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FRegion
{
public:
	INT X;                                                                //CPF_Edit
	INT Y;                                                                //CPF_Edit
	INT W;                                                                //CPF_Edit
	INT H;                                                                //CPF_Edit
};

// -----------------------------------------------------------------------------
// FBoundingVolume ('Struct' From Unreal)
// -----------------------------------------------------------------------------
struct DLL_IMPORT FBoundingVolume
{
public:
	class FPlane Sphere;                                                  //0
};

// -----------------------------------------------------------------------------
// FBox ('Struct' From Unreal)
// -----------------------------------------------------------------------------
/*
class DLL_IMPORT FBox
{
public:
	class FVector Min;                                                    //0
	class FVector Max;                                                    //0
	BYTE IsValid;                                                         //0
	class FBox ExpandBy(FLOAT) const;
	FBox(class FVector const &, class FVector const &);
	FBox(INT);
	FBox(class FVector const *, INT);
	FBox();
	class FVector GetCenter() const;
	void GetCenterAndExtents(class FVector &, class FVector &);
	class FVector GetExtent() const;
	class FVector & GetExtrema(INT);
	class FVector const & GetExtrema(INT) const;
	void Init();
	bool Intersect(class FBox const &) const;
	class FBox TransformBy(class FCoords const &) const;
	class FBox TransformBy(class FMatrix const &) const;
	class FBox operator+(class FBox const &) const;
	class FBox operator+(class FVector const &) const;
	class FBox & operator+=(class FBox const &);
	class FBox & operator+=(class FVector const &);
	class FBox & operator=(class FBox const &);
	class FVector & operator[](INT);
};
*/
// -----------------------------------------------------------------------------
// FColor ('Struct' From Unreal)
// -----------------------------------------------------------------------------
class DLL_IMPORT FColor
{
public:
	BYTE B;                                                               //CPF_Edit|CPF_Config
	BYTE G;                                                               //CPF_Edit|CPF_Config
	BYTE R;                                                               //CPF_Edit|CPF_Config
	BYTE A;                                                               //CPF_Edit|CPF_Config
	class FColor Brighten(INT);
	INT Brightness() const;
	DWORD & DWColor();
	DWORD const & DWColor() const;
	FLOAT FBrightness() const;
	FColor(class FPlane const &);
	FColor(BYTE, BYTE, BYTE, BYTE);
	FColor(DWORD);
	FColor();
	TCHAR HiColor555() const;
	TCHAR HiColor565() const;
	DWORD PS2DWColor();
	class FPlane Plane() const;
	class FColor RedBlueSwap();
	DWORD TrueColor() const;
	operator class FPlane() const;
	operator class FVector() const;
	operator unsigned long() const;
	INT operator!=(class FColor const &) const;
	void operator+=(class FColor);
	class FColor & operator=(class FColor const &);
	INT operator==(class FColor const &) const;
};

// -----------------------------------------------------------------------------
// FScale ('Struct' From Unreal)
// -----------------------------------------------------------------------------
/*
class DLL_IMPORT FScale
{
public:
	class FVector Scale;                                                  //CPF_Edit|CPF_Config
	FLOAT SheerRate;                                                      //CPF_Edit|CPF_Config
	BYTE SheerAxis;                                                       //CPF_Edit|CPF_Config
	FScale(class FVector const &, FLOAT, enum ESheerAxis);
	FScale();
	FLOAT Orientation();
	class FScale & operator=(class FScale const &);
	INT operator==(class FScale const &) const;
};
*/
// -----------------------------------------------------------------------------
// FRangeVector ('Struct' From Unreal)
// -----------------------------------------------------------------------------
class DLL_IMPORT FRangeVector
{
public:
	class FRange X;                                                       //CPF_Edit|CPF_Config
	class FRange Y;                                                       //CPF_Edit|CPF_Config
	class FRange Z;                                                       //CPF_Edit|CPF_Config
	class FRange & Component(INT);
	FRangeVector(class FRange, class FRange, class FRange);
	FRangeVector(class FVector);
	FRangeVector();
	class FVector GetCenter() const;
	class FVector GetMax() const;
	class FVector GetRand() const;
	class FVector GetSRand() const;
	class FRangeVector GridSnap(class FRangeVector const &);
	INT IsNearlyZero() const;
	INT IsZero() const;
	INT operator!=(class FRangeVector const &) const;
	class FRangeVector operator*(class FRangeVector const &) const;
	class FRangeVector operator*(FLOAT) const;
	class FRangeVector operator*=(class FRangeVector const &);
	class FRangeVector operator*=(FLOAT);
	class FRangeVector operator+(class FRangeVector const &) const;
	class FRangeVector operator+(class FVector const &) const;
	class FRangeVector operator+=(class FRangeVector const &);
	class FRangeVector operator+=(class FVector const &);
	class FRangeVector operator-(class FRangeVector const &) const;
	class FRangeVector operator-(class FVector const &) const;
	class FRangeVector operator-() const;
	class FRangeVector operator-=(class FRangeVector const &);
	class FRangeVector operator-=(class FVector const &);
	class FRangeVector operator/(FLOAT) const;
	class FRangeVector operator/=(class FRangeVector const &);
	class FRangeVector operator/=(FLOAT);
	class FRangeVector & operator=(class FRangeVector const &);
	INT operator==(class FRangeVector const &) const;
};

// -----------------------------------------------------------------------------
// FCoords ('Struct' From Unreal)
// -----------------------------------------------------------------------------
/*
class DLL_IMPORT FCoords
{
public:
	class FVector Origin;                                                 //CPF_Edit|CPF_Config
	class FVector XAxis;                                                  //CPF_Edit|CPF_Config
	class FVector YAxis;                                                  //CPF_Edit|CPF_Config
	class FVector ZAxis;                                                  //CPF_Edit|CPF_Config
	class FCoords ApplyPivot(class FCoords const &) const;
	FCoords(class FVector const &, class FVector const &, class FVector const &, class FVector const &);
	FCoords(class FVector const &);
	FCoords();
	class FCoords Inverse() const;
	class FMatrix Matrix() const;
	class FCoords MirrorByPlane(class FPlane const &) const;
	class FCoords MirrorByVector(class FVector const &) const;
	class FRotator OrthoRotation() const;
	class FCoords PivotInverse() const;
	class FCoords Transpose() const;
	class FCoords operator*(class FCoords const &) const;
	class FCoords operator*(class FRotator const &) const;
	class FCoords operator*(class FScale const &) const;
	class FCoords operator*(class FVector const &) const;
	class FCoords & operator*=(class FCoords const &);
	class FCoords & operator*=(class FRotator const &);
	class FCoords & operator*=(class FScale const &);
	class FCoords & operator*=(class FVector const &);
	class FCoords operator/(class FRotator const &) const;
	class FCoords operator/(class FVector const &) const;
	class FCoords operator/(class FScale const &) const;
	class FCoords & operator/=(class FRotator const &);
	class FCoords & operator/=(class FScale const &);
	class FCoords & operator/=(class FVector const &);
	class FCoords & operator=(class FCoords const &);
};
*/
struct UObject_execEqualEqual_NameName_Parms
{
	FName A;                                                                  //CPF_Parm
	FName B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_ObjectObject_Parms
{
	class UObject* A;                                                         //CPF_Parm
	class UObject* B;                                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execEqualEqual_ObjectObject_Parms
{
	class UObject* A;                                                         //CPF_Parm
	class UObject* B;                                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execStrnicmp_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT iCount;                                                               //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAtoi_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execItoa_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execRemoveInvalidChars_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execAsc_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execChr_Parms
{
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execCaps_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execRight_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execLeft_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT i;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execMid_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT i;                                                                    //CPF_Parm
	INT j;                                                                    //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execInStr_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString t;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLen_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execComplementEqual_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execEqualEqual_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreaterEqual_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLessEqual_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreater_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLess_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAt_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execConcat_StrStr_Parms
{
	class FString A;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString B;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execSetRegistryKey_Parms
{
	class FString Dir;                                                        //CPF_Parm|CPF_NeedCtorLink
	class FString Key;                                                        //CPF_Parm|CPF_NeedCtorLink
	class FString Value;                                                      //CPF_Parm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGetRegistryKey_Parms
{
	class FString Dir;                                                        //CPF_Parm|CPF_NeedCtorLink
	class FString Key;                                                        //CPF_Parm|CPF_NeedCtorLink
	class FString Value;                                                      //CPF_Parm|CPF_OutParm|CPF_NeedCtorLink
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execShortestAngle2D_Parms
{
	INT iAngle1;                                                              //CPF_Parm
	INT iAngle2;                                                              //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execClockwiseFrom_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNormalize_Parms
{
	class FRotator Rot;                                                       //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execOrthoRotation_Parms
{
	class FVector X;                                                          //CPF_Parm
	class FVector Y;                                                          //CPF_Parm
	class FVector Z;                                                          //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execRotRand_Parms
{
	BITFIELD bRoll : 1;                                                       //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGetUnAxes_Parms
{
	class FRotator A;                                                         //CPF_Parm
	class FVector X;                                                          //CPF_Parm|CPF_OutParm
	class FVector Y;                                                          //CPF_Parm|CPF_OutParm
	class FVector Z;                                                          //CPF_Parm|CPF_OutParm
};
struct UObject_execGetAxes_Parms
{
	class FRotator A;                                                         //CPF_Parm
	class FVector X;                                                          //CPF_Parm|CPF_OutParm
	class FVector Y;                                                          //CPF_Parm|CPF_OutParm
	class FVector Z;                                                          //CPF_Parm|CPF_OutParm
};
struct UObject_execSubtractEqual_RotatorRotator_Parms
{
	class FRotator A;                                                         //CPF_Parm|CPF_OutParm
	class FRotator B;                                                         //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddEqual_RotatorRotator_Parms
{
	class FRotator A;                                                         //CPF_Parm|CPF_OutParm
	class FRotator B;                                                         //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtract_RotatorRotator_Parms
{
	class FRotator A;                                                         //CPF_Parm
	class FRotator B;                                                         //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAdd_RotatorRotator_Parms
{
	class FRotator A;                                                         //CPF_Parm
	class FRotator B;                                                         //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivideEqual_RotatorFloat_Parms
{
	class FRotator A;                                                         //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiplyEqual_RotatorFloat_Parms
{
	class FRotator A;                                                         //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivide_RotatorFloat_Parms
{
	class FRotator A;                                                         //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiply_FloatRotator_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	class FRotator B;                                                         //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiply_RotatorFloat_Parms
{
	class FRotator A;                                                         //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	class FRotator ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_RotatorRotator_Parms
{
	class FRotator A;                                                         //CPF_Parm
	class FRotator B;                                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execEqualEqual_RotatorRotator_Parms
{
	class FRotator A;                                                         //CPF_Parm
	class FRotator B;                                                         //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMirrorVectorByNormal_Parms
{
	class FVector Vect;                                                       //CPF_Parm
	class FVector Normal;                                                     //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execVRand_Parms
{
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execInvert_Parms
{
	class FVector X;                                                          //CPF_Parm|CPF_OutParm
	class FVector Y;                                                          //CPF_Parm|CPF_OutParm
	class FVector Z;                                                          //CPF_Parm|CPF_OutParm
};
struct UObject_execNormal_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execVSize_Parms
{
	class FVector A;                                                          //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractEqual_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm|CPF_OutParm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddEqual_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm|CPF_OutParm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivideEqual_VectorFloat_Parms
{
	class FVector A;                                                          //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiplyEqual_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm|CPF_OutParm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiplyEqual_VectorFloat_Parms
{
	class FVector A;                                                          //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execCross_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDot_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execEqualEqual_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreaterGreater_VectorRotator_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FRotator B;                                                         //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLessLess_VectorRotator_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FRotator B;                                                         //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtract_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAdd_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivide_VectorFloat_Parms
{
	class FVector A;                                                          //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiply_VectorVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiply_FloatVector_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	class FVector B;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiply_VectorFloat_Parms
{
	class FVector A;                                                          //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtract_PreVector_Parms
{
	class FVector A;                                                          //CPF_Parm
	class FVector ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSmerp_Parms
{
	FLOAT Alpha;                                                              //CPF_Parm
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLerp_Parms
{
	FLOAT Alpha;                                                              //CPF_Parm
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execFClamp_Parms
{
	FLOAT V;                                                                  //CPF_Parm
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execFMax_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execFMin_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execFRand_Parms
{
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSquare_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSqrt_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLoge_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execExp_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAtan_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execTan_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAcos_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execCos_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAsin_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSin_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAbs_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivideEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiplyEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execComplementEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execEqualEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreaterEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLessEqual_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreater_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLess_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtract_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAdd_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execPercent_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivide_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiply_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiplyMultiply_FloatFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT B;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtract_PreFloat_Parms
{
	FLOAT A;                                                                  //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execClamp_Parms
{
	INT V;                                                                    //CPF_Parm
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMax_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMin_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execRand_Parms
{
	INT Max;                                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractSubtract_Int_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddAdd_Int_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractSubtract_PreInt_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddAdd_PreInt_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractEqual_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddEqual_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivideEqual_IntFloat_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiplyEqual_IntFloat_Parms
{
	INT A;                                                                    //CPF_Parm|CPF_OutParm
	FLOAT B;                                                                  //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execOr_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execXor_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAnd_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execEqualEqual_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreaterEqual_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLessEqual_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreater_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLess_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreaterGreaterGreater_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGreaterGreater_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execLessLess_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtract_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAdd_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivide_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiply_IntInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT B;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtract_PreInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execComplement_PreInt_Parms
{
	INT A;                                                                    //CPF_Parm
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractSubtract_Byte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddAdd_Byte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractSubtract_PreByte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddAdd_PreByte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSubtractEqual_ByteByte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE B;                                                                   //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAddEqual_ByteByte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE B;                                                                   //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDivideEqual_ByteByte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE B;                                                                   //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execMultiplyEqual_ByteByte_Parms
{
	BYTE A;                                                                   //CPF_Parm|CPF_OutParm
	BYTE B;                                                                   //CPF_Parm
	BYTE ReturnValue;                                                         //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execOrOr_BoolBool_Parms
{
	BITFIELD A : 1;                                                           //CPF_Parm
	BITFIELD B : 1;                                                           //CPF_Parm|CPF_SkipParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execXorXor_BoolBool_Parms
{
	BITFIELD A : 1;                                                           //CPF_Parm
	BITFIELD B : 1;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execAndAnd_BoolBool_Parms
{
	BITFIELD A : 1;                                                           //CPF_Parm
	BITFIELD B : 1;                                                           //CPF_Parm|CPF_SkipParm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_BoolBool_Parms
{
	BITFIELD A : 1;                                                           //CPF_Parm
	BITFIELD B : 1;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execEqualEqual_BoolBool_Parms
{
	BITFIELD A : 1;                                                           //CPF_Parm
	BITFIELD B : 1;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNot_PreBool_Parms
{
	BITFIELD A : 1;                                                           //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_eventEndState_Parms
{
};
struct UObject_eventBeginState_Parms
{
};
struct UObject_execUnclock_Parms
{
	INT iCounter;                                                             //CPF_Parm
};
struct UObject_execClock_Parms
{
	INT iCounter;                                                             //CPF_Parm
};
struct UObject_execClearOuter_Parms
{
};
struct UObject_execFreePackageObjects_Parms
{
};
struct UObject_execRewindToFirstClass_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGetNextClass_Parms
{
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGetFirstPackageClass_Parms
{
	class FString Package;                                                    //CPF_Parm|CPF_NeedCtorLink
	class UClass* ObjectClass;                                                //CPF_Parm
	class UClass ReturnValue;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execRandRange_Parms
{
	FLOAT Min;                                                                //CPF_Parm
	FLOAT Max;                                                                //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execResetConfig_Parms
{
	class FString VarNameToReset;                                             //CPF_Parm|CPF_NeedCtorLink
};
struct UObject_execLoadConfig_Parms
{
	class FString FileName;                                                   //CPF_Parm|CPF_NeedCtorLink
};
struct UObject_execStaticSaveConfig_Parms
{
};
struct UObject_execSaveConfig_Parms
{
	class FString FileName;                                                   //CPF_Parm|CPF_NeedCtorLink
};
struct UObject_execFindObject_Parms
{
	class FString ObjectName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class UClass* ObjectClass;                                                //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execDynamicLoadObject_Parms
{
	class FString ObjectName;                                                 //CPF_Parm|CPF_NeedCtorLink
	class UClass* ObjectClass;                                                //CPF_Parm
	BITFIELD MayFail : 1;                                                     //CPF_Parm
	class UObject* ReturnValue;                                               //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGetEnum_Parms
{
	class UObject* E;                                                         //CPF_Parm
	INT i;                                                                    //CPF_Parm
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execSetPropertyText_Parms
{
	class FString PropName;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString PropValue;                                                  //CPF_Parm|CPF_NeedCtorLink
};
struct UObject_execGetPropertyText_Parms
{
	class FString PropName;                                                   //CPF_Parm|CPF_NeedCtorLink
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execDisable_Parms
{
	FName ProbeFunc;                                                          //CPF_Parm
};
struct UObject_execEnable_Parms
{
	FName ProbeFunc;                                                          //CPF_Parm
};
struct UObject_execIsA_Parms
{
	FName ClassName;                                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execClassIsChildOf_Parms
{
	class UClass* TestClass;                                                  //CPF_Parm
	class UClass* ParentClass;                                                //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGetStateName_Parms
{
	FName ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execIsInState_Parms
{
	FName TestState;                                                          //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execGotoState_Parms
{
	FName NewState;                                                           //CPF_Parm
	FName Label;                                                              //CPF_Parm
};
struct UObject_execLocalize_Parms
{
	class FString SectionName;                                                //CPF_Parm|CPF_NeedCtorLink
	class FString KeyName;                                                    //CPF_Parm|CPF_NeedCtorLink
	class FString PackageName;                                                //CPF_Parm|CPF_NeedCtorLink
	BITFIELD bNoDebug : 1;                                                    //CPF_Parm
	BITFIELD bMultipleToken : 1;                                              //CPF_Parm
	BITFIELD bForceEnglish : 1;                                               //CPF_Parm
	class FString ReturnValue;                                                //CPF_Parm|CPF_OutParm|CPF_ReturnParm|CPF_NeedCtorLink
};
struct UObject_execWarn_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
};
struct UObject_execLog_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FName Tag;                                                                //CPF_Parm
};
struct UObject_execLogSnd_Parms
{
	class FString S;                                                          //CPF_Parm|CPF_CoerceParm|CPF_NeedCtorLink
	FName Tag;                                                                //CPF_Parm
};
struct UObject_execInterpCurveEval_Parms
{
	class FInterpCurve curve;                                                 //CPF_Parm|CPF_NeedCtorLink
	FLOAT Input;                                                              //CPF_Parm
	FLOAT ReturnValue;                                                        //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};
struct UObject_execNotEqual_NameName_Parms
{
	FName A;                                                                  //CPF_Parm
	FName B;                                                                  //CPF_Parm
	BITFIELD ReturnValue : 1;                                                 //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UObject (Class From Unreal)
// *****************************************************************************
/*
class DLL_IMPORT UObject : public FUnknown
{
public:
	INT ObjectInternal[6];                                                    //CPF_Native
	class UObject* Outer;                                                     //CPF_Native
	INT ObjectFlags;                                                          //CPF_Native
	FName Name;                                                               //CPF_Edit|CPF_Native|CPF_EditConst
	class UClass* Class;                                                      //CPF_Native|CPF_EditConst
	INT DName;                                                                //CPF_Native
	virtual DWORD STDCALL QueryInterface(class FGuid const &, void * *);
	virtual DWORD STDCALL AddRef();
	virtual DWORD STDCALL Release();
	virtual ~UObject();
	virtual void ProcessEvent(class UFunction *, void *, void *);
	virtual void ProcessDelegate(class FName, struct FScriptDelegate *, void *, void *);
	virtual void ProcessState(FLOAT);
	virtual INT ProcessRemoteFunction(class UFunction *, void *, struct FFrame *);
	virtual void Modify();
	virtual void PostLoad();
	virtual void Destroy();
	virtual void Serialize(class FArchive &);
	virtual INT IsPendingDelete();
	virtual INT IsPendingKill();
	virtual enum EGotoState GotoState(class FName);
	virtual INT GotoLabel(class FName);
	virtual void InitExecution();
	virtual void ShutdownAfterError();
	virtual void PostEditChange();
	virtual void CallFunction(struct FFrame &, void * const, class UFunction *);
	virtual INT ScriptConsoleExec(TCHAR const *, class FOutputDevice &, class UObject *);
	virtual void Register();
	virtual void LanguageChange();
	virtual INT GetPropertiesSize();
	virtual void NetDirty(class UProperty *);
	void AddToRoot();
	static INT CDECL AttemptDelete(class UObject * &, DWORD, INT);
	static void CDECL BeginLoad();
	static void CDECL BindPackage(class UPackage *);
	void ClearFlags(DWORD);
	static void CDECL CollectGarbage(DWORD);
	INT ConditionalDestroy();
	void ConditionalPostLoad();
	void ConditionalRegister();
	void ConditionalShutdownAfterError();
	static class UPackage * CDECL CreatePackage(class UObject *, TCHAR const *);
	static void CDECL EndLoad();
	static void CDECL ExitProperties(BYTE *, class UClass *);
	static void CDECL ExportProperties(class FOutputDevice &, class UClass *, BYTE *, INT, class UClass *, BYTE *);
	class UFunction * FindFunction(class FName, INT);
	class UFunction * FindFunctionChecked(class FName, INT);
	class UField * FindObjectField(class FName, INT);
	class UState * FindState(class FName);
	class UClass * GetClass() const;
	class FName const GetFName() const;
	DWORD GetFlags() const;
	TCHAR const * GetFullName(TCHAR *) const;
	DWORD GetIndex() const;
	static class UObject * CDECL GetIndexedObject(INT);
	static INT CDECL GetInitialized();
	static TCHAR const * CDECL GetLanguage();
	class ULinkerLoad * GetLinker();
	INT GetLinkerIndex();
	TCHAR const * GetName() const;
	static INT CDECL GetObjectHash(class FName, INT);
	class UObject * GetOuter() const;
	static class ULinkerLoad * CDECL GetPackageLinker(class UObject *, TCHAR const *, DWORD, class UPackageMap *, class FGuid *);
	TCHAR const * GetPathName(class UObject *, TCHAR *) const;
	static void CDECL GetPreferences(class TArray<class FPreferencesInfo> &, TCHAR const *, INT);
	static void CDECL GetRegistryObjects(class TArray<class FRegistryObjectInfo> &, class UClass *, class UClass *, INT);
	struct FStateFrame * GetStateFrame();
	static class UPackage * CDECL GetTransientPackage();
	static void CDECL GlobalSetProperty(TCHAR const *, class UClass *, class UProperty *, INT, INT);
	void InitClassDefaultObject(class UClass *, INT);
	static void CDECL InitProperties(BYTE *, INT, class UClass *, BYTE *, INT, class UObject *, INT);
	static void CDECL InternalConstructor(void *);
	INT IsA(class UClass *) const;
	INT IsIn(class UObject *) const;
	INT IsProbing(class FName);
	static INT CDECL IsReferenced(class UObject * &, DWORD, INT);
	INT IsValid();
	void LoadConfig(INT, class UClass *, TCHAR const *);
	void LoadLocalized(INT, class UClass *);
	static class UObject * CDECL LoadPackage(class UObject *, TCHAR const *, DWORD);
	void ParseParms(TCHAR const *);
	void ProcessInternal(struct FFrame &, void * const);
	static void CDECL ProcessRegistrants();
	void RemoveFromRoot();
	void Rename(TCHAR const *, class UObject *);
	static void CDECL ResetConfig(class UClass *, TCHAR const *, INT);
	static void CDECL ResetLoaders(class UObject *, INT, INT);
	void SaveConfig(DWORD, TCHAR const *);
	static INT CDECL SavePackage(class UObject *, class UObject *, DWORD, TCHAR const *, class FOutputDevice *, class ULinkerLoad *);
	static void CDECL SerializeRootSet(class FArchive &, DWORD, DWORD);
	void SetClass(class UClass *);
	void SetFlags(DWORD);
	static void CDECL SetKey(class UClass *, TCHAR const *);
	static void CDECL SetLanguage(TCHAR const *);
	static class UObject * CDECL StaticAllocateObject(class UClass *, class UObject *, class FName, DWORD, class UObject *, class FOutputDevice *, class UObject *, INT);
	static class UClass * CDECL StaticClass();
	static TCHAR const * CDECL StaticConfigName();
	static class UObject * CDECL StaticConstructObject(class UClass *, class UObject *, class FName, DWORD, class UObject *, class FOutputDevice *, INT);
	void StaticConstructor();
	static INT CDECL StaticExec(TCHAR const *, class FOutputDevice &, INT);
	static void CDECL StaticExit();
	static class UObject * CDECL StaticFindObject(class UClass *, class UObject *, TCHAR const *, INT);
	static class UObject * CDECL StaticFindObjectChecked(class UClass *, class UObject *, TCHAR const *, INT);
	static void CDECL StaticInit();
	static class UClass * CDECL StaticLoadClass(class UClass *, class UObject *, TCHAR const *, TCHAR const *, DWORD, class UPackageMap *);
	static class UObject * CDECL StaticLoadObject(class UClass *, class UObject *, TCHAR const *, TCHAR const *, DWORD, class UPackageMap *);
	static void CDECL StaticShutdownAfterError();
	static void CDECL StaticTick();
	UObject(class UObject const &);
	UObject(enum EInPlaceConstructor, class UClass *, class UObject *, class FName, DWORD);
	UObject(enum ENativeConstructor, class UClass *, TCHAR const *, TCHAR const *, DWORD);
	UObject();
	UObject(enum EStaticConstructor, TCHAR const *, TCHAR const *, DWORD);
	static void CDECL VerifyLinker(class ULinkerLoad *);
	void eventBeginState();
	void eventEndState();
	void execAbs(struct FFrame &, void * const);
	void execAcos(struct FFrame &, void * const);
	void execAddAdd_Byte(struct FFrame &, void * const);
	void execAddAdd_Int(struct FFrame &, void * const);
	void execAddAdd_PreByte(struct FFrame &, void * const);
	void execAddAdd_PreInt(struct FFrame &, void * const);
	void execAddEqual_ByteByte(struct FFrame &, void * const);
	void execAddEqual_FloatFloat(struct FFrame &, void * const);
	void execAddEqual_IntInt(struct FFrame &, void * const);
	void execAddEqual_RotatorRotator(struct FFrame &, void * const);
	void execAddEqual_VectorVector(struct FFrame &, void * const);
	void execAdd_FloatFloat(struct FFrame &, void * const);
	void execAdd_IntInt(struct FFrame &, void * const);
	void execAdd_RotatorRotator(struct FFrame &, void * const);
	void execAdd_VectorVector(struct FFrame &, void * const);
	void execAndAnd_BoolBool(struct FFrame &, void * const);
	void execAnd_IntInt(struct FFrame &, void * const);
	void execArrayElement(struct FFrame &, void * const);
	void execAsc(struct FFrame &, void * const);
	void execAsin(struct FFrame &, void * const);
	void execAssert(struct FFrame &, void * const);
	void execAt_StringString(struct FFrame &, void * const);
	void execAtan(struct FFrame &, void * const);
	void execAtoi(struct FFrame &, void * const);
	void execBoolToByte(struct FFrame &, void * const);
	void execBoolToFloat(struct FFrame &, void * const);
	void execBoolToInt(struct FFrame &, void * const);
	void execBoolToString(struct FFrame &, void * const);
	void execBoolVariable(struct FFrame &, void * const);
	void execByteConst(struct FFrame &, void * const);
	void execByteToBool(struct FFrame &, void * const);
	void execByteToFloat(struct FFrame &, void * const);
	void execByteToInt(struct FFrame &, void * const);
	void execByteToString(struct FFrame &, void * const);
	void execCaps(struct FFrame &, void * const);
	void execCase(struct FFrame &, void * const);
	void execChr(struct FFrame &, void * const);
	void execClamp(struct FFrame &, void * const);
	void execClassContext(struct FFrame &, void * const);
	void execClassIsChildOf(struct FFrame &, void * const);
	void execClearOuter(struct FFrame &, void * const);
	void execClock(struct FFrame &, void * const);
	void execClockwiseFrom_IntInt(struct FFrame &, void * const);
	void execComplementEqual_FloatFloat(struct FFrame &, void * const);
	void execComplementEqual_StringString(struct FFrame &, void * const);
	void execComplement_PreInt(struct FFrame &, void * const);
	void execConcat_StringString(struct FFrame &, void * const);
	void execContext(struct FFrame &, void * const);
	void execCos(struct FFrame &, void * const);
	void execCross_VectorVector(struct FFrame &, void * const);
	void execDebugInfo(struct FFrame &, void * const);
	void execDefaultVariable(struct FFrame &, void * const);
	void execDelegateFunction(struct FFrame &, void * const);
	void execDelegateProperty(struct FFrame &, void * const);
	void execDisable(struct FFrame &, void * const);
	void execDivideEqual_ByteByte(struct FFrame &, void * const);
	void execDivideEqual_FloatFloat(struct FFrame &, void * const);
	void execDivideEqual_IntFloat(struct FFrame &, void * const);
	void execDivideEqual_RotatorFloat(struct FFrame &, void * const);
	void execDivideEqual_VectorFloat(struct FFrame &, void * const);
	void execDivide_FloatFloat(struct FFrame &, void * const);
	void execDivide_IntInt(struct FFrame &, void * const);
	void execDivide_RotatorFloat(struct FFrame &, void * const);
	void execDivide_VectorFloat(struct FFrame &, void * const);
	void execDot_VectorVector(struct FFrame &, void * const);
	void execDynArrayElement(struct FFrame &, void * const);
	void execDynArrayInsert(struct FFrame &, void * const);
	void execDynArrayLength(struct FFrame &, void * const);
	void execDynArrayRemove(struct FFrame &, void * const);
	void execDynamicCast(struct FFrame &, void * const);
	void execDynamicLoadObject(struct FFrame &, void * const);
	void execEatString(struct FFrame &, void * const);
	void execEnable(struct FFrame &, void * const);
	void execEndFunctionParms(struct FFrame &, void * const);
	void execEqualEqual_BoolBool(struct FFrame &, void * const);
	void execEqualEqual_FloatFloat(struct FFrame &, void * const);
	void execEqualEqual_IntInt(struct FFrame &, void * const);
	void execEqualEqual_NameName(struct FFrame &, void * const);
	void execEqualEqual_ObjectObject(struct FFrame &, void * const);
	void execEqualEqual_RotatorRotator(struct FFrame &, void * const);
	void execEqualEqual_StringString(struct FFrame &, void * const);
	void execEqualEqual_VectorVector(struct FFrame &, void * const);
	void execExp(struct FFrame &, void * const);
	void execFClamp(struct FFrame &, void * const);
	void execFMax(struct FFrame &, void * const);
	void execFMin(struct FFrame &, void * const);
	void execFRand(struct FFrame &, void * const);
	void execFalse(struct FFrame &, void * const);
	void execFinalFunction(struct FFrame &, void * const);
	void execFindObject(struct FFrame &, void * const);
	void execFloatConst(struct FFrame &, void * const);
	void execFloatToBool(struct FFrame &, void * const);
	void execFloatToByte(struct FFrame &, void * const);
	void execFloatToInt(struct FFrame &, void * const);
	void execFloatToString(struct FFrame &, void * const);
	void execFreePackageObjects(struct FFrame &, void * const);
	void execGetAxes(struct FFrame &, void * const);
	void execGetEnum(struct FFrame &, void * const);
	void execGetFirstPackageClass(struct FFrame &, void * const);
	void execGetNextClass(struct FFrame &, void * const);
	void execGetPropertyText(struct FFrame &, void * const);
	void execGetRegistryKey(struct FFrame &, void * const);
	void execGetStateName(struct FFrame &, void * const);
	void execGetUnAxes(struct FFrame &, void * const);
	void execGlobalFunction(struct FFrame &, void * const);
	void execGotoLabel(struct FFrame &, void * const);
	void execGotoState(struct FFrame &, void * const);
	void execGreaterEqual_FloatFloat(struct FFrame &, void * const);
	void execGreaterEqual_IntInt(struct FFrame &, void * const);
	void execGreaterEqual_StringString(struct FFrame &, void * const);
	void execGreaterGreaterGreater_IntInt(struct FFrame &, void * const);
	void execGreaterGreater_IntInt(struct FFrame &, void * const);
	void execGreaterGreater_VectorRotator(struct FFrame &, void * const);
	void execGreater_FloatFloat(struct FFrame &, void * const);
	void execGreater_IntInt(struct FFrame &, void * const);
	void execGreater_StringString(struct FFrame &, void * const);
	void execHighNative0(struct FFrame &, void * const);
	void execHighNative1(struct FFrame &, void * const);
	void execHighNative10(struct FFrame &, void * const);
	void execHighNative11(struct FFrame &, void * const);
	void execHighNative12(struct FFrame &, void * const);
	void execHighNative13(struct FFrame &, void * const);
	void execHighNative14(struct FFrame &, void * const);
	void execHighNative15(struct FFrame &, void * const);
	void execHighNative2(struct FFrame &, void * const);
	void execHighNative3(struct FFrame &, void * const);
	void execHighNative4(struct FFrame &, void * const);
	void execHighNative5(struct FFrame &, void * const);
	void execHighNative6(struct FFrame &, void * const);
	void execHighNative7(struct FFrame &, void * const);
	void execHighNative8(struct FFrame &, void * const);
	void execHighNative9(struct FFrame &, void * const);
	void execInStr(struct FFrame &, void * const);
	void execInstanceVariable(struct FFrame &, void * const);
	void execIntConst(struct FFrame &, void * const);
	void execIntConstByte(struct FFrame &, void * const);
	void execIntOne(struct FFrame &, void * const);
	void execIntToBool(struct FFrame &, void * const);
	void execIntToByte(struct FFrame &, void * const);
	void execIntToFloat(struct FFrame &, void * const);
	void execIntToString(struct FFrame &, void * const);
	void execIntZero(struct FFrame &, void * const);
	void execInterpCurveEval(struct FFrame &, void * const);
	void execInvert(struct FFrame &, void * const);
	void execIsA(struct FFrame &, void * const);
	void execIsInState(struct FFrame &, void * const);
	void execIterator(struct FFrame &, void * const);
	void execItoa(struct FFrame &, void * const);
	void execJump(struct FFrame &, void * const);
	void execJumpIfNot(struct FFrame &, void * const);
	void execLeft(struct FFrame &, void * const);
	void execLen(struct FFrame &, void * const);
	void execLerp(struct FFrame &, void * const);
	void execLessEqual_FloatFloat(struct FFrame &, void * const);
	void execLessEqual_IntInt(struct FFrame &, void * const);
	void execLessEqual_StringString(struct FFrame &, void * const);
	void execLessLess_IntInt(struct FFrame &, void * const);
	void execLessLess_VectorRotator(struct FFrame &, void * const);
	void execLess_FloatFloat(struct FFrame &, void * const);
	void execLess_IntInt(struct FFrame &, void * const);
	void execLess_StringString(struct FFrame &, void * const);
	void execLet(struct FFrame &, void * const);
	void execLetBool(struct FFrame &, void * const);
	void execLetDelegate(struct FFrame &, void * const);
	void execLoadConfig(struct FFrame &, void * const);
	void execLocalVariable(struct FFrame &, void * const);
	void execLocalize(struct FFrame &, void * const);
	void execLog(struct FFrame &, void * const);
	void execLogSnd(struct FFrame &, void * const);
	void execLoge(struct FFrame &, void * const);
	void execMax(struct FFrame &, void * const);
	void execMetaCast(struct FFrame &, void * const);
	void execMid(struct FFrame &, void * const);
	void execMin(struct FFrame &, void * const);
	void execMirrorVectorByNormal(struct FFrame &, void * const);
	void execMultiplyEqual_ByteByte(struct FFrame &, void * const);
	void execMultiplyEqual_FloatFloat(struct FFrame &, void * const);
	void execMultiplyEqual_IntFloat(struct FFrame &, void * const);
	void execMultiplyEqual_RotatorFloat(struct FFrame &, void * const);
	void execMultiplyEqual_VectorFloat(struct FFrame &, void * const);
	void execMultiplyEqual_VectorVector(struct FFrame &, void * const);
	void execMultiplyMultiply_FloatFloat(struct FFrame &, void * const);
	void execMultiply_FloatFloat(struct FFrame &, void * const);
	void execMultiply_FloatRotator(struct FFrame &, void * const);
	void execMultiply_FloatVector(struct FFrame &, void * const);
	void execMultiply_IntInt(struct FFrame &, void * const);
	void execMultiply_RotatorFloat(struct FFrame &, void * const);
	void execMultiply_VectorFloat(struct FFrame &, void * const);
	void execMultiply_VectorVector(struct FFrame &, void * const);
	void execNameConst(struct FFrame &, void * const);
	void execNameToBool(struct FFrame &, void * const);
	void execNameToString(struct FFrame &, void * const);
	void execNativeParm(struct FFrame &, void * const);
	void execNew(struct FFrame &, void * const);
	void execNoObject(struct FFrame &, void * const);
	void execNormal(struct FFrame &, void * const);
	void execNormalize(struct FFrame &, void * const);
	void execNotEqual_BoolBool(struct FFrame &, void * const);
	void execNotEqual_FloatFloat(struct FFrame &, void * const);
	void execNotEqual_IntInt(struct FFrame &, void * const);
	void execNotEqual_NameName(struct FFrame &, void * const);
	void execNotEqual_ObjectObject(struct FFrame &, void * const);
	void execNotEqual_RotatorRotator(struct FFrame &, void * const);
	void execNotEqual_StringString(struct FFrame &, void * const);
	void execNotEqual_VectorVector(struct FFrame &, void * const);
	void execNot_PreBool(struct FFrame &, void * const);
	void execNothing(struct FFrame &, void * const);
	void execObjectConst(struct FFrame &, void * const);
	void execObjectToBool(struct FFrame &, void * const);
	void execObjectToString(struct FFrame &, void * const);
	void execOrOr_BoolBool(struct FFrame &, void * const);
	void execOr_IntInt(struct FFrame &, void * const);
	void execOrthoRotation(struct FFrame &, void * const);
	void execPercent_FloatFloat(struct FFrame &, void * const);
	void execPrimitiveCast(struct FFrame &, void * const);
	void execRand(struct FFrame &, void * const);
	void execRemoveInvalidChars(struct FFrame &, void * const);
	void execResetConfig(struct FFrame &, void * const);
	void execRewindToFirstClass(struct FFrame &, void * const);
	void execRight(struct FFrame &, void * const);
	void execRotRand(struct FFrame &, void * const);
	void execRotationConst(struct FFrame &, void * const);
	void execRotatorToBool(struct FFrame &, void * const);
	void execRotatorToString(struct FFrame &, void * const);
	void execRotatorToVector(struct FFrame &, void * const);
	void execSaveConfig(struct FFrame &, void * const);
	void execSelf(struct FFrame &, void * const);
	void execSetPropertyText(struct FFrame &, void * const);
	void execSetRegistryKey(struct FFrame &, void * const);
	void execShortestAngle2D(struct FFrame &, void * const);
	void execSin(struct FFrame &, void * const);
	void execSmerp(struct FFrame &, void * const);
	void execSqrt(struct FFrame &, void * const);
	void execSquare(struct FFrame &, void * const);
	void execStaticSaveConfig(struct FFrame &, void * const);
	void execStop(struct FFrame &, void * const);
	void execStringConst(struct FFrame &, void * const);
	void execStringToBool(struct FFrame &, void * const);
	void execStringToByte(struct FFrame &, void * const);
	void execStringToFloat(struct FFrame &, void * const);
	void execStringToInt(struct FFrame &, void * const);
	void execStringToRotator(struct FFrame &, void * const);
	void execStringToVector(struct FFrame &, void * const);
	void execStrnicmp(struct FFrame &, void * const);
	void execStructCmpEq(struct FFrame &, void * const);
	void execStructCmpNe(struct FFrame &, void * const);
	void execStructMember(struct FFrame &, void * const);
	void execSubtractEqual_ByteByte(struct FFrame &, void * const);
	void execSubtractEqual_FloatFloat(struct FFrame &, void * const);
	void execSubtractEqual_IntInt(struct FFrame &, void * const);
	void execSubtractEqual_RotatorRotator(struct FFrame &, void * const);
	void execSubtractEqual_VectorVector(struct FFrame &, void * const);
	void execSubtractSubtract_Byte(struct FFrame &, void * const);
	void execSubtractSubtract_Int(struct FFrame &, void * const);
	void execSubtractSubtract_PreByte(struct FFrame &, void * const);
	void execSubtractSubtract_PreInt(struct FFrame &, void * const);
	void execSubtract_FloatFloat(struct FFrame &, void * const);
	void execSubtract_IntInt(struct FFrame &, void * const);
	void execSubtract_PreFloat(struct FFrame &, void * const);
	void execSubtract_PreInt(struct FFrame &, void * const);
	void execSubtract_PreVector(struct FFrame &, void * const);
	void execSubtract_RotatorRotator(struct FFrame &, void * const);
	void execSubtract_VectorVector(struct FFrame &, void * const);
	void execSwitch(struct FFrame &, void * const);
	void execTan(struct FFrame &, void * const);
	void execTrue(struct FFrame &, void * const);
	void execUnclock(struct FFrame &, void * const);
	void execUndefined(struct FFrame &, void * const);
	void execUnicodeStringConst(struct FFrame &, void * const);
	void execVRand(struct FFrame &, void * const);
	void execVSize(struct FFrame &, void * const);
	void execVectorConst(struct FFrame &, void * const);
	void execVectorToBool(struct FFrame &, void * const);
	void execVectorToRotator(struct FFrame &, void * const);
	void execVectorToString(struct FFrame &, void * const);
	void execVirtualFunction(struct FFrame &, void * const);
	void execWarn(struct FFrame &, void * const);
	void execXorXor_BoolBool(struct FFrame &, void * const);
	void execXor_IntInt(struct FFrame &, void * const);
	static void CDECL operator delete(void *, unsigned int);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UObject & operator=(class UObject const &);
private:
	void AddObject(INT);
	static void CDECL CacheDrivers(INT);
	static class UObject * GAutoRegister();
	static INT GImportCount();
	static TCHAR * GLanguage();
	static class TArray<int> GObjAvailable();
	static INT GObjBeginLoadCount();
	static TCHAR * GObjCachedLanguage();
	static class TArray<class FRegistryObjectInfo> GObjDrivers();
	static class UObject * * GObjHash();
	static INT GObjInitialized();
	static class TArray<class UObject *> GObjLoaded();
	static class TArray<class UObject *> GObjLoaders();
	static INT GObjNoRegister();
	static class TArray<class UObject *> GObjObjects();
	static class TMultiMap<class FName,class FName> * GObjPackageRemap();
	static class TArray<class FPreferencesInfo> GObjPreferences();
	static INT GObjRegisterCount();
	static class TArray<class UObject *> GObjRegistrants();
	static class TArray<class UObject *> GObjRoot();
	static class UPackage * GObjTransientPkg();
	static class ULinkerLoad * CDECL GetLoader(INT);
	void HashObject();
	static class FName CDECL MakeUniqueObjectName(class UObject *, class UClass *);
	static class UClass PrivateStaticClass();
	static void CDECL PurgeGarbage();
	static INT CDECL ResolveName(class UObject * &, TCHAR const * &, INT, INT);
	static void CDECL SafeLoadError(DWORD, TCHAR const *, TCHAR const *, ...);
	void SetLinker(class ULinkerLoad *, INT);
	void UnhashObject(INT);
};
*/
// *****************************************************************************
// UField (Class From Unreal)
// *****************************************************************************
/*
class DLL_IMPORT UField : public UObject
{
public:
	virtual ~UField();
	virtual void PostLoad();
	virtual void Serialize(class FArchive &);
	virtual void Register();
	virtual INT GetPropertiesSize();
	virtual void AddCppProperty(class UProperty *);
	virtual INT MergeBools();
	virtual void Bind();
	virtual class UClass * GetOwnerClass();
	static class UClass * CDECL StaticClass();
	UField(class UField const &);
	UField(class UField *);
	UField(enum ENativeConstructor, class UClass *, TCHAR const *, TCHAR const *, DWORD, class UField *);
	UField(enum EStaticConstructor, TCHAR const *, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UField & operator=(class UField const &);
protected:
	UField();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UProperty : public UField
{
public:
	virtual ~UProperty();
	virtual void Serialize(class FArchive &);
	virtual void CleanupDestroyed(BYTE *) const;
	virtual void Link(class FArchive &, class UProperty *);
	virtual void ExportCpp(class FOutputDevice &, INT, INT, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual INT ExportText(INT, TCHAR *, BYTE *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	virtual void DestroyValue(void *) const;
	virtual INT Port() const;
	virtual BYTE GetID() const;
	class UField * GetOuterUField() const;
	INT GetSize() const;
	INT Matches(void const *, void const *, INT) const;
	INT ShouldSerializeValue(class FArchive &) const;
	static class UClass * CDECL StaticClass();
	UProperty(class UProperty const &);
	UProperty();
	UProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UProperty & operator=(class UProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UStruct (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UStruct : public UField
{
public:
	virtual ~UStruct();
	virtual void PostLoad();
	virtual void Destroy();
	virtual void Serialize(class FArchive &);
	virtual void Register();
	virtual INT GetPropertiesSize();
	virtual void AddCppProperty(class UProperty *);
	virtual class UStruct * GetInheritanceSuper();
	class UStruct * GetSuperStruct() const;
	virtual void Link(class FArchive &, INT);
	virtual void SerializeBin(class FArchive &, BYTE *, INT);
	virtual void SerializeTaggedProperties(class FArchive &, BYTE *, class UClass *);
	virtual void CleanupDestroyed(BYTE *);
	virtual enum EExprToken SerializeExpr(INT &, class FArchive &);
	virtual TCHAR * GetNameCPP();
	DWORD GetScriptTextCRC();
	static void CDECL InternalConstructor(void *);
	INT IsChildOf(class UStruct const *) const;
	void SetPropertiesSize(INT);
	static class UClass * CDECL StaticClass();
	INT StructCompare(void const *, void const *);
	UStruct(class UStruct const &);
	UStruct(enum ENativeConstructor, INT, TCHAR const *, TCHAR const *, DWORD, class UStruct *);
	UStruct(enum EStaticConstructor, INT, TCHAR const *, TCHAR const *, DWORD);
	UStruct(class UStruct *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UStruct & operator=(class UStruct const &);
protected:
	UStruct();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// USubsystem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT USubsystem : public UObject
{
public:
	INT ExecVtbl;                                                             //CPF_Native
	virtual ~USubsystem();
	virtual void Tick(FLOAT);
	static class UClass * CDECL StaticClass();
	USubsystem(class USubsystem const &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class USubsystem & operator=(class USubsystem const &);
protected:
	USubsystem();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UObjectProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UObjectProperty : public UProperty
{
public:
	virtual ~UObjectProperty();
	virtual void Serialize(class FArchive &);
	virtual void CleanupDestroyed(BYTE *) const;
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UObjectProperty(class UObjectProperty const &);
	UObjectProperty();
	UObjectProperty(enum ECppProperty, INT, TCHAR const *, DWORD, class UClass *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UObjectProperty & operator=(class UObjectProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UFactory (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UFactory : public UObject
{
public:
	class FString Description;                                                //CPF_NeedCtorLink
	class FString InContextCommand;                                           //CPF_NeedCtorLink
	class FString OutOfContextCommand;                                        //CPF_NeedCtorLink
	TArray<class FString> Formats;                                            //CPF_NeedCtorLink
	virtual ~UFactory();
	virtual void Serialize(class FArchive &);
	virtual class UObject * FactoryCreateText(class ULevel *, class UClass *, class UObject *, class FName, DWORD, class UObject *, TCHAR const *, TCHAR const * &, TCHAR const *, class FFeedbackContext *);
	virtual class UObject * FactoryCreateBinary(class UClass *, class UObject *, class FName, DWORD, class UObject *, TCHAR const *, BYTE const * &, BYTE const *, class FFeedbackContext *);
	virtual class UObject * FactoryCreateNew(class UClass *, class UObject *, class FName, DWORD, class UObject *, class FFeedbackContext *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	static class UObject * CDECL StaticImportObject(class ULevel *, class UClass *, class UObject *, class FName, DWORD, TCHAR const *, class UObject *, class UFactory *, TCHAR const *, class FFeedbackContext *);
	UFactory(class UFactory const &);
	UFactory();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UFactory & operator=(class UFactory const &);
private:
	static class UClass PrivateStaticClass();
};
*/
// *****************************************************************************
// ULinker (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ULinker : public UObject
{
public:
	virtual ~ULinker();
	virtual void Serialize(class FArchive &);
	class FString GetExportFullName(INT, TCHAR const *);
	class FString GetImportFullName(INT);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	ULinker(class ULinker const &);
	ULinker(class UObject *, TCHAR const *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class ULinker & operator=(class ULinker const &);
protected:
	ULinker();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UState (Class From Unreal)
// *****************************************************************************
/*
class DLL_IMPORT UState : public UStruct
{
public:
	virtual ~UState();
	virtual void Destroy();
	virtual void Serialize(class FArchive &);
	virtual INT MergeBools();
	virtual class UStruct * GetInheritanceSuper();
	class UState * GetSuperState() const;
	virtual void Link(class FArchive &, INT);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UState(class UState const &);
	UState(class UState *);
	UState(enum ENativeConstructor, INT, TCHAR const *, TCHAR const *, DWORD, class UState *);
	UState(enum EStaticConstructor, INT, TCHAR const *, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UState & operator=(class UState const &);
protected:
	UState();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UExporter (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UExporter : public UObject
{
public:
	TArray<class FString> Formats;                                            //CPF_NeedCtorLink
	virtual ~UExporter();
	virtual void Serialize(class FArchive &);
	virtual INT ExportBinary(class UObject *, TCHAR const *, class FArchive &, class FFeedbackContext *);
	virtual INT ExportText(class UObject *, TCHAR const *, class FOutputDevice &, class FFeedbackContext *);
	static void CDECL ExportToArchive(class UObject *, class UExporter *, class FArchive &, TCHAR const *);
	static INT CDECL ExportToFile(class UObject *, class UExporter *, TCHAR const *, INT, INT);
	static void CDECL ExportToOutputDevice(class UObject *, class UExporter *, class FOutputDevice &, TCHAR const *, INT);
	static class UExporter * CDECL FindExporter(class UObject *, TCHAR const *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	UExporter(class UExporter const &);
	UExporter();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UExporter & operator=(class UExporter const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UPackageMap (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UPackageMap : public UObject
{
public:
	virtual ~UPackageMap();
	virtual void Destroy();
	virtual void Serialize(class FArchive &);
	virtual INT CanSerializeObject(class UObject *);
	virtual INT SerializeObject(class FArchive &, class UClass *, class UObject * &);
	virtual INT SerializeName(class FArchive &, class FName &);
	virtual INT ObjectToIndex(class UObject *);
	virtual class UObject * IndexToObject(INT, INT);
	virtual INT AddLinker(class ULinkerLoad *);
	virtual void Compute();
	virtual INT GetMaxObjectIndex();
	virtual class FClassNetCache * GetClassNetCache(class UClass *);
	virtual INT SupportsPackage(class UObject *);
	void Copy(class UPackageMap *);
	void CopyLinkers(class UPackageMap *);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UPackageMap(class UPackageMap const &);
	UPackageMap();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UPackageMap & operator=(class UPackageMap const &);
private:
	static class UClass PrivateStaticClass();
};
struct UCommandlet_eventMain_Parms
{
	class FString Parms;                                                      //CPF_Parm|CPF_NeedCtorLink
	INT ReturnValue;                                                          //CPF_Parm|CPF_OutParm|CPF_ReturnParm
};

// *****************************************************************************
// UCommandlet (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UCommandlet : public UObject
{
public:
	class FString HelpCmd;                                                    //CPF_Localized|CPF_NeedCtorLink
	class FString HelpOneLiner;                                               //CPF_Localized|CPF_NeedCtorLink
	class FString HelpUsage;                                                  //CPF_Localized|CPF_NeedCtorLink
	class FString HelpWebLink;                                                //CPF_Localized|CPF_NeedCtorLink
	class FString HelpParm[16];                                               //CPF_Localized|CPF_NeedCtorLink
	class FString HelpDesc[16];                                               //CPF_Localized|CPF_NeedCtorLink
	BITFIELD LogToStdout : 1;                                                 //0
	BITFIELD IsServer : 1;                                                    //0
	BITFIELD IsClient : 1;                                                    //0
	BITFIELD IsEditor : 1;                                                    //0
	BITFIELD LazyLoad : 1;                                                    //0
	BITFIELD ShowErrorCount : 1;                                              //0
	BITFIELD ShowBanner : 1;                                                  //0
	virtual ~UCommandlet();
	virtual INT Main(TCHAR const *);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UCommandlet(class UCommandlet const &);
	UCommandlet();
	INT eventMain(class FString const &);
	void execMain(struct FFrame &, void * const);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UCommandlet & operator=(class UCommandlet const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// USystem (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT USystem : public USubsystem
{
public:
	INT PurgeCacheDays;                                                       //CPF_Config
	class FString SavePath;                                                   //CPF_Config|CPF_NeedCtorLink
	class FString CachePath;                                                  //CPF_Config|CPF_NeedCtorLink
	class FString CacheExt;                                                   //CPF_Config|CPF_NeedCtorLink
	char Unknown5[0x000c];
	TArray<class FString> Paths;                                              //CPF_Config|CPF_NeedCtorLink
	TArray<FName> Suppress;                                                   //CPF_Config|CPF_NeedCtorLink
	virtual INT Exec(TCHAR const *, class FOutputDevice &);
	virtual ~USystem();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	USystem(class USystem const &);
	USystem();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class USystem & operator=(class USystem const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UStructProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UStructProperty : public UProperty
{
public:
	virtual ~UStructProperty();
	virtual void Serialize(class FArchive &);
	virtual void CleanupDestroyed(BYTE *) const;
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void DestroyValue(void *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UStructProperty(class UStructProperty const &);
	UStructProperty(enum ECppProperty, INT, TCHAR const *, DWORD, class UStruct *);
	UStructProperty();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UStructProperty & operator=(class UStructProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UMapProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UMapProperty : public UProperty
{
public:
	virtual ~UMapProperty();
	virtual void Serialize(class FArchive &);
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void DestroyValue(void *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UMapProperty(class UMapProperty const &);
	UMapProperty();
	UMapProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UMapProperty & operator=(class UMapProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UArrayProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UArrayProperty : public UProperty
{
public:
	virtual ~UArrayProperty();
	virtual void Serialize(class FArchive &);
	virtual void AddCppProperty(class UProperty *);
	virtual void CleanupDestroyed(BYTE *) const;
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	virtual void DestroyValue(void *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UArrayProperty(class UArrayProperty const &);
	UArrayProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	UArrayProperty();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UArrayProperty & operator=(class UArrayProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UFixedArrayProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UFixedArrayProperty : public UProperty
{
public:
	virtual ~UFixedArrayProperty();
	virtual void Serialize(class FArchive &);
	virtual void CleanupDestroyed(BYTE *) const;
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void DestroyValue(void *) const;
	void AddCppProperty(class UProperty *, INT);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UFixedArrayProperty(class UFixedArrayProperty const &);
	UFixedArrayProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	UFixedArrayProperty();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UFixedArrayProperty & operator=(class UFixedArrayProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UStrProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UStrProperty : public UProperty
{
public:
	virtual ~UStrProperty();
	virtual void Serialize(class FArchive &);
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void DestroyValue(void *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UStrProperty(class UStrProperty const &);
	UStrProperty();
	UStrProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UStrProperty & operator=(class UStrProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UNameProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UNameProperty : public UProperty
{
public:
	virtual ~UNameProperty();
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UNameProperty(class UNameProperty const &);
	UNameProperty();
	UNameProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UNameProperty & operator=(class UNameProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UClassProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UClassProperty : public UObjectProperty
{
public:
	virtual ~UClassProperty();
	virtual void Serialize(class FArchive &);
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual BYTE GetID() const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UClassProperty(class UClassProperty const &);
	UClassProperty(enum ECppProperty, INT, TCHAR const *, DWORD, class UClass *);
	UClassProperty();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UClassProperty & operator=(class UClassProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UFloatProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UFloatProperty : public UProperty
{
public:
	virtual ~UFloatProperty();
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UFloatProperty(class UFloatProperty const &);
	UFloatProperty();
	UFloatProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UFloatProperty & operator=(class UFloatProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UBoolProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UBoolProperty : public UProperty
{
public:
	virtual ~UBoolProperty();
	virtual void Serialize(class FArchive &);
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UBoolProperty(class UBoolProperty const &);
	UBoolProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	UBoolProperty();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UBoolProperty & operator=(class UBoolProperty const &);
private:
	static class UClass PrivateStaticClass();
};
*/
// *****************************************************************************
// UDelegateProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UDelegateProperty : public UProperty
{
public:
	virtual ~UDelegateProperty();
	virtual void Serialize(class FArchive &);
	virtual void CleanupDestroyed(BYTE *) const;
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UDelegateProperty(class UDelegateProperty const &);
	UDelegateProperty();
	UDelegateProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UDelegateProperty & operator=(class UDelegateProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UIntProperty (Class From Unreal)
// *****************************************************************************
/*
class DLL_IMPORT UIntProperty : public UProperty
{
public:
	virtual ~UIntProperty();
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UIntProperty(class UIntProperty const &);
	UIntProperty();
	UIntProperty(enum ECppProperty, INT, TCHAR const *, DWORD);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UIntProperty & operator=(class UIntProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UByteProperty (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UByteProperty : public UProperty
{
public:
	virtual ~UByteProperty();
	virtual void Serialize(class FArchive &);
	virtual void Link(class FArchive &, class UProperty *);
	virtual INT Identical(void const *, void const *) const;
	virtual void ExportCppItem(class FOutputDevice &, INT) const;
	virtual void SerializeItem(class FArchive &, void *, INT) const;
	virtual INT NetSerializeItem(class FArchive &, class UPackageMap *, void *) const;
	virtual void ExportTextItem(TCHAR *, BYTE *, BYTE *, INT) const;
	virtual TCHAR const * ImportText(TCHAR const *, BYTE *, INT) const;
	virtual void CopySingleValue(void *, void *, class UObject *) const;
	virtual void CopyCompleteValue(void *, void *, class UObject *) const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UByteProperty(class UByteProperty const &);
	UByteProperty(enum ECppProperty, INT, TCHAR const *, DWORD, class UEnum *);
	UByteProperty();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UByteProperty & operator=(class UByteProperty const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// ULanguage (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ULanguage : public UObject
{
public:
	virtual ~ULanguage();
	static class UClass * CDECL StaticClass();
	ULanguage(class ULanguage const &);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class ULanguage & operator=(class ULanguage const &);
protected:
	ULanguage();
private:
	static class UClass PrivateStaticClass();
};
*/
// *****************************************************************************
// UTextBufferFactory (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UTextBufferFactory : public UFactory
{
public:
	virtual ~UTextBufferFactory();
	virtual class UObject * FactoryCreateText(class ULevel *, class UClass *, class UObject *, class FName, DWORD, class UObject *, TCHAR const *, TCHAR const * &, TCHAR const *, class FFeedbackContext *);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	UTextBufferFactory(class UTextBufferFactory const &);
	UTextBufferFactory();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UTextBufferFactory & operator=(class UTextBufferFactory const &);
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UPackage (Class From Unreal)
// *****************************************************************************
/*
class DLL_IMPORT UPackage : public UObject
{
public:
	virtual ~UPackage();
	virtual void Destroy();
	virtual void Serialize(class FArchive &);
	void * GetDllExport(TCHAR const *, INT);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UPackage(class UPackage const &);
	UPackage();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UPackage & operator=(class UPackage const &);
private:
	static class UClass PrivateStaticClass();
};
*/
// *****************************************************************************
// ULinkerSave (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ULinkerSave : public ULinker
{
};

// *****************************************************************************
// ULinkerLoad (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT ULinkerLoad : public ULinker
{
};

// *****************************************************************************
// UEnum (Class From Unreal)
// *****************************************************************************
/*
class DLL_IMPORT UEnum : public UField
{
public:
	virtual ~UEnum();
	virtual void Serialize(class FArchive &);
	class UStruct * GetOuterUStruct() const;
	class UEnum * GetSuperEnum() const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UEnum(class UEnum const &);
	UEnum(class UEnum *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UEnum & operator=(class UEnum const &);
protected:
	UEnum();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UTextBuffer (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UTextBuffer : public UObject
{
public:
	virtual void Serialize(TCHAR const *, enum EName);
	virtual ~UTextBuffer();
	virtual void Serialize(class FArchive &);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UTextBuffer(class UTextBuffer const &);
	UTextBuffer(TCHAR const *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UTextBuffer & operator=(class UTextBuffer const &);
private:
	static class UClass PrivateStaticClass();
};
*/
// *****************************************************************************
// UConst (Class From Unreal)
// *****************************************************************************
/*
class DLL_IMPORT UConst : public UField
{
public:
	virtual ~UConst();
	virtual void Serialize(class FArchive &);
	class UStruct * GetOuterUStruct() const;
	class UConst * GetSuperConst() const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UConst(class UConst const &);
	UConst(class UConst *, TCHAR const *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UConst & operator=(class UConst const &);
protected:
	UConst();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UFunction (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UFunction : public UStruct
{
public:
	virtual ~UFunction();
	virtual void PostLoad();
	virtual void Serialize(class FArchive &);
	virtual class UStruct * GetInheritanceSuper();
	virtual INT MergeBools();
	virtual void Bind();
	virtual void Link(class FArchive &, INT);
	class UFunction * GetSuperFunction() const;
	class UState * GetOuterUState() const;
	class UProperty * GetReturnProperty();
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UFunction(class UFunction const &);
	UFunction(class UFunction *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UFunction & operator=(class UFunction const &);
protected:
	UFunction();
private:
	static class UClass PrivateStaticClass();
};

// *****************************************************************************
// UClass (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UClass : public UState
{
public:
	virtual ~UClass();
	virtual void PostLoad();
	virtual void Destroy();
	virtual void Serialize(class FArchive &);
	virtual void Register();
	virtual INT MergeBools();
	virtual void Bind();
	virtual class UStruct * GetInheritanceSuper();
	class UClass * GetSuperClass() const;
	virtual void Link(class FArchive &, INT);
	virtual TCHAR * GetNameCPP();
	void AddDependency(class UClass *, INT);
	class AActor * GetDefaultActor();
	class UObject * GetDefaultObject();
	class UPackage * GetOuterUPackage() const;
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	UClass(class UClass const &);
	UClass(enum EStaticConstructor, DWORD, DWORD, class FGuid, TCHAR const *, TCHAR const *, TCHAR const *, DWORD, void (CDECL*)(void *), void ( UObject::*)(void));
	UClass();
	UClass(enum ENativeConstructor, DWORD, DWORD, class UClass *, class UClass *, class FGuid, TCHAR const *, TCHAR const *, TCHAR const *, DWORD, void (CDECL*)(void *), void ( UObject::*)(void));
	UClass(class UClass *);
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UClass & operator=(class UClass const &);
private:
	INT IsA(class UClass *) const;
	static class UClass PrivateStaticClass();
};
*/
// *****************************************************************************
// UObjectExporterT3D (Class From Unreal)
// *****************************************************************************
class DLL_IMPORT UObjectExporterT3D : public UExporter
{
public:
	virtual ~UObjectExporterT3D();
	virtual INT ExportText(class UObject *, TCHAR const *, class FOutputDevice &, class FFeedbackContext *);
	static void CDECL InternalConstructor(void *);
	static class UClass * CDECL StaticClass();
	void StaticConstructor();
	UObjectExporterT3D(class UObjectExporterT3D const &);
	UObjectExporterT3D();
	static void * CDECL operator new(unsigned int, class UObject *, class FName, DWORD);
	static void * CDECL operator new(unsigned int, enum EInternal *);
	class UObjectExporterT3D & operator=(class UObjectExporterT3D const &);
private:
	static class UClass PrivateStaticClass();
};

// =============================================================================
// FArchive (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FArchive
{
public:
	virtual void CountBytes(DWORD, DWORD);
	virtual void Serialize(void *, INT);
	virtual void SerializeBits(void *, INT);
	virtual void SerializeInt(DWORD &, DWORD);
	virtual ~FArchive();
	virtual void AttachLazyLoader(class FLazyLoader *);
	virtual void DetachLazyLoader(class FLazyLoader *);
	virtual void Precache(INT);
	virtual void Preload(class UObject *);
	virtual void Seek(INT);
	virtual class FArchive & operator<<(class UObject * &);
	virtual class FArchive & operator<<(class FName &);
	virtual INT MapName(class FName *);
	virtual INT MapObject(class UObject *);
	virtual INT Tell();
	virtual INT TotalSize();
	virtual INT AtEnd();
	virtual INT AtStopper();
	virtual void SetStopper(INT);
	virtual void Flush();
	virtual INT Close();
	virtual INT GetError();
	INT IsError();
	class FArchive & ByteOrderSerialize(void *, INT);
	FArchive(class FArchive const &);
	FArchive();
	INT ForClient();
	INT ForEdit();
	INT ForServer();
	INT IsCriticalError();
	INT IsLoading();
	INT IsNet();
	INT IsPersistent();
	INT IsSaving();
	INT IsTrans();
	INT LicenseeVer();
	INT NetVer();
	INT Ver();
	class FArchive & operator=(class FArchive const &);
};
*/
// =============================================================================
// FArchiveCountMem (Class From DLL)
// =============================================================================
class DLL_IMPORT FArchiveCountMem
{
public:
	virtual ~FArchiveCountMem();
	virtual void CountBytes(DWORD, DWORD);
	FArchiveCountMem(class FArchiveCountMem const &);
	FArchiveCountMem(class UObject *);
	DWORD GetMax();
	DWORD GetNum();
	class FArchiveCountMem & operator=(class FArchiveCountMem const &);
};

// =============================================================================
// FArchiveDummySave (Class From DLL)
// =============================================================================
class DLL_IMPORT FArchiveDummySave
{
public:
	virtual ~FArchiveDummySave();
	FArchiveDummySave(class FArchiveDummySave const &);
	FArchiveDummySave();
	class FArchiveDummySave & operator=(class FArchiveDummySave const &);
};

// =============================================================================
// FArray (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FArray
{
public:
	~FArray();
	INT Add(INT, INT);
	INT AddZeroed(INT, INT);
	void CountBytes(class FArchive &, INT);
	void Empty(INT, INT);
	FArray(enum ENoInit);
	FArray();
	void * GetData();
	void const * GetData() const;
	void Insert(INT, INT, INT);
	void InsertZeroed(INT, INT, INT);
	INT IsValidIndex(INT) const;
	INT Num() const;
	void Remove(INT, INT, INT);
	void Shrink(INT);
	class FArray & operator=(class FArray const &);
protected:
	FArray(INT, INT);
	void Realloc(INT);
};

// =============================================================================
// FBitReader (Class From DLL)
// =============================================================================
struct DLL_IMPORT FBitReader
{
public:
	virtual void Serialize(void *, INT);
	virtual void SerializeBits(void *, INT);
	virtual void SerializeInt(DWORD &, DWORD);
	virtual ~FBitReader();
	virtual INT AtEnd();
	FBitReader(struct FBitReader const &);
	FBitReader(BYTE *, INT);
	BYTE * GetData();
	INT GetNumBits();
	INT GetNumBytes();
	INT GetPosBits();
	BYTE ReadBit();
	DWORD ReadInt(DWORD);
	void SetData(struct FBitReader &, INT);
	void SetOverflowed();
	struct FBitReader & operator=(struct FBitReader const &);
};

// =============================================================================
// FBitWriter (Class From DLL)
// =============================================================================
struct DLL_IMPORT FBitWriter
{
public:
	virtual void Serialize(void *, INT);
	virtual void SerializeBits(void *, INT);
	virtual void SerializeInt(DWORD &, DWORD);
	virtual ~FBitWriter();
	FBitWriter(struct FBitWriter const &);
	FBitWriter(INT);
	BYTE * GetData();
	INT GetNumBits();
	INT GetNumBytes();
	void SetOverflowed();
	void WriteBit(BYTE);
	void WriteInt(DWORD, DWORD);
	struct FBitWriter & operator=(struct FBitWriter const &);
};

// =============================================================================
// FBitWriterMark (Class From DLL)
// =============================================================================
struct DLL_IMPORT FBitWriterMark
{
public:
	FBitWriterMark(struct FBitWriter &);
	FBitWriterMark();
	INT GetNumBits();
	void Pop(struct FBitWriter &);
	struct FBitWriterMark & operator=(struct FBitWriterMark const &);
};

// =============================================================================
// FBufferReader (Class From DLL)
// =============================================================================
class DLL_IMPORT FBufferReader
{
public:
	virtual void Serialize(void *, INT);
	virtual ~FBufferReader();
	virtual INT Tell();
	virtual INT TotalSize();
	virtual INT AtEnd();
	virtual void Seek(INT);
	FBufferReader(class TArray<unsigned char> const &);
	FBufferReader(class FBufferReader const &);
};

// =============================================================================
// FClassNetCache (Class From DLL)
// =============================================================================
class DLL_IMPORT FClassNetCache
{
public:
	~FClassNetCache();
	FClassNetCache(class FClassNetCache const &);
	FClassNetCache(class UClass *);
	FClassNetCache();
	class FFieldNetCache * GetFromField(class UObject *);
	class FFieldNetCache * GetFromIndex(INT);
	INT GetMaxIndex();
	INT GetRepConditionCount();
	class FClassNetCache & operator=(class FClassNetCache const &);
};

// =============================================================================
// FCompactIndex (Class From DLL)
// =============================================================================
class DLL_IMPORT FCompactIndex
{
public:
	class FCompactIndex & operator=(class FCompactIndex const &);
};
*/
// =============================================================================
// FCylinder (Class From DLL)
// =============================================================================
class DLL_IMPORT FCylinder
{
public:
	FCylinder();
	INT LineCheck(class FVector const &, class FVector const &, class FVector &) const;
	INT LineIntersection(class FVector const &, class FVector const &, FLOAT * const) const;
	class FCylinder & operator=(class FCylinder const &);
};

// =============================================================================
// FDependency (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FDependency
{
public:
	FDependency(class UClass *, INT);
	FDependency();
	INT IsUpToDate();
	class FDependency & operator=(class FDependency const &);
};
*/
// =============================================================================
// FEdLoadError (Class From DLL)
// =============================================================================
class DLL_IMPORT FEdLoadError
{
public:
	~FEdLoadError();
	FEdLoadError(class FEdLoadError const &);
	FEdLoadError(INT, TCHAR *);
	FEdLoadError();
	class FEdLoadError & operator=(class FEdLoadError);
	INT operator==(class FEdLoadError const &) const;
};

// =============================================================================
// FEdge (Class From DLL)
// =============================================================================
class DLL_IMPORT FEdge
{
public:
	FEdge(class FVector, class FVector);
	FEdge();
	class FEdge & operator=(class FEdge const &);
	INT operator==(class FEdge const &) const;
};

// =============================================================================
// FErrorOutError (Class From DLL)
// =============================================================================
class DLL_IMPORT FErrorOutError
{
public:
	virtual void Serialize(TCHAR const *, enum EName);
	virtual void HandleError();
	FErrorOutError(class FErrorOutError const &);
	FErrorOutError();
	class FErrorOutError & operator=(class FErrorOutError const &);
};

// =============================================================================
// FExec (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FExec
{
public:
	FExec(class FExec const &);
	FExec();
	class FExec & operator=(class FExec const &);
};

// =============================================================================
// FFeedbackContext (Class From DLL)
// =============================================================================
class DLL_IMPORT FFeedbackContext
{
public:
	virtual void MapCheck_Clear();
	virtual void MapCheck_Hide();
	virtual void MapCheck_Show();
	virtual void MapCheck_ShowConditionally();
	virtual void MapCheck_Add(INT, void *, TCHAR const *);
	class FFeedbackContext & operator=(class FFeedbackContext const &);
	FFeedbackContext(class FFeedbackContext const &);
	FFeedbackContext();
};

// =============================================================================
// FFieldNetCache (Class From DLL)
// =============================================================================
class DLL_IMPORT FFieldNetCache
{
public:
	FFieldNetCache(class UField *, INT, INT);
	FFieldNetCache();
	class FFieldNetCache & operator=(class FFieldNetCache const &);
};

// =============================================================================
// FFileManager (Class From DLL)
// =============================================================================
class DLL_IMPORT FFileManager
{
public:
	virtual void Init(INT);
	class FFileManager & operator=(class FFileManager const &);
	FFileManager(class FFileManager const &);
	FFileManager();
};
*/
// =============================================================================
// FFileStream (Class From DLL)
// =============================================================================
class DLL_IMPORT FFileStream
{
private:
	~FFileStream();
public:
	INT Create(INT, TCHAR const *);
	INT CreateStream(TCHAR const *, INT, INT, void *, enum EFileStreamType, void *);
	INT Destroy(INT);
	static void CDECL Destroy();
	void DestroyStream(INT, INT);
	static INT Destroyed();
	void Enter(INT);
	static class FFileStream * CDECL Init(INT);
	static class FFileStream * Instance();
	void Leave(INT);
	static INT MaxStreams();
	INT QueryStream(INT, INT &);
	INT Read(INT, INT);
	void RequestChunks(INT, INT, void *);
	static INT StreamIndex();
	static struct FStream * Streams();
	class FFileStream & operator=(class FFileStream const &);
private:
	FFileStream();
};

// =============================================================================
// FFrame (Class From DLL)
// =============================================================================
/*
struct DLL_IMPORT FFrame
{
public:
	virtual void Serialize(TCHAR const *, enum EName);
	FFrame(struct FFrame const &);
	FFrame(class UObject *);
	FFrame(class UObject *, class UStruct *, INT, void *);
	FLOAT ReadFloat();
	INT ReadInt();
	class FName ReadName();
	class UObject * ReadObject();
	INT ReadWord();
	void Step(class UObject *, void * const);
	struct FFrame & operator=(struct FFrame const &);
};
*/
// =============================================================================
// FGlobalMath (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FGlobalMath
{
public:
	FLOAT CosFloat(FLOAT);
	FLOAT CosTab(INT);
	FGlobalMath();
	FLOAT SinFloat(FLOAT);
	FLOAT SinTab(INT);
	FLOAT Sqrt(INT);
};

// =============================================================================
// FLabelEntry (Class From DLL)
// =============================================================================
struct DLL_IMPORT FLabelEntry
{
public:
	FLabelEntry(class FName, INT);
	struct FLabelEntry & operator=(struct FLabelEntry const &);
};
*/
// =============================================================================
// FLogOutError (Class From DLL)
// =============================================================================
class DLL_IMPORT FLogOutError
{
public:
	virtual void Serialize(TCHAR const *, enum EName);
	FLogOutError(class FLogOutError const &);
	FLogOutError();
	class FLogOutError & operator=(class FLogOutError const &);
};

// =============================================================================
// FMalloc (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FMalloc
{
public:
	virtual INT GetMemoryBlockSize(void *);
	FMalloc(class FMalloc const &);
	FMalloc();
	class FMalloc & operator=(class FMalloc const &);
};

// =============================================================================
// FMemCache (Class From DLL)
// =============================================================================
class DLL_IMPORT FMemCache
{
public:
	void CheckState();
	BYTE * Create(QWORD, class FMemCache::FCacheItem * &, INT, INT, INT);
	INT Exec(TCHAR const *, class FOutputDevice &);
	void Exit(INT);
	FMemCache();
	class FMemCache::FCacheItem * First();
	void Flush(QWORD, DWORD, INT);
	DWORD GHash(DWORD);
	BYTE * Get(QWORD, class FMemCache::FCacheItem * &, INT);
	INT GetTime();
	void Init(INT, INT, void *, INT);
	class FMemCache::FCacheItem * Last();
	class FMemCache::FCacheItem * Next(class FMemCache::FCacheItem *);
	void Status(TCHAR *);
	void Tick();
	class FMemCache & operator=(class FMemCache const &);
private:
	void ConditionalCheckState();
	void CreateNewFreeSpace(BYTE *, BYTE *, class FMemCache::FCacheItem *, class FMemCache::FCacheItem *, INT);
	class FMemCache::FCacheItem * FlushItem(class FMemCache::FCacheItem *, INT);
	class FMemCache::FCacheItem * MergeWithNext(class FMemCache::FCacheItem *);
	void Unhash(QWORD);
};

// =============================================================================
// FMemCache::FCacheItem (Class From DLL)
// =============================================================================
struct DLL_IMPORT FMemCache::FCacheItem
{
public:
	INT GetCost();
	BYTE * GetData();
	BYTE GetExtra();
	QWORD GetId();
	INT GetSize();
	TCHAR GetTime();
	void SetExtra(BYTE);
	void Unlock();
	class FMemCache::FCacheItem & operator=(class FMemCache::FCacheItem const &);
};

// =============================================================================
// FMemMark (Class From DLL)
// =============================================================================
class DLL_IMPORT FMemMark
{
public:
	FMemMark(class FMemStack &);
	FMemMark();
	void Pop();
	class FMemMark & operator=(class FMemMark const &);
};

// =============================================================================
// FMemStack (Class From DLL)
// =============================================================================
class DLL_IMPORT FMemStack
{
public:
	void Exit();
	INT GetByteCount();
	void Init(INT);
	BYTE * PushBytes(INT, INT);
	void Tick();
	class FMemStack & operator=(class FMemStack const &);
private:
	BYTE * AllocateNewChunk(INT);
	void FreeChunks(struct FMemStack::FTaggedMemory *);
	static struct FMemStack::FTaggedMemory * UnusedChunks();
};

// =============================================================================
// FModelCoords (Class From DLL)
// =============================================================================
class DLL_IMPORT FModelCoords
{
public:
	FModelCoords(class FCoords const &, class FCoords const &);
	FModelCoords();
	class FModelCoords Inverse();
	class FModelCoords & operator=(class FModelCoords const &);
};

// =============================================================================
// FName (Class From DLL)
// =============================================================================
class DLL_IMPORT FName
{
public:
	void ClearFlags(DWORD) const;
	static void CDECL DeleteEntry(INT);
	static void CDECL DisplayHash(class FOutputDevice &);
	FName(TCHAR const *, enum EFindName);
	FName();
	FName(enum EName);
	static struct FNameEntry * CDECL GetEntry(INT);
	DWORD GetFlags() const;
	INT GetIndex() const;
	static INT CDECL GetInitialized();
	static INT CDECL GetMaxNames();
	static void CDECL Hardcode(struct FNameEntry *);
	INT IsValid();
	static TCHAR const * CDECL SafeString(enum EName);
	static INT CDECL SafeSuppressed(enum EName);
	void SetFlags(DWORD) const;
	static void CDECL StaticExit();
	static void CDECL StaticInit();
	INT operator!=(class FName const &) const;
	TCHAR const * operator*() const;
	class FName & operator=(class FName const &);
	INT operator==(class FName const &) const;
private:
	static class TArray<int> Available();
	static INT Initialized();
	static struct FNameEntry * * NameHash();
	static class TArray<struct FNameEntry *> Names();
};

// =============================================================================
// FNotifyHook (Class From DLL)
// =============================================================================
class DLL_IMPORT FNotifyHook
{
public:
	virtual void NotifyDestroy(void *);
	virtual void NotifyPostChange(void *);
	virtual void NotifyPreChange(void *);
	virtual void NotifyExec(void *, TCHAR const *);
	FNotifyHook(class FNotifyHook const &);
	FNotifyHook();
	class FNotifyHook & operator=(class FNotifyHook const &);
};
*/
// =============================================================================
// FNullOutError (Class From DLL)
// =============================================================================
class DLL_IMPORT FNullOutError
{
public:
	virtual void Serialize(TCHAR const *, enum EName);
	FNullOutError(class FNullOutError const &);
	FNullOutError();
	class FNullOutError & operator=(class FNullOutError const &);
};

// =============================================================================
// FObjectExport (Class From DLL)
// =============================================================================
struct DLL_IMPORT FObjectExport
{
public:
	FObjectExport(class UObject *);
	FObjectExport();
	class FArchive & Serialize(class FArchive &);
	struct FObjectExport & operator=(struct FObjectExport const &);
};

// =============================================================================
// FObjectImport (Class From DLL)
// =============================================================================
struct DLL_IMPORT FObjectImport
{
public:
	FObjectImport(class UObject *);
	FObjectImport();
	class FArchive & Serialize(class FArchive &);
	struct FObjectImport & operator=(struct FObjectImport const &);
};

// =============================================================================
// FOutputDevice (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FOutputDevice
{
public:
	FOutputDevice(class FOutputDevice const &);
	FOutputDevice();
	void Log(class FString const &);
	void Log(enum EName, class FString const &);
	void Log(enum EName, TCHAR const *);
	void Log(TCHAR const *);
	void CDECL Logf(TCHAR const *, ...);
	void CDECL Logf(enum EName, TCHAR const *, ...);
	class FOutputDevice & operator=(class FOutputDevice const &);
};

// =============================================================================
// FOutputDeviceError (Class From DLL)
// =============================================================================
class DLL_IMPORT FOutputDeviceError
{
public:
	FOutputDeviceError(class FOutputDeviceError const &);
	FOutputDeviceError();
	class FOutputDeviceError & operator=(class FOutputDeviceError const &);
};

// =============================================================================
// FPackageInfo (Class From DLL)
// =============================================================================
class DLL_IMPORT FPackageInfo
{
public:
	~FPackageInfo();
	FPackageInfo(class FPackageInfo const &);
	FPackageInfo(class ULinkerLoad *);
	class FPackageInfo & operator=(class FPackageInfo const &);
};
*/
// =============================================================================
// FPosition (Class From DLL)
// =============================================================================
class DLL_IMPORT FPosition
{
public:
	FPosition(class FVector, class FCoords);
	FPosition();
	class FPosition & operator=(class FPosition const &);
};

// =============================================================================
// FPreferencesInfo (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FPreferencesInfo
{
public:
	~FPreferencesInfo();
	FPreferencesInfo(class FPreferencesInfo const &);
	FPreferencesInfo();
	class FPreferencesInfo & operator=(class FPreferencesInfo const &);
};

// =============================================================================
// FQuat (Class From DLL)
// =============================================================================
class DLL_IMPORT FQuat
{
public:
	class FQuat AngAxisToFQuat();
	FQuat(FLOAT, FLOAT, FLOAT, FLOAT);
	FQuat();
	class FQuat FQuatToAngAxis();
	INT Normalize();
	INT operator!=(class FQuat const &) const;
	class FQuat operator*(FLOAT const &) const;
	class FQuat operator*(class FQuat const &) const;
	class FQuat operator+(class FQuat const &) const;
	class FQuat operator-(class FQuat const &) const;
	class FQuat operator-() const;
	class FQuat & operator=(class FQuat const &);
};

// =============================================================================
// FRainbowPtr (Class From DLL)
// =============================================================================
struct DLL_IMPORT FRainbowPtr
{
public:
	FRainbowPtr(void *);
	FRainbowPtr();
	union FRainbowPtr & operator=(union FRainbowPtr const &);
};

// =============================================================================
// FRegistryObjectInfo (Class From DLL)
// =============================================================================
class DLL_IMPORT FRegistryObjectInfo
{
public:
	~FRegistryObjectInfo();
	FRegistryObjectInfo(class FRegistryObjectInfo const &);
	FRegistryObjectInfo();
	class FRegistryObjectInfo & operator=(class FRegistryObjectInfo const &);
};

// =============================================================================
// FScriptDelegate (Class From DLL)
// =============================================================================
struct DLL_IMPORT FScriptDelegate
{
public:
	FScriptDelegate();
	struct FScriptDelegate & operator=(struct FScriptDelegate const &);
};

// =============================================================================
// FSphere (Class From DLL)
// =============================================================================
class DLL_IMPORT FSphere
{
public:
	FSphere(class FSphere const &);
	FSphere(INT);
	FSphere(class FVector const *, INT);
	FSphere();
	FSphere(class FVector, FLOAT);
	class FSphere TransformBy(class FMatrix const &) const;
	class FSphere & operator=(class FSphere const &);
};

// =============================================================================
// FStateFrame (Class From DLL)
// =============================================================================
struct DLL_IMPORT FStateFrame
{
public:
	TCHAR const * Describe();
	FStateFrame(struct FStateFrame const &);
	FStateFrame(class UObject *);
	struct FStateFrame & operator=(struct FStateFrame const &);
};

// =============================================================================
// FString (Class From DLL)
// =============================================================================
class DLL_IMPORT FString
{
public:
	~FString();
	class FString Caps() const;
	static class FString CDECL Chr(TCHAR);
	void Empty();
	FString(class FString const &);
	FString(BYTE, INT);
	FString(INT, INT);
	FString(TCHAR, INT);
	FString(SWORD, INT);
	FString(SBYTE, INT);
	FString(DWORD, INT);
	FString();
	FString(enum ENoInit);
	FString(TCHAR const *);
	FString(DOUBLE, INT, INT, INT);
	FString(FLOAT, INT, INT, INT);
	static class FString CDECL FormatAsNumber(INT);
	class TArray<unsigned short> & GetCharArray();
	INT InStr(class FString const &, INT) const;
	INT InStr(TCHAR const *, INT) const;
	class FString Left(INT) const;
	class FString LeftChop(INT) const;
	class FString LeftPad(INT);
	INT Len() const;
	class FString Locs() const;
	class FString Mid(INT, INT) const;
	INT ParseIntoArray(TCHAR const *, class TArray<class FString> *);
	static class FString CDECL Printf(TCHAR const *, ...);
	class FString Reverse();
	class FString Right(INT) const;
	class FString RightPad(INT);
	void Shrink();
	INT Split(class FString const &, class FString *, class FString *, INT) const;
	operator int() const;
	INT operator!=(class FString const &) const;
	INT operator!=(TCHAR const *) const;
	class FString operator*(class FString const &) const;
	TCHAR const * operator*() const;
	class FString operator*(TCHAR const *) const;
	class FString & operator*=(class FString const &);
	class FString & operator*=(TCHAR const *);
	class FString operator+(class FString const &);
	class FString operator+(TCHAR const *);
	class FString & operator+=(class FString const &);
	class FString & operator+=(TCHAR const *);
	INT operator<(TCHAR const *) const;
	INT operator<=(TCHAR const *) const;
	class FString & operator=(class FString const &);
	class FString & operator=(TCHAR const *);
	INT operator==(class FString const &) const;
	INT operator==(TCHAR const *) const;
	INT operator>(TCHAR const *) const;
	INT operator>=(TCHAR const *) const;
private:
	FString(INT, TCHAR const *);
};

// =============================================================================
// FStringNoInit (Class From DLL)
// =============================================================================
struct DLL_IMPORT FStringNoInit
{
public:
	~FStringNoInit();
	FStringNoInit(struct FStringNoInit const &);
	FStringNoInit();
	struct FStringNoInit & operator=(struct FStringNoInit const &);
	struct FStringNoInit & operator=(class FString const &);
	struct FStringNoInit & operator=(TCHAR const *);
};
*/
// =============================================================================
// FThrowOut (Class From DLL)
// =============================================================================
class DLL_IMPORT FThrowOut
{
public:
	virtual void Serialize(TCHAR const *, enum EName);
	FThrowOut(class FThrowOut const &);
	FThrowOut();
	class FThrowOut & operator=(class FThrowOut const &);
};

// =============================================================================
// FTransactionBase (Class From DLL)
// =============================================================================
/*
class DLL_IMPORT FTransactionBase
{
public:
	FTransactionBase(class FTransactionBase const &);
	FTransactionBase();
	class FTransactionBase & operator=(class FTransactionBase const &);
};

// =============================================================================
// FUnknown (Class From DLL)
// =============================================================================
class DLL_IMPORT FUnknown
{
public:
	virtual DWORD STDCALL QueryInterface(class FGuid const &, void * *);
	virtual DWORD STDCALL AddRef();
	virtual DWORD STDCALL Release();
	FUnknown(class FUnknown const &);
	FUnknown();
	class FUnknown & operator=(class FUnknown const &);
};

// =============================================================================
// FVertexHit (Class From DLL)
// =============================================================================
class DLL_IMPORT FVertexHit
{
public:
	FVertexHit(class ABrush *, INT, INT);
	FVertexHit();
	INT operator!=(class FVertexHit const &) const;
	class FVertexHit & operator=(class FVertexHit const &);
	INT operator==(class FVertexHit const &) const;
};

// =============================================================================
// TArray<unsigned short> (Class From DLL)
// =============================================================================
struct DLL_IMPORT TArray<unsigned short>
{
public:
	~TArray<unsigned short>();
	INT Add(INT);
	INT AddItem(TCHAR const &);
	INT AddUniqueItem(TCHAR const &);
	INT AddZeroed(INT);
	void CountBytes(class FArchive &);
	void Empty(INT);
	INT FindItem(TCHAR const &, INT &) const;
	INT FindItemIndex(TCHAR const &) const;
	void Insert(INT, INT);
	void InsertZeroed(INT, INT);
	TCHAR & Last(INT);
	TCHAR const & Last(INT) const;
	TCHAR Pop();
	void Remove(INT, INT);
	INT RemoveItem(TCHAR const &);
	void Shrink();
	TArray<unsigned short>(class TArray<unsigned short> const &);
	TArray<unsigned short>(INT);
	TArray<unsigned short>(enum ENoInit);
	TArray<unsigned short>();
	class TArray<unsigned short> & operator+(class TArray<unsigned short> const &);
	class TArray<unsigned short> & operator+=(class TArray<unsigned short> const &);
	class TArray<unsigned short> & operator=(class TArray<unsigned short> const &);
	TCHAR & operatorint)();
	TCHAR const & operatorint)() const;
};
*/
#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
