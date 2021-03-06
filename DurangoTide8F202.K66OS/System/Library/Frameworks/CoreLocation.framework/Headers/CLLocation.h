/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface CLLocation : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double altitude;	// G=0x31392709; 
@property(readonly, assign, nonatomic) XXStruct_lPTB1C clientLocation;	// G=0x31392775; 
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;	// G=0x313926e1; 
@property(readonly, assign, nonatomic) double course;	// G=0x313927bd; 
@property(readonly, assign, nonatomic) double horizontalAccuracy;	// G=0x3139272d; 
@property(readonly, assign, nonatomic) NSString *iso6709Notation;	// G=0x31392c81; 
@property(readonly, assign, nonatomic) double speed;	// G=0x31392799; 
@property(readonly, assign, nonatomic) NSDate *timestamp;	// G=0x31392df1; 
@property(readonly, assign, nonatomic) int type;	// G=0x313927e1; 
@property(readonly, assign, nonatomic) double verticalAccuracy;	// G=0x31392751; 
- (id)init;	// 0x31392951
- (id)initWithClientLocation:(XXStruct_lPTB1C)clientLocation;	// 0x31392b51
- (id)initWithCoder:(id)coder;	// 0x313932c9
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x31392b01
- (id)initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 timestamp:(id)timestamp;	// 0x31392aa1
- (id)initWithIso6709Notation:(id)iso6709Notation;	// 0x31393505
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x31392985
- (id)_initWithCoordinate:(XXStruct_zYrK5D)coordinate altitude:(double)altitude horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy4 course:(double)course speed:(double)speed timestamp:(id)timestamp;	// 0x313929f1
// declared property getter: - (double)altitude;	// 0x31392709
// declared property getter: - (XXStruct_lPTB1C)clientLocation;	// 0x31392775
// declared property getter: - (XXStruct_zYrK5D)coordinate;	// 0x313926e1
- (id)copyWithZone:(NSZone *)zone;	// 0x31392fdd
// declared property getter: - (double)course;	// 0x313927bd
- (void)dealloc;	// 0x31393025
- (id)description;	// 0x31392f25
- (double)distanceFromLocation:(const id)location;	// 0x31392da9
- (void)encodeWithCoder:(id)coder;	// 0x31393071
- (double)getDistanceFrom:(const id)from;	// 0x31392ddd
// declared property getter: - (double)horizontalAccuracy;	// 0x3139272d
// declared property getter: - (id)iso6709Notation;	// 0x31392c81
- (id)propagateLocationToTime:(double)time;	// 0x31392cb1
- (void)setHorizontalAccuracy:(double)accuracy;	// 0x31392c41
- (id)shortDescription;	// 0x31392e39
// declared property getter: - (double)speed;	// 0x31392799
// declared property getter: - (id)timestamp;	// 0x31392df1
// declared property getter: - (int)type;	// 0x313927e1
// declared property getter: - (double)verticalAccuracy;	// 0x31392751
@end

