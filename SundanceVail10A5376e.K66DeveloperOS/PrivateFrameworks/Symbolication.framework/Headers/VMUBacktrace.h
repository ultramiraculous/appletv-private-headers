/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCopying.h"


@interface VMUBacktrace : NSObject <NSCopying> {
	int _flavor;	// 4 = 0x4
	struct {
		struct {
			double t_begin;
			double t_end;
			int pid;
			unsigned thread;
			int run_state;
			unsigned long long dispatch_queue_serial_num;
		} context;
		unsigned long long *frames;
		char *frame_types;
		unsigned length;
	} _callstack;	// 8 = 0x8
}
@property(assign) int threadState;	// G=0x322314c9; S=0x322314b5; converted property
- (id)initWithSamplingContext:(sampling_context_t *)samplingContext thread:(unsigned)thread;	// 0x32230b81
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit;	// 0x32230c69
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit taskMemoryCache:(id)cache;	// 0x32230d7d
- (id).cxx_construct;	// 0x322314f1
- (CSTypeRef)_symbolicator;	// 0x32230ac5
- (unsigned long long *)backtrace;	// 0x32231479
- (unsigned)backtraceLength;	// 0x3223148d
- (id)copyWithZone:(NSZone *)zone;	// 0x32230f6d
- (void)dealloc;	// 0x32231071
- (id)description;	// 0x322310c1
- (unsigned long long)dispatchQueueSerialNumber;	// 0x322314dd
- (void)fixupStackWithSamplingContext:(sampling_context_t *)samplingContext symbolicator:(CSTypeRef)symbolicator;	// 0x32231325
- (void)fixupStackWithTask:(unsigned)task symbolicator:(CSTypeRef)symbolicator taskMemoryCache:(id)cache;	// 0x322312e5
- (BOOL)hasSameCallstack:(id)callstack;	// 0x3223136d
- (void)removeTopmostFrame;	// 0x32231401
- (void)setEndTime:(double)time;	// 0x32231445
- (void)setLengthTime:(double)time;	// 0x32231459
- (void)setStartTime:(double)time;	// 0x32231431
// converted property setter: - (void)setThreadState:(int)state;	// 0x322314b5
- (unsigned)thread;	// 0x322314a1
// converted property getter: - (int)threadState;	// 0x322314c9
- (unsigned long long)topmostFrame;	// 0x322313e9
@end

