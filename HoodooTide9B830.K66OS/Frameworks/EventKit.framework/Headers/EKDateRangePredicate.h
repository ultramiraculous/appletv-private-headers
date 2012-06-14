/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"

@class NSDate;

@interface EKDateRangePredicate : NSPredicate {
@private
	NSDate *_startDate;	// 8 = 0x8
	NSDate *_endDate;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x324b94dd; @synthesize=_endDate
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x324b94cd; @synthesize=_startDate
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date;	// 0x324b91fd
- (id)initWithCoder:(id)coder;	// 0x324b92c1
- (id)initWithStartDate:(id)startDate endDate:(id)date;	// 0x324b924d
- (id)copyWithZone:(NSZone *)zone;	// 0x324b941d
- (void)dealloc;	// 0x324b9341
- (void)encodeWithCoder:(id)coder;	// 0x324b93a1
// declared property getter: - (id)endDate;	// 0x324b94dd
- (BOOL)isEqual:(id)equal;	// 0x324b942d
// declared property getter: - (id)startDate;	// 0x324b94cd
@end
