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
+ (id)sharedInstance;	// 0x33768da5
+ (id)sharedInstanceWithAddressBook:(void *)addressBook;	// 0x33768dc5
- (id)initWithAddressBook:(void *)addressBook;	// 0x337690b5
- (void)_addEntryToMap:(id)map;	// 0x33769805
- (void)_delayedLookup;	// 0x3376a1f9
- (void)_entryIdentityChanged:(id)changed;	// 0x33769b05
- (void)_listChangedExternally;	// 0x33769bf5
- (void)_loadList;	// 0x33769095
- (void)_loadListWithAddressBook:(void *)addressBook;	// 0x33768e11
- (void)_postChangeNotification;	// 0x33769bb1
- (void)_removeEntryFromMap:(id)map withUid:(int)uid;	// 0x33769945
- (void)_scheduleSave;	// 0x33769259
- (BOOL)_writeFavoritesToFile:(id)file;	// 0x33769ef9
- (void)addEntry:(id)entry;	// 0x33769c95
- (BOOL)addEntryForPerson:(void *)person property:(int)property withIdentifier:(int)identifier;	// 0x33769769
- (BOOL)containsEntryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x33769725
- (BOOL)containsEntryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x33769741
- (void)dealloc;	// 0x3376919d
- (id)entries;	// 0x337692d9
- (id)entriesForPeople:(id)people;	// 0x3376936d
- (id)entriesForPerson:(void *)person;	// 0x33769501
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property identifier:(int)identifier value:(id)value label:(id)label;	// 0x33769545
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property value:(id)value label:(id)label;	// 0x33769675
- (BOOL)entryIsDuplicateAndThusRemoved:(id)removed oldUid:(int)uid;	// 0x3376a225
- (id)entryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x337696fd
- (id)entryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x337696ad
- (BOOL)isFull;	// 0x33769315
- (void)moveEntryAtIndex:(int)index toIndex:(int)index2;	// 0x33769e3d
- (void)recacheIdentitiesSoon;	// 0x3376a1c1
- (void)removeAllEntries;	// 0x3376a3cd
- (void)removeEntryAtIndex:(int)index;	// 0x33769d81
- (void)save;	// 0x3376a051
- (void)saveImmediately;	// 0x33769aa5
@end

