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
@property(assign) float brightness;	// G=0x34c2372d; S=0x34a59a95; converted property
@property(assign) float contrast;	// G=0x34c2373d; S=0x34a59a71; converted property
- (id)init;	// 0x34a599ed
// converted property getter: - (float)brightness;	// 0x34c2372d
// converted property getter: - (float)contrast;	// 0x34c2373d
- (id)copyWithZone:(NSZone *)zone;	// 0x34c236a9
- (unsigned)hash;	// 0x34c2374d
- (BOOL)isEqual:(id)equal;	// 0x34c237b5
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x34a59a95
// converted property setter: - (void)setContrast:(float)contrast;	// 0x34a59a71
@end

