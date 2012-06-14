/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVInternetPhotosMonitor.h"
#import "ATVSettingsSaver.h"

@class BRBackgroundTask;

__attribute__((visibility("hidden")))
@interface ATVFlickrMonitor : ATVInternetPhotosMonitor <ATVSettingsSaver> {
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x189a25; converted property
+ (void)initialize;	// 0x188d11
+ (void)setSingleton:(id)singleton;	// 0x188d01
+ (id)singleton;	// 0x188cf1
- (id)init;	// 0x188d81
- (id)_loadFlickrURL:(id)url;	// 0x18b41d
- (void)_performAccountIconImageLoad:(id)load;	// 0x18b0d9
- (void)_performAccountLoad:(id)load;	// 0x189a45
- (void)_performAccountMediaLoad:(id)load;	// 0x189c01
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x18a7a1
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x18b099
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x18b0b9
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x18b1e5
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x18af31
- (void)_performCollectionAssetsLoad:(id)load;	// 0x18a911
- (void)_performSearch:(id)search;	// 0x18af51
- (id)_savedSearchesFilePath;	// 0x18b589
- (void)addAccount:(id)account;	// 0x188fb1
- (void)addPathsToSaveTo:(id)to;	// 0x188f09
// converted property getter: - (id)backgroundTask;	// 0x189a25
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x1897b9
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x189815
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x189945
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x1899b5
- (void)cancelLoadMediaForAccount:(id)account;	// 0x18969d
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x18975d
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x1898d5
- (void)dealloc;	// 0x188e79
- (void)loadAccountIconForAccount:(id)account;	// 0x189175
- (void)loadAccountWithName:(id)name;	// 0x18903d
- (void)loadAssetsForCollection:(id)collection;	// 0x1891dd
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x1892c1
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x18933d
- (void)loadMediaForAccount:(id)account;	// 0x1890a5
- (void)loadSubAccountsForAccount:(id)account;	// 0x18910d
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x189245
- (void)removeAccountWithName:(id)name;	// 0x188f39
- (void)removeSavedSearchTerm:(id)term;	// 0x1894fd
- (void)saveSearchTerm:(id)term;	// 0x1893e1
- (id)savedSearchTerms;	// 0x189665
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x1893b9
- (id)taskContext;	// 0x189a35
@end

