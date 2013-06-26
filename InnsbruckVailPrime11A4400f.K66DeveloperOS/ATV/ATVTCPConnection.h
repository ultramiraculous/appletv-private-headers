/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSStreamDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSInputStream, NSMutableData, NSOutputStream, NSMutableArray, ATVTCPControlReceiver;

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
@property(assign) id delegate;	// G=0x218031; S=0x218041; converted property
@property(readonly, assign) BOOL isValid;	// G=0x218071; converted property
@property(readonly, retain) NSData *peerAddress;	// G=0x218051; converted property
@property(readonly, retain) ATVTCPControlReceiver *server;	// G=0x218061; converted property
- (id)init;	// 0x217e71
- (id)initWithPeerAddress:(id)peerAddress inputStream:(id)stream outputStream:(id)stream3 forServer:(id)server;	// 0x217e89
- (void)dealloc;	// 0x217fd1
// converted property getter: - (id)delegate;	// 0x218031
- (void)invalidate;	// 0x218081
// converted property getter: - (BOOL)isValid;	// 0x218071
// converted property getter: - (id)peerAddress;	// 0x218051
- (BOOL)processIncomingBytes;	// 0x21819d
// converted property getter: - (id)server;	// 0x218061
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x218041
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x218235
@end
