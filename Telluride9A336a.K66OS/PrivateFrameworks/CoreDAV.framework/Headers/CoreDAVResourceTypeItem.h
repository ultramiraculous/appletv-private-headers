/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_addressBook;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_searchAddressBook;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_shared;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_principal;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_collection;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_unauthenticated;	// 44 = 0x2c
}
@property(retain) CoreDAVItemWithNoChildren *addressBook;	// G=0x32c5a651; S=0x32c5a665; @synthesize=_addressBook
@property(retain) CoreDAVItemWithNoChildren *collection;	// G=0x32c5a731; S=0x32c5a745; @synthesize=_collection
@property(retain) CoreDAVItemWithNoChildren *principal;	// G=0x32c5a6f9; S=0x32c5a70d; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *searchAddressBook;	// G=0x32c5a689; S=0x32c5a69d; @synthesize=_searchAddressBook
@property(retain) CoreDAVItemWithNoChildren *shared;	// G=0x32c5a6c1; S=0x32c5a6d5; @synthesize=_shared
@property(readonly, assign) NSSet *stringSet;	// G=0x32c59f39; 
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x32c5a769; S=0x32c5a77d; @synthesize=_unauthenticated
- (id)init;	// 0x32c596c9
// declared property getter: - (id)addressBook;	// 0x32c5a651
// declared property getter: - (id)collection;	// 0x32c5a731
- (id)copyParseRules;	// 0x32c59915
- (void)dealloc;	// 0x32c596f5
- (id)description;	// 0x32c597a5
- (BOOL)isTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x32c5a3f5
// declared property getter: - (id)principal;	// 0x32c5a6f9
// declared property getter: - (id)searchAddressBook;	// 0x32c5a689
// declared property setter: - (void)setAddressBook:(id)book;	// 0x32c5a665
// declared property setter: - (void)setCollection:(id)collection;	// 0x32c5a745
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x32c5a70d
// declared property setter: - (void)setSearchAddressBook:(id)book;	// 0x32c5a69d
// declared property setter: - (void)setShared:(id)shared;	// 0x32c5a6d5
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x32c5a77d
// declared property getter: - (id)shared;	// 0x32c5a6c1
// declared property getter: - (id)stringSet;	// 0x32c59f39
// declared property getter: - (id)unauthenticated;	// 0x32c5a769
- (void)write:(id)write;	// 0x32c59d61
@end

