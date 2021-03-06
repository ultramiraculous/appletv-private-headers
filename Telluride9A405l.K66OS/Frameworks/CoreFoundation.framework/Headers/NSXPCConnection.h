/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSXPCObject.h"

@class NSString, NSMutableArray;

@interface NSXPCConnection : NSObject <NSXPCObject> {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	xpc_connection_s *_sconn;	// 8 = 0x8
	int _lock;	// 12 = 0xc
	dispatch_queue_s *_dq;	// 16 = 0x10
	dispatch_group_s *_dgroup;	// 20 = 0x14
	NSString *_serviceName;	// 24 = 0x18
	id _handleMessage;	// 28 = 0x1c
	long long _mseqno;	// 32 = 0x20
	NSMutableArray *_invalidHandlers;	// 40 = 0x28
	int _started;	// 44 = 0x2c
	int _invalid;	// 48 = 0x30
	int _flavor;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) xpc_connection_s *XPCConnection;	// G=0x352b9f71; @dynamic
@property(assign, nonatomic) dispatch_queue_s *dispatchQueue;	// G=0x352ba079; S=0x352ba089; @dynamic
@property(copy) id handleMessage;	// G=0x352b9f81; S=0x352b9fd9; @dynamic
@property(readonly, assign) NSString *serviceName;	// G=0x352b9f19; @dynamic
- (id)initWithPeerConnection:(xpc_connection_s *)peerConnection;	// 0x352b9f05
- (id)initWithReceivedConnection:(xpc_connection_s *)receivedConnection;	// 0x352b9ef1
- (id)initWithServiceName:(id)serviceName privileged:(BOOL)privileged;	// 0x352b9dd5
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection type:(int)type;	// 0x352b9c41
- (id)initWithXPCObject:(void *)xpcobject;	// 0x352ba819
// declared property getter: - (xpc_connection_s *)XPCConnection;	// 0x352b9f71
- (void)__invalidate;	// 0x352ba0c9
- (void)addInvalidationHandler:(id)handler;	// 0x352ba325
- (void)dealloc;	// 0x352b9d65
// declared property getter: - (dispatch_queue_s *)dispatchQueue;	// 0x352ba079
- (void *)encodeToNewXPCObject;	// 0x352ba7a9
// declared property getter: - (id)handleMessage;	// 0x352b9f81
- (void)invalidate;	// 0x352ba255
- (void)sendMessage:(void *)message waitForAck:(BOOL)ack;	// 0x352ba555
- (void)sendMessage:(void *)message waitForSend:(BOOL)send;	// 0x352ba411
// declared property getter: - (id)serviceName;	// 0x352b9f19
// declared property setter: - (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x352ba089
// declared property setter: - (void)setHandleMessage:(id)message;	// 0x352b9fd9
- (void)start;	// 0x352ba3a9
@end

