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
@private
	NSUndoManager *_manager;	// 4 = 0x4
}
- (id)initWithManager:(id)manager;	// 0x33717a49
- (BOOL)_tryRetain;	// 0x33717a9d
- (void)forwardInvocation:(id)invocation;	// 0x33717b85
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33717b65
- (oneway void)release;	// 0x33717af5
- (id)retain;	// 0x33717a59
- (void)superRelease;	// 0x33717b39
@end

