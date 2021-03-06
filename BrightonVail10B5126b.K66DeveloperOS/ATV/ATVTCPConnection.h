/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSStreamDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVTCPControlReceiver, NSMutableArray, NSMutableData, NSData, NSInputStream, NSOutputStream;

__attribute__((visibility("hidden")))
@interface ATVTCPConnection : XXUnknownSuperclass <NSStreamDelegate> {
	id _delegate;	// 4 = 0x4
	NSData *_peerAddress;	// 8 = 0x8
	ATVTCPControlReceiver *_server;	// 12 = 0xc
	NSMutableArray *_requests;	// 16 = 0x10
	NSInputStream *_istream;	// 20 = 0x14
	NSOutputStream *_ostream;	// 24 = 0x18
	NSMutableData *_ibuffer;	// 28 = 0x1c
	NSMutableData *_obuffer;	// 32 = 0x20
	BOOL _isValid;	// 36 = 0x24
}
@property(assign) id delegate;	// G=0x23b909; S=0x23b919; converted property
@property(readonly, assign) BOOL isValid;	// G=0x23b949; converted property
@property(readonly, retain) NSData *peerAddress;	// G=0x23b929; converted property
@property(readonly, retain) ATVTCPControlReceiver *server;	// G=0x23b939; converted property
- (id)init;	// 0x23b749
- (id)initWithPeerAddress:(id)peerAddress inputStream:(id)stream outputStream:(id)stream3 forServer:(id)server;	// 0x23b761
- (void)dealloc;	// 0x23b8a9
// converted property getter: - (id)delegate;	// 0x23b909
- (void)invalidate;	// 0x23b959
// converted property getter: - (BOOL)isValid;	// 0x23b949
// converted property getter: - (id)peerAddress;	// 0x23b929
- (BOOL)processIncomingBytes;	// 0x23ba75
// converted property getter: - (id)server;	// 0x23b939
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x23b919
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x23bb0d
@end

