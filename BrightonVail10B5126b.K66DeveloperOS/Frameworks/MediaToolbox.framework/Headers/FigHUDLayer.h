/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <CALayer.h> // Unknown library


@interface FigHUDLayer : CALayer {
	CTFontRef _Font;	// 48 = 0x30
	float _FontSize;	// 52 = 0x34
	CFDictionaryRef _TextAttributes;	// 56 = 0x38
	CFArrayRef _Labels;	// 60 = 0x3c
	CFArrayRef _Values;	// 64 = 0x40
	CFArrayRef _LabelColors;	// 68 = 0x44
	CFArrayRef _ValueColors;	// 72 = 0x48
}
- (id)init;	// 0x3201a575
- (long)addLine:(CFStringRef)line withColorIndex:(int)colorIndex;	// 0x3201a89d
- (long)addLine:(CFStringRef)line withLabelColorIndex:(int)labelColorIndex withValueColorIndex:(int)valueColorIndex;	// 0x3201a8c1
- (void)dealloc;	// 0x3201a6e9
- (void)drawInContext:(CGContextRef)context;	// 0x3201aa6d
- (CFArrayRef)getLabels;	// 0x3201a981
- (CFArrayRef)getValues;	// 0x3201a971
- (void)resetLines;	// 0x3201a839
- (void)setFont:(CFStringRef)font withPointSize:(float)pointSize;	// 0x3201a7ad
- (void)setValue:(CFStringRef)value atIndex:(int)index;	// 0x3201a991
- (void)setValueAtIndex:(int)index format:(id)format;	// 0x3201a9e9
@end

