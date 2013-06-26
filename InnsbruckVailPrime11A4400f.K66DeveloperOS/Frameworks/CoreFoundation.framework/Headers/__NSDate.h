/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSDate.h"


__attribute__((visibility("hidden")))
@interface __NSDate : NSDate {
	double _time;	// 4 = 0x4
}
+ (id)__new:(double)aNew;	// 0x2d235541
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d28ee39
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2d2f3065
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x2d2f306d
- (void)dealloc;	// 0x2d235821
- (double)timeIntervalSinceReferenceDate;	// 0x2d234e39
@end
