/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSDate, NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) NSNumber *age;	// G=0x326f58c9; S=0x326f58e5; 
@property(assign, nonatomic) double altitude;	// G=0x326f5901; S=0x326f5981; 
@property(copy, nonatomic) NSString *desiredAccuracy;	// G=0x326f59c9; S=0x326f59e5; 
@property(assign, nonatomic) double direction;	// G=0x326f5a39; S=0x326f5ab9; 
@property(assign, nonatomic) double horizontalAccuracy;	// G=0x326f5801; S=0x326f5881; 
@property(assign, nonatomic) double latitude;	// G=0x326f55a9; S=0x326f5629; 
@property(assign, nonatomic) double longitude;	// G=0x326f5671; S=0x326f56f1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(assign, nonatomic) double speed;	// G=0x326f5b01; S=0x326f5b81; 
@property(copy, nonatomic) NSString *status;	// G=0x326f5bc9; S=0x326f5be5; 
@property(copy, nonatomic) NSDate *timestamp;	// G=0x326f5c35; S=0x326f5c51; 
@property(assign, nonatomic) double verticalAccuracy;	// G=0x326f5739; S=0x326f57b9; 
+ (id)setRequestOrigin;	// 0x326f5515
+ (id)setRequestOriginWithDictionary:(id)dictionary context:(id)context;	// 0x326f5559
// declared property getter: - (id)age;	// 0x326f58c9
// declared property getter: - (double)altitude;	// 0x326f5901
// declared property getter: - (id)desiredAccuracy;	// 0x326f59c9
// declared property getter: - (double)direction;	// 0x326f5a39
- (id)encodedClassName;	// 0x326f5509
- (id)groupIdentifier;	// 0x326f54f9
// declared property getter: - (double)horizontalAccuracy;	// 0x326f5801
// declared property getter: - (double)latitude;	// 0x326f55a9
// declared property getter: - (double)longitude;	// 0x326f5671
// declared property setter: - (void)setAge:(id)age;	// 0x326f58e5
// declared property setter: - (void)setAltitude:(double)altitude;	// 0x326f5981
// declared property setter: - (void)setDesiredAccuracy:(id)accuracy;	// 0x326f59e5
// declared property setter: - (void)setDirection:(double)direction;	// 0x326f5ab9
// declared property setter: - (void)setHorizontalAccuracy:(double)accuracy;	// 0x326f5881
// declared property setter: - (void)setLatitude:(double)latitude;	// 0x326f5629
// declared property setter: - (void)setLongitude:(double)longitude;	// 0x326f56f1
// declared property setter: - (void)setSpeed:(double)speed;	// 0x326f5b81
// declared property setter: - (void)setStatus:(id)status;	// 0x326f5be5
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x326f5c51
// declared property setter: - (void)setVerticalAccuracy:(double)accuracy;	// 0x326f57b9
// declared property getter: - (double)speed;	// 0x326f5b01
// declared property getter: - (id)status;	// 0x326f5bc9
// declared property getter: - (id)timestamp;	// 0x326f5c35
// declared property getter: - (double)verticalAccuracy;	// 0x326f5739
@end

