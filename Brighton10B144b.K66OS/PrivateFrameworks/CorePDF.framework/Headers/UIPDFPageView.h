/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <UIView.h> // Unknown library

@class UIPDFDocument, UIPDFPage, UIPDFSearchHighlightsController, UIImage, UIPDFSelectionController, CALayer, UIPDFViewTouchHandler, UIPDFPageContentDelegate, NSMutableArray, UIActivityIndicatorView, UIPDFAnnotationController, UIColor;
@protocol NSObject, UIPDFPageViewDelegate;

@interface UIPDFPageView : UIView {
	UIPDFDocument *_document;	// 84 = 0x54
	unsigned _pageIndex;	// 88 = 0x58
	UIPDFViewTouchHandler *_touchHandler;	// 92 = 0x5c
	CGAffineTransform _pageToViewTransform;	// 96 = 0x60
	CGAffineTransform _viewToPageTransform;	// 120 = 0x78
	CGRect _cropBox;	// 144 = 0x90
	float _margin;	// 160 = 0xa0
	BOOL _allowSelection;	// 164 = 0xa4
	UIPDFSelectionController *_selectionController;	// 168 = 0xa8
	id<NSObject, UIPDFPageViewDelegate> _delegate;	// 172 = 0xac
	CGRect zoomRect;	// 176 = 0xb0
	BOOL _useBackingLayer;	// 192 = 0xc0
	CALayer *_backingLayer;	// 196 = 0xc4
	UIImage *_backgroundImage;	// 200 = 0xc8
	BOOL _backgroundIsScheduled;	// 204 = 0xcc
	unsigned _backgroundScheduleCount;	// 208 = 0xd0
	BOOL _backgroundIsFullResolution;	// 212 = 0xd4
	BOOL _boundsChanged;	// 213 = 0xd5
	BOOL _useTiledContent;	// 214 = 0xd6
	CALayer *_contentLayer;	// 216 = 0xd8
	CALayer *_effectsLayer;	// 220 = 0xdc
	UIPDFPageContentDelegate *_contentDelegate;	// 224 = 0xe0
	UIPDFAnnotationController *_annotationController;	// 228 = 0xe4
	BOOL _scalePageOnDraw;	// 232 = 0xe8
	CGColorRef _highLightColor;	// 236 = 0xec
	BOOL _animateSetFrame;	// 240 = 0xf0
	UIActivityIndicatorView *_activityIndicator;	// 244 = 0xf4
	BOOL _showActivityIndicator;	// 248 = 0xf8
	UIColor *_backingLayerColor;	// 252 = 0xfc
	int _lock;	// 256 = 0x100
	NSMutableArray *_highlights;	// 260 = 0x104
	float _cachedScale;	// 264 = 0x108
	BOOL _useInstantTouchHighlighting;	// 268 = 0x10c
	UIPDFSearchHighlightsController *_searchHighlightController;	// 272 = 0x110
	NSMutableArray *_searchHiglightLayers;	// 276 = 0x114
@private
	BOOL showAnnotations;	// 280 = 0x118
@protected
	BOOL useAnnotationAppearanceStreams;	// 281 = 0x119
	BOOL showLinkAnnotationUnderline;	// 282 = 0x11a
@private
	BOOL showTextAnnotationBookmark;	// 283 = 0x11b
@protected
	BOOL showPDFAnnotations;	// 284 = 0x11c
	BOOL _allowTwoFingerSelection;	// 285 = 0x11d
}
@property(assign, nonatomic) BOOL allowMenu;	// G=0x33886ddd; S=0x33886dbd; @dynamic
@property(assign, nonatomic) BOOL allowSelection;	// G=0x33886e51; S=0x33886e61; @synthesize=_allowSelection
@property(assign, nonatomic) BOOL allowTwoFingerSelection;	// G=0x33886fad; S=0x33886fbd; @synthesize=_allowTwoFingerSelection
@property(assign, nonatomic) BOOL animateSetFrame;	// G=0x33886e9d; S=0x33886ead; @synthesize=_animateSetFrame
@property(readonly, assign, nonatomic) UIPDFAnnotationController *annotationController;	// G=0x33886f7d; @synthesize=_annotationController
@property(retain) UIImage *backgroundImage;	// G=0x3388461d; S=0x33884671; @dynamic
@property(retain, nonatomic) UIColor *backingLayerColor;	// G=0x33886ebd; S=0x33883de1; @synthesize=_backingLayerColor
@property(readonly, assign, nonatomic) CALayer *contentLayer;	// G=0x33886e41; @synthesize=_contentLayer
@property(assign, nonatomic) id<NSObject, UIPDFPageViewDelegate> delegate;	// G=0x33886e21; S=0x33886e31; @synthesize=_delegate
@property(readonly, assign) UIPDFDocument *document;	// G=0x3388449d; @dynamic
@property(readonly, assign, nonatomic) CALayer *effectsLayer;	// G=0x33886ab5; @synthesize=_effectsLayer
@property(readonly, assign) CGColorRef highLightColor;	// G=0x338869ad; 
@property(assign, nonatomic) float margin;	// G=0x33886e01; S=0x33886e11; @synthesize=_margin
@property(assign) UIPDFPage *page;	// G=0x338843b9; S=0x3388576d; @dynamic
@property(readonly, assign) unsigned pageIndex;	// G=0x33884469; @dynamic
@property(assign) UIPDFSelectionController *selectionController;	// G=0x33886e71; S=0x33886e85; @synthesize=_selectionController
@property(assign, nonatomic) BOOL showActivityIndicator;	// G=0x33886f0d; S=0x33884e11; @synthesize=_showActivityIndicator
@property(assign, nonatomic) BOOL showAnnotations;	// G=0x33886ecd; S=0x33886edd; @synthesize
@property(assign, nonatomic) BOOL showLinkAnnotationUnderline;	// G=0x33886f3d; S=0x33886f4d; @synthesize
@property(assign, nonatomic) BOOL showPDFAnnotations;	// G=0x33886f8d; S=0x33886f9d; @synthesize
@property(assign, nonatomic) BOOL showTextAnnotationBookmark;	// G=0x33886f5d; S=0x33886f6d; @synthesize
@property(assign, nonatomic) BOOL useAnnotationAppearanceStreams;	// G=0x33886f1d; S=0x33886f2d; @synthesize
@property(assign, nonatomic) BOOL useBackingLayer;	// G=0x33886eed; S=0x33886efd; @synthesize=_useBackingLayer
@property(assign, nonatomic) BOOL useInstantTouchHighlighting;	// G=0x33886c9d; S=0x33886cad; @dynamic
- (id)init;	// 0x33883b41
- (id)initWithPage:(id)page;	// 0x3388409d
- (id)initWithPage:(id)page tiledContent:(BOOL)content;	// 0x338840f1
- (CGPDFDictionaryRef)_annotForPoint:(CGPoint)point rect:(CGRect *)rect;	// 0x33886fcd
- (void)addAnnotation:(id)annotation;	// 0x33885b09
- (void)addLayers:(BOOL)layers;	// 0x33883eb9
- (BOOL)addLinkAnnotations;	// 0x338859b5
- (void)addPage:(id)page;	// 0x33883fb9
- (void)addWidgetToSelection;	// 0x33886c51
// declared property getter: - (BOOL)allowMenu;	// 0x33886ddd
// declared property getter: - (BOOL)allowSelection;	// 0x33886e51
// declared property getter: - (BOOL)allowTwoFingerSelection;	// 0x33886fad
// declared property getter: - (BOOL)animateSetFrame;	// 0x33886e9d
// declared property getter: - (id)annotationController;	// 0x33886f7d
- (BOOL)annotationLongPressRecognized:(id)recognized;	// 0x33885a2d
- (BOOL)annotationSingleTapRecognized:(id)recognized;	// 0x33885a51
- (void)annotationWasRemoved:(id)removed;	// 0x33885ba9
// declared property getter: - (id)backgroundImage;	// 0x3388461d
// declared property getter: - (id)backingLayerColor;	// 0x33886ebd
- (void)clearSearchHighlights;	// 0x33886bd9
- (void)clearSelection;	// 0x3388698d
// declared property getter: - (id)contentLayer;	// 0x33886e41
- (CGPoint)convertPointFromPDFPageSpace:(CGPoint)pdfpageSpace;	// 0x33886245
- (CGPoint)convertPointToPDFPageSpace:(CGPoint)pdfpageSpace;	// 0x338861ad
- (CGRect)convertRectFromPDFPageSpace:(CGRect)pdfpageSpace;	// 0x33886321
- (CGRect)convertRectToPDFPageSpace:(CGRect)pdfpageSpace;	// 0x338862dd
- (id)copyPage;	// 0x33884411
- (void)dealloc;	// 0x33884149
// declared property getter: - (id)delegate;	// 0x33886e21
- (void)didReceiveMemoryWarning:(id)warning;	// 0x33884371
- (void)didScroll:(id)scroll;	// 0x33884a59
- (void)displayContent;	// 0x3388696d
// declared property getter: - (id)document;	// 0x3388449d
- (void)doubleTapAt:(CGPoint)at;	// 0x33885c81
- (void)drawAnnotations:(CGContextRef)annotations;	// 0x33885abd
// declared property getter: - (id)effectsLayer;	// 0x33886ab5
- (CGRect)fitRect:(CGRect)rect;	// 0x33886451
- (CGRect)fitWidth:(CGRect)width atVertical:(float)vertical;	// 0x33886365
- (BOOL)hasSearchHighlights;	// 0x33886bf9
- (void)hideAnnotation:(id)annotation;	// 0x33885b49
- (void)hideSelection;	// 0x33886a25
// declared property getter: - (CGColorRef)highLightColor;	// 0x338869ad
- (void)highlightSearchSelection:(id)selection animated:(BOOL)animated;	// 0x33886bb9
- (void)ignoreTouches:(BOOL)touches;	// 0x33885c4d
- (void)layoutSubviews;	// 0x33884b65
- (void)layoutTextEffects;	// 0x3388574d
- (void)loadPDFAnnotDictionary;	// 0x33885a75
// declared property getter: - (float)margin;	// 0x33886e01
// declared property getter: - (id)page;	// 0x338843b9
// declared property getter: - (unsigned)pageIndex;	// 0x33884469
- (id)receiveBackgroundImage:(id)image info:(id)info;	// 0x338850e9
- (CGRect)rectangleOfInterestAt:(CGPoint)at kind:(int *)kind;	// 0x33886525
- (void)removeAnnotation:(id)annotation;	// 0x33885b89
- (void)removeBackingLayer;	// 0x33884b45
- (void)scheduleBackgroundImage;	// 0x33884725
- (id)searchHighlightSelectionAt:(CGPoint)at;	// 0x33886c31
// declared property getter: - (id)selectionController;	// 0x33886e71
// declared property setter: - (void)setAllowMenu:(BOOL)menu;	// 0x33886dbd
// declared property setter: - (void)setAllowSelection:(BOOL)selection;	// 0x33886e61
// declared property setter: - (void)setAllowTwoFingerSelection:(BOOL)selection;	// 0x33886fbd
// declared property setter: - (void)setAnimateSetFrame:(BOOL)frame;	// 0x33886ead
- (void)setAnnotationStyle:(unsigned)style;	// 0x33885c0d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x33884671
// declared property setter: - (void)setBackingLayerColor:(id)color;	// 0x33883de1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33886e31
- (void)setFrame:(CGRect)frame;	// 0x338852f9
- (void)setLoadPDFAnnotDictionary:(BOOL)dictionary;	// 0x33885a95
- (void)setMakeUnderlineAnnotation:(BOOL)annotation;	// 0x33885c2d
// declared property setter: - (void)setMargin:(float)margin;	// 0x33886e11
- (void)setNeedsDisplay;	// 0x338844f1
// declared property setter: - (void)setPage:(id)page;	// 0x3388576d
// declared property setter: - (void)setSelectionController:(id)controller;	// 0x33886e85
// declared property setter: - (void)setShowActivityIndicator:(BOOL)indicator;	// 0x33884e11
// declared property setter: - (void)setShowAnnotations:(BOOL)annotations;	// 0x33886edd
// declared property setter: - (void)setShowLinkAnnotationUnderline:(BOOL)underline;	// 0x33886f4d
// declared property setter: - (void)setShowPDFAnnotations:(BOOL)annotations;	// 0x33886f9d
// declared property setter: - (void)setShowTextAnnotationBookmark:(BOOL)bookmark;	// 0x33886f6d
- (void)setTransforms;	// 0x33885f21
// declared property setter: - (void)setUseAnnotationAppearanceStreams:(BOOL)streams;	// 0x33886f2d
// declared property setter: - (void)setUseBackingLayer:(BOOL)layer;	// 0x33886efd
// declared property setter: - (void)setUseInstantTouchHighlighting:(BOOL)highlighting;	// 0x33886cad
- (BOOL)shouldHandleGestureAt:(CGPoint)at response:(BOOL *)response;	// 0x338859f9
// declared property getter: - (BOOL)showActivityIndicator;	// 0x33886f0d
- (void)showAnnotation:(id)annotation;	// 0x33885b69
// declared property getter: - (BOOL)showAnnotations;	// 0x33886ecd
- (void)showContent;	// 0x33884ed9
// declared property getter: - (BOOL)showLinkAnnotationUnderline;	// 0x33886f3d
// declared property getter: - (BOOL)showPDFAnnotations;	// 0x33886f8d
- (void)showSelection;	// 0x33886a6d
// declared property getter: - (BOOL)showTextAnnotationBookmark;	// 0x33886f5d
- (void)singleTapAt:(CGPoint)at;	// 0x33885de9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33885669
- (void)stopActivityIndicator;	// 0x33884e65
- (void)suspendInstantTouchHighlighting;	// 0x33886ce5
- (void)twoFingerDoubleTapAt:(CGPoint)at;	// 0x33885d71
// declared property getter: - (BOOL)useAnnotationAppearanceStreams;	// 0x33886f1d
// declared property getter: - (BOOL)useBackingLayer;	// 0x33886eed
// declared property getter: - (BOOL)useInstantTouchHighlighting;	// 0x33886c9d
- (BOOL)willDoSomethingWithTap:(CGPoint)tap;	// 0x33885e6d
- (void)willMoveToSuperview:(id)superview;	// 0x338845fd
@end

