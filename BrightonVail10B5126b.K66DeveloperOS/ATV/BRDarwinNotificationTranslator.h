/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRDarwinNotificationTranslator : BRSingleton {
	NSMutableDictionary *_registrations;	// 4 = 0x4
}
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x399b4d
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x399b85
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x399b11
+ (void)setSingleton:(id)singleton;	// 0x399979
+ (id)singleton;	// 0x399969
- (id)init;	// 0x399989
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x399ed9
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x399bf1
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x399fe9
- (id)_registrationForToken:(int)token;	// 0x39a031
- (void)dealloc;	// 0x3999ed
@end

