/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

@interface BRDarwinNotificationTranslator : BRSingleton {
@private
	NSMutableDictionary *_registrations;	// 4 = 0x4
}
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x33b4ae09
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x33b4ae41
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x33b4adcd
+ (void)setSingleton:(id)singleton;	// 0x33b4ac4d
+ (id)singleton;	// 0x33b4ac3d
- (id)init;	// 0x33b4ac5d
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x33b4b14d
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x33b4aea9
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x33b4b261
- (id)_registrationForToken:(int)token;	// 0x33b4b2a9
- (void)dealloc;	// 0x33b4acc1
@end

