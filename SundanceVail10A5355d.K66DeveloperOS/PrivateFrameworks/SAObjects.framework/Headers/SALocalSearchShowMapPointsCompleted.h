/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SALocalSearchShowMapPointsCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)showMapPointsCompleted;	// 0x36627f9d
+ (id)showMapPointsCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x36627fe1
- (id)encodedClassName;	// 0x36627f91
- (id)groupIdentifier;	// 0x36627f81
@end

