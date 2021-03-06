/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABFavoritesEntry : NSObject {
	int _abUid;	// 4 = 0x4
	int _abIdentifier;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
	int _property;	// 16 = 0x10
	int _type;	// 20 = 0x14
	unsigned _dirty : 1;	// 24 = 0x18
	NSString *_label;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_abDatabaseUUID;	// 36 = 0x24
	void *_addressBook;	// 40 = 0x28
}
@property(readonly, retain) NSString *label;	// G=0x308b7e8d; converted property
@property(readonly, assign) int property;	// G=0x308b7e7d; converted property
@property(readonly, assign) int type;	// G=0x308b7f05; converted property
@property(readonly, retain) NSString *value;	// G=0x308b7ee5; converted property
+ (void)_runLookup;	// 0x308b8015
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x308b7969
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x308b797d
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x308b77d5
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x308b77f9
- (void *)ABPerson;	// 0x308b7f15
- (int)_abUid;	// 0x308b7f41
- (void)_lookupChanged:(id)changed;	// 0x308b8a9d
- (void)_lookupNotFound;	// 0x308b89c5
- (void)_postEntryChanged;	// 0x308b897d
- (void)_queueLookup;	// 0x308b8831
- (void)_unqueueLookup;	// 0x308b891d
- (void)dealloc;	// 0x308b7bad
- (id)dictionaryRepresentation;	// 0x308b7c61
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x308b7e09
- (id)displayName;	// 0x308b7e45
- (int)identifier;	// 0x308b7ef5
- (BOOL)isEqual:(id)equal;	// 0x308b7f51
// converted property getter: - (id)label;	// 0x308b7e8d
- (id)nonLocalizedLabel;	// 0x308b7ed5
// converted property getter: - (int)property;	// 0x308b7e7d
- (void)recheckAddressBook;	// 0x308b8005
// converted property getter: - (int)type;	// 0x308b7f05
// converted property getter: - (id)value;	// 0x308b7ee5
@end

