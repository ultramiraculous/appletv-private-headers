/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import <CALayer.h> // Unknown library


@interface SKLayer : CALayer {
	id _context;	// 48 = 0x30
	BOOL _drawsBorder;	// 52 = 0x34
}
@property(retain) id context;	// G=0x30269905; S=0x302698c1; converted property
+ (void)createColors;	// 0x3026a0f5
+ (void)initialize;	// 0x30269599
- (id)init;	// 0x302695a9
// converted property getter: - (id)context;	// 0x30269905
- (void)dealloc;	// 0x302696c5
- (void)drawInContext:(CGContextRef)context;	// 0x3026a009
- (void)drawLineInContext:(CGContextRef)context from:(CGPoint)from to:(CGPoint)to thickness:(float)thickness color:(CGColorRef)color;	// 0x30269f39
- (void)drawRectInContext:(CGContextRef)context rect:(CGRect)rect thickness:(float)thickness strokeColor:(CGColorRef)color fillColor:(CGColorRef)color5;	// 0x30269f81
- (void)flipHorizontal;	// 0x30269cd1
- (void)flipVertical;	// 0x30269e05
- (void)logBounds;	// 0x30269839
- (void)logFrame;	// 0x302697b1
- (void)rotate180;	// 0x30269b9d
- (void)rotateC;	// 0x30269935
- (void)rotateCC;	// 0x30269a69
- (void)setBounds:(CGRect)bounds;	// 0x30269711
// converted property setter: - (void)setContext:(id)context;	// 0x302698c1
- (void)setDrawsBorder:(BOOL)border;	// 0x30269915
@end

