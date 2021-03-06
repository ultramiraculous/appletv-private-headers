/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BROptionDialog, NSObject, BRViewController, NSMutableSet, NSString, BRControllerStack;
@protocol TVPeripheralManagerUIBluetoothDelegate;

__attribute__((visibility("hidden")))
@interface TVPeripheralManagerUI : XXUnknownSuperclass {
	BOOL _wantsToStartScanning;	// 4 = 0x4
	BRViewController *_pairingController;	// 8 = 0x8
	BROptionDialog *_errorController;	// 12 = 0xc
	BRControllerStack *_controllerStack;	// 16 = 0x10
	NSMutableSet *_bluetoothDevicesActivelySeekingPINs;	// 20 = 0x14
	NSString *_activePINRequestDeviceIdentifier;	// 24 = 0x18
	NSObject<TVPeripheralManagerUIBluetoothDelegate> *_bluetoothDelegate;	// 28 = 0x1c
}
@property(assign) __weak NSObject<TVPeripheralManagerUIBluetoothDelegate> *bluetoothDelegate;	// G=0x4db2d5; S=0x4db2f5; @synthesize=_bluetoothDelegate
- (id)initWithControllerStack:(id)controllerStack;	// 0x4da511
- (void).cxx_destruct;	// 0x4db309
- (void)_bluetoothAvailabilityChanged:(BOOL)changed;	// 0x4dad11
- (void)_bluetoothAvailabilityChangedNotification:(id)notification;	// 0x4dad95
- (void)_bluetoothDeviceDiscovered:(id)discovered;	// 0x4dae49
- (void)_bluetoothDeviceRemoved:(id)removed;	// 0x4db1d5
- (void)_bluetoothPairingPINRequest:(id)request;	// 0x4daeb9
- (void)_bluetoothPairingPINResultFailed:(id)failed;	// 0x4daf95
- (void)_bluetoothPairingPINResultSuccess:(id)success;	// 0x4daf75
- (void)_bluetoothPowerChanged:(id)changed;	// 0x4dade9
- (id)_devicePairingAction:(id)action;	// 0x4db299
- (void)_userAcknowledgedFailDialog:(id)dialog;	// 0x4daf85
// declared property getter: - (id)bluetoothDelegate;	// 0x4db2d5
- (void)dealloc;	// 0x4da761
- (void)generatedPinPairRequestWithBluetoothDevice:(id)bluetoothDevice;	// 0x4daa7d
- (void)removeAllUI;	// 0x4da939
// declared property setter: - (void)setBluetoothDelegate:(id)delegate;	// 0x4db2f5
- (void)startScanningForBluetoothDevices;	// 0x4da7cd
- (void)stopScanningForBluetoothDevices;	// 0x4da8a5
- (void)triggerPinPairingSequenceIfNeededWithBluetoothDevice:(id)bluetoothDevice;	// 0x4da9cd
@end

