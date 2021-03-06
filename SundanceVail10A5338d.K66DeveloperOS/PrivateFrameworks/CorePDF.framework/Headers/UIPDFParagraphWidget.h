/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFSelectionWidget.h"
#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
	CAShapeLayer *_trackingBorder;	// 4 = 0x4
	CGRect _initialRect;	// 8 = 0x8
	BOOL _tracking;	// 24 = 0x18
	CGRect _currentTrackingRect;	// 28 = 0x1c
	CALayer *_leftGrabber;	// 44 = 0x2c
	CALayer *_rightGrabber;	// 48 = 0x30
	CALayer *_topGrabber;	// 52 = 0x34
	CALayer *_bottomGrabber;	// 56 = 0x38
	CALayer *_selectedGrabber;	// 60 = 0x3c
	CGRect _boundsInPDFSpace;	// 64 = 0x40
	UIPDFPageView *_pageView;	// 80 = 0x50
	CGPoint _initialSelectionPointOnPage;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x3331e005; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x3331e0ed; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3331e0cd; S=0x3331e0dd; @synthesize=_pageView
- (id)init;	// 0x3331c559
- (CGRect)adjustRect:(CGRect)rect toPoint:(CGPoint)point;	// 0x3331d8bd
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x3331e005
- (void)dealloc;	// 0x3331c761
- (void)endTracking;	// 0x3331de8d
- (void)hide;	// 0x3331e01d
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x3331cedd
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x3331e0ed
- (void)layout;	// 0x3331d481
// declared property getter: - (id)pageView;	// 0x3331e0cd
- (void)remove;	// 0x3331ce45
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x3331d45d
- (CGRect)selectionBoundsInEffectsSpace;	// 0x3331c7a1
- (CGRect)selectionRectangle;	// 0x3331df9d
// declared property setter: - (void)setPageView:(id)view;	// 0x3331e0dd
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x3331d8b9
- (void)setSelectedGrabberPosition:(CGRect)position;	// 0x3331d9bd
- (void)setSelection:(id)selection;	// 0x3331c909
- (void)track:(CGPoint)track;	// 0x3331dabd
- (CGPoint)viewOffset;	// 0x3331d469
@end

