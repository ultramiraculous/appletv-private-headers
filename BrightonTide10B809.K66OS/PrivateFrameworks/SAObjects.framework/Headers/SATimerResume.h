/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerResume : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353cf66d; S=0x353cf6e9; 
+ (id)resume;	// 0x353cf5dd
+ (id)resumeWithDictionary:(id)dictionary context:(id)context;	// 0x353cf621
- (id)encodedClassName;	// 0x353cf5d1
- (id)groupIdentifier;	// 0x353cf5c1
- (BOOL)requiresResponse;	// 0x353cf749
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353cf6e9
// declared property getter: - (id)targetAppId;	// 0x353cf66d
@end

