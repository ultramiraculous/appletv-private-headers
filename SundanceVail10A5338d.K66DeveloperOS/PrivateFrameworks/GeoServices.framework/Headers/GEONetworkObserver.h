/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSLock;

@interface GEONetworkObserver : NSObject {
	NSLock *_lock;	// 4 = 0x4
	unsigned _networkReachability;	// 8 = 0x8
	SCNetworkReachabilityRef _networkReach;	// 12 = 0xc
	CFDictionaryRef _networkObservers;	// 16 = 0x10
	BOOL _networkNotified;	// 20 = 0x14
	BOOL _networkReachable;	// 21 = 0x15
}
@property(readonly, assign, getter=isNetworkReachable) BOOL networkReachable;	// G=0x324a9fc1; converted property
+ (id)sharedNetworkObserver;	// 0x324a9a09
- (id)init;	// 0x324a98fd
- (void)_networkObserversInitialize;	// 0x324a9a75
- (void)_networkReachableCallBack:(unsigned)back;	// 0x324a9c01
- (void)_networkReachableFirstCallBack:(id)back;	// 0x324a9f91
- (void)addNetworkReachableObserver:(id)observer selector:(SEL)selector;	// 0x324aa02d
- (void)dealloc;	// 0x324a9961
- (BOOL)isCellConnection;	// 0x324aa111
// converted property getter: - (BOOL)isNetworkReachable;	// 0x324a9fc1
- (void)removeNetworkReachableObserver:(id)observer;	// 0x324aa0a1
@end

