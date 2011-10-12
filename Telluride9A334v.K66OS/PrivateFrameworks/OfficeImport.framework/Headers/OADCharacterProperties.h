/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"
#import "OADEffectsParent.h"

@class OADColor, NSString, OADHyperlink, OADStroke, OADFill, NSArray, OADUnderline;

__attribute__((visibility("hidden")))
@interface OADCharacterProperties : OADProperties <OADEffectsParent> {
@private
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
	unsigned mHasIsShadowed : 1;	// 98 = 0x62
	unsigned mIsShadowed : 1;	// 98 = 0x62
}
@property(assign) double baseline;	// G=0x354e755d; S=0x35562585; converted property
@property(retain) id bidiFont;	// G=0x3578040d; S=0x3558c83d; converted property
@property(assign) int caps;	// G=0x354e8ac5; S=0x3558c7d5; converted property
@property(retain) id clickHyperlink;	// G=0x35568435; S=0x3569812d; converted property
@property(retain) id eastAsianFont;	// G=0x355a1fb9; S=0x3558c7fd; converted property
@property(retain) id effects;	// G=0x35568205; S=0x3556251d; converted property
@property(retain) id fill;	// G=0x354e75a5; S=0x35562759; converted property
@property(assign) int formatKerningType;	// G=0x357804c9; S=0x3558c721; converted property
@property(assign) int formatType;	// G=0x35568271; S=0x35562561; converted property
@property(retain) id highlight;	// G=0x357804f9; S=0x3558c6e1; converted property
@property(retain) id hoverHyperlink;	// G=0x35568445; S=0x356e1881; converted property
@property(assign) BOOL isBold;	// G=0x354e887d; S=0x355623d1; converted property
@property(assign) BOOL isHorizontalNormalized;	// G=0x35780459; S=0x3558c7a5; converted property
@property(assign) BOOL isItalic;	// G=0x354e88b9; S=0x35562405; converted property
@property(assign) BOOL isShadowed;	// G=0x354e8931; S=0x355624c5; converted property
@property(assign) BOOL isVerticalText;	// G=0x3578048d; S=0x3558c771; converted property
@property(retain) id latinFont;	// G=0x354e6635; S=0x35562681; converted property
@property(assign) double opacity;	// G=0x35780529; S=0x3558c625; converted property
@property(assign) double size;	// G=0x354e6089; S=0x355625b1; converted property
@property(assign) double spacing;	// G=0x354e8b31; S=0x3558c745; converted property
@property(assign) int strikeThroughType;	// G=0x354e8a59; S=0x355624f9; converted property
@property(retain) id stroke;	// G=0x356a0161; S=0x35660c71; converted property
@property(retain) id symbolFont;	// G=0x355a2005; S=0x3558c8bd; converted property
@property(retain) id underline;	// G=0x354e89a9; S=0x35562485; converted property
+ (void)initialize;	// 0x3558bd81
- (id)initWithDefaults;	// 0x3558c179
// converted property getter: - (double)baseline;	// 0x354e755d
// converted property getter: - (id)bidiFont;	// 0x3578040d
// converted property getter: - (int)caps;	// 0x354e8ac5
// converted property getter: - (id)clickHyperlink;	// 0x35568435
- (void)dealloc;	// 0x3556d555
// converted property getter: - (id)eastAsianFont;	// 0x355a1fb9
// converted property getter: - (id)effects;	// 0x35568205
// converted property getter: - (id)fill;	// 0x354e75a5
// converted property getter: - (int)formatKerningType;	// 0x357804c9
// converted property getter: - (int)formatType;	// 0x35568271
- (id)hansiFont;	// 0x355b03b5
- (BOOL)hasBaseline;	// 0x354e7521
- (BOOL)hasBidiFont;	// 0x3556838d
- (BOOL)hasCaps;	// 0x354e8a89
- (BOOL)hasEastAsianFont;	// 0x35568355
- (BOOL)hasEffects;	// 0x355681cd
- (BOOL)hasFill;	// 0x354e75d5
- (BOOL)hasFormatKerningType;	// 0x355682a1
- (BOOL)hasFormatType;	// 0x35568235
- (BOOL)hasHAnsiFont;	// 0x355683c5
- (BOOL)hasHighlight;	// 0x35568195
- (BOOL)hasIsBold;	// 0x354e8841
- (BOOL)hasIsHorizontalNormalized;	// 0x35568319
- (BOOL)hasIsItalic;	// 0x354e88f5
- (BOOL)hasIsShadowed;	// 0x354e896d
- (BOOL)hasIsVerticalText;	// 0x355682dd
- (BOOL)hasLatinFont;	// 0x354e65fd
- (BOOL)hasOpacity;	// 0x35567ff5
- (BOOL)hasSize;	// 0x354e60c1
- (BOOL)hasSpacing;	// 0x354e8af5
- (BOOL)hasStrikeThroughType;	// 0x354e8a21
- (BOOL)hasStroke;	// 0x355678c1
- (BOOL)hasSymbolFont;	// 0x355683fd
- (BOOL)hasUnderline;	// 0x354e89d9
- (unsigned)hash;	// 0x35780121
// converted property getter: - (id)highlight;	// 0x357804f9
// converted property getter: - (id)hoverHyperlink;	// 0x35568445
// converted property getter: - (BOOL)isBold;	// 0x354e887d
- (BOOL)isEqual:(id)equal;	// 0x3577f4d1
// converted property getter: - (BOOL)isHorizontalNormalized;	// 0x35780459
// converted property getter: - (BOOL)isItalic;	// 0x354e88b9
// converted property getter: - (BOOL)isShadowed;	// 0x354e8931
// converted property getter: - (BOOL)isVerticalText;	// 0x3578048d
// converted property getter: - (id)latinFont;	// 0x354e6635
// converted property getter: - (double)opacity;	// 0x35780529
- (void)overrideWithProperties:(id)properties;	// 0x355a1749
- (void)removeUnnecessaryOverrides;	// 0x35566d25
// converted property setter: - (void)setBaseline:(double)baseline;	// 0x35562585
// converted property setter: - (void)setBidiFont:(id)font;	// 0x3558c83d
// converted property setter: - (void)setCaps:(int)caps;	// 0x3558c7d5
// converted property setter: - (void)setClickHyperlink:(id)hyperlink;	// 0x3569812d
// converted property setter: - (void)setEastAsianFont:(id)font;	// 0x3558c7fd
// converted property setter: - (void)setEffects:(id)effects;	// 0x3556251d
// converted property setter: - (void)setFill:(id)fill;	// 0x35562759
// converted property setter: - (void)setFormatKerningType:(int)type;	// 0x3558c721
// converted property setter: - (void)setFormatType:(int)type;	// 0x35562561
- (void)setHAnsiFont:(id)font;	// 0x3558c87d
// converted property setter: - (void)setHighlight:(id)highlight;	// 0x3558c6e1
// converted property setter: - (void)setHoverHyperlink:(id)hyperlink;	// 0x356e1881
// converted property setter: - (void)setIsBold:(BOOL)bold;	// 0x355623d1
// converted property setter: - (void)setIsHorizontalNormalized:(BOOL)normalized;	// 0x3558c7a5
// converted property setter: - (void)setIsItalic:(BOOL)italic;	// 0x35562405
// converted property setter: - (void)setIsShadowed:(BOOL)shadowed;	// 0x355624c5
// converted property setter: - (void)setIsVerticalText:(BOOL)text;	// 0x3558c771
// converted property setter: - (void)setLatinFont:(id)font;	// 0x35562681
// converted property setter: - (void)setOpacity:(double)opacity;	// 0x3558c625
// converted property setter: - (void)setSize:(double)size;	// 0x355625b1
// converted property setter: - (void)setSpacing:(double)spacing;	// 0x3558c745
// converted property setter: - (void)setStrikeThroughType:(int)type;	// 0x355624f9
// converted property setter: - (void)setStroke:(id)stroke;	// 0x35660c71
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x3558c8bd
// converted property setter: - (void)setUnderline:(id)underline;	// 0x35562485
// converted property getter: - (double)size;	// 0x354e6089
// converted property getter: - (double)spacing;	// 0x354e8b31
// converted property getter: - (int)strikeThroughType;	// 0x354e8a59
// converted property getter: - (id)stroke;	// 0x356a0161
// converted property getter: - (id)symbolFont;	// 0x355a2005
// converted property getter: - (id)underline;	// 0x354e89a9
@end

