/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet;

@interface ATXPCConnection : NSObject {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	dispatch_queue_s *_eventQueue;	// 8 = 0x8
	id _lockdownHandler;	// 12 = 0xc
	id _messageHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	NSMutableSet *_outstandingMessages;	// 24 = 0x18
	BOOL _assertionHeld;	// 28 = 0x1c
	id _context;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL assertionHeld;	// G=0x30d7e469; S=0x30d7e479; @synthesize=_assertionHeld
@property(retain, nonatomic) id context;	// G=0x30d7e489; S=0x30d7e499; @synthesize=_context
@property(copy, nonatomic) id disconnectHandler;	// G=0x30d7e431; S=0x30d7e445; @synthesize=_disconnectHandler
@property(readonly, assign) dispatch_queue_s *eventQueue;	// G=0x30d7d6d1; converted property
@property(copy, nonatomic) id lockdownHandler;	// G=0x30d7e3c1; S=0x30d7e3d5; @synthesize=_lockdownHandler
@property(copy, nonatomic) id messageHandler;	// G=0x30d7e3f9; S=0x30d7e40d; @synthesize=_messageHandler
@property(readonly, assign) NSString *serviceName;	// G=0x30d7d691; 
- (id)initWithServiceName:(id)serviceName onQueue:(dispatch_queue_s *)queue;	// 0x30d7d3c9
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x30d7d481
- (void)_handleLockdownMessage:(void *)message;	// 0x30d7de59
- (void)_handleXPCError:(void *)error;	// 0x30d7dbcd
- (void)_handleXPCMessage:(void *)message;	// 0x30d7dded
- (int)_outstandingMessages;	// 0x30d7e241
- (void)_registerMessage:(id)message;	// 0x30d7e081
- (void)_removeMessage:(id)message;	// 0x30d7e181
- (void)_sendMessage:(id)message handler:(id)handler;	// 0x30d7d705
- (void)_setEventHandlerOnConnection:(xpc_connection_s *)connection;	// 0x30d7de75
// declared property getter: - (BOOL)assertionHeld;	// 0x30d7e469
// declared property getter: - (id)context;	// 0x30d7e489
- (void)dealloc;	// 0x30d7d58d
// declared property getter: - (id)disconnectHandler;	// 0x30d7e431
// converted property getter: - (dispatch_queue_s *)eventQueue;	// 0x30d7d6d1
// declared property getter: - (id)lockdownHandler;	// 0x30d7e3c1
// declared property getter: - (id)messageHandler;	// 0x30d7e3f9
- (void)sendMessage:(id)message;	// 0x30d7d835
- (void)sendMessage:(id)message withReply:(id)reply;	// 0x30d7d849
// declared property getter: - (id)serviceName;	// 0x30d7d691
// declared property setter: - (void)setAssertionHeld:(BOOL)held;	// 0x30d7e479
// declared property setter: - (void)setContext:(id)context;	// 0x30d7e499
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x30d7e445
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x30d7e3d5
// declared property setter: - (void)setMessageHandler:(id)handler;	// 0x30d7e40d
- (void)shutdown;	// 0x30d7dd35
@end
