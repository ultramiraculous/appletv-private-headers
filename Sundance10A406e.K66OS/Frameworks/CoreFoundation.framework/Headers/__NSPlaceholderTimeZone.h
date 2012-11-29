/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderTimeZone : NSTimeZone {
}
+ (id)immutablePlaceholder;	// 0x33a8216d
+ (void)initialize;	// 0x33a82121
- (id)init;	// 0x33b0d799
- (id)initWithName:(id)name;	// 0x33a8217d
- (id)initWithName:(id)name data:(id)data;	// 0x33b0d57d
- (id)__initWithName:(id)name cache:(BOOL)cache;	// 0x33a82191
- (id)__initWithName:(id)name data:(id)data cache:(BOOL)cache;	// 0x33a9cfc5
- (id)abbreviationForDate:(id)date;	// 0x33b0d945
- (id)data;	// 0x33b0d845
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x33b0da45
- (void)dealloc;	// 0x33b0d7c1
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x33b0d9c5
- (id)name;	// 0x33b0d7c5
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x33b0dac5
- (oneway void)release;	// 0x33b0d7b5
- (id)retain;	// 0x33b0d7b1
- (unsigned)retainCount;	// 0x33b0d7b9
- (int)secondsFromGMTForDate:(id)date;	// 0x33b0d8c5
@end
