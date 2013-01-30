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
@property(copy, nonatomic) NSArray *abSources;	// G=0x353e9581; S=0x353e95fd; 
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *anchor;	// G=0x353e9665; S=0x353e9681; 
@property(assign, nonatomic) BOOL censorSpeech;	// G=0x353e96d1; S=0x353e9749; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x353e978d; S=0x353e97a9; 
@property(copy, nonatomic) NSNumber *debugFlags;	// G=0x353e97f9; S=0x353e9815; 
@property(copy, nonatomic) NSArray *deviceCapabilities;	// G=0x353e9865; S=0x353e9881; 
@property(copy, nonatomic) NSString *deviceVersion;	// G=0x353e98d1; S=0x353e98ed; 
@property(copy, nonatomic) NSString *firstName;	// G=0x353e993d; S=0x353e9959; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x353e99a9; S=0x353e9a21; 
@property(copy, nonatomic) NSString *lastName;	// G=0x353e9a65; S=0x353e9a81; 
@property(copy, nonatomic) NSArray *meCards;	// G=0x353e9ad1; S=0x353e9b4d; 
@property(copy, nonatomic) NSString *osVersion;	// G=0x353e9bb5; S=0x353e9bd1; 
@property(copy, nonatomic) NSArray *parentalRestrictions;	// G=0x353e9c21; S=0x353e9c3d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *region;	// G=0x353e9c8d; S=0x353e9ca9; 
@property(copy, nonatomic) NSNumber *storefront;	// G=0x353e9cf9; S=0x353e9d15; 
@property(copy, nonatomic) NSString *temperatureUnit;	// G=0x353e9d65; S=0x353e9d81; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353e9dd1; S=0x353e9ded; 
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;	// G=0x353e9e3d; S=0x353e9e59; 
@property(copy, nonatomic) NSNumber *uiScale;	// G=0x353e9ea9; S=0x353e9ec5; 
+ (id)setAssistantData;	// 0x353e94f1
+ (id)setAssistantDataWithDictionary:(id)dictionary context:(id)context;	// 0x353e9535
// declared property getter: - (id)abSources;	// 0x353e9581
// declared property getter: - (id)anchor;	// 0x353e9665
// declared property getter: - (BOOL)censorSpeech;	// 0x353e96d1
// declared property getter: - (id)countryCode;	// 0x353e978d
// declared property getter: - (id)debugFlags;	// 0x353e97f9
// declared property getter: - (id)deviceCapabilities;	// 0x353e9865
// declared property getter: - (id)deviceVersion;	// 0x353e98d1
- (id)encodedClassName;	// 0x353e94e5
// declared property getter: - (id)firstName;	// 0x353e993d
- (id)groupIdentifier;	// 0x353e94d5
// declared property getter: - (BOOL)handsFree;	// 0x353e99a9
// declared property getter: - (id)lastName;	// 0x353e9a65
// declared property getter: - (id)meCards;	// 0x353e9ad1
// declared property getter: - (id)osVersion;	// 0x353e9bb5
// declared property getter: - (id)parentalRestrictions;	// 0x353e9c21
// declared property getter: - (id)region;	// 0x353e9c8d
// declared property setter: - (void)setAbSources:(id)sources;	// 0x353e95fd
// declared property setter: - (void)setAnchor:(id)anchor;	// 0x353e9681
// declared property setter: - (void)setCensorSpeech:(BOOL)speech;	// 0x353e9749
// declared property setter: - (void)setCountryCode:(id)code;	// 0x353e97a9
// declared property setter: - (void)setDebugFlags:(id)flags;	// 0x353e9815
// declared property setter: - (void)setDeviceCapabilities:(id)capabilities;	// 0x353e9881
// declared property setter: - (void)setDeviceVersion:(id)version;	// 0x353e98ed
// declared property setter: - (void)setFirstName:(id)name;	// 0x353e9959
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x353e9a21
// declared property setter: - (void)setLastName:(id)name;	// 0x353e9a81
// declared property setter: - (void)setMeCards:(id)cards;	// 0x353e9b4d
// declared property setter: - (void)setOsVersion:(id)version;	// 0x353e9bd1
// declared property setter: - (void)setParentalRestrictions:(id)restrictions;	// 0x353e9c3d
// declared property setter: - (void)setRegion:(id)region;	// 0x353e9ca9
// declared property setter: - (void)setStorefront:(id)storefront;	// 0x353e9d15
// declared property setter: - (void)setTemperatureUnit:(id)unit;	// 0x353e9d81
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353e9ded
// declared property setter: - (void)setTwentyFourHourTimeDisplay:(id)display;	// 0x353e9e59
// declared property setter: - (void)setUiScale:(id)scale;	// 0x353e9ec5
// declared property getter: - (id)storefront;	// 0x353e9cf9
// declared property getter: - (id)temperatureUnit;	// 0x353e9d65
// declared property getter: - (id)timeZoneId;	// 0x353e9dd1
// declared property getter: - (id)twentyFourHourTimeDisplay;	// 0x353e9e3d
// declared property getter: - (id)uiScale;	// 0x353e9ea9
@end
