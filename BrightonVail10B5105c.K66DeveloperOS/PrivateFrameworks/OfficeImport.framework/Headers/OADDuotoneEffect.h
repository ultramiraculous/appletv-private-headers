/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect {
	OADColor *mColor1;	// 8 = 0x8
	OADColor *mColor2;	// 12 = 0xc
	int mTransferMode1;	// 16 = 0x10
	int mTransferMode2;	// 20 = 0x14
}
@property(retain) id color1;	// G=0x37aeccbd; S=0x37a4b451; converted property
@property(retain) id color2;	// G=0x37aecccd; S=0x37a4b48d; converted property
@property(assign) int transferMode1;	// G=0x37aeccdd; S=0x37aecced; converted property
@property(assign) int transferMode2;	// G=0x37aeccfd; S=0x37aecd0d; converted property
- (id)init;	// 0x37a4b401
// converted property getter: - (id)color1;	// 0x37aeccbd
// converted property getter: - (id)color2;	// 0x37aecccd
- (id)copyWithZone:(NSZone *)zone;	// 0x37a64fcd
- (void)dealloc;	// 0x37a4b7c1
- (unsigned)hash;	// 0x37aecd1d
- (BOOL)isEqual:(id)equal;	// 0x37aecd9d
// converted property setter: - (void)setColor1:(id)a1;	// 0x37a4b451
// converted property setter: - (void)setColor2:(id)a2;	// 0x37a4b48d
- (void)setStyleColor:(id)color;	// 0x37a652b1
// converted property setter: - (void)setTransferMode1:(int)a1;	// 0x37aecced
// converted property setter: - (void)setTransferMode2:(int)a2;	// 0x37aecd0d
// converted property getter: - (int)transferMode1;	// 0x37aeccdd
// converted property getter: - (int)transferMode2;	// 0x37aeccfd
@end
