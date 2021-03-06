/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <UIFont.h> // Unknown library


@interface UIFont (UIFont_AttributedStringDrawing)
+ (id)fontWithCTFont:(CTFontRef)ctfont;	// 0x3758ef05
+ (id)fontWithDescriptor:(CTFontDescriptorRef)descriptor size:(float)size;	// 0x3758edbd
+ (id)userFontOfSize:(float)size;	// 0x3758edad
- (CTFontRef)CTFont;	// 0x3758ed89
- (CTFontDescriptorRef)CTFontDescriptor;	// 0x3758ef89
- (float)_ascenderDeltaForBehavior:(int)behavior;	// 0x3758f041
- (CGFontRef)_backingCGSFont;	// 0x3758f319
- (float)_baseLineHeightForFont:(BOOL)font;	// 0x3758efd9
- (unsigned)_defaultGlyphForChar:(unsigned short)aChar;	// 0x3758f4b9
- (float)_defaultLineHeightForUILayout;	// 0x3758f5ed
- (id)_familyName;	// 0x3758f4a1
- (BOOL)_isDefaultFace;	// 0x3758eda1
- (BOOL)_isHiraginoFont;	// 0x3758efbd
- (id)_kernOverride;	// 0x3758f139
- (const unsigned short *)_latin1MappingTable:(bool *)table;	// 0x3758f4b1
- (float)_leading;	// 0x3758efc1
- (CGAffineTransform)_textMatrixTransformForContext:(CGContextRef)context;	// 0x3758f045
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short *)nativeGlyphs count:(long)count;	// 0x3758f141
- (CGSize)advancementForGlyph:(unsigned)glyph;	// 0x3758f359
- (id)bestMatchingFontForCharacters:(const unsigned short *)characters length:(unsigned)length attributes:(id)attributes actualCoveredLength:(unsigned *)length4;	// 0x3758f51d
- (CGRect)boundingRectForFont;	// 0x3758f31d
- (id)coveredCharacterSet;	// 0x3758ed9d
- (CTFontRef)ctFontRef;	// 0x3758ed8d
- (void)getAdvancements:(CGSize *)advancements forGlyphs:(const unsigned *)glyphs count:(unsigned)count;	// 0x3758f17d
- (void)getAdvancements:(CGSize *)advancements forPackedGlyphs:(const void *)packedGlyphs length:(unsigned)length;	// 0x3758f2e5
- (void)getBoundingRects:(CGRect *)rects forCGGlyphs:(const unsigned short *)cgglyphs count:(unsigned)count;	// 0x3758f4ed
- (unsigned)getCaretPositions:(float *)positions forGlyph:(unsigned)glyph maximumLength:(unsigned)length;	// 0x3758f449
- (unsigned)glyphWithName:(id)name;	// 0x3758ef69
- (unsigned)hyphenGlyphForLocale:(id)locale;	// 0x3758f3f9
- (BOOL)isVertical;	// 0x3758efb9
- (id)lastResortFont;	// 0x3758f5a9
- (unsigned)numberOfGlyphs;	// 0x3758ef4d
- (unsigned)renderingMode;	// 0x3758f13d
- (id)screenFontWithRenderingMode:(unsigned)renderingMode;	// 0x3758f3f5
- (void)setInContext:(CGContextRef)context;	// 0x3758f0a9
- (float)underlineThickness;	// 0x3758f355
- (id)verticalFont;	// 0x3758efb5
@end

