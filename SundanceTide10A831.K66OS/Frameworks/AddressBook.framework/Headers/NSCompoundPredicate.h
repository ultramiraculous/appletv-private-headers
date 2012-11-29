/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSCompoundPredicate.h> // Unknown library


@interface NSCompoundPredicate (ABPredicateQueryCreation)
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x313d2255
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x313d231d
- (BOOL)ab_hasCallback;	// 0x313d21e1
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x313d23fd
@end
