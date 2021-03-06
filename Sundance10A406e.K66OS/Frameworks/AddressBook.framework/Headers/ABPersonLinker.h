/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSMutableDictionary *_peopleByFirstName;	// 8 = 0x8
	NSMutableDictionary *_peopleByLastName;	// 12 = 0xc
	NSMutableDictionary *_peopleByOrganization;	// 16 = 0x10
}
+ (BOOL)isLinkDataValidForAddressBook:(void *)addressBook;	// 0x329be835
+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)addressBook inProcess:(BOOL)process;	// 0x329be855
- (id)init;	// 0x329be9a1
- (id)initWithAddressBook:(void *)addressBook;	// 0x329be955
- (void)addPerson:(void *)person toDictionary:(id)dictionary withProperty:(int)property;	// 0x329bfa69
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)rowidgreatThan withLimit:(int)limit;	// 0x329c0425
- (void)dealloc;	// 0x329bea1d
- (void)linkNewlyAddedPerson:(void *)person;	// 0x329c0631
- (void)linkRecentlyAddedPeople;	// 0x329c061d
- (BOOL)linkRecentlyAddedPeopleWithLimit:(int)limit;	// 0x329c04cd
- (void)makeInitialLinks;	// 0x329c0411
- (void)makeInitialLinksCountingOuterIterations:(int *)iterations;	// 0x329c03f1
- (void)makeLinksForAddedPeople:(id)addedPeople inInitialLinking:(BOOL)initialLinking countingOuterIterations:(int *)iterations;	// 0x329bfcf1
- (id)otherPeopleInArray:(id)array matchingPerson:(void *)person;	// 0x329bf299
- (id)otherPeopleInDatabaseMatchingPerson:(void *)databaseMatchingPerson notIncludingPeople:(id)people;	// 0x329beaa9
- (void)presortPeople:(id)people;	// 0x329bfb29
- (void)removeAllLinks;	// 0x329c02b9
- (BOOL)shouldLinkPerson:(void *)person toPeopleInDatabase:(id)database andNewlyAddedPeople:(id)people inInitialLinking:(BOOL)initialLinking;	// 0x329bf605
- (id)suggestedPeopleToLinkWithPerson:(void *)person isInitialLinking:(BOOL)linking;	// 0x329bfa15
@end

