/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMMagnetometerData : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB magneticField;	// G=0x328c5f59; 
- (id)initWithCoder:(id)coder;	// 0x328c5c4d
- (id)initWithMagneticField:(XXStruct_ZUkpeA)magneticField andTimestamp:(double)timestamp;	// 0x328c5bc5
- (id)copyWithZone:(NSZone *)zone;	// 0x328c5e49
- (void)dealloc;	// 0x328c5dfd
- (id)description;	// 0x328c5ead
- (void)encodeWithCoder:(id)coder;	// 0x328c5d3d
// declared property getter: - (XXStruct_taVrlB)magneticField;	// 0x328c5f59
@end

