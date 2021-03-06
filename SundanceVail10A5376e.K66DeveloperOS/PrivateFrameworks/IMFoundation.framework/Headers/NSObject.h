/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (FezAdditions)
- (BOOL)isNull;	// 0x36ea0ce1
@end

@interface NSObject (DelayedPerformAdditions)
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay ignoreMenuTracking:(BOOL)tracking;	// 0x36ea83a9
@end

@interface NSObject (_IMSupportMessagingProxy)
- (id)__im_afterDelay:(double)delay;	// 0x36ea9875
- (id)__im_afterDelay:(double)delay modes:(id)modes;	// 0x36ea98cd
- (id)__im_getInvocation:(id *)invocation;	// 0x36ea9925
- (id)__im_onDetachedThread;	// 0x36ea97f9
- (id)__im_onMainThread;	// 0x36ea9781
- (id)__im_onMainThreadIfNecessary;	// 0x36ea97bd
- (id)__im_onThread:(id)thread;	// 0x36ea9861
- (id)__im_onThread:(id)thread immediateForMatchingThread:(BOOL)matchingThread;	// 0x36ea980d
@end

