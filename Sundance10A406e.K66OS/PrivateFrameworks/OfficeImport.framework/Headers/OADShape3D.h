/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADColor, OADBevel;

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
@property(retain) id bottomBevel;	// G=0x350a9f8d; S=0x3500c3ad; converted property
@property(retain) id contourColor;	// G=0x350a9fbd; S=0x34feccfd; converted property
@property(assign) float contourWidth;	// G=0x350a9fcd; S=0x34fecd39; converted property
@property(retain) id extrusionColor;	// G=0x350a9f9d; S=0x3500c3e9; converted property
@property(assign) float extrusionHeight;	// G=0x350a9fad; S=0x3500c425; converted property
@property(assign) int material;	// G=0x350a9ffd; S=0x34e72919; converted property
@property(assign) float shapeDepth;	// G=0x350a9fdd; S=0x350a9fed; converted property
@property(retain) id topBevel;	// G=0x350a9f7d; S=0x34fbac79; converted property
+ (id)nullShape3D;	// 0x34e72819
- (id)init;	// 0x34e72875
// converted property getter: - (id)bottomBevel;	// 0x350a9f8d
// converted property getter: - (id)contourColor;	// 0x350a9fbd
// converted property getter: - (float)contourWidth;	// 0x350a9fcd
- (id)copyWithZone:(NSZone *)zone;	// 0x350a9e65
- (void)dealloc;	// 0x34fbfafd
// converted property getter: - (id)extrusionColor;	// 0x350a9f9d
// converted property getter: - (float)extrusionHeight;	// 0x350a9fad
- (unsigned)hash;	// 0x350aa00d
- (BOOL)isEqual:(id)equal;	// 0x350aa0ed
// converted property getter: - (int)material;	// 0x350a9ffd
// converted property setter: - (void)setBottomBevel:(id)bevel;	// 0x3500c3ad
// converted property setter: - (void)setContourColor:(id)color;	// 0x34feccfd
// converted property setter: - (void)setContourWidth:(float)width;	// 0x34fecd39
// converted property setter: - (void)setExtrusionColor:(id)color;	// 0x3500c3e9
// converted property setter: - (void)setExtrusionHeight:(float)height;	// 0x3500c425
// converted property setter: - (void)setMaterial:(int)material;	// 0x34e72919
// converted property setter: - (void)setShapeDepth:(float)depth;	// 0x350a9fed
// converted property setter: - (void)setTopBevel:(id)bevel;	// 0x34fbac79
// converted property getter: - (float)shapeDepth;	// 0x350a9fdd
// converted property getter: - (id)topBevel;	// 0x350a9f7d
@end

