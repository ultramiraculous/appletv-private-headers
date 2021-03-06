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
+ (id)allNotificationEnabledBundleIDs;	// 0x364aa7dd
+ (id)bundleIDsWithUpdatesSince:(id)updatesSince;	// 0x364aa6bd
+ (unsigned)effectivePushSettingsForBundleID:(id)bundleID;	// 0x364aa8a1
+ (void)initialize;	// 0x364aa079
+ (id)notificationsForBundleID:(id)bundleID;	// 0x364aa485
+ (id)pushStoreForBundleID:(id)bundleID;	// 0x364aa12d
+ (void)setEffectivePushSettings:(unsigned)settings forBundleID:(id)bundleID;	// 0x364aa8f1
+ (id)uniqueIdentifierForNotification:(id)notification;	// 0x364aa359
- (id)initWithBundleID:(id)bundleID;	// 0x364aa3dd
- (void)addObserver:(id)observer;	// 0x364aa93d
- (void)dealloc;	// 0x364aacb1
- (void)notifyPushDeliveryAccepted;	// 0x364aabc5
- (void)notifyPushSettingsChanged;	// 0x364aab05
- (void)notifyPushStoreCleared;	// 0x364aaa45
- (void)notifyPushStoreUpdated;	// 0x364aa985
- (void)removeObserver:(id)observer;	// 0x364aa961
- (id)storedNotifications;	// 0x364aac85
@end

