/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSLocalNotificationClient : NSObject {
}
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier;	// 0x334b69f9
+ (void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace optionalBundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x334b6919
+ (void)cancelAllLocalNotifications;	// 0x334b6aad
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x334b6c5d
+ (void)cancelLocalNotification:(id)notification;	// 0x334b6a69
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x334b6bc5
+ (void)cancelLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x334b6c0d
+ (id)getPendingNotification;	// 0x334b6891
+ (void)scheduleLocalNotification:(id)notification;	// 0x334b6a25
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier;	// 0x334b6b2d
+ (void)scheduleLocalNotification:(id)notification bundleIdentifier:(id)identifier waitUntilDone:(BOOL)done;	// 0x334b6b75
+ (id)scheduledLocalNotifications;	// 0x334b6b19
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)bundleIdentifier;	// 0x334b6cc9
+ (void)setScheduledLocalNotifications:(id)notifications;	// 0x334b6af5
+ (void)setScheduledLocalNotifications:(id)notifications bundleIdentifier:(id)identifier;	// 0x334b6ca5
@end

