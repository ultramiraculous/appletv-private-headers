/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"
#import "OADProperties3DParent.h"

@class OADStroke, OADScene3D, NSArray, OADShape3D, OADFill;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
	OADStroke *mStroke;	// 44 = 0x2c
	unsigned mHasIsBehindText : 1;	// 48 = 0x30
	unsigned mIsBehindText : 1;	// 48 = 0x30
}
@property(retain) id effects;	// G=0x31beee69; S=0x31b9be45; converted property
@property(retain) id fill;	// G=0x31beedcd; S=0x31b9be09; converted property
@property(assign) BOOL isBehindText;	// G=0x31d270a5; S=0x31b9c91d; converted property
@property(retain) id scene3D;	// G=0x31dd0005; S=0x31b9c795; converted property
@property(retain) id shape3D;	// G=0x31dd0035; S=0x31b9c8e1; converted property
@property(retain) id stroke;	// G=0x31beef35; S=0x31b9c6b5; converted property
- (id)initWithDefaults;	// 0x31b9b9b5
- (void)dealloc;	// 0x31ba0669
// converted property getter: - (id)effects;	// 0x31beee69
// converted property getter: - (id)fill;	// 0x31beedcd
- (BOOL)hasEffects;	// 0x31beee35
- (BOOL)hasFill;	// 0x31beed99
- (BOOL)hasIsBehindText;	// 0x31bef4e5
- (BOOL)hasScene3D;	// 0x31beee99
- (BOOL)hasShape3D;	// 0x31beeecd
- (BOOL)hasStroke;	// 0x31beef01
- (unsigned)hash;	// 0x31dd0065
// converted property getter: - (BOOL)isBehindText;	// 0x31d270a5
- (BOOL)isEqual:(id)equal;	// 0x31dd0179
- (void)removeUnnecessaryOverrides;	// 0x31beea09
// converted property getter: - (id)scene3D;	// 0x31dd0005
// converted property setter: - (void)setEffects:(id)effects;	// 0x31b9be45
// converted property setter: - (void)setFill:(id)fill;	// 0x31b9be09
// converted property setter: - (void)setIsBehindText:(BOOL)text;	// 0x31b9c91d
- (void)setParent:(id)parent;	// 0x31b9c955
// converted property setter: - (void)setScene3D:(id)d;	// 0x31b9c795
// converted property setter: - (void)setShape3D:(id)d;	// 0x31b9c8e1
// converted property setter: - (void)setStroke:(id)stroke;	// 0x31b9c6b5
// converted property getter: - (id)shape3D;	// 0x31dd0035
// converted property getter: - (id)stroke;	// 0x31beef35
@end

