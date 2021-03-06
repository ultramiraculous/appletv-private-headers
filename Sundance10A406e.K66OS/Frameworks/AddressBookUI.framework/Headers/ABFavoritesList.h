/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class ABFavoritesListManager;

@interface ABFavoritesList : NSObject {
	ABFavoritesListManager *_favoritesListManager;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x314660e5
+ (id)sharedInstanceWithAddressBook:(void *)addressBook;	// 0x3143aa61
- (id)initWithAddressBook:(void *)addressBook;	// 0x3143aaad
- (void)_applicationWillSuspend:(id)_application;	// 0x3145b985
- (void)addEntry:(id)entry;	// 0x31466195
- (BOOL)addEntryForPerson:(void *)person property:(int)property withIdentifier:(int)identifier;	// 0x3146629d
- (BOOL)containsEntryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x31466235
- (BOOL)containsEntryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x3143ae71
- (void)dealloc;	// 0x314660f9
- (id)entries;	// 0x31466155
- (id)entriesForPerson:(void *)person;	// 0x31466175
- (BOOL)entryIsDuplicateAndThusRemoved:(id)removed oldUid:(int)uid;	// 0x314662d1
- (id)entryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x3146625d
- (id)entryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x3146627d
- (BOOL)isFull;	// 0x3143ab69
- (void)moveEntryAtIndex:(int)index toIndex:(int)index2;	// 0x314661d5
- (void)recacheIdentitiesSoon;	// 0x31466215
- (void)removeEntryAtIndex:(int)index;	// 0x314661b5
- (void)save;	// 0x314661f5
@end

