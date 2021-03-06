/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderTrigger.h"

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger {
}
@property(retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;	// G=0x353e8121; S=0x353e8175; 
@property(retain, nonatomic) SAReminderLocationTrigger *locationTrigger;	// G=0x353e81b1; S=0x353e8205; 
+ (id)compositeTrigger;	// 0x353e8091
+ (id)compositeTriggerWithDictionary:(id)dictionary context:(id)context;	// 0x353e80d5
// declared property getter: - (id)dateTimeTrigger;	// 0x353e8121
- (id)encodedClassName;	// 0x353e8085
- (id)groupIdentifier;	// 0x353e8075
// declared property getter: - (id)locationTrigger;	// 0x353e81b1
// declared property setter: - (void)setDateTimeTrigger:(id)trigger;	// 0x353e8175
// declared property setter: - (void)setLocationTrigger:(id)trigger;	// 0x353e8205
@end

