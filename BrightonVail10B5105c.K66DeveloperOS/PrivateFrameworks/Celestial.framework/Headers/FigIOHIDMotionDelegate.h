/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface FigIOHIDMotionDelegate : NSObject {
	opaque_pthread_mutex_t ringMutex;	// 4 = 0x4
	BOOL manageAccel;	// 48 = 0x30
	int accelRingIndex;	// 52 = 0x34
	float accelRingX[64];	// 56 = 0x38
	float accelRingY[64];	// 312 = 0x138
	float accelRingZ[64];	// 568 = 0x238
	double accelRingTime[64];	// 824 = 0x338
}
- (id)init;	// 0x30c5b4ad
- (id)initWithOptions:(BOOL)options enableRotation:(BOOL)rotation enableAttitude:(BOOL)attitude;	// 0x30c5b425
- (void)dealloc;	// 0x30c5b4d1
- (void)deferOnRunloop_initManagerUsingIOHID;	// 0x30c5b359
- (void)deferOnRunloop_stopEvents;	// 0x30c5b3d9
- (void)didUpdateAccelerationWithEventInfo:(XXStruct_N5B6hD *)eventInfo;	// 0x30c5b511
- (void)getVector:(float *)vector :(float *)arg2 :(float *)arg3 forTimeStamp:(double)timeStamp;	// 0x30c5b5c9
- (BOOL)managingAccel;	// 0x30c5b73d
@end
