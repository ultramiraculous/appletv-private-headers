/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ABFavoritesListManager : NSObject {
@private
	void *_addressBook;	// 4 = 0x4
	NSMutableArray *_list;	// 8 = 0x8
	CFDictionaryRef _uidToEntry;	// 12 = 0xc
	struct {
		unsigned dirty : 1;
		unsigned postCount : 1;
		unsigned needsReload : 1;
		unsigned unused : 29;
	} _flags;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x30a0fc3d
+ (id)sharedInstanceWithAddressBook:(void *)addressBook;	// 0x30a0fc5d
- (id)initWithAddressBook:(void *)addressBook;	// 0x30a0ff4d
- (void)_addEntryToMap:(id)map;	// 0x30a1069d
- (void)_delayedLookup;	// 0x30a11085
- (void)_entryIdentityChanged:(id)changed;	// 0x30a1099d
- (void)_listChangedExternally;	// 0x30a10a8d
- (void)_loadList;	// 0x30a0ff2d
- (void)_loadListWithAddressBook:(void *)addressBook;	// 0x30a0fca9
- (void)_postChangeNotification;	// 0x30a10a49
- (void)_removeEntryFromMap:(id)map withUid:(int)uid;	// 0x30a107dd
- (void)_scheduleSave;	// 0x30a100f1
- (BOOL)_writeFavoritesToFile:(id)file;	// 0x30a10d91
- (void)addEntry:(id)entry;	// 0x30a10b2d
- (BOOL)addEntryForPerson:(void *)person property:(int)property withIdentifier:(int)identifier;	// 0x30a10601
- (BOOL)containsEntryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x30a105bd
- (BOOL)containsEntryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x30a105d9
- (void)dealloc;	// 0x30a10035
- (id)entries;	// 0x30a10171
- (id)entriesForPeople:(id)people;	// 0x30a10205
- (id)entriesForPerson:(void *)person;	// 0x30a10399
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property identifier:(int)identifier value:(id)value label:(id)label;	// 0x30a103dd
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property value:(id)value label:(id)label;	// 0x30a1050d
- (BOOL)entryIsDuplicateAndThusRemoved:(id)removed oldUid:(int)uid;	// 0x30a110b1
- (id)entryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x30a10595
- (id)entryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x30a10545
- (BOOL)isFull;	// 0x30a101ad
- (void)moveEntryAtIndex:(int)index toIndex:(int)index2;	// 0x30a10cd5
- (void)recacheIdentitiesSoon;	// 0x30a1104d
- (void)removeAllEntries;	// 0x30a11255
- (void)removeEntryAtIndex:(int)index;	// 0x30a10c19
- (void)save;	// 0x30a10edd
- (void)saveImmediately;	// 0x30a1093d
@end

