/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone {
@private
	CFStringRef _name;	// 4 = 0x4
	CFDataRef _data;	// 8 = 0x8
	void **_ucal;	// 12 = 0xc
	int _lock;	// 16 = 0x10
}
+ (id)__new:(CFStringRef)aNew cache:(BOOL)cache;	// 0x30d05621
+ (id)__new:(CFStringRef)aNew data:(CFDataRef)data;	// 0x30da54e5
+ (id)allocWithZone:(NSZone *)zone;	// 0x30da55b1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30da55ad
- (id)abbreviationForDate:(id)date;	// 0x30da4db5
- (id)data;	// 0x30d2f67d
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x30da4ff5
- (void)dealloc;	// 0x30d309a1
- (void)finalize;	// 0x30da553d
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x30da4fcd
- (id)localizedName:(int)name locale:(id)locale;	// 0x30da51b5
- (id)name;	// 0x30d05b7d
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x30d2fd5d
- (int)secondsFromGMTForDate:(id)date;	// 0x30d1d369
@end

