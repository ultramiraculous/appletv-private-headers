/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


__attribute__((visibility("hidden")))
@interface WMParagraphStyle : WMStyle {
@private
	BOOL mIsInTextFrame;	// 12 = 0xc
}
+ (BOOL)isShadingNull:(id)null;	// 0x344c8509
- (id)initWithWDParagraphProperties:(id)wdparagraphProperties isInTextFrame:(BOOL)textFrame;	// 0x345782e5
- (id)initWithWDStyle:(id)wdstyle isInTextFrame:(BOOL)textFrame;	// 0x34462b75
- (void)addListProperties:(id)properties;	// 0x34466935
- (void)addParagraphProperties:(id)properties;	// 0x34462c31
- (void)addParagraphStyleCharacterProperties:(id)properties;	// 0x344672f9
- (void)mapBorders:(id)borders;	// 0x3446374d
@end

