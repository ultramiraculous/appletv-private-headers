/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSString, EKPersistentCalendarItem, NSData;

@interface EKPersistentEventAction : EKPersistentObject {
}
@property(copy, nonatomic) NSData *externalData;	// G=0x345a79d1; S=0x345a79ed; 
@property(copy, nonatomic) NSString *externalFolderID;	// G=0x345a7929; S=0x345a7945; 
@property(copy, nonatomic) NSString *externalID;	// G=0x345a78f1; S=0x345a790d; 
@property(copy, nonatomic) NSString *externalModTag;	// G=0x345a7999; S=0x345a79b5; 
@property(copy, nonatomic) NSString *externalScheduleID;	// G=0x345a7961; S=0x345a797d; 
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x345a7a0d; S=0x345a7a29; 
+ (id)relations;	// 0x345a7861
- (int)entityType;	// 0x345a7a09
// declared property getter: - (id)externalData;	// 0x345a79d1
// declared property getter: - (id)externalFolderID;	// 0x345a7929
// declared property getter: - (id)externalID;	// 0x345a78f1
// declared property getter: - (id)externalModTag;	// 0x345a7999
// declared property getter: - (id)externalScheduleID;	// 0x345a7961
// declared property getter: - (id)owner;	// 0x345a7a0d
// declared property setter: - (void)setExternalData:(id)data;	// 0x345a79ed
// declared property setter: - (void)setExternalFolderID:(id)anId;	// 0x345a7945
// declared property setter: - (void)setExternalID:(id)anId;	// 0x345a790d
// declared property setter: - (void)setExternalModTag:(id)tag;	// 0x345a79b5
// declared property setter: - (void)setExternalScheduleID:(id)anId;	// 0x345a797d
// declared property setter: - (void)setOwner:(id)owner;	// 0x345a7a29
@end
