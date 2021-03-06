/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SAReminderListSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x353e8fed; S=0x353e9069; 
+ (id)listSearchCompleted;	// 0x353e8f5d
+ (id)listSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353e8fa1
- (id)encodedClassName;	// 0x353e8f51
- (id)groupIdentifier;	// 0x353e8f41
// declared property getter: - (id)results;	// 0x353e8fed
// declared property setter: - (void)setResults:(id)results;	// 0x353e9069
@end

