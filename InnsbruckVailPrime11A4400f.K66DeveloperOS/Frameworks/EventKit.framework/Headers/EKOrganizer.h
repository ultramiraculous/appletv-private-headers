/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKParticipant.h"
#import "EventKit-Structs.h"


@interface EKOrganizer : EKParticipant {
}
@property(assign, nonatomic, getter=isCurrentUser) BOOL currentUser;	// G=0x2da910b9; S=0x2db116ad; 
+ (id)organizerWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x2db11381
- (id)init;	// 0x2db113cd
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x2db11439
- (id)copyWithZone:(NSZone *)zone;	// 0x2db114f9
- (id)description;	// 0x2db115cd
// declared property getter: - (BOOL)isCurrentUser;	// 0x2da910b9
- (id)lazyLoadRelationForKey:(id)key;	// 0x2da94ba1
- (id)owner;	// 0x2db11679
// declared property setter: - (void)setCurrentUser:(BOOL)user;	// 0x2db116ad
@end
