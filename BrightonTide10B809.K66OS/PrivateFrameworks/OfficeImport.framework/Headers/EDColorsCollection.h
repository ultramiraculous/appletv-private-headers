/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColorPalette.h"
#import "EDCollection.h"


@interface EDColorsCollection : EDCollection <OADColorPalette> {
	unsigned mDefaultColorsCount;	// 8 = 0x8
}
+ (bool)isSystemColorId:(unsigned)anId;	// 0x34897e85
+ (int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;	// 0x3490aa75
+ (int)systemColorIdFromIndex:(unsigned)index;	// 0x34897e99
+ (unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;	// 0x34a297a5
- (id)initWithDefaultSetup:(bool)defaultSetup;	// 0x34894921
- (void)addColors:(const unsigned *)colors count:(unsigned long)count defaultColors:(const unsigned *)colors3 defaultCount:(unsigned)count4;	// 0x3489d009
- (void)addDefaultPalette;	// 0x34a297d1
- (unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;	// 0x349717c1
- (void)addPalette:(const unsigned *)palette paletteSize:(unsigned long)size paletteX:(const unsigned *)x paletteXSize:(unsigned)size4;	// 0x3489ceed
- (id)colorWithIndex:(unsigned)index;	// 0x348a4f61
- (unsigned)defaultColorsCount;	// 0x34a29795
- (const unsigned *)defaultPalette;	// 0x3489cffd
- (void)setupDefaults;	// 0x3489497d
@end

