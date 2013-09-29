/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BRIPConfiguration : XXUnknownSuperclass {
	NSString *_wirelessNetwork;	// 4 = 0x4
	NSString *_wirelessMACAddress;	// 8 = 0x8
	NSString *_wirelessIPAddress;	// 12 = 0xc
	NSString *_wirelessSubnetMask;	// 16 = 0x10
	NSString *_wirelessRouter;	// 20 = 0x14
	NSArray *_wirelessDNSAddresses;	// 24 = 0x18
	NSString *_wiredMACAddress;	// 28 = 0x1c
	NSString *_wiredIPAddress;	// 32 = 0x20
	NSString *_wiredSubnetMask;	// 36 = 0x24
	NSString *_wiredRouter;	// 40 = 0x28
	NSArray *_wiredDNSAddresses;	// 44 = 0x2c
	unsigned _wirelessUseDHCP : 1;	// 48 = 0x30
	BOOL _wirelessUseManualDNS;	// 49 = 0x31
	unsigned _wirelessActive : 1;	// 50 = 0x32
	unsigned _wiredUseDHCP : 1;	// 50 = 0x32
	BOOL _wiredUseManualDNS;	// 51 = 0x33
	unsigned _wiredActive : 1;	// 52 = 0x34
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x450621; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x45064d
+ (void)_pushWirelessUsageValues;	// 0x4508b1
+ (id)currentConfiguration;	// 0x450009
+ (BOOL)internetServerReachable:(id)reachable;	// 0x44fc69
+ (id)ipAddressesForHostName:(id)hostName;	// 0x44fcf1
+ (CFDictionaryRef)proxiesDictionaryRef;	// 0x44fe31
+ (void)startMonitoringNetworkChanges;	// 0x44fe15
+ (BOOL)usingWireless;	// 0x44fbe9
- (id)initFromCurrentConfiguration;	// 0x44ff11
- (id)IPaddressForInterface:(int)interface;	// 0x450591
- (id)MACAddressForActiveInterface;	// 0x450565
- (id)MACaddressForInterface:(int)interface;	// 0x450541
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x4510a1
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x450955
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x450d2d
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x45121d
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x4511a9
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x4513c5
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x451559
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x451431
- (BOOL)_usesManualDNSForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x451029
- (void)dealloc;	// 0x450051
- (id)description;	// 0x450169
- (id)dnsAddressesForInterface:(int)interface;	// 0x4505fd
- (BOOL)isActiveForInterface:(int)interface;	// 0x4504c9
- (id)routerForInterface:(int)interface;	// 0x4505d9
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x450349
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x45047d
- (void)setUseDHCPForInterface:(int)interface;	// 0x4502f5
- (void)setUseManualDNSForInterface:(int)interface;	// 0x450325
- (id)subnetMaskForInterface:(int)interface;	// 0x4505b5
- (BOOL)useDHCPForInterface:(int)interface;	// 0x4504f1
- (BOOL)useManualDNSForInterface:(int)interface;	// 0x45051d
// converted property getter: - (id)wirelessNetwork;	// 0x450621
- (long)wirelessSignalQuality;	// 0x450631
@end
