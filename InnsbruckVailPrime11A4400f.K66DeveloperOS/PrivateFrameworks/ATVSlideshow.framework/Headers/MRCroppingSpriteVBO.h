/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>


@interface MRCroppingSpriteVBO : NSObject {
	CGPoint mPosition;	// 4 = 0x4
	CGSize mHalfSize;	// 12 = 0xc
	float mRotation;	// 20 = 0x14
	CGRect mInnerRect;	// 24 = 0x18
	CGRect mOuterRect;	// 40 = 0x28
	BOOL mPreservesImageAspectRatio;	// 56 = 0x38
	BOOL mHitIsActive;	// 57 = 0x39
	BOOL mNeedsInSpriteCoordinates;	// 58 = 0x3a
	CGSize mSpriteCoordinatesFactor;	// 60 = 0x3c
	CGPoint mSpriteCoordinatesOffset;	// 68 = 0x44
	unsigned char mMeshType;	// 76 = 0x4c
	unsigned mVBO;	// 80 = 0x50
	unsigned char mMiddleOffset;	// 84 = 0x54
	unsigned char mOuterOffset;	// 85 = 0x55
	unsigned char mNumberOfVertices;	// 86 = 0x56
	BOOL mPositionWasUpdated;	// 87 = 0x57
	BOOL mRectsWereUpdated;	// 88 = 0x58
}
@property(readonly, assign, nonatomic) CGSize halfSize;	// G=0x2fbf7219; @synthesize=mHalfSize
@property(assign, nonatomic) BOOL hitIsActive;	// G=0x2fbf7291; S=0x2fbf72a1; @synthesize=mHitIsActive
@property(assign, nonatomic) CGRect innerRect;	// G=0x2fbf7241; S=0x2fbf5bd9; @synthesize=mInnerRect
@property(assign, nonatomic) unsigned char meshType;	// G=0x2fbf7329; S=0x2fbf7339; @synthesize=mMeshType
@property(assign, nonatomic) BOOL needsInSpriteCoordinates;	// G=0x2fbf72b1; S=0x2fbf72c1; @synthesize=mNeedsInSpriteCoordinates
@property(assign, nonatomic) CGRect outerRect;	// G=0x2fbf7259; S=0x2fbf5cc9; @synthesize=mOuterRect
@property(readonly, assign, nonatomic) CGPoint position;	// G=0x2fbf7201; @synthesize=mPosition
@property(assign, nonatomic) BOOL preservesImageAspectRatio;	// G=0x2fbf7271; S=0x2fbf7281; @synthesize=mPreservesImageAspectRatio
@property(readonly, assign, nonatomic) float rotation;	// G=0x2fbf7231; @synthesize=mRotation
@property(assign, nonatomic) CGSize spriteCoordinatesFactor;	// G=0x2fbf72d1; S=0x2fbf72e9; @synthesize=mSpriteCoordinatesFactor
@property(assign, nonatomic) CGPoint spriteCoordinatesOffset;	// G=0x2fbf72fd; S=0x2fbf7315; @synthesize=mSpriteCoordinatesOffset
- (id)init;	// 0x2fbf5805
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation context:(id)context;	// 0x2fbf58bd
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect context:(id)context;	// 0x2fbf590d
- (id)initWithPosition:(CGPoint)position size:(CGSize)size zRotation:(float)rotation innerRect:(CGRect)rect outerRect:(CGRect)rect5 context:(id)context;	// 0x2fbf598d
- (void)fakeRenderInContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size zRotation:(float)rotation;	// 0x2fbf5a95
- (void)getOpaquePosition:(CGPoint *)position andHalfSize:(CGSize *)size;	// 0x2fbf5dbd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix;	// 0x2fbf70bd
// declared property getter: - (CGSize)halfSize;	// 0x2fbf7219
- (BOOL)hitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fbf6f89
// declared property getter: - (BOOL)hitIsActive;	// 0x2fbf7291
// declared property getter: - (CGRect)innerRect;	// 0x2fbf7241
// declared property getter: - (unsigned char)meshType;	// 0x2fbf7329
// declared property getter: - (BOOL)needsInSpriteCoordinates;	// 0x2fbf72b1
// declared property getter: - (CGRect)outerRect;	// 0x2fbf7259
// declared property getter: - (CGPoint)position;	// 0x2fbf7201
// declared property getter: - (BOOL)preservesImageAspectRatio;	// 0x2fbf7271
- (void)renderImageInner:(id)inner inContext:(id)context;	// 0x2fbf6aa9
- (void)renderImageMiddle:(id)middle inContext:(id)context;	// 0x2fbf6c01
- (void)renderImageOuter:(id)outer inContext:(id)context;	// 0x2fbf6dd1
- (void)reset;	// 0x2fbf5a29
// declared property getter: - (float)rotation;	// 0x2fbf7231
// declared property setter: - (void)setHitIsActive:(BOOL)active;	// 0x2fbf72a1
// declared property setter: - (void)setInnerRect:(CGRect)rect;	// 0x2fbf5bd9
// declared property setter: - (void)setMeshType:(unsigned char)type;	// 0x2fbf7339
// declared property setter: - (void)setNeedsInSpriteCoordinates:(BOOL)spriteCoordinates;	// 0x2fbf72c1
// declared property setter: - (void)setOuterRect:(CGRect)rect;	// 0x2fbf5cc9
// declared property setter: - (void)setPreservesImageAspectRatio:(BOOL)ratio;	// 0x2fbf7281
// declared property setter: - (void)setSpriteCoordinatesFactor:(CGSize)factor;	// 0x2fbf72e9
// declared property setter: - (void)setSpriteCoordinatesOffset:(CGPoint)offset;	// 0x2fbf7315
// declared property getter: - (CGSize)spriteCoordinatesFactor;	// 0x2fbf72d1
// declared property getter: - (CGPoint)spriteCoordinatesOffset;	// 0x2fbf72fd
- (void)updateVBOsInContext:(id)context;	// 0x2fbf5f4d
@end

