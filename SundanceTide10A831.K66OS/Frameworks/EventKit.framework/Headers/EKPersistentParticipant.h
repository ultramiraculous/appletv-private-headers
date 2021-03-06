/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x34ee558d; 
@property(copy, nonatomic) NSURL *address;	// G=0x34ee5a99; S=0x34f59db1; 
@property(copy, nonatomic) NSString *displayName;	// G=0x34f59ced; S=0x34f59d09; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x34ee5c5d; S=0x34f59d25; 
@property(copy, nonatomic) NSString *firstName;	// G=0x34f59d41; S=0x34f59d5d; 
@property(copy, nonatomic) NSString *lastName;	// G=0x34f59d79; S=0x34f59d95; 
+ (id)defaultPropertiesToLoad;	// 0x34edcdc1
- (id)init;	// 0x34f59c5d
// declared property getter: - (id)UUID;	// 0x34ee558d
// declared property getter: - (id)address;	// 0x34ee5a99
- (id)copyWithZone:(NSZone *)zone;	// 0x34f59cb1
// declared property getter: - (id)displayName;	// 0x34f59ced
// declared property getter: - (id)emailAddress;	// 0x34ee5c5d
// declared property getter: - (id)firstName;	// 0x34f59d41
- (unsigned)hash;	// 0x34ee5565
// declared property getter: - (id)lastName;	// 0x34f59d79
- (id)owner;	// 0x34f59dcd
// declared property setter: - (void)setAddress:(id)address;	// 0x34f59db1
// declared property setter: - (void)setDisplayName:(id)name;	// 0x34f59d09
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x34f59d25
// declared property setter: - (void)setFirstName:(id)name;	// 0x34f59d5d
// declared property setter: - (void)setLastName:(id)name;	// 0x34f59d95
@end

