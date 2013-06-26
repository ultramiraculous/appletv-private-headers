/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class EAGLContext, NSDictionary, MRTexture, NSString, NSMutableDictionary, MRImageManager;

@interface MRImage : NSObject {
	MRImageManager *mImageManager;	// 4 = 0x4
	unsigned long mWidth;	// 8 = 0x8
	unsigned long mHeight;	// 12 = 0xc
	MRImage *mRefImage;	// 16 = 0x10
	NSString *mImageBufferKey;	// 20 = 0x14
	MRTexture *mTexture;	// 24 = 0x18
	unsigned long mPixelFormat;	// 28 = 0x1c
	float mCenterX;	// 32 = 0x20
	float mCenterY;	// 36 = 0x24
	float mScale;	// 40 = 0x28
	float mRotationAngle;	// 44 = 0x2c
	NSString *mFilterID;	// 48 = 0x30
	NSDictionary *mShader;	// 52 = 0x34
	int mClampMode;	// 56 = 0x38
	double mSourceTimeStamp;	// 60 = 0x3c
	double mRenderTime;	// 68 = 0x44
	int mRetainByUserCount;	// 76 = 0x4c
	float mColor[4];	// 80 = 0x50
	IOSurfaceRef mIOSurface;	// 96 = 0x60
	CVBufferRef mCVPixelBuffer;	// 100 = 0x64
	CGContextRef mCGContext;	// 104 = 0x68
	CGColorSpaceRef mColorspace;	// 108 = 0x6c
	void *mDatas[3];	// 112 = 0x70
	unsigned long mDataSize;	// 124 = 0x7c
	unsigned long mDataRowBytes;	// 128 = 0x80
	unsigned long mDataWidth;	// 132 = 0x84
	unsigned long mDataHeight;	// 136 = 0x88
	unsigned char mOrientation;	// 140 = 0x8c
	NSString *mLabel;	// 144 = 0x90
	NSMutableDictionary *mUserData;	// 148 = 0x94
	CVBufferRef mCVTexture;	// 152 = 0x98
	unsigned long mFlags;	// 156 = 0x9c
}
@property(readonly, assign, nonatomic) float aspectRatio;	// G=0x2fc615f1; 
@property(assign, nonatomic) float centerX;	// G=0x2fc629d1; S=0x2fc629e1; @synthesize=mCenterX
@property(assign, nonatomic) float centerY;	// G=0x2fc629f1; S=0x2fc62a01; @synthesize=mCenterY
@property(assign, nonatomic) int clampMode;	// G=0x2fc62add; S=0x2fc62aed; @synthesize=mClampMode
@property(copy, nonatomic) NSString *filterID;	// G=0x2fc61bbd; S=0x2fc62a51; @synthesize=mFilterID
@property(assign, nonatomic) BOOL filtersNearest;	// G=0x2fc6112d; S=0x2fc61141; 
@property(readonly, assign, nonatomic) BOOL hasKBOrShader;	// G=0x2fc61be5; 
@property(assign, nonatomic) BOOL hasKenBurns;	// G=0x2fc613b1; S=0x2fc613c5; 
@property(readonly, assign, nonatomic) unsigned long height;	// G=0x2fc629b1; @synthesize=mHeight
@property(readonly, assign) NSString *imageBufferKey;	// G=0x2fc61429; 
@property(readonly, assign) MRImageManager *imageManager;	// G=0x2fc6298d; @synthesize=mImageManager
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x2fc61629; 
@property(readonly, assign, nonatomic) BOOL isMonochromatic;	// G=0x2fc61119; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x2fc61169; 
@property(readonly, assign, nonatomic) BOOL isPremultiplied;	// G=0x2fc61105; 
@property(readonly, assign, nonatomic) BOOL isYUV;	// G=0x2fc61c81; 
@property(copy, nonatomic) NSString *label;	// G=0x2fc62b11; S=0x2fc6145d; @synthesize=mLabel
@property(assign, nonatomic) BOOL mipmapFiltersNearest;	// G=0x2fc61339; S=0x2fc6134d; 
@property(readonly, assign, nonatomic) unsigned long pixelFormat;	// G=0x2fc629c1; @synthesize=mPixelFormat
@property(assign, nonatomic) BOOL preservesAspectRatio;	// G=0x2fc61375; S=0x2fc61389; 
@property(assign, nonatomic) double renderTime;	// G=0x2fc62ab1; S=0x2fc62ac9; @synthesize=mRenderTime
@property(readonly, assign) int retainByUserCount;	// G=0x2fc62afd; @synthesize=mRetainByUserCount
@property(assign, nonatomic) float rotationAngle;	// G=0x2fc62a31; S=0x2fc62a41; @synthesize=mRotationAngle
@property(assign, nonatomic) float scale;	// G=0x2fc62a11; S=0x2fc62a21; @synthesize=mScale
@property(assign, nonatomic) BOOL scaleWasFixedForTargetAspectRatio;	// G=0x2fc613ed; S=0x2fc61401; 
@property(retain) NSDictionary *shader;	// G=0x2fc62a61; S=0x2fc62a75; @synthesize=mShader
@property(assign, nonatomic) double sourceTimeStamp;	// G=0x2fc62a85; S=0x2fc62a9d; @synthesize=mSourceTimeStamp
@property(readonly, assign) MRTexture *texture;	// G=0x2fc61cdd; 
@property(readonly, assign) MRTexture *textureIfExists;	// G=0x2fc625ed; 
@property(readonly, assign, nonatomic) unsigned textureName;	// G=0x2fc624e1; 
@property(readonly, assign, nonatomic) unsigned textureTarget;	// G=0x2fc62541; 
@property(readonly, assign, nonatomic) EAGLContext *updateGLContext;	// G=0x2fc62591; 
@property(readonly, assign) NSMutableDictionary *userData;	// G=0x2fc614c9; 
@property(assign, nonatomic) BOOL usesBackgroundColorAsBorderColor;	// G=0x2fc610bd; S=0x2fc610d1; 
@property(readonly, assign) BOOL usesMipmapping;	// G=0x2fc6117d; 
@property(readonly, assign, nonatomic) unsigned long width;	// G=0x2fc629a1; @synthesize=mWidth
- (id)init;	// 0x2fc5fbdd
- (id)initWithCGContext:(CGContextRef)cgcontext imageManager:(id)manager;	// 0x2fc60ac1
- (id)initWithCGContext:(CGContextRef)cgcontext size:(CGSize)size imageManager:(id)manager;	// 0x2fc60995
- (id)initWithCGImage:(CGImageRef)cgimage textureSize:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x2fc6011d
- (id)initWithCGImage:(CGImageRef)cgimage textureSize:(CGSize)size orientation:(int)orientation imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x2fc60421
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer size:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x2fc60701
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer size:(CGSize)size orientation:(int)orientation imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x2fc607f5
- (id)initWithCVTexture:(CVBufferRef)cvtexture size:(CGSize)size orientation:(int)orientation imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x2fc608c5
- (id)initWithIOSurface:(IOSurfaceRef)iosurface imageBufferKey:(id)key imageManager:(id)manager;	// 0x2fc60059
- (id)initWithIOSurface:(IOSurfaceRef)iosurface imageManager:(id)manager;	// 0x2fc600b9
- (id)initWithIOSurface:(IOSurfaceRef)iosurface size:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager;	// 0x2fc5fecd
- (id)initWithIOSurface:(IOSurfaceRef)iosurface size:(CGSize)size orientation:(int)orientation imageManager:(id)manager;	// 0x2fc5ffa5
- (id)initWithImage:(id)image;	// 0x2fc5fe49
- (id)initWithSize:(CGSize)size andColor:(const float *)color imageBufferKey:(id)key imageManager:(id)manager options:(id)options;	// 0x2fc5fc41
- (id)initWithTexture:(id)texture;	// 0x2fc5fdc9
- (void)addOverlayForROI:(id)roi;	// 0x2fc62621
// declared property getter: - (float)aspectRatio;	// 0x2fc615f1
// declared property getter: - (float)centerX;	// 0x2fc629d1
// declared property getter: - (float)centerY;	// 0x2fc629f1
// declared property getter: - (int)clampMode;	// 0x2fc62add
- (void)cleanup;	// 0x2fc60b99
- (void)dealloc;	// 0x2fc60b19
// declared property getter: - (id)filterID;	// 0x2fc61bbd
// declared property getter: - (BOOL)filtersNearest;	// 0x2fc6112d
- (void)finalize;	// 0x2fc60b59
- (void)generateMipmap;	// 0x2fc611b9
- (void)getMatrix:(float [16])matrix forReferenceAspectRatio:(float)referenceAspectRatio;	// 0x2fc617c1
// declared property getter: - (BOOL)hasKBOrShader;	// 0x2fc61be5
// declared property getter: - (BOOL)hasKenBurns;	// 0x2fc613b1
// declared property getter: - (unsigned long)height;	// 0x2fc629b1
// declared property getter: - (id)imageBufferKey;	// 0x2fc61429
// declared property getter: - (id)imageManager;	// 0x2fc6298d
- (id)insertingInCollection;	// 0x2fc60f99
// declared property getter: - (BOOL)isEmpty;	// 0x2fc61629
// declared property getter: - (BOOL)isMonochromatic;	// 0x2fc61119
// declared property getter: - (BOOL)isOpaque;	// 0x2fc61169
// declared property getter: - (BOOL)isPremultiplied;	// 0x2fc61105
// declared property getter: - (BOOL)isYUV;	// 0x2fc61c81
- (void)kenburnsMatrix:(float [16])matrix forReferenceAspectRatio:(float)referenceAspectRatio;	// 0x2fc61659
// declared property getter: - (id)label;	// 0x2fc62b11
// declared property getter: - (BOOL)mipmapFiltersNearest;	// 0x2fc61339
// declared property getter: - (unsigned long)pixelFormat;	// 0x2fc629c1
// declared property getter: - (BOOL)preservesAspectRatio;	// 0x2fc61375
- (CGSize)relativeSizeInContextPixelSize:(CGSize)contextPixelSize;	// 0x2fc61b6d
- (void)releaseByUser;	// 0x2fc60f21
- (void)removingFromCollection;	// 0x2fc60fc5
// declared property getter: - (double)renderTime;	// 0x2fc62ab1
- (id)retainByUser;	// 0x2fc60ef1
// declared property getter: - (int)retainByUserCount;	// 0x2fc62afd
- (id)retainedByUserImage;	// 0x2fc60fed
- (id)retainedByUserImageWithShader:(id)shader;	// 0x2fc61049
// declared property getter: - (float)rotationAngle;	// 0x2fc62a31
// declared property getter: - (float)scale;	// 0x2fc62a11
// declared property getter: - (BOOL)scaleWasFixedForTargetAspectRatio;	// 0x2fc613ed
// declared property setter: - (void)setCenterX:(float)x;	// 0x2fc629e1
// declared property setter: - (void)setCenterY:(float)y;	// 0x2fc62a01
// declared property setter: - (void)setClampMode:(int)mode;	// 0x2fc62aed
// declared property setter: - (void)setFilterID:(id)anId;	// 0x2fc62a51
// declared property setter: - (void)setFiltersNearest:(BOOL)nearest;	// 0x2fc61141
// declared property setter: - (void)setHasKenBurns:(BOOL)burns;	// 0x2fc613c5
// declared property setter: - (void)setLabel:(id)label;	// 0x2fc6145d
// declared property setter: - (void)setMipmapFiltersNearest:(BOOL)nearest;	// 0x2fc6134d
- (void)setOnContext:(id)context onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(XXStruct_S04vsC *)state;	// 0x2fc61b3d
// declared property setter: - (void)setPreservesAspectRatio:(BOOL)ratio;	// 0x2fc61389
// declared property setter: - (void)setRenderTime:(double)time;	// 0x2fc62ac9
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x2fc62a41
// declared property setter: - (void)setScale:(float)scale;	// 0x2fc62a21
// declared property setter: - (void)setScaleWasFixedForTargetAspectRatio:(BOOL)targetAspectRatio;	// 0x2fc61401
// declared property setter: - (void)setShader:(id)shader;	// 0x2fc62a75
// declared property setter: - (void)setSourceTimeStamp:(double)stamp;	// 0x2fc62a9d
// declared property setter: - (void)setUsesBackgroundColorAsBorderColor:(BOOL)color;	// 0x2fc610d1
// declared property getter: - (id)shader;	// 0x2fc62a61
// declared property getter: - (double)sourceTimeStamp;	// 0x2fc62a85
// declared property getter: - (id)texture;	// 0x2fc61cdd
// declared property getter: - (id)textureIfExists;	// 0x2fc625ed
// declared property getter: - (unsigned)textureName;	// 0x2fc624e1
// declared property getter: - (unsigned)textureTarget;	// 0x2fc62541
- (void)unsetOnContext:(id)context onTextureUnit:(unsigned)unit state:(const XXStruct_S04vsC *)state;	// 0x2fc61b55
// declared property getter: - (id)updateGLContext;	// 0x2fc62591
- (void)uploadCGImage:(CGImageRef)image toTextureRect:(CGRect)textureRect;	// 0x2fc62861
// declared property getter: - (id)userData;	// 0x2fc614c9
// declared property getter: - (BOOL)usesBackgroundColorAsBorderColor;	// 0x2fc610bd
// declared property getter: - (BOOL)usesMipmapping;	// 0x2fc6117d
// declared property getter: - (unsigned long)width;	// 0x2fc629a1
@end
