/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSNotificationCenter.h"


@interface NSDistributedNotificationCenter : NSNotificationCenter {
}
@property(assign) BOOL suspended;	// G=0x32597845; S=0x32597829; converted property
+ (id)defaultCenter;	// 0x32597159
+ (id)notificationCenterForType:(id)type;	// 0x32597175
- (id)init;	// 0x32597235
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;	// 0x32597411
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object suspensionBehavior:(unsigned)behavior;	// 0x32597261
- (id)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id)block;	// 0x3259767d
- (id)addObserverForName:(id)name object:(id)object suspensionBehavior:(unsigned)behavior queue:(id)queue usingBlock:(id)block;	// 0x3259743d
- (void)postNotification:(id)notification;	// 0x32597775
- (void)postNotificationName:(id)name object:(id)object;	// 0x325977dd
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x32597805
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info deliverImmediately:(BOOL)immediately;	// 0x32597749
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info options:(unsigned)options;	// 0x325976e9
- (void)removeObserver:(id)observer name:(id)name object:(id)object;	// 0x325976b1
// converted property setter: - (void)setSuspended:(BOOL)suspended;	// 0x32597829
// converted property getter: - (BOOL)suspended;	// 0x32597845
@end

