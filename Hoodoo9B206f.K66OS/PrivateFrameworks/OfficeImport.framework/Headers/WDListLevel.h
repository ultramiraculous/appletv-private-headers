/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableString, WDCharacterProperties, WDOfficeArt, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : NSObject {
@private
	WDParagraphProperties *mParagraphProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	WDOfficeArt *mImage;	// 12 = 0xc
	int mStartNumber;	// 16 = 0x10
	int mNumberFormat;	// 20 = 0x14
	BOOL mRestartNumbering;	// 24 = 0x18
	BOOL mLegal;	// 25 = 0x19
	int mSuffix;	// 28 = 0x1c
	NSMutableString *mText;	// 32 = 0x20
	BOOL mLegacy;	// 36 = 0x24
	int mLegacySpace;	// 40 = 0x28
	int mLegacyIndent;	// 44 = 0x2c
	int mJustification;	// 48 = 0x30
}
@property(retain) id image;	// G=0x346017f5; S=0x344ce44d; converted property
@property(assign) int justification;	// G=0x34601875; S=0x344ae6b1; converted property
@property(assign) BOOL legacy;	// G=0x34601845; S=0x344ae681; converted property
@property(assign) long legacyIndent;	// G=0x34601865; S=0x344ae6a1; converted property
@property(assign) long legacySpace;	// G=0x34601855; S=0x344ae691; converted property
@property(assign) BOOL legal;	// G=0x34601819; S=0x344ae63d; converted property
@property(assign) int numberFormat;	// G=0x34415765; S=0x344ae61d; converted property
@property(assign) BOOL restartNumbering;	// G=0x34601805; S=0x344ae62d; converted property
@property(assign) long startNumber;	// G=0x34415219; S=0x344ae60d; converted property
@property(assign) int suffix;	// G=0x3460182d; S=0x344ae64d; converted property
@property(retain) id text;	// G=0x344157f1; S=0x344ae65d; converted property
- (id)initWithDocument:(id)document;	// 0x344ae0a9
- (id)characterProperties;	// 0x34415f25
- (void)dealloc;	// 0x344168cd
// converted property getter: - (id)image;	// 0x346017f5
- (BOOL)imageBullet;	// 0x346018ad
- (BOOL)imageBulletOverridden;	// 0x34601889
// converted property getter: - (int)justification;	// 0x34601875
- (BOOL)justificationOverridden;	// 0x34601885
// converted property getter: - (BOOL)legacy;	// 0x34601845
// converted property getter: - (long)legacyIndent;	// 0x34601865
// converted property getter: - (long)legacySpace;	// 0x34601855
// converted property getter: - (BOOL)legal;	// 0x34601819
- (BOOL)legalOverridden;	// 0x34601829
// converted property getter: - (int)numberFormat;	// 0x34415765
- (BOOL)numberFormatOverridden;	// 0x346017f1
- (id)paragraphProperties;	// 0x344152ad
// converted property getter: - (BOOL)restartNumbering;	// 0x34601805
- (BOOL)restartNumberingOverridden;	// 0x34601815
// converted property setter: - (void)setImage:(id)image;	// 0x344ce44d
// converted property setter: - (void)setJustification:(int)justification;	// 0x344ae6b1
// converted property setter: - (void)setLegacy:(BOOL)legacy;	// 0x344ae681
// converted property setter: - (void)setLegacyIndent:(long)indent;	// 0x344ae6a1
// converted property setter: - (void)setLegacySpace:(long)space;	// 0x344ae691
// converted property setter: - (void)setLegal:(BOOL)legal;	// 0x344ae63d
// converted property setter: - (void)setNumberFormat:(int)format;	// 0x344ae61d
// converted property setter: - (void)setRestartNumbering:(BOOL)numbering;	// 0x344ae62d
// converted property setter: - (void)setStartNumber:(long)number;	// 0x344ae60d
// converted property setter: - (void)setSuffix:(int)suffix;	// 0x344ae64d
// converted property setter: - (void)setText:(id)text;	// 0x344ae65d
// converted property getter: - (long)startNumber;	// 0x34415219
- (BOOL)startNumberOverridden;	// 0x346017ed
// converted property getter: - (int)suffix;	// 0x3460182d
- (BOOL)suffixOverridden;	// 0x3460183d
// converted property getter: - (id)text;	// 0x344157f1
- (BOOL)textOverridden;	// 0x34601841
@end
