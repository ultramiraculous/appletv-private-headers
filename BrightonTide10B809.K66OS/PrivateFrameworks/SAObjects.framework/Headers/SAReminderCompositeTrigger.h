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
@property(retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;	// G=0x353ea081; S=0x353ea0d5; 
@property(retain, nonatomic) SAReminderLocationTrigger *locationTrigger;	// G=0x353ea111; S=0x353ea165; 
+ (id)compositeTrigger;	// 0x353e9ff1
+ (id)compositeTriggerWithDictionary:(id)dictionary context:(id)context;	// 0x353ea035
// declared property getter: - (id)dateTimeTrigger;	// 0x353ea081
- (id)encodedClassName;	// 0x353e9fe5
- (id)groupIdentifier;	// 0x353e9fd5
// declared property getter: - (id)locationTrigger;	// 0x353ea111
// declared property setter: - (void)setDateTimeTrigger:(id)trigger;	// 0x353ea0d5
// declared property setter: - (void)setLocationTrigger:(id)trigger;	// 0x353ea165
@end
