/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "EventKit-Structs.h"

@class EKPersistentCalendarItem, NSDate;

@interface EKPersistentExceptionDate : EKPersistentObject {
	NSDate *_date;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x31fd410d; @synthesize=_date
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x31fd4155; S=0x31fd4171; 
+ (id)exceptionDateWithDate:(id)date;	// 0x31fd3f9d
+ (id)relations;	// 0x31fd3fd9
- (id)initWithExceptionDate:(id)exceptionDate;	// 0x31fd4069
- (id)copyWithZone:(NSZone *)zone;	// 0x31fd40a5
// declared property getter: - (id)date;	// 0x31fd410d
- (id)description;	// 0x31fd418d
- (int)entityType;	// 0x31fd4151
- (unsigned)hash;	// 0x31fd4129
// declared property getter: - (id)owner;	// 0x31fd4155
// declared property setter: - (void)setOwner:(id)owner;	// 0x31fd4171
@end

