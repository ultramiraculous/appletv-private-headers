/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPGraphicObject.h"
#import "CorePDF-Structs.h"
#import "CPDisposable.h"


@interface CPShape : CPGraphicObject <CPDisposable> {
	unsigned pdfObjectID;	// 92 = 0x5c
	CGPathRef path;	// 96 = 0x60
	BOOL isUprightRectangle;	// 100 = 0x64
	int windingRule;	// 104 = 0x68
	float lineWidth;	// 108 = 0x6c
	float miterLimit;	// 112 = 0x70
	int lineCap;	// 116 = 0x74
	int lineJoin;	// 120 = 0x78
	CGColorRef fillColor;	// 124 = 0x7c
	CGColorRef strokeColor;	// 128 = 0x80
	CGPDFObject *fillObject;	// 132 = 0x84
	CGPDFObject *strokeObject;	// 136 = 0x88
	CGAffineTransform paintTransform;	// 140 = 0x8c
	BOOL boundsComputed;	// 164 = 0xa4
	BOOL renderedBoundsComputed;	// 165 = 0xa5
}
@property(assign) CGColorRef fillColor;	// G=0x33835691; S=0x338356a1; converted property
@property(assign) CGPDFObject *fillObject;	// G=0x338356d1; S=0x338356e1; converted property
@property(readonly, assign) BOOL isUprightRectangle;	// G=0x338355fd; converted property
@property(assign) int lineCap;	// G=0x33835849; S=0x33835859; converted property
@property(assign) int lineJoin;	// G=0x33835869; S=0x33835879; converted property
@property(assign) float lineWidth;	// G=0x338357ad; S=0x338357bd; converted property
@property(assign) float miterLimit;	// G=0x33835829; S=0x33835839; converted property
@property(assign) CGAffineTransform paintTransform;	// G=0x33835889; S=0x338358bd; converted property
@property(assign) CGPathRef path;	// G=0x338350fd; S=0x3383510d; converted property
@property(assign) unsigned pdfObjectID;	// G=0x338350dd; S=0x338350ed; converted property
@property(assign) CGColorRef strokeColor;	// G=0x33835721; S=0x33835731; converted property
@property(assign) CGPDFObject *strokeObject;	// G=0x3383575d; S=0x3383576d; converted property
@property(assign) int windingRule;	// G=0x33835671; S=0x33835681; converted property
- (id)init;	// 0x33834dfd
- (id)initWithPDFShape:(CPPDFShape *)pdfshape;	// 0x338361fd
- (void)accept:(id)accept;	// 0x33835649
- (void)addShape:(id)shape;	// 0x33835c3d
- (id)attributes;	// 0x33835639
- (CGRect)bounds;	// 0x33834ffd
- (BOOL)canCombineWith:(id)with;	// 0x33835a9d
- (id)copyWithZone:(NSZone *)zone;	// 0x33834f81
- (void)dealloc;	// 0x33834f41
- (void)dispose;	// 0x33834eb5
// converted property getter: - (CGColorRef)fillColor;	// 0x33835691
// converted property getter: - (CGPDFObject *)fillObject;	// 0x338356d1
- (void)finalize;	// 0x33834f01
- (BOOL)hasFill;	// 0x338356f1
- (BOOL)hasSamePathAs:(id)as;	// 0x338358f1
- (BOOL)hasStroke;	// 0x3383577d
- (CGRect)innerBounds;	// 0x3383555d
- (BOOL)isStrokeFor:(id)aFor;	// 0x338359bd
// converted property getter: - (BOOL)isUprightRectangle;	// 0x338355fd
- (BOOL)isVisible;	// 0x33835a1d
// converted property getter: - (int)lineCap;	// 0x33835849
// converted property getter: - (int)lineJoin;	// 0x33835869
// converted property getter: - (float)lineWidth;	// 0x338357ad
- (void)makeLineFromVertex:(CGPoint)vertex toVertex:(CGPoint)vertex2;	// 0x33836189
// converted property getter: - (float)miterLimit;	// 0x33835829
// converted property getter: - (CGAffineTransform)paintTransform;	// 0x33835889
// converted property getter: - (CGPathRef)path;	// 0x338350fd
- (unsigned)pathElementCount;	// 0x338361e9
// converted property getter: - (unsigned)pdfObjectID;	// 0x338350dd
- (void)recomputeBounds;	// 0x33835079
- (void)recomputeRenderedBounds;	// 0x33835291
- (CGRect)renderedBounds;	// 0x338351ad
// converted property setter: - (void)setFillColor:(CGColorRef)color;	// 0x338356a1
// converted property setter: - (void)setFillObject:(CGPDFObject *)object;	// 0x338356e1
// converted property setter: - (void)setLineCap:(int)cap;	// 0x33835859
// converted property setter: - (void)setLineJoin:(int)join;	// 0x33835879
// converted property setter: - (void)setLineWidth:(float)width;	// 0x338357bd
// converted property setter: - (void)setMiterLimit:(float)limit;	// 0x33835839
// converted property setter: - (void)setPaintTransform:(CGAffineTransform)transform;	// 0x338358bd
// converted property setter: - (void)setPath:(CGPathRef)path;	// 0x3383510d
// converted property setter: - (void)setPdfObjectID:(unsigned)anId;	// 0x338350ed
// converted property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x33835731
// converted property setter: - (void)setStrokeObject:(CGPDFObject *)object;	// 0x3383576d
// converted property setter: - (void)setWindingRule:(int)rule;	// 0x33835681
- (id)string;	// 0x33836159
// converted property getter: - (CGColorRef)strokeColor;	// 0x33835721
// converted property getter: - (CGPDFObject *)strokeObject;	// 0x3383575d
// converted property getter: - (int)windingRule;	// 0x33835671
- (long)zOrder;	// 0x33835661
@end
