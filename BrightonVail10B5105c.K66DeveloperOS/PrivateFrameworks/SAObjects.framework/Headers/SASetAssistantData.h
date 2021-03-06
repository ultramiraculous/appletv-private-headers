/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSNumber, NSString, NSArray;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSArray *abSources;	// G=0x303c5989; S=0x303c5a05; 
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *anchor;	// G=0x303c5a6d; S=0x303c5a89; 
@property(assign, nonatomic) BOOL censorSpeech;	// G=0x303c5ad9; S=0x303c5b51; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x303c5b95; S=0x303c5bb1; 
@property(copy, nonatomic) NSNumber *debugFlags;	// G=0x303c5c01; S=0x303c5c1d; 
@property(copy, nonatomic) NSArray *deviceCapabilities;	// G=0x303c5c6d; S=0x303c5c89; 
@property(copy, nonatomic) NSString *deviceVersion;	// G=0x303c5cd9; S=0x303c5cf5; 
@property(copy, nonatomic) NSString *firstName;	// G=0x303c5d45; S=0x303c5d61; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x303c5db1; S=0x303c5e29; 
@property(copy, nonatomic) NSString *lastName;	// G=0x303c5e6d; S=0x303c5e89; 
@property(copy, nonatomic) NSArray *meCards;	// G=0x303c5ed9; S=0x303c5f55; 
@property(copy, nonatomic) NSString *osVersion;	// G=0x303c5fbd; S=0x303c5fd9; 
@property(copy, nonatomic) NSArray *parentalRestrictions;	// G=0x303c6029; S=0x303c6045; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *region;	// G=0x303c6095; S=0x303c60b1; 
@property(copy, nonatomic) NSNumber *storefront;	// G=0x303c6101; S=0x303c611d; 
@property(copy, nonatomic) NSString *temperatureUnit;	// G=0x303c616d; S=0x303c6189; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x303c61d9; S=0x303c61f5; 
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;	// G=0x303c6245; S=0x303c6261; 
@property(copy, nonatomic) NSNumber *uiScale;	// G=0x303c62b1; S=0x303c62cd; 
+ (id)setAssistantData;	// 0x303c58f9
+ (id)setAssistantDataWithDictionary:(id)dictionary context:(id)context;	// 0x303c593d
// declared property getter: - (id)abSources;	// 0x303c5989
// declared property getter: - (id)anchor;	// 0x303c5a6d
// declared property getter: - (BOOL)censorSpeech;	// 0x303c5ad9
// declared property getter: - (id)countryCode;	// 0x303c5b95
// declared property getter: - (id)debugFlags;	// 0x303c5c01
// declared property getter: - (id)deviceCapabilities;	// 0x303c5c6d
// declared property getter: - (id)deviceVersion;	// 0x303c5cd9
- (id)encodedClassName;	// 0x303c58ed
// declared property getter: - (id)firstName;	// 0x303c5d45
- (id)groupIdentifier;	// 0x303c58dd
// declared property getter: - (BOOL)handsFree;	// 0x303c5db1
// declared property getter: - (id)lastName;	// 0x303c5e6d
// declared property getter: - (id)meCards;	// 0x303c5ed9
// declared property getter: - (id)osVersion;	// 0x303c5fbd
// declared property getter: - (id)parentalRestrictions;	// 0x303c6029
// declared property getter: - (id)region;	// 0x303c6095
// declared property setter: - (void)setAbSources:(id)sources;	// 0x303c5a05
// declared property setter: - (void)setAnchor:(id)anchor;	// 0x303c5a89
// declared property setter: - (void)setCensorSpeech:(BOOL)speech;	// 0x303c5b51
// declared property setter: - (void)setCountryCode:(id)code;	// 0x303c5bb1
// declared property setter: - (void)setDebugFlags:(id)flags;	// 0x303c5c1d
// declared property setter: - (void)setDeviceCapabilities:(id)capabilities;	// 0x303c5c89
// declared property setter: - (void)setDeviceVersion:(id)version;	// 0x303c5cf5
// declared property setter: - (void)setFirstName:(id)name;	// 0x303c5d61
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x303c5e29
// declared property setter: - (void)setLastName:(id)name;	// 0x303c5e89
// declared property setter: - (void)setMeCards:(id)cards;	// 0x303c5f55
// declared property setter: - (void)setOsVersion:(id)version;	// 0x303c5fd9
// declared property setter: - (void)setParentalRestrictions:(id)restrictions;	// 0x303c6045
// declared property setter: - (void)setRegion:(id)region;	// 0x303c60b1
// declared property setter: - (void)setStorefront:(id)storefront;	// 0x303c611d
// declared property setter: - (void)setTemperatureUnit:(id)unit;	// 0x303c6189
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x303c61f5
// declared property setter: - (void)setTwentyFourHourTimeDisplay:(id)display;	// 0x303c6261
// declared property setter: - (void)setUiScale:(id)scale;	// 0x303c62cd
// declared property getter: - (id)storefront;	// 0x303c6101
// declared property getter: - (id)temperatureUnit;	// 0x303c616d
// declared property getter: - (id)timeZoneId;	// 0x303c61d9
// declared property getter: - (id)twentyFourHourTimeDisplay;	// 0x303c6245
// declared property getter: - (id)uiScale;	// 0x303c62b1
@end

