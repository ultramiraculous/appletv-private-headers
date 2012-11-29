/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFSelectionWidget.h"
#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

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
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x32b198dd; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x32b19b09; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x32b19ae9; S=0x32b19af9; @synthesize=_pageView
- (id)init;	// 0x32b17ef9
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x32b198dd
- (void)dealloc;	// 0x32b181fd
- (void)endTracking;	// 0x32b198b5
- (void)hide;	// 0x32b19a65
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x32b19169
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x32b19b09
- (void)layout;	// 0x32b198a1
- (void)layoutLeftSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x32b18241
- (void)layoutRightSelectionGrabber:(CGRect)grabber transform:(CGAffineTransform *)transform width:(float)width extraHeight:(float)height unitSize:(CGSize)size;	// 0x32b18719
- (void)layoutWidget;	// 0x32b18c0d
// declared property getter: - (id)pageView;	// 0x32b19ae9
- (void)remove;	// 0x32b190d1
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x32b19121
- (CGRect)selectionRectangle;	// 0x32b198b9
// declared property setter: - (void)setPageView:(id)view;	// 0x32b19af9
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x32b19009
- (void)setSelection:(id)selection;	// 0x32b19039
- (void)track:(CGPoint)track;	// 0x32b198b1
- (CGPoint)viewOffset;	// 0x32b19729
@end
