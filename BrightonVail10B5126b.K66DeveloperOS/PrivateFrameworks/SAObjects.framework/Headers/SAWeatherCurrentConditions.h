/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SAWeatherBarometricPressure, SAWeatherWindSpeed, SAWeatherCondition, NSNumber, NSString;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAWeatherBarometricPressure *barometricPressure;	// G=0x353d8ff9; S=0x353d904d; 
@property(retain, nonatomic) SAWeatherCondition *condition;	// G=0x353d9089; S=0x353d90dd; 
@property(retain, nonatomic) NSNumber *dayOfWeek;	// G=0x353d9119; S=0x353d9135; 
@property(copy, nonatomic) NSString *dewPoint;	// G=0x353d9151; S=0x353d916d; 
@property(copy, nonatomic) NSString *feelsLike;	// G=0x353d91bd; S=0x353d91d9; 
@property(copy, nonatomic) NSString *heatIndex;	// G=0x353d9229; S=0x353d9245; 
@property(copy, nonatomic) NSString *moonPhase;	// G=0x353d9295; S=0x353d92b1; 
@property(copy, nonatomic) NSString *percentHumidity;	// G=0x353d9301; S=0x353d931d; 
@property(retain, nonatomic) NSNumber *percentOfMoonFaceVisible;	// G=0x353d936d; S=0x353d9389; 
@property(copy, nonatomic) NSString *sunrise;	// G=0x353d93a5; S=0x353d93c1; 
@property(copy, nonatomic) NSString *sunset;	// G=0x353d9411; S=0x353d942d; 
@property(copy, nonatomic) NSString *temperature;	// G=0x353d947d; S=0x353d9499; 
@property(copy, nonatomic) NSString *timeOfObservation;	// G=0x353d94e9; S=0x353d9505; 
@property(copy, nonatomic) NSString *timeZone;	// G=0x353d9555; S=0x353d9571; 
@property(copy, nonatomic) NSString *visibility;	// G=0x353d95c1; S=0x353d95dd; 
@property(copy, nonatomic) NSString *windChill;	// G=0x353d962d; S=0x353d9649; 
@property(retain, nonatomic) SAWeatherWindSpeed *windSpeed;	// G=0x353d9699; S=0x353d96ed; 
+ (id)currentConditions;	// 0x353d8f69
+ (id)currentConditionsWithDictionary:(id)dictionary context:(id)context;	// 0x353d8fad
// declared property getter: - (id)barometricPressure;	// 0x353d8ff9
// declared property getter: - (id)condition;	// 0x353d9089
// declared property getter: - (id)dayOfWeek;	// 0x353d9119
// declared property getter: - (id)dewPoint;	// 0x353d9151
- (id)encodedClassName;	// 0x353d8f5d
// declared property getter: - (id)feelsLike;	// 0x353d91bd
- (id)groupIdentifier;	// 0x353d8f4d
// declared property getter: - (id)heatIndex;	// 0x353d9229
// declared property getter: - (id)moonPhase;	// 0x353d9295
// declared property getter: - (id)percentHumidity;	// 0x353d9301
// declared property getter: - (id)percentOfMoonFaceVisible;	// 0x353d936d
// declared property setter: - (void)setBarometricPressure:(id)pressure;	// 0x353d904d
// declared property setter: - (void)setCondition:(id)condition;	// 0x353d90dd
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x353d9135
// declared property setter: - (void)setDewPoint:(id)point;	// 0x353d916d
// declared property setter: - (void)setFeelsLike:(id)like;	// 0x353d91d9
// declared property setter: - (void)setHeatIndex:(id)index;	// 0x353d9245
// declared property setter: - (void)setMoonPhase:(id)phase;	// 0x353d92b1
// declared property setter: - (void)setPercentHumidity:(id)humidity;	// 0x353d931d
// declared property setter: - (void)setPercentOfMoonFaceVisible:(id)moonFaceVisible;	// 0x353d9389
// declared property setter: - (void)setSunrise:(id)sunrise;	// 0x353d93c1
// declared property setter: - (void)setSunset:(id)sunset;	// 0x353d942d
// declared property setter: - (void)setTemperature:(id)temperature;	// 0x353d9499
// declared property setter: - (void)setTimeOfObservation:(id)observation;	// 0x353d9505
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x353d9571
// declared property setter: - (void)setVisibility:(id)visibility;	// 0x353d95dd
// declared property setter: - (void)setWindChill:(id)chill;	// 0x353d9649
// declared property setter: - (void)setWindSpeed:(id)speed;	// 0x353d96ed
// declared property getter: - (id)sunrise;	// 0x353d93a5
// declared property getter: - (id)sunset;	// 0x353d9411
// declared property getter: - (id)temperature;	// 0x353d947d
// declared property getter: - (id)timeOfObservation;	// 0x353d94e9
// declared property getter: - (id)timeZone;	// 0x353d9555
// declared property getter: - (id)visibility;	// 0x353d95c1
// declared property getter: - (id)windChill;	// 0x353d962d
// declared property getter: - (id)windSpeed;	// 0x353d9699
@end
