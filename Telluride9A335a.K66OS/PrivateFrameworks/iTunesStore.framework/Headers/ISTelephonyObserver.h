/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISSingleton.h"
#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSRecursiveLock;

@interface ISTelephonyObserver : NSObject <ISSingleton> {
	CTServerConnectionRef _connection;	// 4 = 0x4
	CFMachPortRef _connectionPort;	// 8 = 0x8
	CFRunLoopSourceRef _connectionRunLoopSource;	// 12 = 0xc
	NSString *_dataStatusIndicator;	// 16 = 0x10
	NSRecursiveLock *_lock;	// 20 = 0x14
	NSString *_operatorName;	// 24 = 0x18
	CFRunLoopRef _runLoop;	// 28 = 0x1c
}
@property(readonly, assign) NSString *dataStatusIndicator;	// G=0x30f247a9; 
@property(readonly, assign) NSString *operatorName;	// G=0x30f24875; 
+ (void)setSharedInstance:(id)instance;	// 0x30f2459d
+ (id)sharedInstance;	// 0x30f245f1
- (id)init;	// 0x30f244c5
- (BOOL)_establishServerConnection;	// 0x30f24925
- (void)_handleMessage:(void *)message withSize:(long)size;	// 0x30f24bb1
- (void)_handleNotificationWithName:(CFStringRef)name userInfo:(CFDictionaryRef)info;	// 0x30f24c09
- (void)_handleServerInvalidated;	// 0x30f24d65
- (void)_invalidateServerConnection;	// 0x30f24a89
- (void)_registerForNotifications;	// 0x30f24b69
- (BOOL)beginObservingOnRunLoop:(CFRunLoopRef)loop;	// 0x30f24665
// declared property getter: - (id)dataStatusIndicator;	// 0x30f247a9
- (void)dealloc;	// 0x30f24529
// declared property getter: - (id)operatorName;	// 0x30f24875
@end

