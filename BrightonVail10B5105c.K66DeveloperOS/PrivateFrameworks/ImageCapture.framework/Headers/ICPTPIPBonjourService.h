/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPBonjourService : NSObject {
	id _bonjourServiceProperties;	// 4 = 0x4
}
@property(assign) id delegate;	// G=0x35aff475; S=0x35aff495; converted property
- (id)initWithHostPort:(unsigned long)hostPort hostName:(id)name hostGUID:(id)guid bonjourServiceType:(id)type bonjourTXTRecords:(id)records;	// 0x35aff2c9
- (void)addClient:(id)client;	// 0x35b00ab1
- (id)clientForAddress:(CFDataRef)address;	// 0x35b005f9
- (id)clientForPID:(unsigned long)pid;	// 0x35b004ed
- (void)clientTerminated:(id)terminated;	// 0x35b00ea5
- (BOOL)createAndPublishNetService;	// 0x35aff6c1
- (int)createPTPDIPInstanceWithAddress:(CFDataRef)address fileDescriptor:(int)descriptor;	// 0x35affe15
- (BOOL)createSocket;	// 0x35affb65
- (void)dealloc;	// 0x35aff4b5
// converted property getter: - (id)delegate;	// 0x35aff475
- (int)destroyPTPDIPInstance:(id)instance;	// 0x35b00945
- (void)disconnectClient:(id)client;	// 0x35b00fed
- (void)dispatchConnectionFromSocket:(int)socket withAddress:(CFDataRef)address;	// 0x35aff915
- (void)handleNetServiceError:(XXStruct_K5nmsA *)error;	// 0x35b00ee9
- (int)messagePTPDIPInstance:(id)instance withSocket:(int)socket;	// 0x35b0071d
- (int)numClients;	// 0x35b00e51
- (CFNetServiceRef)publishedService;	// 0x35aff855
- (void)releaseNetService;	// 0x35aff875
- (void)releaseSocket;	// 0x35affdb9
- (void)removeClient:(id)client;	// 0x35b00c81
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35aff495
- (BOOL)startService;	// 0x35aff525
- (void)unlockDeviceForClient:(id)client;	// 0x35b00fe9
@end

