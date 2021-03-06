/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, HSConnectionConfiguration;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HSCloudClient : NSObject {
	BOOL _active;	// 4 = 0x4
	HSConnectionConfiguration *_configuration;	// 8 = 0x8
	NSObject<OS_xpc_object> *_connection;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
	unsigned long long _daemonConfiguration;	// 20 = 0x14
	NSMutableSet *_pendingArtworkRequests;	// 28 = 0x1c
	NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;	// 32 = 0x20
	id _updateInProgressChangedHandler;	// 36 = 0x24
}
@property(copy, nonatomic) id updateInProgressChangedHandler;	// G=0x355227c9; S=0x355227dd; @synthesize=_updateInProgressChangedHandler
- (id)init;	// 0x3551f929
- (id)initWithConfiguration:(id)configuration;	// 0x3551f93d
- (void)_performBlockOnMainThread:(id)thread;	// 0x35522601
- (void)_sendConfigurationToDaemon;	// 0x35522625
- (void)_serverDidLaunch;	// 0x355226cd
- (void)_serverUpdateInProgressDidChange;	// 0x35522741
- (void)addGeniusPlaylistWithName:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids3 completionHandler:(id)handler;	// 0x3551fe0d
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x3551fc91
- (void)authenticateWithCompletionHandler:(id)completionHandler;	// 0x3551ffd1
- (void)becomeActive;	// 0x35520495
- (void)dealloc;	// 0x3551fbad
- (void)deauthenticateWithCompletionHandler:(id)completionHandler;	// 0x35520c81
- (void)downloadGeniusDataWithCompletionHandler:(id)completionHandler;	// 0x35520e6d
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x35522269
- (void)isAuthenticatedWithCompletionHandler:(id)completionHandler;	// 0x35521059
- (void)isAuthenticatedWithQueue:(id)queue completionHandler:(id)handler;	// 0x35521079
- (void)isExpiredWithCompletionHandler:(id)completionHandler;	// 0x355211f9
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID;	// 0x35521339
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x355216b1
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x35521961
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)completionHandler;	// 0x35521bb5
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x35521d0d
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x35521f29
- (void)resetConfiguration:(id)configuration;	// 0x35522061
- (void)resignActive;	// 0x355220a5
- (void)setDaemonConfiguration:(unsigned long long)configuration;	// 0x355220bd
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x355220d1
// declared property setter: - (void)setUpdateInProgressChangedHandler:(id)progressChangedHandler;	// 0x355227dd
// declared property getter: - (id)updateInProgressChangedHandler;	// 0x355227c9
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids queue:(id)queue completionHandler:(id)handler;	// 0x35522401
- (void)updateSagaLibraryWithCompletionHandler:(id)completionHandler;	// 0x35520a4d
- (void)uploadItemProperties;	// 0x355223a9
@end

