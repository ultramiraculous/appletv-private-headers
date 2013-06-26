/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"


@interface OADLuminanceEffect : OADBlipEffect {
	float mBrightness;	// 8 = 0x8
	float mContrast;	// 12 = 0xc
}
@property(assign) float brightness;	// G=0x318ec8a1; S=0x31778791; converted property
@property(assign) float contrast;	// G=0x318ec8b1; S=0x3177876d; converted property
- (id)init;	// 0x31778729
// converted property getter: - (float)brightness;	// 0x318ec8a1
// converted property getter: - (float)contrast;	// 0x318ec8b1
- (id)copyWithZone:(NSZone *)zone;	// 0x318ec81d
- (unsigned)hash;	// 0x318ec8c1
- (BOOL)isEqual:(id)equal;	// 0x318ec929
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x31778791
// converted property setter: - (void)setContrast:(float)contrast;	// 0x3177876d
@end
