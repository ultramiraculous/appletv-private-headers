/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSLocalNotificationClient : NSObject {
}
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier;	// 0x3466d221
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x3466d581
+ (void)cancelAllLocalNotifications;	// 0x3466d2d9
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x3466d48d
+ (void)cancelLocalNotification:(id)notification;	// 0x3466d291
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x3466d3f9
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x3466d441
+ (id)getPendingNotification;	// 0x3466d4f9
+ (void)scheduleLocalNotification:(id)notification;	// 0x3466d24d
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x3466d365
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x3466d3ad
+ (id)scheduledLocalNotifications;	// 0x3466d351
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x3466d661
+ (void)setScheduledLocalNotifications:(id)notifications;	// 0x3466d32d
+ (void)setScheduledLocalNotifications:(id)notifications bundleIdentifier:(id)identifier;	// 0x3466d4d5
@end
