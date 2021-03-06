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
@property(retain) id color1;	// G=0x34a49cbd; S=0x349a8451; converted property
@property(retain) id color2;	// G=0x34a49ccd; S=0x349a848d; converted property
@property(assign) int transferMode1;	// G=0x34a49cdd; S=0x34a49ced; converted property
@property(assign) int transferMode2;	// G=0x34a49cfd; S=0x34a49d0d; converted property
- (id)init;	// 0x349a8401
// converted property getter: - (id)color1;	// 0x34a49cbd
// converted property getter: - (id)color2;	// 0x34a49ccd
- (id)copyWithZone:(NSZone *)zone;	// 0x349c1fcd
- (void)dealloc;	// 0x349a87c1
- (unsigned)hash;	// 0x34a49d1d
- (BOOL)isEqual:(id)equal;	// 0x34a49d9d
// converted property setter: - (void)setColor1:(id)a1;	// 0x349a8451
// converted property setter: - (void)setColor2:(id)a2;	// 0x349a848d
- (void)setStyleColor:(id)color;	// 0x349c22b1
// converted property setter: - (void)setTransferMode1:(int)a1;	// 0x34a49ced
// converted property setter: - (void)setTransferMode2:(int)a2;	// 0x34a49d0d
// converted property getter: - (int)transferMode1;	// 0x34a49cdd
// converted property getter: - (int)transferMode2;	// 0x34a49cfd
@end

