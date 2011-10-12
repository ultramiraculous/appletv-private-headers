/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class OADBevel, OADColor;

__attribute__((visibility("hidden")))
@interface OADShape3D : NSObject <NSCopying> {
@private
	OADBevel *mTopBevel;	// 4 = 0x4
	OADBevel *mBottomBevel;	// 8 = 0x8
	OADColor *mExtrusionColor;	// 12 = 0xc
	float mExtrusionHeight;	// 16 = 0x10
	OADColor *mContourColor;	// 20 = 0x14
	float mContourWidth;	// 24 = 0x18
	float mShapeDepth;	// 28 = 0x1c
	int mMaterial;	// 32 = 0x20
}
@property(retain) id bottomBevel;	// G=0x3578f239; S=0x356bd515; converted property
@property(retain) id contourColor;	// G=0x3578f269; S=0x356b3e8d; converted property
@property(assign) float contourWidth;	// G=0x3578f279; S=0x356b3ecd; converted property
@property(retain) id extrusionColor;	// G=0x3578f249; S=0x356d3fc9; converted property
@property(assign) float extrusionHeight;	// G=0x3578f259; S=0x356bd555; converted property
@property(assign) int material;	// G=0x3578f299; S=0x3559f3e1; converted property
@property(assign) float shapeDepth;	// G=0x3578f289; S=0x356bd695; converted property
@property(retain) id topBevel;	// G=0x3578f229; S=0x356acf9d; converted property
+ (id)nullShape3D;	// 0x3559f2e1
- (id)init;	// 0x3559f33d
// converted property getter: - (id)bottomBevel;	// 0x3578f239
// converted property getter: - (id)contourColor;	// 0x3578f269
// converted property getter: - (float)contourWidth;	// 0x3578f279
- (id)copyWithZone:(NSZone *)zone;	// 0x3578f6f5
- (void)dealloc;	// 0x356b198d
// converted property getter: - (id)extrusionColor;	// 0x3578f249
// converted property getter: - (float)extrusionHeight;	// 0x3578f259
- (unsigned)hash;	// 0x3578f611
- (BOOL)isEqual:(id)equal;	// 0x3578f40d
// converted property getter: - (int)material;	// 0x3578f299
// converted property setter: - (void)setBottomBevel:(id)bevel;	// 0x356bd515
// converted property setter: - (void)setContourColor:(id)color;	// 0x356b3e8d
// converted property setter: - (void)setContourWidth:(float)width;	// 0x356b3ecd
// converted property setter: - (void)setExtrusionColor:(id)color;	// 0x356d3fc9
// converted property setter: - (void)setExtrusionHeight:(float)height;	// 0x356bd555
// converted property setter: - (void)setMaterial:(int)material;	// 0x3559f3e1
// converted property setter: - (void)setShapeDepth:(float)depth;	// 0x356bd695
// converted property setter: - (void)setTopBevel:(id)bevel;	// 0x356acf9d
// converted property getter: - (float)shapeDepth;	// 0x3578f289
// converted property getter: - (id)topBevel;	// 0x3578f229
@end

