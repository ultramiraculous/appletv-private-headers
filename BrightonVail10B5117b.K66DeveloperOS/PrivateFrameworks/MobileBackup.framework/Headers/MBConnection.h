/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@protocol MBConnectionHandler, OS_xpc_object, OS_dispatch_queue;

@interface MBConnection : NSObject {
	NSObject<OS_xpc_object> *_conn;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_eventQueue;	// 8 = 0x8
	NSObject<MBConnectionHandler> *_handler;	// 12 = 0xc
}
@property(assign, nonatomic) NSObject<MBConnectionHandler> *messageHandler;	// G=0x347b3731; S=0x347b3741; @synthesize=_handler
- (id)initWithServiceName:(id)serviceName eventQueue:(id)queue;	// 0x347b2e45
- (id)initWithXPCConnection:(id)xpcconnection eventQueue:(id)queue;	// 0x347b2dad
- (void)_handleXPCError:(id)error;	// 0x347b309d
- (void)_handleXPCEvent:(id)event;	// 0x347b2ff1
- (void)_setEventHandlerForXPCConnection;	// 0x347b2eed
- (void)cancel;	// 0x347b3659
- (void)dealloc;	// 0x347b3175
- (id)eventQueue;	// 0x347b36f1
// declared property getter: - (id)messageHandler;	// 0x347b3731
- (void)resume;	// 0x347b36dd
- (void)sendMessage:(id)message;	// 0x347b31e1
- (id)sendMessageWithReplyAndSync:(id)replyAndSync error:(id *)error;	// 0x347b324d
// declared property setter: - (void)setMessageHandler:(id)handler;	// 0x347b3741
- (void)suspend;	// 0x347b36c9
@end

