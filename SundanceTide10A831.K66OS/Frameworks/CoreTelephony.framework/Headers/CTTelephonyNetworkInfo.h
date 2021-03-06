/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library
#import "CoreTelephony-Structs.h"

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject {
	void *_internal;	// 4 = 0x4
	CTCarrier *_subscriberCellularProvider;	// 8 = 0x8
	id _subscriberCellularProviderDidUpdateNotifier;	// 12 = 0xc
}
@property(retain) CTCarrier *subscriberCellularProvider;	// G=0x30e0d4e5; S=0x30e0d4f9; @synthesize=_subscriberCellularProvider
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;	// G=0x30e0cb71; S=0x30e0cb81; 
- (id)init;	// 0x30e0c9c1
- (void)cleanUpServerConnection;	// 0x30e0c979
- (void)dealloc;	// 0x30e0cac5
- (BOOL)getAllowsVOIP:(BOOL *)voip withCTError:(XXStruct_K5nmsA *)cterror;	// 0x30e0ce05
- (BOOL)getCarrierName:(id)name withCTError:(XXStruct_K5nmsA *)cterror;	// 0x30e0cc31
- (BOOL)getMobileCountryCode:(id)code andIsoCountryCode:(id)code2 withCTError:(XXStruct_K5nmsA *)cterror;	// 0x30e0ccb9
- (BOOL)getMobileNetworkCode:(id)code withCTError:(XXStruct_K5nmsA *)cterror;	// 0x30e0cd7d
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x30e0d1c5
- (void)postUpdatesIfNecessary;	// 0x30e0d405
// declared property setter: - (void)setSubscriberCellularProvider:(id)provider;	// 0x30e0d4f9
// declared property setter: - (void)setSubscriberCellularProviderDidUpdateNotifier:(id)updateNotifier;	// 0x30e0cb81
- (BOOL)setUpServerConnection;	// 0x30e0c811
// declared property getter: - (id)subscriberCellularProvider;	// 0x30e0d4e5
// declared property getter: - (id)subscriberCellularProviderDidUpdateNotifier;	// 0x30e0cb71
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL *)updateNetworkInfoAnd;	// 0x30e0ce79
@end

