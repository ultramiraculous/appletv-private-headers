/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <UIView.h> // Unknown library
#import "CorePDF-Structs.h"

@class UIPDFPage, UIPDFViewTouchHandler, UIPDFPageContentLayer;
@protocol UIPDFPageViewDelegate, UIPDFSelectionWidget;

@interface UIPDFPageView : UIView {
	UIPDFPage *_page;	// 44 = 0x2c
	UIPDFViewTouchHandler *_touchHandler;	// 48 = 0x30
	CGAffineTransform _pageToViewTransform;	// 52 = 0x34
	CGAffineTransform _viewToPageTransform;	// 76 = 0x4c
	CGRect _cropBox;	// 100 = 0x64
	float _margin;	// 116 = 0x74
	BOOL _allowSelection;	// 120 = 0x78
	id<UIPDFPageViewDelegate> _delegate;	// 124 = 0x7c
	CGRect zoomRect;	// 128 = 0x80
	UIPDFPageContentLayer *_contentLayer;	// 144 = 0x90
	BOOL _scalePageOnDraw;	// 148 = 0x94
	id<UIPDFSelectionWidget> _selectionWidget;	// 152 = 0x98
}
@property(assign, nonatomic) BOOL allowSelection;	// G=0x30bd6c05; S=0x30bd6c15; @synthesize=_allowSelection
@property(readonly, assign, nonatomic) UIPDFPageContentLayer *contentLayer;	// G=0x30bd6c25; @synthesize=_contentLayer
@property(assign, nonatomic) id<UIPDFPageViewDelegate> delegate;	// G=0x30bd6c45; S=0x30bd6c55; @synthesize=_delegate
@property(assign, nonatomic) float margin;	// G=0x30bd6c65; S=0x30bd6c75; @synthesize=_margin
@property(retain, nonatomic) UIPDFPage *page;	// G=0x30bd6c85; S=0x30bd7295; @synthesize=_page
@property(assign, nonatomic) id<UIPDFSelectionWidget> selectionWidget;	// G=0x30bd6c35; S=0x30bd6c95; @synthesize=_selectionWidget
- (id)initWithFrame:(CGRect)frame;	// 0x30bd70c9
- (id)initWithPage:(id)page;	// 0x30bd7059
// declared property getter: - (BOOL)allowSelection;	// 0x30bd6c05
// declared property getter: - (id)contentLayer;	// 0x30bd6c25
- (CGPoint)convertPointFromLayer:(CGPoint)layer;	// 0x30bd6f99
- (CGPoint)convertPointFromPDFPageSpace:(CGPoint)pdfpageSpace;	// 0x30bd6bb9
- (CGPoint)convertPointToLayer:(CGPoint)layer;	// 0x30bd6ff9
- (CGPoint)convertPointToPDFPageSpace:(CGPoint)pdfpageSpace;	// 0x30bd6b6d
- (CGRect)convertRectFromPDFPageSpace:(CGRect)pdfpageSpace;	// 0x30bd7a75
- (CGRect)convertRectToLayer:(CGRect)layer;	// 0x30bd6f35
- (CGRect)convertRectToPDFPageSpace:(CGRect)pdfpageSpace;	// 0x30bd7ac1
- (CGImageRef)createBitMapAtScale:(float)scale flip:(BOOL)flip;	// 0x30bd7e45
- (void)dealloc;	// 0x30bd6d65
// declared property getter: - (id)delegate;	// 0x30bd6c45
- (void)displayContent;	// 0x30bd6ce1
- (void)doubleTapAt:(CGPoint)at;	// 0x30bd79c5
- (CGRect)fitRect:(CGRect)rect;	// 0x30bd6dad
- (CGRect)fitWidth:(CGRect)width atVertical:(float)vertical;	// 0x30bd6e5d
// declared property getter: - (float)margin;	// 0x30bd6c65
// declared property getter: - (id)page;	// 0x30bd6c85
- (int)pageIndex;	// 0x30bd6d01
- (CGRect)rectangleOfInterestAt:(CGPoint)at;	// 0x30bd7b0d
// declared property getter: - (id)selectionWidget;	// 0x30bd6c35
// declared property setter: - (void)setAllowSelection:(BOOL)selection;	// 0x30bd6c15
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30bd6c55
- (void)setFrame:(CGRect)frame;	// 0x30bd78a1
// declared property setter: - (void)setMargin:(float)margin;	// 0x30bd6c75
- (void)setNeedsDisplay;	// 0x30bd6d25
// declared property setter: - (void)setPage:(id)page;	// 0x30bd7295
// declared property setter: - (void)setSelectionWidget:(id)widget;	// 0x30bd6c95
- (void)setTransforms;	// 0x30bd7465
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30bd73d5
@end

