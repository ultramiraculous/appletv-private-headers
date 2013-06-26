/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x326f4061; S=0x326f40b9; 
+ (id)sendCommands;	// 0x326f3fd1
+ (id)sendCommandsWithDictionary:(id)dictionary context:(id)context;	// 0x326f4015
// declared property getter: - (id)commands;	// 0x326f4061
- (id)encodedClassName;	// 0x326f3fc5
- (id)groupIdentifier;	// 0x326f3fb5
- (BOOL)requiresResponse;	// 0x326f4121
// declared property setter: - (void)setCommands:(id)commands;	// 0x326f40b9
@end
