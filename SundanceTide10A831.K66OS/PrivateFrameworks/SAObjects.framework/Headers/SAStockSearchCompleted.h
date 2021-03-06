/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAStockSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *stockList;	// G=0x304e59c9; S=0x304e5a45; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x304e5aad; S=0x304e5b29; 
+ (id)searchCompleted;	// 0x304e5939
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304e597d
- (id)encodedClassName;	// 0x304e592d
- (id)groupIdentifier;	// 0x304e591d
// declared property setter: - (void)setStockList:(id)list;	// 0x304e5a45
// declared property setter: - (void)setStockReferences:(id)references;	// 0x304e5b29
// declared property getter: - (id)stockList;	// 0x304e59c9
// declared property getter: - (id)stockReferences;	// 0x304e5aad
@end

