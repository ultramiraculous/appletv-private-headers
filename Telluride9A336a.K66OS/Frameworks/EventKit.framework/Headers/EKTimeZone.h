/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTimeZone : NSObject <NSCopying> {
@private
	NSString *_name;	// 4 = 0x4
	void *_internal;	// 8 = 0x8
	long _lastStart;	// 12 = 0xc
	long _lastEnd;	// 16 = 0x10
	unsigned _lastIndex;	// 20 = 0x14
	double _offset;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x313d5b35; converted property
+ (id)timeZoneWithNSTimeZone:(id)nstimeZone;	// 0x3137c711
+ (id)timeZoneWithName:(id)name;	// 0x3137aaa1
- (id)initWithName:(id)name;	// 0x3137abfd
- (id)initWithOffset:(double)offset name:(id)name;	// 0x313d5885
- (id)NSTimeZone;	// 0x31387fb9
- (id)_abbreviationForIndex:(unsigned)index;	// 0x313d5b6d
- (unsigned)_indexForAbsoluteTime:(double)absoluteTime;	// 0x3137b5ad
- (id)abbreviation;	// 0x313d5ca5
- (id)abbreviationForAbsoluteTime:(double)absoluteTime;	// 0x313d5c41
- (id)abbreviationForDate:(id)date;	// 0x313d5c0d
- (id)copyWithZone:(NSZone *)zone;	// 0x3137bfc1
- (void)dealloc;	// 0x313d59d9
- (id)description;	// 0x313d5ad5
- (unsigned)hash;	// 0x313d5ab5
- (BOOL)isEqual:(id)equal;	// 0x313d5a3d
// converted property getter: - (id)name;	// 0x313d5b35
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)time;	// 0x3137becd
- (double)secondsFromGMT;	// 0x313d5cc9
- (double)secondsFromGMTForAbsoluteTime:(double)absoluteTime;	// 0x3137b545
- (double)secondsFromGMTForDate:(id)date;	// 0x313d5bd9
@end

