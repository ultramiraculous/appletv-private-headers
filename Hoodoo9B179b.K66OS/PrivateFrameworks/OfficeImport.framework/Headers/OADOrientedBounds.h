/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADOrientedBounds : NSObject {
@private
	CGRect mBounds;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	unsigned mFlipX : 1;	// 24 = 0x18
	unsigned mFlipY : 1;	// 24 = 0x18
	int mModeX;	// 28 = 0x1c
	int mModeY;	// 32 = 0x20
}
@property(assign) CGRect bounds;	// G=0x3273644d; S=0x3273ec1d; converted property
@property(assign) BOOL flipX;	// G=0x327fa265; S=0x3273ebe1; converted property
@property(assign) BOOL flipY;	// G=0x327fa281; S=0x3273ebfd; converted property
@property(assign) float rotation;	// G=0x327363d5; S=0x3273ebd1; converted property
@property(assign) int xMode;	// G=0x327fa29d; S=0x3291bc59; converted property
@property(assign) int yMode;	// G=0x327fa2ad; S=0x3291bc69; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x327363e5
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x327371bd
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x327371ed
- (id)init;	// 0x3273eb45
- (id)initWithBounds:(CGRect)bounds;	// 0x327f1f35
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x32737265
// converted property getter: - (CGRect)bounds;	// 0x3273644d
// converted property getter: - (BOOL)flipX;	// 0x327fa265
// converted property getter: - (BOOL)flipY;	// 0x327fa281
- (unsigned)hash;	// 0x329d7bc5
- (BOOL)isEqual:(id)equal;	// 0x327bd551
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x329d7c6d
// converted property getter: - (float)rotation;	// 0x327363d5
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3273ec1d
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x3273ebe1
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x3273ebfd
- (void)setOrientedBounds:(id)bounds;	// 0x329d7b09
// converted property setter: - (void)setRotation:(float)rotation;	// 0x3273ebd1
// converted property setter: - (void)setXMode:(int)mode;	// 0x3291bc59
// converted property setter: - (void)setYMode:(int)mode;	// 0x3291bc69
// converted property getter: - (int)xMode;	// 0x327fa29d
// converted property getter: - (int)yMode;	// 0x327fa2ad
@end

