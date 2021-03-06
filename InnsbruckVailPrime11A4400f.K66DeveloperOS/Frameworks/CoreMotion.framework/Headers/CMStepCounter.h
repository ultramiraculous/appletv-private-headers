/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import </libobjc.A.h>

@protocol OS_dispatch_queue;

@interface CMStepCounter : NSObject {
	id _internal;	// 4 = 0x4
	CLConnectionClient *fLocationdConnection;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *fReplyQueue;	// 12 = 0xc
	int fPrevStepCount;	// 16 = 0x10
	BOOL fStartedUpdates;	// 20 = 0x14
	deque<std::__1::pair<NSOperationQueue *, void (^)(int, NSError *)>, std::__1::allocator<std::__1::pair<NSOperationQueue *, void (^)(int, NSError *)> > > fQueryFIFO;	// 24 = 0x18
}
@property(assign) BOOL enabled;	// G=0x2d95f155; S=0x2d95f659; 
@property(readonly, assign) BOOL everRequested;	// G=0x2d95f909; 
+ (BOOL)isStepCountingAvailable;	// 0x2d95e829
- (id)init;	// 0x2d95dd91
- (id).cxx_construct;	// 0x2d95f921
- (void).cxx_destruct;	// 0x2d95f90d
- (void)_handleReplyInFIFOWithSteps:(int)steps andError:(id)error;	// 0x2d95e0ed
- (void)_queryStepCountStartingFromInternal:(id)internal to:(id)to toQueue:(id)queue withHandler:(id)handler;	// 0x2d95e1c1
- (void)_startStepCountingUpdatesToQueue:(id)queue updateOn:(int)on withHandler:(id)handler;	// 0x2d95e375
- (void)dealloc;	// 0x2d95e091
- (void)deleteHistory;	// 0x2d95f539
// declared property getter: - (BOOL)enabled;	// 0x2d95f155
// declared property getter: - (BOOL)everRequested;	// 0x2d95f909
- (void)getTotalCountToQueue:(id)queue withHandler:(id)handler;	// 0x2d95f4c1
- (void)handleQueryResponse:(CLConnectionMessage *)response;	// 0x2d95f799
- (void)queryStepCountStartingFrom:(id)from to:(id)to toQueue:(id)queue withHandler:(id)handler;	// 0x2d95eb09
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x2d95f659
- (void)startStepCountingUpdatesToQueue:(id)queue updateOn:(int)on withHandler:(id)handler;	// 0x2d95ee09
- (void)stopStepCountingUpdates;	// 0x2d95eff9
@end

