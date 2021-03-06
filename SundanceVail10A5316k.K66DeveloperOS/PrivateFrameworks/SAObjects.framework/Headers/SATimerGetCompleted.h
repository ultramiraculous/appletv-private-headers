/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SATimerObject, NSString;

@interface SATimerGetCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x32f3f789; S=0x32f3f7dd; 
+ (id)getCompleted;	// 0x32f3f6f9
+ (id)getCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f3f73d
- (id)encodedClassName;	// 0x32f3f6ed
- (id)groupIdentifier;	// 0x32f3f6dd
// declared property setter: - (void)setTimer:(id)timer;	// 0x32f3f7dd
// declared property getter: - (id)timer;	// 0x32f3f789
@end

