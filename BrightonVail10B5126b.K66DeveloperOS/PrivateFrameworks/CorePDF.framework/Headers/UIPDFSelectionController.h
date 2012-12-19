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
@property(readonly, assign, nonatomic) CGPoint adjustedPoint;	// G=0x3388aec1; @synthesize=_adjustedPoint
@property(readonly, assign, nonatomic) CGPoint currentSelectionPoint;	// G=0x3388ade5; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPoint;	// G=0x3388ad7d; 
@property(assign, nonatomic) BOOL instantHighlightMode;	// G=0x3388aed9; S=0x3388aee9; @synthesize=_instantHighlightMode
@property(readonly, assign, nonatomic) BOOL isTracking;	// G=0x3388aeb1; @synthesize=_isTracking
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x3388ae71; S=0x3388ae81; @synthesize=_pageView
@property(readonly, assign, nonatomic) BOOL rangeMode;	// G=0x3388ae91; @synthesize=_rangeMode
@property(readonly, assign, nonatomic) id<UIPDFSelectionWidget> selectionWidget;	// G=0x3388aea1; @synthesize=_selectionWidget
- (id)init;	// 0x33888d55
- (void)addSelectionWidget:(id)widget;	// 0x338898a1
- (void)adjustSelection:(CGPoint)selection;	// 0x3388910d
// declared property getter: - (CGPoint)adjustedPoint;	// 0x3388aec1
- (void)clearSelection;	// 0x33889b45
// declared property getter: - (CGPoint)currentSelectionPoint;	// 0x3388ade5
- (void)dealloc;	// 0x33888ec5
- (void)endTracking:(CGPoint)tracking;	// 0x3388a341
- (void)extendSelectionToParagraph;	// 0x33889abd
- (void)hideWidget;	// 0x33889c51
// declared property getter: - (CGPoint)initialSelectionPoint;	// 0x3388ad7d
// declared property getter: - (BOOL)instantHighlightMode;	// 0x3388aed9
// declared property getter: - (BOOL)isTracking;	// 0x3388aeb1
- (void)layoutSelections;	// 0x3388ae4d
// declared property getter: - (id)pageView;	// 0x3388ae71
// declared property getter: - (BOOL)rangeMode;	// 0x3388ae91
- (CGPoint)selectedPointOffset;	// 0x3388ad4d
- (void)selectionHide:(id)hide;	// 0x33889049
- (void)selectionHideFromAncestor:(id)ancestor;	// 0x33888f21
- (void)selectionShow:(id)show;	// 0x3388908d
- (void)selectionShowDelayed:(id)delayed;	// 0x338890d1
- (void)selectionShowToAncestor:(id)ancestor;	// 0x33888fb5
// declared property getter: - (id)selectionWidget;	// 0x3388aea1
// declared property setter: - (void)setInstantHighlightMode:(BOOL)mode;	// 0x3388aee9
// declared property setter: - (void)setPageView:(id)view;	// 0x3388ae81
- (void)setSelectionFor:(CGPoint)aFor;	// 0x33889941
- (BOOL)shouldTrackAt:(CGPoint)at;	// 0x33889c75
- (void)startSelectingAt:(CGPoint)at;	// 0x33889d31
- (void)startTracking:(CGPoint)tracking andPoint:(CGPoint)point;	// 0x3388a9d1
- (void)startTracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x33889e85
- (void)suspendInstantHighlightMode;	// 0x3388a849
- (void)tracking:(CGPoint)tracking andPoint:(CGPoint)point;	// 0x3388abdd
- (void)tracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x3388a109
- (BOOL)useParagraphMode;	// 0x3388989d
@end
