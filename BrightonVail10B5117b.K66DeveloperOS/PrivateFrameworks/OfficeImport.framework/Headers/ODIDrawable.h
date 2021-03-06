/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface ODIDrawable : NSObject {
}
+ (void)addArrowHeadToShapeProperties:(id)shapeProperties;	// 0x34cc6f1d
+ (id)addShapeWithBounds:(CGRect)bounds rotation:(float)rotation geometry:(id)geometry state:(id)state;	// 0x34cc6465
+ (void)map1dArrowStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x34cc68f5
+ (void)map1dArrowStyleToShape:(id)shape state:(id)state;	// 0x34cc69f5
+ (void)mapShapeProperties:(id)properties shape:(id)shape state:(id)state;	// 0x34cc6e85
+ (void)mapShapeProperties:(id)properties shapeStyle:(id)style shape:(id)shape state:(id)state;	// 0x34cc6e15
+ (void)mapStyleAndTextFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x34cc6afd
+ (void)mapStyleForLabelName:(id)labelName point:(id)point shape:(id)shape state:(id)state;	// 0x34cc6859
+ (void)mapStyleForLabelName:(id)labelName shape:(id)shape state:(id)state;	// 0x34cc67a1
+ (void)mapStyleForPresentationName:(id)presentationName point:(id)point shape:(id)shape state:(id)state;	// 0x34cc66fd
+ (void)mapStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x34cc65cd
+ (id)presentationWithName:(id)name point:(id)point;	// 0x34cc6b91
+ (id)shapeGeometryForBezierPath:(CGPathRef)bezierPath gSpace:(CGRect)space;	// 0x34cc5f59
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)controlPoint;	// 0x34cc5ded
+ (id)shapeGeometryForEllipse;	// 0x34cc5c1d
+ (id)shapeGeometryForRectangle;	// 0x34cc5bc1
+ (id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)controlPoint;	// 0x34cc5d19
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)radius;	// 0x34cc5c79
+ (id)shapeGeometryWithShapeType:(int)shapeType adjustValues:(const int *)values;	// 0x34cc5eb1
+ (CGSize)sizeOfDiagram:(id)diagram;	// 0x34cc640d
+ (id)styleForLabelName:(id)labelName styleCount:(int)count styleIndex:(int)index state:(id)state;	// 0x34cc6d41
+ (id)styleForPresentation:(id)presentation point:(id)point state:(id)state;	// 0x34cc6c6d
@end

