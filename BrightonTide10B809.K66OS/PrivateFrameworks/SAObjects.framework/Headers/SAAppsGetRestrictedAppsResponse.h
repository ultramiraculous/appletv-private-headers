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
@property(copy, nonatomic) NSArray *restrictedApps;	// G=0x35402865; S=0x35402881; 
+ (id)getRestrictedAppsResponse;	// 0x354027d5
+ (id)getRestrictedAppsResponseWithDictionary:(id)dictionary context:(id)context;	// 0x35402819
- (id)encodedClassName;	// 0x354027c9
- (id)groupIdentifier;	// 0x354027b9
// declared property getter: - (id)restrictedApps;	// 0x35402865
// declared property setter: - (void)setRestrictedApps:(id)apps;	// 0x35402881
@end
