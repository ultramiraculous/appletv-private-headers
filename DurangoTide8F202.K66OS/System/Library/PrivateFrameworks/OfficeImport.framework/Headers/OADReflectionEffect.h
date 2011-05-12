/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADReflectionEffect : OADEffect {
@private
	float mBlurRadius;	// 8 = 0x8
	float mStartOpacity;	// 12 = 0xc
	float mStartPosition;	// 16 = 0x10
	float mEndOpacity;	// 20 = 0x14
	float mEndPosition;	// 24 = 0x18
	float mDistance;	// 28 = 0x1c
	float mDirection;	// 32 = 0x20
	float mFadeDirection;	// 36 = 0x24
	float mXScale;	// 40 = 0x28
	float mYScale;	// 44 = 0x2c
	float mXSkew;	// 48 = 0x30
	float mYSkew;	// 52 = 0x34
	int mAlignment;	// 56 = 0x38
	BOOL mRotateWithShape;	// 60 = 0x3c
}
@property(assign) int alignment;	// G=0x31ab643d; S=0x31a6f7fd; converted property
@property(assign) float blurRadius;	// G=0x31ab632d; S=0x31a6f5ad; converted property
@property(assign) float direction;	// G=0x31ab639d; S=0x31a6f5ed; converted property
@property(assign) float distance;	// G=0x31ab638d; S=0x31a6f5dd; converted property
@property(assign) float endOpacity;	// G=0x31ab636d; S=0x31a749d1; converted property
@property(assign) float endPosition;	// G=0x31ab637d; S=0x31a6f5cd; converted property
@property(assign) float fadeDirection;	// G=0x31ab63ad; S=0x31ab63bd; converted property
@property(assign) BOOL rotateWithShape;	// G=0x31ab644d; S=0x31a6f60d; converted property
@property(assign) float startOpacity;	// G=0x31ab633d; S=0x31a6f5bd; converted property
@property(assign) float startPosition;	// G=0x31ab634d; S=0x31ab635d; converted property
@property(assign) float xScale;	// G=0x31ab63cd; S=0x31ab63dd; converted property
@property(assign) float xSkew;	// G=0x31ab63fd; S=0x31ab640d; converted property
@property(assign) float yScale;	// G=0x31ab63ed; S=0x31a6f5fd; converted property
@property(assign) float ySkew;	// G=0x31ab641d; S=0x31ab642d; converted property
- (id)init;	// 0x31a6f0cd
// converted property getter: - (int)alignment;	// 0x31ab643d
// converted property getter: - (float)blurRadius;	// 0x31ab632d
- (id)copyWithZone:(NSZone *)zone;	// 0x31ab6905
// converted property getter: - (float)direction;	// 0x31ab639d
// converted property getter: - (float)distance;	// 0x31ab638d
// converted property getter: - (float)endOpacity;	// 0x31ab636d
// converted property getter: - (float)endPosition;	// 0x31ab637d
// converted property getter: - (float)fadeDirection;	// 0x31ab63ad
- (unsigned)hash;	// 0x31ab645d
- (BOOL)isEqual:(id)equal;	// 0x31ab65f9
// converted property getter: - (BOOL)rotateWithShape;	// 0x31ab644d
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x31a6f7fd
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x31a6f5ad
// converted property setter: - (void)setDirection:(float)direction;	// 0x31a6f5ed
// converted property setter: - (void)setDistance:(float)distance;	// 0x31a6f5dd
// converted property setter: - (void)setEndOpacity:(float)opacity;	// 0x31a749d1
// converted property setter: - (void)setEndPosition:(float)position;	// 0x31a6f5cd
// converted property setter: - (void)setFadeDirection:(float)direction;	// 0x31ab63bd
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x31a6f60d
// converted property setter: - (void)setStartOpacity:(float)opacity;	// 0x31a6f5bd
// converted property setter: - (void)setStartPosition:(float)position;	// 0x31ab635d
- (void)setStyleColor:(id)color;	// 0x31ab6329
// converted property setter: - (void)setXScale:(float)scale;	// 0x31ab63dd
// converted property setter: - (void)setXSkew:(float)skew;	// 0x31ab640d
// converted property setter: - (void)setYScale:(float)scale;	// 0x31a6f5fd
// converted property setter: - (void)setYSkew:(float)skew;	// 0x31ab642d
// converted property getter: - (float)startOpacity;	// 0x31ab633d
// converted property getter: - (float)startPosition;	// 0x31ab634d
// converted property getter: - (float)xScale;	// 0x31ab63cd
// converted property getter: - (float)xSkew;	// 0x31ab63fd
// converted property getter: - (float)yScale;	// 0x31ab63ed
// converted property getter: - (float)ySkew;	// 0x31ab641d
@end
