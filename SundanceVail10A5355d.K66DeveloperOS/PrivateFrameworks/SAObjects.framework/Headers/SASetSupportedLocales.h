/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *locales;	// G=0x36626a19; S=0x36626a35; 
+ (id)setSupportedLocales;	// 0x36626989
+ (id)setSupportedLocalesWithDictionary:(id)dictionary context:(id)context;	// 0x366269cd
- (id)encodedClassName;	// 0x3662697d
- (id)groupIdentifier;	// 0x3662696d
// declared property getter: - (id)locales;	// 0x36626a19
- (BOOL)requiresResponse;	// 0x36626a85
// declared property setter: - (void)setLocales:(id)locales;	// 0x36626a35
@end
