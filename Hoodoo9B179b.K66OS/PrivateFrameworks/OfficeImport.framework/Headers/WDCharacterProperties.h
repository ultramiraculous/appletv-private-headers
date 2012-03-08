/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject {
@private
	WDDocument *mDocument;	// 4 = 0x4
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_US4JpD *mOriginalProperties;	// 12 = 0xc
	XXStruct_US4JpD *mTrackedProperties;	// 16 = 0x10
}
@property(retain) id baseStyle;	// G=0x32877c3d; S=0x3286f39d; converted property
@property(assign) int bold;	// G=0x327d42bd; S=0x328509fd; converted property
@property(assign) int caps;	// G=0x3288a795; S=0x328518f1; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x3288e36d; S=0x3288dfd1; converted property
@property(retain) id color;	// G=0x32877431; S=0x32851455; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x329bca9d; S=0x3286f2a1; converted property
@property(assign) int deleted;	// G=0x328f1849; S=0x32852529; converted property
@property(assign) int doubleStrikeThrough;	// G=0x3291db65; S=0x328511d1; converted property
@property(assign) int edited;	// G=0x329bcd5d; S=0x328525f1; converted property
@property(assign) BOOL embeddedObject;	// G=0x329bd43d; S=0x329be22d; converted property
@property(assign) int embossed;	// G=0x329bbce1; S=0x32850d4d; converted property
@property(retain) id extendedFont;	// G=0x329bb595; S=0x328520a5; converted property
@property(retain) id farEastFont;	// G=0x329bb6f1; S=0x32851f89; converted property
@property(retain) id font;	// G=0x3286af25; S=0x32851e6d; converted property
@property(assign) unsigned short fontSize;	// G=0x327d257d; S=0x32851cd1; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x329bd2dd; S=0x32883d15; converted property
@property(assign) int formattingChanged;	// G=0x328c1091; S=0x328526b9; converted property
@property(assign) int hidden;	// G=0x328f6a39; S=0x328519b9; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x329bc3b5; S=0x3290a979; converted property
@property(assign) int highlightColor;	// G=0x329bc519; S=0x32851761; converted property
@property(assign) int imprint;	// G=0x329bbe41; S=0x32850e21; converted property
@property(assign) int italic;	// G=0x32877575; S=0x32850ad1; converted property
@property(assign) unsigned short kerning;	// G=0x329bc255; S=0x32851d99; converted property
@property(assign) int languageForBiText;	// G=0x329bd181; S=0x32852465; converted property
@property(assign) int languageForDefaultText;	// G=0x329bcc01; S=0x328522dd; converted property
@property(assign) int languageForFarEast;	// G=0x329bd021; S=0x328523a1; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x3288e095; S=0x3288defd; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x329bc679; S=0x329be301; converted property
@property(assign) long objectIDForOle2;	// G=0x329bd6f9; S=0x329be06d; converted property
@property(assign) long offsetToPictureData;	// G=0x329bd855; S=0x329bdf9d; converted property
@property(assign) BOOL ole2;	// G=0x329bd591; S=0x329be13d; converted property
@property(assign) int outline;	// G=0x329bbb81; S=0x32850ba5; converted property
@property(assign) short position;	// G=0x329bc93d; S=0x32851b45; converted property
@property(assign) int resolveMode;	// G=0x329bb3f1; S=0x32850989; converted property
@property(assign) int shadow;	// G=0x329bbfa1; S=0x32850c79; converted property
@property(assign) int smallCaps;	// G=0x328ecdb9; S=0x32851829; converted property
@property(assign) short spacing;	// G=0x329bc7dd; S=0x32851a81; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x329bcebd; S=0x3286f611; converted property
@property(assign) int strikeThrough;	// G=0x3291dac9; S=0x32851109; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x329bba21; S=0x328eca15; converted property
@property(retain) id symbolFont;	// G=0x329bb84d; S=0x328521c1; converted property
@property(assign) int underline;	// G=0x3286afcd; S=0x32850ef5; converted property
@property(retain) id underlineColor;	// G=0x329bc101; S=0x32850ff1; converted property
@property(assign) int verticalAlign;	// G=0x3287c00d; S=0x32851c09; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x329bb9e1
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x329bb9a1
- (id)initWithDocument:(id)document;	// 0x328508f1
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x329beddd
// converted property getter: - (id)baseStyle;	// 0x32877c3d
// converted property getter: - (int)bold;	// 0x327d42bd
- (id)border;	// 0x329bb439
// converted property getter: - (int)caps;	// 0x3288a795
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x3288e36d
- (void)clearBaseStyle;	// 0x32860be5
// converted property getter: - (id)color;	// 0x32877431
- (void)copyPropertiesInto:(id)into;	// 0x329bda95
- (id)copyWithZone:(NSZone *)zone;	// 0x329bdd91
- (void)dealloc;	// 0x327d63e9
// converted property getter: - (int)deleted;	// 0x328f1849
- (id)document;	// 0x328bfbf9
// converted property getter: - (int)doubleStrikeThrough;	// 0x3291db65
// converted property getter: - (int)edited;	// 0x329bcd5d
// converted property getter: - (BOOL)embeddedObject;	// 0x329bd43d
// converted property getter: - (int)embossed;	// 0x329bbce1
// converted property getter: - (id)extendedFont;	// 0x329bb595
// converted property getter: - (id)farEastFont;	// 0x329bb6f1
// converted property getter: - (id)font;	// 0x3286af25
- (id)fontForLanguageType:(int)languageType;	// 0x329be421
// converted property getter: - (unsigned short)fontSize;	// 0x327d257d
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x329bd2dd
// converted property getter: - (int)formattingChanged;	// 0x328c1091
// converted property getter: - (int)hidden;	// 0x328f6a39
// converted property getter: - (int)highlightColor;	// 0x329bc519
// converted property getter: - (int)imprint;	// 0x329bbe41
- (BOOL)isAnythingOverridden;	// 0x329bfa3d
- (BOOL)isAnythingOverriddenIn:(XXStruct__HyEsA *)anIn;	// 0x329bd9b1
- (BOOL)isBaseStyleOverridden;	// 0x327d1889
- (BOOL)isBoldOverridden;	// 0x327d21a9
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x329bda51
- (BOOL)isBorderOverridden;	// 0x329bb4d1
- (BOOL)isCapsOverridden;	// 0x327d2929
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x3288e2a9
// converted property getter: - (BOOL)isColorAuto;	// 0x329bca9d
- (BOOL)isColorAutoOverridden;	// 0x329bcb3d
- (BOOL)isColorOverridden;	// 0x327d29ed
- (BOOL)isDeletedOverridden;	// 0x327c86f9
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x327d23f5
- (BOOL)isEditedOverridden;	// 0x329bcdf9
- (BOOL)isEmbeddedObjectOverridden;	// 0x329bd4d9
- (BOOL)isEmbossedOverridden;	// 0x329bbd7d
- (BOOL)isExtendedFontOverridden;	// 0x329bb62d
- (BOOL)isFarEastFontOverridden;	// 0x329bb789
- (BOOL)isFontOverridden;	// 0x327d26dd
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x329be3d5
- (BOOL)isFontSizeForBiTextOverridden;	// 0x329bd379
- (BOOL)isFontSizeOverridden;	// 0x327d24b9
- (BOOL)isFormattingChangedOverridden;	// 0x328c0fcd
- (BOOL)isHiddenOverridden;	// 0x327d2f55
// converted property getter: - (BOOL)isHighlight;	// 0x329bc3b5
- (BOOL)isHighlightColorOverridden;	// 0x329bc5b5
- (BOOL)isHighlightOverridden;	// 0x329bc455
- (BOOL)isImprintOverridden;	// 0x329bbedd
- (BOOL)isItalicOverridden;	// 0x327d226d
- (BOOL)isKerningOverridden;	// 0x329bc2f1
- (BOOL)isLanguageForBiTextOverridden;	// 0x329bd219
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x329bcc99
- (BOOL)isLanguageForFarEastOverridden;	// 0x329bd0bd
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x3288e095
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x3286e549
// converted property getter: - (BOOL)isLowerCase;	// 0x329bc679
- (BOOL)isLowerCaseOverridden;	// 0x329bc719
- (BOOL)isObjectIDForOle2Overridden;	// 0x329bd791
- (BOOL)isOffsetToPictureDataOverridden;	// 0x329bd8ed
- (BOOL)isOle2Overridden;	// 0x329bd635
- (BOOL)isOutlineOverridden;	// 0x329bbc1d
- (BOOL)isPositionOverridden;	// 0x329bc9d9
- (BOOL)isShadingOverridden;	// 0x327d2ab1
- (BOOL)isShadowOverridden;	// 0x329bc03d
- (BOOL)isSmallCapsOverridden;	// 0x327d2865
- (BOOL)isSpacingOverridden;	// 0x329bc879
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x329bcebd
- (BOOL)isSpecialCharacterOverridden;	// 0x329bcf5d
- (BOOL)isStrikeThroughOverridden;	// 0x327d2331
- (BOOL)isSymbolCharacterOverridden;	// 0x329bbabd
- (BOOL)isSymbolFontOverridden;	// 0x329bb8e1
- (BOOL)isUnderlineColorOverridden;	// 0x329bc195
- (BOOL)isUnderlineOverridden;	// 0x327d27a1
- (BOOL)isVerticalAlignOverridden;	// 0x327d2619
// converted property getter: - (int)italic;	// 0x32877575
// converted property getter: - (unsigned short)kerning;	// 0x329bc255
// converted property getter: - (int)languageForBiText;	// 0x329bd181
// converted property getter: - (int)languageForDefaultText;	// 0x329bcc01
// converted property getter: - (int)languageForFarEast;	// 0x329bd021
- (id)mutableBorder;	// 0x32851299
- (id)mutableShading;	// 0x32851565
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x328bfe45
// converted property getter: - (long)objectIDForOle2;	// 0x329bd6f9
// converted property getter: - (long)offsetToPictureData;	// 0x329bd855
// converted property getter: - (BOOL)ole2;	// 0x329bd591
// converted property getter: - (int)outline;	// 0x329bbb81
// converted property getter: - (short)position;	// 0x329bc93d
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x329be465
// converted property getter: - (int)resolveMode;	// 0x329bb3f1
- (int)reverseBooleanProperty:(int)property;	// 0x329bda75
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x3286f39d
// converted property setter: - (void)setBold:(int)bold;	// 0x328509fd
// converted property setter: - (void)setCaps:(int)caps;	// 0x328518f1
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x3288dfd1
// converted property setter: - (void)setColor:(id)color;	// 0x32851455
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x3286f2a1
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x32852529
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x328511d1
// converted property setter: - (void)setEdited:(int)edited;	// 0x328525f1
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x329be22d
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x32850d4d
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x328520a5
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x32851f89
// converted property setter: - (void)setFont:(id)font;	// 0x32851e6d
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x32851cd1
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x32883d15
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x328526b9
// converted property setter: - (void)setHidden:(int)hidden;	// 0x328519b9
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x3290a979
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x32851761
// converted property setter: - (void)setImprint:(int)imprint;	// 0x32850e21
// converted property setter: - (void)setItalic:(int)italic;	// 0x32850ad1
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x32851d99
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x32852465
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x328522dd
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x328523a1
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x3288defd
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x329be301
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x329be06d
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x329bdf9d
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x329be13d
// converted property setter: - (void)setOutline:(int)outline;	// 0x32850ba5
// converted property setter: - (void)setPosition:(short)position;	// 0x32851b45
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x32850989
// converted property setter: - (void)setShadow:(int)shadow;	// 0x32850c79
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x32851829
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x32851a81
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x3286f611
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x32851109
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x328eca15
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x328521c1
// converted property setter: - (void)setUnderline:(int)underline;	// 0x32850ef5
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x32850ff1
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x32851c09
- (id)shading;	// 0x3290597d
// converted property getter: - (int)shadow;	// 0x329bbfa1
// converted property getter: - (int)smallCaps;	// 0x328ecdb9
// converted property getter: - (short)spacing;	// 0x329bc7dd
// converted property getter: - (int)strikeThrough;	// 0x3291dac9
// converted property getter: - (unsigned short)symbolCharacter;	// 0x329bba21
// converted property getter: - (id)symbolFont;	// 0x329bb84d
// converted property getter: - (int)underline;	// 0x3286afcd
// converted property getter: - (id)underlineColor;	// 0x329bc101
// converted property getter: - (int)verticalAlign;	// 0x3287c00d
@end
