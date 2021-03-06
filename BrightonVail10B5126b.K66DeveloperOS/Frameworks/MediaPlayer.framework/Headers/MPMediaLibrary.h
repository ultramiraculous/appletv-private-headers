/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class QueryCriteriaResultsCache, NSDate, NSURL, NSHashTable, CADisplayLink, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue, MPMediaLibraryDataProviderPrivate;

@interface MPMediaLibrary : NSObject <NSCoding> {
	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;	// 4 = 0x4
	int _libraryChangeObservers;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_entityCacheQueue;	// 12 = 0xc
	QueryCriteriaResultsCache *_itemsForCriteriaCache;	// 16 = 0x10
	QueryCriteriaResultsCache *_hasItemsForCriteriaCache;	// 20 = 0x14
	QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;	// 24 = 0x18
	QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;	// 28 = 0x1c
	QueryCriteriaResultsCache *_collectionsForCriteriaCache;	// 32 = 0x20
	QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;	// 36 = 0x24
	QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;	// 40 = 0x28
	QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;	// 44 = 0x2c
	NSMutableDictionary *_hasItemsDidLoadForCriteria;	// 48 = 0x30
	NSMutableDictionary *_hasCollectionsDidLoadForCriteria;	// 52 = 0x34
	NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;	// 56 = 0x38
	NSMutableDictionary *_countOfItemsDidLoadForCriteria;	// 60 = 0x3c
	NSHashTable *_connectionAssertions;	// 64 = 0x40
	BOOL _disconnectAfterReleasingAssertions;	// 68 = 0x44
	float _connectionProgress;	// 72 = 0x48
	CADisplayLink *_connectionProgressDisplayLink;	// 76 = 0x4c
	double _connectionProgressStartTime;	// 80 = 0x50
	int _removalReason;	// 88 = 0x58
	unsigned _determinedHasMedia : 1;	// 92 = 0x5c
	unsigned _hasMedia : 1;	// 92 = 0x5c
	unsigned _determinedHasSongs : 1;	// 92 = 0x5c
	unsigned _hasSongs : 1;	// 92 = 0x5c
	unsigned _determinedHasGeniusMixes : 1;	// 92 = 0x5c
	unsigned _hasGeniusMixes : 1;	// 92 = 0x5c
	unsigned _determinedHasPlaylists : 1;	// 92 = 0x5c
	unsigned _hasPlaylists : 1;	// 92 = 0x5c
	unsigned _determinedHasComposers : 1;	// 93 = 0x5d
	unsigned _hasComposers : 1;	// 93 = 0x5d
	unsigned _determinedHasPodcasts : 1;	// 93 = 0x5d
	unsigned _hasPodcasts : 1;	// 93 = 0x5d
	unsigned _determinedHasUniversalBookmarkableItems : 1;	// 93 = 0x5d
	unsigned _hasUniversalBookmarkableContent : 1;	// 93 = 0x5d
	unsigned _determinedHasAudiobooks : 1;	// 93 = 0x5d
	unsigned _hasAudiobooks : 1;	// 93 = 0x5d
	BOOL _filteringDisabled;	// 94 = 0x5e
	BOOL _hasVideos;	// 95 = 0x5f
	BOOL _determinedHasVideos;	// 96 = 0x60
	BOOL _hasMusicVideos;	// 97 = 0x61
	BOOL _determinedHasMusicVideos;	// 98 = 0x62
	BOOL _hasAudibleAudioBooks;	// 99 = 0x63
	BOOL _determinedHasAudibleAudioBooks;	// 100 = 0x64
	BOOL _hasMovies;	// 101 = 0x65
	BOOL _determinedHasMovies;	// 102 = 0x66
	BOOL _hasCompilations;	// 103 = 0x67
	BOOL _determinedHasCompilations;	// 104 = 0x68
	BOOL _hasITunesU;	// 105 = 0x69
	BOOL _determinedHasITunesU;	// 106 = 0x6a
	BOOL _hasVideoITunesU;	// 107 = 0x6b
	BOOL _determinedHasVideoITunesU;	// 108 = 0x6c
	BOOL _hasMovieRentals;	// 109 = 0x6d
	BOOL _determinedHasMovieRentals;	// 110 = 0x6e
	BOOL _hasTVShows;	// 111 = 0x6f
	BOOL _determinedHasTVShows;	// 112 = 0x70
	BOOL _hasVideoPodcasts;	// 113 = 0x71
	BOOL _determinedHasVideoPodcasts;	// 114 = 0x72
	unsigned char _originalCellNetworkFlags;	// 115 = 0x73
	unsigned char _originalWiFiNetworkFlags;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) NSString *_syncValidity;	// G=0x31d14e55; 
@property(readonly, assign) float connectionProgress;	// G=0x31d11d8d; converted property
@property(readonly, assign) BOOL hasAudibleAudioBooks;	// G=0x31d10c29; converted property
@property(readonly, assign) BOOL hasCompilations;	// G=0x31d10d1d; converted property
@property(readonly, assign) BOOL hasMovieRentals;	// G=0x31d10e8d; converted property
@property(readonly, assign) BOOL hasMovies;	// G=0x31d10ca1; converted property
@property(readonly, assign) BOOL hasMusicVideos;	// G=0x31d10bad; converted property
@property(readonly, assign) BOOL hasTVShows;	// G=0x31d10f05; converted property
@property(readonly, assign) BOOL hasVideoPodcasts;	// G=0x31d10f81; converted property
@property(readonly, assign) BOOL hasVideos;	// G=0x31d10b31; converted property
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x31d0ff49; 
@property(readonly, assign, nonatomic) NSURL *protectedContentSupportStorageURL;	// G=0x31d14b7d; 
@property(assign, nonatomic) int removalReason;	// G=0x31d10171; S=0x31d10181; 
@property(retain) id ubiquitousBookmarkDomainVersionAnchorToken;	// G=0x31d11905; S=0x31d11871; converted property
@property(assign) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;	// G=0x31d118b9; S=0x31d11819; converted property
+ (id)_libraryDataProviders;	// 0x31d14749
+ (id)_libraryForDataProvider:(id)dataProvider;	// 0x31d14671
+ (id)_mediaLibraries;	// 0x31d144e9
+ (void)addLibraryDataProvider:(id)provider;	// 0x31d147c9
+ (void)beginDiscoveringMediaLibraries;	// 0x31d0f8c1
+ (id)defaultMediaLibrary;	// 0x31d0e39d
+ (id)deviceMediaLibrary;	// 0x31d0e685
+ (void)endDiscoveringMediaLibraries;	// 0x31d0f8dd
+ (void)initialize;	// 0x31d0e34d
+ (BOOL)isLibraryServerDisabled;	// 0x31d11dbd
+ (id)libraryDataProviders;	// 0x31d14791
+ (id)mediaLibraries;	// 0x31d1454d
+ (id)mediaLibraryWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x31d14585
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)libraryDataProvider;	// 0x31d14a31
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)libraryDataProvider;	// 0x31d149d9
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)libraryDataProvider;	// 0x31d14a05
+ (void)reloadLibraryDataProvider:(id)provider;	// 0x31d149ad
+ (void)removeLibraryDataProvider:(id)provider removalReason:(int)reason;	// 0x31d148c1
+ (void)setDefaultMediaLibrary:(id)library;	// 0x31d0e515
+ (void)setLibraryServerDisabled:(BOOL)disabled;	// 0x31d11dc1
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x31d11dc5
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)syncGeneration;	// 0x31d14aad
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)uniqueIdentifier;	// 0x31d14b01
- (id)init;	// 0x31d0e6f1
- (id)initWithCoder:(id)coder;	// 0x31d0ee3d
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined mediaType:(int)type queryHasEntitiesBlock:(id)block;	// 0x31d10ac1
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined queryHasEntitiesBlock:(id)block;	// 0x31d10aa1
- (void)_clearCachedContentDataAndResultSets:(BOOL)sets withCompletionBlock:(id)completionBlock;	// 0x31d0f1ad
- (void)_clearCachedEntitiesIncludingResultSets:(BOOL)sets completionBlock:(id)block;	// 0x31d0f065
- (void)_clearPendingDisconnection;	// 0x31d13d11
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)queryCriteria;	// 0x31d13961
- (id)_collectionsForQueryCriteria:(id)queryCriteria;	// 0x31d13d69
- (void)_connectionProgressDisplayLinkCallback:(id)callback;	// 0x31d141b1
- (unsigned)_countOfCollectionsForQueryCriteria:(id)queryCriteria;	// 0x31d13455
- (unsigned)_countOfItemsForQueryCriteria:(id)queryCriteria;	// 0x31d132f9
- (void)_didReceiveMemoryWarning:(id)warning;	// 0x31d0f7f9
- (void)_displayValuesDidChangeNotification:(id)_displayValues;	// 0x31d0f80d
- (void)_enabledMediaTypesDidChangeNotification:(id)_enabledMediaTypes;	// 0x31d0f875
- (id)_getCachedValueForQueryCritiera:(id)queryCritiera valueCriteriaCache:(id)cache entitiesForCriteriaCache:(id)criteriaCache didLoadBlocksByQueryCriteria:(id)criteria valueLoadedFromEntitiesArrayBlock:(id)entitiesArrayBlock loadValueFromDataProviderBlock:(id)dataProviderBlock;	// 0x31d1273d
- (BOOL)_hasCollectionsForQueryCriteria:(id)queryCriteria;	// 0x31d13195
- (BOOL)_hasItemsForQueryCriteria:(id)queryCriteria;	// 0x31d13031
- (id)_initWithLibraryDataProvider:(id)libraryDataProvider;	// 0x31d143f1
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)queryCriteria;	// 0x31d135b1
- (id)_itemsForQueryCriteria:(id)queryCriteria;	// 0x31d1226d
- (unsigned long long)_persistentIDForAssetURL:(id)assetURL;	// 0x31d11e59
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)notificationInfo;	// 0x31d0f47d
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)notificationInfo;	// 0x31d0f60d
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)notificationInfo;	// 0x31d0f79d
- (void)_reloadLibraryForRestrictionsChange;	// 0x31d0f31d
- (void)_removeConnectionAssertion:(id)assertion;	// 0x31d14271
- (id)_sanitizeQueryCriteriaForQueryCriteria:(id)queryCriteria;	// 0x31d13d25
- (void)_stopConnectionProgressDisplayLink;	// 0x31d14349
// declared property getter: - (id)_syncValidity;	// 0x31d14e55
- (id)addPlaylistWithName:(id)name;	// 0x31d112b1
- (id)addPlaylistWithName:(id)name activeGeniusPlaylist:(BOOL)playlist;	// 0x31d112c5
- (void)beginGeneratingLibraryChangeNotifications;	// 0x31d0f8f9
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block;	// 0x31d11b21
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x31d0f90d
- (id)connectionAssertionWithIdentifier:(id)identifier;	// 0x31d11ba1
// converted property getter: - (float)connectionProgress;	// 0x31d11d8d
- (unsigned long long)currentEntityRevision;	// 0x31d0ffad
- (void)dealloc;	// 0x31d0ea39
- (id)description;	// 0x31d0ec49
- (void)disconnect;	// 0x31d0fe91
- (void)downloadAsset:(id)asset completionHandler:(id)handler;	// 0x31d115f5
- (void)downloadItem:(id)item completionHandler:(id)handler;	// 0x31d1156d
- (void)encodeWithCoder:(id)coder;	// 0x31d0ed55
- (void)endGeneratingLibraryChangeNotifications;	// 0x31d0ff31
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor usingBlock:(id)block;	// 0x31d14e75
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x31d35b85
- (BOOL)hasAlbums;	// 0x31d10701
- (BOOL)hasArtists;	// 0x31d106e9
// converted property getter: - (BOOL)hasAudibleAudioBooks;	// 0x31d10c29
- (BOOL)hasAudiobooks;	// 0x31d109dd
// converted property getter: - (BOOL)hasCompilations;	// 0x31d10d1d
- (BOOL)hasComposers;	// 0x31d10965
- (BOOL)hasGeniusMixes;	// 0x31d105c5
- (BOOL)hasGenres;	// 0x31d1094d
- (BOOL)hasITunesUContent;	// 0x31d10d95
- (BOOL)hasMedia;	// 0x31d104dd
- (BOOL)hasMediaOfType:(int)type;	// 0x31d1046d
// converted property getter: - (BOOL)hasMovieRentals;	// 0x31d10e8d
// converted property getter: - (BOOL)hasMovies;	// 0x31d10ca1
// converted property getter: - (BOOL)hasMusicVideos;	// 0x31d10bad
- (BOOL)hasPlaylists;	// 0x31d10671
- (BOOL)hasPodcasts;	// 0x31d107dd
- (BOOL)hasSongs;	// 0x31d10719
// converted property getter: - (BOOL)hasTVShows;	// 0x31d10f05
- (BOOL)hasUniversalBookmarkableItems;	// 0x31d108a1
- (BOOL)hasVideoITunesUContent;	// 0x31d10e11
// converted property getter: - (BOOL)hasVideoPodcasts;	// 0x31d10f81
// converted property getter: - (BOOL)hasVideos;	// 0x31d10b31
- (unsigned)hash;	// 0x31d0ed2d
- (BOOL)isArtworkIdenticalForItem:(id)item otherItem:(id)item2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x31d114d5
- (BOOL)isEqual:(id)equal;	// 0x31d0ecbd
- (BOOL)isGeniusEnabled;	// 0x31d11a01
- (BOOL)isValidAssetURL:(id)url;	// 0x31d11dc9
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x31d1204d
- (id)itemWithPersistentID:(unsigned long long)persistentID;	// 0x31d10ffd
- (id)itemWithPersistentID:(unsigned long long)persistentID verifyExistence:(BOOL)existence;	// 0x31d11021
- (id)itemWithStoreID:(unsigned long long)storeID;	// 0x31d11075
// declared property getter: - (id)lastModifiedDate;	// 0x31d0ff49
- (id)libraryDataProvider;	// 0x31d144d9
- (BOOL)libraryHasBeenModifiedWithToken:(id)token;	// 0x31d1032d
- (id)modificationToken;	// 0x31d101b1
- (id)name;	// 0x31d10151
- (id)newPlaylistWithPersistentID:(unsigned long long)persistentID;	// 0x31d110f1
- (id)pathForAssetURL:(id)assetURL;	// 0x31d11de5
- (void)performReadTransactionWithBlock:(id)block;	// 0x31d11d29
- (BOOL)performTransactionWithBlock:(id)block;	// 0x31d11ccd
- (void)performUbiquitousDatabaseUpdateTransaction:(id)transaction;	// 0x31d1194d
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x31d1215d
- (long long)playlistGeneration;	// 0x31d10045
- (id)playlistWithPersistentID:(unsigned long long)persistentID;	// 0x31d11289
- (void)populateLocationPropertiesOfItem:(id)item withPath:(id)path;	// 0x31d117a9
- (id)preferredAudioLanguages;	// 0x31d11a49
- (id)preferredSubtitleLanguages;	// 0x31d11a91
// declared property getter: - (id)protectedContentSupportStorageURL;	// 0x31d14b7d
// declared property getter: - (int)removalReason;	// 0x31d10171
- (BOOL)removeItems:(id)items;	// 0x31d113a5
- (BOOL)removePlaylist:(id)playlist;	// 0x31d1146d
- (BOOL)requiresAuthentication;	// 0x31d11ad9
// declared property setter: - (void)setRemovalReason:(int)reason;	// 0x31d10181
// converted property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;	// 0x31d11871
// converted property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;	// 0x31d11819
- (int)status;	// 0x31d100dd
- (unsigned long long)syncGenerationID;	// 0x31d0fff9
- (id)syncValidity;	// 0x31d11d9d
// converted property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;	// 0x31d11905
// converted property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;	// 0x31d118b9
- (id)uniqueIdentifier;	// 0x31d10191
- (void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values timestamp:(double)timestamp;	// 0x31d119a5
- (BOOL)writable;	// 0x31d10095
@end

