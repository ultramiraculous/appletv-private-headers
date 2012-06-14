/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSLocalNotificationClient : NSObject {
}
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier;	// 0x34d10d5d
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x34d10c7d
+ (void)cancelAllLocalNotifications;	// 0x34d10e11
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x34d10fc1
+ (void)cancelLocalNotification:(id)notification;	// 0x34d10dcd
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x34d10f29
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x34d10f71
+ (id)getPendingNotification;	// 0x34d10bf5
+ (void)scheduleLocalNotification:(id)notification;	// 0x34d10d89
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x34d10e91
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x34d10ed9
+ (id)scheduledLocalNotifications;	// 0x34d10e7d
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x34d1102d
+ (void)setScheduledLocalNotifications:(id)notifications;	// 0x34d10e59
+ (void)setScheduledLocalNotifications:(id)notifications bundleIdentifier:(id)identifier;	// 0x34d11009
@end
