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
	id<UIPDFSelectionWidget, NSObject> _selectionWidget;	// 12 = 0xc
	BOOL _resizingWidget;	// 16 = 0x10
	CGPoint _selectionFixedPoint;	// 20 = 0x14
	CGRect _selectionBounds;	// 28 = 0x1c
	BOOL _preceeds;	// 44 = 0x2c
	BOOL _isTracking;	// 45 = 0x2d
	CGPoint _adjustedPoint;	// 48 = 0x30
	BOOL _hiding;	// 56 = 0x38
	int _firstIndex;	// 60 = 0x3c
	int _lastIndex;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) CGPoint adjustedPoint;	// G=0x307e7911; @synthesize=_adjustedPoint
@property(readonly, assign, nonatomic) CGPoint currentSelectionPoint;	// G=0x307e7aed; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPoint;	// G=0x307e7b51; 
@property(readonly, assign, nonatomic) BOOL isTracking;	// G=0x307e7929; @synthesize=_isTracking
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x307e7959; S=0x307e7969; @synthesize=_pageView
@property(readonly, assign, nonatomic) BOOL rangeMode;	// G=0x307e7949; @synthesize=_rangeMode
@property(readonly, assign, nonatomic) id<UIPDFSelectionWidget> selectionWidget;	// G=0x307e7939; @synthesize=_selectionWidget
- (id)init;	// 0x307e7979
- (void)adjustSelection:(CGPoint)selection;	// 0x307e8675
// declared property getter: - (CGPoint)adjustedPoint;	// 0x307e7911
- (void)clearSelection;	// 0x307e8395
// declared property getter: - (CGPoint)currentSelectionPoint;	// 0x307e7aed
- (void)dealloc;	// 0x307e8e9d
- (void)endTracking:(CGPoint)tracking;	// 0x307e7bdd
- (void)extendSelectionToParagraph;	// 0x307e847d
- (void)hideWidget;	// 0x307e8369
// declared property getter: - (CGPoint)initialSelectionPoint;	// 0x307e7b51
// declared property getter: - (BOOL)isTracking;	// 0x307e7929
- (void)layoutSelections;	// 0x307e7ac1
// declared property getter: - (id)pageView;	// 0x307e7959
// declared property getter: - (BOOL)rangeMode;	// 0x307e7949
- (CGPoint)selectedPointOffset;	// 0x307e7bb5
- (void)selectionHide:(id)hide;	// 0x307e8e55
- (void)selectionShow:(id)show;	// 0x307e8e0d
- (void)selectionShowDelayed:(id)delayed;	// 0x307e8dd1
// declared property getter: - (id)selectionWidget;	// 0x307e7939
// declared property setter: - (void)setPageView:(id)view;	// 0x307e7969
- (void)setSelectionFor:(CGPoint)aFor;	// 0x307e8501
- (BOOL)shouldTrackAt:(CGPoint)at;	// 0x307e82b5
- (void)startSelectingAt:(CGPoint)at;	// 0x307e8165
- (void)startTracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x307e7fe9
- (void)tracking:(CGPoint)tracking showMagnifier:(BOOL *)magnifier;	// 0x307e7dfd
- (BOOL)useParagraphMode;	// 0x307e790d
@end

