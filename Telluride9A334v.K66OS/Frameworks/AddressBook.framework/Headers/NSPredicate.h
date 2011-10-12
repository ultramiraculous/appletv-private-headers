/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSPredicate.h> // Unknown library


@interface NSPredicate (ABPredicateQueryCreation)
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x35a966e5
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x35a952a9
- (BOOL)ab_hasCallback;	// 0x35a952a5
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x35a952ad
@end

@interface NSPredicate (ABPredicateRunner)
- (void)ab_runPredicateWithSortOrder:(unsigned)sortOrder inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x35a96499
@end

