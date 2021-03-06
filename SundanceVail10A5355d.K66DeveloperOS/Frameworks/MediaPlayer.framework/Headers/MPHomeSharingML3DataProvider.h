/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"

@class HSLibrary, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {
	HSLibrary *_homeSharingLibrary;	// 32 = 0x20
	NSMutableDictionary *_tokenDataForDSIDs;	// 36 = 0x24
	NSMutableSet *_loadedContainerPIDs;	// 40 = 0x28
	NSMutableDictionary *_blocksForLoadingContainerPIDs;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_containerFillQueue;	// 48 = 0x30
	unsigned _updateCheckEnabled : 1;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) HSLibrary *homeSharingLibrary;	// G=0x337705ed; @synthesize=_homeSharingLibrary
@property(readonly, assign, nonatomic) BOOL isSupportedSharingVersion;	// G=0x3376f28d; 
+ (void)_determineHomeSharingGroupIDIfNecessary;	// 0x3376f3f5
+ (void)beginScanningForLibraries;	// 0x3376c341
+ (void)endScanningForLibraries;	// 0x3376cb31
+ (id)homeSharingGroupID;	// 0x3376ccf1
+ (BOOL)isConnecting;	// 0x3376cc01
+ (BOOL)isScanningForLibraries;	// 0x3376c331
- (id)initWithHomeSharingLibrary:(id)homeSharingLibrary;	// 0x3376cd25
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x3376f115
- (void)_fetchTokensForAuthorizedDSIDs;	// 0x3376f641
- (void)_fillContainerForQueryCriteria:(id)queryCriteria completionBlock:(id)block;	// 0x3376fe0d
- (void)_homeSharingGroupIDDidChangeNotification:(id)_homeSharingGroupID;	// 0x3376f12d
- (void)_scheduleUpdateCheck;	// 0x3376f95d
- (id)_tokenDataForMediaItem:(id)mediaItem;	// 0x3376fdb9
- (void)_willEnterForegroundNotification:(id)notification;	// 0x3376f251
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x3376ebfd
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block progressHandler:(id)handler;	// 0x3376d045
- (void)dealloc;	// 0x3376ceb5
- (void)disconnect;	// 0x3376d6fd
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x3376d749
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x3376ee01
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x3376db59
- (BOOL)hasGeniusMixes;	// 0x3376e835
// declared property getter: - (id)homeSharingLibrary;	// 0x337705ed
// declared property getter: - (BOOL)isSupportedSharingVersion;	// 0x3376f28d
- (id)itemResultSetForQueryCriteria:(id)queryCriteria;	// 0x3376e095
- (void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x3376e2cd
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x3376e431
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x3376e70d
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x3376dfb9
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x3376e741
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x3376dedd
- (void)loadQueryCriteria:(id)criteria countOfCollectionsWithCompletionBlock:(id)completionBlock;	// 0x3376ddfd
- (void)loadQueryCriteria:(id)criteria countOfItemsWithCompletionBlock:(id)completionBlock;	// 0x3376dd1d
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x3376dc3d
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x3376db5d
- (id)name;	// 0x3376cfe1
- (void)performUbiquitousDatabaseUpdateTransaction:(id)transaction;	// 0x3376db51
- (id)protectedContentSupportStorageURL;	// 0x3376f0b1
- (BOOL)requiresAuthentication;	// 0x3376d021
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)itemID;	// 0x3376efe9
- (void)setTokenData:(id)data forAuthorizedDSID:(unsigned long long)authorizedDSID;	// 0x3376f2c1
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x3376e839
- (id)uniqueIdentifier;	// 0x3376d001
- (void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values;	// 0x3376db55
@end

