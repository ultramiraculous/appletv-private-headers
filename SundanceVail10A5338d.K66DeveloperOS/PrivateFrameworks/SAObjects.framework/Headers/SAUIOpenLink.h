/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *ref;	// G=0x37947839; S=0x379478b5; 
+ (id)openLink;	// 0x379477a9
+ (id)openLinkWithDictionary:(id)dictionary context:(id)context;	// 0x379477ed
- (id)encodedClassName;	// 0x3794779d
- (id)groupIdentifier;	// 0x3794778d
// declared property getter: - (id)ref;	// 0x37947839
- (BOOL)requiresResponse;	// 0x37947915
// declared property setter: - (void)setRef:(id)ref;	// 0x379478b5
@end

