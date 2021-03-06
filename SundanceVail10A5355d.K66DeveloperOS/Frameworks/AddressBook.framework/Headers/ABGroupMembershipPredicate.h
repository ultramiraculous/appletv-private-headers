/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate {
	void *_group;	// 8 = 0x8
	void *_store;	// 12 = 0xc
	NSString *_accountIdentifier;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x361e25f9; S=0x361e260d; @synthesize=_accountIdentifier
@property(assign, nonatomic) void *group;	// G=0x361e25d9; S=0x361e22e1; @synthesize=_group
@property(assign, nonatomic) void *store;	// G=0x361e25e9; S=0x361e2315; @synthesize=_store
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x361e243d
// declared property getter: - (id)accountIdentifier;	// 0x361e25f9
- (void)dealloc;	// 0x361e222d
- (id)description;	// 0x361e24f9
// declared property getter: - (void *)group;	// 0x361e25d9
- (BOOL)isValid;	// 0x361e22a5
- (id)queryWhereString;	// 0x361e2349
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x361e260d
// declared property setter: - (void)setGroup:(void *)group;	// 0x361e22e1
// declared property setter: - (void)setStore:(void *)store;	// 0x361e2315
// declared property getter: - (void *)store;	// 0x361e25e9
@end

