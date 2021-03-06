/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSURL;

@interface SALocalSearchGetNavigationStatus : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *getRoute;	// G=0x3425a31d; S=0x3425a339; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3425a241; S=0x3425a2bd; 
+ (id)getNavigationStatus;	// 0x3425a1b1
+ (id)getNavigationStatusWithDictionary:(id)dictionary context:(id)context;	// 0x3425a1f5
- (id)encodedClassName;	// 0x3425a1a5
// declared property getter: - (id)getRoute;	// 0x3425a31d
- (id)groupIdentifier;	// 0x3425a195
- (BOOL)requiresResponse;	// 0x3425a389
// declared property setter: - (void)setGetRoute:(id)route;	// 0x3425a339
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3425a2bd
// declared property getter: - (id)targetAppId;	// 0x3425a241
@end

