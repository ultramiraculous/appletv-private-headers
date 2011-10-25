/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "SSDownloadQueueObserver.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ISNetworkObserver : NSObject <ISSingleton, SSDownloadQueueObserver> {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	double _lastNetworkTypeChangeTime;	// 8 = 0x8
	int _networkUsageCount;	// 16 = 0x10
	int _networkType;	// 20 = 0x14
	NSMutableSet *_observedDownloadQueues;	// 24 = 0x18
	SCNetworkReachabilityRef _reachability;	// 28 = 0x1c
}
@property(readonly, assign) NSString *connectionTypeHeader;	// G=0x33bc3759; 
@property(readonly, assign) double lastNetworkTypeChangeTime;	// G=0x33bc37f9; 
@property(assign) int networkType;	// G=0x33bc39cd; S=0x33bc3aa9; 
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;	// G=0x33bc3a9d; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x33bc38f1; 
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;	// G=0x33bc3aa1; 
+ (void)set3GEnabled:(BOOL)enabled;	// 0x33bc3ea9
+ (void)setAirplaneModeEnabled:(BOOL)enabled;	// 0x33bc3ead
+ (void)setSharedInstance:(id)instance;	// 0x33bc3681
+ (void)setWiFiEnabled:(BOOL)enabled;	// 0x33bc3eb1
+ (id)sharedInstance;	// 0x33bc36d5
- (id)init;	// 0x33bc32f5
- (int)_currentNetworkType;	// 0x33bc3d7d
- (void)_dataStatusChangedNotification:(id)notification;	// 0x33bc3c7d
- (int)_networkTypeFromDataIndicator:(id)dataIndicator;	// 0x33bc3d81
- (BOOL)_ntsIsUsingNetwork;	// 0x33bc3d85
- (void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;	// 0x33bc3d89
- (void)_postUsageChangedToValue:(BOOL)value;	// 0x33bc3d8d
- (void)_reloadNetworkType;	// 0x33bc3d91
- (int)_setNetworkType:(int)type;	// 0x33bc3e4d
- (void)_telephonyObserverAvailableNotification:(id)notification;	// 0x33bc3cfd
- (void)beginObservingDownloadQueue:(id)queue;	// 0x33bc3751
- (void)beginUsingNetwork;	// 0x33bc3755
// declared property getter: - (id)connectionTypeHeader;	// 0x33bc3759
- (id)copyValueForCarrierBundleKey:(id)carrierBundleKey;	// 0x33bc37ed
- (void)dealloc;	// 0x33bc35dd
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0x33bc3c25
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0x33bc3c29
- (void)endObservingDownloadQueue:(id)queue;	// 0x33bc37f1
- (void)endUsingNetwork;	// 0x33bc37f5
// declared property getter: - (BOOL)isUsingNetwork;	// 0x33bc38f1
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x33bc3aa1
// declared property getter: - (double)lastNetworkTypeChangeTime;	// 0x33bc37f9
// declared property getter: - (int)networkType;	// 0x33bc39cd
- (void)reloadNetworkType;	// 0x33bc3aa5
// declared property setter: - (void)setNetworkType:(int)type;	// 0x33bc3aa9
// declared property getter: - (BOOL)shouldShowCellularAutomaticDownloadsSwitch;	// 0x33bc3a9d
@end

