/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAWeatherForecast.h"

@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast {
}
@property(copy, nonatomic) NSNumber *highTemperature;	// G=0x3424057d; S=0x34240599; 
@property(copy, nonatomic) NSNumber *lowTemperature;	// G=0x342405e9; S=0x34240605; 
+ (id)dailyForecast;	// 0x342404ed
+ (id)dailyForecastWithDictionary:(id)dictionary context:(id)context;	// 0x34240531
- (id)encodedClassName;	// 0x342404e1
- (id)groupIdentifier;	// 0x342404d1
// declared property getter: - (id)highTemperature;	// 0x3424057d
// declared property getter: - (id)lowTemperature;	// 0x342405e9
// declared property setter: - (void)setHighTemperature:(id)temperature;	// 0x34240599
// declared property setter: - (void)setLowTemperature:(id)temperature;	// 0x34240605
@end

