/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAWeatherLocationDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)locationDeleteCompleted;	// 0x3661e955
+ (id)locationDeleteCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3661e999
- (id)encodedClassName;	// 0x3661e949
- (id)groupIdentifier;	// 0x3661e939
@end

