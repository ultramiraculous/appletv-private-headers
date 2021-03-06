/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRLocalizedStringManager : BRSingleton {
	NSString *_currentLanguage;	// 4 = 0x4
	NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *currentLanguage;	// G=0x473729; S=0x473739; @synthesize=_currentLanguage
@property(retain, nonatomic) NSMutableDictionary *stringFileCache;	// G=0x473761; S=0x473771; @synthesize=_stringFileCache
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x472c1d
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x4e4df9
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x472d2d
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x472ca1
+ (id)localizedLanguageForCode:(id)code;	// 0x4731ed
+ (id)localizedLanguageForIdentifier:(id)identifier;	// 0x47326d
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x472db9
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x4730d9
+ (void)setSingleton:(id)singleton;	// 0x4729b9
+ (id)singleton;	// 0x4729a9
- (id)init;	// 0x4729dd
- (void).cxx_destruct;	// 0x473799
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x473541
- (BOOL)_doesHashKey:(id)key belongToBundleWithPath:(id)path;	// 0x4736cd
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x473679
- (void)_systemLanguageUpdated:(id)updated;	// 0x472b19
// declared property getter: - (id)currentLanguage;	// 0x473729
- (void)dealloc;	// 0x472aad
- (void)resouceBundleHasChangedAtPath:(id)path;	// 0x4732ed
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x473739
// declared property setter: - (void)setStringFileCache:(id)cache;	// 0x473771
// declared property getter: - (id)stringFileCache;	// 0x473761
@end

