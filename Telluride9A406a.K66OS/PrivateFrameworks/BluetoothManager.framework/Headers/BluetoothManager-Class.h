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
@property(assign) BOOL audioConnected;	// G=0x30dfdb31; S=0x30dfdb41; converted property
@property(assign) BOOL connectable;	// G=0x30dfe319; S=0x30dfe2c1; converted property
@property(assign) BOOL devicePairingEnabled;	// G=0x30dfdb15; S=0x30dfe69d; converted property
@property(assign) BOOL deviceScanningEnabled;	// G=0x30dfdadd; S=0x30dfe8f5; converted property
@property(assign, getter=isDiscoverable) BOOL discoverable;	// G=0x30dfe81d; S=0x30dfe7a1; converted property
+ (int)lastInitError;	// 0x30dfdab5
+ (id)sharedInstance;	// 0x30dfdbbd
- (id)init;	// 0x30dfdb5d
- (BTAccessoryManagerImplRef)_accessoryManager;	// 0x30dfdaa5
- (BOOL)_attach:(id)attach;	// 0x30dff581
- (void)_cleanup:(BOOL)cleanup;	// 0x30dff1cd
- (void)_connectabilityChanged;	// 0x30dfdff9
- (void)_connectedStatusChanged;	// 0x30dfe015
- (void)_discoveryStateChanged;	// 0x30dfe861
- (BOOL)_onlySensorsConnected;	// 0x30dfe095
- (void)_postNotification:(id)notification;	// 0x30dff049
- (void)_postNotificationWithArray:(id)array;	// 0x30dff095
- (void)_powerChanged;	// 0x30dfedc1
- (void)_removeDevice:(id)device;	// 0x30dfeb25
- (void)_restartScan;	// 0x30dfe87d
- (void)_scanForServices:(unsigned)services withMode:(int)mode;	// 0x30dfe9bd
- (void)_sendSeekStart:(id)start forDevice:(id)device;	// 0x30dfddf1
- (void)_setScanState:(int)state;	// 0x30dfdafd
- (BOOL)_setup:(BTSessionImplRef)setup;	// 0x30dff34d
- (void)_stopSeeking:(id)seeking forDevice:(id)device;	// 0x30dfdd59
- (void)acceptSSP:(int)ssp forDevice:(id)device;	// 0x30dfe3bd
- (id)addDeviceIfNeeded:(BTDeviceImplRef)needed;	// 0x30dfebed
// converted property getter: - (BOOL)audioConnected;	// 0x30dfdb31
- (BOOL)available;	// 0x30dfdac5
- (void)cancelPairing;	// 0x30dfe65d
- (void)connectDevice:(id)device;	// 0x30dfe35d
- (void)connectDevice:(id)device withServices:(unsigned)services;	// 0x30dfe371
// converted property getter: - (BOOL)connectable;	// 0x30dfe319
- (BOOL)connected;	// 0x30dfe031
- (id)connectedDevices;	// 0x30dfe119
- (id)connectingDevices;	// 0x30dfe1ed
- (void)dealloc;	// 0x30dff18d
// converted property getter: - (BOOL)devicePairingEnabled;	// 0x30dfdb15
// converted property getter: - (BOOL)deviceScanningEnabled;	// 0x30dfdadd
- (BOOL)deviceScanningInProgress;	// 0x30dfdaed
- (void)enableTestMode;	// 0x30dfdc2d
- (BOOL)enabled;	// 0x30dfeecd
- (void)endVoiceCommand:(id)command;	// 0x30dfdf61
- (BOOL)isAnyoneScanning;	// 0x30dfed7d
// converted property getter: - (BOOL)isDiscoverable;	// 0x30dfe81d
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x30dfdc6d
- (id)pairedDevices;	// 0x30dfe4b1
- (id)pairedDevices:(BOOL)devices;	// 0x30dfe4c5
- (id)pairedLEDevices;	// 0x30dfe49d
- (void)postNotification:(id)notification;	// 0x30dff015
- (void)postNotificationName:(id)name object:(id)object;	// 0x30dfefb1
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x30dfef49
- (int)powerState;	// 0x30dfef05
- (BOOL)powered;	// 0x30dfeee5
- (void)resetDeviceScanning;	// 0x30dfea61
- (void)scanForConnectableDevices:(unsigned)connectableDevices;	// 0x30dfe995
- (void)scanForServices:(unsigned)services;	// 0x30dfe9a9
- (void)sendAllContactsToDevice:(id)device;	// 0x30dfdca5
- (void)sendContact:(id)contact toDevice:(id)device;	// 0x30dfdce1
// converted property setter: - (void)setAudioConnected:(BOOL)connected;	// 0x30dfdb41
// converted property setter: - (void)setConnectable:(BOOL)connectable;	// 0x30dfe2c1
// converted property setter: - (void)setDevicePairingEnabled:(BOOL)enabled;	// 0x30dfe69d
// converted property setter: - (void)setDeviceScanningEnabled:(BOOL)enabled;	// 0x30dfe8f5
// converted property setter: - (void)setDiscoverable:(BOOL)discoverable;	// 0x30dfe7a1
- (BOOL)setEnabled:(BOOL)enabled;	// 0x30dfee35
- (void)setPincode:(id)pincode forDevice:(id)device;	// 0x30dfe41d
- (BOOL)setPowered:(BOOL)powered;	// 0x30dfee6d
- (void)startVoiceCommand:(id)command;	// 0x30dfdfad
- (void)unpairDevice:(id)device;	// 0x30dfe5e5
- (BOOL)wasDeviceDiscovered:(id)discovered;	// 0x30dfea8d
@end
