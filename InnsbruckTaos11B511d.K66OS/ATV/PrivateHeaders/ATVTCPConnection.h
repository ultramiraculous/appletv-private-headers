/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSStreamDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSInputStream, NSOutputStream, ATVTCPControlReceiver, NSData, NSMutableArray;

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
@property(assign) id delegate;	// G=0x240095; S=0x2400a5; converted property
@property(readonly, assign) BOOL isValid;	// G=0x2400d5; converted property
@property(readonly, retain) NSData *peerAddress;	// G=0x2400b5; converted property
@property(readonly, retain) ATVTCPControlReceiver *server;	// G=0x2400c5; converted property
- (id)init;	// 0x23fed5
- (id)initWithPeerAddress:(id)peerAddress inputStream:(id)stream outputStream:(id)stream3 forServer:(id)server;	// 0x23feed
- (void)dealloc;	// 0x240035
// converted property getter: - (id)delegate;	// 0x240095
- (void)invalidate;	// 0x2400e5
// converted property getter: - (BOOL)isValid;	// 0x2400d5
// converted property getter: - (id)peerAddress;	// 0x2400b5
- (BOOL)processIncomingBytes;	// 0x240201
// converted property getter: - (id)server;	// 0x2400c5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2400a5
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x240299
@end

