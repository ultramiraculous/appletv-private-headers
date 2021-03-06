/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol PeriodicWorkerTaskDelegate;

@interface PeriodicWorkerTask : XXUnknownSuperclass {
	double interval_;	// 12 = 0xc
	double startTime_;	// 20 = 0x14
	BOOL executing_;	// 28 = 0x1c
	BOOL finished_;	// 29 = 0x1d
	id<PeriodicWorkerTaskDelegate> delegate_;	// 32 = 0x20
}
@property(assign) id<PeriodicWorkerTaskDelegate> delegate;	// G=0x4a328d; S=0x4a32a1; @synthesize=delegate_
@property(assign) BOOL executing;	// G=0x4a322d; S=0x4a3245; @synthesize=executing_
@property(assign) BOOL finished;	// G=0x4a325d; S=0x4a3275; @synthesize=finished_
@property(assign) double interval;	// G=0x4a315d; S=0x4a3191; @synthesize=interval_
@property(assign) double startTime;	// G=0x4a31c5; S=0x4a31f9; @synthesize=startTime_
- (id)init;	// 0x4a2c11
- (id)initWithInterval:(double)interval delegate:(id)delegate;	// 0x4a2c49
- (void)completed;	// 0x4a3001
- (void)dealloc;	// 0x4a2cf1
// declared property getter: - (id)delegate;	// 0x4a328d
- (BOOL)executeIfReady;	// 0x4a2d7d
- (void)executedTask;	// 0x4a2fb1
// declared property getter: - (BOOL)executing;	// 0x4a322d
// declared property getter: - (BOOL)finished;	// 0x4a325d
- (void)finishedTask;	// 0x4a2f05
// declared property getter: - (double)interval;	// 0x4a315d
- (BOOL)isConcurrent;	// 0x4a3159
- (BOOL)isExecuting;	// 0x4a3129
- (BOOL)isFinished;	// 0x4a3141
- (void)main;	// 0x4a30b9
- (void)refreshStartTime;	// 0x4a2d31
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4a32a1
// declared property setter: - (void)setExecuting:(BOOL)executing;	// 0x4a3245
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x4a3275
// declared property setter: - (void)setInterval:(double)interval;	// 0x4a3191
// declared property setter: - (void)setStartTime:(double)time;	// 0x4a31f9
- (void)start;	// 0x4a3005
// declared property getter: - (double)startTime;	// 0x4a31c5
@end

