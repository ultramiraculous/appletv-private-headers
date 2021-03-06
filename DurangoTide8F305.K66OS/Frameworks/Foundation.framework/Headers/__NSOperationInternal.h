/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperation, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface __NSOperationInternal : NSObject {
@private
	NSOperation *__outerOp;	// 4 = 0x4
	NSOperation *__nextOp;	// 8 = 0x8
	NSOperationQueue *__queue;	// 12 = 0xc
	opaque_pthread_mutex_t __wait_mutex;	// 16 = 0x10
	opaque_pthread_cond_t __wait_cond;	// 60 = 0x3c
	int __deps_count;	// 88 = 0x58
	int __unfinished_deps;	// 92 = 0x5c
	id __completion;	// 96 = 0x60
	double __thread_prio;	// 100 = 0x64
	void *__implicitObsInfo;	// 108 = 0x6c
	void *__obsInfo;	// 112 = 0x70
	int __outerRC;	// 116 = 0x74
	int __RC;	// 120 = 0x78
	int __state;	// 124 = 0x7c
	BOOL __prio;	// 128 = 0x80
	unsigned char __cached_isReady;	// 129 = 0x81
	unsigned char __isCancelled;	// 130 = 0x82
}
@property(copy) id completionBlock;	// G=0x3274a989; S=0x3274a205; @synthesize=__completion
@property(assign) int queuePriority;	// G=0x327b093d; S=0x327719c1; converted property
@property(assign) double threadPriority;	// G=0x327b0961; S=0x327b0971; converted property
+ (void)_observeValueForKeyPath:(id)keyPath ofObject:(id)object changeKind:(unsigned)kind oldValue:(id)value newValue:(id)value5 indexes:(id)indexes context:(void *)context;	// 0x3274b83d
- (id)init;	// 0x3274a175
- (void)addDependency:(id)dependency;	// 0x327b2eed
- (void)cancel;	// 0x32771a6d
// declared property getter: - (id)completionBlock;	// 0x3274a989
- (void)dealloc;	// 0x3274ab89
- (id)dependencies;	// 0x327b2cd9
- (void)finalize;	// 0x327b11fd
- (BOOL)isCancelled;	// 0x32746731
- (BOOL)isExecuting;	// 0x327b0925
- (BOOL)isFinished;	// 0x3274ba35
- (BOOL)isReady;	// 0x3274a289
// converted property getter: - (int)queuePriority;	// 0x327b093d
- (void)release;	// 0x3274ab59
- (void)removeDependency:(id)dependency;	// 0x327b2d65
- (id)retain;	// 0x3274ba4d
- (unsigned)retainCount;	// 0x327b08d9
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x3274a205
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x327719c1
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x327b0971
- (void)start;	// 0x3274ba89
// converted property getter: - (double)threadPriority;	// 0x327b0961
- (void)waitUntilFinished;	// 0x327b314d
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x327b3069
@end

