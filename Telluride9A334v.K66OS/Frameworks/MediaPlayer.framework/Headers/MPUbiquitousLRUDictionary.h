/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, MPUbiquitousLRUDictionaryEntry, NSString, NSUbiquitousKeyValueStore, NSSet;

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
@property(readonly, assign, nonatomic) NSSet *entries;	// G=0x34e83f91; 
@property(retain, nonatomic) NSArray *localEntries;	// G=0x34e82df9; S=0x34e82d21; @synthesize=_localEntries
@property(readonly, assign, nonatomic) unsigned maxEntriesCount;	// G=0x34e84049; @synthesize=_maxEntriesCount
@property(readonly, assign, nonatomic) MPUbiquitousLRUDictionaryEntry *newestEntry;	// G=0x34e83fc9; 
@property(retain, nonatomic) NSArray *observers;	// G=0x34e84059; S=0x34e84069; @synthesize=_observers
@property(readonly, assign, nonatomic) MPUbiquitousLRUDictionaryEntry *oldestEntry;	// G=0x34e84011; 
@property(readonly, assign, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;	// G=0x34e82a79; 
@property(readonly, assign, nonatomic) NSString *ubiquitousStorageKey;	// G=0x34e84039; @synthesize=_ubiquitousStorageKey
- (id)initForBundleIdentifier:(id)bundleIdentifier storageKeyPrefix:(id)prefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x34e829c9
- (id)initWithStorageDomain:(id)storageDomain storageKeyPrefix:(id)prefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x34e82919
- (void)_commonInitWithStorageKeyPrefix:(id)storageKeyPrefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x34e823f1
- (id)_entryByMergingLocalEntry:(id)entry withEntry:(id)entry2;	// 0x34e8305d
- (id)_mergeLocalWithU9Entries;	// 0x34e83129
- (void)_notifyExternalChange:(id)change;	// 0x34e82b79
- (void)_notifyExternalQuotaViolation;	// 0x34e82c6d
- (void)_storeU9Entries:(id)entries commitImmediately:(BOOL)immediately;	// 0x34e835c5
- (void)_synchronize;	// 0x34e82b25
- (void)_synchronizeNow;	// 0x34e83591
- (id)_timestampOrderedLocalEntries;	// 0x34e82e41
- (id)_timestampOrderedU9Entries;	// 0x34e82e51
- (void)addObserver:(id)observer;	// 0x34e82ce1
- (void)addUbiquitousEntry:(id)entry;	// 0x34e839ed
- (void)beginTransaction;	// 0x34e839a5
- (void)commitTransaction;	// 0x34e839b9
- (void)dealloc;	// 0x34e82a89
// declared property getter: - (id)entries;	// 0x34e83f91
// declared property getter: - (id)localEntries;	// 0x34e82df9
// declared property getter: - (unsigned)maxEntriesCount;	// 0x34e84049
// declared property getter: - (id)newestEntry;	// 0x34e83fc9
// declared property getter: - (id)observers;	// 0x34e84059
// declared property getter: - (id)oldestEntry;	// 0x34e84011
- (void)removeObserver:(id)observer;	// 0x34e82d01
// declared property setter: - (void)setLocalEntries:(id)entries;	// 0x34e82d21
// declared property setter: - (void)setObservers:(id)observers;	// 0x34e84069
- (void)setUbiquitousValue:(id)value forKey:(id)key;	// 0x34e83e49
// declared property getter: - (id)ubiquitousKeyValueStore;	// 0x34e82a79
// declared property getter: - (id)ubiquitousStorageKey;	// 0x34e84039
- (id)ubiquitousValueForKey:(id)key;	// 0x34e83ec9
@end

