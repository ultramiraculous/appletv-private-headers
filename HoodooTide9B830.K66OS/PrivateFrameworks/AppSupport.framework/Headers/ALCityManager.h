/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class CPSearchMatcher;

@interface ALCityManager : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3 *_localizedDb;	// 8 = 0x8
	CPSearchMatcher *_citySearchMatcher;	// 12 = 0xc
}
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x31045f91; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x310461e9
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x31046429
+ (id)sharedManager;	// 0x310461a1
- (id)init;	// 0x31047fd1
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x31046ff5
- (id)citiesMatchingName:(id)name;	// 0x31045fa1
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x31047b4d
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x31046e89
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x31045fb5
- (id)citiesWithTimeZone:(id)timeZone;	// 0x31046135
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x31047199
// declared property getter: - (id)citySearchMatcher;	// 0x31045f91
- (void)dealloc;	// 0x31046569
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x31046121
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x3104688d
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x310465e1
- (id)localeWithCode:(id)code;	// 0x31046bbd
- (void)localizeCities:(id)cities;	// 0x3104734d
@end

