/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSLock;

@interface ISDelegateProxy : NSObject {
	id _delegate;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	BOOL _shouldMessageMainThread;	// 12 = 0xc
}
- (id)init;	// 0x341e0611
- (void)dealloc;	// 0x341e0675
- (void)forwardInvocation:(id)invocation;	// 0x341e08bd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x341e0959
- (BOOL)respondsToSelector:(SEL)selector;	// 0x341e09ed
- (void)sendInvocationToDelegate:(id)delegate;	// 0x341e0715
- (void)setDelegate:(id)delegate;	// 0x341e06c9
- (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x341e0871
@end

