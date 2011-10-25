/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class EAGLContext, NSMutableDictionary, NSString, MRShader, MRImage, MRImageManager;
@protocol MZMediaManagement;

@interface MRContext : NSObject {
	MRContext *mBaseContext;	// 4 = 0x4
	EAGLContext *mGLContext;	// 8 = 0x8
	CGSize mPixelSize;	// 12 = 0xc
	int mVRAM;	// 20 = 0x14
	float mFieldOfViewFactor;	// 24 = 0x18
	float mProjectionMatrix[16];	// 28 = 0x1c
	id<MZMediaManagement> mAssetManager;	// 92 = 0x5c
	MRImageManager *mImageManager;	// 96 = 0x60
	BOOL mIsLocalContext;	// 100 = 0x64
	BOOL mIsFlipped;	// 101 = 0x65
	BOOL mBlendingIsEnabled;	// 102 = 0x66
	int mBlendingType;	// 104 = 0x68
	BOOL mCullingIsEnabled;	// 108 = 0x6c
	BOOL mCullFrontfacing;	// 109 = 0x6d
	BOOL mDepthTestIsEnabled;	// 110 = 0x6e
	BOOL mIsUsingIntelGPU;	// 111 = 0x6f
	BOOL mIsUsingIntelGMA950;	// 112 = 0x70
	BOOL mPrefersSharedVRAM;	// 113 = 0x71
	BOOL mSupportsFragmentShaders;	// 114 = 0x72
	float mModelViewMatrix[16];	// 116 = 0x74
	float mTextureMatrix[4][16];	// 180 = 0xb4
	float mNormal[3];	// 436 = 0x1b4
	int mScissorRect[4];	// 448 = 0x1c0
	const float *mVertex2DPointer;	// 464 = 0x1d0
	const float *mVertex3DPointer;	// 468 = 0x1d4
	const float *mColorsPointer;	// 472 = 0x1d8
	const float *mNormalsPointer;	// 476 = 0x1dc
	float *mTextureCoordinatesPointer[4];	// 480 = 0x1e0
	const float *mInSpriteCoordinatesPointer;	// 496 = 0x1f0
	BOOL mVertexArrayIsEnabled;	// 500 = 0x1f4
	BOOL mForeColorArrayIsEnabled;	// 501 = 0x1f5
	BOOL mNormalArrayIsEnabled;	// 502 = 0x1f6
	BOOL mTextureCoordinatesArrayIsEnabled[4];	// 503 = 0x1f7
	BOOL mInSpriteCoordinatesArrayIsEnabled;	// 507 = 0x1fb
	NSMutableDictionary *mVertexAttributes;	// 508 = 0x1fc
	float mLocalAspectRatio;	// 512 = 0x200
	float mForeColor[4];	// 516 = 0x204
	float mBackColor[4];	// 532 = 0x214
	NSString *mShaderID;	// 548 = 0x224
	MRShader *mCurrentShader;	// 552 = 0x228
	MRImage *mTextureUnitImages[4];	// 556 = 0x22c
	int mTextureUnitUsedForFragmentCoordinates;	// 572 = 0x23c
	NSMutableDictionary *mTemporaryUniforms;	// 576 = 0x240
	MRImage *mBlackImage;	// 580 = 0x244
}
@property(readonly, assign) float aspectRatio;	// G=0x342fec3d; 
@property(retain) id<MZMediaManagement> assetManager;	// G=0x34301951; S=0x34301965; @synthesize=mAssetManager
@property(readonly, assign) const float *backColor;	// G=0x342ff925; 
@property(readonly, assign) MRContext *baseContext;	// G=0x34301941; @synthesize=mBaseContext
@property(readonly, assign) CGColorSpaceRef colorSpace;	// G=0x342fec59; 
@property(readonly, assign) const float *foreColor;	// G=0x342ff4a5; 
@property(readonly, assign) BOOL foreColorIsOpaqueWhite;	// G=0x342ff4b5; 
@property(readonly, assign) EAGLContext *glContext;	// G=0x34301a25; @synthesize=mGLContext
@property(readonly, assign) MRImageManager *imageManager;	// G=0x34301989; @synthesize=mImageManager
@property(readonly, assign) BOOL isDoubleBuffered;	// G=0x342fec99; 
@property(assign, nonatomic) BOOL isFlipped;	// G=0x343019d5; S=0x342ff171; @synthesize=mIsFlipped
@property(readonly, assign) BOOL isUsingIntelGMA950;	// G=0x34301a05; @synthesize=mIsUsingIntelGMA950
@property(readonly, assign) BOOL isUsingIntelGPU;	// G=0x343019f5; @synthesize=mIsUsingIntelGPU
@property(assign) float localAspectRatio;	// G=0x343019b5; S=0x343019c5; @synthesize=mLocalAspectRatio
@property(readonly, assign) unsigned long maxDimension;	// G=0x342feca1; 
@property(readonly, assign) const float *modelViewMatrix;	// G=0x34300e35; 
@property(readonly, assign) CGColorSpaceRef monochromaticColorSpace;	// G=0x342fec79; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x34301999; S=0x342fe97d; @synthesize=mPixelSize
@property(readonly, assign) BOOL prefersSharedVRAM;	// G=0x34301a15; @synthesize=mPrefersSharedVRAM
@property(readonly, assign) const float *projectionMatrix;	// G=0x34300e25; 
@property(readonly, assign) NSString *shaderID;	// G=0x34301a45; @synthesize=mShaderID
@property(readonly, assign) CGSize size;	// G=0x342febe5; 
@property(readonly, assign) BOOL supportsFragmentShaders;	// G=0x343019e5; @synthesize=mSupportsFragmentShaders
@property(readonly, assign) unsigned virtualScreen;	// G=0x342fec9d; 
@property(readonly, assign) int vram;	// G=0x34301a35; @synthesize=mVRAM
- (id)initLocalWithContext:(id)context glContext:(id)context2 andSize:(CGSize)size;	// 0x342fe531
- (id)initWithEAGLContext:(id)eaglcontext andAssetManager:(id)manager;	// 0x342fe2ed
- (void)_applyForeColor;	// 0x342ff509
// declared property getter: - (float)aspectRatio;	// 0x342fec3d
// declared property getter: - (id)assetManager;	// 0x34301951
// declared property getter: - (const float *)backColor;	// 0x342ff925
// declared property getter: - (id)baseContext;	// 0x34301941
- (id)beginLocalContextWithSize:(CGSize)size backgroundColor:(const float *)color state:(XXStruct_vue6hD *)state;	// 0x342feda5
- (void)blend:(int)blend;	// 0x342ff1a9
- (void)cleanup;	// 0x342fe875
- (void)clear:(int)clear;	// 0x342ff321
// declared property getter: - (CGColorSpaceRef)colorSpace;	// 0x342fec59
- (BOOL)commitShaderChange;	// 0x342ffdf9
- (void)composeForeColor:(const float *)color saveTo:(float *)to;	// 0x342ff745
- (void)composeForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x342ff829
- (void)composeModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x34300f15
- (void)cull:(int)cull;	// 0x342ff25d
- (void)dealloc;	// 0x342fe7f5
- (void)depthTest:(BOOL)test;	// 0x342ff2d5
- (void)drawLinesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x343018cd
- (void)drawTriangleStripFromOffset:(unsigned)offset count:(unsigned)count;	// 0x34301835
- (void)drawTrianglesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x34301881
- (void)finalize;	// 0x342fe835
- (void)flush;	// 0x342feca9
// declared property getter: - (const float *)foreColor;	// 0x342ff4a5
// declared property getter: - (BOOL)foreColorIsOpaqueWhite;	// 0x342ff4b5
// declared property getter: - (id)glContext;	// 0x34301a25
// declared property getter: - (id)imageManager;	// 0x34301989
- (id)imageSetOnTextureUnit:(unsigned)unit;	// 0x342ffdad
// declared property getter: - (BOOL)isDoubleBuffered;	// 0x342fec99
// declared property getter: - (BOOL)isFlipped;	// 0x343019d5
// declared property getter: - (BOOL)isUsingIntelGMA950;	// 0x34301a05
// declared property getter: - (BOOL)isUsingIntelGPU;	// 0x343019f5
// declared property getter: - (float)localAspectRatio;	// 0x343019b5
- (void)lock;	// 0x342fe975
// declared property getter: - (unsigned long)maxDimension;	// 0x342feca1
// declared property getter: - (const float *)modelViewMatrix;	// 0x34300e35
// declared property getter: - (CGColorSpaceRef)monochromaticColorSpace;	// 0x342fec79
// declared property getter: - (CGSize)pixelSize;	// 0x34301999
// declared property getter: - (BOOL)prefersSharedVRAM;	// 0x34301a15
// declared property getter: - (const float *)projectionMatrix;	// 0x34300e25
- (void)purgeResources:(BOOL)resources;	// 0x342fed85
- (void)restoreBackColor:(const float *)color;	// 0x342ffabd
- (void)restoreForeColor:(const float *)color;	// 0x342ff911
- (void)restoreModelViewMatrix:(float [16])matrix;	// 0x34300f51
- (void)restoreScissorRect:(const int *)rect;	// 0x342ff491
- (void)resyncState;	// 0x342ff015
- (id)retainedByUserBlackImage;	// 0x342ff151
- (id)retainedByUserImageByEndingLocalContext:(id)context andRestoreState:(const XXStruct_vue6hD *)state;	// 0x342fef3d
// declared property setter: - (void)setAssetManager:(id)manager;	// 0x34301965
- (void)setBackColor:(const float *)color saveTo:(float *)to;	// 0x342ff935
- (void)setBackColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x342ff9f9
- (void)setColorsPointer:(const float *)pointer;	// 0x34301235
- (void)setForeColor:(const float *)color saveTo:(float *)to;	// 0x342ff5b9
- (void)setForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x342ff67d
- (void)setImage:(id)image onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(XXStruct_S04vsC *)state;	// 0x342ffad1
- (void)setInSpriteCoordinatesPointer:(const float *)spriteCoordinatesPointer;	// 0x3430134d
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x342ff171
// declared property setter: - (void)setLocalAspectRatio:(float)ratio;	// 0x343019c5
- (void)setModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x34300e45
- (void)setNormal:(float)normal :(float)arg2 :(float)arg3;	// 0x34300f65
- (void)setNormalsPointer:(const float *)pointer;	// 0x343011b5
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x342fe97d
- (void)setScissorRect:(const int *)rect saveTo:(int *)to;	// 0x342ff385
- (void)setShader:(id)shader;	// 0x34300821
- (void)setShaderUniformFloat:(float)aFloat forKey:(id)key;	// 0x34300ba9
- (void)setShaderUniformInt:(int)int forKey:(id)key;	// 0x34300b2d
- (void)setShaderUniformVec2:(float)a2 :(float)arg2 forKey:(id)key;	// 0x34300c21
- (void)setShaderUniformVec3:(float)a3 :(float)arg2 :(float)arg3 forKey:(id)key;	// 0x34300cb9
- (void)setShaderUniformVec4:(float)a4 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)key;	// 0x34300d69
- (void)setTextureCoordinatesPointer:(const float *)pointer onTextureUnit:(unsigned)unit;	// 0x343012b5
- (void)setTextureMatrix:(float [16])matrix onTextureUnit:(unsigned)unit;	// 0x34300ff5
- (void)setVertex2DPointer:(const float *)pointer;	// 0x3430109d
- (void)setVertex3DPointer:(const float *)pointer;	// 0x34301129
- (void)setVertexAttributePointer:(const float *)pointer ofSize:(unsigned)size forKey:(id)key;	// 0x343013cd
// declared property getter: - (id)shaderID;	// 0x34301a45
// declared property getter: - (CGSize)size;	// 0x342febe5
// declared property getter: - (BOOL)supportsFragmentShaders;	// 0x343019e5
- (BOOL)supportsMirroredRepeatForImage:(id)image;	// 0x34301919
- (void)unlock;	// 0x342fe979
- (void)unsetColorsPointer;	// 0x343016e9
- (void)unsetImage:(id)image onTextureUnit:(unsigned)unit state:(const XXStruct_S04vsC *)state;	// 0x342ffd41
- (void)unsetInSpriteCoordinatesPointer;	// 0x34301769
- (void)unsetNormalsPointer;	// 0x343016b1
- (void)unsetShader;	// 0x34300921
- (void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned)unit;	// 0x34301721
- (void)unsetVertexAttributePointerForKey:(id)key;	// 0x343017a1
- (void)unsetVertexPointer;	// 0x3430166d
// declared property getter: - (unsigned)virtualScreen;	// 0x342fec9d
// declared property getter: - (int)vram;	// 0x34301a35
@end

