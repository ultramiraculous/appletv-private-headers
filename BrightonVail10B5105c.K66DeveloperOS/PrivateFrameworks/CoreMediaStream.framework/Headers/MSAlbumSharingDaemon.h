/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class MSASDaemonModel, NSObject, NSMutableDictionary;
@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;

@interface MSAlbumSharingDaemon : MSDaemon {
	id<MSAlbumSharingDaemonDelegate> _delegate;	// 24 = 0x18
	NSMutableDictionary *_personIDToStateMachineMap;	// 28 = 0x1c
	NSMutableDictionary *_personIDToDelegateMap;	// 32 = 0x20
	MSASDaemonModel *_daemonModel;	// 36 = 0x24
	int _busyCount;	// 40 = 0x28
	BOOL _isRetryingOutstandingActivities;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
	NSMutableDictionary *_nextUpdateDateByPersonID;	// 52 = 0x34
	NSObject<OS_dispatch_queue> *_mapQueue;	// 56 = 0x38
}
@property(assign, nonatomic) int busyCount;	// G=0x37c8b381; S=0x37c8b391; @synthesize=_busyCount
@property(retain, nonatomic) MSASDaemonModel *daemonModel;	// G=0x37c8b349; S=0x37c8b359; @synthesize=_daemonModel
@property(assign, nonatomic) __weak id<MSAlbumSharingDaemonDelegate> delegate;	// G=0x37c8b2a5; S=0x37c8b2c5; @synthesize=_delegate
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x37c8b3a1; S=0x37c8b3b1; @synthesize=_isRetryingOutstandingActivities
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue;	// G=0x37c8b431; S=0x37c8b441; @synthesize=_mapQueue
@property(retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID;	// G=0x37c8b3f9; S=0x37c8b409; @synthesize=_nextUpdateDateByPersonID
@property(retain, nonatomic) NSMutableDictionary *personIDToDelegateMap;	// G=0x37c8b311; S=0x37c8b321; @synthesize=_personIDToDelegateMap
@property(retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap;	// G=0x37c8b2d9; S=0x37c8b2e9; @synthesize=_personIDToStateMachineMap
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x37c8b3c1; S=0x37c8b3d1; @synthesize=_workQueue
- (id)init;	// 0x37c83669
- (void).cxx_destruct;	// 0x37c8b469
- (id)_delegateForPersonID:(id)personID;	// 0x37c8a1a5
- (void)_postModelShutdownForPersonID:(id)personID completionBlock:(id)block;	// 0x37c8838d
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId;	// 0x37c86f45
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c86f7d
- (void)acceptInvitationWithToken:(id)token personID:(id)anId completionBlock:(id)block;	// 0x37c86cf9
- (void)acceptInvitationWithToken:(id)token personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x37c86da1
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x37c87275
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c872c1
- (void)addAlbum:(id)album personID:(id)anId;	// 0x37c8630d
- (void)addAlbum:(id)album personID:(id)anId info:(id)info;	// 0x37c86345
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x37c8781d
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c87869
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x37c87d6d
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c87db9
- (int)assetsInDownloadQueueCountForPersonID:(id)personID;	// 0x37c85b35
- (id)boundStateMachineForPersonID:(id)personID;	// 0x37c8a50d
// declared property getter: - (int)busyCount;	// 0x37c8b381
- (void)cancelActivitiesForPersonID:(id)personID;	// 0x37c85171
// declared property getter: - (id)daemonModel;	// 0x37c8b349
- (void)dealloc;	// 0x37c83799
// declared property getter: - (id)delegate;	// 0x37c8b2a5
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId;	// 0x37c8663d
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c86675
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x37c879f9
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c87a31
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId;	// 0x37c87f49
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c87f81
- (void)didCreateStateMachineForPersonID:(id)personID;	// 0x37c8468d
- (void)didDestroyStateMachineForPersonID:(id)personID;	// 0x37c84695
- (void)didIdle;	// 0x37c840cd
- (void)didReceiveAuthFailureForPersonID:(id)personID;	// 0x37c8491d
- (void)didReceiveAuthSuccessForPersonID:(id)personID;	// 0x37c84921
- (void)didReceiveCommentTooLongError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x37c8b0e1
- (void)didReceiveGlobalResetSyncForPersonID:(id)personID;	// 0x37c84925
- (void)didReceivePushNotificationForPersonID:(id)personID;	// 0x37c84699
- (void)didReceiveTooManyAlbumsError:(id)error personID:(id)anId;	// 0x37c8aab1
- (void)didReceiveTooManyCommentsError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x37c8af1d
- (void)didReceiveTooManyPhotosError:(id)error forAlbum:(id)album personID:(id)anId;	// 0x37c8ac19
- (void)didReceiveTooManySubscriptionsError:(id)error personID:(id)anId;	// 0x37c8adb5
- (void)didUnidle;	// 0x37c84189
- (id)existingModelForPersonID:(id)personID;	// 0x37c85b71
- (id)existingStateMachineForPersonID:(id)personID;	// 0x37c8a309
- (void)forgetEverythingAboutPersonID:(id)anId;	// 0x37c88379
- (void)forgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x37c89461
- (void)forgetEverythingCompletionBlock:(id)block;	// 0x37c898ad
- (BOOL)hasCommandsInGroupedCommandQueue;	// 0x37c8492d
- (BOOL)isInRetryState;	// 0x37c8469d
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x37c8b3a1
- (BOOL)isWaitingForAuth;	// 0x37c84929
// declared property getter: - (id)mapQueue;	// 0x37c8b431
- (void)mapQueueShutDownStateMachineInMap:(id)map personIDs:(id)ids index:(unsigned)index forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x37c838fd
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId;	// 0x37c867d5
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId info:(id)info;	// 0x37c8680d
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId moveLastViewedAssetCollectionMarker:(BOOL)marker info:(id)info;	// 0x37c86859
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId;	// 0x37c87b91
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId info:(id)info;	// 0x37c87bdd
- (id)modelForPersonID:(id)personID;	// 0x37c85c19
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId;	// 0x37c864a5
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId info:(id)info;	// 0x37c864dd
- (id)nextActivityDate;	// 0x37c840ad
// declared property getter: - (id)nextUpdateDateByPersonID;	// 0x37c8b3f9
- (id)persistentObjectForKey:(id)key personID:(id)anId;	// 0x37c8a0e5
// declared property getter: - (id)personIDToDelegateMap;	// 0x37c8b311
// declared property getter: - (id)personIDToStateMachineMap;	// 0x37c8b2d9
- (id)personIDsListeningToPushNotification;	// 0x37c853b5
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x37c8544d
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId;	// 0x37c85fcd
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c86005
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x37c86165
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x37c861a1
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x37c85e25
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x37c85e61
- (void)refreshResetSync:(BOOL)sync personID:(id)anId;	// 0x37c85cc1
- (void)refreshResetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x37c85ce5
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x37c8a0ad
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId;	// 0x37c870dd
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c87115
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId;	// 0x37c87451
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c87489
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)anId;	// 0x37c880e1
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags personID:(id)anId;	// 0x37c8823d
- (void)retryOutstandingActivities;	// 0x37c84bad
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)sendServerSideConfiguration;	// 0x37c859f1
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x37c8a065
// declared property setter: - (void)setBusyCount:(int)count;	// 0x37c8b391
// declared property setter: - (void)setDaemonModel:(id)model;	// 0x37c8b359
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37c8b2c5
- (void)setFocusAlbumGUID:(id)guid forPersonID:(id)personID;	// 0x37c84245
- (void)setFocusAssetCollectionGUID:(id)guid forPersonID:(id)personID;	// 0x37c84469
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x37c8b3b1
// declared property setter: - (void)setMapQueue:(id)queue;	// 0x37c8b441
- (void)setNextActivityDate:(id)date forPersonID:(id)personID;	// 0x37c856cd
// declared property setter: - (void)setNextUpdateDateByPersonID:(id)anId;	// 0x37c8b409
- (void)setPersistentObject:(id)object forKey:(id)key personID:(id)anId;	// 0x37c8a145
// declared property setter: - (void)setPersonIDToDelegateMap:(id)delegateMap;	// 0x37c8b321
// declared property setter: - (void)setPersonIDToStateMachineMap:(id)stateMachineMap;	// 0x37c8b2e9
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;	// 0x37c875e9
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x37c87695
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x37c8b3d1
- (void)shutDown;	// 0x37c83861
- (void)shutDownCompletionBlock:(id)block;	// 0x37c83be9
- (void)shutDownStateMachine:(id)machine forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x37c88741
- (void)start;	// 0x37c837c5
- (void)stopAssetDownloadsForPersonID:(id)personID;	// 0x37c84d71
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId;	// 0x37c869c9
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c86a01
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId;	// 0x37c86b61
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x37c86b99
- (void)willDestroyStateMachineForPersonID:(id)personID;	// 0x37c84691
// declared property getter: - (id)workQueue;	// 0x37c8b3c1
- (void)workQueueForgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x37c88cf1
- (void)workQueueForgetEverythingAboutPersonIDs:(id)ids index:(unsigned)index completionBlock:(id)block;	// 0x37c89741
@end

