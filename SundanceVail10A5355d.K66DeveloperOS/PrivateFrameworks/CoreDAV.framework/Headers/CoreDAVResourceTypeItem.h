/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_addressBook;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_searchAddressBook;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_shared;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_principal;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_collection;	// 44 = 0x2c
	CoreDAVItemWithNoChildren *_unauthenticated;	// 48 = 0x30
}
@property(retain) CoreDAVItemWithNoChildren *addressBook;	// G=0x3049c3ed; S=0x3049c401; @synthesize=_addressBook
@property(retain) CoreDAVItemWithNoChildren *collection;	// G=0x3049c47d; S=0x3049c491; @synthesize=_collection
@property(retain) CoreDAVItemWithNoChildren *principal;	// G=0x3049c459; S=0x3049c46d; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *searchAddressBook;	// G=0x3049c411; S=0x3049c425; @synthesize=_searchAddressBook
@property(retain) CoreDAVItemWithNoChildren *shared;	// G=0x3049c435; S=0x3049c449; @synthesize=_shared
@property(readonly, assign) NSSet *stringSet;	// G=0x3049bcc1; 
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x3049c4a1; S=0x3049c4b5; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x3049b6a9
- (id)init;	// 0x3049b455
// declared property getter: - (id)addressBook;	// 0x3049c3ed
// declared property getter: - (id)collection;	// 0x3049c47d
- (void)dealloc;	// 0x3049b481
- (id)description;	// 0x3049b535
- (BOOL)isTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3049c185
// declared property getter: - (id)principal;	// 0x3049c459
// declared property getter: - (id)searchAddressBook;	// 0x3049c411
// declared property setter: - (void)setAddressBook:(id)book;	// 0x3049c401
// declared property setter: - (void)setCollection:(id)collection;	// 0x3049c491
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x3049c46d
// declared property setter: - (void)setSearchAddressBook:(id)book;	// 0x3049c425
// declared property setter: - (void)setShared:(id)shared;	// 0x3049c449
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x3049c4b5
// declared property getter: - (id)shared;	// 0x3049c435
// declared property getter: - (id)stringSet;	// 0x3049bcc1
// declared property getter: - (id)unauthenticated;	// 0x3049c4a1
- (void)write:(id)write;	// 0x3049bae1
@end
