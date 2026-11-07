/**
 * @file types.h
 *
 * @brief Common types used across the codebase.
 */
#ifndef TYPES_H
#define TYPES_H

#include <stddef.h>
#include <eetypes.h>

#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif

typedef unsigned char uchar;
typedef unsigned char u_byte;
typedef unsigned char ubyte;
typedef long unsigned int ulong;
typedef signed char int8;
typedef short int int16;
typedef int int32;
typedef long int int64;
typedef unsigned char uint8;
typedef short unsigned int uint16;
typedef unsigned int uint32;
typedef long unsigned int uint64;
typedef char BYTE;
typedef unsigned char UBYTE;
typedef long unsigned int ULONG;
typedef short unsigned int USHORT;

typedef int16 NormalCoord;
typedef uint8 G2AnimSegmentID;
typedef uint32 G2TimerAtomicUnit;
typedef int G2Bool;

struct _NodeType;
typedef struct _NodeType NodeType;

struct Vector4f;
struct Matrixf;
struct CVECTOR;
struct _PlaneConstants;
struct SoundInstance;
struct _Position;
struct _Face;
struct _TFace;
struct _HSphere;
struct _HBox;
struct _HFace;
struct _HMarker;
struct _HPrim;
struct _HModel;
struct _Intro;
struct Object;
struct _Terrain;
struct _G2Anim_Type;
struct _G2AnimSection_Type;
struct _Instance;

typedef struct _MultiSpline MultiSpline;
typedef struct _Model Model;
typedef struct _Model _Model;
typedef struct _G2AnimKeylist_Type _G2AnimKeylist_Type;
typedef struct _G2AnimFxHeader_Type _G2AnimFxHeader_Type;
typedef struct _G2AnimFxHeader G2AnimFxHeader;
typedef struct ObjectEffect ObjectEffect;
typedef struct _GenericFXObject _GenericFXObject;
typedef struct _VramLink _VramLink;
typedef struct TVertex TVertex;
typedef struct TVertexRGB TVertexRGB;
typedef struct MorphVertex MorphVertex;
typedef struct MorphColor MorphColor;
typedef struct BSPTree BSPTree;
typedef struct MultiSignal MultiSignal;
typedef struct TerrainAnimTexture TerrainAnimTexture;
typedef struct _G2AnimChanStatusBlock_Type _G2AnimChanStatusBlock_Type;
typedef struct _G2AnimInterpInfo_Type _G2AnimInterpInfo_Type;
typedef void (*G2AnimCallback)(void);

struct _NodeType {
    NodeType *prev;
    NodeType *next;
};

typedef struct Vector4f {
    float x;
    float y;
    float z;
    float w;
} Vector4f;

typedef float Matrixf[4][4];

typedef struct CVECTOR {
    uint8 r;
    uint8 g;
    uint8 b;
    uint8 a;
} CVECTOR;

typedef struct _PlaneConstants {
    NormalCoord a;
    NormalCoord b;
    NormalCoord c;
    int16 flags;
    int32 d;
} PlaneConstants;

typedef struct SoundInstance {
    uint8 channel;
    uint8 state;
    uint8 delay;
} SoundInstance;

typedef struct _Position {
    int16 x;
    int16 y;
    int16 z;
} Position;

struct _Face {
    uint16 v0;
    uint16 v1;
    uint16 v2;
};
typedef struct _Face Face;

struct _TFace {
    Face face;
    uint16 normal;
    uint8 attr;
    int8 sortPush;
    uint16 texattr;
};
typedef struct _TFace TFace;

struct _HSphere {
    int32 attr;
    uint8 id;
    uint8 rank;
    int16 pad;
    Position position;
    uint16 radius;
    uint32 radiusSquared;
};
typedef struct _HSphere HSphere;

struct _HBox {
    int16 flags;
    uint8 id;
    uint8 rank;
    int16 minX;
    int16 minY;
    int16 minZ;
    int16 maxX;
    int16 maxY;
    int16 maxZ;
    int16 refMinX;
    int16 refMinY;
    int16 refMinZ;
    int16 refMaxX;
    int16 refMaxY;
    int16 refMaxZ;
};
typedef struct _HBox HBox;

struct _HFace {
    uint16 v0;
    uint16 v1;
    uint16 v2;
    uint16 normal;
    uint16 attr;
    uint16 ni0;
};
typedef struct _HFace HFace;

struct _HMarker {
    int32 segment;
    int32 index;
    float px;
    float py;
    float pz;
    float rx;
    float ry;
    float rz;
};
typedef struct _HMarker HMarker;

struct _HPrim {
    uint8 hpFlags;
    uint8 withFlags;
    uint8 type;
    uint8 segment;
    union {
        HSphere *hsphere;
        HBox *hbox;
        HFace *hface;
        HMarker *hmarker;
    } data;
};
typedef struct _HPrim HPrim;

struct _HModel {
    HPrim *hPrimList;
    int32 numHPrims;
    HMarker *dynamicHMarkerList;
    int32 numDynamicHMarkers;
};
typedef struct _HModel HModel;

struct _Intro {
    char name[16];
    Vector4f rotation;
    Vector4f position;
    Vector4f spectralPosition;
    int32 intronum;
    int32 UniqueID;
    float maxRad;
    float maxRadSq;
    int32 introFlags;
    void *data;
    MultiSpline *multiSpline;
    int16 lightGroup;
    int16 spectralLightGroup;
};
typedef struct _Intro Intro;

typedef struct Object {
    int32 oflags;
    int16 id;
    int16 sfxFileHandle;
    int16 numModels;
    int16 numAnims;
    Model **modelList;
    _G2AnimKeylist_Type **animList;
    _G2AnimFxHeader_Type **animFXList;
    int16 introDist;
    int16 vvIntroDist;
    uint16 removeDist;
    uint16 vvRemoveDist;
    void *data;
    char *script;
    char *name;
    uint8 *soundData;
    int32 oflags2;
    int16 sectionA;
    int16 sectionB;
    int16 sectionC;
    int16 numberOfEffects;
    ObjectEffect *effectList;
    _GenericFXObject *effectData;
    uint32 *relocList;
    void *relocModule;
    _VramLink *textureLoadList;
    char *childObjectList;
    uint16 lod1Dist;
    uint16 lod2Dist;
    int16 lod1Model;
    int16 lod2Model;
} Object;

struct _Terrain {
    int16 UnitChangeFlags;
    int16 spad;
    int32 numIntros;
    Intro *introList;
    int32 numVertices;
    int32 numFaces;
    int32 numNormals;
    TVertex *vertexList;
    TFace *faceList;
    TVertexRGB *vertexRGBList;
    int16 *normalList;
    int numStreamUnitPortals;
    void *streamUnitPortals;
    MorphVertex *MorphDiffList;
    MorphColor *MorphColorList;
    int32 numBSPTrees;
    BSPTree *BSPTreeArray;
    int16 *morphNormalIdx;
    MultiSignal *signals;
    TerrainAnimTexture *terrainAnimTextures;
    void *Occluders;
};
typedef struct _Terrain Terrain;

struct _G2AnimSection_Type {
    uint8 flags;
    uint8 sectionID;
    G2AnimSegmentID firstSeg;
    G2AnimSegmentID segCount;
    G2TimerAtomicUnit elapsedTime;
    G2TimerAtomicUnit storedTime;
    G2TimerAtomicUnit loopStartTime;
    G2TimerAtomicUnit loopEndTime;
    G2TimerAtomicUnit *swAlarmTable;
    float speedAdjustment;
    uint16 keylistID;
    uint32 alarmFlags;
    G2AnimCallback callback;
    void *callbackData;
    G2AnimFxHeader *fxList;
    _G2AnimKeylist_Type *keylist;
    _G2AnimChanStatusBlock_Type *chanStatusBlockList;
    _G2AnimInterpInfo_Type *interpInfo;
};
typedef struct _G2AnimSection_Type G2AnimSection;

struct _G2Anim_Type {
    Vector4f rootTrans;
    uint8 sectionCount;
    uint8 masterSection;
    uint16 controllerList;
    uint16 disabledControllerList;
    uint16 flags;
    _Model *modelData;
    Matrixf *segMatrices;
    G2AnimSection section[3];
};
typedef struct _G2Anim_Type G2Anim;

typedef void ProcessFunc(void);
typedef void CollideFunc(void);
typedef uint32 QueryFunc(void);
typedef void MessageFunc(void);
typedef G2Bool (*G2InstanceRebuildCallback)(void);
typedef void (*StateHandler)(void);

struct _Instance {
    NodeType node;
    struct _Instance *next;
    struct _Instance *prev;
    Vector4f position;
    Vector4f oldPos;
    Vector4f initialPos;
    Vector4f rotation;
    Vector4f oldRotation;
    Vector4f scale;
    Vector4f shadowPosition;
    Matrixf relativeMatrix;
    Vector4f wNormal;
    Vector4f offset;
    Vector4f splitPoint;
    Vector4f vel;
    Vector4f accl;
    Vector4f maxVel;
    int32 instanceID;
    int32 iflags;
    int32 iflags2;
    Object *object;
    Intro *intro;
    void *data;
    void *introData;
    struct _Instance *parent;
    int32 introNum;
    int32 birthStreamUnitID;
    int32 currentStreamUnitID;
    int32 introUniqueID;
    Matrixf *matrix;
    Matrixf *oldMatrix;
    Matrixf *matrixPool[2];
    int curMatrixPool;
    uint32 maxCheckDistance;
    uint32 checkMask;
    float lightGroupInterpValue;
    float lightGroupInterpSpeed;
    uint32 lightGroupStreamId;
    uint32 spectralLightGroupStreamId;
    uint32 oldLightGroupStreamId;
    uint32 oldSpectralLightGroupStreamId;
    uint8 oldLightGroup;
    uint8 oldSpectralLightGroup;
    uint8 lightGroup;
    uint8 spectralLightGroup;
    uint16 currentTextureAnimFrame;
    uint16 reflectFlag;
    uint16 vvRemoveDist;
    uint16 removeDist;
    int32 attachedID;
    int32 attachedSegment;
    SoundInstance soundInstanceTbl[4];
    TFace *tface;
    TFace *oldTFace;
    void *tfaceLevel;
    void *collideInfo;
    int32 bspTree;
    int32 cachedTFace;
    int32 cachedBSPTree;
    void *cachedTFaceLevel;
    HModel *hModelList;
    int16 fadeValue;
    int16 lightMatrix;
    ProcessFunc *processFunc;
    CollideFunc *collideFunc;
    CollideFunc *additionalCollideFunc;
    QueryFunc *queryFunc;
    MessageFunc *messageFunc;
    int32 currentModel;
    TFace *waterFace;
    TFace *oldWaterFace;
    Terrain *waterFaceTerrain;
    PlaneConstants halvePlane;
    struct _Instance *LinkParent;
    struct _Instance *LinkChild;
    struct _Instance *LinkSibling;
    int32 ParentLinkNode;
    int32 linkMarkerIndex;
    void *InstanceState;
    char introName[12];
    void *extraData;
    int16 constrictAngle;
    int16 petrifyValue;
    int32 currentMainState;
    int32 work0;
    int32 work1;
    int32 work2;
    int32 work3;
    int32 work4;
    int32 work5;
    G2InstanceRebuildCallback rebuildCallback;
    int16 splineFlags;
    int16 targetFrame;
    int16 clipBeg;
    int16 clipEnd;
    int32 light_color;
    CVECTOR *perVertexColor;
    uint32 noDrawGroups;
    uint32 fxNoDrawGroups;
    int32 startFadeTime;
    int16 fadeFrames;
    int16 fadeDuration;
    int16 startFade;
    int16 targetFade;
    int16 diffFade;
    G2Anim anim;
    struct _Instance *noCollideInstance;
    int32 distance_to_camera_sq;
    uint8 shadowRed;
    uint8 shadowGreen;
    uint8 shadowBlue;
};
typedef struct _Instance Instance;

struct _PCollideInfo { 
	Vector4f worldNormal;
	int32 type;
	int32 segment;
	void *prim;
	struct _Instance *inst;
	Vector4f *newPoint;
	Vector4f *oldPoint;
	int32 collideType;
	struct _Instance *instance;
};
typedef struct _PCollideInfo PCollideInfo;

struct __Event { 
	int ID;
	int Data;
};
typedef struct __Event Message;

struct __MessageQueue { 
	int Head;
	int Tail;
	Message Queue[16];
};
typedef struct __MessageQueue MessageQueue;

typedef struct { 
	int16 anim0;
	int16 anim1;
	int16 anim2;
	int16 frames;
	uint8 mode;
	uint8 alpha;
	uint16 frame;
} VAnim;

typedef Message* (*messageHandler)(void);

struct __State { 
	void (*Process)(void);
	messageHandler stateMessageHandler;
	messageHandler sectionMessageHandler;
	MessageQueue Event;
	MessageQueue Defer;
	int Data1;
	int Data2;
	int vanimIndex;
	VAnim *vanim;
};
typedef struct __State State;

struct __CharacterState { 
	Instance *CharacterInstance;
	int TotalSections;
	State SectionList[3];
};
typedef struct __CharacterState CharacterState;

#endif // TYPES_H
