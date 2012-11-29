/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSXPCListenerDelegate.h"
#import <NSObject.h> // Unknown library
#import "NSProgressRegistrar.h"

@class NSFileAccessNode, NSMutableDictionary;
@protocol OS_dispatch_queue;

@protocol NSProgressRegistrar
- (oneway void)addPublisher:(id)publisher forID:(id)anId acknowledgementAppBundleIDs:(id)ids fileURL:(id)url;
- (oneway void)addSubscriber:(id)subscriber forID:(id)anId appBundleID:(id)anId3 fileURL:(id)url;
- (oneway void)observePublisherForID:(id)anId value:(id)value forKey:(id)key inUserInfo:(BOOL)userInfo;
- (oneway void)removePublisherForID:(id)anId;
- (oneway void)removeSubscriberForID:(id)anId;
@end

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSFileAccessNode *_rootFileAccessNode;	// 8 = 0x8
	NSMutableDictionary *_publishersAndSubscribersByID;	// 12 = 0xc
}
- (id)initWithQueue:(id)queue rootFileAccessNode:(id)node;	// 0x347a1491
- (oneway void)addPublisher:(id)publisher forID:(id)anId acknowledgementAppBundleIDs:(id)ids fileURL:(id)url;	// 0x347a1651
- (oneway void)addSubscriber:(id)subscriber forID:(id)anId appBundleID:(id)anId3 fileURL:(id)url;	// 0x347a1b91
- (void)dealloc;	// 0x347a1535
- (void)finalize;	// 0x347a15ad
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;	// 0x347a15f1
- (oneway void)observePublisherForID:(id)anId value:(id)value forKey:(id)key inUserInfo:(BOOL)userInfo;	// 0x347a192d
- (oneway void)removePublisherForID:(id)anId;	// 0x347a1a75
- (oneway void)removeSubscriberForID:(id)anId;	// 0x347a1e49
@end
