/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"


@interface CMActivity : CMLogItem {
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int confidence;	// G=0x33f31391; 
@property(readonly, assign, nonatomic) BOOL isDriving;	// G=0x33f31429; 
@property(readonly, assign, nonatomic) BOOL isMoving;	// G=0x33f313b1; 
@property(readonly, assign, nonatomic) BOOL isRunning;	// G=0x33f31401; 
@property(readonly, assign, nonatomic) BOOL isWalking;	// G=0x33f313d9; 
- (id)initWithCoder:(id)coder;	// 0x33f31159
- (id)initWithMotionActivity:(CLMotionActivity)motionActivity andTimestamp:(double)timestamp;	// 0x33f310c1
- (CLMotionActivity)activity;	// 0x33f31359
// declared property getter: - (int)confidence;	// 0x33f31391
- (id)copyWithZone:(NSZone *)zone;	// 0x33f312f9
- (void)dealloc;	// 0x33f312ad
- (id)description;	// 0x33f31355
- (void)encodeWithCoder:(id)coder;	// 0x33f31219
// declared property getter: - (BOOL)isDriving;	// 0x33f31429
// declared property getter: - (BOOL)isMoving;	// 0x33f313b1
// declared property getter: - (BOOL)isRunning;	// 0x33f31401
// declared property getter: - (BOOL)isWalking;	// 0x33f313d9
@end

