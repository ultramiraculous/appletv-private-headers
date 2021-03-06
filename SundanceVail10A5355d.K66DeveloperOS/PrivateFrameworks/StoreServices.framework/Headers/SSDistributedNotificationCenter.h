/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, SSXPCServer;
@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenter : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSMutableArray *_observers;	// 8 = 0x8
	NSString *_portName;	// 12 = 0xc
	SSXPCServer *_server;	// 16 = 0x10
}
@property(readonly, assign) NSString *namedPort;	// G=0x31944901; 
- (id)init;	// 0x31944319
- (id)initWithNamedPort:(id)namedPort;	// 0x3194432d
- (void)_distributedNotificationMessage:(id)message connection:(id)connection;	// 0x31944c8d
- (void)_sendRegistrationMessage:(long long)message name:(id)name;	// 0x31944e2d
- (id)addObserverForName:(id)name queue:(id)queue usingBlock:(id)block;	// 0x319444e9
- (void)dealloc;	// 0x31944431
// declared property getter: - (id)namedPort;	// 0x31944901
- (void)removeObserver:(id)observer;	// 0x31944939
@end

