/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library


@interface CMAttitude : NSObject <NSCopying, NSCoding> {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double pitch;	// G=0x37739f51; 
@property(readonly, assign, nonatomic) XXStruct_N5B6hD quaternion;	// G=0x3773a049; 
@property(readonly, assign, nonatomic) double roll;	// G=0x37739f31; 
@property(readonly, assign, nonatomic) XXStruct_VSauOA rotationMatrix;	// G=0x37739f91; 
@property(readonly, assign, nonatomic) double yaw;	// G=0x37739f71; 
- (id)initWithCoder:(id)coder;	// 0x37739bf1
- (id)initWithQuaternion:(XXStruct_N5B6hD)quaternion;	// 0x37739b51
- (id)copyWithZone:(NSZone *)zone;	// 0x37739df5
- (void)dealloc;	// 0x37739da9
- (id)description;	// 0x37739e75
- (void)encodeWithCoder:(id)coder;	// 0x37739c9d
- (void)multiplyByInverseOfAttitude:(id)attitude;	// 0x3773a089
// declared property getter: - (double)pitch;	// 0x37739f51
// declared property getter: - (XXStruct_N5B6hD)quaternion;	// 0x3773a049
// declared property getter: - (double)roll;	// 0x37739f31
// declared property getter: - (XXStruct_VSauOA)rotationMatrix;	// 0x37739f91
- (void)setQuaternion:(XXStruct_N5B6hD)quaternion;	// 0x37739d61
// declared property getter: - (double)yaw;	// 0x37739f71
@end

