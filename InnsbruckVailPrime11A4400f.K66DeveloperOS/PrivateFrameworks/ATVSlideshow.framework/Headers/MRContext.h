/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class MRShader, MRContextState, EAGLContext, NSMutableDictionary, MRImage, MRImageManager;
@protocol MZMediaManagement;

@interface MRContext : NSObject {
	MRContext *mBaseContext;	// 4 = 0x4
	EAGLContext *mGLContext;	// 8 = 0x8
	CGPoint mPixelOffset;	// 12 = 0xc
	CGSize mPixelSize;	// 20 = 0x14
	int mVRAM;	// 28 = 0x1c
	int mMaxTextureSize;	// 32 = 0x20
	float mFieldOfViewFactor;	// 36 = 0x24
	float mProjectionMatrix[16];	// 40 = 0x28
	int mOrientation;	// 104 = 0x68
	id<MZMediaManagement> mAssetManager;	// 108 = 0x6c
	MRImageManager *mImageManager;	// 112 = 0x70
	BOOL mIsLocalContext;	// 116 = 0x74
	BOOL mIsFlipped;	// 117 = 0x75
	BOOL mYUVTextureUsesYUVBorderColor;	// 118 = 0x76
	MRContextState *mOuterState;	// 120 = 0x78
	MRContextState *mInnerState;	// 124 = 0x7c
	NSMutableDictionary *mVertexAttributes;	// 128 = 0x80
	BOOL mCurrentVBOWasUpdated;	// 132 = 0x84
	BOOL mForceShaderUpdate;	// 133 = 0x85
	float mLocalAspectRatio;	// 136 = 0x88
	int mScissorRect[4];	// 140 = 0x8c
	MRShader *mCurrentShader;	// 156 = 0x9c
	MRImage *mTextureUnitImages[4];	// 160 = 0xa0
	unsigned mActiveTextureUnit;	// 176 = 0xb0
	int mRenderBuffer;	// 180 = 0xb4
	MRImage *mBlackImage;	// 184 = 0xb8
	int _dimensionalMode;	// 188 = 0xbc
}
@property(readonly, assign, nonatomic) float aspectRatio;	// G=0x2fbeefc5; 
@property(retain) id<MZMediaManagement> assetManager;	// G=0x2fbf275d; S=0x2fbf2771; @synthesize=mAssetManager
@property(readonly, assign, nonatomic) const float *backColor;	// G=0x2fbefa99; 
@property(readonly, assign) MRContext *baseContext;	// G=0x2fbf2749; @synthesize=mBaseContext
@property(readonly, assign) CGColorSpaceRef colorSpace;	// G=0x2fbeefe5; 
@property(assign, nonatomic) int dimensionalMode;	// G=0x2fbf2875; S=0x2fbeec01; @synthesize=_dimensionalMode
@property(readonly, assign, nonatomic) const float *foreColor;	// G=0x2fbef7fd; 
@property(readonly, assign, nonatomic) BOOL foreColorIsOpaqueWhite;	// G=0x2fbef81d; 
@property(readonly, assign) EAGLContext *glContext;	// G=0x2fbf283d; @synthesize=mGLContext
@property(readonly, assign) MRImageManager *imageManager;	// G=0x2fbf2781; @synthesize=mImageManager
@property(readonly, assign, nonatomic) BOOL isDoubleBuffered;	// G=0x2fbef025; 
@property(assign, nonatomic) BOOL isFlipped;	// G=0x2fbf282d; S=0x2fbef435; @synthesize=mIsFlipped
@property(assign, nonatomic) float localAspectRatio;	// G=0x2fbf27ed; S=0x2fbf27fd; @synthesize=mLocalAspectRatio
@property(readonly, assign, nonatomic) unsigned long maxDimension;	// G=0x2fbef02d; 
@property(readonly, assign) int maxTextureSize;	// G=0x2fbf2861; @synthesize=mMaxTextureSize
@property(readonly, assign, nonatomic) const float *modelViewMatrix;	// G=0x2fbf1ca9; 
@property(readonly, assign) CGColorSpaceRef monochromaticColorSpace;	// G=0x2fbef005; 
@property(assign, nonatomic) int orientation;	// G=0x2fbf280d; S=0x2fbf281d; @synthesize=mOrientation
@property(assign, nonatomic) CGPoint pixelOffset;	// G=0x2fbf2795; S=0x2fbf27ad; @synthesize=mPixelOffset
@property(assign, nonatomic) CGSize pixelSize;	// G=0x2fbf27c1; S=0x2fbf27d9; @synthesize=mPixelSize
@property(readonly, assign, nonatomic) const float *projectionMatrix;	// G=0x2fbf1c99; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x2fbeef79; 
@property(readonly, assign, nonatomic) unsigned virtualScreen;	// G=0x2fbef029; 
@property(readonly, assign, nonatomic) int vram;	// G=0x2fbf2851; @synthesize=mVRAM
- (id)initLocalWithContext:(id)context glContext:(id)context2 andSize:(CGSize)size;	// 0x2fbee1d9
- (id)initLocalWithContext:(id)context texture:(id)texture andSize:(CGSize)size;	// 0x2fbee401
- (id)initWithEAGLContext:(id)eaglcontext andAssetManager:(id)manager;	// 0x2fbedf41
- (void)_commitOuterToInner;	// 0x2fbf03d1
- (void)_updateTextureOnUnit:(unsigned)unit;	// 0x2fbefdb9
// declared property getter: - (float)aspectRatio;	// 0x2fbeefc5
// declared property getter: - (id)assetManager;	// 0x2fbf275d
// declared property getter: - (const float *)backColor;	// 0x2fbefa99
// declared property getter: - (id)baseContext;	// 0x2fbf2749
- (id)beginLocalContextWithSize:(CGSize)size backgroundColor:(const float *)color state:(XXStruct_vue6hD *)state;	// 0x2fbef18d
- (void)blend:(int)blend;	// 0x2fbef46d
- (void)cleanup;	// 0x2fbee709
- (void)clear:(int)clear;	// 0x2fbef52d
// declared property getter: - (CGColorSpaceRef)colorSpace;	// 0x2fbeefe5
- (BOOL)commitShaderChange;	// 0x2fbefff9
- (void)composeForeColor:(const float *)color saveTo:(float *)to;	// 0x2fbef955
- (void)composeForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x2fbef9ed
- (void)composeModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x2fbf1d7d
- (unsigned)createVBO;	// 0x2fbf2545
- (void)cull:(int)cull;	// 0x2fbef4b9
- (void)dealloc;	// 0x2fbee641
- (void)deleteVBO:(unsigned)vbo;	// 0x2fbf255d
- (void)depthTest:(BOOL)test;	// 0x2fbef50d
// declared property getter: - (int)dimensionalMode;	// 0x2fbf2875
- (void)drawLinesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x2fbf26cd
- (void)drawTriangleStripFromOffset:(unsigned)offset count:(unsigned)count;	// 0x2fbf2625
- (void)drawTrianglesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x2fbf2679
- (void)finalize;	// 0x2fbee6c9
- (void)flush;	// 0x2fbef06d
// declared property getter: - (const float *)foreColor;	// 0x2fbef7fd
// declared property getter: - (BOOL)foreColorIsOpaqueWhite;	// 0x2fbef81d
// declared property getter: - (id)glContext;	// 0x2fbf283d
// declared property getter: - (id)imageManager;	// 0x2fbf2781
- (id)imageSetOnTextureUnit:(unsigned)unit;	// 0x2fbefd6d
// declared property getter: - (BOOL)isDoubleBuffered;	// 0x2fbef025
// declared property getter: - (BOOL)isFlipped;	// 0x2fbf282d
// declared property getter: - (float)localAspectRatio;	// 0x2fbf27ed
- (void)lock;	// 0x2fbee811
// declared property getter: - (unsigned long)maxDimension;	// 0x2fbef02d
// declared property getter: - (int)maxTextureSize;	// 0x2fbf2861
// declared property getter: - (const float *)modelViewMatrix;	// 0x2fbf1ca9
// declared property getter: - (CGColorSpaceRef)monochromaticColorSpace;	// 0x2fbef005
// declared property getter: - (int)orientation;	// 0x2fbf280d
// declared property getter: - (CGPoint)pixelOffset;	// 0x2fbf2795
// declared property getter: - (CGSize)pixelSize;	// 0x2fbf27c1
// declared property getter: - (const float *)projectionMatrix;	// 0x2fbf1c99
- (void)purgeResources:(BOOL)resources;	// 0x2fbef16d
- (void)restoreBackColor:(const float *)color;	// 0x2fbefb81
- (void)restoreForeColor:(const float *)color;	// 0x2fbefa85
- (void)restoreModelViewMatrix:(float [16])matrix;	// 0x2fbf1e9d
- (void)restoreScissorRect:(const int *)rect;	// 0x2fbef7e9
- (id)retainedByUserBlackImage;	// 0x2fbef415
- (id)retainedByUserImageByEndingLocalContext:(id)context andRestoreState:(const XXStruct_vue6hD *)state;	// 0x2fbef311
// declared property setter: - (void)setAssetManager:(id)manager;	// 0x2fbf2771
- (void)setBackColor:(const float *)color saveTo:(float *)to;	// 0x2fbefab9
- (void)setBackColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x2fbefb09
- (void)setColorsPointer:(const float *)pointer;	// 0x2fbf2291
// declared property setter: - (void)setDimensionalMode:(int)mode;	// 0x2fbeec01
- (void)setForeColor:(const float *)color saveTo:(float *)to;	// 0x2fbef88d
- (void)setForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x2fbef8dd
- (void)setImage:(id)image onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(XXStruct_S04vsC *)state;	// 0x2fbefb95
- (void)setInSpriteCoordinatesPointer:(const float *)spriteCoordinatesPointer;	// 0x2fbf230d
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x2fbef435
// declared property setter: - (void)setLocalAspectRatio:(float)ratio;	// 0x2fbf27fd
- (void)setModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x2fbf1cc9
- (void)setNormal:(float)normal :(float)arg2 :(float)arg3;	// 0x2fbf1eb1
- (void)setNormalsPointer:(const float *)pointer;	// 0x2fbf2259
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x2fbf281d
// declared property setter: - (void)setPixelOffset:(CGPoint)offset;	// 0x2fbf27ad
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x2fbf27d9
- (void)setScissorRect:(const int *)rect saveTo:(int *)to;	// 0x2fbef651
- (void)setShader:(id)shader;	// 0x2fbf17d9
- (void)setShaderUniformFloat:(float)aFloat forKey:(id)key;	// 0x2fbf1959
- (void)setShaderUniformInt:(int)int forKey:(id)key;	// 0x2fbf18d5
- (void)setShaderUniformMat3:(float [16])a3 forKey:(id)key;	// 0x2fbf1b91
- (void)setShaderUniformMat4:(float [16])a4 forKey:(id)key;	// 0x2fbf1c15
- (void)setShaderUniformVec2:(float)a2 :(float)arg2 forKey:(id)key;	// 0x2fbf19dd
- (void)setShaderUniformVec3:(float)a3 :(float)arg2 :(float)arg3 forKey:(id)key;	// 0x2fbf1a61
- (void)setShaderUniformVec4:(float)a4 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)key;	// 0x2fbf1af5
- (void)setTextureCoordinatesPointer:(const float *)pointer onTextureUnit:(unsigned)unit;	// 0x2fbf22c9
- (void)setTextureMatrix:(float [16])matrix onTextureUnit:(unsigned)unit;	// 0x2fbf1ef1
- (void)setVertex2DPointer:(const float *)pointer;	// 0x2fbf2191
- (void)setVertex3DPointer:(const float *)pointer;	// 0x2fbf21f5
- (void)setVertexAttributePointer:(const float *)pointer ofSize:(unsigned)size forKey:(id)key;	// 0x2fbf2345
- (void)setVertexBuffer2D:(unsigned)d withFeatures:(unsigned)features;	// 0x2fbf207d
- (void)setVertexBuffer2D:(unsigned)d withStride:(unsigned)stride inSpriteCoordinatesOffset:(unsigned)spriteCoordinatesOffset texture0CoordinatesOffset:(unsigned)offset;	// 0x2fbf1f51
- (BOOL)shaderIsSet;	// 0x2fbf17ad
// declared property getter: - (CGSize)size;	// 0x2fbeef79
- (BOOL)supportsMirroredRepeatForImage:(id)image;	// 0x2fbf2721
- (void)translateModelViewMatrixByX:(float)x Y:(float)y Z:(float)z saveTo:(float *)to;	// 0x2fbf1ded
- (void)unlock;	// 0x2fbee815
- (void)unsetColorsPointer;	// 0x2fbf24c1
- (void)unsetImage:(id)image onTextureUnit:(unsigned)unit state:(const XXStruct_S04vsC *)state;	// 0x2fbefd19
- (void)unsetInSpriteCoordinatesPointer;	// 0x2fbf2505
- (void)unsetNormalsPointer;	// 0x2fbf24a1
- (void)unsetShader;	// 0x2fbf1889
- (void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned)unit;	// 0x2fbf24e1
- (void)unsetVertexAttributePointerForKey:(id)key;	// 0x2fbf2525
- (void)unsetVertexPointer;	// 0x2fbf242d
- (void)updateGeometry;	// 0x2fbee819
- (void)uploadBuffer:(void *)buffer withSize:(int)size toVertexBuffer2D:(unsigned)vertexBuffer2D;	// 0x2fbf25b1
// declared property getter: - (unsigned)virtualScreen;	// 0x2fbef029
// declared property getter: - (int)vram;	// 0x2fbf2851
@end

