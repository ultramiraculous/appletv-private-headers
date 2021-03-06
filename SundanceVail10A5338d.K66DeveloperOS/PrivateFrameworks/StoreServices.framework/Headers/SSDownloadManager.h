/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, SSXPCConnection, SSDownloadManagerOptions, NSMutableSet;
@protocol OS_dispatch_queue;

@interface SSDownloadManager : NSObject {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	NSArray *_activeDownloads;	// 8 = 0x8
	BOOL _activeDownloadsChanged;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
	SSXPCConnection *_connection;	// 20 = 0x14
	NSArray *_downloads;	// 24 = 0x18
	BOOL _downloadsChanged;	// 28 = 0x1c
	BOOL _isUsingNetwork;	// 29 = 0x1d
	SSXPCConnection *_observerConnection;	// 32 = 0x20
	NSObject<OS_dispatch_queue> *_observerQueue;	// 36 = 0x24
	CFArrayRef _observers;	// 40 = 0x28
	SSDownloadManagerOptions *_options;	// 44 = 0x2c
	NSMutableSet *_removedDownloads;	// 48 = 0x30
}
@property(readonly, assign) NSArray *activeDownloads;	// G=0x3236d615; 
@property(readonly, assign) NSArray *downloads;	// G=0x3236df51; 
@property(readonly, assign) SSDownloadManagerOptions *managerOptions;	// G=0x3236e3d5; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x3236e305; 
+ (id)EBookDownloadKinds;	// 0x3236ea11
+ (id)EBookDownloadManager;	// 0x3236e7a1
+ (id)IPodDownloadKinds;	// 0x3236ea45
+ (id)IPodDownloadManager;	// 0x3236e871
+ (void)_sendGlobalHandler:(id)handler;	// 0x3236f4c9
+ (void)_triggerDownloads;	// 0x3236ef99
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)bundleIdentifiers;	// 0x3236eb4d
+ (void)removePersistenceIdentifier:(id)identifier;	// 0x3236d509
+ (void)retryAllRestoreDownloads;	// 0x3236ebf1
+ (void)setDownloadHandler:(id)handler;	// 0x3236d5ad
+ (id)softwareDownloadKinds;	// 0x3236ecad
+ (id)softwareDownloadManager;	// 0x3236e941
- (id)initWithDownloadKinds:(id)downloadKinds;	// 0x3236d1d1
- (id)initWithManagerOptions:(id)managerOptions;	// 0x3236d249
- (id)_XPCConnection;	// 0x3236f4b9
- (void)_connectAsObserver;	// 0x3236f589
- (id)_copyDownloadKindsUsingNetwork;	// 0x3236f6d5
- (id)_copyDownloads;	// 0x3236f901
- (id)_copyDownloadsForMessage:(long long)message downloadIDs:(id)ids;	// 0x3236fa7d
- (void)_finishDownloads:(id)downloads;	// 0x3236f059
- (void)_handleDownloadKindsUsingNetworkChanged:(id)changed;	// 0x3236fdc9
- (void)_handleDownloadStatesChanged:(id)changed;	// 0x32370975
- (void)_handleDownloadsChanged:(id)changed;	// 0x3236fe71
- (void)_handleDownloadsRemoved:(id)removed;	// 0x32370619
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x3237115d
- (void)_handleReply:(id)reply forDownloads:(id)downloads message:(id)message isRetry:(BOOL)retry block:(id)block;	// 0x323712c9
- (id)_initSSDownloadManager;	// 0x3236d051
- (void)_insertDownloads:(id)downloads before:(id)before after:(id)after completionBlock:(id)block;	// 0x32371529
- (void)_loadDownloadKindsUsingNetwork;	// 0x323717d1
- (void)_moveDownload:(id)download before:(id)before after:(id)after completionBlock:(id)block;	// 0x3237190d
- (id)_newOptionsDictionary;	// 0x323719c1
- (void)_reloadIsUsingNetworkWithDownloadKinds:(id)downloadKinds;	// 0x32371a79
- (void)_sendMessage:(id)message withCompletionBlock:(id)completionBlock;	// 0x32371af9
- (void)_sendMessageToObservers:(SEL)observers;	// 0x32371c65
- (void)_sendObserverConnection;	// 0x32371e99
- (void)_willFinishDownloads:(id)downloads;	// 0x3236f26d
// declared property getter: - (id)activeDownloads;	// 0x3236d615
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x3236d8ad
- (void)addObserver:(id)observer;	// 0x3236dcc5
- (BOOL)canCancelDownload:(id)download;	// 0x3236dd95
- (void)cancelAllDownloadsWithCompletionBlock:(id)completionBlock;	// 0x3236ddad
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x3236de29
- (void)dealloc;	// 0x3236d30d
// declared property getter: - (id)downloads;	// 0x3236df51
- (void)finishDownloads:(id)downloads;	// 0x3236e0f1
- (void)getDownloadsUsingBlock:(id)block;	// 0x3236e125
- (void)insertDownloads:(id)downloads afterDownload:(id)download completionBlock:(id)block;	// 0x3236e2bd
- (void)insertDownloads:(id)downloads beforeDownload:(id)download completionBlock:(id)block;	// 0x3236e2e1
// declared property getter: - (BOOL)isUsingNetwork;	// 0x3236e305
// declared property getter: - (id)managerOptions;	// 0x3236e3d5
- (void)moveDownload:(id)download afterDownload:(id)download2 completionBlock:(id)block;	// 0x3236e40d
- (void)moveDownload:(id)download beforeDownload:(id)download2 completionBlock:(id)block;	// 0x3236e431
- (void)pauseDownloads:(id)downloads completionBlock:(id)block;	// 0x3236e455
- (void)reloadFromServer;	// 0x3236ece1
- (void)removeObserver:(id)observer;	// 0x3236e6a5
- (void)resumeDownloads:(id)downloads completionBlock:(id)block;	// 0x3236e57d
- (void)setDownloads:(id)downloads completionBlock:(id)block;	// 0x3236e781
- (void)setDownloads:(id)downloads forKinds:(id)kinds completionBlock:(id)block;	// 0x3236ed31
@end

