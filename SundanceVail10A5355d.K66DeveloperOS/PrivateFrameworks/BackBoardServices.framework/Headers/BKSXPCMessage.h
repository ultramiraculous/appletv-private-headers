/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue, OS_xpc_object;

@interface BKSXPCMessage : NSObject {
	NSObject<OS_xpc_object> *_message;	// 4 = 0x4
	id _replyHandler;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_replyQueue;	// 12 = 0xc
}
+ (id)message:(long long)message withPacker:(id)packer;	// 0x340d6b31
+ (id)message:(long long)message withPacker:(id)packer replyHandler:(id)handler replyQueue:(id)queue;	// 0x340d6b6d
+ (void)sendMessage:(long long)message toConnection:(id)connection withMessagePacker:(id)messagePacker;	// 0x340d6a85
+ (void)sendMessage:(long long)message toConnection:(id)connection withMessagePacker:(id)messagePacker replyHandler:(id)handler replyQueue:(id)queue;	// 0x340d6ab9
- (id)initWithMessage:(long long)message packer:(id)packer replyHandler:(id)handler replyQueue:(id)queue;	// 0x340d6bcd
- (void)dealloc;	// 0x340d6cf5
- (void)sendToConnection:(id)connection;	// 0x340d6d6d
@end

