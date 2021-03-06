/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAssistantDestroyed : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *assistantId;	// G=0x353e8919; S=0x353e8935; 
+ (id)assistantDestroyed;	// 0x353e8889
+ (id)assistantDestroyedWithDictionary:(id)dictionary context:(id)context;	// 0x353e88cd
// declared property getter: - (id)assistantId;	// 0x353e8919
- (id)encodedClassName;	// 0x353e887d
- (id)groupIdentifier;	// 0x353e886d
- (BOOL)requiresResponse;	// 0x353e8985
// declared property setter: - (void)setAssistantId:(id)anId;	// 0x353e8935
@end

