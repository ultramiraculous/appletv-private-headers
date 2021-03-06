/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import <NSObject.h> // Unknown library


@interface CTGlyphStorageInterface : NSObject {
	long _glyphCount;	// 4 = 0x4
	unsigned short *_glyphs;	// 8 = 0x8
	CGSize *_advances;	// 12 = 0xc
	unsigned *_props;	// 16 = 0x10
	int *_stringIndexes;	// 20 = 0x14
	int *_absorbedCounts;	// 24 = 0x18
}
- (void)initGlyphStack:(long)stack;	// 0x379a4f05
- (CTGlyphStorageRef)createCopy:(XXStruct_K5nmsA)copy;	// 0x379a4edd
- (void)disposeGlyphStack;	// 0x379a4f11
- (void)getCustomAdvance:(CGSize *)advance forIndex:(long)index;	// 0x379a4ee1
- (void)insertGlyphs:(XXStruct_K5nmsA)glyphs;	// 0x379a4f01
- (void)moveGlyphsTo:(long)to from:(XXStruct_K5nmsA)from;	// 0x379a4efd
- (void)popGlyph:(long)glyph;	// 0x379a4f0d
- (void)pushGlyph:(long)glyph;	// 0x379a4f09
- (void)setAbsorbedCount:(long)count forIndex:(long)index;	// 0x379a4ef1
- (void)setAdvance:(CGSize)advance forIndex:(long)index;	// 0x379a4ee9
- (void)setGlyphID:(unsigned short)anId forIndex:(long)index;	// 0x379a4ee5
- (void)setProps:(unsigned)props forIndex:(long)index;	// 0x379a4eed
- (void)setStringIndex:(long)index forIndex:(long)index2;	// 0x379a4ef5
- (void)swapGlyph:(long)glyph withIndex:(long)index;	// 0x379a4ef9
@end

