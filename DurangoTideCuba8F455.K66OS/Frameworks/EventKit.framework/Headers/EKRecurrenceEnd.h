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
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x32e81691; @synthesize=_endDate
@property(readonly, assign, nonatomic) unsigned occurrenceCount;	// G=0x32e81681; @synthesize=_occurrenceCount
+ (id)recurrenceEndWithEndDate:(id)endDate;	// 0x32e82ac1
+ (id)recurrenceEndWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x32e82a81
- (id)initWithCoder:(id)coder;	// 0x32e831c1
- (id)initWithEndDate:(id)endDate;	// 0x32e832b5
- (id)initWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x32e83249
- (id)copyWithZone:(NSZone *)zone;	// 0x32e82849
- (void)dealloc;	// 0x32e83179
- (id)description;	// 0x32e82941
- (void)encodeWithCoder:(id)coder;	// 0x32e82a2d
// declared property getter: - (id)endDate;	// 0x32e81691
- (unsigned)hash;	// 0x32e82909
- (BOOL)isEqual:(id)equal;	// 0x32e8285d
// declared property getter: - (unsigned)occurrenceCount;	// 0x32e81681
- (BOOL)usesEndDate;	// 0x32e8166d
@end

