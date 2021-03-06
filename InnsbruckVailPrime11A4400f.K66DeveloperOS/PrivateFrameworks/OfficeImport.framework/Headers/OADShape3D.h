/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying> {
	OADBevel *mTopBevel;	// 4 = 0x4
	OADBevel *mBottomBevel;	// 8 = 0x8
	OADColor *mExtrusionColor;	// 12 = 0xc
	float mExtrusionHeight;	// 16 = 0x10
	OADColor *mContourColor;	// 20 = 0x14
	float mContourWidth;	// 24 = 0x18
	float mShapeDepth;	// 28 = 0x1c
	int mMaterial;	// 32 = 0x20
}
@property(retain) id bottomBevel;	// G=0x318f30a9; S=0x3187afd1; converted property
@property(retain) id contourColor;	// G=0x318f30d9; S=0x318490dd; converted property
@property(assign) float contourWidth;	// G=0x318f30e9; S=0x31849119; converted property
@property(retain) id extrusionColor;	// G=0x318f30b9; S=0x318831b9; converted property
@property(assign) float extrusionHeight;	// G=0x318f30c9; S=0x3187b00d; converted property
@property(assign) int material;	// G=0x318f3109; S=0x316c7651; converted property
@property(assign) float shapeDepth;	// G=0x318f30f9; S=0x3187b121; converted property
@property(retain) id topBevel;	// G=0x318f3099; S=0x318490a1; converted property
+ (id)nullShape3D;	// 0x316c7551
- (id)init;	// 0x316c75ad
// converted property getter: - (id)bottomBevel;	// 0x318f30a9
// converted property getter: - (id)contourColor;	// 0x318f30d9
// converted property getter: - (float)contourWidth;	// 0x318f30e9
- (id)copyWithZone:(NSZone *)zone;	// 0x318f2f81
- (void)dealloc;	// 0x31849cad
// converted property getter: - (id)extrusionColor;	// 0x318f30b9
// converted property getter: - (float)extrusionHeight;	// 0x318f30c9
- (unsigned)hash;	// 0x318f3119
- (BOOL)isEqual:(id)equal;	// 0x318f31fd
// converted property getter: - (int)material;	// 0x318f3109
// converted property setter: - (void)setBottomBevel:(id)bevel;	// 0x3187afd1
// converted property setter: - (void)setContourColor:(id)color;	// 0x318490dd
// converted property setter: - (void)setContourWidth:(float)width;	// 0x31849119
// converted property setter: - (void)setExtrusionColor:(id)color;	// 0x318831b9
// converted property setter: - (void)setExtrusionHeight:(float)height;	// 0x3187b00d
// converted property setter: - (void)setMaterial:(int)material;	// 0x316c7651
// converted property setter: - (void)setShapeDepth:(float)depth;	// 0x3187b121
// converted property setter: - (void)setTopBevel:(id)bevel;	// 0x318490a1
// converted property getter: - (float)shapeDepth;	// 0x318f30f9
// converted property getter: - (id)topBevel;	// 0x318f3099
@end

