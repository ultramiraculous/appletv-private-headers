/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColorPalette.h"
#import "EDCollection.h"


__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection <OADColorPalette> {
@private
	unsigned mDefaultColorsCount;	// 8 = 0x8
}
+ (bool)isSystemColorId:(unsigned)anId;	// 0x34450049
+ (int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;	// 0x34516285
+ (int)systemColorIdFromIndex:(unsigned)index;	// 0x34450061
+ (unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;	// 0x345c11a5
- (id)initWithDefaultSetup:(bool)defaultSetup;	// 0x3444ca71
- (void)addColors:(const unsigned *)colors count:(unsigned long)count defaultColors:(const unsigned *)colors3 defaultCount:(unsigned)count4;	// 0x344554f9
- (void)addDefaultPalette;	// 0x345c11d5
- (unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;	// 0x344dbb91
- (void)addPalette:(const unsigned *)palette paletteSize:(unsigned long)size paletteX:(const unsigned *)x paletteXSize:(unsigned)size4;	// 0x344553e1
- (id)colorWithIndex:(unsigned)index;	// 0x3445aa29
- (unsigned)defaultColorsCount;	// 0x345c1195
- (const unsigned *)defaultPalette;	// 0x344554ed
- (void)setupDefaults;	// 0x3444cacd
@end
