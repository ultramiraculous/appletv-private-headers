/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAWeatherShowWeatherLocationsCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)showWeatherLocationsCompleted;	// 0x304cd2b9
+ (id)showWeatherLocationsCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304cd2fd
- (id)encodedClassName;	// 0x304cd2ad
- (id)groupIdentifier;	// 0x304cd29d
@end

