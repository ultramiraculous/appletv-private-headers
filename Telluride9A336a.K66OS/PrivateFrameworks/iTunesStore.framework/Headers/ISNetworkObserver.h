/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "ISSingleton.h"
#import <NSObject.h> // Unknown library
#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSString;

@interface ISNetworkObserver : NSObject <ISSingleton, SSDownloadQueueObserver> {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	BOOL _isCellularRestricted;	// 8 = 0x8
	double _lastNetworkTypeChangeTime;	// 12 = 0xc
	int _networkUsageCount;	// 20 = 0x14
	int _networkType;	// 24 = 0x18
	NSMutableSet *_observedDownloadQueues;	// 28 = 0x1c
	SCNetworkReachabilityRef _reachability;	// 32 = 0x20
}
@property(readonly, assign, getter=isCellularDataRestricted) BOOL cellularDataRestricted;	// G=0x35ec7195; 
@property(readonly, assign) NSString *connectionTypeHeader;	// G=0x35ec6ced; 
@property(readonly, assign) double lastNetworkTypeChangeTime;	// G=0x35ec73ed; 
@property(assign) int networkType;	// G=0x35ec74e5; S=0x35ec76d9; 
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;	// G=0x35ec75b5; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x35ec7311; 
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;	// G=0x35ec7625; 
+ (void)set3GEnabled:(BOOL)enabled;	// 0x35ec7fcd
+ (void)setAirplaneModeEnabled:(BOOL)enabled;	// 0x35ec7fd1
+ (void)setSharedInstance:(id)instance;	// 0x35ec6849
+ (void)setWiFiEnabled:(BOOL)enabled;	// 0x35ec7fd5
+ (id)sharedInstance;	// 0x35ec689d
- (id)init;	// 0x35ec627d
- (int)_currentNetworkType;	// 0x35ec79ad
- (void)_dataStatusChangedNotification:(id)notification;	// 0x35ec78ad
- (int)_networkTypeFromDataIndicator:(id)dataIndicator;	// 0x35ec7a55
- (BOOL)_ntsIsUsingNetwork;	// 0x35ec7b09
- (void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;	// 0x35ec7be5
- (void)_postUsageChangedToValue:(BOOL)value;	// 0x35ec7ccd
- (void)_reloadCellularRestriction;	// 0x35ec7d8d
- (void)_reloadNetworkType;	// 0x35ec7eb5
- (int)_setNetworkType:(int)type;	// 0x35ec7f71
- (void)_telephonyObserverAvailableNotification:(id)notification;	// 0x35ec792d
- (void)beginObservingDownloadQueue:(id)queue;	// 0x35ec6919
- (void)beginUsingNetwork;	// 0x35ec6b6d
// declared property getter: - (id)connectionTypeHeader;	// 0x35ec6ced
- (id)copyValueForCarrierBundleKey:(id)carrierBundleKey;	// 0x35ec6de5
- (void)dealloc;	// 0x35ec66e9
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0x35ec7855
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0x35ec7859
- (void)endObservingDownloadQueue:(id)queue;	// 0x35ec6df5
- (void)endUsingNetwork;	// 0x35ec7011
// declared property getter: - (BOOL)isCellularDataRestricted;	// 0x35ec7195
// declared property getter: - (BOOL)isUsingNetwork;	// 0x35ec7311
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x35ec7625
// declared property getter: - (double)lastNetworkTypeChangeTime;	// 0x35ec73ed
// declared property getter: - (int)networkType;	// 0x35ec74e5
- (void)reloadNetworkType;	// 0x35ec7659
// declared property setter: - (void)setNetworkType:(int)type;	// 0x35ec76d9
// declared property getter: - (BOOL)shouldShowCellularAutomaticDownloadsSwitch;	// 0x35ec75b5
@end

