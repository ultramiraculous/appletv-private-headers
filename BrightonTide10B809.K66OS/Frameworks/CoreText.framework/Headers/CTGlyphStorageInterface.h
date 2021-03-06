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
- (void)initGlyphStack:(long)stack;	// 0x317c1e2d
- (CTGlyphStorageRef)createCopy:(XXStruct_K5nmsA)copy;	// 0x317c1e05
- (void)disposeGlyphStack;	// 0x317c1e39
- (void)getCustomAdvance:(CGSize *)advance forIndex:(long)index;	// 0x317c1e09
- (void)insertGlyphs:(XXStruct_K5nmsA)glyphs;	// 0x317c1e29
- (void)moveGlyphsTo:(long)to from:(XXStruct_K5nmsA)from;	// 0x317c1e25
- (void)popGlyph:(long)glyph;	// 0x317c1e35
- (void)pushGlyph:(long)glyph;	// 0x317c1e31
- (void)setAbsorbedCount:(long)count forIndex:(long)index;	// 0x317c1e19
- (void)setAdvance:(CGSize)advance forIndex:(long)index;	// 0x317c1e11
- (void)setGlyphID:(unsigned short)anId forIndex:(long)index;	// 0x317c1e0d
- (void)setProps:(unsigned)props forIndex:(long)index;	// 0x317c1e15
- (void)setStringIndex:(long)index forIndex:(long)index2;	// 0x317c1e1d
- (void)swapGlyph:(long)glyph withIndex:(long)index;	// 0x317c1e21
@end

