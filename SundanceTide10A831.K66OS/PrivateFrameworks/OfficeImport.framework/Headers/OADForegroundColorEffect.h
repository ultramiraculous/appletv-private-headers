/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
	OADColor *mForegroundColor;	// 8 = 0x8
}
@property(retain) id foregroundColor;	// G=0x36c10f61; S=0x36a471e1; converted property
- (id)init;	// 0x36a471b1
- (id)copyWithZone:(NSZone *)zone;	// 0x36c10ed5
- (void)dealloc;	// 0x36a51e85
// converted property getter: - (id)foregroundColor;	// 0x36c10f61
- (unsigned)hash;	// 0x36c10fad
- (BOOL)isEqual:(id)equal;	// 0x36c10ff5
// converted property setter: - (void)setForegroundColor:(id)color;	// 0x36a471e1
- (void)setStyleColor:(id)color;	// 0x36c10f71
@end
