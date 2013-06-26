/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface CMShapeUtils : NSObject {
}
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x318a8eb5
+ (double)fixedPointDegToRad:(long)rad;	// 0x318a9129
+ (float)fontSizeForText:(id)text insideRectangle:(CGSize)rectangle;	// 0x318531ad
+ (double)getFormulaResultFromCustomGeometry:(id)customGeometry atIndex:(unsigned)index;	// 0x317dee29
+ (id)inscribedBoundsWithBounds:(id)bounds logicalBounds:(CGRect)bounds2;	// 0x31851d41
+ (id)internalBoundsWithBounds:(id)bounds scaleBounds:(CGRect)bounds2;	// 0x31853221
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after nodeSize:(CGSize)size;	// 0x31887211
+ (BOOL)isShapeALine:(id)line;	// 0x317d34d9
+ (double)mapAdjustCoord:(OADAdjustCoord)coord geometry:(id)geometry;	// 0x317d1d55
+ (long)mapFormulaKeywordValue:(int)value geometry:(id)geometry;	// 0x317df03d
+ (double)mapFormulaOfType:(int)type argValues:(double *)values isEscher:(BOOL)escher;	// 0x317df101
+ (double)milliMinutesToRad:(long)rad;	// 0x31846999
+ (double)nativeAngleToRad:(long)rad isEscher:(BOOL)escher;	// 0x31846971
+ (float)normalizedAngle:(float)angle;	// 0x318874b1
+ (long)radToFixedPointDeg:(double)fixedPointDeg;	// 0x318a9149
+ (long)radToMilliMinutes:(double)milliMinutes;	// 0x318a91a9
+ (long)radToNativeAngle:(double)nativeAngle isEscher:(BOOL)escher;	// 0x318a9179
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)absoluteInnerBounds parentBounds:(id)bounds;	// 0x31851fa5
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x317812d1
+ (void)setCoordSpaceForCustomeGeometry:(id)customeGeometry fromSize:(CGSize)size;	// 0x3184692d
+ (id)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x31780fe1
+ (CGRect)transformRect:(CGRect)rect scale:(float)scale offsetX:(float)x offsetY:(float)y;	// 0x31875d81
+ (id)transformedBoundsWithBounds:(id)bounds transform:(id)transform;	// 0x318825a1
@end
