/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection;
@protocol OS_dispatch_queue, SSEventMonitorDelegate;

@interface SSEventMonitor : NSObject {
	id<SSEventMonitorDelegate> _delegate;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 12 = 0xc
	SSXPCConnection *_eventConnection;	// 16 = 0x10
}
@property(assign) id<SSEventMonitorDelegate> delegate;	// G=0x354fb931; S=0x354fbaf5; 
- (id)init;	// 0x354fb76d
- (void)_connectEventConnection;	// 0x354fbba1
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x354fbf15
- (void)dealloc;	// 0x354fb879
// declared property getter: - (id)delegate;	// 0x354fb931
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x354fbaf5
@end

