/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderPrivate.h"
#import <NSObject.h> // Unknown library

@class NSArray, ML3MusicLibrary, NSString, NSSet;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
	dispatch_queue_s *_backgroundTaskQueue;	// 4 = 0x4
	unsigned _backgroundTask;	// 8 = 0x8
	unsigned _backgroundTaskCount;	// 12 = 0xc
	ML3MusicLibrary *_library;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(retain, nonatomic) ML3MusicLibrary *library;	// G=0x346be079; S=0x346b8eb5; @synthesize=_library
@property(readonly, assign, nonatomic) NSString *name;	// G=0x346b8fcd; 
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;	// G=0x346bb519; 
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;	// G=0x346bb539; 
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString *syncValidity;	// G=0x346bb569; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x346b9001; 
+ (id)_unadjustedValueForMPProperty:(id)mpproperty withDefaultValue:(id)defaultValue;	// 0x346bcb2d
- (id)initWithLibrary:(id)library;	// 0x346b8c35
- (void)_displayValuesDidChange:(id)_displayValues;	// 0x346bcf11
- (void)_dynamicPropertiesDidChange:(id)_dynamicProperties;	// 0x346bcef1
- (void)_libraryContentsDidChange:(id)_libraryContents;	// 0x346bced1
- (void)_loadEntitiesUsingFetchRequest:(id)request entityQuery:(id)query writeBlock:(id)block;	// 0x346bcf51
- (void)_loadProperties:(id)properties ofEntityWithIdentifier:(long long)identifier ML3EntityClass:(Class)aClass completionBlock:(id)block;	// 0x346bdaad
- (void)_loadValueForAggregateFunction:(id)aggregateFunction entityClass:(Class)aClass property:(id)property query:(id)query completionBlock:(id)block;	// 0x346bdce9
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)identifiers count:(unsigned)count entityClass:(Class)aClass;	// 0x346bde55
- (void)_syncGenerationDidChange:(id)_syncGeneration;	// 0x346bcf31
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x346badd9
- (void)addItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x346bafb1
- (long long)addPlaylistWithValuesForProperties:(id)properties;	// 0x346ba8c9
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x346bbced
- (void)dealloc;	// 0x346b8d99
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x346bb805
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x346b9911
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor itemBlock:(id)block collectionBlock:(id)block3;	// 0x346bb5c1
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x346b986d
- (BOOL)hasGeniusMixes;	// 0x346b94e9
- (BOOL)hasMediaOfType:(int)type;	// 0x346b9295
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x346b95bd
- (id)lastModifiedDate;	// 0x346b900d
// declared property getter: - (id)library;	// 0x346be079
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x346bb559
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x346bb561
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x346b9fe1
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x346b9ec9
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x346ba1fd
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x346ba1b1
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x346b9779
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x346b9685
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x346b9e69
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x346b9df5
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x346bb351
// declared property getter: - (id)name;	// 0x346b8fcd
- (void)performBackgroundTaskWithBlock:(id)block;	// 0x346bb88d
- (BOOL)performTransactionWithBlock:(id)block;	// 0x346ba3b5
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x346b9621
- (long long)playlistGeneration;	// 0x346b90fd
// declared property getter: - (id)preferredAudioLanguages;	// 0x346bb519
// declared property getter: - (id)preferredSubtitleLanguages;	// 0x346bb539
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;	// 0x346bb28d
- (void)removeItemsWithIdentifiers:(long long *)identifiers atFilteredIndexes:(id)filteredIndexes inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x346bb179
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;	// 0x346bad95
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;	// 0x346bad45
// declared property setter: - (void)setLibrary:(id)library;	// 0x346b8eb5
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x346ba525
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;	// 0x346ba839
- (unsigned long long)syncGenerationID;	// 0x346b90dd
// declared property getter: - (id)syncValidity;	// 0x346bb569
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x346bb86d
// declared property getter: - (id)uniqueIdentifier;	// 0x346b9001
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value timestamp:(double)timestamp;	// 0x346bb809
- (BOOL)writable;	// 0x346b9271
@end

