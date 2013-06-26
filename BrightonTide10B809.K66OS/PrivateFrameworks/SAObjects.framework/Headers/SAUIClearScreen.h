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
@property(retain, nonatomic) SAAceView *initialView;	// G=0x353be3e1; S=0x353be435; 
+ (id)clearScreen;	// 0x353be351
+ (id)clearScreenWithDictionary:(id)dictionary context:(id)context;	// 0x353be395
- (id)encodedClassName;	// 0x353be345
- (id)groupIdentifier;	// 0x353be335
// declared property getter: - (id)initialView;	// 0x353be3e1
- (BOOL)requiresResponse;	// 0x353be471
// declared property setter: - (void)setInitialView:(id)view;	// 0x353be435
@end
