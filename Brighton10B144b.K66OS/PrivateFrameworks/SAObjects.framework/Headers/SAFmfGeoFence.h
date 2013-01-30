/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SALocation, SAPersonAttribute, NSString;

@interface SAFmfGeoFence : SADomainObject {
}
@property(retain, nonatomic) SAPersonAttribute *friend;	// G=0x353eb891; S=0x353eb8e5; 
@property(copy, nonatomic) NSString *geoFenceTrigger;	// G=0x353eb921; S=0x353eb93d; 
@property(retain, nonatomic) SALocation *location;	// G=0x353eb98d; S=0x353eb9e1; 
+ (id)geoFence;	// 0x353eb801
+ (id)geoFenceWithDictionary:(id)dictionary context:(id)context;	// 0x353eb845
- (id)encodedClassName;	// 0x353eb7f5
// declared property getter: - (id)friend;	// 0x353eb891
// declared property getter: - (id)geoFenceTrigger;	// 0x353eb921
- (id)groupIdentifier;	// 0x353eb7e5
// declared property getter: - (id)location;	// 0x353eb98d
// declared property setter: - (void)setFriend:(id)aFriend;	// 0x353eb8e5
// declared property setter: - (void)setGeoFenceTrigger:(id)trigger;	// 0x353eb93d
// declared property setter: - (void)setLocation:(id)location;	// 0x353eb9e1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353eba1d
@end
