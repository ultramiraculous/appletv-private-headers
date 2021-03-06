/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SAAlarmObject;

@interface SAAlarmCreate : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAAlarmObject *alarmToCreate;	// G=0x304d5869; S=0x304d58bd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x304d578d; S=0x304d5809; 
+ (id)create;	// 0x304d56fd
+ (id)createWithDictionary:(id)dictionary context:(id)context;	// 0x304d5741
// declared property getter: - (id)alarmToCreate;	// 0x304d5869
- (id)encodedClassName;	// 0x304d56f1
- (id)groupIdentifier;	// 0x304d56e1
- (BOOL)requiresResponse;	// 0x304d58f9
// declared property setter: - (void)setAlarmToCreate:(id)create;	// 0x304d58bd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x304d5809
// declared property getter: - (id)targetAppId;	// 0x304d578d
@end

