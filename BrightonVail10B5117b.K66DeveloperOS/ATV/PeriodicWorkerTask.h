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
@property(assign) id<PeriodicWorkerTaskDelegate> delegate;	// G=0x4a8fad; S=0x4a8fc1; @synthesize=delegate_
@property(assign) BOOL executing;	// G=0x4a8f4d; S=0x4a8f65; @synthesize=executing_
@property(assign) BOOL finished;	// G=0x4a8f7d; S=0x4a8f95; @synthesize=finished_
@property(assign) double interval;	// G=0x4a8e7d; S=0x4a8eb1; @synthesize=interval_
@property(assign) double startTime;	// G=0x4a8ee5; S=0x4a8f19; @synthesize=startTime_
- (id)init;	// 0x4a8931
- (id)initWithInterval:(double)interval delegate:(id)delegate;	// 0x4a8969
- (void)completed;	// 0x4a8d21
- (void)dealloc;	// 0x4a8a11
// declared property getter: - (id)delegate;	// 0x4a8fad
- (BOOL)executeIfReady;	// 0x4a8a9d
- (void)executedTask;	// 0x4a8cd1
// declared property getter: - (BOOL)executing;	// 0x4a8f4d
// declared property getter: - (BOOL)finished;	// 0x4a8f7d
- (void)finishedTask;	// 0x4a8c25
// declared property getter: - (double)interval;	// 0x4a8e7d
- (BOOL)isConcurrent;	// 0x4a8e79
- (BOOL)isExecuting;	// 0x4a8e49
- (BOOL)isFinished;	// 0x4a8e61
- (void)main;	// 0x4a8dd9
- (void)refreshStartTime;	// 0x4a8a51
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4a8fc1
// declared property setter: - (void)setExecuting:(BOOL)executing;	// 0x4a8f65
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x4a8f95
// declared property setter: - (void)setInterval:(double)interval;	// 0x4a8eb1
// declared property setter: - (void)setStartTime:(double)time;	// 0x4a8f19
- (void)start;	// 0x4a8d25
// declared property getter: - (double)startTime;	// 0x4a8ee5
@end
