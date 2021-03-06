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
+ (BOOL)_allowsScreenFontKerning;	// 0x35a739dd
+ (void)initialize;	// 0x35a73725
+ (id)sharedInstance;	// 0x35a7387d
+ (id)sharedTypesetter;	// 0x35a738dd
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x35a762e9
- (int)_baseWritingDirection;	// 0x35a73ba1
- (BOOL)_baselineRenderingMode;	// 0x35a73e81
- (const char *)_bidiLevels;	// 0x35a73c31
- (CTTypesetterRef)_ctTypesetter;	// 0x35a73cc5
- (void)_doBidiProcessing;	// 0x35a739ed
- (void)_flushCachedObjects;	// 0x35a7515d
- (BOOL)_forceTruncation;	// 0x35a73f7d
- (BOOL)_forceWordWrapping;	// 0x35a74079
- (id)_getATSTypesetterGuts;	// 0x35a73e1d
- (BOOL)_isDeallocating;	// 0x35a738fd
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned *)index characterIndex:(unsigned *)index2 atPoint:(CGPoint *)point renderingContext:(id *)context;	// 0x35a74175
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x35a76315
- (void)_setBaselineRenderingMode:(BOOL)mode;	// 0x35a73ef1
- (void)_setForceTruncation:(BOOL)truncation;	// 0x35a73fed
- (void)_setForceWordWrapping:(BOOL)wrapping;	// 0x35a740e9
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x35a751f9
- (BOOL)_tryRetain;	// 0x35a738f9
- (BOOL)_usesScreenFonts;	// 0x35a751f5
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x35a75779
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x35a760d5
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x35a7552d
- (void)beginParagraph;	// 0x35a75239
- (void)dealloc;	// 0x35a73991
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x35a756c5
- (void)endParagraph;	// 0x35a753a1
- (unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned)index;	// 0x35a75ad9
- (float)hyphenationFactorForGlyphAtIndex:(unsigned)index;	// 0x35a75a91
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x35a75dc5
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x35a75ae1
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x35a757a5
- (CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect remainingRect:(CGRect *)rect;	// 0x35a76381
- (oneway void)release;	// 0x35a73901
@end

