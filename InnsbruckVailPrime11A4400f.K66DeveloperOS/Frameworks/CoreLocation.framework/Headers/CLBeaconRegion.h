/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CLRegion.h"
#import "CoreLocation-Structs.h"

@class NSUUID, NSNumber;

@interface CLBeaconRegion : CLRegion {
	NSUUID *_proximityUUID;	// 1048 = 0x418
	NSNumber *_major;	// 1052 = 0x41c
	NSNumber *_minor;	// 1056 = 0x420
}
@property(readonly, assign, nonatomic) NSNumber *major;	// G=0x2d7befad; @synthesize=_major
@property(readonly, assign, nonatomic) NSNumber *minor;	// G=0x2d7befbd; @synthesize=_minor
@property(assign, nonatomic) BOOL notifyEntryStateOnDisplay;	// G=0x2d7bef41; S=0x2d7bef69; 
@property(readonly, assign, nonatomic) NSUUID *proximityUUID;	// G=0x2d7bef9d; @synthesize=_proximityUUID
+ (id)any;	// 0x2d7be351
+ (BOOL)supportsSecureCoding;	// 0x2d7be821
- (id)initWithClientRegion:(XXStruct_FrfstC)clientRegion;	// 0x2d7be3c5
- (id)initWithCoder:(id)coder;	// 0x2d7be825
- (id)initWithIdentifier:(id)identifier;	// 0x2d7be58d
- (id)initWithProximityUUID:(id)proximityUUID identifier:(id)identifier;	// 0x2d7be5d9
- (id)initWithProximityUUID:(id)proximityUUID major:(unsigned short)major identifier:(id)identifier;	// 0x2d7be681
- (id)initWithProximityUUID:(id)proximityUUID major:(unsigned short)major minor:(unsigned short)minor identifier:(id)identifier;	// 0x2d7be705
- (BOOL)_measuredPowerForDevice;	// 0x2d7bedb1
- (id)copyWithZone:(NSZone *)zone;	// 0x2d7bec41
- (void)dealloc;	// 0x2d7be791
- (id)description;	// 0x2d7bed1d
- (void)encodeWithCoder:(id)coder;	// 0x2d7beae5
// declared property getter: - (id)major;	// 0x2d7befad
// declared property getter: - (id)minor;	// 0x2d7befbd
// declared property getter: - (BOOL)notifyEntryStateOnDisplay;	// 0x2d7bef41
- (id)peripheralDataWithMeasuredPower:(id)measuredPower;	// 0x2d7bedc5
// declared property getter: - (id)proximityUUID;	// 0x2d7bef9d
// declared property setter: - (void)setNotifyEntryStateOnDisplay:(BOOL)display;	// 0x2d7bef69
@end

