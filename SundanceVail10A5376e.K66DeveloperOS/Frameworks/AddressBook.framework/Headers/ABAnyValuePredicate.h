/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"


@interface ABAnyValuePredicate : ABPredicate {
	int _property;	// 8 = 0x8
}
@property(assign, nonatomic) int property;	// G=0x32bf90c5; S=0x32bf90d5; @synthesize=_property
- (id)init;	// 0x32bf8f65
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x32bf9085
- (BOOL)isValid;	// 0x32bf8fa5
// declared property getter: - (int)property;	// 0x32bf90c5
- (id)queryGroupByProperties;	// 0x32bf900d
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x32bf8fc1
- (id)queryWhereString;	// 0x32bf9035
// declared property setter: - (void)setProperty:(int)property;	// 0x32bf90d5
@end

