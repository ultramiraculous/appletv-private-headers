/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SACommandSucceeded : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)commandSucceeded;	// 0x366213c5
+ (id)commandSucceededWithDictionary:(id)dictionary context:(id)context;	// 0x36621409
- (id)encodedClassName;	// 0x366213b9
- (id)groupIdentifier;	// 0x366213a9
- (BOOL)requiresResponse;	// 0x36621455
@end

