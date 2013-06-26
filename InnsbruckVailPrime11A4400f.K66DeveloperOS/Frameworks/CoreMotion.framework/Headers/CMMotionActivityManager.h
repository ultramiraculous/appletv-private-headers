/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import </libobjc.A.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject {
	CLConnectionClient *fLocationConnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *fQueue;	// 8 = 0x8
	id fHandler;	// 12 = 0xc
	NSOperationQueue *fHandlerQueue;	// 16 = 0x10
	deque<<anonymous>::CMMotionActivityManagerQuery, std::__1::allocator<<anonymous>::CMMotionActivityManagerQuery> > fQueries;	// 20 = 0x14
}
+ (BOOL)isActivityAvailable;	// 0x2d8ed421
- (id)init;	// 0x2d8ed6e5
- (id).cxx_construct;	// 0x2d8ef3f5
- (void).cxx_destruct;	// 0x2d8ef251
- (void)dealloc;	// 0x2d8ee131
- (void)queryActivityStartingFromDate:(id)date toDate:(id)date2 toQueue:(id)queue withHandler:(id)handler;	// 0x2d8ee235
- (void)startActivityUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x2d8eed05
- (void)stopActivityUpdates;	// 0x2d8ef05d
@end
