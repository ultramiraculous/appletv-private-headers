/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

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
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x421cbd; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x421ce9
+ (void)_pushWirelessUsageValues;	// 0x421f4d
+ (void)clearCachedNetworkStates;	// 0x420e81
+ (id)currentConfiguration;	// 0x4216a5
+ (BOOL)internetAvailable;	// 0x420fe5
+ (BOOL)internetServerReachable:(id)reachable;	// 0x4211ed
+ (id)ipAddressesForHostName:(id)hostName;	// 0x421275
+ (BOOL)networkAvailable;	// 0x420e95
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x421401
+ (CFDictionaryRef)proxiesDictionaryRef;	// 0x4214cd
+ (BOOL)receivedNTPClockSetNotification;	// 0x4213a1
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x4213b1
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x4213d1
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x4213f1
+ (BOOL)showedNetworkTimeDialog;	// 0x4213c1
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x421475
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x4213e1
+ (BOOL)usingWireless;	// 0x42116d
- (id)initFromCurrentConfiguration;	// 0x4215ad
- (id)IPaddressForInterface:(int)interface;	// 0x421c2d
- (id)MACAddressForActiveInterface;	// 0x421c01
- (id)MACaddressForInterface:(int)interface;	// 0x421bdd
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x42273d
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x421ff1
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x4223c9
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x4228b9
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x422845
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x422a61
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x422bf5
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x422acd
- (BOOL)_usesManualDNSForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x4226c5
- (void)dealloc;	// 0x4216ed
- (id)description;	// 0x421805
- (id)dnsAddressesForInterface:(int)interface;	// 0x421c99
- (BOOL)isActiveForInterface:(int)interface;	// 0x421b65
- (id)routerForInterface:(int)interface;	// 0x421c75
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x4219e5
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x421b19
- (void)setUseDHCPForInterface:(int)interface;	// 0x421991
- (void)setUseManualDNSForInterface:(int)interface;	// 0x4219c1
- (id)subnetMaskForInterface:(int)interface;	// 0x421c51
- (BOOL)useDHCPForInterface:(int)interface;	// 0x421b8d
- (BOOL)useManualDNSForInterface:(int)interface;	// 0x421bb9
// converted property getter: - (id)wirelessNetwork;	// 0x421cbd
- (long)wirelessSignalQuality;	// 0x421ccd
@end

