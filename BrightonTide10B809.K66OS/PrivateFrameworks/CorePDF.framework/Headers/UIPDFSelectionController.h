/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFPageView;
@protocol UIPDFSelectionWidget, NSObject;

@interface UIPDFSelectionController : NSObject {
	UIPDFPageView *_pageView;	// 4 = 0x4
	BOOL _rangeMode;	// 8 = 0x8
	id<NSObject, UIPDFSelectionWidget> _selectionWidget;	// 12 = 0xc
	BOOL _resizingWidget;	// 16 = 0x10
	CGPoint _selectionFixedPoint;	// 20 = 0x14
	CGRect _selectionBounds;	// 28 = 0x1c
	BOOL _preceeds;	// 44 = 0x2c
	BOOL _isTracking;	// 45 = 0x2d
	CGPoint _adjustedPoint;	// 48 = 0x30
	BOOL _hiding;	// 56 = 0x38
	long _firstIndex;	// 60 = 0x3c
	long _lastIndex;	// 64 = 0x40
	CGPoint _startPoint;	// 68 = 0x44
	BOOL _needsLayout;	// 76 = 0x4c
	BOOL _cancelled;	// 77 = 0x4d
	BOOL _instantModeIsSuspended;	// 78 = 0x4e
	BOOL _instantHighlightMode;	// 79 = 0x4f
}
@property(readonly, assign, nonatomic) CGPoint adjustedPoint;	// G=0x3388bec1; @synthesize=_adjustedPoint
@property(readonly, assign, nonatomic) CGPoint currentSelectionPoint;	// G=0x3388bde5; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPoint;	// G=0x3388bd7d; 
@property(assign, nonatomic) BOOL instantHighlightMode;	// G=0x3388bed9; S=0x3388bee9; @synthesize=_instantHighlightMode
@property(readonly, assign, nonatomic) BOOL isTracking;	// G=0x3388beb1; @synthesize=_isTracking
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3388be71; S=0x3388be81; @synthesize=_pageView
@property(readonly, assign, nonatomic) BOOL rangeMode;	// G=0x3388be91; @synthesize=_rangeMode
@property(readonly, assign, nonatomic) id<UIPDFSelectionWidget> selectionWidget;	// G=0x3388bea1; @synthesize=_selectionWidget
- (id)init;	// 0x33889d55
- (void)addSelectionWidget:(id)widget;	// 0x3388a8a1
- (void)adjustSelection:(CGPoint)selection;	// 0x3388a10d
// declared property getter: - (CGPoint)adjustedPoint;	// 0x3388bec1
- (void)clearSelection;	// 0x3388ab45
// declared property getter: - (CGPoint)currentSelectionPoint;	// 0x3388bde5
- (void)dealloc;	// 0x33889ec5
- (void)endTracking:(CGPoint)tracking;	// 0x3388b341
- (void)extendSelectionToParagraph;	// 0x3388aabd
- (void)hideWidget;	// 0x3388ac51
// declared property getter: - (CGPoint)initialSelectionPoint;	// 0x3388bd7d
// declared property getter: - (BOOL)instantHighlightMode;	// 0x3388bed9
// declared property getter: - (BOOL)isTracking;	// 0x3388beb1
- (void)layoutSelections;	// 0x3388be4d
// declared property getter: - (id)pageView;	// 0x3388be71
// declared property getter: - (BOOL)rangeMode;	// 0x3388be91
- (CGPoint)selectedPointOffset;	// 0x3388bd4d
- (void)selectionHide:(id)hide;	// 0x3388a049
- (void)selectionHideFromAncestor:(id)ancestor;	// 0x33889f21
- (void)selectionShow:(id)show;	// 0x3388a08d
- (void)selectionShowDelayed:(id)delayed;	// 0x3388a0d1
- (void)selectionShowToAncestor:(id)ancestor;	// 0x33889fb5
// declared property getter: - (id)selectionWidget;	// 0x3388bea1
// declared property setter: - (void)setInstantHighlightMode:(BOOL)mode;	// 0x3388bee9
// declared property setter: - (void)setPageView:(id)view;	// 0x3388be81
- (void)setSelectionFor:(CGPoint)aFor;	// 0x3388a941
- (BOOL)shouldTrackAt:(CGPoint)at;	// 0x3388ac75
- (void)startSelectingAt:(CGPoint)at;	// 0x3388ad31
- (void)startTracking:(CGPoint)tracking andPoint:(CGPoint)point;	// 0x3388b9d1
- (void)startTracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x3388ae85
- (void)suspendInstantHighlightMode;	// 0x3388b849
- (void)tracking:(CGPoint)tracking andPoint:(CGPoint)point;	// 0x3388bbdd
- (void)tracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x3388b109
- (BOOL)useParagraphMode;	// 0x3388a89d
@end

