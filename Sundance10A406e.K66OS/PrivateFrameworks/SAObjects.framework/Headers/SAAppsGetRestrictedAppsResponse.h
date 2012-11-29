/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray;

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *restrictedApps;	// G=0x325501e5; S=0x32550201; 
+ (id)getRestrictedAppsResponse;	// 0x32550155
+ (id)getRestrictedAppsResponseWithDictionary:(id)dictionary context:(id)context;	// 0x32550199
- (id)encodedClassName;	// 0x32550149
- (id)groupIdentifier;	// 0x32550139
// declared property getter: - (id)restrictedApps;	// 0x325501e5
// declared property setter: - (void)setRestrictedApps:(id)apps;	// 0x32550201
@end
