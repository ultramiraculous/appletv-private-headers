/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone {
}
- (id)initWithCoder:(id)coder;	// 0x3079fe85
- (id)abbreviationForDate:(id)date;	// 0x3079fcc1
- (Class)classForCoder;	// 0x3079fecd
- (id)copyWithZone:(NSZone *)zone;	// 0x3079fe4d
- (id)data;	// 0x3079fc55
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x3079fd31
- (id)description;	// 0x3079fddd
- (void)encodeWithCoder:(id)coder;	// 0x3079fec9
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x3079fcf9
- (id)localizedName:(int)name locale:(id)locale;	// 0x3079fda1
- (id)name;	// 0x3079fc21
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x3079fd69
- (oneway void)release;	// 0x3079fe41
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3079fee9
- (id)retain;	// 0x3079fe3d
- (unsigned)retainCount;	// 0x3079fe45
- (int)secondsFromGMTForDate:(id)date;	// 0x3079fc89
@end
