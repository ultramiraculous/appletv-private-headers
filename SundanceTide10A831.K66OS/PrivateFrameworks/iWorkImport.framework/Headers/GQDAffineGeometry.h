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
@property(assign) float angle;	// G=0x35cede05; S=0x35cede15; converted property
@property(assign) CGSize naturalSize;	// G=0x35cedd61; S=0x35cedd79; converted property
@property(assign) CGPoint position;	// G=0x35ceddd9; S=0x35ceddf1; converted property
@property(assign) CGSize size;	// G=0x35cedd8d; S=0x35cedda5; converted property
+ (CGRect)boundsOfTransformedRect:(CGRect)transformedRect transform:(id)transform;	// 0x35cee161
+ (const StateSpec *)stateForReading;	// 0x35cedd55
+ (void)transformRect:(CGRect)rect transform:(id)transform upperLeft:(CGPoint *)left lowerLeft:(CGPoint *)left4 lowerRight:(CGPoint *)right upperRight:(CGPoint *)right6;	// 0x35cee061
- (id).cxx_construct;	// 0x35cee6a9
// converted property getter: - (float)angle;	// 0x35cede05
- (BOOL)aspectRatioLocked;	// 0x35ceddc9
- (BOOL)horizontalFlip;	// 0x35cede25
- (CGRect)naturalBounds;	// 0x35cee035
// converted property getter: - (CGSize)naturalSize;	// 0x35cedd61
- (CGPoint)nonrotatedPosition;	// 0x35cedf81
// converted property getter: - (CGPoint)position;	// 0x35ceddd9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x35cedb71
// converted property setter: - (void)setAngle:(float)angle;	// 0x35cede15
// converted property setter: - (void)setNaturalSize:(CGSize)size;	// 0x35cedd79
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x35ceddf1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x35cedda5
- (float)shearXAngle;	// 0x35cede45
- (float)shearYAngle;	// 0x35cede55
// converted property getter: - (CGSize)size;	// 0x35cedd8d
- (CGSize)sizeOfBoundingBox;	// 0x35cede69
- (BOOL)sizesLocked;	// 0x35ceddb9
- (CGAffineTransform)transform;	// 0x35cee2a1
- (CGAffineTransform)transformHasVFlip:(BOOL)flip vFlip:(BOOL)flip2 hasHFlip:(BOOL)flip3 hFlip:(BOOL)flip4;	// 0x35cee2d9
- (BOOL)verticalFlip;	// 0x35cede35
@end

