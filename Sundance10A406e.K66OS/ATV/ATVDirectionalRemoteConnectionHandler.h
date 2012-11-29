/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, ATVTCPControlReceiver;

__attribute__((visibility("hidden")))
@interface ATVDirectionalRemoteConnectionHandler : XXUnknownSuperclass {
	ATVTCPControlReceiver *_controlReceiver;	// 4 = 0x4
	unsigned long _receiverDecryptionKey;	// 8 = 0x8
	NSMutableData *_remainderData;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x2277a9; S=0x2277b9; converted property
- (id)init;	// 0x227681
- (id)_checkDataIntegrity:(id)integrity;	// 0x227b01
- (unsigned long)_decryptReceivedWord:(unsigned long)word;	// 0x227f01
- (void)_processTouchCommand:(id)command;	// 0x227f19
- (void)_promptReceived:(id)received;	// 0x2282b1
- (void)_setupControlReceiver:(id)receiver encryptionKey:(unsigned long)key;	// 0x227d11
- (void)allConnectionsClosed:(id)closed;	// 0x2277c9
- (void)dealloc;	// 0x227705
// converted property getter: - (id)delegate;	// 0x2277a9
- (void)newBytesReceived:(id)received data:(id)data;	// 0x227801
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2277b9
@end
