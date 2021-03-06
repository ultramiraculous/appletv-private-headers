/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import </libobjc.A.h>
#import "GeoServices-Structs.h"


@interface GEOAlmanac : NSObject {
	XXStruct_gLbvpC _coordinate;	// 4 = 0x4
	double _sunrise;	// 20 = 0x14
	double _sunset;	// 28 = 0x1c
	double _nextSunrise;	// 36 = 0x24
	double _nextSunset;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) BOOL isDayLight;	// G=0x30fad409; 
- (id).cxx_construct;	// 0x30fad671
- (void)calculateAstronomicalTimeForLocation:(XXStruct_gLbvpC)location;	// 0x30fad0c9
- (void)calculateAstronomicalTimeForLocation:(XXStruct_gLbvpC)location time:(double)time;	// 0x30fad111
- (void)calculateGeocentricDirectionForSunX:(double *)sunX Y:(double *)y Z:(double *)z;	// 0x30fad221
- (double)intervalForNextAstronomicalChange;	// 0x30fad4e1
- (double)intervalForNextAstronomicalChangeFromTime:(double)time;	// 0x30fad51d
// declared property getter: - (BOOL)isDayLight;	// 0x30fad409
- (BOOL)isDayLightForTime:(double)time;	// 0x30fad42d
@end

