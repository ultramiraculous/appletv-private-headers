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
+ (BOOL)isShadingNull:(id)null;	// 0x31226c71
- (id)initWithWDParagraphProperties:(id)wdparagraphProperties isInTextFrame:(BOOL)textFrame;	// 0x313d4bbd
- (id)initWithWDStyle:(id)wdstyle isInTextFrame:(BOOL)textFrame;	// 0x311770bd
- (void)addListProperties:(id)properties;	// 0x311852bd
- (void)addParagraphProperties:(id)properties;	// 0x31177179
- (void)addParagraphStyleCharacterProperties:(id)properties;	// 0x31185ea5
- (void)mapBorders:(id)borders;	// 0x31177f21
@end
