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
@property(retain) NSString *annotationID;	// G=0x33a74e59; S=0x33a74e69; converted property
@property(assign, nonatomic) int annotationStyle;	// G=0x33a7595d; S=0x33a7596d; @synthesize
@property(retain, nonatomic) UIPDFAnnotationView *annotationView;	// G=0x33a7580d; S=0x33a7581d; @synthesize=_annotationView
@property(retain, nonatomic) NSString *associatedAnnotationID;	// G=0x33a75929; S=0x33a75939; @synthesize=_associatedAnnotationID
@property(retain, nonatomic) NSString *contents;	// G=0x33a758b5; S=0x33a758c5; @synthesize=_contents
@property(retain, nonatomic) id data;	// G=0x33a75881; S=0x33a75891; @synthesize
@property(retain, nonatomic) CALayer *drawingLayer;	// G=0x33a7597d; S=0x33a7598d; @synthesize=_drawingLayer
@property(assign, nonatomic) BOOL editable;	// G=0x33a75861; S=0x33a75871; @synthesize
@property(readonly, assign) BOOL hidden;	// G=0x33a75259; converted property
@property(assign, nonatomic) int index;	// G=0x33a758e9; S=0x33a758f9; @synthesize=_index
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x33a75841; S=0x33a75851; @synthesize=_pageView
@property(assign, nonatomic) UIPDFPopupAnnotation *popup;	// G=0x33a75909; S=0x33a75919; @synthesize=_popup
@property(assign, nonatomic) UIPDFSelection *selection;	// G=0x33a757e5; S=0x33a757d5; @dynamic
+ (id)newAnnotationWithPage:(id)page fromArchive:(id)archive;	// 0x33a747a5
- (id)init;	// 0x33a749b5
- (id)initWithAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x33a74af1
- (CGRect)Rect;	// 0x33a75309
// converted property getter: - (id)annotationID;	// 0x33a74e59
// declared property getter: - (int)annotationStyle;	// 0x33a7595d
- (int)annotationType;	// 0x33a74ec5
// declared property getter: - (id)annotationView;	// 0x33a7580d
- (id)archive;	// 0x33a74ec9
// declared property getter: - (id)associatedAnnotationID;	// 0x33a75929
- (CGRect)bounds;	// 0x33a75391
- (BOOL)containsPoint:(CGPoint)point;	// 0x33a753b5
// declared property getter: - (id)contents;	// 0x33a758b5
// declared property getter: - (id)data;	// 0x33a75881
- (void)dealloc;	// 0x33a74d49
- (id)description;	// 0x33a756c5
- (void)drawInContext:(CGContextRef)context;	// 0x33a753f1
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x33a755b5
// declared property getter: - (id)drawingLayer;	// 0x33a7597d
// declared property getter: - (BOOL)editable;	// 0x33a75861
- (CGRect)frame;	// 0x33a7536d
- (id)getImageNamed:(id)named ofType:(id)type;	// 0x33a75199
- (BOOL)hasPopUp;	// 0x33a755b9
// converted property getter: - (BOOL)hidden;	// 0x33a75259
// declared property getter: - (int)index;	// 0x33a758e9
- (BOOL)isMarkupAnnotation;	// 0x33a75269
- (void)makeQuadpointsFrom:(id)from;	// 0x33a75a6d
- (CGPathRef)newPathFromQuadPoints;	// 0x33a75d25
- (id)newSelection;	// 0x33a759b1
// declared property getter: - (id)pageView;	// 0x33a75841
- (const char *)pdfContents;	// 0x33a75601
- (CGRect)popUpAnnotationRect;	// 0x33a75641
// declared property getter: - (id)popup;	// 0x33a75909
- (CGRect)rectIn:(CGPDFArrayRef)anIn;	// 0x33a7526d
// declared property getter: - (id)selection;	// 0x33a757e5
// converted property setter: - (void)setAnnotationID:(id)anId;	// 0x33a74e69
// declared property setter: - (void)setAnnotationStyle:(int)style;	// 0x33a7596d
// declared property setter: - (void)setAnnotationView:(id)view;	// 0x33a7581d
// declared property setter: - (void)setAssociatedAnnotationID:(id)anId;	// 0x33a75939
// declared property setter: - (void)setContents:(id)contents;	// 0x33a758c5
// declared property setter: - (void)setData:(id)data;	// 0x33a75891
// declared property setter: - (void)setDrawingLayer:(id)layer;	// 0x33a7598d
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x33a75871
// declared property setter: - (void)setIndex:(int)index;	// 0x33a758f9
// declared property setter: - (void)setPageView:(id)view;	// 0x33a75851
// declared property setter: - (void)setPopup:(id)popup;	// 0x33a75919
// declared property setter: - (void)setSelection:(id)selection;	// 0x33a757d5
- (Class)viewClass;	// 0x33a74ea9
@end

