/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDContentFormatsCollection, EDStylesCollection, EDCollection, EDLinksCollection, EDFontsCollection, EDColorsCollection, EDTableStylesCollection;

__attribute__((visibility("hidden")))
@interface EDResources : NSObject {
@private
	EDCollection *mStrings;	// 4 = 0x4
	EDContentFormatsCollection *mContentFormats;	// 8 = 0x8
	EDFontsCollection *mFonts;	// 12 = 0xc
	EDCollection *mAlignmentInfos;	// 16 = 0x10
	EDStylesCollection *mStyles;	// 20 = 0x14
	EDColorsCollection *mColors;	// 24 = 0x18
	EDColorsCollection *mThemes;	// 28 = 0x1c
	EDCollection *mNames;	// 32 = 0x20
	EDLinksCollection *mLinks;	// 36 = 0x24
	EDCollection *mBorders;	// 40 = 0x28
	EDCollection *mBorder;	// 44 = 0x2c
	EDCollection *mFills;	// 48 = 0x30
	EDCollection *mDifferentialStyles;	// 52 = 0x34
	EDTableStylesCollection *mTableStyles;	// 56 = 0x38
}
@property(retain) id colors;	// G=0x318eb4ed; S=0x319e17d5; converted property
@property(retain) id themes;	// G=0x31a47211; S=0x31a7d8ad; converted property
- (id)initWithStringOptimization:(bool)stringOptimization;	// 0x319db699
- (id)alignmentInfos;	// 0x318eb729
- (id)border;	// 0x318eb3a1
- (id)borders;	// 0x318eafcd
// converted property getter: - (id)colors;	// 0x318eb4ed
- (id)contentFormats;	// 0x318f029d
- (void)dealloc;	// 0x318f1b95
- (id)differentialStyles;	// 0x318df4b9
- (id)fills;	// 0x318eb5f1
- (id)fonts;	// 0x318e8919
- (id)links;	// 0x319e2995
- (id)names;	// 0x31a7d121
// converted property setter: - (void)setColors:(id)colors;	// 0x319e17d5
// converted property setter: - (void)setThemes:(id)themes;	// 0x31a7d8ad
- (id)strings;	// 0x318d1f7d
- (id)styles;	// 0x318e88ad
- (id)tableStyles;	// 0x31a497fd
// converted property getter: - (id)themes;	// 0x31a47211
@end

