/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAssistantNotReady : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *language;	// G=0x326ea77d; S=0x326ea799; 
+ (id)assistantNotReady;	// 0x326ea6ed
+ (id)assistantNotReadyWithDictionary:(id)dictionary context:(id)context;	// 0x326ea731
- (id)encodedClassName;	// 0x326ea6e1
- (id)groupIdentifier;	// 0x326ea6d1
// declared property getter: - (id)language;	// 0x326ea77d
- (BOOL)requiresResponse;	// 0x326ea7e9
// declared property setter: - (void)setLanguage:(id)language;	// 0x326ea799
@end

