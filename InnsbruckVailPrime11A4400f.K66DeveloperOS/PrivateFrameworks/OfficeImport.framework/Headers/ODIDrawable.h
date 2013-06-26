/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface ODIDrawable : NSObject {
}
+ (void)addArrowHeadToShapeProperties:(id)shapeProperties;	// 0x3198543d
+ (id)addShapeWithBounds:(CGRect)bounds rotation:(float)rotation geometry:(id)geometry state:(id)state;	// 0x31984985
+ (void)map1dArrowStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x31984e19
+ (void)map1dArrowStyleToShape:(id)shape state:(id)state;	// 0x31984f19
+ (void)mapShapeProperties:(id)properties shape:(id)shape state:(id)state;	// 0x319853a5
+ (void)mapShapeProperties:(id)properties shapeStyle:(id)style shape:(id)shape state:(id)state;	// 0x31985335
+ (void)mapStyleAndTextFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x31985025
+ (void)mapStyleForLabelName:(id)labelName point:(id)point shape:(id)shape state:(id)state;	// 0x31984d79
+ (void)mapStyleForLabelName:(id)labelName shape:(id)shape state:(id)state;	// 0x31984cc1
+ (void)mapStyleForPresentationName:(id)presentationName point:(id)point shape:(id)shape state:(id)state;	// 0x31984c1d
+ (void)mapStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x31984aed
+ (id)presentationWithName:(id)name point:(id)point;	// 0x319850b9
+ (id)shapeGeometryForBezierPath:(id)bezierPath gSpace:(CGRect)space;	// 0x319845c9
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)controlPoint;	// 0x3198445d
+ (id)shapeGeometryForEllipse;	// 0x3198428d
+ (id)shapeGeometryForRectangle;	// 0x31984231
+ (id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)controlPoint;	// 0x31984389
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)radius;	// 0x319842e9
+ (id)shapeGeometryWithShapeType:(int)shapeType adjustValues:(const int *)values;	// 0x31984521
+ (CGSize)sizeOfDiagram:(id)diagram;	// 0x3198492d
+ (id)styleForLabelName:(id)labelName styleCount:(int)count styleIndex:(int)index state:(id)state;	// 0x31985261
+ (id)styleForPresentation:(id)presentation point:(id)point state:(id)state;	// 0x3198518d
@end
