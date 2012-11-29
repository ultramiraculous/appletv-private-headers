/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBXpcConnectionDelegate.h"
#import "CBCentralManager.h"

@class CBXpcConnection, NSMutableDictionary;

@interface CBConcreteCentralManager : CBCentralManager <CBXpcConnectionDelegate> {
	CBXpcConnection *_connection;	// 12 = 0xc
	NSMutableDictionary *_peripherals;	// 16 = 0x10
	BOOL _isScanning;	// 20 = 0x14
}
- (id)initWithDelegate:(id)delegate queue:(id)queue;	// 0x305cf291
- (void)cancelPeripheralConnection:(id)connection;	// 0x305cf6bd
- (void)cancelPeripheralConnection:(id)connection force:(BOOL)force;	// 0x305cf6d1
- (void)connectPeripheral:(id)peripheral options:(id)options;	// 0x305cf58d
- (void)dealloc;	// 0x305cf1f9
- (void)handleConnectedPeripheralsRetrieved:(id)retrieved;	// 0x305cfac9
- (void)handlePeripheralConnectionCompleted:(id)completed;	// 0x305d00c1
- (void)handlePeripheralDisconnectionCompleted:(id)completed;	// 0x305d0205
- (void)handlePeripheralDiscovered:(id)discovered;	// 0x305cfc31
- (void)handlePeripheralEvent:(id)event selector:(SEL)selector;	// 0x305d02f5
- (void)handlePeripheralsRetrieved:(id)retrieved;	// 0x305cf961
- (void)handleStateUpdated:(id)updated;	// 0x305cf801
- (void)orphanPeripherals;	// 0x305cf0f5
- (id)peripheralForHandle:(id)handle args:(id)args;	// 0x305cee59
- (void)releasePeripheral:(id)peripheral;	// 0x305cec91
- (void)retainPeripheral:(id)peripheral;	// 0x305ceb11
- (void)retrieveConnectedPeripherals;	// 0x305cf491
- (void)retrievePeripherals:(id)peripherals;	// 0x305cf375
- (void)scanForPeripheralsWithServices:(id)services options:(id)options;	// 0x305cf4a5
- (void)sendMsg:(int)msg args:(id)args;	// 0x305ceab9
- (void)stopScan;	// 0x305cf55d
- (void)xpcConnection:(id)connection didReceiveMessage:(int)message arguments:(id)arguments;	// 0x305d0349
- (void)xpcConnectionDidReset:(id)xpcConnection;	// 0x305d057d
@end
