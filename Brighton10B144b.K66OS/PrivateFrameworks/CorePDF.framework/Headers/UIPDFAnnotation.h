/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPopupAnnotation, NSString, UIPDFSelection, CALayer, NSMutableArray, UIPDFPageView, UIPDFAnnotationView;

@interface UIPDFAnnotation : NSObject {
	CGPDFDictionaryRef _dictionary;	// 4 = 0x4
	CGColorRef _color;	// 8 = 0x8
	void *_appearanceStream;	// 12 = 0xc
	CGPDFStringRef _pdfContents;	// 16 = 0x10
	NSString *_annotationID;	// 20 = 0x14
	BOOL _hidden;	// 24 = 0x18
	UIPDFAnnotationView *_annotationView;	// 28 = 0x1c
	UIPDFPageView *_pageView;	// 32 = 0x20
	NSMutableArray *_quadPoints;	// 36 = 0x24
	CALayer *_drawingLayer;	// 40 = 0x28
	BOOL editable;	// 44 = 0x2c
	id data;	// 48 = 0x30
	NSString *_contents;	// 52 = 0x34
	int _index;	// 56 = 0x38
	UIPDFPopupAnnotation *_popup;	// 60 = 0x3c
@private
	NSString *_associatedAnnotationID;	// 64 = 0x40
@protected
	int annotationStyle;	// 68 = 0x44
}
@property(retain) NSString *annotationID;	// G=0x33892e59; S=0x33892e69; converted property
@property(assign, nonatomic) int annotationStyle;	// G=0x3389395d; S=0x3389396d; @synthesize
@property(retain, nonatomic) UIPDFAnnotationView *annotationView;	// G=0x3389380d; S=0x3389381d; @synthesize=_annotationView
@property(retain, nonatomic) NSString *associatedAnnotationID;	// G=0x33893929; S=0x33893939; @synthesize=_associatedAnnotationID
@property(retain, nonatomic) NSString *contents;	// G=0x338938b5; S=0x338938c5; @synthesize=_contents
@property(retain, nonatomic) id data;	// G=0x33893881; S=0x33893891; @synthesize
@property(retain, nonatomic) CALayer *drawingLayer;	// G=0x3389397d; S=0x3389398d; @synthesize=_drawingLayer
@property(assign, nonatomic) BOOL editable;	// G=0x33893861; S=0x33893871; @synthesize
@property(readonly, assign) BOOL hidden;	// G=0x33893259; converted property
@property(assign, nonatomic) int index;	// G=0x338938e9; S=0x338938f9; @synthesize=_index
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x33893841; S=0x33893851; @synthesize=_pageView
@property(assign, nonatomic) UIPDFPopupAnnotation *popup;	// G=0x33893909; S=0x33893919; @synthesize=_popup
@property(assign, nonatomic) UIPDFSelection *selection;	// G=0x338937e5; S=0x338937d5; @dynamic
+ (id)newAnnotationWithPage:(id)page fromArchive:(id)archive;	// 0x338927a5
- (id)init;	// 0x338929b5
- (id)initWithAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x33892af1
- (CGRect)Rect;	// 0x33893309
// converted property getter: - (id)annotationID;	// 0x33892e59
// declared property getter: - (int)annotationStyle;	// 0x3389395d
- (int)annotationType;	// 0x33892ec5
// declared property getter: - (id)annotationView;	// 0x3389380d
- (id)archive;	// 0x33892ec9
// declared property getter: - (id)associatedAnnotationID;	// 0x33893929
- (CGRect)bounds;	// 0x33893391
- (BOOL)containsPoint:(CGPoint)point;	// 0x338933b5
// declared property getter: - (id)contents;	// 0x338938b5
// declared property getter: - (id)data;	// 0x33893881
- (void)dealloc;	// 0x33892d49
- (id)description;	// 0x338936c5
- (void)drawInContext:(CGContextRef)context;	// 0x338933f1
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x338935b5
// declared property getter: - (id)drawingLayer;	// 0x3389397d
// declared property getter: - (BOOL)editable;	// 0x33893861
- (CGRect)frame;	// 0x3389336d
- (id)getImageNamed:(id)named ofType:(id)type;	// 0x33893199
- (BOOL)hasPopUp;	// 0x338935b9
// converted property getter: - (BOOL)hidden;	// 0x33893259
// declared property getter: - (int)index;	// 0x338938e9
- (BOOL)isMarkupAnnotation;	// 0x33893269
- (void)makeQuadpointsFrom:(id)from;	// 0x33893a6d
- (CGPathRef)newPathFromQuadPoints;	// 0x33893d25
- (id)newSelection;	// 0x338939b1
// declared property getter: - (id)pageView;	// 0x33893841
- (const char *)pdfContents;	// 0x33893601
- (CGRect)popUpAnnotationRect;	// 0x33893641
// declared property getter: - (id)popup;	// 0x33893909
- (CGRect)rectIn:(CGPDFArrayRef)anIn;	// 0x3389326d
// declared property getter: - (id)selection;	// 0x338937e5
// converted property setter: - (void)setAnnotationID:(id)anId;	// 0x33892e69
// declared property setter: - (void)setAnnotationStyle:(int)style;	// 0x3389396d
// declared property setter: - (void)setAnnotationView:(id)view;	// 0x3389381d
// declared property setter: - (void)setAssociatedAnnotationID:(id)anId;	// 0x33893939
// declared property setter: - (void)setContents:(id)contents;	// 0x338938c5
// declared property setter: - (void)setData:(id)data;	// 0x33893891
// declared property setter: - (void)setDrawingLayer:(id)layer;	// 0x3389398d
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x33893871
// declared property setter: - (void)setIndex:(int)index;	// 0x338938f9
// declared property setter: - (void)setPageView:(id)view;	// 0x33893851
// declared property setter: - (void)setPopup:(id)popup;	// 0x33893919
// declared property setter: - (void)setSelection:(id)selection;	// 0x338937d5
- (Class)viewClass;	// 0x33892ea9
@end
