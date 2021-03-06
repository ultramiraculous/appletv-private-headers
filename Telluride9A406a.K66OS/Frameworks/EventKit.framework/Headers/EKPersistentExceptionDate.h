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
@private
	NSDate *_date;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x345a4e0d; @synthesize=_date
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x345a4e55; S=0x345a4e71; 
+ (id)exceptionDateWithDate:(id)date;	// 0x345a4c9d
+ (id)relations;	// 0x345a4cd9
- (id)initWithExceptionDate:(id)exceptionDate;	// 0x345a4d69
- (id)copyWithZone:(NSZone *)zone;	// 0x345a4da5
// declared property getter: - (id)date;	// 0x345a4e0d
- (id)description;	// 0x345a4e8d
- (int)entityType;	// 0x345a4e51
- (unsigned)hash;	// 0x345a4e29
// declared property getter: - (id)owner;	// 0x345a4e55
// declared property setter: - (void)setOwner:(id)owner;	// 0x345a4e71
@end

