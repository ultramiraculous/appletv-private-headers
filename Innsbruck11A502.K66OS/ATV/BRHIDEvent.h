/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BREvent.h"


__attribute__((visibility("hidden")))
@interface BRHIDEvent : BREvent {
	unsigned short _page;	// 28 = 0x1c
	unsigned short _usage;	// 30 = 0x1e
	unsigned long long _extendedSignature;	// 32 = 0x20
}
@property(readonly, assign) unsigned long long extendedSignature;	// G=0x3374e1; converted property
@property(readonly, assign) unsigned short page;	// G=0x3374c1; converted property
@property(readonly, assign) unsigned short usage;	// G=0x3374d1; converted property
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x337009
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x336fb9
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x336f65
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x336f09
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x337051
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x3370cd
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x337089
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x337105
- (id)description;	// 0x3372c1
// converted property getter: - (unsigned long long)extendedSignature;	// 0x3374e1
- (BOOL)isEqual:(id)equal;	// 0x3373f1
// converted property getter: - (unsigned short)page;	// 0x3374c1
// converted property getter: - (unsigned short)usage;	// 0x3374d1
@end
