/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSSet, CoreDAVItemWithNoChildren;

@interface CoreDAVResourceTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_addressBook;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_searchAddressBook;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_shared;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_principal;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_collection;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_unauthenticated;	// 44 = 0x2c
}
@property(retain) CoreDAVItemWithNoChildren *addressBook;	// G=0x33194c31; S=0x33194cc1; @synthesize=_addressBook
@property(retain) CoreDAVItemWithNoChildren *collection;	// G=0x33194c91; S=0x33194d71; @synthesize=_collection
@property(retain) CoreDAVItemWithNoChildren *principal;	// G=0x33194c79; S=0x33194d45; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *searchAddressBook;	// G=0x33194c49; S=0x33194ced; @synthesize=_searchAddressBook
@property(retain) CoreDAVItemWithNoChildren *shared;	// G=0x33194c61; S=0x33194d19; @synthesize=_shared
@property(readonly, assign) NSSet *stringSet;	// G=0x3319460d; 
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x33194ca9; S=0x33194d9d; @synthesize=_unauthenticated
- (id)init;	// 0x331941ad
// declared property getter: - (id)addressBook;	// 0x33194c31
// declared property getter: - (id)collection;	// 0x33194c91
- (id)copyParseRules;	// 0x33193ec9
- (void)dealloc;	// 0x3319433d
- (id)description;	// 0x331941d9
- (BOOL)isTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x331943e1
// declared property getter: - (id)principal;	// 0x33194c79
// declared property getter: - (id)searchAddressBook;	// 0x33194c49
// declared property setter: - (void)setAddressBook:(id)book;	// 0x33194cc1
// declared property setter: - (void)setCollection:(id)collection;	// 0x33194d71
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x33194d45
// declared property setter: - (void)setSearchAddressBook:(id)book;	// 0x33194ced
// declared property setter: - (void)setShared:(id)shared;	// 0x33194d19
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x33194d9d
// declared property getter: - (id)shared;	// 0x33194c61
// declared property getter: - (id)stringSet;	// 0x3319460d
// declared property getter: - (id)unauthenticated;	// 0x33194ca9
- (void)write:(id)write;	// 0x33194a8d
@end

