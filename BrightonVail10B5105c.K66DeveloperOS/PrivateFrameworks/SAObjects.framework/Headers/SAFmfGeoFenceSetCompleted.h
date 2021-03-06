/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class SAFmfGeoFence, NSString, NSURL;

@interface SAFmfGeoFenceSetCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SAFmfGeoFence *geoFence;	// G=0x303c88d9; S=0x303c892d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *searchContext;	// G=0x303c8969; S=0x303c89e5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x303c87fd; S=0x303c8879; 
+ (id)geoFenceSetCompleted;	// 0x303c876d
+ (id)geoFenceSetCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x303c87b1
- (id)encodedClassName;	// 0x303c8761
// declared property getter: - (id)geoFence;	// 0x303c88d9
- (id)groupIdentifier;	// 0x303c8751
- (BOOL)requiresResponse;	// 0x303c8a45
// declared property getter: - (id)searchContext;	// 0x303c8969
// declared property setter: - (void)setGeoFence:(id)fence;	// 0x303c892d
// declared property setter: - (void)setSearchContext:(id)context;	// 0x303c89e5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x303c8879
// declared property getter: - (id)targetAppId;	// 0x303c87fd
@end

