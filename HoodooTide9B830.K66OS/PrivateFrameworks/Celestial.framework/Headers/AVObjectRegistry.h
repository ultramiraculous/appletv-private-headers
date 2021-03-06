/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSRecursiveLock;

@interface AVObjectRegistry : NSObject {
	NSMutableSet *_registeredObjects;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
}
+ (id)defaultObjectRegistry;	// 0x30680ae1
- (id)init;	// 0x30680b29
- (void)dealloc;	// 0x30694975
- (void)finishedRelease;	// 0x30694b0d
- (BOOL)isObjectRegistered:(id)registered;	// 0x30688179
- (void)registerObject:(id)object;	// 0x30680bb1
- (void)registerObjectForSafeRetain:(id)safeRetain;	// 0x306949d5
- (void)safeInvokeWithDescription:(id)description;	// 0x30688ed1
- (void)safeInvokeWithDescriptionDelayed:(id)descriptionDelayed;	// 0x3068a031
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x306867f9
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x30694c11
- (void)safePerformOnThread:(id)thread target:(id)target selector:(SEL)selector object:(id)object;	// 0x3068c1cd
- (void)safePerformTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x30689f29
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x3068e401
- (void)safePostDelayedNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x30694dd1
- (void)safePostNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x306899b1
- (void)safePostNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x30694d29
- (BOOL)safeRetainObject:(id)object;	// 0x30694a61
- (BOOL)shouldReleaseObject:(id)object requireThread:(id)thread;	// 0x30694b2d
- (void)unregisterObject:(id)object;	// 0x3068b6a1
@end

