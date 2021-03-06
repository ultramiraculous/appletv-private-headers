/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"


__attribute__((visibility("hidden")))
@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
@private
	CGSize mNaturalSize;	// 4 = 0x4
	CGSize mSize;	// 12 = 0xc
	BOOL mSizesLocked;	// 20 = 0x14
	BOOL mAspectRatioLocked;	// 21 = 0x15
	CGPoint mPosition;	// 24 = 0x18
	float mAngle;	// 32 = 0x20
	BOOL mHorizontalFlip;	// 36 = 0x24
	BOOL mVerticalFlip;	// 37 = 0x25
	float mShearXAngle;	// 40 = 0x28
	float mShearYAngle;	// 44 = 0x2c
}
@property(assign) float angle;	// G=0x3596ad71; S=0x3596ad81; converted property
@property(assign) CGSize naturalSize;	// G=0x3596accd; S=0x3596ace5; converted property
@property(assign) CGPoint position;	// G=0x3596ad45; S=0x3596ad5d; converted property
@property(assign) CGSize size;	// G=0x3596acf9; S=0x3596ad11; converted property
+ (CGRect)boundsOfTransformedRect:(CGRect)transformedRect transform:(id)transform;	// 0x3596adf9
+ (const StateSpec *)stateForReading;	// 0x3596acc1
+ (void)transformRect:(CGRect)rect transform:(id)transform upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left4 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right6;	// 0x3596af3d
// converted property getter: - (float)angle;	// 0x3596ad71
- (BOOL)aspectRatioLocked;	// 0x3596ad35
- (BOOL)horizontalFlip;	// 0x3596ad91
- (CGRect)naturalBounds;	// 0x3596add1
// converted property getter: - (CGSize)naturalSize;	// 0x3596accd
- (CGPoint)nonrotatedPosition;	// 0x3596b3c1
// converted property getter: - (CGPoint)position;	// 0x3596ad45
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3596b5b5
// converted property setter: - (void)setAngle:(float)angle;	// 0x3596ad81
// converted property setter: - (void)setNaturalSize:(CGSize)size;	// 0x3596ace5
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3596ad5d
// converted property setter: - (void)setSize:(CGSize)size;	// 0x3596ad11
- (float)shearXAngle;	// 0x3596adb1
- (float)shearYAngle;	// 0x3596adc1
// converted property getter: - (CGSize)size;	// 0x3596acf9
- (CGSize)sizeOfBoundingBox;	// 0x3596b449
- (BOOL)sizesLocked;	// 0x3596ad25
- (CGAffineTransform)transform;	// 0x3596b39d
- (CGAffineTransform)transformHasVFlip:(BOOL)flip vFlip:(BOOL)flip2 hasHFlip:(BOOL)flip3 hFlip:(BOOL)flip4;	// 0x3596b019
- (BOOL)verticalFlip;	// 0x3596ada1
@end

