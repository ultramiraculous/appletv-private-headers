/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShadowEffect.h"
#import "OfficeImport-Structs.h"


@interface OADPresetShadowEffect : OADShadowEffect {
	int mPresetShadowType;	// 24 = 0x18
}
@property(assign) int presetShadowType;	// G=0x3501aad1; S=0x3501aac1; converted property
- (id)init;	// 0x3501a989
- (id)copyWithZone:(NSZone *)zone;	// 0x350a8725
- (id)equivalentOuterShadowEffect;	// 0x350a878d
- (unsigned)hash;	// 0x350a8a35
- (BOOL)isEqual:(id)equal;	// 0x350a8a71
// converted property getter: - (int)presetShadowType;	// 0x3501aad1
// converted property setter: - (void)setPresetShadowType:(int)type;	// 0x3501aac1
@end

