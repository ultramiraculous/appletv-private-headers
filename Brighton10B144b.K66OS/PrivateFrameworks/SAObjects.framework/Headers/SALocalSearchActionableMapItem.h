/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocalSearchMapItem.h"

@class NSArray;

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x353e671d; S=0x353e6785; 
+ (id)actionableMapItem;	// 0x353e668d
+ (id)actionableMapItemWithDictionary:(id)dictionary context:(id)context;	// 0x353e66d1
// declared property getter: - (id)commands;	// 0x353e671d
- (id)encodedClassName;	// 0x353e6681
- (id)groupIdentifier;	// 0x353e6671
// declared property setter: - (void)setCommands:(id)commands;	// 0x353e6785
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353e67ed
@end

