/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSInvocation, NSConditionLock, NSThread;

__attribute__((visibility("hidden")))
@interface ATVHIDThread : BRSingleton {
	NSThread *_hidThread;	// 4 = 0x4
	CFRunLoopRef _runLoop;	// 8 = 0x8
	NSConditionLock *_startLock;	// 12 = 0xc
	CFRunLoopSourceRef _invocationRunLoopSource;	// 16 = 0x10
	NSInvocation *_pendingInvocation;	// 20 = 0x14
	NSConditionLock *_invocationLock;	// 24 = 0x18
}
+ (void)setSingleton:(id)singleton;	// 0x1ff0a9
+ (id)singleton;	// 0x1ff099
- (id)init;	// 0x1ff0b9
- (void)_hidThreadLoop;	// 0x1ff3fd
- (void)_invocationHandler;	// 0x1ff5c9
- (void)dealloc;	// 0x1ff1b1
- (BOOL)invokeOnHIDThread:(id)thread;	// 0x1ff215
@end

