/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSAttributedString;

@interface MRTextRenderer : NSObject {
	NSAttributedString *_text;	// 4 = 0x4
	NSAttributedString *_cachedText;	// 8 = 0x8
	NSAttributedString *_placeholderText;	// 12 = 0xc
	CGSize _definedSize;	// 16 = 0x10
	CGSize _resolution;	// 24 = 0x18
	int _maxNumberOfLines;	// 32 = 0x20
	int _lastGlyphIndex;	// 36 = 0x24
	BOOL _truncate;	// 40 = 0x28
	BOOL _renderAtDefinedSize;	// 41 = 0x29
	float _lineSpacingFactor;	// 44 = 0x2c
	CGSize _inset;	// 48 = 0x30
	float _scale;	// 56 = 0x38
	int _columnCount;	// 60 = 0x3c
	float _columnMargin;	// 64 = 0x40
	float _extraFooter;	// 68 = 0x44
	CGRect _imageRect;	// 72 = 0x48
}
@property(assign, nonatomic) int columnCount;	// G=0x365158b1; S=0x365158c1; @synthesize=_columnCount
@property(assign, nonatomic) float columnMargin;	// G=0x365158d1; S=0x365158e1; @synthesize=_columnMargin
@property(assign, nonatomic) CGSize definedSize;	// G=0x365157f9; S=0x36515811; @synthesize=_definedSize
@property(assign, nonatomic) float extraFooter;	// G=0x365158f1; S=0x36515901; @synthesize=_extraFooter
@property(assign, nonatomic) CGRect imageRect;	// G=0x36515911; S=0x36515935; @synthesize=_imageRect
@property(assign, nonatomic) CGSize inset;	// G=0x36515865; S=0x3651587d; @synthesize=_inset
@property(assign, nonatomic) float lineSpacingFactor;	// G=0x36515845; S=0x36515855; @synthesize=_lineSpacingFactor
@property(assign, nonatomic) int maxNumberOfLines;	// G=0x365157b9; S=0x365157c9; @synthesize=_maxNumberOfLines
@property(assign, nonatomic) NSAttributedString *placeholderText;	// G=0x36515791; S=0x365120f5; @synthesize=_placeholderText
@property(assign, nonatomic) BOOL renderAtDefinedSize;	// G=0x36515825; S=0x36515835; @synthesize=_renderAtDefinedSize
@property(assign, nonatomic) CGSize resolution;	// G=0x365157a1; S=0x3651222d; @synthesize=_resolution
@property(assign, nonatomic) float scale;	// G=0x36515891; S=0x365158a1; @synthesize=_scale
@property(assign, nonatomic) NSAttributedString *text;	// G=0x365120b1; S=0x36512191; @synthesize=_text
@property(assign, nonatomic) BOOL truncate;	// G=0x365157d9; S=0x365157e9; @synthesize=_truncate
- (id)init;	// 0x36511e39
- (id)initWithText:(id)text resolution:(CGSize)resolution;	// 0x36511f65
- (void)_drawInContext:(CGContextRef)context withAttributedString:(id)attributedString withSize:(CGSize)size andScale:(float)scale;	// 0x36512a59
- (id)_invertRect:(CGRect)rect inRect:(CGRect)rect2;	// 0x36515951
- (int)_numberOfLinesInString:(id)string;	// 0x36514ee1
- (CGContextRef)_retainedContextFromAttributedString:(id)attributedString withSize:(CGSize)size;	// 0x36512931
- (float)_scale;	// 0x36512645
- (CGSize)_shadowSizeOffsetForString:(id)string;	// 0x365151b9
- (CGSize)_sizeOfString:(id)string;	// 0x36514a11
- (CGSize)_sizeToRendererAt;	// 0x365124f1
- (CGRect)_textClipRectForString:(id)string;	// 0x36513091
- (CGRect)_tightFrameOfLineAtIndex:(int)index inString:(id)string withSize:(CGSize)size;	// 0x36512755
- (id)_truncateTextToFitInSize:(CGSize)size fromCenter:(BOOL)center outSize:(CGSize *)size3;	// 0x36515365
- (void)cleanup;	// 0x3651205d
// declared property getter: - (int)columnCount;	// 0x365158b1
// declared property getter: - (float)columnMargin;	// 0x365158d1
- (int)countOfGlyphs;	// 0x36513e4d
- (int)countOfWords;	// 0x365131dd
- (void)dealloc;	// 0x36511fdd
// declared property getter: - (CGSize)definedSize;	// 0x365157f9
// declared property getter: - (float)extraFooter;	// 0x365158f1
- (void)finalize;	// 0x3651201d
- (CGRect)frameOfLineWithGlyphAtIndex:(int)index range:(NSRange *)range;	// 0x365145d1
- (int)glyphIndexForStringIndex:(int)stringIndex;	// 0x36514211
// declared property getter: - (CGRect)imageRect;	// 0x36515911
// declared property getter: - (CGSize)inset;	// 0x36515865
// declared property getter: - (float)lineSpacingFactor;	// 0x36515845
// declared property getter: - (int)maxNumberOfLines;	// 0x365157b9
- (int)numberOfLines;	// 0x36514e29
- (int)numberOfLinesForTruncatedText;	// 0x36514e59
- (CGPoint)originOfGlyphAtIndex:(int)index;	// 0x365143c1
- (CGPoint)originOfWordAtIndex:(int)index;	// 0x36513c39
// declared property getter: - (id)placeholderText;	// 0x36515791
- (XXStruct_K5nmsA)rangeOfGlyphsForWordsInRange:(XXStruct_K5nmsA)range;	// 0x365137e5
- (XXStruct_K5nmsA)rangeOfGlyphsOnLine:(int)glyphsOnLine;	// 0x3651367d
- (XXStruct_K5nmsA)rangeOfStringForGlyphIndex:(int)glyphIndex;	// 0x3651401d
- (XXStruct_K5nmsA)rangeOfWordsOnLine:(int)wordsOnLine;	// 0x3651335d
// declared property getter: - (BOOL)renderAtDefinedSize;	// 0x36515825
// declared property getter: - (CGSize)resolution;	// 0x365157a1
- (CGContextRef)retainedContext;	// 0x36512255
- (CGContextRef)retainedContextOfGlyphAtIndex:(int)index;	// 0x36513f49
- (CGContextRef)retainedContextOfWordsInRange:(XXStruct_K5nmsA)range;	// 0x365139d9
// declared property getter: - (float)scale;	// 0x36515891
// declared property setter: - (void)setColumnCount:(int)count;	// 0x365158c1
// declared property setter: - (void)setColumnMargin:(float)margin;	// 0x365158e1
// declared property setter: - (void)setDefinedSize:(CGSize)size;	// 0x36515811
// declared property setter: - (void)setExtraFooter:(float)footer;	// 0x36515901
// declared property setter: - (void)setImageRect:(CGRect)rect;	// 0x36515935
// declared property setter: - (void)setInset:(CGSize)inset;	// 0x3651587d
// declared property setter: - (void)setLineSpacingFactor:(float)factor;	// 0x36515855
// declared property setter: - (void)setMaxNumberOfLines:(int)lines;	// 0x365157c9
// declared property setter: - (void)setPlaceholderText:(id)text;	// 0x365120f5
// declared property setter: - (void)setRenderAtDefinedSize:(BOOL)definedSize;	// 0x36515835
// declared property setter: - (void)setResolution:(CGSize)resolution;	// 0x3651222d
// declared property setter: - (void)setScale:(float)scale;	// 0x365158a1
// declared property setter: - (void)setText:(id)text;	// 0x36512191
// declared property setter: - (void)setTruncate:(BOOL)truncate;	// 0x365157e9
- (CGSize)shadowOffset;	// 0x36515045
- (CGSize)sizeOfContext;	// 0x3651241d
- (CGSize)sizeOfText;	// 0x36512335
- (void)squeezeWidthForLineCount:(int)lineCount;	// 0x365152dd
// declared property getter: - (id)text;	// 0x365120b1
- (CGRect)tightFrameOfAllLines;	// 0x3651254d
- (CGRect)tightFrameOfLineAtIndex:(int)index;	// 0x36512655
- (void)trimWhitespace;	// 0x365156a1
// declared property getter: - (BOOL)truncate;	// 0x365157d9
- (id)truncatedText;	// 0x36514ea9
@end
