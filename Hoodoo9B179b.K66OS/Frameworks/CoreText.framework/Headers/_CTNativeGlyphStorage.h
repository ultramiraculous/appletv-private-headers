/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorage.h"


__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage : _CTGlyphStorage {
@private
	const int *_attachCounts;	// 24 = 0x18
	unsigned _retainCount;	// 28 = 0x1c
	GlyphStack *_stack;	// 32 = 0x20
	long _capacity;	// 36 = 0x24
	void *_preallocatedStorage;	// 40 = 0x28
}
@property(readonly, assign) unsigned retainCount;	// G=0x34e746d1; converted property
+ (id)newWithCount:(long)count;	// 0x34e4f359
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x34e74a79
- (id)initWithCount:(long)count;	// 0x34e4f435
- (BOOL)_isDeallocating;	// 0x34e746cd
- (BOOL)_tryRetain;	// 0x34e746c9
- (long)attachmentCountAtIndex:(long)index;	// 0x34e50991
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x34e745c5
- (void)dealloc;	// 0x34e55fa5
- (void)finalize;	// 0x34e746e5
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x34e74869
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x34e749c9
- (void)popGlyphAtIndex:(long)index;	// 0x34e74b91
- (void)prepareWithCapacity:(long)capacity preallocated:(bool)preallocated;	// 0x34e4f4d9
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x34e74825
- (void)pushGlyphAtIndex:(long)index;	// 0x34e74add
- (oneway void)release;	// 0x34e529dd
- (id)retain;	// 0x34e50959
// converted property getter: - (unsigned)retainCount;	// 0x34e746d1
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x34e747ed
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x34e74771
- (void)setCapacity:(long)capacity;	// 0x34e74c59
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x34e747d5
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x34e747bd
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x34e7480d
- (const int *)stringIndices;	// 0x34e7475d
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x34e748d5
@end
