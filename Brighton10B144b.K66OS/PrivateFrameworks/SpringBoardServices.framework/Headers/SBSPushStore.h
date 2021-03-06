/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSHashTable;

@interface SBSPushStore : NSObject {
	NSString *_bundleID;	// 4 = 0x4
	NSHashTable *_observers;	// 8 = 0x8
}
+ (id)allNotificationEnabledBundleIDs;	// 0x354694d5
+ (id)bundleIDsWithUpdatesSince:(id)updatesSince;	// 0x354693b5
+ (unsigned)effectivePushSettingsForBundleID:(id)bundleID;	// 0x35469599
+ (void)initialize;	// 0x35468d71
+ (id)notificationsForBundleID:(id)bundleID;	// 0x3546917d
+ (id)pushStoreForBundleID:(id)bundleID;	// 0x35468e25
+ (void)setEffectivePushSettings:(unsigned)settings forBundleID:(id)bundleID;	// 0x354695e9
+ (id)uniqueIdentifierForNotification:(id)notification;	// 0x35469051
- (id)initWithBundleID:(id)bundleID;	// 0x354690d5
- (void)addObserver:(id)observer;	// 0x35469635
- (void)dealloc;	// 0x354699a9
- (void)notifyPushDeliveryAccepted;	// 0x354698bd
- (void)notifyPushSettingsChanged;	// 0x354697fd
- (void)notifyPushStoreCleared;	// 0x3546973d
- (void)notifyPushStoreUpdated;	// 0x3546967d
- (void)removeObserver:(id)observer;	// 0x35469659
- (id)storedNotifications;	// 0x3546997d
@end

