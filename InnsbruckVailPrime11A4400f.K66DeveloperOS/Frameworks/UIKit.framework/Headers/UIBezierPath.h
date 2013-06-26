/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <ImageIO/NSObject.h>
#import "NSCoding.h"


@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
	CGPathRef _path;	// 4 = 0x4
	float *_lineDashPattern;	// 8 = 0x8
	unsigned _lineDashPatternCount;	// 12 = 0xc
	float _lineWidth;	// 16 = 0x10
	float _miterLimit;	// 20 = 0x14
	float _flatness;	// 24 = 0x18
	float _lineDashPhase;	// 28 = 0x1c
	int _lineCapStyle;	// 32 = 0x20
	int _lineJoinStyle;	// 36 = 0x24
	BOOL _usesEvenOddFillRule;	// 40 = 0x28
	CGPathRef _immutablePath;	// 44 = 0x2c
	BOOL _immutablePathIsValid;	// 48 = 0x30
}
@property(assign, nonatomic) CGPathRef CGPath;	// G=0x2f53b429; S=0x2f58f6c9; 
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x2f58f751; 
@property(readonly, assign, nonatomic) CGPoint currentPoint;	// G=0x2f58f769; 
@property(readonly, assign, getter=isEmpty) BOOL empty;	// G=0x2f58f739; 
@property(assign, nonatomic) float flatness;	// G=0x2f591339; S=0x2f591349; @synthesize=_flatness
@property(assign, nonatomic) int lineCapStyle;	// G=0x2f5912d9; S=0x2f5912e9; @synthesize=_lineCapStyle
@property(assign, nonatomic) int lineJoinStyle;	// G=0x2f5912f9; S=0x2f591309; @synthesize=_lineJoinStyle
@property(assign, nonatomic) float lineWidth;	// G=0x2f5912b9; S=0x2f5912c9; @synthesize=_lineWidth
@property(assign, nonatomic) float miterLimit;	// G=0x2f591319; S=0x2f591329; @synthesize=_miterLimit
@property(assign, nonatomic) BOOL usesEvenOddFillRule;	// G=0x2f591359; S=0x2f591369; @synthesize=_usesEvenOddFillRule
+ (id)_bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadius:(float)radius;	// 0x2f4ac39d
+ (id)_continuousRoundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners cornerRadii:(id)radii segments:(int)segments;	// 0x2f590aa1
+ (id)_continuousRoundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners cornerRadius:(CGSize)radius segments:(int)segments;	// 0x2f5909f1
+ (id)_roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners cornerRadius:(float)radius segments:(int)segments;	// 0x2f4ac3e1
+ (id)bezierPath;	// 0x2f49d41d
+ (id)bezierPathWithArcCenter:(CGPoint)arcCenter radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x2f58f089
+ (id)bezierPathWithCGPath:(CGPathRef)cgpath;	// 0x2f58f13d
+ (id)bezierPathWithOvalInRect:(CGRect)rect;	// 0x2f58f031
+ (id)bezierPathWithRect:(CGRect)rect;	// 0x2f49d3c5
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect byRoundingCorners:(unsigned)corners cornerRadii:(CGSize)radii;	// 0x2f576be5
+ (id)bezierPathWithRoundedRect:(CGRect)roundedRect cornerRadius:(float)radius;	// 0x2f5222dd
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadii:(id)cornerRadii;	// 0x2f59047d
+ (id)roundedRectBezierPath:(CGRect)path withRoundedCorners:(int)roundedCorners withCornerRadius:(float)cornerRadius;	// 0x2f4ac361
+ (id)roundedRectBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x2f4fdac1
+ (id)roundedRectBezierPath:(CGRect)path withTopCornerRadius:(float)topCornerRadius withBottomCornerRadius:(float)bottomCornerRadius;	// 0x2f58f9d1
+ (id)shadowBezierPath:(CGRect)path withRoundedEdges:(int)roundedEdges;	// 0x2f52cdcd
- (id)init;	// 0x2f58e8d1
- (id)initWithCoder:(id)coder;	// 0x2f58e8fd
// declared property getter: - (CGPathRef)CGPath;	// 0x2f53b429
- (void)_addRoundedCornerWithTrueCorner:(CGPoint)trueCorner radius:(CGSize)radius corner:(unsigned)corner clockwise:(BOOL)clockwise;	// 0x2f58fe19
- (CGPathRef)_createMutablePathByDecodingData:(id)data;	// 0x2f58faa1
- (id)_initWithCGMutablePath:(CGPathRef)cgmutablePath;	// 0x2f49d475
- (CGPathRef)_mutablePath;	// 0x2f49d551
- (CGPathRef)_pathRef;	// 0x2f52d015
- (void)addArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x2f58f275
- (void)addClip;	// 0x2f49d565
- (void)addCurveToPoint:(CGPoint)point controlPoint1:(CGPoint)a1 controlPoint2:(CGPoint)a2;	// 0x2f58f1e5
- (void)addLineToPoint:(CGPoint)point;	// 0x2f4ade39
- (void)addQuadCurveToPoint:(CGPoint)point controlPoint:(CGPoint)point2;	// 0x2f58f22d
- (void)appendBezierPath:(id)path;	// 0x2f590355
- (void)appendBezierPathWithArcWithCenter:(CGPoint)center radius:(float)radius startAngle:(float)angle endAngle:(float)angle4 clockwise:(BOOL)clockwise;	// 0x2f52d029
- (void)appendBezierPathWithOvalInRect:(CGRect)rect;	// 0x2f5903dd
- (void)appendBezierPathWithOvalInRect:(CGRect)rect transform:(CGAffineTransform)transform;	// 0x2f590421
- (void)appendBezierPathWithRect:(CGRect)rect;	// 0x2f590399
- (void)appendPath:(id)path;	// 0x2f58f2d5
- (void)applyTransform:(CGAffineTransform)transform;	// 0x2f58f319
- (id)bezierPathByReversingPath;	// 0x2f58f3c9
// declared property getter: - (CGRect)bounds;	// 0x2f58f751
- (void)clip;	// 0x2f4aca25
- (void)closePath;	// 0x2f58f36d
- (BOOL)containsPoint:(CGPoint)point;	// 0x2f58f781
- (id)copyWithZone:(NSZone *)zone;	// 0x2f58ef15
// declared property getter: - (CGPoint)currentPoint;	// 0x2f58f769
- (void)dealloc;	// 0x2f49d5ad
- (void)encodeWithCoder:(id)coder;	// 0x2f58ebd9
- (void)fill;	// 0x2f4fde1d
- (void)fillWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x2f522481
// declared property getter: - (float)flatness;	// 0x2f591339
- (void)getLineDash:(float *)dash count:(int *)count phase:(float *)phase;	// 0x2f58f859
// declared property getter: - (BOOL)isEmpty;	// 0x2f58f739
// declared property getter: - (int)lineCapStyle;	// 0x2f5912d9
// declared property getter: - (int)lineJoinStyle;	// 0x2f5912f9
- (void)lineToPoint:(CGPoint)point;	// 0x2f4ade25
// declared property getter: - (float)lineWidth;	// 0x2f5912b9
// declared property getter: - (float)miterLimit;	// 0x2f591319
- (void)moveToPoint:(CGPoint)point;	// 0x2f4addf5
- (void)removeAllPoints;	// 0x2f58f399
// declared property setter: - (void)setCGPath:(CGPathRef)path;	// 0x2f58f6c9
// declared property setter: - (void)setFlatness:(float)flatness;	// 0x2f591349
// declared property setter: - (void)setLineCapStyle:(int)style;	// 0x2f5912e9
- (void)setLineDash:(const float *)dash count:(int)count phase:(float)phase;	// 0x2f58f7b9
// declared property setter: - (void)setLineJoinStyle:(int)style;	// 0x2f591309
// declared property setter: - (void)setLineWidth:(float)width;	// 0x2f5912c9
// declared property setter: - (void)setMiterLimit:(float)limit;	// 0x2f591329
// declared property setter: - (void)setUsesEvenOddFillRule:(BOOL)rule;	// 0x2f591369
- (void)stroke;	// 0x2f4ac955
- (void)strokeWithBlendMode:(int)blendMode alpha:(float)alpha;	// 0x2f58f8e5
// declared property getter: - (BOOL)usesEvenOddFillRule;	// 0x2f591359
@end
