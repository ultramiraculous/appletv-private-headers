/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface OADOrientedBounds : NSObject {
	CGRect mBounds;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	unsigned mFlipX : 1;	// 24 = 0x18
	unsigned mFlipY : 1;	// 24 = 0x18
	int mModeX;	// 28 = 0x1c
	int mModeY;	// 32 = 0x20
}
@property(assign) CGRect bounds;	// G=0x316dba55; S=0x316d2b75; converted property
@property(assign) BOOL flipX;	// G=0x3171d3a9; S=0x316d2ac5; converted property
@property(assign) BOOL flipY;	// G=0x3171d3bd; S=0x316d2ae1; converted property
@property(assign) float rotation;	// G=0x316d2b01; S=0x316d2ab5; converted property
@property(assign) int xMode;	// G=0x3171d3d5; S=0x3187d629; converted property
@property(assign) int yMode;	// G=0x3171d3e5; S=0x3187d639; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x316d2b11
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x317159a1
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x317159d9
- (id)init;	// 0x316d2a65
- (id)initWithBounds:(CGRect)bounds;	// 0x316c67d9
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x316c6811
- (id).cxx_construct;	// 0x316c67d5
// converted property getter: - (CGRect)bounds;	// 0x316dba55
// converted property getter: - (BOOL)flipX;	// 0x3171d3a9
// converted property getter: - (BOOL)flipY;	// 0x3171d3bd
- (unsigned)hash;	// 0x318f0e55
- (BOOL)isEqual:(id)equal;	// 0x316db8cd
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x318f0d45
// converted property getter: - (float)rotation;	// 0x316d2b01
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x316d2b75
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x316d2ac5
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x316d2ae1
- (void)setOrientedBounds:(id)bounds;	// 0x318f0ca1
// converted property setter: - (void)setRotation:(float)rotation;	// 0x316d2ab5
// converted property setter: - (void)setXMode:(int)mode;	// 0x3187d629
// converted property setter: - (void)setYMode:(int)mode;	// 0x3187d639
// converted property getter: - (int)xMode;	// 0x3171d3d5
// converted property getter: - (int)yMode;	// 0x3171d3e5
@end

