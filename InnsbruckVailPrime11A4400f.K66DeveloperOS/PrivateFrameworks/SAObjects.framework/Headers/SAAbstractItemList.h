/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSArray;

@interface SAAbstractItemList : SADomainObject {
}
@property(copy, nonatomic) NSArray *domainObjects;	// G=0x326bb399; S=0x326bb401; 
@property(copy, nonatomic) NSNumber *selectedIndex;	// G=0x326bb469; S=0x326bb485; 
+ (id)abstractItemList;	// 0x326bb309
+ (id)abstractItemListWithDictionary:(id)dictionary context:(id)context;	// 0x326bb34d
// declared property getter: - (id)domainObjects;	// 0x326bb399
- (id)encodedClassName;	// 0x326bb2fd
- (id)groupIdentifier;	// 0x326bb2ed
// declared property getter: - (id)selectedIndex;	// 0x326bb469
// declared property setter: - (void)setDomainObjects:(id)objects;	// 0x326bb401
// declared property setter: - (void)setSelectedIndex:(id)index;	// 0x326bb485
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x326bb4d5
@end
