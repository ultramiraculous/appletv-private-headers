/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library

@class CBUUID, NSData, NSArray, CBService;

@interface CBCharacteristic : NSObject {
	CBService *_service;	// 4 = 0x4
	CBUUID *_UUID;	// 8 = 0x8
	int _properties;	// 12 = 0xc
	NSData *_value;	// 16 = 0x10
	NSArray *_descriptors;	// 20 = 0x14
	BOOL _isBroadcasted;	// 24 = 0x18
	BOOL _isNotifying;	// 25 = 0x19
}
@property(readonly, assign, nonatomic) CBUUID *UUID;	// G=0x32e3c319; @synthesize=_UUID
@property(retain) NSArray *descriptors;	// G=0x32e3c35d; S=0x32e3c371; @synthesize=_descriptors
@property(readonly, assign) BOOL isBroadcasted;	// G=0x32e3c381; @synthesize=_isBroadcasted
@property(readonly, assign) BOOL isNotifying;	// G=0x32e3c399; @synthesize=_isNotifying
@property(readonly, assign, nonatomic) int properties;	// G=0x32e3c329; @synthesize=_properties
@property(assign, nonatomic) CBService *service;	// G=0x32e3c2f9; S=0x32e3c309; @synthesize=_service
@property(retain) NSData *value;	// G=0x32e3c339; S=0x32e3c34d; @synthesize=_value
// declared property getter: - (id)UUID;	// 0x32e3c319
// declared property getter: - (id)descriptors;	// 0x32e3c35d
// declared property getter: - (BOOL)isBroadcasted;	// 0x32e3c381
// declared property getter: - (BOOL)isNotifying;	// 0x32e3c399
// declared property getter: - (int)properties;	// 0x32e3c329
// declared property getter: - (id)service;	// 0x32e3c2f9
// declared property setter: - (void)setDescriptors:(id)descriptors;	// 0x32e3c371
// declared property setter: - (void)setService:(id)service;	// 0x32e3c309
// declared property setter: - (void)setValue:(id)value;	// 0x32e3c34d
// declared property getter: - (id)value;	// 0x32e3c339
@end

