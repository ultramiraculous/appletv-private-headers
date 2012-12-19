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
@property(retain) id context;	// G=0x3542c905; S=0x3542c8c1; converted property
+ (void)createColors;	// 0x3542d0f5
+ (void)initialize;	// 0x3542c599
- (id)init;	// 0x3542c5a9
// converted property getter: - (id)context;	// 0x3542c905
- (void)dealloc;	// 0x3542c6c5
- (void)drawInContext:(CGContextRef)context;	// 0x3542d009
- (void)drawLineInContext:(CGContextRef)context from:(CGPoint)from to:(CGPoint)to thickness:(float)thickness color:(CGColorRef)color;	// 0x3542cf39
- (void)drawRectInContext:(CGContextRef)context rect:(CGRect)rect thickness:(float)thickness strokeColor:(CGColorRef)color fillColor:(CGColorRef)color5;	// 0x3542cf81
- (void)flipHorizontal;	// 0x3542ccd1
- (void)flipVertical;	// 0x3542ce05
- (void)logBounds;	// 0x3542c839
- (void)logFrame;	// 0x3542c7b1
- (void)rotate180;	// 0x3542cb9d
- (void)rotateC;	// 0x3542c935
- (void)rotateCC;	// 0x3542ca69
- (void)setBounds:(CGRect)bounds;	// 0x3542c711
// converted property setter: - (void)setContext:(id)context;	// 0x3542c8c1
- (void)setDrawsBorder:(BOOL)border;	// 0x3542c915
@end
