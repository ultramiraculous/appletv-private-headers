/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface MPMediaLibrary : NSObject <NSCoding> {
@private
	MPMediaLibraryInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaLibraryInternal _internal;	// G=0x34e27525; S=0x34e27541; @synthesize
@property(readonly, assign, nonatomic) NSString *_syncValidity;	// G=0x34e2782d; 
@property(assign, getter=isFilteringDisabled) BOOL filteringDisabled;	// G=0x34e262d9; S=0x34e262f1; converted property
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x34e24719; 
@property(assign, nonatomic) int removalReason;	// G=0x34e248ed; S=0x34e24901; 
+ (id)_libraryDataProviders;	// 0x34e271ad
+ (id)_libraryForDataProvider:(id)dataProvider;	// 0x34e270f5
+ (id)_mediaLibraries;	// 0x34e26f8d
+ (void)addLibraryDataProvider:(id)provider;	// 0x34e2722d
+ (void)beginDiscoveringMediaLibraries;	// 0x34e24145
+ (id)defaultMediaLibrary;	// 0x34e23689
+ (id)deviceMediaLibrary;	// 0x34e237bd
+ (void)endDiscoveringMediaLibraries;	// 0x34e24161
+ (BOOL)isLibraryServerDisabled;	// 0x34e2605d
+ (id)libraryDataProviders;	// 0x34e271f5
+ (id)mediaLibraries;	// 0x34e26ff1
+ (id)mediaLibraryWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x34e27029
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)libraryDataProvider;	// 0x34e27459
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)libraryDataProvider;	// 0x34e2742d
+ (void)reloadLibraryDataProvider:(id)provider;	// 0x34e27401
+ (void)removeLibraryDataProvider:(id)provider removalReason:(int)reason;	// 0x34e2731d
+ (void)setDefaultMediaLibrary:(id)library;	// 0x34e236b1
+ (void)setLibraryServerDisabled:(BOOL)disabled;	// 0x34e26061
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x34e26065
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)syncGeneration;	// 0x34e274d1
- (id)init;	// 0x34e23805
- (id)initWithCoder:(id)coder;	// 0x34e23c8d
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined mediaType:(int)type queryIsEmptyBlock:(id)block;	// 0x34e251ad
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined queryIsEmptyBlock:(id)block;	// 0x34e25181
- (void)_clearCachedContentData;	// 0x34e23f35
- (void)_clearCachedEntities;	// 0x34e23e8d
- (void)_clearPendingDisconnection;	// 0x34e26809
- (id)_collectionsForQueryCriteria:(id)queryCriteria;	// 0x34e2681d
- (void)_connectionProgressDisplayLinkCallback:(id)callback;	// 0x34e26c91
- (void)_didReceiveMemoryWarning:(id)warning;	// 0x34e240d9
- (void)_displayValuesDidChangeNotification:(id)_displayValues;	// 0x34e240e9
- (id)_initWithLibraryDataProvider:(id)libraryDataProvider;	// 0x34e26e7d
// declared property getter: - (MPMediaLibraryInternal)_internal;	// 0x34e27525
- (id)_itemsForQueryCriteria:(id)queryCriteria;	// 0x34e26565
- (unsigned long long)_persistentIDForAssetURL:(id)assetURL;	// 0x34e260fd
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)notificationInfo;	// 0x34e23ff9
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)notificationInfo;	// 0x34e24069
- (void)_removeConnectionAssertion:(id)assertion;	// 0x34e26d45
- (void)_stopConnectionProgressDisplayLink;	// 0x34e26dc5
// declared property getter: - (id)_syncValidity;	// 0x34e2782d
- (id)addPlaylistWithName:(id)name;	// 0x34e25939
- (id)addPlaylistWithName:(id)name activeGeniusPlaylist:(BOOL)playlist;	// 0x34e2594d
- (void)beginGeneratingLibraryChangeNotifications;	// 0x34e2417d
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block;	// 0x34e25e99
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x34e24195
- (id)connectionAssertionWithIdentifier:(id)identifier;	// 0x34e25f1d
- (float)connectionProgress;	// 0x34e26029
- (void)dealloc;	// 0x34e23999
- (id)description;	// 0x34e23aa9
- (void)disconnect;	// 0x34e2467d
- (void)downloadItem:(id)item completionHandler:(id)handler;	// 0x34e25c05
- (void)encodeWithCoder:(id)coder;	// 0x34e23bb1
- (void)endGeneratingLibraryChangeNotifications;	// 0x34e246fd
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor usingBlock:(id)block;	// 0x34e2784d
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x34e4a649
- (BOOL)hasAlbums;	// 0x34e24e61
- (BOOL)hasArtists;	// 0x34e24e49
- (BOOL)hasAudibleAudioBooks;	// 0x34e25331
- (BOOL)hasAudiobooks;	// 0x34e250b5
- (BOOL)hasCompilations;	// 0x34e25435
- (BOOL)hasComposers;	// 0x34e25029
- (BOOL)hasGeniusMixes;	// 0x34e24d41
- (BOOL)hasGenres;	// 0x34e25011
- (BOOL)hasITunesUContent;	// 0x34e254b5
- (BOOL)hasMedia;	// 0x34e24c55
- (BOOL)hasMediaOfType:(int)type;	// 0x34e24be1
- (BOOL)hasMovieRentals;	// 0x34e25539
- (BOOL)hasMovies;	// 0x34e253b1
- (BOOL)hasMusicVideos;	// 0x34e252ad
- (BOOL)hasPlaylists;	// 0x34e24dbd
- (BOOL)hasPodcasts;	// 0x34e24f45
- (BOOL)hasSongs;	// 0x34e24e79
- (BOOL)hasTVShows;	// 0x34e255b9
- (BOOL)hasVideoPodcasts;	// 0x34e2563d
- (BOOL)hasVideos;	// 0x34e25229
- (unsigned)hash;	// 0x34e23b89
- (BOOL)isArtworkIdenticalForItem:(id)item otherItem:(id)item2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x34e25b65
- (BOOL)isEqual:(id)equal;	// 0x34e23b1d
// converted property getter: - (BOOL)isFilteringDisabled;	// 0x34e262d9
- (BOOL)isGeniusEnabled;	// 0x34e25d79
- (BOOL)isValidAssetURL:(id)url;	// 0x34e26069
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x34e26315
- (id)itemWithPersistentID:(unsigned long long)persistentID;	// 0x34e256c1
- (id)itemWithPersistentID:(unsigned long long)persistentID verifyExistence:(BOOL)existence;	// 0x34e256e5
// declared property getter: - (id)lastModifiedDate;	// 0x34e24719
- (id)libraryDataProvider;	// 0x34e26f7d
- (BOOL)libraryHasBeenModifiedWithToken:(id)token;	// 0x34e24aa9
- (id)modificationToken;	// 0x34e24935
- (id)name;	// 0x34e248cd
- (id)newPlaylistWithPersistentID:(unsigned long long)persistentID;	// 0x34e25769
- (id)pathForAssetURL:(id)assetURL;	// 0x34e26089
- (BOOL)performTransactionWithBlock:(id)block;	// 0x34e25fd1
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x34e2643d
- (long long)playlistGeneration;	// 0x34e247c1
- (id)playlistWithPersistentID:(unsigned long long)persistentID;	// 0x34e25911
- (id)preferredAudioLanguages;	// 0x34e25dc1
- (id)preferredSubtitleLanguages;	// 0x34e25e09
// declared property getter: - (int)removalReason;	// 0x34e248ed
- (BOOL)removeItems:(id)items;	// 0x34e25a25
- (BOOL)removePlaylist:(id)playlist;	// 0x34e25af9
- (BOOL)requiresAuthentication;	// 0x34e25e51
// converted property setter: - (void)setFilteringDisabled:(BOOL)disabled;	// 0x34e262f1
// declared property setter: - (void)setRemovalReason:(int)reason;	// 0x34e24901
// declared property setter: - (void)set_internal:(MPMediaLibraryInternal)internal;	// 0x34e27541
- (int)status;	// 0x34e24855
- (unsigned long long)syncGenerationID;	// 0x34e24775
- (id)syncValidity;	// 0x34e2603d
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x34e25cf1
- (id)uniqueIdentifier;	// 0x34e24915
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value timestamp:(double)timestamp;	// 0x34e25c89
- (BOOL)writable;	// 0x34e2480d
@end

