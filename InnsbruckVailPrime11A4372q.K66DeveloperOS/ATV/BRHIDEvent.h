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
@property(readonly, assign) unsigned long long extendedSignature;	// G=0x313d25; converted property
@property(readonly, assign) unsigned short page;	// G=0x313d05; converted property
@property(readonly, assign) unsigned short usage;	// G=0x313d15; converted property
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x31384d
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x3137fd
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x3137a9
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x31374d
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x313895
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x313911
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x3138cd
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x313949
- (id)description;	// 0x313b05
// converted property getter: - (unsigned long long)extendedSignature;	// 0x313d25
- (BOOL)isEqual:(id)equal;	// 0x313c35
// converted property getter: - (unsigned short)page;	// 0x313d05
// converted property getter: - (unsigned short)usage;	// 0x313d15
@end

