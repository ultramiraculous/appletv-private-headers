/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAWebSearchStarted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)searchStarted;	// 0x379625d9
+ (id)searchStartedWithDictionary:(id)dictionary context:(id)context;	// 0x3796261d
- (id)encodedClassName;	// 0x379625cd
- (id)groupIdentifier;	// 0x379625bd
@end

