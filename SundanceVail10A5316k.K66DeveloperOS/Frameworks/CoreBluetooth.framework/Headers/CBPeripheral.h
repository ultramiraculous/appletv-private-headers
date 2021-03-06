/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CoreBluetooth-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSNumber, NSString;
@protocol CBPeripheralDelegate;

@interface CBPeripheral : NSObject {
@private
	id<CBPeripheralDelegate> _delegate;	// 4 = 0x4
	CFUUIDRef _UUID;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSNumber *_RSSI;	// 16 = 0x10
	BOOL _isConnected;	// 20 = 0x14
	NSArray *_services;	// 24 = 0x18
}
@property(retain) NSNumber *RSSI;	// G=0x34abafd9; S=0x34abafed; @synthesize=_RSSI
@property(readonly, assign, nonatomic) CFUUIDRef UUID;	// G=0x34abafa5; @synthesize=_UUID
@property(assign, nonatomic) id<CBPeripheralDelegate> delegate;	// G=0x34abaf85; S=0x34abaf95; @synthesize=_delegate
@property(assign) BOOL isConnected;	// G=0x34abaffd; S=0x34abb015; @synthesize=_isConnected
@property(retain) NSString *name;	// G=0x34abafb5; S=0x34abafc9; @synthesize=_name
@property(retain) NSArray *services;	// G=0x34abb02d; S=0x34abb041; @synthesize=_services
// declared property getter: - (id)RSSI;	// 0x34abafd9
// declared property getter: - (CFUUIDRef)UUID;	// 0x34abafa5
// declared property getter: - (id)delegate;	// 0x34abaf85
- (void)discoverCharacteristics:(id)characteristics forService:(id)service;	// 0x34abaebd
- (void)discoverDescriptorsForCharacteristic:(id)characteristic;	// 0x34abaf49
- (void)discoverIncludedServices:(id)services forService:(id)service;	// 0x34abaea9
- (void)discoverServices:(id)services;	// 0x34abae95
// declared property getter: - (BOOL)isConnected;	// 0x34abaffd
// declared property getter: - (id)name;	// 0x34abafb5
- (void)readRSSI;	// 0x34abae81
- (void)readValueForCharacteristic:(id)characteristic;	// 0x34abaed1
- (void)readValueForDescriptor:(id)descriptor;	// 0x34abaf5d
- (void)reliablyWriteValues:(id)values forCharacteristics:(id)characteristics;	// 0x34abaef9
// declared property getter: - (id)services;	// 0x34abb02d
- (void)setBroadcastValue:(BOOL)value forCharacteristic:(id)characteristic;	// 0x34abaf0d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34abaf95
- (void)setIndicateValue:(BOOL)value forCharacteristic:(id)characteristic;	// 0x34abaf35
// declared property setter: - (void)setIsConnected:(BOOL)connected;	// 0x34abb015
// declared property setter: - (void)setName:(id)name;	// 0x34abafc9
- (void)setNotifyValue:(BOOL)value forCharacteristic:(id)characteristic;	// 0x34abaf21
// declared property setter: - (void)setRSSI:(id)rssi;	// 0x34abafed
// declared property setter: - (void)setServices:(id)services;	// 0x34abb041
- (void)writeValue:(id)value forCharacteristic:(id)characteristic type:(int)type;	// 0x34abaee5
- (void)writeValue:(id)value forDescriptor:(id)descriptor;	// 0x34abaf71
@end

