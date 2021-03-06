/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity {
}
@property(copy, nonatomic) NSArray *items;	// G=0x304d89b5; S=0x304d8a31; 
+ (id)collection;	// 0x304d8925
+ (id)collectionWithDictionary:(id)dictionary context:(id)context;	// 0x304d8969
- (id)encodedClassName;	// 0x304d8919
- (id)groupIdentifier;	// 0x304d8909
// declared property getter: - (id)items;	// 0x304d89b5
// declared property setter: - (void)setItems:(id)items;	// 0x304d8a31
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x304d8a99
@end

