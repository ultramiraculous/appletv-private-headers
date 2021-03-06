/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface ALCity : NSObject {
	int _identifier;	// 4 = 0x4
	NSString *_localeCode;	// 8 = 0x8
	NSString *_timeZone;	// 12 = 0xc
	float _longitude;	// 16 = 0x10
	float _latitude;	// 20 = 0x14
	NSString *_yahooCode;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	NSString *_unlocalizedName;	// 32 = 0x20
	NSString *_countryName;	// 36 = 0x24
	NSString *_unlocalizedCountryName;	// 40 = 0x28
	NSString *_countryOverride;	// 44 = 0x2c
	NSString *_unlocalizedCountryOverride;	// 48 = 0x30
	NSString *_identifierForCPCity;	// 52 = 0x34
	BOOL _localizationAttempted;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *classicIdentifier;	// G=0x31a142a1; 
@property(retain, nonatomic) NSString *countryName;	// G=0x31a13ff9; S=0x31a13fad; 
@property(retain, nonatomic) NSString *countryOverride;	// G=0x31a13f79; S=0x31a13f2d; 
@property(assign, nonatomic) int identifier;	// G=0x31a13e4d; S=0x31a13e5d; @synthesize=_identifier
@property(assign, nonatomic) float latitude;	// G=0x31a13ded; S=0x31a13dfd; @synthesize=_latitude
@property(retain, nonatomic) NSString *localeCode;	// G=0x31a13e3d; S=0x31a14b89; @synthesize=_localeCode
@property(assign, nonatomic) float longitude;	// G=0x31a13e0d; S=0x31a13e1d; @synthesize=_longitude
@property(retain, nonatomic) NSString *name;	// G=0x31a14079; S=0x31a1402d; 
@property(readonly, assign, nonatomic) NSDictionary *properties;	// G=0x31a140ad; 
@property(retain, nonatomic) NSString *timeZone;	// G=0x31a13e2d; S=0x31a14bb1; @synthesize=_timeZone
@property(retain, nonatomic) NSString *unlocalizedCountryName;	// G=0x31a13dbd; S=0x31a13e6d; 
@property(retain, nonatomic) NSString *unlocalizedCountryOverride;	// G=0x31a13dcd; S=0x31a14c01; @synthesize=_unlocalizedCountryOverride
@property(retain, nonatomic) NSString *unlocalizedName;	// G=0x31a13dad; S=0x31a13ecd; 
@property(retain, nonatomic) NSString *yahooCode;	// G=0x31a13ddd; S=0x31a14bd9; @synthesize=_yahooCode
- (id)init;	// 0x31a144c9
- (id)initWithProperties:(id)properties;	// 0x31a146d5
- (id)initWithSQLRow:(char **)sqlrow;	// 0x31a149f9
// declared property getter: - (id)classicIdentifier;	// 0x31a142a1
// declared property getter: - (id)countryName;	// 0x31a13ff9
// declared property getter: - (id)countryOverride;	// 0x31a13f79
- (void)dealloc;	// 0x31a145e9
- (id)description;	// 0x31a144e1
- (id)displayNameIncludingCountry:(BOOL)country;	// 0x31a14331
- (void)ensureLocalized;	// 0x31a143fd
- (unsigned)hash;	// 0x31a13d9d
// declared property getter: - (int)identifier;	// 0x31a13e4d
- (BOOL)isEqual:(id)equal;	// 0x31a14469
// declared property getter: - (float)latitude;	// 0x31a13ded
// declared property getter: - (id)localeCode;	// 0x31a13e3d
// declared property getter: - (float)longitude;	// 0x31a13e0d
// declared property getter: - (id)name;	// 0x31a14079
// declared property getter: - (id)properties;	// 0x31a140ad
// declared property setter: - (void)setCountryName:(id)name;	// 0x31a13fad
// declared property setter: - (void)setCountryOverride:(id)override;	// 0x31a13f2d
// declared property setter: - (void)setIdentifier:(int)identifier;	// 0x31a13e5d
// declared property setter: - (void)setLatitude:(float)latitude;	// 0x31a13dfd
// declared property setter: - (void)setLocaleCode:(id)code;	// 0x31a14b89
// declared property setter: - (void)setLongitude:(float)longitude;	// 0x31a13e1d
// declared property setter: - (void)setName:(id)name;	// 0x31a1402d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x31a14bb1
// declared property setter: - (void)setUnlocalizedCountryName:(id)name;	// 0x31a13e6d
// declared property setter: - (void)setUnlocalizedCountryOverride:(id)override;	// 0x31a14c01
// declared property setter: - (void)setUnlocalizedName:(id)name;	// 0x31a13ecd
// declared property setter: - (void)setYahooCode:(id)code;	// 0x31a14bd9
// declared property getter: - (id)timeZone;	// 0x31a13e2d
// declared property getter: - (id)unlocalizedCountryName;	// 0x31a13dbd
// declared property getter: - (id)unlocalizedCountryOverride;	// 0x31a13dcd
// declared property getter: - (id)unlocalizedName;	// 0x31a13dad
// declared property getter: - (id)yahooCode;	// 0x31a13ddd
@end

