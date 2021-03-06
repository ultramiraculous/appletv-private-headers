/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CALayer.h"
#import "QuartzCore-Structs.h"

@class NSArray, NSString;

@interface CAShapeLayer : CALayer {
}
@property(assign) CGColorRef fillColor;	// G=0x305620c1; S=0x305620c9; 
@property(copy) NSString *fillRule;	// G=0x305620d1; S=0x305620d9; 
@property(copy) NSString *lineCap;	// G=0x30562141; S=0x30562149; 
@property(copy) NSArray *lineDashPattern;	// G=0x30562151; S=0x30562159; 
@property(assign) float lineDashPhase;	// G=0x30562161; S=0x30562169; 
@property(copy) NSString *lineJoin;	// G=0x30562131; S=0x30562139; 
@property(assign) float lineWidth;	// G=0x30562111; S=0x30562119; 
@property(assign) float miterLimit;	// G=0x30562121; S=0x30562129; 
@property(assign) CGPathRef path;	// G=0x305620b1; S=0x305620b9; 
@property(assign) CGColorRef strokeColor;	// G=0x305620e1; S=0x305620e9; 
@property(assign) float strokeEnd;	// G=0x30562101; S=0x30562109; 
@property(assign) float strokeStart;	// G=0x305620f1; S=0x305620f9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x30562059
+ (id)defaultValueForKey:(id)key;	// 0x305613d5
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x30561bd5
- (void)_renderForegroundInContext:(CGContextRef)context;	// 0x305615dd
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x30561fc9
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x30562011
- (void)didChangeValueForKey:(id)key;	// 0x305614cd
// declared property getter: - (CGColorRef)fillColor;	// 0x305620c1
// declared property getter: - (id)fillRule;	// 0x305620d1
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x3056152d
// declared property getter: - (id)lineCap;	// 0x30562141
// declared property getter: - (id)lineDashPattern;	// 0x30562151
// declared property getter: - (float)lineDashPhase;	// 0x30562161
// declared property getter: - (id)lineJoin;	// 0x30562131
// declared property getter: - (float)lineWidth;	// 0x30562111
// declared property getter: - (float)miterLimit;	// 0x30562121
// declared property getter: - (CGPathRef)path;	// 0x305620b1
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x305620c9
// declared property setter: - (void)setFillRule:(id)rule;	// 0x305620d9
// declared property setter: - (void)setLineCap:(id)cap;	// 0x30562149
// declared property setter: - (void)setLineDashPattern:(id)pattern;	// 0x30562159
// declared property setter: - (void)setLineDashPhase:(float)phase;	// 0x30562169
// declared property setter: - (void)setLineJoin:(id)join;	// 0x30562139
// declared property setter: - (void)setLineWidth:(float)width;	// 0x30562119
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x30562129
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x305620b9
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x305620e9
// declared property setter: - (void)setStrokeEnd:(float)end;	// 0x30562109
// declared property setter: - (void)setStrokeStart:(float)start;	// 0x305620f9
// declared property getter: - (CGColorRef)strokeColor;	// 0x305620e1
// declared property getter: - (float)strokeEnd;	// 0x30562101
// declared property getter: - (float)strokeStart;	// 0x305620f1
@end

