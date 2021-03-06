/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTypesetter.h"

@class NSParagraphStyle, NSAttributedString, NSArray, NSTextContainer, NSLayoutManager;

@interface NSATSTypesetter : NSTypesetter {
	NSAttributedString *attributedString;	// 8 = 0x8
	NSRange paragraphGlyphRange;	// 12 = 0xc
	NSRange paragraphSeparatorGlyphRange;	// 20 = 0x14
	float lineFragmentPadding;	// 28 = 0x1c
	NSLayoutManager *layoutManager;	// 32 = 0x20
	NSArray *textContainers;	// 36 = 0x24
	NSTextContainer *currentTextContainer;	// 40 = 0x28
	unsigned currentTextContainerIndex;	// 44 = 0x2c
	CGSize currentTextContainerSize;	// 48 = 0x30
	NSParagraphStyle *currentParagraphStyle;	// 56 = 0x38
	void *_atsReserved[8];	// 60 = 0x3c
	id _private;	// 92 = 0x5c
}
+ (BOOL)_allowsScreenFontKerning;	// 0x36be289d
+ (void)initialize;	// 0x36be25e5
+ (id)sharedInstance;	// 0x36be273d
+ (id)sharedTypesetter;	// 0x36be279d
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x36be51a9
- (int)_baseWritingDirection;	// 0x36be2a61
- (BOOL)_baselineRenderingMode;	// 0x36be2d41
- (const char *)_bidiLevels;	// 0x36be2af1
- (CTTypesetterRef)_ctTypesetter;	// 0x36be2b85
- (void)_doBidiProcessing;	// 0x36be28ad
- (void)_flushCachedObjects;	// 0x36be401d
- (BOOL)_forceTruncation;	// 0x36be2e3d
- (BOOL)_forceWordWrapping;	// 0x36be2f39
- (id)_getATSTypesetterGuts;	// 0x36be2cdd
- (BOOL)_isDeallocating;	// 0x36be27bd
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned *)index characterIndex:(unsigned *)index2 atPoint:(CGPoint *)point renderingContext:(id *)context;	// 0x36be3035
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x36be51d5
- (void)_setBaselineRenderingMode:(BOOL)mode;	// 0x36be2db1
- (void)_setForceTruncation:(BOOL)truncation;	// 0x36be2ead
- (void)_setForceWordWrapping:(BOOL)wrapping;	// 0x36be2fa9
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x36be40b9
- (BOOL)_tryRetain;	// 0x36be27b9
- (BOOL)_usesScreenFonts;	// 0x36be40b5
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x36be4639
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x36be4f95
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x36be43ed
- (void)beginParagraph;	// 0x36be40f9
- (void)dealloc;	// 0x36be2851
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x36be4585
- (void)endParagraph;	// 0x36be4261
- (unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned)index;	// 0x36be4999
- (float)hyphenationFactorForGlyphAtIndex:(unsigned)index;	// 0x36be4951
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x36be4c85
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x36be49a1
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x36be4665
- (CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect remainingRect:(CGRect *)rect;	// 0x36be5241
- (oneway void)release;	// 0x36be27c1
@end

