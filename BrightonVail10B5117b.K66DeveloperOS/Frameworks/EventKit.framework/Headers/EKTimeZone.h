/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTimeZone : NSObject <NSCopying> {
	NSString *_name;	// 4 = 0x4
	void *_internal;	// 8 = 0x8
	long _lastStart;	// 12 = 0xc
	long _lastEnd;	// 16 = 0x10
	unsigned _lastIndex;	// 20 = 0x14
	double _offset;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x318f4815; converted property
+ (id)timeZoneWithNSTimeZone:(id)nstimeZone;	// 0x3188c26d
+ (id)timeZoneWithName:(id)name;	// 0x3188a9c1
- (id)initWithName:(id)name;	// 0x3188ab3d
- (id)initWithOffset:(double)offset name:(id)name;	// 0x318f4571
- (id)NSTimeZone;	// 0x3189a131
- (id)_abbreviationForIndex:(unsigned)index;	// 0x318f4851
- (unsigned)_indexForAbsoluteTime:(double)absoluteTime;	// 0x3188b9bd
- (id)abbreviation;	// 0x318f498d
- (id)abbreviationForAbsoluteTime:(double)absoluteTime;	// 0x318f4929
- (id)abbreviationForDate:(id)date;	// 0x318f48f1
- (id)copyWithZone:(NSZone *)zone;	// 0x3188bf91
- (void)dealloc;	// 0x318f46b5
- (id)description;	// 0x318f47b1
- (unsigned)hash;	// 0x318f4791
- (BOOL)isEqual:(id)equal;	// 0x318f4719
// converted property getter: - (id)name;	// 0x318f4815
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)time;	// 0x3188bb89
- (double)secondsFromGMT;	// 0x318f49b1
- (double)secondsFromGMTForAbsoluteTime:(double)absoluteTime;	// 0x3188b94d
- (double)secondsFromGMTForDate:(id)date;	// 0x318f48bd
@end

