/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSProxy.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy : NSProxy {
	NSUndoManager *_manager;	// 4 = 0x4
}
- (id)initWithManager:(id)manager;	// 0x3199bbd9
- (BOOL)_tryRetain;	// 0x31a27725
- (void)forwardInvocation:(id)invocation;	// 0x3199bc65
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3199bbed
- (oneway void)release;	// 0x31a2777d
- (id)retain;	// 0x31a276e1
- (void)superRelease;	// 0x3199bf11
@end
