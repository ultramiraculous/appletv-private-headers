/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BREvent.h"


__attribute__((visibility("hidden")))
@interface BRHIDEvent : BREvent {
	unsigned short _page;	// 30 = 0x1e
	unsigned short _usage;	// 32 = 0x20
	unsigned long long _extendedSignature;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long extendedSignature;	// G=0x2b5fa1; converted property
@property(readonly, assign) unsigned short page;	// G=0x2b5f81; converted property
@property(readonly, assign) unsigned short usage;	// G=0x2b5f91; converted property
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x2b5aa5
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x2b5a55
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x2b5a01
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x2b59a5
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x2b5aed
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x2b5b6d
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x2b5b25
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x2b5ba1
- (id)description;	// 0x2b5d59
// converted property getter: - (unsigned long long)extendedSignature;	// 0x2b5fa1
- (BOOL)isEqual:(id)equal;	// 0x2b5e89
// converted property getter: - (unsigned short)page;	// 0x2b5f81
// converted property getter: - (unsigned short)usage;	// 0x2b5f91
@end
