/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSGlyphInfo.h"

@class UIFont;

__attribute__((visibility("hidden")))
@interface NSIdentityGlyphInfo : NSGlyphInfo {
	UIFont *_font;	// 8 = 0x8
	unsigned _glyph;	// 12 = 0xc
}
+ (id)glyphInfoWithGlyph:(unsigned)glyph forFont:(id)font baseString:(id)string;	// 0x3463ef8d
+ (void)initialize;	// 0x3463efe5
- (id)initWithGlyph:(unsigned)glyph forFont:(id)font baseString:(id)string;	// 0x3463f025
- (id)_font;	// 0x3463f181
- (unsigned)_glyph;	// 0x3463f191
- (unsigned)_glyphForFont:(id)font baseString:(id)string;	// 0x3463f0d5
- (void)dealloc;	// 0x3463f089
- (id)description;	// 0x3463f229
- (void)encodeWithCoder:(id)coder;	// 0x3463f1a1
@end

