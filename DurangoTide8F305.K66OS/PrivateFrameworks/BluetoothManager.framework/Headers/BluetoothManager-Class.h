/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

#import "BluetoothManager-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BluetoothManager : NSObject {
	BTLocalDeviceImplRef _localDevice;	// 4 = 0x4
	BTSessionImplRef _session;	// 8 = 0x8
	int _available;	// 12 = 0xc
	BOOL _audioConnected;	// 16 = 0x10
	BOOL _scanningEnabled;	// 17 = 0x11
	BOOL _scanningInProgress;	// 18 = 0x12
	unsigned _scanningServiceMask;	// 20 = 0x14
	BTDiscoveryAgentImplRef _discoveryAgent;	// 24 = 0x18
	BTPairingAgentImplRef _pairingAgent;	// 28 = 0x1c
	BTAccessoryManagerImplRef _accessoryManager;	// 32 = 0x20
	NSMutableDictionary *_btAddrDict;	// 36 = 0x24
	NSMutableDictionary *_btDeviceDict;	// 40 = 0x28
	NSMutableDictionary *_seekingInProgressDict;	// 44 = 0x2c
}
@property(assign) BOOL audioConnected;	// G=0x32d61005; S=0x32d61015; converted property
@property(assign) BOOL connectable;	// G=0x32d629e5; S=0x32d62a25; converted property
@property(assign) BOOL devicePairingEnabled;	// G=0x32d60ff1; S=0x32d62679; converted property
@property(assign) BOOL deviceScanningEnabled;	// G=0x32d60fb9; S=0x32d62111; converted property
@property(assign, getter=isDiscoverable) BOOL discoverable;	// G=0x32d625cd; S=0x32d6260d; converted property
+ (int)lastInitError;	// 0x32d60f95
+ (id)sharedInstance;	// 0x32d61471
- (id)init;	// 0x32d61419
- (BTAccessoryManagerImplRef)_accessoryManager;	// 0x32d60f85
- (BOOL)_attach:(id)attach;	// 0x32d61da5
- (void)_cleanup:(BOOL)cleanup;	// 0x32d621c9
- (void)_connectedStatusChanged;	// 0x32d611cd
- (BOOL)_isConnectedToNonSensorDevice;	// 0x32d62c1d
- (void)_postNotification:(id)notification;	// 0x32d61a85
- (void)_postNotificationWithArray:(id)array;	// 0x32d61ac9
- (void)_powerChanged;	// 0x32d623cd
- (void)_removeDevice:(id)device;	// 0x32d619d5
- (void)_restartScan;	// 0x32d624d5
- (void)_scanForServices:(unsigned)services withMode:(int)mode;	// 0x32d6253d
- (void)_sendSeekStart:(id)start forDevice:(id)device;	// 0x32d610a9
- (void)_setScanState:(int)state;	// 0x32d60fd9
- (BOOL)_setup:(BTSessionImplRef)setup;	// 0x32d61f05
- (void)_stopSeeking:(id)seeking forDevice:(id)device;	// 0x32d6102d
- (void)acceptSSP:(int)ssp forDevice:(id)device;	// 0x32d62951
- (id)addDeviceIfNeeded:(BTDeviceImplRef)needed;	// 0x32d634bd
// converted property getter: - (BOOL)audioConnected;	// 0x32d61005
- (BOOL)available;	// 0x32d60fa1
- (void)cancelPairing;	// 0x32d62765
- (void)connectDevice:(id)device;	// 0x32d611e9
- (void)connectDevice:(id)device withServices:(unsigned)services;	// 0x32d629a5
// converted property getter: - (BOOL)connectable;	// 0x32d629e5
- (BOOL)connected;	// 0x32d62c9d
- (id)connectedDevices;	// 0x32d62b4d
- (id)connectingDevices;	// 0x32d62a7d
- (void)dealloc;	// 0x32d613dd
// converted property getter: - (BOOL)devicePairingEnabled;	// 0x32d60ff1
// converted property getter: - (BOOL)deviceScanningEnabled;	// 0x32d60fb9
- (BOOL)deviceScanningInProgress;	// 0x32d60fc9
- (void)enableTestMode;	// 0x32d62e9d
- (BOOL)enabled;	// 0x32d612c9
- (void)endVoiceCommand:(id)command;	// 0x32d62cf5
// converted property getter: - (BOOL)isDiscoverable;	// 0x32d625cd
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x32d62e15
- (id)pairedDevices;	// 0x32d62809
- (void)postNotification:(id)notification;	// 0x32d613ad
- (void)postNotificationName:(id)name object:(id)object;	// 0x32d61359
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x32d612fd
- (int)powerState;	// 0x32d62335
- (BOOL)powered;	// 0x32d612e1
- (void)resetDeviceScanning;	// 0x32d621a5
- (void)scanForConnectableDevices:(unsigned)connectableDevices;	// 0x32d61269
- (void)scanForServices:(unsigned)services;	// 0x32d61281
- (void)sendAllContactsToDevice:(id)device;	// 0x32d62d75
- (void)sendContact:(id)contact toDevice:(id)device;	// 0x32d62da5
// converted property setter: - (void)setAudioConnected:(BOOL)connected;	// 0x32d61015
- (void)setAuthorizedServices:(unsigned)services forDevice:(id)device;	// 0x32d62e4d
// converted property setter: - (void)setConnectable:(BOOL)connectable;	// 0x32d62a25
// converted property setter: - (void)setDevicePairingEnabled:(BOOL)enabled;	// 0x32d62679
// converted property setter: - (void)setDeviceScanningEnabled:(BOOL)enabled;	// 0x32d62111
// converted property setter: - (void)setDiscoverable:(BOOL)discoverable;	// 0x32d6260d
- (BOOL)setEnabled:(BOOL)enabled;	// 0x32d61299
- (void)setPincode:(id)pincode forDevice:(id)device;	// 0x32d628d9
- (BOOL)setPowered:(BOOL)powered;	// 0x32d62379
- (void)startVoiceCommand:(id)command;	// 0x32d62d35
- (void)unpairDevice:(id)device;	// 0x32d6279d
- (BOOL)wasDeviceDiscovered:(id)discovered;	// 0x32d62439
@end

