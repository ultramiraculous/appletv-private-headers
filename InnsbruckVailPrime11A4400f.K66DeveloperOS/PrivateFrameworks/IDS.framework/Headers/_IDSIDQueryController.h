/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library
#import "IDSDaemonListenerProtocol.h"

@class NSMapTable, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
	NSMutableDictionary *_listeners;	// 4 = 0x4
	NSMutableDictionary *_idStatusCache;	// 8 = 0x8
	NSMutableDictionary *_transactionIDToBlockMap;	// 12 = 0xc
	NSString *_rerouteService;	// 16 = 0x10
	NSObject<OS_xpc_object> *_connection;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_queue;	// 28 = 0x1c
	NSString *_serviceToken;	// 32 = 0x20
	NSMapTable *_delegateToInfo;	// 36 = 0x24
	NSMutableDictionary *_listenerIDToServicesMap;	// 40 = 0x28
	id _delegateContext;	// 44 = 0x2c
}
- (id)init;	// 0x311773b1
- (id)initWithDelegateContext:(id)delegateContext queue:(id)queue;	// 0x31177449
- (void)IDQueryCompletedWithFromURI:(id)uri idStatusUpdates:(id)updates service:(id)service success:(BOOL)success error:(id)error;	// 0x3115f94d
- (void)___oldDealloc;	// 0x3115f5c5
- (id)__sendMessage:(id)message queue:(id)queue reply:(id)reply failBlock:(id)block waitForReply:(BOOL)reply5;	// 0x311767a5
- (id)_cacheForService:(id)service;	// 0x311778d5
- (id)_cachedStatusForDestination:(id)destination service:(id)service;	// 0x311778f5
- (void)_callDelegatesWithBlock:(id)block;	// 0x3115f78d
- (void)_callDelegatesWithBlock:(id)block delegateMap:(id)map;	// 0x31177f21
- (void)_connect;	// 0x3115f901
- (void)_connectToQueryService;	// 0x31174e95
- (int)_currentCachedIDStatusForDestination:(id)destination service:(id)service listenerID:(id)anId;	// 0x3117921d
- (id)_delegateMapForListenerID:(id)listenerID service:(id)service;	// 0x31178085
- (void)_disconnectFromQueryService;	// 0x31174ce9
- (void)_disconnectedFromQueryService;	// 0x31174e01
- (BOOL)_flushQueryCacheForService:(id)service;	// 0x311794a9
- (BOOL)_hasCacheForService:(id)service;	// 0x31179205
- (void)_idStatusForDestinations:(id)destinations service:(id)service listenerID:(id)anId allowRenew:(BOOL)renew completionBlock:(id)block;	// 0x311780e9
- (BOOL)_isListenerWithID:(id)anId listeningToService:(id)service;	// 0x311775e9
- (void)_purgeIDStatusCache;	// 0x31177d59
- (void)_purgeIDStatusCacheAfter:(double)after;	// 0x31177b41
- (BOOL)_refreshIDStatusForDestinations:(id)destinations service:(id)service listenerID:(id)anId allowRefresh:(BOOL)refresh queue:(id)queue completionBlock:(id)block;	// 0x31178bc1
- (void)_requestCacheForService:(id)service completionBlock:(id)block;	// 0x311751c5
- (void)_requestCachedStatusForDestinations:(id)destinations service:(id)service listenerID:(id)anId completionBlock:(id)block;	// 0x31175819
- (void)_requestStatusForDestinations:(id)destinations service:(id)service listenerID:(id)anId completionBlock:(id)block;	// 0x31175fa1
- (id)_reroutedPrototypeService:(id)service;	// 0x31177e6d
- (id)_squishFromURIFromIDStatusCache:(id)idstatusCache service:(id)service;	// 0x31177695
- (void)_updateCacheWithDictionary:(id)dictionary service:(id)service;	// 0x31177969
- (BOOL)_warmupQueryCacheForService:(id)service;	// 0x31179245
- (void)addDelegate:(id)delegate forService:(id)service listenerID:(id)anId queue:(id)queue;	// 0x311795e1
- (void)addDelegate:(id)delegate queue:(id)queue;	// 0x3115f649
- (void)addListenerID:(id)anId forService:(id)service;	// 0x3115fec1
- (BOOL)currentIDStatusForDestination:(id)destination service:(id)service listenerID:(id)anId queue:(id)queue completionBlock:(id)block;	// 0x3117910d
- (BOOL)currentIDStatusForDestinations:(id)destinations service:(id)service listenerID:(id)anId queue:(id)queue completionBlock:(id)block;	// 0x311790d5
- (void)daemonDisconnected;	// 0x3115feb1
- (void)dealloc;	// 0x31177521
- (BOOL)refreshIDStatusForDestination:(id)destination service:(id)service listenerID:(id)anId queue:(id)queue completionBlock:(id)block;	// 0x31178fdd
- (BOOL)refreshIDStatusForDestinations:(id)destinations service:(id)service listenerID:(id)anId queue:(id)queue completionBlock:(id)block;	// 0x31178fa5
- (void)removeDelegate:(id)delegate;	// 0x3115f735
- (void)removeDelegate:(id)delegate forService:(id)service listenerID:(id)anId;	// 0x31179ab5
- (BOOL)removeListenerID:(id)anId forService:(id)service;	// 0x3116022d
@end

