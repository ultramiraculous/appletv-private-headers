/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import "AirPlayReceiver-Structs.h"
#import <QuartzCore/CALayer.h>


__attribute__((visibility("hidden")))
@interface APHUDLayer : CALayer {
	CTFontRef _Font;	// 48 = 0x30
	CFDictionaryRef _TextAttributes;	// 52 = 0x34
	CFArrayRef _Labels;	// 56 = 0x38
	CFArrayRef _Values;	// 60 = 0x3c
	CFArrayRef _Colors;	// 64 = 0x40
}
- (id)init;	// 0x2ff50c29
- (void)addLine:(CFStringRef)line withColorIndex:(int)colorIndex;	// 0x2ff50e1d
- (void)dealloc;	// 0x2ff50d71
- (void)drawInContext:(CGContextRef)context;	// 0x2ff50f91
- (void)setValue:(CFStringRef)value atIndex:(int)index;	// 0x2ff50eb5
- (void)setValueAtIndex:(int)index format:(id)format;	// 0x2ff50f0d
@end
