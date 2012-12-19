/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAWeatherForecast.h"

@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast {
}
@property(copy, nonatomic) NSNumber *temperature;	// G=0x353d9d69; S=0x353d9d85; 
+ (id)hourlyForecast;	// 0x353d9cd9
+ (id)hourlyForecastWithDictionary:(id)dictionary context:(id)context;	// 0x353d9d1d
- (id)encodedClassName;	// 0x353d9ccd
- (id)groupIdentifier;	// 0x353d9cbd
// declared property setter: - (void)setTemperature:(id)temperature;	// 0x353d9d85
// declared property getter: - (id)temperature;	// 0x353d9d69
@end
