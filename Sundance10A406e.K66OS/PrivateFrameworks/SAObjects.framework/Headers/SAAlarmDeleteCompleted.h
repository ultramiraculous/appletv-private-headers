/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAAlarmDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)deleteCompleted;	// 0x32512eb5
+ (id)deleteCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32512ef9
- (id)encodedClassName;	// 0x32512ea9
- (id)groupIdentifier;	// 0x32512e99
@end

