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
	NSObject<OS_dispatch_queue> *_eventQueue;	// 116 = 0x74
	NSObject<OS_dispatch_queue> *_memberQueue;	// 120 = 0x78
	id _postCommandCompletionBlock;	// 124 = 0x7c
	NSObject<OS_dispatch_queue> *_workQueue;	// 128 = 0x80
}
@property(retain, nonatomic) NSDictionary *MMCSBackoffManagerParameters;	// G=0x337a6a31; S=0x337a6a41; @synthesize=_MMCSBackoffManagerParameters
@property(retain, nonatomic, setter=_setAssetInfoToReauthForDownload:) NSMutableArray *_assetInfoToReauthForDownload;	// G=0x337a68e5; S=0x337a68f5; @synthesize
@property(copy, nonatomic, setter=_setStopHandlerBlock:) id _stopHandlerBlock;	// G=0x337a691d; S=0x337a6931; @synthesize
@property(assign, nonatomic) __weak MSAlbumSharingDaemon *daemon;	// G=0x337a67f9; S=0x3377e3fd; @synthesize=_daemon
@property(assign, nonatomic) __weak id delegate;	// G=0x337a6851; S=0x337a6871; @synthesize=_delegate
@property(retain, nonatomic) MSImageScalingSpecification *derivativeImageScalingSpecification;	// G=0x337a6969; S=0x337a6979; @synthesize=_derivativeImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;	// G=0x337a6aa1; S=0x337a6ab1; @synthesize=_eventQueue
@property(retain, nonatomic) NSString *focusAlbumGUID;	// G=0x337a68a5; S=0x3377e521; @synthesize=_focusAlbumGUID
@property(retain, nonatomic) NSString *focusAssetCollectionGUID;	// G=0x337a68b5; S=0x3377e639; @synthesize=_focusAssetCollectionGUID
@property(assign, nonatomic) BOOL hasShutDown;	// G=0x337a69d9; S=0x337a69e9; @synthesize=_hasShutDown
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x337a68c5; S=0x337a68d5; @synthesize=_isRetryingOutstandingActivities
@property(assign, nonatomic) int maxMetadataRetryCount;	// G=0x337a6885; S=0x337a6895; @synthesize=_maxMetadataRetryCount
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;	// G=0x337a6ad9; S=0x337a6ae9; @synthesize=_memberQueue
@property(retain, nonatomic) NSDictionary *metadataBackoffManagerParameters;	// G=0x337a69f9; S=0x337a6a09; @synthesize=_metadataBackoffManagerParameters
@property(retain, nonatomic) NSString *personID;	// G=0x337a6819; S=0x337a6829; @synthesize=_personID
@property(copy, nonatomic) id postCommandCompletionBlock;	// G=0x337a6b11; S=0x337a6b25; @synthesize=_postCommandCompletionBlock
@property(retain, nonatomic) MSASProtocol *protocol;	// G=0x3377ae35; S=0x337a6941; @synthesize=_protocol
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverSideConfigQueue;	// G=0x337a6a69; S=0x337a6a79; @synthesize=_serverSideConfigQueue
@property(retain, nonatomic) NSDictionary *serverSideConfiguration;	// G=0x3377fa21; S=0x3377ff79; @synthesize=_serverSideConfiguration
@property(readonly, assign, nonatomic) NSString *serverSideConfigurationVersion;	// G=0x3377fbf1; @synthesize=_serverSideConfigurationVersion
@property(retain, nonatomic) MSImageScalingSpecification *thumbnailImageScalingSpecification;	// G=0x337a69a1; S=0x337a69b1; @synthesize=_thumbnailImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x337a6b35; S=0x337a6b45; @synthesize=_workQueue
- (id)init;	// 0x3377b2dd
- (id)initWithPersonID:(id)personID;	// 0x3377b33d
- (id)initWithPersonID:(id)personID eventQueue:(id)queue;	// 0x3377b36d
- (void).cxx_destruct;	// 0x337a6b6d
// declared property getter: - (id)MMCSBackoffManagerParameters;	// 0x337a6a31
- (void)MSASAssetDownloader:(id)downloader didFinishDownloadingAsset:(id)asset inAlbum:(id)album error:(id)error;	// 0x337a44b5
- (void)MSASAssetDownloader:(id)downloader willBeginBatchCount:(unsigned)count;	// 0x337a43e5
- (void)MSASAssetDownloaderDidFinishBatch:(id)msasassetDownloader;	// 0x337a6481
- (void)MSASAssetUploader:(id)uploader didFinishUploadingAssetCollection:(id)collection intoAlbum:(id)album error:(id)error;	// 0x337a38f9
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)msbackoffManager;	// 0x33780fc5
- (id)_URLReauthFailureWithUnderlyingError:(id)underlyingError;	// 0x33784121
- (void)_addAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x33798ba9
- (void)_addCommentDisposition:(int)disposition params:(id)params;	// 0x337a1775
- (void)_addSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x3379f089
- (id)_assetCollectionRejectedError;	// 0x33784ae9
- (id)_assetDownloader;	// 0x3377b0e9
// declared property getter: - (id)_assetInfoToReauthForDownload;	// 0x337a68e5
- (id)_assetUploader;	// 0x3377b0d5
- (void)_cancelOutstandingCommandsDisposition:(int)disposition params:(id)params;	// 0x3377e8f9
- (id)_canceledError;	// 0x33784949
- (void)_checkForAlbumSyncedStateDisposition:(int)albumSyncedStateDisposition params:(id)params;	// 0x3378f705
- (void)_checkForAssetCollectionUpdatesDisposition:(int)assetCollectionUpdatesDisposition params:(id)params;	// 0x3378c385
- (void)_checkForChangesDisposition:(int)changesDisposition params:(id)params;	// 0x33785089
- (void)_checkForCommentChangesDisposition:(int)commentChangesDisposition params:(id)params;	// 0x3378de01
- (void)_checkForUpdatesInAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x33786b2d
- (void)_continueAddingAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x33799a31
- (void)_createAlbumDisposition:(int)disposition params:(id)params;	// 0x337966c9
- (id)_createHardlinkedOrCopiedAssetsInAssetCollections:(id)assetCollections;	// 0x3379844d
- (void)_deleteAlbumDisposition:(int)disposition params:(id)params;	// 0x33792f2d
- (void)_deleteAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x33793ec5
- (void)_deleteAssetFilesInAssetCollection:(id)assetCollection;	// 0x337a34d5
- (void)_deleteAssetFilesInAssetCollections:(id)assetCollections;	// 0x337a3835
- (void)_deleteCommentDisposition:(int)disposition params:(id)params;	// 0x337953c5
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)albumsDisposition params:(id)params;	// 0x33788665
- (void)_getAccessControlsDisposition:(int)disposition params:(id)params;	// 0x33788db1
- (void)_getAlbumURLDisposition:(int)disposition params:(id)params;	// 0x337841c9
- (id)_metadataBackoffManager;	// 0x3377b0fd
- (id)_model;	// 0x3377b0c1
- (void)_removeSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x337a02e9
- (void)_scheduleEventDisposition:(int)disposition params:(id)params;	// 0x337a2de5
- (void)_sendGetServerSideConfigurationDisposition:(int)disposition params:(id)params;	// 0x33780385
- (void)_sendPutAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x3379cc51
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)downloadDisposition params:(id)params;	// 0x337a4a6d
- (void)_sendUploadCompleteDisposition:(int)disposition params:(id)params;	// 0x3379a8a1
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)dictionary;	// 0x3377f6d9
- (void)_setAlbumSyncedStateDisposition:(int)disposition params:(id)params;	// 0x33790bdd
- (void)_setAssetCollectionSyncedStateDisposition:(int)disposition params:(id)params;	// 0x33791f2d
// declared property setter: - (void)_setAssetInfoToReauthForDownload:(id)download;	// 0x337a68f5
// declared property setter: - (void)_setStopHandlerBlock:(id)block;	// 0x337a6931
// declared property getter: - (id)_stopHandlerBlock;	// 0x337a691d
- (id)_stoppedError;	// 0x33784a19
- (void)_subscribeToAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x33789fa1
- (void)_unsubscribeFromAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x3378af99
- (void)_updateAlbumDisposition:(int)disposition params:(id)params;	// 0x337976b1
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id)block;	// 0x3377cc59
- (void)acceptInvitationWithToken:(id)token info:(id)info completionBlock:(id)block;	// 0x3378bc9d
- (void)addAssetCollections:(id)collections toAlbum:(id)album info:(id)info;	// 0x337987e1
- (void)addComments:(id)comments toAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x337a12c5
- (void)addSharingRelationships:(id)relationships toOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x3379ed69
- (int)assetsInDownloadQueueCount;	// 0x3377c72d
- (void)cancelCompletionBlock:(id)block;	// 0x3377daad
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)guid;	// 0x3377e751
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)guid;	// 0x3377e825
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)albums info:(id)info;	// 0x3378f331
- (void)checkForAssetCollectionUpdates:(id)assetCollectionUpdates inAlbum:(id)album info:(id)info;	// 0x3378c039
- (void)checkForChangesInfo:(id)changesInfo;	// 0x33784bb9
- (void)checkForChangesResetSync:(BOOL)changesResetSync info:(id)info;	// 0x33784bcd
- (void)checkForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album lastCommentID:(id)anId info:(id)info;	// 0x3378da4d
- (void)checkForUpdatesInAlbums:(id)albums resetSync:(BOOL)sync info:(id)info;	// 0x33786605
- (void)continueAddingAssetCollections:(id)collections skipAssetCollections:(id)collections2 toAlbum:(id)album info:(id)info;	// 0x3379940d
- (void)createAlbum:(id)album info:(id)info;	// 0x3379649d
// declared property getter: - (id)daemon;	// 0x337a67f9
- (void)dealloc;	// 0x3377c701
// declared property getter: - (id)delegate;	// 0x337a6851
- (void)deleteAlbum:(id)album info:(id)info;	// 0x33792d01
- (void)deleteAssetCollections:(id)collections inAlbum:(id)album info:(id)info;	// 0x33793c51
- (void)deleteComments:(id)comments inAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x33794f15
// declared property getter: - (id)derivativeImageScalingSpecification;	// 0x337a6969
// declared property getter: - (id)eventQueue;	// 0x337a6aa1
// declared property getter: - (id)focusAlbumGUID;	// 0x337a68a5
// declared property getter: - (id)focusAssetCollectionGUID;	// 0x337a68b5
- (void)getAccessControlsForAlbums:(id)albums info:(id)info;	// 0x337889dd
- (BOOL)hasEnqueuedActivities;	// 0x33781821
// declared property getter: - (BOOL)hasShutDown;	// 0x337a69d9
- (BOOL)isInRetryState;	// 0x33781695
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x337a68c5
- (id)latestNextActivityDate;	// 0x33780a8d
// declared property getter: - (int)maxMetadataRetryCount;	// 0x337a6885
// declared property getter: - (id)memberQueue;	// 0x337a6ad9
- (id)memberQueueMetadataBackoffManager;	// 0x3377b2c9
// declared property getter: - (id)metadataBackoffManagerParameters;	// 0x337a69f9
- (id)persistentObjectForKey:(id)key;	// 0x33781501
// declared property getter: - (id)personID;	// 0x337a6819
// declared property getter: - (id)postCommandCompletionBlock;	// 0x337a6b11
// declared property getter: - (id)protocol;	// 0x3377ae35
- (void)purgeEverythingCompletionBlock:(id)block;	// 0x3377d925
- (void)refreshServerSideConfig;	// 0x3378025d
- (void)removeSharingRelationships:(id)relationships fromOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x3379ffc9
- (void)retrieveAssets:(id)assets inAlbum:(id)album;	// 0x337a3f4d
- (void)retryOutstandingActivities;	// 0x337818e5
- (void)scheduleEvent:(id)event assetCollectionGUID:(id)guid albumGUID:(id)guid3 info:(id)info;	// 0x337a2a61
// declared property getter: - (id)serverSideConfigQueue;	// 0x337a6a69
// declared property getter: - (id)serverSideConfiguration;	// 0x3377fa21
// declared property getter: - (id)serverSideConfigurationVersion;	// 0x3377fbf1
- (id)serverSideQueueServerSideConfiguration;	// 0x3377fdbd
- (void)serverSideQueueSetServerSideConfiguration:(id)configuration;	// 0x33780055
- (void)setAlbumSyncedState:(id)state forAlbum:(id)album info:(id)info;	// 0x337908a1
- (void)setAssetCollectionSyncedState:(id)state forAssetCollection:(id)assetCollection album:(id)album info:(id)info;	// 0x33791b79
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x3377e3fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337a6871
// declared property setter: - (void)setDerivativeImageScalingSpecification:(id)specification;	// 0x337a6979
// declared property setter: - (void)setEventQueue:(id)queue;	// 0x337a6ab1
// declared property setter: - (void)setFocusAlbumGUID:(id)guid;	// 0x3377e521
// declared property setter: - (void)setFocusAssetCollectionGUID:(id)guid;	// 0x3377e639
// declared property setter: - (void)setHasShutDown:(BOOL)down;	// 0x337a69e9
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x337a68d5
// declared property setter: - (void)setMMCSBackoffManagerParameters:(id)parameters;	// 0x337a6a41
// declared property setter: - (void)setMaxMetadataRetryCount:(int)count;	// 0x337a6895
// declared property setter: - (void)setMemberQueue:(id)queue;	// 0x337a6ae9
// declared property setter: - (void)setMetadataBackoffManagerParameters:(id)parameters;	// 0x337a6a09
- (void)setPersistentObject:(id)object forKey:(id)key;	// 0x33781561
// declared property setter: - (void)setPersonID:(id)anId;	// 0x337a6829
// declared property setter: - (void)setPostCommandCompletionBlock:(id)block;	// 0x337a6b25
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x337a6941
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbum:(id)album info:(id)info completionBlock:(id)block;	// 0x337a30cd
// declared property setter: - (void)setServerSideConfigQueue:(id)queue;	// 0x337a6a79
// declared property setter: - (void)setServerSideConfiguration:(id)configuration;	// 0x3377ff79
// declared property setter: - (void)setThumbnailImageScalingSpecification:(id)specification;	// 0x337a69b1
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x337a6b45
- (void)shutDownCompletionBlock:(id)block;	// 0x3377cd4d
- (void)start;	// 0x3377cb91
- (void)stopAssetDownloadsCompletionBlock:(id)block;	// 0x3377d975
- (void)subscribeToAlbum:(id)album info:(id)info;	// 0x33789cad
// declared property getter: - (id)thumbnailImageScalingSpecification;	// 0x337a69a1
- (void)unsubscribeFromAlbum:(id)album info:(id)info;	// 0x3378aca5
- (void)updateAlbum:(id)album updateAlbumFlags:(int)flags info:(id)info;	// 0x33797435
// declared property getter: - (id)workQueue;	// 0x337a6b35
- (void)workQueueApplyServerSideConfiguration;	// 0x3377c769
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)guid assetCollectionGUID:(id)guid2;	// 0x3377dba1
- (void)workQueueCancelCompletionBlock:(id)block;	// 0x3377decd
- (void)workQueueCheckForNextCommand;	// 0x33781a99
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)workQueue;	// 0x33782e11
- (void)workQueueDidFinishCommand;	// 0x33782711
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;	// 0x33783069
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)workQueue params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x3378296d
- (void)workQueueDidFinishCommandDueToCancellation;	// 0x33783329
- (BOOL)workQueueEndCommandWithError:(id)error command:(id)command params:(id)params albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x33783551
- (void)workQueuePerformNextCommand;	// 0x33781f69
- (void)workQueueRefreshServerSideConfig;	// 0x337802f9
- (void)workQueueRetryOutstandingActivities;	// 0x33781981
- (void)workQueueScheduleReauthForAssets:(id)assets inAlbum:(id)album;	// 0x337a4845
- (void)workQueueUpdateNextActivityDate;	// 0x33780e19
@end

