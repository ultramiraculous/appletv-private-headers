/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADEffect.h"


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
@property(assign) int alignment;	// G=0x34e23935; S=0x34d4f821; converted property
@property(assign) float blurRadius;	// G=0x34e23825; S=0x34d4f411; converted property
@property(assign) float direction;	// G=0x34e23895; S=0x34d4f451; converted property
@property(assign) float distance;	// G=0x34e23885; S=0x34d4f441; converted property
@property(assign) float endOpacity;	// G=0x34e23865; S=0x34d50e5d; converted property
@property(assign) float endPosition;	// G=0x34e23875; S=0x34d4f431; converted property
@property(assign) float fadeDirection;	// G=0x34e238a5; S=0x34e238b5; converted property
@property(assign) BOOL rotateWithShape;	// G=0x34e23945; S=0x34d4f471; converted property
@property(assign) float startOpacity;	// G=0x34e23835; S=0x34d4f421; converted property
@property(assign) float startPosition;	// G=0x34e23845; S=0x34e23855; converted property
@property(assign) float xScale;	// G=0x34e238c5; S=0x34e238d5; converted property
@property(assign) float xSkew;	// G=0x34e238f5; S=0x34e23905; converted property
@property(assign) float yScale;	// G=0x34e238e5; S=0x34d4f461; converted property
@property(assign) float ySkew;	// G=0x34e23915; S=0x34e23925; converted property
- (id)init;	// 0x34d4eed5
// converted property getter: - (int)alignment;	// 0x34e23935
// converted property getter: - (float)blurRadius;	// 0x34e23825
- (id)copyWithZone:(NSZone *)zone;	// 0x34e23e41
// converted property getter: - (float)direction;	// 0x34e23895
// converted property getter: - (float)distance;	// 0x34e23885
// converted property getter: - (float)endOpacity;	// 0x34e23865
// converted property getter: - (float)endPosition;	// 0x34e23875
// converted property getter: - (float)fadeDirection;	// 0x34e238a5
- (unsigned)hash;	// 0x34e23c91
- (BOOL)isEqual:(id)equal;	// 0x34e23955
// converted property getter: - (BOOL)rotateWithShape;	// 0x34e23945
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x34d4f821
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x34d4f411
// converted property setter: - (void)setDirection:(float)direction;	// 0x34d4f451
// converted property setter: - (void)setDistance:(float)distance;	// 0x34d4f441
// converted property setter: - (void)setEndOpacity:(float)opacity;	// 0x34d50e5d
// converted property setter: - (void)setEndPosition:(float)position;	// 0x34d4f431
// converted property setter: - (void)setFadeDirection:(float)direction;	// 0x34e238b5
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x34d4f471
// converted property setter: - (void)setStartOpacity:(float)opacity;	// 0x34d4f421
// converted property setter: - (void)setStartPosition:(float)position;	// 0x34e23855
- (void)setStyleColor:(id)color;	// 0x34e23821
// converted property setter: - (void)setXScale:(float)scale;	// 0x34e238d5
// converted property setter: - (void)setXSkew:(float)skew;	// 0x34e23905
// converted property setter: - (void)setYScale:(float)scale;	// 0x34d4f461
// converted property setter: - (void)setYSkew:(float)skew;	// 0x34e23925
// converted property getter: - (float)startOpacity;	// 0x34e23835
// converted property getter: - (float)startPosition;	// 0x34e23845
// converted property getter: - (float)xScale;	// 0x34e238c5
// converted property getter: - (float)xSkew;	// 0x34e238f5
// converted property getter: - (float)yScale;	// 0x34e238e5
// converted property getter: - (float)ySkew;	// 0x34e23915
@end
