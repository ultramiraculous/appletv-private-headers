/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSMutableArray, NSString, NSArray, NSDictionary;
@protocol EAAccessoryDelegate;

@interface EAAccessoryInternal : NSObject {
@private
	BOOL _connected;	// 4 = 0x4
@protected
	unsigned _connectionID;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_manufacturer;	// 16 = 0x10
	NSString *_modelNumber;	// 20 = 0x14
@private
	NSString *_serialNumber;	// 24 = 0x18
@protected
	NSString *_firmwareRevision;	// 28 = 0x1c
	NSString *_hardwareRevision;	// 32 = 0x20
	NSString *_macAddress;	// 36 = 0x24
@private
	NSString *_preferredApp;	// 40 = 0x28
@protected
	int _classType;	// 44 = 0x2c
	NSDictionary *_audioPorts;	// 48 = 0x30
	unsigned _capabilities;	// 52 = 0x34
@private
	BOOL _notPresentInIAPAccessoriesArray;	// 56 = 0x38
	NSMutableArray *_sessionsList;	// 60 = 0x3c
@protected
	NSArray *_eqNames;	// 64 = 0x40
@private
	int _iPodOutOptionsMask;	// 68 = 0x44
@protected
	CFAccessoryRef _cfAccessory;	// 72 = 0x48
	/*function-pointer*/ void *_cfAccessoryPortPropertyCallback;	// 76 = 0x4c
	void *_cfAccessoryPortPropertyContext;	// 80 = 0x50
	NSDictionary *_protocols;	// 84 = 0x54
	id<EAAccessoryDelegate> _delegate;	// 88 = 0x58
	unsigned _eqIndex;	// 92 = 0x5c
}
@property(retain, nonatomic) NSDictionary *audioPorts;	// G=0x32e124f9; S=0x32e12509; @synthesize=_audioPorts
@property(assign, nonatomic) unsigned capabilities;	// G=0x32e12519; S=0x32e12529; @synthesize=_capabilities
@property(assign, nonatomic) CFAccessoryRef cfAccessory;	// G=0x32e125b9; S=0x32e125c9; @synthesize=_cfAccessory
@property(assign, nonatomic) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x32e125d9; S=0x32e125e9; @synthesize=_cfAccessoryPortPropertyCallback
@property(assign, nonatomic) void *cfAccessoryPortPropertyContext;	// G=0x32e125f9; S=0x32e12609; @synthesize=_cfAccessoryPortPropertyContext
@property(assign, nonatomic) int classType;	// G=0x32e124d9; S=0x32e124e9; @synthesize=_classType
@property(assign, nonatomic) BOOL connected;	// G=0x32e12379; S=0x32e12389; @synthesize=_connected
@property(assign, nonatomic) unsigned connectionID;	// G=0x32e12399; S=0x32e123a9; @synthesize=_connectionID
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x32e12639; S=0x32e12649; @synthesize=_delegate
@property(assign, nonatomic) unsigned eqIndex;	// G=0x32e12579; S=0x32e12589; @synthesize=_eqIndex
@property(retain, nonatomic) NSArray *eqNames;	// G=0x32e12559; S=0x32e12569; @synthesize=_eqNames
@property(copy, nonatomic) NSString *firmwareRevision;	// G=0x32e12449; S=0x32e1245d; @synthesize=_firmwareRevision
@property(copy, nonatomic) NSString *hardwareRevision;	// G=0x32e1246d; S=0x32e12481; @synthesize=_hardwareRevision
@property(assign, nonatomic) int iPodOutOptionsMask;	// G=0x32e12599; S=0x32e125a9; @synthesize=_iPodOutOptionsMask
@property(copy, nonatomic) NSString *macAddress;	// G=0x32e12491; S=0x32e124a5; @synthesize=_macAddress
@property(copy, nonatomic) NSString *manufacturer;	// G=0x32e123b9; S=0x32e123cd; @synthesize=_manufacturer
@property(copy, nonatomic) NSString *modelNumber;	// G=0x32e12401; S=0x32e12415; @synthesize=_modelNumber
@property(copy, nonatomic) NSString *name;	// G=0x32e123dd; S=0x32e123f1; @synthesize=_name
@property(assign, nonatomic) BOOL notPresentInIAPAccessoriesArray;	// G=0x32e12539; S=0x32e12549; @synthesize=_notPresentInIAPAccessoriesArray
@property(copy, nonatomic) NSString *preferredApp;	// G=0x32e124b5; S=0x32e124c9; @synthesize=_preferredApp
@property(retain, nonatomic) NSDictionary *protocols;	// G=0x32e12619; S=0x32e12629; @synthesize=_protocols
@property(copy, nonatomic) NSString *serialNumber;	// G=0x32e12425; S=0x32e12439; @synthesize=_serialNumber
@property(readonly, assign, nonatomic) NSArray *sessionsList;	// G=0x32e12369; 
- (id)init;	// 0x32e120b1
- (void)addSession:(id)session;	// 0x32e122a9
// declared property getter: - (id)audioPorts;	// 0x32e124f9
// declared property getter: - (unsigned)capabilities;	// 0x32e12519
// declared property getter: - (CFAccessoryRef)cfAccessory;	// 0x32e125b9
// declared property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x32e125d9
// declared property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x32e125f9
// declared property getter: - (int)classType;	// 0x32e124d9
// declared property getter: - (BOOL)connected;	// 0x32e12379
// declared property getter: - (unsigned)connectionID;	// 0x32e12399
- (void)dealloc;	// 0x32e12129
// declared property getter: - (id)delegate;	// 0x32e12639
// declared property getter: - (unsigned)eqIndex;	// 0x32e12579
// declared property getter: - (id)eqNames;	// 0x32e12559
// declared property getter: - (id)firmwareRevision;	// 0x32e12449
// declared property getter: - (id)hardwareRevision;	// 0x32e1246d
// declared property getter: - (int)iPodOutOptionsMask;	// 0x32e12599
// declared property getter: - (id)macAddress;	// 0x32e12491
// declared property getter: - (id)manufacturer;	// 0x32e123b9
// declared property getter: - (id)modelNumber;	// 0x32e12401
// declared property getter: - (id)name;	// 0x32e123dd
// declared property getter: - (BOOL)notPresentInIAPAccessoriesArray;	// 0x32e12539
// declared property getter: - (id)preferredApp;	// 0x32e124b5
// declared property getter: - (id)protocols;	// 0x32e12619
- (void)removeSession:(id)session;	// 0x32e12315
// declared property getter: - (id)serialNumber;	// 0x32e12425
// declared property getter: - (id)sessionsList;	// 0x32e12369
// declared property setter: - (void)setAudioPorts:(id)ports;	// 0x32e12509
// declared property setter: - (void)setCapabilities:(unsigned)capabilities;	// 0x32e12529
// declared property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x32e125c9
// declared property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x32e125e9
// declared property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x32e12609
// declared property setter: - (void)setClassType:(int)type;	// 0x32e124e9
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x32e12389
// declared property setter: - (void)setConnectionID:(unsigned)anId;	// 0x32e123a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e12649
// declared property setter: - (void)setEqIndex:(unsigned)index;	// 0x32e12589
// declared property setter: - (void)setEqNames:(id)names;	// 0x32e12569
// declared property setter: - (void)setFirmwareRevision:(id)revision;	// 0x32e1245d
// declared property setter: - (void)setHardwareRevision:(id)revision;	// 0x32e12481
// declared property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x32e125a9
// declared property setter: - (void)setMacAddress:(id)address;	// 0x32e124a5
// declared property setter: - (void)setManufacturer:(id)manufacturer;	// 0x32e123cd
// declared property setter: - (void)setModelNumber:(id)number;	// 0x32e12415
// declared property setter: - (void)setName:(id)name;	// 0x32e123f1
// declared property setter: - (void)setNotPresentInIAPAccessoriesArray:(BOOL)iapaccessoriesArray;	// 0x32e12549
// declared property setter: - (void)setPreferredApp:(id)app;	// 0x32e124c9
// declared property setter: - (void)setProtocols:(id)protocols;	// 0x32e12629
// declared property setter: - (void)setSerialNumber:(id)number;	// 0x32e12439
@end

