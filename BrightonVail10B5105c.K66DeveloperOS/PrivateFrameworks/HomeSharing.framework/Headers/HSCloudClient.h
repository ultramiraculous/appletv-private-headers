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
	long long _preferredVideoQuality;	// 36 = 0x24
	id _updateInProgressChangedHandler;	// 44 = 0x2c
}
@property(copy, nonatomic) id updateInProgressChangedHandler;	// G=0x3561155d; S=0x35611571; @synthesize=_updateInProgressChangedHandler
- (id)init;	// 0x3560dad9
- (id)initWithConfiguration:(id)configuration;	// 0x3560daed
- (void)_performBlockOnMainThread:(id)thread;	// 0x35611331
- (void)_sendConfigurationToDaemon;	// 0x35611355
- (void)_serverDidLaunch;	// 0x35611461
- (void)_serverUpdateInProgressDidChange;	// 0x356114d5
- (void)addGeniusPlaylistWithName:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids3 completionHandler:(id)handler;	// 0x3560e01d
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x3560dea1
- (void)authenticateWithCompletionHandler:(id)completionHandler;	// 0x3560e1e1
- (void)becomeActive;	// 0x3560e6ad
- (void)dealloc;	// 0x3560dda5
- (void)deauthenticateWithCompletionHandler:(id)completionHandler;	// 0x3560f0fd
- (void)downloadGeniusDataWithCompletionHandler:(id)completionHandler;	// 0x3560f2ed
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x35610f95
- (void)isAuthenticatedWithCompletionHandler:(id)completionHandler;	// 0x3560f4dd
- (void)isAuthenticatedWithQueue:(id)queue completionHandler:(id)handler;	// 0x3560f4fd
- (void)isExpiredWithCompletionHandler:(id)completionHandler;	// 0x3560f67d
- (void)loadArtworkDataForAdamID:(unsigned long long)adamID;	// 0x3560fb39
- (void)loadArtworkDataForAdamID:(unsigned long long)adamID completionHandler:(id)handler;	// 0x35610169
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID;	// 0x3560f7bd
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x3560feb5
- (void)loadGeniusItemsForAdamID:(unsigned long long)adamID completionHandler:(id)handler;	// 0x3561041d
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x35610675
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)completionHandler;	// 0x356108cd
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x35610a25
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x35610c41
- (void)resetConfiguration:(id)configuration;	// 0x35610d79
- (void)resignActive;	// 0x35610dbd
- (void)setDaemonConfiguration:(unsigned long long)configuration;	// 0x35610dd5
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x35610dfd
- (void)setPreferredVideoQuality:(long long)quality;	// 0x35610de9
// declared property setter: - (void)setUpdateInProgressChangedHandler:(id)progressChangedHandler;	// 0x35611571
// declared property getter: - (id)updateInProgressChangedHandler;	// 0x3561155d
- (void)updateJaliscoLibraryWithCompletionHandler:(id)completionHandler;	// 0x3560eea9
- (void)updateJaliscoLibraryWithReason:(long long)reason completionHandler:(id)handler;	// 0x3560ec5d
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids queue:(id)queue completionHandler:(id)handler;	// 0x35611131
- (void)updateSagaLibraryWithCompletionHandler:(id)completionHandler;	// 0x3560eec9
- (void)uploadItemProperties;	// 0x356110d9
@end
