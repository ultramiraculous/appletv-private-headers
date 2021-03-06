/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODIDrawable : NSObject {
}
+ (void)addArrowHeadToShapeProperties:(id)shapeProperties;	// 0x3459bfb1
+ (id)addShapeWithBounds:(CGRect)bounds rotation:(float)rotation geometry:(id)geometry state:(id)state;	// 0x3459c8fd
+ (void)map1dArrowStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x3459c505
+ (void)map1dArrowStyleToShape:(id)shape state:(id)state;	// 0x3459c40d
+ (void)mapShapeProperties:(id)properties shape:(id)shape state:(id)state;	// 0x3459c041
+ (void)mapShapeProperties:(id)properties shapeStyle:(id)style shape:(id)shape state:(id)state;	// 0x3459c0c5
+ (void)mapStyleAndTextFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x3459c375
+ (void)mapStyleForLabelName:(id)labelName point:(id)point shape:(id)shape state:(id)state;	// 0x3459c5f9
+ (void)mapStyleForLabelName:(id)labelName shape:(id)shape state:(id)state;	// 0x3459c691
+ (void)mapStyleForPresentationName:(id)presentationName point:(id)point shape:(id)shape state:(id)state;	// 0x3459c73d
+ (void)mapStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x3459c7e5
+ (id)presentationWithName:(id)name point:(id)point;	// 0x3459c2b5
+ (id)shapeGeometryForBezierPath:(CGPathRef)bezierPath gSpace:(CGRect)space;	// 0x3459cdd5
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)controlPoint;	// 0x3459cacd
+ (id)shapeGeometryForEllipse;	// 0x3459ccf1
+ (id)shapeGeometryForRectangle;	// 0x3459cd41
+ (id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)controlPoint;	// 0x3459cb85
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)radius;	// 0x3459cc55
+ (id)shapeGeometryWithShapeType:(int)shapeType adjustValues:(const int *)values;	// 0x3459ca49
+ (CGSize)sizeOfDiagram:(id)diagram;	// 0x3459cd91
+ (id)styleForLabelName:(id)labelName styleCount:(int)count styleIndex:(int)index state:(id)state;	// 0x3459c131
+ (id)styleForPresentation:(id)presentation point:(id)point state:(id)state;	// 0x3459c1ed
@end

