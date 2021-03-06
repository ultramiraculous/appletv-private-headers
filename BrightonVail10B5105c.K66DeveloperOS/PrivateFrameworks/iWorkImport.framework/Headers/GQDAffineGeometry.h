/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDAffineGeometry : NSObject <GQDNameMappable> {
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
@property(assign) float angle;	// G=0x32cd1e05; S=0x32cd1e15; converted property
@property(assign) CGSize naturalSize;	// G=0x32cd1d61; S=0x32cd1d79; converted property
@property(assign) CGPoint position;	// G=0x32cd1dd9; S=0x32cd1df1; converted property
@property(assign) CGSize size;	// G=0x32cd1d8d; S=0x32cd1da5; converted property
+ (CGRect)boundsOfTransformedRect:(CGRect)transformedRect transform:(id)transform;	// 0x32cd2161
+ (const StateSpec *)stateForReading;	// 0x32cd1d55
+ (void)transformRect:(CGRect)rect transform:(id)transform upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left4 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right6;	// 0x32cd2061
- (id).cxx_construct;	// 0x32cd26a9
// converted property getter: - (float)angle;	// 0x32cd1e05
- (BOOL)aspectRatioLocked;	// 0x32cd1dc9
- (BOOL)horizontalFlip;	// 0x32cd1e25
- (CGRect)naturalBounds;	// 0x32cd2035
// converted property getter: - (CGSize)naturalSize;	// 0x32cd1d61
- (CGPoint)nonrotatedPosition;	// 0x32cd1f81
// converted property getter: - (CGPoint)position;	// 0x32cd1dd9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x32cd1b71
// converted property setter: - (void)setAngle:(float)angle;	// 0x32cd1e15
// converted property setter: - (void)setNaturalSize:(CGSize)size;	// 0x32cd1d79
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x32cd1df1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x32cd1da5
- (float)shearXAngle;	// 0x32cd1e45
- (float)shearYAngle;	// 0x32cd1e55
// converted property getter: - (CGSize)size;	// 0x32cd1d8d
- (CGSize)sizeOfBoundingBox;	// 0x32cd1e69
- (BOOL)sizesLocked;	// 0x32cd1db9
- (CGAffineTransform)transform;	// 0x32cd22a1
- (CGAffineTransform)transformHasVFlip:(BOOL)flip vFlip:(BOOL)flip2 hasHFlip:(BOOL)flip3 hFlip:(BOOL)flip4;	// 0x32cd22d9
- (BOOL)verticalFlip;	// 0x32cd1e35
@end

