/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <UIFont.h> // Unknown library


@interface UIFont (UIFont_AttributedStringDrawing)
+ (id)fontWithCTFont:(CTFontRef)ctfont;	// 0x35ad2f05
+ (id)fontWithDescriptor:(CTFontDescriptorRef)descriptor size:(float)size;	// 0x35ad2dbd
+ (id)userFontOfSize:(float)size;	// 0x35ad2dad
- (CTFontRef)CTFont;	// 0x35ad2d89
- (CTFontDescriptorRef)CTFontDescriptor;	// 0x35ad2f89
- (float)_ascenderDeltaForBehavior:(int)behavior;	// 0x35ad3041
- (CGFontRef)_backingCGSFont;	// 0x35ad3319
- (float)_baseLineHeightForFont:(BOOL)font;	// 0x35ad2fd9
- (unsigned)_defaultGlyphForChar:(unsigned short)aChar;	// 0x35ad34b9
- (float)_defaultLineHeightForUILayout;	// 0x35ad35ed
- (id)_familyName;	// 0x35ad34a1
- (BOOL)_isDefaultFace;	// 0x35ad2da1
- (BOOL)_isHiraginoFont;	// 0x35ad2fbd
- (id)_kernOverride;	// 0x35ad3139
- (const unsigned short *)_latin1MappingTable:(bool *)table;	// 0x35ad34b1
- (float)_leading;	// 0x35ad2fc1
- (CGAffineTransform)_textMatrixTransformForContext:(CGContextRef)context;	// 0x35ad3045
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short *)nativeGlyphs count:(long)count;	// 0x35ad3141
- (CGSize)advancementForGlyph:(unsigned)glyph;	// 0x35ad3359
- (id)bestMatchingFontForCharacters:(const unsigned short *)characters length:(unsigned)length attributes:(id)attributes actualCoveredLength:(unsigned *)length4;	// 0x35ad351d
- (CGRect)boundingRectForFont;	// 0x35ad331d
- (id)coveredCharacterSet;	// 0x35ad2d9d
- (CTFontRef)ctFontRef;	// 0x35ad2d8d
- (void)getAdvancements:(CGSize *)advancements forGlyphs:(const unsigned *)glyphs count:(unsigned)count;	// 0x35ad317d
- (void)getAdvancements:(CGSize *)advancements forPackedGlyphs:(const void *)packedGlyphs length:(unsigned)length;	// 0x35ad32e5
- (void)getBoundingRects:(CGRect *)rects forCGGlyphs:(const unsigned short *)cgglyphs count:(unsigned)count;	// 0x35ad34ed
- (unsigned)getCaretPositions:(float *)positions forGlyph:(unsigned)glyph maximumLength:(unsigned)length;	// 0x35ad3449
- (unsigned)glyphWithName:(id)name;	// 0x35ad2f69
- (unsigned)hyphenGlyphForLocale:(id)locale;	// 0x35ad33f9
- (BOOL)isVertical;	// 0x35ad2fb9
- (id)lastResortFont;	// 0x35ad35a9
- (unsigned)numberOfGlyphs;	// 0x35ad2f4d
- (unsigned)renderingMode;	// 0x35ad313d
- (id)screenFontWithRenderingMode:(unsigned)renderingMode;	// 0x35ad33f5
- (void)setInContext:(CGContextRef)context;	// 0x35ad30a9
- (float)underlineThickness;	// 0x35ad3355
- (id)verticalFont;	// 0x35ad2fb5
@end

