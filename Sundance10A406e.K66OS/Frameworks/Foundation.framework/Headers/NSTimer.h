/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


@interface NSTimer (NSTimer)
@property(retain) id fireDate;	// G=0x355ad405; S=0x355ad429; converted property
@property(assign) double fireTime;	// G=0x355ad48d; S=0x355ad4b5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x354fdf81
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x355ad215
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x354fdee5
+ (id)timerWithFireDate:(id)fireDate target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x355ad2d9
+ (id)timerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x355ad169
+ (id)timerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x3554a4b9
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x355ad351
- (double)_cffireTime;	// 0x355ad501
- (XXStruct_K1psTC)context;	// 0x355ad4f1
- (CFStringRef)copyDebugDescription;	// 0x355ad451
- (void)fire;	// 0x355ad3e1
// converted property getter: - (id)fireDate;	// 0x355ad405
// converted property getter: - (double)fireTime;	// 0x355ad48d
- (double)interval;	// 0x355ad47d
- (void)invalidate;	// 0x355ad35d
- (BOOL)isValid;	// 0x355ad381
- (long)order;	// 0x355ad479
// converted property setter: - (void)setFireDate:(id)date;	// 0x355ad429
// converted property setter: - (void)setFireTime:(double)time;	// 0x355ad4b5
- (double)timeInterval;	// 0x355ad3a9
- (id)userInfo;	// 0x355ad44d
@end

