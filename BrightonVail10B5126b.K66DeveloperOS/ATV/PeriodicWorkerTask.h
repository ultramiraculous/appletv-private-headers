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
@property(assign) id<PeriodicWorkerTaskDelegate> delegate;	// G=0x4ae665; S=0x4ae679; @synthesize=delegate_
@property(assign) BOOL executing;	// G=0x4ae605; S=0x4ae61d; @synthesize=executing_
@property(assign) BOOL finished;	// G=0x4ae635; S=0x4ae64d; @synthesize=finished_
@property(assign) double interval;	// G=0x4ae535; S=0x4ae569; @synthesize=interval_
@property(assign) double startTime;	// G=0x4ae59d; S=0x4ae5d1; @synthesize=startTime_
- (id)init;	// 0x4adfe9
- (id)initWithInterval:(double)interval delegate:(id)delegate;	// 0x4ae021
- (void)completed;	// 0x4ae3d9
- (void)dealloc;	// 0x4ae0c9
// declared property getter: - (id)delegate;	// 0x4ae665
- (BOOL)executeIfReady;	// 0x4ae155
- (void)executedTask;	// 0x4ae389
// declared property getter: - (BOOL)executing;	// 0x4ae605
// declared property getter: - (BOOL)finished;	// 0x4ae635
- (void)finishedTask;	// 0x4ae2dd
// declared property getter: - (double)interval;	// 0x4ae535
- (BOOL)isConcurrent;	// 0x4ae531
- (BOOL)isExecuting;	// 0x4ae501
- (BOOL)isFinished;	// 0x4ae519
- (void)main;	// 0x4ae491
- (void)refreshStartTime;	// 0x4ae109
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4ae679
// declared property setter: - (void)setExecuting:(BOOL)executing;	// 0x4ae61d
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x4ae64d
// declared property setter: - (void)setInterval:(double)interval;	// 0x4ae569
// declared property setter: - (void)setStartTime:(double)time;	// 0x4ae5d1
- (void)start;	// 0x4ae3dd
// declared property getter: - (double)startTime;	// 0x4ae59d
@end

