/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADCharacterProperties.h"

@class OADBulletFont, OADTextSpacing, NSMutableArray, OADBulletProperties, OADBulletSize, OADBulletColor;

@interface OADParagraphProperties : OADCharacterProperties {
	OADBulletSize *mBulletSize;	// 100 = 0x64
	OADBulletColor *mBulletColor;	// 104 = 0x68
	OADBulletFont *mBulletFont;	// 108 = 0x6c
	OADBulletProperties *mBulletProperties;	// 112 = 0x70
	OADTextSpacing *mLineSpacing;	// 116 = 0x74
	OADTextSpacing *mBeforeSpacing;	// 120 = 0x78
	OADTextSpacing *mAfterSpacing;	// 124 = 0x7c
	NSMutableArray *mTabStops;	// 128 = 0x80
	double mLeftMargin;	// 132 = 0x84
	double mRightMargin;	// 140 = 0x8c
	double mIndent;	// 148 = 0x94
	double mDefaultTab;	// 156 = 0x9c
	int mLevel;	// 164 = 0xa4
	int mBulletCharSet;	// 168 = 0xa8
	unsigned char mAlign;	// 172 = 0xac
	unsigned char mWrap;	// 173 = 0xad
	unsigned char mFontAlign;	// 174 = 0xae
	unsigned mIsRightToLeft : 1;	// 175 = 0xaf
	unsigned mIsLatinLineBreak : 1;	// 175 = 0xaf
	unsigned mIsHangingPunctuation : 1;	// 175 = 0xaf
	unsigned mHasTabStops : 1;	// 175 = 0xaf
	unsigned mHasLeftMargin : 1;	// 175 = 0xaf
	unsigned mHasRightMargin : 1;	// 175 = 0xaf
	unsigned mHasLevel : 1;	// 175 = 0xaf
	unsigned mHasIndent : 1;	// 175 = 0xaf
	unsigned mHasAlign : 1;	// 176 = 0xb0
	unsigned mHasDefaultTab : 1;	// 176 = 0xb0
	unsigned mHasIsRightToLeft : 1;	// 176 = 0xb0
	unsigned mHasWrap : 1;	// 176 = 0xb0
	unsigned mHasFontAlign : 1;	// 176 = 0xb0
	unsigned mHasIsLatinLineBreak : 1;	// 176 = 0xb0
	unsigned mHasIsHangingPunctuation : 1;	// 176 = 0xb0
	unsigned mHasBulletCharSet : 1;	// 176 = 0xb0
}
@property(retain) id afterSpacing;	// G=0x34820db9; S=0x34806a61; converted property
@property(assign) int align;	// G=0x34820fbd; S=0x34806b45; converted property
@property(retain) id beforeSpacing;	// G=0x34820d51; S=0x34806a21; converted property
@property(assign, nonatomic) int bulletCharSet;	// G=0x3498db41; S=0x34938f19; 
@property(retain) id bulletColor;	// G=0x34821229; S=0x34806cb9; converted property
@property(retain) id bulletFont;	// G=0x34821291; S=0x34806cf9; converted property
@property(retain) id bulletProperties;	// G=0x348212f9; S=0x34806d39; converted property
@property(retain) id bulletSize;	// G=0x348211c1; S=0x34806c79; converted property
@property(assign) double defaultTab;	// G=0x34821029; S=0x34806b69; converted property
@property(assign) int fontAlign;	// G=0x34a506c9; S=0x34806bf1; converted property
@property(assign, nonatomic) BOOL hasBulletCharSet;	// G=0x3482132d; S=0x34938efd; 
@property(assign) double indent;	// G=0x34820f49; S=0x34806b19; converted property
@property(assign) BOOL isHangingPunctuation;	// G=0x34a50731; S=0x34806c55; converted property
@property(assign) BOOL isLatinLineBreak;	// G=0x34a506fd; S=0x34806c19; converted property
@property(assign) BOOL isRightToLeft;	// G=0x34a5065d; S=0x34806b99; converted property
@property(assign) double leftMargin;	// G=0x34820525; S=0x34806a9d; converted property
@property(assign) int level;	// G=0x34820edd; S=0x34806af5; converted property
@property(retain) id lineSpacing;	// G=0x34820ce9; S=0x348069a1; converted property
@property(assign) double rightMargin;	// G=0x34a50621; S=0x34806ac9; converted property
@property(assign) int wrap;	// G=0x34a50695; S=0x34806bcd; converted property
+ (id)defaultProperties;	// 0x3481c219
- (id)init;	// 0x3481c1e9
- (id)initWithDefaults;	// 0x34805a89
- (id)addTabStop;	// 0x3498b0c9
// converted property getter: - (id)afterSpacing;	// 0x34820db9
// converted property getter: - (int)align;	// 0x34820fbd
// converted property getter: - (id)beforeSpacing;	// 0x34820d51
// declared property getter: - (int)bulletCharSet;	// 0x3498db41
// converted property getter: - (id)bulletColor;	// 0x34821229
// converted property getter: - (id)bulletFont;	// 0x34821291
// converted property getter: - (id)bulletProperties;	// 0x348212f9
// converted property getter: - (id)bulletSize;	// 0x348211c1
- (void)clearTabStops;	// 0x34a505b1
- (void)dealloc;	// 0x3481f871
// converted property getter: - (double)defaultTab;	// 0x34821029
// converted property getter: - (int)fontAlign;	// 0x34a506c9
- (BOOL)hasAfterSpacing;	// 0x34820d85
- (BOOL)hasAlign;	// 0x34820f85
- (BOOL)hasBeforeSpacing;	// 0x34820d1d
// declared property getter: - (BOOL)hasBulletCharSet;	// 0x3482132d
- (BOOL)hasBulletColor;	// 0x348211f5
- (BOOL)hasBulletFont;	// 0x3482125d
- (BOOL)hasBulletProperties;	// 0x348212c5
- (BOOL)hasBulletSize;	// 0x3482118d
- (BOOL)hasDefaultTab;	// 0x34820ff1
- (BOOL)hasFontAlign;	// 0x348210d9
- (BOOL)hasIndent;	// 0x34820f11
- (BOOL)hasIsHangingPunctuation;	// 0x34821151
- (BOOL)hasIsLatinLineBreak;	// 0x34821115
- (BOOL)hasIsRightToLeft;	// 0x34821065
- (BOOL)hasLeftMargin;	// 0x348205d5
- (BOOL)hasLevel;	// 0x34820ea5
- (BOOL)hasLineSpacing;	// 0x34820cb5
- (BOOL)hasRightMargin;	// 0x34820e01
- (BOOL)hasTabStops;	// 0x34820ded
- (BOOL)hasWrap;	// 0x3482109d
- (unsigned)hash;	// 0x34a50765
// converted property getter: - (double)indent;	// 0x34820f49
- (BOOL)isEqual:(id)equal;	// 0x34a509b9
// converted property getter: - (BOOL)isHangingPunctuation;	// 0x34a50731
// converted property getter: - (BOOL)isLatinLineBreak;	// 0x34a506fd
// converted property getter: - (BOOL)isRightToLeft;	// 0x34a5065d
// converted property getter: - (double)leftMargin;	// 0x34820525
// converted property getter: - (int)level;	// 0x34820edd
// converted property getter: - (id)lineSpacing;	// 0x34820ce9
- (double)nonOveridenLeftMargin;	// 0x3487f689
- (void)overrideWithProperties:(id)properties;	// 0x34820611
- (void)removeUnnecessaryOverrides;	// 0x348707f9
// converted property getter: - (double)rightMargin;	// 0x34a50621
// converted property setter: - (void)setAfterSpacing:(id)spacing;	// 0x34806a61
// converted property setter: - (void)setAlign:(int)align;	// 0x34806b45
// converted property setter: - (void)setBeforeSpacing:(id)spacing;	// 0x34806a21
// declared property setter: - (void)setBulletCharSet:(int)set;	// 0x34938f19
// converted property setter: - (void)setBulletColor:(id)color;	// 0x34806cb9
// converted property setter: - (void)setBulletFont:(id)font;	// 0x34806cf9
// converted property setter: - (void)setBulletProperties:(id)properties;	// 0x34806d39
// converted property setter: - (void)setBulletSize:(id)size;	// 0x34806c79
// converted property setter: - (void)setDefaultTab:(double)tab;	// 0x34806b69
// converted property setter: - (void)setFontAlign:(int)align;	// 0x34806bf1
// declared property setter: - (void)setHasBulletCharSet:(BOOL)set;	// 0x34938efd
// converted property setter: - (void)setIndent:(double)indent;	// 0x34806b19
// converted property setter: - (void)setIsHangingPunctuation:(BOOL)punctuation;	// 0x34806c55
// converted property setter: - (void)setIsLatinLineBreak:(BOOL)aBreak;	// 0x34806c19
// converted property setter: - (void)setIsRightToLeft:(BOOL)left;	// 0x34806b99
// converted property setter: - (void)setLeftMargin:(double)margin;	// 0x34806a9d
// converted property setter: - (void)setLevel:(int)level;	// 0x34806af5
// converted property setter: - (void)setLineSpacing:(id)spacing;	// 0x348069a1
// converted property setter: - (void)setRightMargin:(double)margin;	// 0x34806ac9
// converted property setter: - (void)setWrap:(int)wrap;	// 0x34806bcd
- (id)tabStopAtIndex:(unsigned)index;	// 0x34a50591
- (unsigned)tabStopCount;	// 0x34a50571
- (id)tabStops;	// 0x3499096d
// converted property getter: - (int)wrap;	// 0x34a50695
@end
