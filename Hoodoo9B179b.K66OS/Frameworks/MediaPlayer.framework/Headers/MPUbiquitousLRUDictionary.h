/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSUbiquitousKeyValueStore, NSArray, NSMutableArray, MPUbiquitousLRUDictionaryEntry, NSString, NSSet;

@interface MPUbiquitousLRUDictionary : NSObject {
@private
	NSString *_ubiquitousStorageKey;	// 4 = 0x4
	unsigned _maxEntriesCount;	// 8 = 0x8
	NSUbiquitousKeyValueStore *_store;	// 12 = 0xc
	NSMutableArray *_observers;	// 16 = 0x10
	NSArray *_localEntries;	// 20 = 0x14
	int _transactionOpenCount;	// 24 = 0x18
	id _mergeResolver;	// 28 = 0x1c
	BOOL _scheduledDeferredCommit;	// 32 = 0x20
	BOOL _postedWillCommit;	// 33 = 0x21
}
@property(readonly, assign, nonatomic) NSSet *entries;	// G=0x309ed6bd; 
@property(retain, nonatomic) NSArray *localEntries;	// G=0x309ec525; S=0x309ec44d; @synthesize=_localEntries
@property(readonly, assign, nonatomic) unsigned maxEntriesCount;	// G=0x309ed775; @synthesize=_maxEntriesCount
@property(readonly, assign, nonatomic) MPUbiquitousLRUDictionaryEntry *newestEntry;	// G=0x309ed6f5; 
@property(retain, nonatomic) NSArray *observers;	// G=0x309ed785; S=0x309ed795; @synthesize=_observers
@property(readonly, assign, nonatomic) MPUbiquitousLRUDictionaryEntry *oldestEntry;	// G=0x309ed73d; 
@property(readonly, assign, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;	// G=0x309ec1a5; 
@property(readonly, assign, nonatomic) NSString *ubiquitousStorageKey;	// G=0x309ed765; @synthesize=_ubiquitousStorageKey
- (id)initForBundleIdentifier:(id)bundleIdentifier storageKeyPrefix:(id)prefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x309ec0f5
- (id)initWithStorageDomain:(id)storageDomain storageKeyPrefix:(id)prefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x309ec045
- (void)_commonInitWithStorageKeyPrefix:(id)storageKeyPrefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x309ebb1d
- (id)_entryByMergingLocalEntry:(id)entry withEntry:(id)entry2;	// 0x309ec789
- (id)_mergeLocalWithU9Entries;	// 0x309ec855
- (void)_notifyExternalChange:(id)change;	// 0x309ec2a5
- (void)_notifyExternalQuotaViolation;	// 0x309ec399
- (void)_storeU9Entries:(id)entries commitImmediately:(BOOL)immediately;	// 0x309eccf1
- (void)_synchronize;	// 0x309ec251
- (void)_synchronizeNow;	// 0x309eccbd
- (id)_timestampOrderedLocalEntries;	// 0x309ec56d
- (id)_timestampOrderedU9Entries;	// 0x309ec57d
- (void)addObserver:(id)observer;	// 0x309ec40d
- (void)addUbiquitousEntry:(id)entry;	// 0x309ed119
- (void)beginTransaction;	// 0x309ed0d1
- (void)commitTransaction;	// 0x309ed0e5
- (void)dealloc;	// 0x309ec1b5
// declared property getter: - (id)entries;	// 0x309ed6bd
// declared property getter: - (id)localEntries;	// 0x309ec525
// declared property getter: - (unsigned)maxEntriesCount;	// 0x309ed775
// declared property getter: - (id)newestEntry;	// 0x309ed6f5
// declared property getter: - (id)observers;	// 0x309ed785
// declared property getter: - (id)oldestEntry;	// 0x309ed73d
- (void)removeObserver:(id)observer;	// 0x309ec42d
// declared property setter: - (void)setLocalEntries:(id)entries;	// 0x309ec44d
// declared property setter: - (void)setObservers:(id)observers;	// 0x309ed795
- (void)setUbiquitousValue:(id)value forKey:(id)key;	// 0x309ed575
// declared property getter: - (id)ubiquitousKeyValueStore;	// 0x309ec1a5
// declared property getter: - (id)ubiquitousStorageKey;	// 0x309ed765
- (id)ubiquitousValueForKey:(id)key;	// 0x309ed5f5
@end
