/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "UIPDFSelectionWidget.h"

@class CALayer, UIPDFPageView;

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget> {
	CALayer *_leftSelectionGrabber;	// 4 = 0x4
	CALayer *_leftBar;	// 8 = 0x8
	CALayer *_rightSelectionGrabber;	// 12 = 0xc
	CALayer *_rightBar;	// 16 = 0x10
	CALayer *_leftHandle;	// 20 = 0x14
	CALayer *_rightHandle;	// 24 = 0x18
	CALayer *_fixedSelectionGrabber;	// 28 = 0x1c
	UIPDFPageView *_pageView;	// 32 = 0x20
	float _handleHeight;	// 36 = 0x24
	float _handleWidth;	// 40 = 0x28
	CGPoint _initialSelectionPointOnPage;	// 44 = 0x2c
	float _offsetX;	// 52 = 0x34
	float _offsetY;	// 56 = 0x38
	BOOL _hiDPI;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x3265c08d; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x3265bf91; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3265bfa9; S=0x3265bfb9; @synthesize=_pageView
- (id)init;	// 0x3265d659
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x3265c08d
- (void)dealloc;	// 0x3265bfc9
- (void)endTracking;	// 0x3265bf71
- (void)hide;	// 0x3265c009
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x3265c36d
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x3265bf91
- (void)layout;	// 0x3265c1a1
- (void)layoutLeftSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x3265d1d5
- (void)layoutRightSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x3265cd3d
- (void)layoutWidget;	// 0x3265c9b9
// declared property getter: - (id)pageView;	// 0x3265bfa9
- (void)remove;	// 0x3265c8d5
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x3265bf29
- (CGRect)selectionRectangle;	// 0x3265bf75
// declared property setter: - (void)setPageView:(id)view;	// 0x3265bfb9
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x3265bef9
- (void)setSelection:(id)selection;	// 0x3265c929
- (void)track:(CGPoint)track;	// 0x3265bf6d
- (CGPoint)viewOffset;	// 0x3265c209
@end
