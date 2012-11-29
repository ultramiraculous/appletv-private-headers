/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"
#import "OADProperties3DParent.h"

@class OADScene3D, NSArray, OADShape3D, OADFill;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
}
@property(retain) id effects;	// G=0x33ba1cd1; S=0x339d8a01; converted property
@property(retain) id fill;	// G=0x33a93409; S=0x339d89c5; converted property
@property(retain) id scene3D;	// G=0x33ba1d35; S=0x339d8a3d; converted property
@property(retain) id shape3D;	// G=0x33ba1d99; S=0x339d8a79; converted property
+ (id)defaultProperties;	// 0x339d884d
- (id)initWithDefaults;	// 0x339d8895
- (void)dealloc;	// 0x339dd3a1
// converted property getter: - (id)effects;	// 0x33ba1cd1
// converted property getter: - (id)fill;	// 0x33a93409
- (BOOL)hasEffects;	// 0x33ba1d01
- (BOOL)hasFill;	// 0x33a93439
- (BOOL)hasScene3D;	// 0x33ba1d65
- (BOOL)hasShape3D;	// 0x33ba1dc9
// converted property getter: - (id)scene3D;	// 0x33ba1d35
// converted property setter: - (void)setEffects:(id)effects;	// 0x339d8a01
// converted property setter: - (void)setFill:(id)fill;	// 0x339d89c5
// converted property setter: - (void)setScene3D:(id)d;	// 0x339d8a3d
// converted property setter: - (void)setShape3D:(id)d;	// 0x339d8a79
// converted property getter: - (id)shape3D;	// 0x33ba1d99
@end
