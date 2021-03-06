/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCupidAccessObject.h"
#import "AppleTV-Structs.h"
#import "MSSubscriberPlugin.h"
#import "MSDeleterPlugin.h"
#import "ATVCupidMyPSImageLoadTaskDelegate.h"
#import "ATVPushNotificationListener.h"

@class ATVCupidMyPSImageLoadTask, NSArray, BRImageManager;
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
@property(retain, nonatomic) NSArray *assets;	// G=0x4c9f65; S=0x4c9f75; @synthesize=_assets
@property(assign, nonatomic) __weak id<ATVCupidMyPSAccessObjectDelegate> delegate;	// G=0x4c9fd5; S=0x4c9ff5; @synthesize=_delegate
@property(retain, nonatomic) ATVCupidMyPSImageLoadTask *imageLoadTask;	// G=0x4ca03d; S=0x4ca04d; @synthesize=_imageLoadTask
@property(retain, nonatomic) BRImageManager *imageManager;	// G=0x4c9f9d; S=0x4c9fad; @synthesize=_imageManager
@property(assign, nonatomic) __weak id<MSSubscriber> subscriber;	// G=0x4ca009; S=0x4ca029; @synthesize=_subscriber
+ (id)_dbCachePathForPersonID:(id)personID;	// 0x4caa9d
+ (id)_imageCachePathForPersonID:(id)personID;	// 0x4cb785
+ (id)accessObjectWithAppleAccount:(id)appleAccount;	// 0x4c70f5
+ (id)deleterPluginForPersonID:(id)personID;	// 0x4c7a71
+ (id)personIDsForPollingTriggeredByPushNotification;	// 0x4c75a5
+ (id)subscriberPluginForPersonID:(id)personID;	// 0x4c750d
- (void).cxx_destruct;	// 0x4ca075
- (id)_assetForAssetID:(id)assetID;	// 0x4c974d
- (void)_createOrOpenDB;	// 0x4ca0e1
- (id)_dateFormatter;	// 0x4cabc9
- (void)_didFinishDeletingAssetCollection:(id)collection error:(id)error;	// 0x4c9591
- (void)_didFinishRetrievingAsset:(id)asset imageData:(id)data error:(id)error;	// 0x4c8c81
- (void)_didReceiveDeleteForAssetCollections:(id)assetCollections;	// 0x4c93bd
- (void)_didRequestAssetRetrievalForAssetCollections:(id)assetCollections;	// 0x4c82f1
- (id)_imageForAssetID:(id)assetID;	// 0x4cb08d
- (id)_imageForAssetID:(id)assetID canLoad:(BOOL *)load;	// 0x4c8185
- (void)_imageLoadTaskPerform;	// 0x4c98a9
- (id)_imagePathForAssetID:(id)assetID;	// 0x4cb02d
- (id)_imageTokenForAssetID:(id)assetID;	// 0x4c8229
- (void)_insertDBAsset:(id)asset;	// 0x4caca5
- (void)_insertDBAssets:(id)assets;	// 0x4ca791
- (id)_loadAssetsFromDB;	// 0x4ca1cd
- (void)_loadImageForImageTokens:(id)imageTokens;	// 0x4c8239
- (void)_loadImages;	// 0x4caf0d
- (void)_purgeImageForAssetID:(id)assetID;	// 0x4cb0ed
- (void)_purgeImages;	// 0x4cb0f1
- (void)_removeAssets:(id)assets;	// 0x4c9d05
- (void)_removeDB;	// 0x4ca5a5
- (void)_removeDBAsset:(id)asset;	// 0x4ca9e5
- (void)_removeDBAssets:(id)assets;	// 0x4ca8b1
- (void)_runSetup;	// 0x4c7dc9
- (void)_tearDown;	// 0x4c7fcd
- (void)_updateDBAsset:(id)asset newState:(int)state;	// 0x4ca6c1
- (void)_writeImageFromImageData:(id)imageData assetID:(id)anId completionHandler:(id)handler;	// 0x4cb141
// declared property getter: - (id)assets;	// 0x4c9f65
// declared property getter: - (id)delegate;	// 0x4c9fd5
- (void)deleter:(id)deleter didFinishDeletingAssetCollection:(id)collection error:(id)error;	// 0x4c7b09
// declared property getter: - (id)imageLoadTask;	// 0x4ca03d
- (void)imageLoadTaskDidChangeShouldPerformLoad:(id)imageLoadTask;	// 0x4c7c05
// declared property getter: - (id)imageManager;	// 0x4c9f9d
- (void)pushNotificationServer:(id)server didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x4c7cc5
- (void)pushNotificationServerTokenDidChange:(id)pushNotificationServerToken;	// 0x4c7dc5
- (void)removeAssetForAssetID:(id)assetID;	// 0x4c724d
// declared property setter: - (void)setAssets:(id)assets;	// 0x4c9f75
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4c9ff5
// declared property setter: - (void)setImageLoadTask:(id)task;	// 0x4ca04d
// declared property setter: - (void)setImageManager:(id)manager;	// 0x4c9fad
// declared property setter: - (void)setSubscriber:(id)subscriber;	// 0x4ca029
// declared property getter: - (id)subscriber;	// 0x4ca009
- (void)subscriber:(id)subscriber didFailToRetriveSubscriptionUpdateWithError:(id)error;	// 0x4c79a5
- (void)subscriber:(id)subscriber didFinishRequestingAssetRetrievalForStreamID:(id)streamID;	// 0x4c77fd
- (void)subscriber:(id)subscriber didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x4c7801
- (void)subscriber:(id)subscriber didReceiveDeleteForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0x4c79a9
- (void)subscriber:(id)subscriber didRequestAssetRetrievalForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0x4c7735
- (void)subscriberWillAssignPluginAsDelegateOfSubscriber:(id)subscriber;	// 0x4c766d
- (void)tearDown;	// 0x4c71f1
@end

