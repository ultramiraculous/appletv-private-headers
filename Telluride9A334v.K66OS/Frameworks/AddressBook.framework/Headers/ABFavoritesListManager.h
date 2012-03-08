/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library
#import "AddressBook-Structs.h"

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
+ (id)sharedInstance;	// 0x35ab0aed
+ (id)sharedInstanceWithAddressBook:(void *)addressBook;	// 0x35ab0b0d
- (id)initWithAddressBook:(void *)addressBook;	// 0x35ab14a1
- (void)_addEntryToMap:(id)map;	// 0x35ab10f9
- (void)_delayedLookup;	// 0x35ab0abd
- (void)_entryIdentityChanged:(id)changed;	// 0x35ab0731
- (void)_listChangedExternally;	// 0x35ab0efd
- (void)_loadList;	// 0x35ab02a5
- (void)_loadListWithAddressBook:(void *)addressBook;	// 0x35ab1579
- (void)_postChangeNotification;	// 0x35ab07d9
- (void)_removeEntryFromMap:(id)map withUid:(int)uid;	// 0x35ab0f8d
- (void)_scheduleSave;	// 0x35ab02d9
- (BOOL)_writeFavoritesToFile:(id)file;	// 0x35ab0e71
- (void)addEntry:(id)entry;	// 0x35ab081d
- (BOOL)addEntryForPerson:(void *)person property:(int)property withIdentifier:(int)identifier;	// 0x35ab0641
- (BOOL)containsEntryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x35ab05f5
- (BOOL)containsEntryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x35ab0615
- (void)dealloc;	// 0x35ab13e5
- (id)entries;	// 0x35ab0359
- (id)entriesForPeople:(id)people;	// 0x35ab1279
- (id)entriesForPerson:(void *)person;	// 0x35ab03f1
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property identifier:(int)identifier value:(id)value label:(id)label;	// 0x35ab0435
- (id)entryFromEntries:(id)entries type:(int)type property:(int)property value:(id)value label:(id)label;	// 0x35ab0555
- (BOOL)entryIsDuplicateAndThusRemoved:(id)removed oldUid:(int)uid;	// 0x35ab0ba1
- (id)entryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x35ab05cd
- (id)entryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x35ab0589
- (BOOL)isFull;	// 0x35ab0395
- (void)moveEntryAtIndex:(int)index toIndex:(int)index2;	// 0x35ab09c9
- (void)recacheIdentitiesSoon;	// 0x35ab0a85
- (void)removeAllEntries;	// 0x35ab0b59
- (void)removeEntryAtIndex:(int)index;	// 0x35ab0909
- (void)save;	// 0x35ab0d05
- (void)saveImmediately;	// 0x35ab06d9
@end
