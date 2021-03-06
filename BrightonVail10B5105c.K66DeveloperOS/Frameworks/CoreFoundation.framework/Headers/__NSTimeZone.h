/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSTimeZone : NSTimeZone {
	CFStringRef _name;	// 4 = 0x4
	CFDataRef _data;	// 8 = 0x8
	void **_ucal;	// 12 = 0xc
	int _lock;	// 16 = 0x10
}
+ (id)__new:(CFStringRef)aNew cache:(BOOL)cache;	// 0x356c32a9
+ (id)__new:(CFStringRef)aNew data:(CFDataRef)data;	// 0x3574e381
+ (id)allocWithZone:(NSZone *)zone;	// 0x3574e44d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3574e449
- (id)abbreviationForDate:(id)date;	// 0x3574da89
- (id)data;	// 0x356a8a89
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x3574ddd1
- (void)dealloc;	// 0x356d9331
- (void)finalize;	// 0x3574e3d9
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x3574dda9
- (id)localizedName:(int)name locale:(id)locale;	// 0x3574e159
- (id)name;	// 0x356a8381
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x356d86e9
- (int)secondsFromGMTForDate:(id)date;	// 0x356856f1
@end

