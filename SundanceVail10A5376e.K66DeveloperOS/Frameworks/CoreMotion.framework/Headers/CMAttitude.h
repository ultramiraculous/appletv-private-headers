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
@property(readonly, assign, nonatomic) double pitch;	// G=0x307bdd99; 
@property(readonly, assign, nonatomic) XXStruct_N5B6hD quaternion;	// G=0x307bde91; 
@property(readonly, assign, nonatomic) double roll;	// G=0x307bdd79; 
@property(readonly, assign, nonatomic) XXStruct_VSauOA rotationMatrix;	// G=0x307bddd9; 
@property(readonly, assign, nonatomic) double yaw;	// G=0x307bddb9; 
- (id)initWithCoder:(id)coder;	// 0x307bda39
- (id)initWithQuaternion:(XXStruct_N5B6hD)quaternion;	// 0x307bd999
- (id)copyWithZone:(NSZone *)zone;	// 0x307bdc3d
- (void)dealloc;	// 0x307bdbf1
- (id)description;	// 0x307bdcbd
- (void)encodeWithCoder:(id)coder;	// 0x307bdae5
- (void)multiplyByInverseOfAttitude:(id)attitude;	// 0x307bded1
// declared property getter: - (double)pitch;	// 0x307bdd99
// declared property getter: - (XXStruct_N5B6hD)quaternion;	// 0x307bde91
// declared property getter: - (double)roll;	// 0x307bdd79
// declared property getter: - (XXStruct_VSauOA)rotationMatrix;	// 0x307bddd9
- (void)setQuaternion:(XXStruct_N5B6hD)quaternion;	// 0x307bdba9
// declared property getter: - (double)yaw;	// 0x307bddb9
@end

