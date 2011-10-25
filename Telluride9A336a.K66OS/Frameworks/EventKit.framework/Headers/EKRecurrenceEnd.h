/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {
@private
	NSDate *_endDate;	// 4 = 0x4
	unsigned _occurrenceCount;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x31395ae1; @synthesize=_endDate
@property(readonly, assign, nonatomic) unsigned occurrenceCount;	// G=0x31395ad1; @synthesize=_occurrenceCount
+ (id)recurrenceEndWithEndDate:(id)endDate;	// 0x313ce6a9
+ (id)recurrenceEndWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x313ce6f1
- (id)initWithCoder:(id)coder;	// 0x313ce7b1
- (id)initWithEndDate:(id)endDate;	// 0x31395a0d
- (id)initWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x313ce739
- (id)copyWithZone:(NSZone *)zone;	// 0x313cea9d
- (void)dealloc;	// 0x313970f5
- (id)description;	// 0x313ce8c1
- (void)encodeWithCoder:(id)coder;	// 0x313ce849
// declared property getter: - (id)endDate;	// 0x31395ae1
- (unsigned)hash;	// 0x313ce995
- (BOOL)isEqual:(id)equal;	// 0x313ce9d5
// declared property getter: - (unsigned)occurrenceCount;	// 0x31395ad1
- (BOOL)usesEndDate;	// 0x313ce8a9
@end

