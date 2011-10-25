/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, ATXPCConnection, NSDictionary;

@interface ATXPCMessage : NSObject {
@private
	ATXPCConnection *_receivingConnection;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSDictionary *_info;	// 12 = 0xc
	xpc_connection_s *_x_reply_connection;	// 16 = 0x10
	void *_x_reply;	// 20 = 0x14
}
@property(copy, nonatomic) NSDictionary *info;	// G=0x324941a9; S=0x324941b9; @synthesize=_info
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32494199; @synthesize=_name
- (id)initWithName:(id)name;	// 0x32493c51
- (void *)_createXPCMessage;	// 0x32493f4d
- (id)_initWithXPCMessage:(void *)xpcmessage onConnection:(id)connection;	// 0x32493d31
- (void)dealloc;	// 0x32493ca5
// declared property getter: - (id)info;	// 0x324941a9
// declared property getter: - (id)name;	// 0x32494199
- (BOOL)needsReply;	// 0x3249416d
- (void)sendReply:(id)reply;	// 0x32494025
// declared property setter: - (void)setInfo:(id)info;	// 0x324941b9
@end

