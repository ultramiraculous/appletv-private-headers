/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSDeleterPlugin.h"
#import "ATVCupidMyPSImageLoadTaskDelegate.h"
#import "ATVCupidAccessObject.h"
#import "ATVPushNotificationListener.h"
#import "AppleTV-Structs.h"
#import "MSSubscriberPlugin.h"

@class ATVCupidMyPSImageLoadTask, BRImageManager, NSArray;
@protocol MSSubscriber, ATVCupidMyPSAccessObjectDelegate;

__attribute__((visibility("hidden")))
@interface ATVCupidMyPSAccessObject : ATVCupidAccessObject <MSSubscriberPlugin, MSDeleterPlugin, ATVCupidMyPSImageLoadTaskDelegate, ATVPushNotificationListener> {
	sqlite3 *_db;	// 4 = 0x4
	NSArray *_assets;	// 8 = 0x8
	BRImageManager *_imageManager;	// 12 = 0xc
	id<ATVCupidMyPSAccessObjectDelegate> _delegate;	// 16 = 0x10
	id<MSSubscriber> _subscriber;	// 20 = 0x14
	ATVCupidMyPSImageLoadTask *_imageLoadTask;	// 24 = 0x18
}
@property(retain, nonatomic) NSArray *assets;	// G=0x4ec8b1; S=0x4ec8c1; @synthesize=_assets
@property(assign, nonatomic) __weak id<ATVCupidMyPSAccessObjectDelegate> delegate;	// G=0x4ec921; S=0x4ec941; @synthesize=_delegate
@property(retain, nonatomic) ATVCupidMyPSImageLoadTask *imageLoadTask;	// G=0x4ec989; S=0x4ec999; @synthesize=_imageLoadTask
@property(retain, nonatomic) BRImageManager *imageManager;	// G=0x4ec8e9; S=0x4ec8f9; @synthesize=_imageManager
@property(assign, nonatomic) __weak id<MSSubscriber> subscriber;	// G=0x4ec955; S=0x4ec975; @synthesize=_subscriber
+ (id)_dbCachePathForPersonID:(id)personID;	// 0x4ed3e9
+ (id)_imageCachePathForPersonID:(id)personID;	// 0x4ee0d1
+ (id)accessObjectWithAppleAccount:(id)appleAccount;	// 0x4e9a45
+ (id)deleterPluginForPersonID:(id)personID;	// 0x4ea3c1
+ (id)personIDsForPollingTriggeredByPushNotification;	// 0x4e9ef5
+ (id)subscriberPluginForPersonID:(id)personID;	// 0x4e9e5d
- (void).cxx_destruct;	// 0x4ec9c1
- (id)_assetForAssetID:(id)assetID;	// 0x4ec099
- (void)_createOrOpenDB;	// 0x4eca2d
- (id)_dateFormatter;	// 0x4ed515
- (void)_didFinishDeletingAssetCollection:(id)collection error:(id)error;	// 0x4ebedd
- (void)_didFinishRetrievingAsset:(id)asset imageData:(id)data error:(id)error;	// 0x4eb5cd
- (void)_didReceiveDeleteForAssetCollections:(id)assetCollections;	// 0x4ebd09
- (void)_didRequestAssetRetrievalForAssetCollections:(id)assetCollections;	// 0x4eac41
- (id)_imageForAssetID:(id)assetID;	// 0x4ed9d9
- (id)_imageForAssetID:(id)assetID canLoad:(BOOL *)load;	// 0x4eaad5
- (void)_imageLoadTaskPerform;	// 0x4ec1f5
- (id)_imagePathForAssetID:(id)assetID;	// 0x4ed979
- (id)_imageTokenForAssetID:(id)assetID;	// 0x4eab79
- (void)_insertDBAsset:(id)asset;	// 0x4ed5f1
- (void)_insertDBAssets:(id)assets;	// 0x4ed0dd
- (id)_loadAssetsFromDB;	// 0x4ecb19
- (void)_loadImageForImageTokens:(id)imageTokens;	// 0x4eab89
- (void)_loadImages;	// 0x4ed859
- (void)_purgeImageForAssetID:(id)assetID;	// 0x4eda39
- (void)_purgeImages;	// 0x4eda3d
- (void)_removeAssets:(id)assets;	// 0x4ec651
- (void)_removeDB;	// 0x4ecef1
- (void)_removeDBAsset:(id)asset;	// 0x4ed331
- (void)_removeDBAssets:(id)assets;	// 0x4ed1fd
- (void)_runSetup;	// 0x4ea719
- (void)_tearDown;	// 0x4ea91d
- (void)_updateDBAsset:(id)asset newState:(int)state;	// 0x4ed00d
- (void)_writeImageFromImageData:(id)imageData assetID:(id)anId completionHandler:(id)handler;	// 0x4eda8d
// declared property getter: - (id)assets;	// 0x4ec8b1
// declared property getter: - (id)delegate;	// 0x4ec921
- (void)deleter:(id)deleter didFinishDeletingAssetCollection:(id)collection error:(id)error;	// 0x4ea459
// declared property getter: - (id)imageLoadTask;	// 0x4ec989
- (void)imageLoadTaskDidChangeShouldPerformLoad:(id)imageLoadTask;	// 0x4ea555
// declared property getter: - (id)imageManager;	// 0x4ec8e9
- (void)pushNotificationServer:(id)server didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x4ea615
- (void)pushNotificationServerTokenDidChange:(id)pushNotificationServerToken;	// 0x4ea715
- (void)removeAssetForAssetID:(id)assetID;	// 0x4e9b9d
// declared property setter: - (void)setAssets:(id)assets;	// 0x4ec8c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4ec941
// declared property setter: - (void)setImageLoadTask:(id)task;	// 0x4ec999
// declared property setter: - (void)setImageManager:(id)manager;	// 0x4ec8f9
// declared property setter: - (void)setSubscriber:(id)subscriber;	// 0x4ec975
// declared property getter: - (id)subscriber;	// 0x4ec955
- (void)subscriber:(id)subscriber didFailToRetriveSubscriptionUpdateWithError:(id)error;	// 0x4ea2f5
- (void)subscriber:(id)subscriber didFinishRequestingAssetRetrievalForStreamID:(id)streamID;	// 0x4ea14d
- (void)subscriber:(id)subscriber didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x4ea151
- (void)subscriber:(id)subscriber didReceiveDeleteForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0x4ea2f9
- (void)subscriber:(id)subscriber didRequestAssetRetrievalForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0x4ea085
- (void)subscriberWillAssignPluginAsDelegateOfSubscriber:(id)subscriber;	// 0x4e9fbd
- (void)tearDown;	// 0x4e9b41
@end

