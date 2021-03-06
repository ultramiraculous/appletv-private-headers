/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperation : NSObject {
@private
	id _private;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(retain) id completionBlock;	// G=0x3100c969; S=0x3100c1e5; converted property
@property(assign) void *observationInfo;	// G=0x3100cc05; S=0x31072a25; converted property
@property(assign) int queuePriority;	// G=0x31072ded; S=0x310339a1; converted property
@property(assign) double threadPriority;	// G=0x31072dcd; S=0x31072dad; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3101fc29
+ (void)initialize;	// 0x3101f8f5
- (id)init;	// 0x3100bf9d
- (id)_implicitObservationInfo;	// 0x3100cc21
- (void)addDependency:(id)dependency;	// 0x31072d05
- (void)cancel;	// 0x31033a4d
// converted property getter: - (id)completionBlock;	// 0x3100c969
- (void)dealloc;	// 0x3100caa1
- (id)dependencies;	// 0x31072cc5
- (void)finalize;	// 0x31074179
- (BOOL)isAsynchronous;	// 0x31072a61
- (BOOL)isCancelled;	// 0x3100870d
- (BOOL)isConcurrent;	// 0x31072a5d
- (BOOL)isExecuting;	// 0x31072e0d
- (BOOL)isFinished;	// 0x3100da11
- (BOOL)isReady;	// 0x3100c265
- (void)main;	// 0x31072a65
// converted property getter: - (void *)observationInfo;	// 0x3100cc05
// converted property getter: - (int)queuePriority;	// 0x31072ded
- (void)release;	// 0x3100878d
- (void)removeDependency:(id)dependency;	// 0x31072ce5
- (id)retain;	// 0x310081b5
- (unsigned)retainCount;	// 0x31072a41
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x3100c1e5
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x31072a25
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x310339a1
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x31072dad
- (void)start;	// 0x3100da69
// converted property getter: - (double)threadPriority;	// 0x31072dcd
- (void)waitUntilFinished;	// 0x31072d6d
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x31072d25
@end

