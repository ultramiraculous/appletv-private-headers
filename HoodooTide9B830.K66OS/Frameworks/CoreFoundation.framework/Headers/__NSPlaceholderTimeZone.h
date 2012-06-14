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
+ (id)immutablePlaceholder;	// 0x327014e9
+ (void)initialize;	// 0x3270149d
- (id)init;	// 0x327a1849
- (id)initWithName:(id)name;	// 0x327014f9
- (id)initWithName:(id)name data:(id)data;	// 0x327a16a5
- (id)__initWithName:(id)name cache:(BOOL)cache;	// 0x3270150d
- (id)__initWithName:(id)name data:(id)data cache:(BOOL)cache;	// 0x32732fbd
- (id)abbreviationForDate:(id)date;	// 0x327a19f5
- (id)data;	// 0x327a18f5
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x327a1af5
- (void)dealloc;	// 0x327a1871
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x327a1a75
- (id)name;	// 0x327a1875
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x327a1b75
- (oneway void)release;	// 0x327a1865
- (id)retain;	// 0x327a1861
- (unsigned)retainCount;	// 0x327a1869
- (int)secondsFromGMTForDate:(id)date;	// 0x327a1975
@end
