/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSTextStorage.h"
#import "UIFoundation-Structs.h"
#import "NSLayoutManagerDelegate.h"

@class NSDictionary, NSTextContainer, NSConcreteNotifyingMutableAttributedString, NSLayoutManager;

__attribute__((visibility("hidden")))
@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {
	NSConcreteNotifyingMutableAttributedString *_contents;	// 28 = 0x1c
	NSLayoutManager *_layoutManager;	// 32 = 0x20
	NSTextContainer *_textContainer;	// 36 = 0x24
	id _preliminaryCache;	// 40 = 0x28
	id _cache;	// 44 = 0x2c
	NSTextContainer *_firstTextContainer;	// 48 = 0x30
	NSTextContainer *_secondTextContainer;	// 52 = 0x34
	NSRange _currentCharacterRange;	// 56 = 0x38
	NSRange _currentGlyphRange;	// 64 = 0x40
	NSRange _temporaryCharacterRange;	// 72 = 0x48
	unsigned _retainCount;	// 80 = 0x50
	float _baselineDelta;	// 84 = 0x54
	struct {
		unsigned _typesetterBehavior : 4;
		unsigned _needToFlushCache : 1;
		unsigned _baselineMode : 1;
		unsigned _truncatesLastVisibleLine : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _reserved : 24;
	} _sdflags;	// 88 = 0x58
	NSDictionary *_styledTextOptions;	// 92 = 0x5c
}
@property(readonly, retain) NSLayoutManager *layoutManager;	// G=0x35ac1abd; converted property
@property(readonly, assign) unsigned retainCount;	// G=0x35ac0199; converted property
@property(readonly, retain) NSTextContainer *textContainer;	// G=0x35ac1acd; converted property
+ (BOOL)_fastDrawString:(id)string attributes:(id)attributes length:(long)length inRect:(CGRect)rect graphicsContext:(CGContextRef)context baselineRendering:(BOOL)rendering usesFontLeading:(BOOL)leading usesScreenFont:(BOOL)font typesetterBehavior:(int)behavior paragraphStyle:(id)style lineBreakMode:(int)mode boundingRect:(CGRect *)rect12 padding:(float)padding scrollable:(bool)scrollable baselineOffset:(float *)offset;	// 0x35ac0471
+ (void)_setHasCustomSettings:(BOOL)settings;	// 0x35ac32a1
+ (id)allocWithZone:(NSZone *)zone;	// 0x35ac0035
+ (void)initialize;	// 0x35abff91
+ (id)stringDrawingTextStorage;	// 0x35abffed
- (id)init;	// 0x35ac2a11
- (float)_baselineDelta;	// 0x35ac1bed
- (BOOL)_baselineMode;	// 0x35ac1c21
- (BOOL)_fastDrawGlyphs:(unsigned short *)glyphs advances:(CGSize *)advances length:(unsigned)length font:(id)font color:(id)color containerSize:(CGSize)size usedRect:(CGRect)rect startingLocation:(CGPoint)location inRect:(CGRect)rect9 onView:(id)view context:(CGContextRef)context pinToTop:(BOOL)top;	// 0x35ac0469
- (BOOL)_forceWordWrapping;	// 0x35ac1cc1
- (BOOL)_informationForFont:(id)font glyphTable:(unsigned short **)table positionTable:(float **)table3;	// 0x35ac03d1
- (BOOL)_isDeallocating;	// 0x35ac010d
- (BOOL)_isStringDrawingTextStorage;	// 0x35ac2a0d
- (void)_setBaselineDelta:(float)delta;	// 0x35ac1bdd
- (void)_setBaselineMode:(BOOL)mode;	// 0x35ac1bfd
- (void)_setForceWordWrapping:(BOOL)wrapping;	// 0x35ac1cd5
- (void)_setStyledTextOptions:(id)options;	// 0x35ac1c6d
- (void)_setTruncatesLastLine:(BOOL)line;	// 0x35ac1c49
- (id)_styledTextOptions;	// 0x35ac1cb1
- (BOOL)_truncatesLastLine;	// 0x35ac1c35
- (BOOL)_tryRetain;	// 0x35ac0109
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x35ac3271
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x35ac3151
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x35ac3171
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x35ac3131
- (void)dealloc;	// 0x35ac01ad
- (CGPoint)defaultTextContainerOriginForRect:(CGRect)rect;	// 0x35ac2091
- (void)drawTextContainer:(id)container withRect:(CGRect)rect graphicsContext:(CGContextRef)context baselineMode:(BOOL)mode scrollable:(BOOL)scrollable padding:(float)padding;	// 0x35ac1cf9
- (BOOL)fastDrawAttributedString:(id)string containerSize:(CGSize)size padding:(float)padding inRect:(CGRect)rect onView:(id)view pinToTop:(BOOL)top sizeOnly:(BOOL)only size:(CGSize *)size8;	// 0x35ac19e1
- (BOOL)fastDrawString:(id)string attributes:(id)attributes containerSize:(CGSize)size padding:(float)padding inRect:(CGRect)rect onView:(id)view pinToTop:(BOOL)top sizeOnly:(BOOL)only size:(CGSize *)size9;	// 0x35ac0f39
- (id)flippedView;	// 0x35ac1add
- (void)fontSetChanged;	// 0x35ac29c9
- (void)invalidate;	// 0x35ac296d
// converted property getter: - (id)layoutManager;	// 0x35ac1abd
- (unsigned)length;	// 0x35ac30f1
- (void)processEditing;	// 0x35ac3041
- (oneway void)release;	// 0x35ac0145
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x35ac322d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x35ac31b5
- (id)retain;	// 0x35ac0111
// converted property getter: - (unsigned)retainCount;	// 0x35ac0199
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x35ac31f9
- (id)string;	// 0x35ac3111
// converted property getter: - (id)textContainer;	// 0x35ac1acd
- (id)textContainerForAttributedString:(id)attributedString;	// 0x35ac2225
- (id)textContainerForAttributedString:(id)attributedString containerSize:(CGSize)size lineFragmentPadding:(float)padding;	// 0x35ac2255
- (int)typesetterBehavior;	// 0x35ac1ae1
- (CGRect)usedRectForTextContainer:(id)textContainer;	// 0x35ac1af5
@end

