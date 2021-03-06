/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

#import <NSObject.h> // Unknown library
#import "AITTarget-Structs.h"

@class NSString;
@protocol AITXPCConnectionDelegate;

@interface AITXPCConnection : NSObject {
	int _pid;	// 4 = 0x4
	id<AITXPCConnectionDelegate> _delegate;	// 8 = 0x8
@private
	NSString *_bundleId;	// 12 = 0xc
@protected
	xpc_connection_s *_connection;	// 16 = 0x10
	void *_currentMessage;	// 20 = 0x14
	dispatch_queue_s *_dispatchQueue;	// 24 = 0x18
	dispatch_queue_s *_internalQueue;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL available;	// G=0x330c93d5; 
@property(copy, nonatomic) NSString *bundleId;	// G=0x330c9445; S=0x330c9459; @synthesize=_bundleId
@property(assign, nonatomic) xpc_connection_s *connection;	// G=0x330c947d; S=0x330c948d; @synthesize=_connection
@property(assign, nonatomic) void *currentMessage;	// G=0x330c949d; S=0x330c94ad; @synthesize=_currentMessage
@property(assign, nonatomic) id<AITXPCConnectionDelegate> delegate;	// G=0x330c9425; S=0x330c9435; @synthesize=_delegate
@property(assign, nonatomic) dispatch_queue_s *dispatchQueue;	// G=0x330c94bd; S=0x330c94cd; @synthesize=_dispatchQueue
@property(assign, nonatomic) dispatch_queue_s *internalQueue;	// G=0x330c94dd; S=0x330c94ed; @synthesize=_internalQueue
@property(readonly, assign, nonatomic) int pid;	// G=0x330c93ed; 
- (id)initWithConnection:(xpc_connection_s *)connection delegate:(id)delegate;	// 0x330c8935
- (id)initWithConnection:(xpc_connection_s *)connection delegate:(id)delegate dispatchQueue:(dispatch_queue_s *)queue;	// 0x330c8961
- (id)_deserializeMessage:(void *)message;	// 0x330c8b8d
- (void)_handleEvent:(void *)event;	// 0x330c8bed
// declared property getter: - (BOOL)available;	// 0x330c93d5
- (void)barrierWithCompletionHandler:(id)completionHandler;	// 0x330c92b1
// declared property getter: - (id)bundleId;	// 0x330c9445
- (void)closeConnection;	// 0x330c8af5
// declared property getter: - (xpc_connection_s *)connection;	// 0x330c947d
// declared property getter: - (void *)currentMessage;	// 0x330c949d
- (void)dealloc;	// 0x330c8841
// declared property getter: - (id)delegate;	// 0x330c9425
// declared property getter: - (dispatch_queue_s *)dispatchQueue;	// 0x330c94bd
// declared property getter: - (dispatch_queue_s *)internalQueue;	// 0x330c94dd
// declared property getter: - (int)pid;	// 0x330c93ed
- (void)sendMessage:(id)message userInfo:(id)info;	// 0x330c8e41
- (void)sendMessage:(id)message userInfo:(id)info replyHandler:(id)handler;	// 0x330c8e65
// declared property setter: - (void)setBundleId:(id)anId;	// 0x330c9459
// declared property setter: - (void)setConnection:(xpc_connection_s *)connection;	// 0x330c948d
// declared property setter: - (void)setCurrentMessage:(void *)message;	// 0x330c94ad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x330c9435
// declared property setter: - (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x330c94cd
// declared property setter: - (void)setInternalQueue:(dispatch_queue_s *)queue;	// 0x330c94ed
@end

