/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSBackoffManagerDelegate.h"
#import "MSASAssetUploaderDelegate.h"
#import "MSASAssetDownloaderDelegate.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, MSBackoffManager, MSImageScalingSpecification, MSASAssetUploader, MSASAssetDownloader, MSAlbumSharingDaemon, NSMutableArray, NSString, MSASPersonModel, MSASProtocol;
@protocol OS_dispatch_queue;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate> {
	int _commandState;	// 4 = 0x4
	MSASPersonModel *_model;	// 8 = 0x8
	NSString *_currentCommand;	// 12 = 0xc
	long long _currentCommandID;	// 16 = 0x10
	NSDictionary *_currentCommandParams;	// 24 = 0x18
	MSBackoffManager *_metadataBackoffManager;	// 28 = 0x1c
	MSBackoffManager *_MMCSBackoffManager;	// 32 = 0x20
	MSASAssetUploader *_assetUploader;	// 36 = 0x24
	MSASAssetDownloader *_assetDownloader;	// 40 = 0x28
	MSAlbumSharingDaemon *_daemon;	// 44 = 0x2c
	NSString *_personID;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	int _maxMetadataRetryCount;	// 56 = 0x38
	NSDictionary *_serverSideConfiguration;	// 60 = 0x3c
	NSString *_serverSideConfigurationVersion;	// 64 = 0x40
	NSString *_focusAlbumGUID;	// 68 = 0x44
	NSString *_focusAssetCollectionGUID;	// 72 = 0x48
	BOOL _isRetryingOutstandingActivities;	// 76 = 0x4c
	NSMutableArray *_assetInfoToReauthForDownload;	// 80 = 0x50
	id _stopHandlerBlock;	// 84 = 0x54
	MSASProtocol *_protocol;	// 88 = 0x58
	MSImageScalingSpecification *_derivativeImageScalingSpecification;	// 92 = 0x5c
	MSImageScalingSpecification *_thumbnailImageScalingSpecification;	// 96 = 0x60
	BOOL _hasShutDown;	// 100 = 0x64
	NSDictionary *_metadataBackoffManagerParameters;	// 104 = 0x68
	NSDictionary *_MMCSBackoffManagerParameters;	// 108 = 0x6c
	NSObject<OS_dispatch_queue> *_serverSideConfigQueue;	// 112 = 0x70
	NSObject<OS_dispatch_queue> *_memberQueue;	// 116 = 0x74
	NSObject<OS_dispatch_queue> *_eventQueue;	// 120 = 0x78
	id _postCommandCompletionBlock;	// 124 = 0x7c
	NSObject<OS_dispatch_queue> *_workQueue;	// 128 = 0x80
}
@property(retain, nonatomic) NSDictionary *MMCSBackoffManagerParameters;	// G=0x37cb7d51; S=0x37cb7d61; @synthesize=_MMCSBackoffManagerParameters
@property(retain, nonatomic, setter=_setAssetInfoToReauthForDownload:) NSMutableArray *_assetInfoToReauthForDownload;	// G=0x37cb7c05; S=0x37cb7c15; @synthesize
@property(copy, nonatomic, setter=_setStopHandlerBlock:) id _stopHandlerBlock;	// G=0x37cb7c3d; S=0x37cb7c51; @synthesize
@property(assign, nonatomic) __weak MSAlbumSharingDaemon *daemon;	// G=0x37cb7b19; S=0x37c8f71d; @synthesize=_daemon
@property(assign, nonatomic) __weak id delegate;	// G=0x37cb7b71; S=0x37cb7b91; @synthesize=_delegate
@property(retain, nonatomic) MSImageScalingSpecification *derivativeImageScalingSpecification;	// G=0x37cb7c89; S=0x37cb7c99; @synthesize=_derivativeImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;	// G=0x37cb7df9; S=0x37cb7e09; @synthesize=_eventQueue
@property(retain, nonatomic) NSString *focusAlbumGUID;	// G=0x37cb7bc5; S=0x37c8f841; @synthesize=_focusAlbumGUID
@property(retain, nonatomic) NSString *focusAssetCollectionGUID;	// G=0x37cb7bd5; S=0x37c8f959; @synthesize=_focusAssetCollectionGUID
@property(assign, nonatomic) BOOL hasShutDown;	// G=0x37cb7cf9; S=0x37cb7d09; @synthesize=_hasShutDown
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x37cb7be5; S=0x37cb7bf5; @synthesize=_isRetryingOutstandingActivities
@property(assign, nonatomic) int maxMetadataRetryCount;	// G=0x37cb7ba5; S=0x37cb7bb5; @synthesize=_maxMetadataRetryCount
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;	// G=0x37cb7dc1; S=0x37cb7dd1; @synthesize=_memberQueue
@property(retain, nonatomic) NSDictionary *metadataBackoffManagerParameters;	// G=0x37cb7d19; S=0x37cb7d29; @synthesize=_metadataBackoffManagerParameters
@property(retain, nonatomic) NSString *personID;	// G=0x37cb7b39; S=0x37cb7b49; @synthesize=_personID
@property(copy, nonatomic) id postCommandCompletionBlock;	// G=0x37cb7e31; S=0x37cb7e45; @synthesize=_postCommandCompletionBlock
@property(retain, nonatomic) MSASProtocol *protocol;	// G=0x37c8c155; S=0x37cb7c61; @synthesize=_protocol
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverSideConfigQueue;	// G=0x37cb7d89; S=0x37cb7d99; @synthesize=_serverSideConfigQueue
@property(retain, nonatomic) NSDictionary *serverSideConfiguration;	// G=0x37c90d41; S=0x37c91299; @synthesize=_serverSideConfiguration
@property(readonly, assign, nonatomic) NSString *serverSideConfigurationVersion;	// G=0x37c90f11; @synthesize=_serverSideConfigurationVersion
@property(retain, nonatomic) MSImageScalingSpecification *thumbnailImageScalingSpecification;	// G=0x37cb7cc1; S=0x37cb7cd1; @synthesize=_thumbnailImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x37cb7e55; S=0x37cb7e65; @synthesize=_workQueue
- (id)init;	// 0x37c8c5fd
- (id)initWithPersonID:(id)personID;	// 0x37c8c65d
- (id)initWithPersonID:(id)personID eventQueue:(id)queue;	// 0x37c8c68d
- (void).cxx_destruct;	// 0x37cb7e8d
// declared property getter: - (id)MMCSBackoffManagerParameters;	// 0x37cb7d51
- (void)MSASAssetDownloader:(id)downloader didFinishDownloadingAsset:(id)asset inAlbum:(id)album error:(id)error;	// 0x37cb57d5
- (void)MSASAssetDownloader:(id)downloader willBeginBatchCount:(unsigned)count;	// 0x37cb5705
- (void)MSASAssetDownloaderDidFinishBatch:(id)msasassetDownloader;	// 0x37cb77a1
- (void)MSASAssetUploader:(id)uploader didFinishUploadingAssetCollection:(id)collection intoAlbum:(id)album error:(id)error;	// 0x37cb4c19
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)msbackoffManager;	// 0x37c922e5
- (id)_URLReauthFailureWithUnderlyingError:(id)underlyingError;	// 0x37c95441
- (void)_addAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x37ca9ec9
- (void)_addCommentDisposition:(int)disposition params:(id)params;	// 0x37cb2a95
- (void)_addSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x37cb03a9
- (id)_assetCollectionRejectedError;	// 0x37c95e09
- (id)_assetDownloader;	// 0x37c8c409
// declared property getter: - (id)_assetInfoToReauthForDownload;	// 0x37cb7c05
- (id)_assetUploader;	// 0x37c8c3f5
- (void)_cancelOutstandingCommandsDisposition:(int)disposition params:(id)params;	// 0x37c8fc19
- (id)_canceledError;	// 0x37c95c69
- (void)_checkForAlbumSyncedStateDisposition:(int)albumSyncedStateDisposition params:(id)params;	// 0x37ca0a25
- (void)_checkForAssetCollectionUpdatesDisposition:(int)assetCollectionUpdatesDisposition params:(id)params;	// 0x37c9d6a5
- (void)_checkForChangesDisposition:(int)changesDisposition params:(id)params;	// 0x37c963a9
- (void)_checkForCommentChangesDisposition:(int)commentChangesDisposition params:(id)params;	// 0x37c9f121
- (void)_checkForUpdatesInAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x37c97e4d
- (void)_continueAddingAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x37caad51
- (void)_createAlbumDisposition:(int)disposition params:(id)params;	// 0x37ca79e9
- (id)_createHardlinkedOrCopiedAssetsInAssetCollections:(id)assetCollections;	// 0x37ca976d
- (void)_deleteAlbumDisposition:(int)disposition params:(id)params;	// 0x37ca424d
- (void)_deleteAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x37ca51e5
- (void)_deleteAssetFilesInAssetCollection:(id)assetCollection;	// 0x37cb47f5
- (void)_deleteAssetFilesInAssetCollections:(id)assetCollections;	// 0x37cb4b55
- (void)_deleteCommentDisposition:(int)disposition params:(id)params;	// 0x37ca66e5
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)albumsDisposition params:(id)params;	// 0x37c99985
- (void)_getAccessControlsDisposition:(int)disposition params:(id)params;	// 0x37c9a0d1
- (void)_getAlbumURLDisposition:(int)disposition params:(id)params;	// 0x37c954e9
- (id)_metadataBackoffManager;	// 0x37c8c41d
- (id)_model;	// 0x37c8c3e1
- (void)_removeSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x37cb1609
- (void)_scheduleEventDisposition:(int)disposition params:(id)params;	// 0x37cb4105
- (void)_sendGetServerSideConfigurationDisposition:(int)disposition params:(id)params;	// 0x37c916a5
- (void)_sendPutAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x37cadf71
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)downloadDisposition params:(id)params;	// 0x37cb5d8d
- (void)_sendUploadCompleteDisposition:(int)disposition params:(id)params;	// 0x37cabbc1
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)dictionary;	// 0x37c909f9
- (void)_setAlbumSyncedStateDisposition:(int)disposition params:(id)params;	// 0x37ca1efd
- (void)_setAssetCollectionSyncedStateDisposition:(int)disposition params:(id)params;	// 0x37ca324d
// declared property setter: - (void)_setAssetInfoToReauthForDownload:(id)download;	// 0x37cb7c15
// declared property setter: - (void)_setStopHandlerBlock:(id)block;	// 0x37cb7c51
// declared property getter: - (id)_stopHandlerBlock;	// 0x37cb7c3d
- (id)_stoppedError;	// 0x37c95d39
- (void)_subscribeToAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x37c9b2c1
- (void)_unsubscribeFromAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x37c9c2b9
- (void)_updateAlbumDisposition:(int)disposition params:(id)params;	// 0x37ca89d1
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id)block;	// 0x37c8df79
- (void)acceptInvitationWithToken:(id)token info:(id)info completionBlock:(id)block;	// 0x37c9cfbd
- (void)addAssetCollections:(id)collections toAlbum:(id)album info:(id)info;	// 0x37ca9b01
- (void)addComments:(id)comments toAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x37cb25e5
- (void)addSharingRelationships:(id)relationships toOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x37cb0089
- (int)assetsInDownloadQueueCount;	// 0x37c8da4d
- (void)cancelCompletionBlock:(id)block;	// 0x37c8edcd
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)guid;	// 0x37c8fa71
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)guid;	// 0x37c8fb45
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)albums info:(id)info;	// 0x37ca0651
- (void)checkForAssetCollectionUpdates:(id)assetCollectionUpdates inAlbum:(id)album info:(id)info;	// 0x37c9d359
- (void)checkForChangesInfo:(id)changesInfo;	// 0x37c95ed9
- (void)checkForChangesResetSync:(BOOL)changesResetSync info:(id)info;	// 0x37c95eed
- (void)checkForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album lastCommentID:(id)anId info:(id)info;	// 0x37c9ed6d
- (void)checkForUpdatesInAlbums:(id)albums resetSync:(BOOL)sync info:(id)info;	// 0x37c97925
- (void)continueAddingAssetCollections:(id)collections skipAssetCollections:(id)collections2 toAlbum:(id)album info:(id)info;	// 0x37caa72d
- (void)createAlbum:(id)album info:(id)info;	// 0x37ca77bd
// declared property getter: - (id)daemon;	// 0x37cb7b19
- (void)dealloc;	// 0x37c8da21
// declared property getter: - (id)delegate;	// 0x37cb7b71
- (void)deleteAlbum:(id)album info:(id)info;	// 0x37ca4021
- (void)deleteAssetCollections:(id)collections inAlbum:(id)album info:(id)info;	// 0x37ca4f71
- (void)deleteComments:(id)comments inAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x37ca6235
// declared property getter: - (id)derivativeImageScalingSpecification;	// 0x37cb7c89
// declared property getter: - (id)eventQueue;	// 0x37cb7df9
// declared property getter: - (id)focusAlbumGUID;	// 0x37cb7bc5
// declared property getter: - (id)focusAssetCollectionGUID;	// 0x37cb7bd5
- (void)getAccessControlsForAlbums:(id)albums info:(id)info;	// 0x37c99cfd
- (BOOL)hasEnqueuedActivities;	// 0x37c92b41
// declared property getter: - (BOOL)hasShutDown;	// 0x37cb7cf9
- (BOOL)isInRetryState;	// 0x37c929b5
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x37cb7be5
- (id)latestNextActivityDate;	// 0x37c91dad
// declared property getter: - (int)maxMetadataRetryCount;	// 0x37cb7ba5
// declared property getter: - (id)memberQueue;	// 0x37cb7dc1
- (id)memberQueueMetadataBackoffManager;	// 0x37c8c5e9
// declared property getter: - (id)metadataBackoffManagerParameters;	// 0x37cb7d19
- (id)persistentObjectForKey:(id)key;	// 0x37c92821
// declared property getter: - (id)personID;	// 0x37cb7b39
// declared property getter: - (id)postCommandCompletionBlock;	// 0x37cb7e31
// declared property getter: - (id)protocol;	// 0x37c8c155
- (void)purgeEverythingCompletionBlock:(id)block;	// 0x37c8ec45
- (void)refreshServerSideConfig;	// 0x37c9157d
- (void)removeSharingRelationships:(id)relationships fromOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x37cb12e9
- (void)retrieveAssets:(id)assets inAlbum:(id)album;	// 0x37cb526d
- (void)retryOutstandingActivities;	// 0x37c92c05
- (void)scheduleEvent:(id)event assetCollectionGUID:(id)guid albumGUID:(id)guid3 info:(id)info;	// 0x37cb3d81
// declared property getter: - (id)serverSideConfigQueue;	// 0x37cb7d89
// declared property getter: - (id)serverSideConfiguration;	// 0x37c90d41
// declared property getter: - (id)serverSideConfigurationVersion;	// 0x37c90f11
- (id)serverSideQueueServerSideConfiguration;	// 0x37c910dd
- (void)serverSideQueueSetServerSideConfiguration:(id)configuration;	// 0x37c91375
- (void)setAlbumSyncedState:(id)state forAlbum:(id)album info:(id)info;	// 0x37ca1bc1
- (void)setAssetCollectionSyncedState:(id)state forAssetCollection:(id)assetCollection album:(id)album info:(id)info;	// 0x37ca2e99
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x37c8f71d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37cb7b91
// declared property setter: - (void)setDerivativeImageScalingSpecification:(id)specification;	// 0x37cb7c99
// declared property setter: - (void)setEventQueue:(id)queue;	// 0x37cb7e09
// declared property setter: - (void)setFocusAlbumGUID:(id)guid;	// 0x37c8f841
// declared property setter: - (void)setFocusAssetCollectionGUID:(id)guid;	// 0x37c8f959
// declared property setter: - (void)setHasShutDown:(BOOL)down;	// 0x37cb7d09
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x37cb7bf5
// declared property setter: - (void)setMMCSBackoffManagerParameters:(id)parameters;	// 0x37cb7d61
// declared property setter: - (void)setMaxMetadataRetryCount:(int)count;	// 0x37cb7bb5
// declared property setter: - (void)setMemberQueue:(id)queue;	// 0x37cb7dd1
// declared property setter: - (void)setMetadataBackoffManagerParameters:(id)parameters;	// 0x37cb7d29
- (void)setPersistentObject:(id)object forKey:(id)key;	// 0x37c92881
// declared property setter: - (void)setPersonID:(id)anId;	// 0x37cb7b49
// declared property setter: - (void)setPostCommandCompletionBlock:(id)block;	// 0x37cb7e45
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x37cb7c61
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbum:(id)album info:(id)info completionBlock:(id)block;	// 0x37cb43ed
// declared property setter: - (void)setServerSideConfigQueue:(id)queue;	// 0x37cb7d99
// declared property setter: - (void)setServerSideConfiguration:(id)configuration;	// 0x37c91299
// declared property setter: - (void)setThumbnailImageScalingSpecification:(id)specification;	// 0x37cb7cd1
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x37cb7e65
- (void)shutDownCompletionBlock:(id)block;	// 0x37c8e06d
- (void)start;	// 0x37c8deb1
- (void)stopAssetDownloadsCompletionBlock:(id)block;	// 0x37c8ec95
- (void)subscribeToAlbum:(id)album info:(id)info;	// 0x37c9afcd
// declared property getter: - (id)thumbnailImageScalingSpecification;	// 0x37cb7cc1
- (void)unsubscribeFromAlbum:(id)album info:(id)info;	// 0x37c9bfc5
- (void)updateAlbum:(id)album updateAlbumFlags:(int)flags info:(id)info;	// 0x37ca8755
// declared property getter: - (id)workQueue;	// 0x37cb7e55
- (void)workQueueApplyServerSideConfiguration;	// 0x37c8da89
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)guid assetCollectionGUID:(id)guid2;	// 0x37c8eec1
- (void)workQueueCancelCompletionBlock:(id)block;	// 0x37c8f1ed
- (void)workQueueCheckForNextCommand;	// 0x37c92db9
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)workQueue;	// 0x37c94131
- (void)workQueueDidFinishCommand;	// 0x37c93a31
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;	// 0x37c94389
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)workQueue params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x37c93c8d
- (void)workQueueDidFinishCommandDueToCancellation;	// 0x37c94649
- (BOOL)workQueueEndCommandWithError:(id)error command:(id)command params:(id)params albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x37c94871
- (void)workQueuePerformNextCommand;	// 0x37c93289
- (void)workQueueRefreshServerSideConfig;	// 0x37c91619
- (void)workQueueRetryOutstandingActivities;	// 0x37c92ca1
- (void)workQueueScheduleReauthForAssets:(id)assets inAlbum:(id)album;	// 0x37cb5b65
- (void)workQueueUpdateNextActivityDate;	// 0x37c92139
@end
