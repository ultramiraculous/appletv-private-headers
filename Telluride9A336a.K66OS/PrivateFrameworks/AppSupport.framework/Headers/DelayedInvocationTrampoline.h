/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "InvocationTrampoline.h"


@interface DelayedInvocationTrampoline : InvocationTrampoline {
	double _delay;	// 8 = 0x8
}
- (id)initWithTarget:(id)target delay:(double)delay;	// 0x3604330d
- (void)forwardInvocation:(id)invocation;	// 0x36042f71
@end

