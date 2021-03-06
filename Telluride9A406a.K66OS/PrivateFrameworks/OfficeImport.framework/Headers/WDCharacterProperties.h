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
@property(retain) id baseStyle;	// G=0x32960c3d; S=0x3295839d; converted property
@property(assign) int bold;	// G=0x328bd2bd; S=0x329399fd; converted property
@property(assign) int caps;	// G=0x32973795; S=0x3293a8f1; converted property
@property(assign) long charPositionOfPictureBulletInBookmark;	// G=0x3297736d; S=0x32976fd1; converted property
@property(retain) id color;	// G=0x32960431; S=0x3293a455; converted property
@property(assign, getter=isColorAuto) BOOL colorAuto;	// G=0x32aa5a9d; S=0x329582a1; converted property
@property(assign) int deleted;	// G=0x329da849; S=0x3293b529; converted property
@property(assign) int doubleStrikeThrough;	// G=0x32a06b65; S=0x3293a1d1; converted property
@property(assign) int edited;	// G=0x32aa5d5d; S=0x3293b5f1; converted property
@property(assign) BOOL embeddedObject;	// G=0x32aa643d; S=0x32aa722d; converted property
@property(assign) int embossed;	// G=0x32aa4ce1; S=0x32939d4d; converted property
@property(retain) id extendedFont;	// G=0x32aa4595; S=0x3293b0a5; converted property
@property(retain) id farEastFont;	// G=0x32aa46f1; S=0x3293af89; converted property
@property(retain) id font;	// G=0x32953f25; S=0x3293ae6d; converted property
@property(assign) unsigned short fontSize;	// G=0x328bb57d; S=0x3293acd1; converted property
@property(assign) unsigned short fontSizeForBiText;	// G=0x32aa62dd; S=0x3296cd15; converted property
@property(assign) int formattingChanged;	// G=0x329aa091; S=0x3293b6b9; converted property
@property(assign) int hidden;	// G=0x329dfa39; S=0x3293a9b9; converted property
@property(assign, getter=isHighlight) BOOL highlight;	// G=0x32aa53b5; S=0x329f3979; converted property
@property(assign) int highlightColor;	// G=0x32aa5519; S=0x3293a761; converted property
@property(assign) int imprint;	// G=0x32aa4e41; S=0x32939e21; converted property
@property(assign) int italic;	// G=0x32960575; S=0x32939ad1; converted property
@property(assign) unsigned short kerning;	// G=0x32aa5255; S=0x3293ad99; converted property
@property(assign) int languageForBiText;	// G=0x32aa6181; S=0x3293b465; converted property
@property(assign) int languageForDefaultText;	// G=0x32aa5c01; S=0x3293b2dd; converted property
@property(assign) int languageForFarEast;	// G=0x32aa6021; S=0x3293b3a1; converted property
@property(assign, getter=isListCharacterPictureBullet) BOOL listCharacterPictureBullet;	// G=0x32977095; S=0x32976efd; converted property
@property(assign, getter=isLowerCase) BOOL lowerCase;	// G=0x32aa5679; S=0x32aa7301; converted property
@property(assign) long objectIDForOle2;	// G=0x32aa66f9; S=0x32aa706d; converted property
@property(assign) long offsetToPictureData;	// G=0x32aa6855; S=0x32aa6f9d; converted property
@property(assign) BOOL ole2;	// G=0x32aa6591; S=0x32aa713d; converted property
@property(assign) int outline;	// G=0x32aa4b81; S=0x32939ba5; converted property
@property(assign) short position;	// G=0x32aa593d; S=0x3293ab45; converted property
@property(assign) int resolveMode;	// G=0x32aa43f1; S=0x32939989; converted property
@property(assign) int shadow;	// G=0x32aa4fa1; S=0x32939c79; converted property
@property(assign) int smallCaps;	// G=0x329d5db9; S=0x3293a829; converted property
@property(assign) short spacing;	// G=0x32aa57dd; S=0x3293aa81; converted property
@property(assign, getter=isSpecialCharacter) BOOL specialCharacter;	// G=0x32aa5ebd; S=0x32958611; converted property
@property(assign) int strikeThrough;	// G=0x32a06ac9; S=0x3293a109; converted property
@property(assign) unsigned short symbolCharacter;	// G=0x32aa4a21; S=0x329d5a15; converted property
@property(retain) id symbolFont;	// G=0x32aa484d; S=0x3293b1c1; converted property
@property(assign) int underline;	// G=0x32953fcd; S=0x32939ef5; converted property
@property(retain) id underlineColor;	// G=0x32aa5101; S=0x32939ff1; converted property
@property(assign) int verticalAlign;	// G=0x3296500d; S=0x3293ac09; converted property
+ (SEL)fontOverriddenSelectorForLanguageType:(int)languageType;	// 0x32aa49e1
+ (SEL)fontSelectorForLanguageType:(int)languageType;	// 0x32aa49a1
- (id)initWithDocument:(id)document;	// 0x329398f1
- (void)applyPropertiesFrom:(id)from ifOverriddenIn:(id)anIn;	// 0x32aa7ddd
// converted property getter: - (id)baseStyle;	// 0x32960c3d
// converted property getter: - (int)bold;	// 0x328bd2bd
- (id)border;	// 0x32aa4439
// converted property getter: - (int)caps;	// 0x32973795
// converted property getter: - (long)charPositionOfPictureBulletInBookmark;	// 0x3297736d
- (void)clearBaseStyle;	// 0x32949be5
// converted property getter: - (id)color;	// 0x32960431
- (void)copyPropertiesInto:(id)into;	// 0x32aa6a95
- (id)copyWithZone:(NSZone *)zone;	// 0x32aa6d91
- (void)dealloc;	// 0x328bf3e9
// converted property getter: - (int)deleted;	// 0x329da849
- (id)document;	// 0x329a8bf9
// converted property getter: - (int)doubleStrikeThrough;	// 0x32a06b65
// converted property getter: - (int)edited;	// 0x32aa5d5d
// converted property getter: - (BOOL)embeddedObject;	// 0x32aa643d
// converted property getter: - (int)embossed;	// 0x32aa4ce1
// converted property getter: - (id)extendedFont;	// 0x32aa4595
// converted property getter: - (id)farEastFont;	// 0x32aa46f1
// converted property getter: - (id)font;	// 0x32953f25
- (id)fontForLanguageType:(int)languageType;	// 0x32aa7421
// converted property getter: - (unsigned short)fontSize;	// 0x328bb57d
// converted property getter: - (unsigned short)fontSizeForBiText;	// 0x32aa62dd
// converted property getter: - (int)formattingChanged;	// 0x329aa091
// converted property getter: - (int)hidden;	// 0x329dfa39
// converted property getter: - (int)highlightColor;	// 0x32aa5519
// converted property getter: - (int)imprint;	// 0x32aa4e41
- (BOOL)isAnythingOverridden;	// 0x32aa8a3d
- (BOOL)isAnythingOverriddenIn:(XXStruct__HyEsA *)anIn;	// 0x32aa69b1
- (BOOL)isBaseStyleOverridden;	// 0x328ba889
- (BOOL)isBoldOverridden;	// 0x328bb1a9
- (BOOL)isBooleanProbablyDifferent:(int)different than:(int)than;	// 0x32aa6a51
- (BOOL)isBorderOverridden;	// 0x32aa44d1
- (BOOL)isCapsOverridden;	// 0x328bb929
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;	// 0x329772a9
// converted property getter: - (BOOL)isColorAuto;	// 0x32aa5a9d
- (BOOL)isColorAutoOverridden;	// 0x32aa5b3d
- (BOOL)isColorOverridden;	// 0x328bb9ed
- (BOOL)isDeletedOverridden;	// 0x328b16f9
- (BOOL)isDoubleStrikeThroughOverridden;	// 0x328bb3f5
- (BOOL)isEditedOverridden;	// 0x32aa5df9
- (BOOL)isEmbeddedObjectOverridden;	// 0x32aa64d9
- (BOOL)isEmbossedOverridden;	// 0x32aa4d7d
- (BOOL)isExtendedFontOverridden;	// 0x32aa462d
- (BOOL)isFarEastFontOverridden;	// 0x32aa4789
- (BOOL)isFontOverridden;	// 0x328bb6dd
- (BOOL)isFontOverriddenForLanguageType:(int)languageType;	// 0x32aa73d5
- (BOOL)isFontSizeForBiTextOverridden;	// 0x32aa6379
- (BOOL)isFontSizeOverridden;	// 0x328bb4b9
- (BOOL)isFormattingChangedOverridden;	// 0x329a9fcd
- (BOOL)isHiddenOverridden;	// 0x328bbf55
// converted property getter: - (BOOL)isHighlight;	// 0x32aa53b5
- (BOOL)isHighlightColorOverridden;	// 0x32aa55b5
- (BOOL)isHighlightOverridden;	// 0x32aa5455
- (BOOL)isImprintOverridden;	// 0x32aa4edd
- (BOOL)isItalicOverridden;	// 0x328bb26d
- (BOOL)isKerningOverridden;	// 0x32aa52f1
- (BOOL)isLanguageForBiTextOverridden;	// 0x32aa6219
- (BOOL)isLanguageForDefaultTextOverridden;	// 0x32aa5c99
- (BOOL)isLanguageForFarEastOverridden;	// 0x32aa60bd
// converted property getter: - (BOOL)isListCharacterPictureBullet;	// 0x32977095
- (BOOL)isListCharacterPictureBulletOverridden;	// 0x32957549
// converted property getter: - (BOOL)isLowerCase;	// 0x32aa5679
- (BOOL)isLowerCaseOverridden;	// 0x32aa5719
- (BOOL)isObjectIDForOle2Overridden;	// 0x32aa6791
- (BOOL)isOffsetToPictureDataOverridden;	// 0x32aa68ed
- (BOOL)isOle2Overridden;	// 0x32aa6635
- (BOOL)isOutlineOverridden;	// 0x32aa4c1d
- (BOOL)isPositionOverridden;	// 0x32aa59d9
- (BOOL)isShadingOverridden;	// 0x328bbab1
- (BOOL)isShadowOverridden;	// 0x32aa503d
- (BOOL)isSmallCapsOverridden;	// 0x328bb865
- (BOOL)isSpacingOverridden;	// 0x32aa5879
// converted property getter: - (BOOL)isSpecialCharacter;	// 0x32aa5ebd
- (BOOL)isSpecialCharacterOverridden;	// 0x32aa5f5d
- (BOOL)isStrikeThroughOverridden;	// 0x328bb331
- (BOOL)isSymbolCharacterOverridden;	// 0x32aa4abd
- (BOOL)isSymbolFontOverridden;	// 0x32aa48e1
- (BOOL)isUnderlineColorOverridden;	// 0x32aa5195
- (BOOL)isUnderlineOverridden;	// 0x328bb7a1
- (BOOL)isVerticalAlignOverridden;	// 0x328bb619
// converted property getter: - (int)italic;	// 0x32960575
// converted property getter: - (unsigned short)kerning;	// 0x32aa5255
// converted property getter: - (int)languageForBiText;	// 0x32aa6181
// converted property getter: - (int)languageForDefaultText;	// 0x32aa5c01
// converted property getter: - (int)languageForFarEast;	// 0x32aa6021
- (id)mutableBorder;	// 0x3293a299
- (id)mutableShading;	// 0x3293a565
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x329a8e45
// converted property getter: - (long)objectIDForOle2;	// 0x32aa66f9
// converted property getter: - (long)offsetToPictureData;	// 0x32aa6855
// converted property getter: - (BOOL)ole2;	// 0x32aa6591
// converted property getter: - (int)outline;	// 0x32aa4b81
// converted property getter: - (short)position;	// 0x32aa593d
- (void)removeEmptyFormattingChanges:(id)changes;	// 0x32aa7465
// converted property getter: - (int)resolveMode;	// 0x32aa43f1
- (int)reverseBooleanProperty:(int)property;	// 0x32aa6a75
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x3295839d
// converted property setter: - (void)setBold:(int)bold;	// 0x329399fd
// converted property setter: - (void)setCaps:(int)caps;	// 0x3293a8f1
// converted property setter: - (void)setCharPositionOfPictureBulletInBookmark:(long)bookmark;	// 0x32976fd1
// converted property setter: - (void)setColor:(id)color;	// 0x3293a455
// converted property setter: - (void)setColorAuto:(BOOL)auto;	// 0x329582a1
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x3293b529
// converted property setter: - (void)setDoubleStrikeThrough:(int)through;	// 0x3293a1d1
// converted property setter: - (void)setEdited:(int)edited;	// 0x3293b5f1
// converted property setter: - (void)setEmbeddedObject:(BOOL)object;	// 0x32aa722d
// converted property setter: - (void)setEmbossed:(int)embossed;	// 0x32939d4d
// converted property setter: - (void)setExtendedFont:(id)font;	// 0x3293b0a5
// converted property setter: - (void)setFarEastFont:(id)font;	// 0x3293af89
// converted property setter: - (void)setFont:(id)font;	// 0x3293ae6d
// converted property setter: - (void)setFontSize:(unsigned short)size;	// 0x3293acd1
// converted property setter: - (void)setFontSizeForBiText:(unsigned short)biText;	// 0x3296cd15
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x3293b6b9
// converted property setter: - (void)setHidden:(int)hidden;	// 0x3293a9b9
// converted property setter: - (void)setHighlight:(BOOL)highlight;	// 0x329f3979
// converted property setter: - (void)setHighlightColor:(int)color;	// 0x3293a761
// converted property setter: - (void)setImprint:(int)imprint;	// 0x32939e21
// converted property setter: - (void)setItalic:(int)italic;	// 0x32939ad1
// converted property setter: - (void)setKerning:(unsigned short)kerning;	// 0x3293ad99
// converted property setter: - (void)setLanguageForBiText:(int)biText;	// 0x3293b465
// converted property setter: - (void)setLanguageForDefaultText:(int)defaultText;	// 0x3293b2dd
// converted property setter: - (void)setLanguageForFarEast:(int)farEast;	// 0x3293b3a1
// converted property setter: - (void)setListCharacterPictureBullet:(BOOL)bullet;	// 0x32976efd
// converted property setter: - (void)setLowerCase:(BOOL)aCase;	// 0x32aa7301
// converted property setter: - (void)setObjectIDForOle2:(long)ole2;	// 0x32aa706d
// converted property setter: - (void)setOffsetToPictureData:(long)pictureData;	// 0x32aa6f9d
// converted property setter: - (void)setOle2:(BOOL)a2;	// 0x32aa713d
// converted property setter: - (void)setOutline:(int)outline;	// 0x32939ba5
// converted property setter: - (void)setPosition:(short)position;	// 0x3293ab45
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x32939989
// converted property setter: - (void)setShadow:(int)shadow;	// 0x32939c79
// converted property setter: - (void)setSmallCaps:(int)caps;	// 0x3293a829
// converted property setter: - (void)setSpacing:(short)spacing;	// 0x3293aa81
// converted property setter: - (void)setSpecialCharacter:(BOOL)character;	// 0x32958611
// converted property setter: - (void)setStrikeThrough:(int)through;	// 0x3293a109
// converted property setter: - (void)setSymbolCharacter:(unsigned short)character;	// 0x329d5a15
// converted property setter: - (void)setSymbolFont:(id)font;	// 0x3293b1c1
// converted property setter: - (void)setUnderline:(int)underline;	// 0x32939ef5
// converted property setter: - (void)setUnderlineColor:(id)color;	// 0x32939ff1
// converted property setter: - (void)setVerticalAlign:(int)align;	// 0x3293ac09
- (id)shading;	// 0x329ee97d
// converted property getter: - (int)shadow;	// 0x32aa4fa1
// converted property getter: - (int)smallCaps;	// 0x329d5db9
// converted property getter: - (short)spacing;	// 0x32aa57dd
// converted property getter: - (int)strikeThrough;	// 0x32a06ac9
// converted property getter: - (unsigned short)symbolCharacter;	// 0x32aa4a21
// converted property getter: - (id)symbolFont;	// 0x32aa484d
// converted property getter: - (int)underline;	// 0x32953fcd
// converted property getter: - (id)underlineColor;	// 0x32aa5101
// converted property getter: - (int)verticalAlign;	// 0x3296500d
@end

