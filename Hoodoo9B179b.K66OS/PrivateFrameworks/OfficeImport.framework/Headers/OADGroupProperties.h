/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties3DParent.h"
#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADScene3D, OADFill, NSArray, OADShape3D;

__attribute__((visibility("hidden")))
@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
@private
	OADFill *mFill;	// 28 = 0x1c
	NSArray *mEffects;	// 32 = 0x20
	OADScene3D *mScene3D;	// 36 = 0x24
	OADShape3D *mShape3D;	// 40 = 0x28
}
@property(retain) id effects;	// G=0x329d73f1; S=0x32801cdd; converted property
@property(retain) id fill;	// G=0x328ef1cd; S=0x32801c9d; converted property
@property(retain) id scene3D;	// G=0x329d7389; S=0x32801d1d; converted property
@property(retain) id shape3D;	// G=0x329d7321; S=0x32801d5d; converted property
+ (id)defaultProperties;	// 0x32801b25
- (id)initWithDefaults;	// 0x32801b6d
- (void)dealloc;	// 0x328044c9
// converted property getter: - (id)effects;	// 0x329d73f1
// converted property getter: - (id)fill;	// 0x328ef1cd
- (BOOL)hasEffects;	// 0x329d73b9
- (BOOL)hasFill;	// 0x328ef1fd
- (BOOL)hasScene3D;	// 0x329d7351
- (BOOL)hasShape3D;	// 0x329d72e9
// converted property getter: - (id)scene3D;	// 0x329d7389
// converted property setter: - (void)setEffects:(id)effects;	// 0x32801cdd
// converted property setter: - (void)setFill:(id)fill;	// 0x32801c9d
// converted property setter: - (void)setScene3D:(id)d;	// 0x32801d1d
// converted property setter: - (void)setShape3D:(id)d;	// 0x32801d5d
// converted property getter: - (id)shape3D;	// 0x329d7321
@end
