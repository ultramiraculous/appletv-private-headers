/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffectsParent.h"
#import "OADProperties.h"

@class OADStroke, OADColor, OADHyperlink, NSArray, NSString, OADFill, OADUnderline;

@interface OADCharacterProperties : OADProperties <OADEffectsParent> {
	NSString *mLatinFont;	// 12 = 0xc
	NSString *mEastAsianFont;	// 16 = 0x10
	NSString *mBidiFont;	// 20 = 0x14
	NSString *mHAnsiFont;	// 24 = 0x18
	NSString *mSymbolFont;	// 28 = 0x1c
	OADHyperlink *mClickHyperlink;	// 32 = 0x20
	OADHyperlink *mHoverHyperlink;	// 36 = 0x24
	OADStroke *mStroke;	// 40 = 0x28
	OADFill *mFill;	// 44 = 0x2c
	OADColor *mHighlight;	// 48 = 0x30
	NSArray *mEffects;	// 52 = 0x34
	OADUnderline *mUnderline;	// 56 = 0x38
	double mOpacity;	// 60 = 0x3c
	double mSize;	// 68 = 0x44
	double mSpacing;	// 76 = 0x4c
	double mBaseline;	// 84 = 0x54
	unsigned char mFormatType;	// 92 = 0x5c
	unsigned char mFormatKerningType;	// 93 = 0x5d
	unsigned char mStrikeThroughType;	// 94 = 0x5e
	unsigned char mCaps;	// 95 = 0x5f
	unsigned mHasOpacity : 1;	// 96 = 0x60
	unsigned mHasIsBold : 1;	// 96 = 0x60
	unsigned mIsBold : 1;	// 96 = 0x60
	unsigned mHasIsItalic : 1;	// 96 = 0x60
	unsigned mIsItalic : 1;	// 96 = 0x60
	unsigned mHasFormatType : 1;	// 96 = 0x60
	unsigned mHasFormatKerningType : 1;	// 96 = 0x60
	unsigned mHasStrikeThroughType : 1;	// 96 = 0x60
	unsigned mHasSize : 1;	// 97 = 0x61
	unsigned mHasSpacing : 1;	// 97 = 0x61
	unsigned mHasKerning : 1;	// 97 = 0x61
	unsigned mHasIsVerticalText : 1;	// 97 = 0x61
	unsigned mIsVerticalText : 1;	// 97 = 0x61
	unsigned mHasBaseline : 1;	// 97 = 0x61
	unsigned mHasIsHorizontalNormalized : 1;	// 97 = 0x61
	unsigned mIsHorizontalNormalized : 1;	// 97 = 0x61
	unsigned mHasCaps : 1;	// 98 = 0x62
}
@property(assign) double baseline;	// G=0x3397453d; S=0x33958ddd; converted property
@property(retain) id bidiFont;	// G=0x33b9c939; S=0x33958ee9; converted property
@property(assign) int caps;	// G=0x339d161d; S=0x33958e3d; converted property
@property(retain) id clickHyperlink;	// G=0x3397474d; S=0x33abab5d; converted property
@property(retain) id eastAsianFont;	// G=0x33974a19; S=0x33958ea9; converted property
@property(retain) id effects;	// G=0x339742d5; S=0x33958fa5; converted property
@property(retain) id fill;	// G=0x339740b9; S=0x33958af9; converted property
@property(assign) int formatKerningType;	// G=0x33b9c899; S=0x33958d01; converted property
@property(assign) int formatType;	// G=0x3397433d; S=0x33958cdd; converted property
@property(retain) id highlight;	// G=0x33b9c865; S=0x33958c25; converted property
@property(retain) id hoverHyperlink;	// G=0x3397475d; S=0x33b9c985; converted property
@property(assign) BOOL isBold;	// G=0x33974201; S=0x33958c65; converted property
@property(assign) BOOL isHorizontalNormalized;	// G=0x33b9c901; S=0x33958e0d; converted property
@property(assign) BOOL isItalic;	// G=0x3397426d; S=0x33958ca1; converted property
@property(assign) BOOL isVerticalText;	// G=0x33b9c8c9; S=0x33958da5; converted property
@property(retain) id latinFont;	// G=0x33974621; S=0x33958e69; converted property
@property(assign) double opacity;	// G=0x33b9c82d; S=0x33958b35; converted property
@property(assign) double size;	// G=0x33974451; S=0x33958d49; converted property
@property(assign) double spacing;	// G=0x339d164d; S=0x33958d75; converted property
@property(assign) int strikeThroughType;	// G=0x339743e5; S=0x33958d25; converted property
@property(retain) id stroke;	// G=0x33b13889; S=0x33a1cf39; converted property
@property(retain) id symbolFont;	// G=0x33974a61; S=0x33958f69; converted property
@property(retain) id underline;	// G=0x3397415d; S=0x33958be5; converted property
+ (void)initialize;	// 0x33952211
- (id)initWithDefaults;	// 0x33958449
// converted property getter: - (double)baseline;	// 0x3397453d
// converted property getter: - (id)bidiFont;	// 0x33b9c939
// converted property getter: - (int)caps;	// 0x339d161d
// converted property getter: - (id)clickHyperlink;	// 0x3397474d
- (void)dealloc;	// 0x33971fe9
// converted property getter: - (id)eastAsianFont;	// 0x33974a19
// converted property getter: - (id)effects;	// 0x339742d5
// converted property getter: - (id)fill;	// 0x339740b9
// converted property getter: - (int)formatKerningType;	// 0x33b9c899
// converted property getter: - (int)formatType;	// 0x3397433d
- (id)hansiFont;	// 0x339da529
- (BOOL)hasBaseline;	// 0x33974505
- (BOOL)hasBidiFont;	// 0x339746a5
- (BOOL)hasCaps;	// 0x339745b5
- (BOOL)hasEastAsianFont;	// 0x3397466d
- (BOOL)hasEffects;	// 0x339742a1
- (BOOL)hasFill;	// 0x33974085
- (BOOL)hasFormatKerningType;	// 0x33974371
- (BOOL)hasFormatType;	// 0x33974305
- (BOOL)hasHAnsiFont;	// 0x339746dd
- (BOOL)hasHighlight;	// 0x33974191
- (BOOL)hasIsBold;	// 0x339741c9
- (BOOL)hasIsHorizontalNormalized;	// 0x33974579
- (BOOL)hasIsItalic;	// 0x33974235
- (BOOL)hasIsVerticalText;	// 0x339744c9
- (BOOL)hasLatinFont;	// 0x339745ed
- (BOOL)hasOpacity;	// 0x339740ed
- (BOOL)hasSize;	// 0x33974419
- (BOOL)hasSpacing;	// 0x3397448d
- (BOOL)hasStrikeThroughType;	// 0x339743ad
- (BOOL)hasStroke;	// 0x3397404d
- (BOOL)hasSymbolFont;	// 0x33974715
- (BOOL)hasUnderline;	// 0x33974129
- (unsigned)hash;	// 0x33b9c9c5
// converted property getter: - (id)highlight;	// 0x33b9c865
// converted property getter: - (id)hoverHyperlink;	// 0x3397475d
// converted property getter: - (BOOL)isBold;	// 0x33974201
- (BOOL)isEqual:(id)equal;	// 0x33b9cc91
// converted property getter: - (BOOL)isHorizontalNormalized;	// 0x33b9c901
// converted property getter: - (BOOL)isItalic;	// 0x3397426d
// converted property getter: - (BOOL)isVerticalText;	// 0x33b9c8c9
// converted property getter: - (id)latinFont;	// 0x33974621
// converted property getter: - (double)opacity;	// 0x33b9c82d
- (void)overrideWithProperties:(id)properties;	// 0x339739fd
- (void)removeUnnecessaryOverrides;	// 0x339c2329
// converted property setter: - (void)setBaseline:(double)baseline;	// 0x33958ddd
// converted property setter: - (void)setBidiFont:(id)font;	// 0x33958ee9
// converted property setter: - (void)setCaps:(int)caps;	// 0x33958e3d
// converted property setter: - (void)setClickHyperlink:(id)hyperlink;	// 0x33abab5d
// converted property setter: - (void)setEastAsianFont:(id)font;	// 0x33958ea9
// converted property setter: - (void)setEffects:(id)effects;	// 0x33958fa5
// converted property setter: - (void)setFill:(id)fill;	// 0x33958af9
// converted property setter: - (void)setFormatKerningType:(int)type;	// 0x33958d01
// converted property setter: - (void)setFormatType:(int)type;	// 0x33958cdd
- (void)setHAnsiFont:(id)font;	// 0x33958f29
// converted property setter: - (void)setHighlight:(id)highlight;	// 0x33958c25
// converted property setter: - (void)setHoverHyperlink:(id)hyperlink;	// 0x33b9c985
// converted property setter: - (void)setIsBold:(BOOL)bold;	// 0x33958c65
// converted property setter: - (void)setIsHorizontalNormalized:(BOOL)normalized;	// 0x33958e0d
// converted property setter: - (void)setIsItalic:(BOOL)italic;	// 0x33958ca1
// converted property setter: - (void)setIsVerticalText:(BOOL)text;	// 0x33958da5
// converted property setter: - (void)setLatinFont:(id)font;	// 0x33958e69
// converted property setter: - (void)setOpacity:(double)opacity;	// 0x33958b35
// converted property setter: - (void)setSize:(double)size;	// 0x33958d49
// converted property setter: - (void)setSpacing:(double)spacing;	// 0x33958d75
// converted property setter: - (void)setStrikeThroughType:(int)type;	// 0x33958d25
// converted property setter: - (void)setStroke:(id)stroke;	// 0x33a1cf39
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x33958f69
// converted property setter: - (void)setUnderline:(id)underline;	// 0x33958be5
// converted property getter: - (double)size;	// 0x33974451
// converted property getter: - (double)spacing;	// 0x339d164d
// converted property getter: - (int)strikeThroughType;	// 0x339743e5
// converted property getter: - (id)stroke;	// 0x33b13889
// converted property getter: - (id)symbolFont;	// 0x33974a61
// converted property getter: - (id)underline;	// 0x3397415d
@end
