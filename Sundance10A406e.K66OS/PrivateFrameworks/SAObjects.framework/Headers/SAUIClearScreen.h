/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAAceView *initialView;	// G=0x3250c0f9; S=0x3250c14d; 
+ (id)clearScreen;	// 0x3250c069
+ (id)clearScreenWithDictionary:(id)dictionary context:(id)context;	// 0x3250c0ad
- (id)encodedClassName;	// 0x3250c05d
- (id)groupIdentifier;	// 0x3250c04d
// declared property getter: - (id)initialView;	// 0x3250c0f9
- (BOOL)requiresResponse;	// 0x3250c189
// declared property setter: - (void)setInitialView:(id)view;	// 0x3250c14d
@end
