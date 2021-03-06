/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSGlyphStorage.h"
#import "UIFoundation-Structs.h"
#import "NSCoding.h"

@class NSStorage, NSTextContainer, NSTextStorage, NSGlyphGenerator, NSTypesetter, NSMutableArray, UIFont, NSRunStorage, NSSortedArray;

@interface NSLayoutManager : NSObject <NSCoding, NSGlyphStorage> {
	NSTextStorage *_textStorage;	// 4 = 0x4
	NSGlyphGenerator *_glyphGenerator;	// 8 = 0x8
	NSTypesetter *_typesetter;	// 12 = 0xc
	NSMutableArray *_textContainers;	// 16 = 0x10
	NSStorage *_containerUsedRects;	// 20 = 0x14
	NSStorage *_glyphs;	// 24 = 0x18
	NSRunStorage *_containerRuns;	// 28 = 0x1c
	NSRunStorage *_fragmentRuns;	// 32 = 0x20
	NSRunStorage *_glyphLocations;	// 36 = 0x24
	NSRunStorage *_glyphRotationRuns;	// 40 = 0x28
	CGRect _extraLineFragmentRect;	// 44 = 0x2c
	CGRect _extraLineFragmentUsedRect;	// 60 = 0x3c
	NSTextContainer *_extraLineFragmentContainer;	// 76 = 0x4c
	NSSortedArray *_glyphHoles;	// 80 = 0x50
	NSSortedArray *_layoutHoles;	// 84 = 0x54
	lmFlags _lmFlags;	// 88 = 0x58
	id _delegate;	// 92 = 0x5c
	unsigned short _textViewResizeDisableStack;	// 96 = 0x60
	unsigned short _displayInvalidationDisableStack;	// 98 = 0x62
	NSRange _deferredDisplayCharRange;	// 100 = 0x64
	CGRect *_cachedRectArray;	// 108 = 0x6c
	unsigned _cachedRectArrayCapacity;	// 112 = 0x70
	char *_glyphBuffer;	// 116 = 0x74
	unsigned _glyphBufferSize;	// 120 = 0x78
	NSRange _cachedLocationNominalGlyphRange;	// 124 = 0x7c
	unsigned _cachedLocationGlyphIndex;	// 132 = 0x84
	CGPoint _cachedLocation;	// 136 = 0x88
	NSRange _cachedFontCharRange;	// 144 = 0x90
	UIFont *_cachedFont;	// 152 = 0x98
	unsigned _firstUnlaidGlyphIndex;	// 156 = 0x9c
	unsigned _firstUnlaidCharIndex;	// 160 = 0xa0
	NSRange _newlyFilledGlyphRange;	// 164 = 0xa4
	id _extraData;	// 172 = 0xac
}
@property(assign) BOOL allowsNonContiguousLayout;	// G=0x3465ddd1; S=0x3465dd1d; converted property
@property(assign) BOOL backgroundLayoutEnabled;	// G=0x3465df21; S=0x3465debd; converted property
@property(assign) id delegate;	// G=0x3465d349; S=0x3465d359; converted property
@property(readonly, assign) CGRect extraLineFragmentRect;	// G=0x3465fec9; converted property
@property(readonly, assign) CGRect extraLineFragmentUsedRect;	// G=0x3465fedd; converted property
@property(readonly, assign) unsigned firstUnlaidGlyphIndex;	// G=0x3465f8e9; converted property
@property(assign) BOOL flipsIfNeeded;	// G=0x346571ad; S=0x346571c5; converted property
@property(retain) NSGlyphGenerator *glyphGenerator;	// G=0x3465d0bd; S=0x3465d105; converted property
@property(assign) float hyphenationFactor;	// G=0x3465e1e1; S=0x3465e145; converted property
@property(assign) BOOL ignoresAntialiasThreshold;	// G=0x34657341; S=0x34657345; converted property
@property(assign) BOOL ignoresViewTransformations;	// G=0x34657271; S=0x34657289; converted property
@property(assign) BOOL showsControlCharacters;	// G=0x3465e131; S=0x3465e099; converted property
@property(assign) BOOL showsInvisibleCharacters;	// G=0x3465e085; S=0x3465dfed; converted property
@property(readonly, retain) NSMutableArray *textContainers;	// G=0x3465d431; converted property
@property(retain) NSTextStorage *textStorage;	// G=0x3465c83d; S=0x3465c85d; converted property
@property(retain) NSTypesetter *typesetter;	// G=0x3465d1fd; S=0x3465d255; converted property
@property(assign) int typesetterBehavior;	// G=0x3465e225; S=0x3465e201; converted property
@property(assign) BOOL usesFontLeading;	// G=0x34663bed; S=0x34663c05; converted property
@property(assign) BOOL usesScreenFonts;	// G=0x3465df35; S=0x3465df49; converted property
+ (id)_defaultLinkAttributes;	// 0x3464a18d
+ (void)_doSomeBackgroundLayout;	// 0x3464d461
+ (BOOL)_ignoresViewTransformations;	// 0x3465b8e5
+ (BOOL)_inBackgroundLayout;	// 0x3464d45d
+ (BOOL)_showsControlCharacters;	// 0x3465b8f9
+ (BOOL)_showsInvisibleCharacters;	// 0x3465b8e9
+ (BOOL)_usesScreenFonts;	// 0x3465b8e1
+ (void)initialize;	// 0x3465b769
- (id)init;	// 0x3465bdf9
- (id)initWithCoder:(id)coder;	// 0x3465c2c5
- (void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)rawGlyphRange byDelta:(int)delta;	// 0x3464b25d
- (BOOL)_alwaysDrawsActive;	// 0x34657349
- (id)_attachmentSizesRun;	// 0x34656dbd
- (id)_blockDescription;	// 0x3464e161
- (NSRange)_blockRangeForCharRange:(NSRange)charRange;	// 0x3464a271
- (NSRange)_blockRangeForGlyphRange:(NSRange)glyphRange;	// 0x3464a545
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange;	// 0x3464a8cd
- (NSRange)_blockRowRangeForCharRange:(NSRange)charRange completeRows:(BOOL *)rows;	// 0x3464a5b1
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange;	// 0x3464a975
- (NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange completeRows:(BOOL *)rows;	// 0x3464a8f9
- (CGRect)_boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer fast:(BOOL)fast fullLineRectsOnly:(BOOL)only;	// 0x34650ed5
- (BOOL)_canDoLayout;	// 0x3464b261
- (NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)andAfterContainer;	// 0x3465d441
- (void)_clearCurrentAttachmentSettings;	// 0x34656e75
- (void)_clearTemporaryAttributes;	// 0x34656e9d
- (void)_clearTemporaryAttributesForCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x34656ee1
- (void)_commonInit;	// 0x3465b909
- (id)_containerDescription;	// 0x3464d469
- (unsigned)_currentAttachmentIndex;	// 0x34656df9
- (CGRect)_currentAttachmentRect;	// 0x34656dc1
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned)glyphIndex nextGlyphIndex:(unsigned *)index;	// 0x3464b6c9
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned)glyphIndex forCharacterRange:(NSRange)characterRange inTextContainer:(id)textContainer lineLimit:(unsigned)limit nextGlyphIndex:(unsigned *)index;	// 0x3464b6c1
- (void)_drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point parameters:(NSDrawingParameters *)parameters;	// 0x34654321
- (void)_drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x34654be9
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders;	// 0x346593d1
- (void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders flipped:(BOOL)flipped;	// 0x34658f01
- (void)_drawLineForGlyphRange:(NSRange)glyphRange type:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x34659431
- (BOOL)_drawsUnderlinesLikeWebKit;	// 0x346589a1
- (NSRange)_extendedCharRangeForInvalidation:(NSRange)invalidation editedCharRange:(NSRange)range;	// 0x3464aa69
- (void)_fillGlyphHoleAtIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x3464b2b1
- (void)_fillGlyphHoleForCharacterRange:(NSRange)characterRange startGlyphIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;	// 0x3464b345
- (void)_fillLayoutHoleAtIndex:(unsigned)index desiredNumberOfLines:(unsigned)lines;	// 0x3464cfc9
- (void)_fillLayoutHoleForCharacterRange:(NSRange)characterRange desiredNumberOfLines:(unsigned)lines isSoft:(BOOL)soft;	// 0x3464b7e9
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer hintGlyphRange:(NSRange)range okToFillHoles:(BOOL)fillHoles;	// 0x34651745
- (NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x34651dad
- (void)_firstTextViewChanged;	// 0x3465431d
- (void)_fixSelectionAfterChangeInCharacterRange:(NSRange)characterRange changeInLength:(int)length;	// 0x3464edb5
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;	// 0x3465e701
- (unsigned)_glyphAtIndex:(unsigned)index characterIndex:(unsigned *)index2 glyphInscription:(unsigned *)inscription isValidIndex:(BOOL *)index4;	// 0x34656b65
- (id)_glyphDescription;	// 0x3464dd39
- (id)_glyphDescriptionForGlyphRange:(NSRange)glyphRange;	// 0x3464db51
- (id)_glyphGenerator;	// 0x3465d0f5
- (id)_glyphHoleDescription;	// 0x3464dd6d
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x3464d2e5
- (unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x3464d309
- (id)_glyphLocationDescription;	// 0x3464db3d
- (NSRange)_glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer fast:(BOOL)fast okToFillHoles:(BOOL)fillHoles;	// 0x34652461
- (NSRange)_glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range okToFillHoles:(BOOL)fillHoles;	// 0x3464d331
- (id)_glyphTreeDescription;	// 0x3464e159
- (void)_growCachedRectArrayToSize:(unsigned)size;	// 0x3464edb9
- (BOOL)_hasSeenRightToLeft;	// 0x34657195
- (unsigned)_indexOfFirstGlyphInTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;	// 0x3465306d
- (void)_insertGlyphs:(unsigned *)glyphs elasticAttributes:(BOOL *)attributes count:(unsigned)count atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x34656d59
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned)index;	// 0x34657791
- (void)_invalidateDisplayIfNeeded;	// 0x3464ed39
- (void)_invalidateGlyphsForCharacterRange:(NSRange)characterRange editedCharacterRange:(NSRange)range changeInLength:(int)length actualCharacterRange:(NSRange *)range4;	// 0x3465e261
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length;	// 0x34653b39
- (void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length includeBlocks:(BOOL)blocks;	// 0x346536dd
- (void)_invalidateInsertionPoint;	// 0x3464ed09
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft;	// 0x346542f9
- (void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft invalidateUsage:(BOOL)usage;	// 0x34653b5d
- (void)_invalidateUsageForTextContainersInRange:(NSRange)range;	// 0x3464e641
- (BOOL)_isInUILayoutMode;	// 0x3465714d
- (id)_layoutHoleDescription;	// 0x3464df6d
- (id)_layoutTreeDescription;	// 0x3464e15d
- (id)_lineFragmentDescription;	// 0x3464db29
- (id)_lineFragmentDescription:(BOOL)description;	// 0x3464dae5
- (id)_lineFragmentDescriptionForGlyphRange:(NSRange)glyphRange includeGlyphLocations:(BOOL)locations;	// 0x3464d80d
- (void)_lineGlyphRange:(NSRange)range type:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;	// 0x3465ae39
- (void)_markSelfAsDirtyForBackgroundLayout:(id)backgroundLayout;	// 0x3464d465
- (void)_mergeGlyphHoles;	// 0x3464a269
- (void)_mergeLayoutHoles;	// 0x3464a26d
- (BOOL)_needToFlushGlyph;	// 0x34656bf1
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned)index;	// 0x3464b7e1
- (char *)_packedGlyphs:(unsigned)glyphs range:(NSRange)range length:(unsigned *)length;	// 0x34654b09
- (NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)glyphRange;	// 0x3464d37d
- (void)_primitiveDeleteGlyphsInRange:(NSRange)range;	// 0x3465edf5
- (NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)characterRange;	// 0x3464d3e1
- (void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x3465e501
- (void)_promoteGlyphStoreToFormat:(unsigned)format;	// 0x34656db9
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned)index;	// 0x3464e695
- (CGRect *)_rectArrayForRange:(NSRange)range withinSelectionRange:(NSRange)range2 rangeIsCharRange:(BOOL)range3 singleRectOnly:(BOOL)only fullLineRectsOnly:(BOOL)only5 inTextContainer:(id)textContainer rectCount:(unsigned *)count rangeWithinContainer:(NSRange *)container glyphsDrawOutsideLines:(BOOL *)lines;	// 0x3464ee0d
- (void)_resizeTextViewForTextContainer:(id)textContainer;	// 0x3464edad
- (float)_rotationForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x34656a85
- (id)_rowArrayCache;	// 0x3464a9e5
- (id)_selectedRanges;	// 0x3464edb1
- (id)_selectionRangesForInsertionPointRange:(NSRange)insertionPointRange;	// 0x34658919
- (void)_setAlwaysDrawsActive:(BOOL)active;	// 0x34657371
- (void)_setCurrentAttachmentRect:(CGRect)rect index:(unsigned)index;	// 0x34656e1d
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)kit;	// 0x3465891d
- (void)_setGlyphGenerator:(id)generator;	// 0x3465d1ed
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate integerOffsetPerLineEstimate:(unsigned)estimate2;	// 0x3465de49
- (void)_setGlyphsPerLineEstimate:(unsigned)estimate offsetPerLineEstimate:(float)estimate2;	// 0x3465dde5
- (void)_setHasSeenRightToLeft:(BOOL)left;	// 0x34657171
- (void)_setIsInUILayoutMode:(BOOL)uilayoutMode;	// 0x34657129
- (void)_setNeedToFlushGlyph:(BOOL)flushGlyph;	// 0x34656c09
- (void)_setRotation:(float)rotation forGlyphAtIndex:(unsigned)index;	// 0x34656a4d
- (void)_setRowArrayCache:(id)cache;	// 0x3464aa09
- (void)_showStyledCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context options:(id)options lineHeight:(float)height;	// 0x34658b55
- (void)_simpleDeleteGlyphsInRange:(NSRange)range;	// 0x34656cc5
- (void)_simpleInsertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index elastic:(BOOL)elastic;	// 0x34656c2d
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;	// 0x3464d2c1
- (unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;	// 0x3464d075
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x346638ad
- (id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x346639c1
- (id)_temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x34663aed
- (void)_updateUsageForTextContainer:(id)textContainer addingUsedRect:(CGRect)rect;	// 0x3464e3f5
- (NSStoredContainerUsage *)_validatedStoredUsageForTextContainerAtIndex:(unsigned)index;	// 0x3464ecb5
- (void)addTemporaryAttribute:(id)attribute value:(id)value forCharacterRange:(NSRange)characterRange;	// 0x34663489
- (void)addTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x34663271
- (void)addTextContainer:(id)container;	// 0x3465d56d
// converted property getter: - (BOOL)allowsNonContiguousLayout;	// 0x3465ddd1
- (CGSize)attachmentSizeForGlyphAtIndex:(unsigned)index;	// 0x3466047d
- (id)attributedString;	// 0x3465c84d
// converted property getter: - (BOOL)backgroundLayoutEnabled;	// 0x3465df21
- (float)baselineOffsetForGlyphAtIndex:(unsigned)index;	// 0x3465724d
- (CGRect)boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer;	// 0x346619c9
- (CGRect)boundsRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x34661469
- (CGRect)boundsRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x34661295
- (unsigned)characterIndexForGlyphAtIndex:(unsigned)index;	// 0x3465f021
- (unsigned)characterIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceBetweenInsertionPoints:(float *)distanceBetweenInsertionPoints;	// 0x34662a29
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x346615f1
- (void)dealloc;	// 0x3465bf79
- (float)defaultBaselineOffsetForFont:(id)font;	// 0x34663bc1
- (float)defaultLineHeightForFont:(id)font;	// 0x34663b49
// converted property getter: - (id)delegate;	// 0x3465d349
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x3465ee05
- (id)description;	// 0x3465c6f9
- (void)drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x34658ad9
- (void)drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;	// 0x34658b31
- (void)drawStrikethroughForGlyphRange:(NSRange)glyphRange strikethroughType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x3465addd
- (void)drawUnderlineForGlyphRange:(NSRange)glyphRange underlineType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;	// 0x3465ad81
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned)index;	// 0x34660461
- (void)encodeWithCoder:(id)coder;	// 0x3465c10d
- (void)ensureGlyphsForCharacterRange:(NSRange)characterRange;	// 0x3465e931
- (void)ensureGlyphsForGlyphRange:(NSRange)glyphRange;	// 0x3465e939
- (void)ensureLayoutForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x3465ecb1
- (void)ensureLayoutForCharacterRange:(NSRange)characterRange;	// 0x3465e941
- (void)ensureLayoutForGlyphRange:(NSRange)glyphRange;	// 0x3465e995
- (void)ensureLayoutForTextContainer:(id)textContainer;	// 0x3465e99d
// converted property getter: - (CGRect)extraLineFragmentRect;	// 0x3465fec9
- (id)extraLineFragmentTextContainer;	// 0x3465feed
// converted property getter: - (CGRect)extraLineFragmentUsedRect;	// 0x3465fedd
- (void)fillBackgroundRectArray:(CGRect *)array count:(unsigned)count forCharacterRange:(NSRange)characterRange color:(id)color;	// 0x34658b05
- (void)finalize;	// 0x3465be3d
- (unsigned)firstUnlaidCharacterIndex;	// 0x3465f70d
// converted property getter: - (unsigned)firstUnlaidGlyphIndex;	// 0x3465f8e9
// converted property getter: - (BOOL)flipsIfNeeded;	// 0x346571ad
- (float)fractionOfDistanceThroughGlyphForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x346629b1
- (void)getFirstUnlaidCharacterIndex:(unsigned *)index glyphIndex:(unsigned *)index2;	// 0x3465f8fd
- (unsigned)getGlyphs:(unsigned *)glyphs range:(NSRange)range;	// 0x3465f139
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits;	// 0x3465f0c1
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x3465f0f9
- (int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned)index inDisplayOrder:(BOOL)displayOrder positions:(float **)positions characterIndexes:(unsigned **)indexes count:(unsigned *)count alternatePositions:(float **)positions6 characterIndexes:(unsigned **)indexes7 count:(unsigned *)count8;	// 0x346587cd
- (unsigned)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned)index alternatePositions:(BOOL)positions inDisplayOrder:(BOOL)displayOrder positions:(float *)positions4 characterIndexes:(unsigned *)indexes;	// 0x34662f15
- (unsigned)glyphAtIndex:(unsigned)index;	// 0x3465ef81
- (unsigned)glyphAtIndex:(unsigned)index isValidIndex:(BOOL *)index2;	// 0x3465ef35
// converted property getter: - (id)glyphGenerator;	// 0x3465d0bd
- (unsigned)glyphIndexForCharacterAtIndex:(unsigned)index;	// 0x3465f061
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer;	// 0x34661ae5
- (unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceThroughGlyph:(float *)distanceThroughGlyph;	// 0x346629d1
- (NSRange)glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;	// 0x34661a1d
- (NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)boundingRectWithoutAdditionalLayout inTextContainer:(id)textContainer;	// 0x34661a79
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x34661561
- (NSRange)glyphRangeForTextContainer:(id)textContainer;	// 0x34661681
- (BOOL)hasNonContiguousLayout;	// 0x3465de65
// converted property getter: - (float)hyphenationFactor;	// 0x3465e1e1
// converted property getter: - (BOOL)ignoresAntialiasThreshold;	// 0x34657341
// converted property getter: - (BOOL)ignoresViewTransformations;	// 0x34657271
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x3465eda1
- (void)insertGlyphs:(const unsigned *)glyphs length:(unsigned)length forStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index4;	// 0x3465ed6d
- (void)insertTextContainer:(id)container atIndex:(unsigned)index;	// 0x3465d5ad
- (int)intAttribute:(int)attribute forGlyphAtIndex:(unsigned)index;	// 0x3465f0a1
- (void)invalidateDisplayForCharacterRange:(NSRange)characterRange;	// 0x3465e505
- (void)invalidateDisplayForGlyphRange:(NSRange)glyphRange;	// 0x3465e6b9
- (void)invalidateGlyphsForCharacterRange:(NSRange)characterRange changeInLength:(int)length actualCharacterRange:(NSRange *)range;	// 0x3465e3f5
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)glyphRange;	// 0x3465eebd
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x3465e41d
- (void)invalidateLayoutForCharacterRange:(NSRange)characterRange isSoft:(BOOL)soft actualCharacterRange:(NSRange *)range;	// 0x3465e48d
- (BOOL)isValidGlyphIndex:(unsigned)index;	// 0x3465f001
- (unsigned)layoutOptions;	// 0x3465e245
- (CGRect)layoutRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3466136d
- (CGRect)layoutRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x34661085
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3465fe09
- (CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x3465fdd1
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3465fea5
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range allowLayout:(BOOL)layout;	// 0x3465fe65
- (CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x3465fe2d
- (CGPoint)locationForGlyphAtIndex:(unsigned)index;	// 0x3465fefd
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned)index;	// 0x34660445
- (unsigned)numberOfGlyphs;	// 0x3465eed5
- (NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned)nominallySpacedGlyphsContainingIndex;	// 0x346618b1
- (CGRect *)rectArrayForCharacterRange:(NSRange)characterRange withinSelectedCharacterRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x34661941
- (CGRect *)rectArrayForGlyphRange:(NSRange)glyphRange withinSelectedGlyphRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned *)count;	// 0x34661985
- (void)removeTemporaryAttribute:(id)attribute forCharacterRange:(NSRange)characterRange;	// 0x346636d5
- (void)removeTextContainerAtIndex:(unsigned)index;	// 0x3465d89d
- (void)replaceGlyphAtIndex:(unsigned)index withGlyph:(unsigned)glyph;	// 0x3465edc9
- (void)replaceTextStorage:(id)storage;	// 0x3465cf31
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x34654a75
// converted property setter: - (void)setAllowsNonContiguousLayout:(BOOL)layout;	// 0x3465dd1d
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x3465f6f5
// converted property setter: - (void)setBackgroundLayoutEnabled:(BOOL)enabled;	// 0x3465debd
- (void)setBaselineOffset:(float)offset forGlyphAtIndex:(unsigned)index;	// 0x34657269
- (void)setBoundsRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x34660ecd
- (void)setCharacterIndex:(unsigned)index forGlyphAtIndex:(unsigned)index2;	// 0x3465ee4d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3465d359
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphAtIndex:(unsigned)index;	// 0x3465f6b9
- (void)setExtraLineFragmentRect:(CGRect)rect usedRect:(CGRect)rect2 textContainer:(id)container;	// 0x3465f3f9
// converted property setter: - (void)setFlipsIfNeeded:(BOOL)needed;	// 0x346571c5
// converted property setter: - (void)setGlyphGenerator:(id)generator;	// 0x3465d105
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x3465e145
// converted property setter: - (void)setIgnoresAntialiasThreshold:(BOOL)threshold;	// 0x34657345
// converted property setter: - (void)setIgnoresViewTransformations:(BOOL)transformations;	// 0x34657289
- (void)setIntAttribute:(int)attribute value:(int)value forGlyphAtIndex:(unsigned)index;	// 0x3465ee79
- (void)setLayoutRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;	// 0x34660a9d
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3;	// 0x3465f259
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x346571e9
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange;	// 0x3465f5e5
- (void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange coalesceRuns:(BOOL)runs;	// 0x3465f581
- (void)setLocations:(CGPoint *)locations startingGlyphIndexes:(unsigned *)indexes count:(unsigned)count forGlyphRange:(NSRange)glyphRange;	// 0x3465f649
- (void)setNotShownAttribute:(BOOL)attribute forGlyphAtIndex:(unsigned)index;	// 0x3465f6b1
// converted property setter: - (void)setShowsControlCharacters:(BOOL)characters;	// 0x3465e099
// converted property setter: - (void)setShowsInvisibleCharacters:(BOOL)characters;	// 0x3465dfed
- (void)setTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;	// 0x346630b9
- (void)setTextContainer:(id)container forGlyphRange:(NSRange)glyphRange;	// 0x3465f169
// converted property setter: - (void)setTextStorage:(id)storage;	// 0x3465c85d
// converted property setter: - (void)setTypesetter:(id)typesetter;	// 0x3465d255
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x3465e201
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x34663c05
// converted property setter: - (void)setUsesScreenFonts:(BOOL)fonts;	// 0x3465df49
- (void)showAttachmentCell:(id)cell inRect:(CGRect)rect characterIndex:(unsigned)index;	// 0x34658eb5
- (void)showCGGlyphs:(const unsigned short *)glyphs positions:(const CGPoint *)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context;	// 0x34658d05
// converted property getter: - (BOOL)showsControlCharacters;	// 0x3465e131
// converted property getter: - (BOOL)showsInvisibleCharacters;	// 0x3465e085
- (void)strikethroughGlyphRange:(NSRange)range strikethroughType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x3465b3e5
- (id)substituteFontForFont:(id)font;	// 0x34663b11
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x34663879
- (id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x346638bd
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange *)range;	// 0x34662fa1
- (id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x346639f5
- (void)textContainerChangedGeometry:(id)geometry;	// 0x3465dbc1
- (void)textContainerChangedTextView:(id)view;	// 0x3465dced
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3465fb4d
- (id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange *)range withoutAdditionalLayout:(BOOL)layout;	// 0x3465f939
// converted property getter: - (id)textContainers;	// 0x3465d431
// converted property getter: - (id)textStorage;	// 0x3465c83d
- (void)textStorage:(id)storage edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length invalidatedRange:(NSRange)range5;	// 0x3465e705
// converted property getter: - (id)typesetter;	// 0x3465d1fd
// converted property getter: - (int)typesetterBehavior;	// 0x3465e225
- (void)underlineGlyphRange:(NSRange)range underlineType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;	// 0x3465b435
- (CGRect)usedRectForTextContainer:(id)textContainer;	// 0x3465fd45
// converted property getter: - (BOOL)usesFontLeading;	// 0x34663bed
// converted property getter: - (BOOL)usesScreenFonts;	// 0x3465df35
@end

