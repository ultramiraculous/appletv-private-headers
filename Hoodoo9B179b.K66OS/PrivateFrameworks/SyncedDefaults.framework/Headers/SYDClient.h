/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SYDClient : NSObject {
@private
	dispatch_queue_s *_queue;	// 4 = 0x4
	xpc_connection_s *_connection;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
}
- (id)initWithQueue:(dispatch_queue_s *)queue bundleIdentifier:(CFStringRef)identifier;	// 0x34a4eb7d
- (void)_createConnectionIfNecessary;	// 0x34a4f135
- (id)_newMessageWithName:(id)name userInfo:(id)info;	// 0x34a4efd1
- (void)_resetConnection;	// 0x34a4f105
- (void)_sendMessage:(id)message replyHandler:(id)handler;	// 0x34a4ed25
- (void)_sendMessageNoReply:(id)reply;	// 0x34a4edfd
- (id)_sendMessageWithReplySync:(id)replySync;	// 0x34a4ee99
- (void)dealloc;	// 0x34a4f1fd
- (void)finalize;	// 0x34a4f1b9
- (void)sendMessageWithName:(id)name;	// 0x34a4ece1
- (void)sendMessageWithName:(id)name replyHandler:(id)handler;	// 0x34a4ec0d
- (id)sendMessageWithName:(id)name userInfo:(id)info;	// 0x34a4ec55
- (void)shutdown;	// 0x34a4f0ad
@end

