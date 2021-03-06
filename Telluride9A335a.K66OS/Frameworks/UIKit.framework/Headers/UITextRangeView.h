/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITouch, UITextSelectionView, UISelectionGrabber, NSMutableArray, NSArray;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
@private
	UITextSelectionView *m_selectionView;	// 48 = 0x30
	UIView<UITextSelectingContainer> *m_container;	// 52 = 0x34
	int m_mode;	// 56 = 0x38
	NSArray *m_rects;	// 60 = 0x3c
	NSMutableArray *m_rectViews;	// 64 = 0x40
	UITouch *m_activeTouch;	// 68 = 0x44
	CGRect m_startEdge;	// 72 = 0x48
	CGRect m_endEdge;	// 88 = 0x58
	CGPoint m_basePoint;	// 104 = 0x68
	CGPoint m_extentPoint;	// 112 = 0x70
	CGPoint m_initialBasePoint;	// 120 = 0x78
	CGPoint m_initialExtentPoint;	// 128 = 0x80
	float m_initialDistance;	// 136 = 0x88
	CGPoint m_touchOffset;	// 140 = 0x8c
	double m_firstMovedTime;	// 148 = 0x94
	UISelectionGrabber *m_startGrabber;	// 156 = 0x9c
	UISelectionGrabber *m_endGrabber;	// 160 = 0xa0
	BOOL m_animateUpdate;	// 164 = 0xa4
	BOOL m_baseIsStart;	// 165 = 0xa5
	BOOL m_commandsWereShowing;	// 166 = 0xa6
	BOOL m_inGesture;	// 167 = 0xa7
	BOOL m_magnifying;	// 168 = 0xa8
	BOOL m_scrolling;	// 169 = 0xa9
	BOOL m_scaling;	// 170 = 0xaa
	BOOL m_rotating;	// 171 = 0xab
	BOOL m_inputViewIsChanging;	// 172 = 0xac
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x33a8790d; S=0x33c46405; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x33c46605; S=0x33c46615; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x33c45fe9; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x33c46429; S=0x33c46439; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x33c46481; S=0x33c4649d; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x33c46625; S=0x33c46635; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x33a7f7a5; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x33a80661; S=0x33c46465; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x33a87991; S=0x33c465e1; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x33c464b1; S=0x33c464cd; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x33c46591; S=0x33c465a9; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x33c46665; S=0x33a879b1; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x33c464e1; S=0x33c464fd; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x33c46541; S=0x33c46551; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x33c46511; S=0x33c4652d; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x33c466c5; S=0x33c466d5; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x33c46675; S=0x33a879a1; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x33c46645; S=0x33c46655; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x33a7fbb5; S=0x33a7f2b5; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x33c451fd; S=0x33c4520d; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x33c466a5; S=0x33c466b5; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x33c46685; S=0x33c46695; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x33c451ed; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x33a8063d; S=0x33c46449; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x33a8793d; S=0x33c465bd; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x33c46561; S=0x33c4657d; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x33a7f1ad
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x33c442f1
// declared property getter: - (id)activeTouch;	// 0x33a8790d
// declared property getter: - (BOOL)animateUpdate;	// 0x33c46605
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x33c45f59
// declared property getter: - (BOOL)autoscrolled;	// 0x33c45fe9
// declared property getter: - (BOOL)baseIsStart;	// 0x33c46429
// declared property getter: - (CGPoint)basePoint;	// 0x33c46481
- (void)beginMagnifying;	// 0x33c46021
- (void)cancelDelayedActions;	// 0x33a8791d
// declared property getter: - (BOOL)commandsWereShowing;	// 0x33c46625
// declared property getter: - (id)container;	// 0x33a7f7a5
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x33c46361
- (void)dealloc;	// 0x33a978f9
- (void)didRotate;	// 0x33c45d51
- (void)didScroll;	// 0x33c45c91
- (void)doneMagnifying;	// 0x33c45bf1
// declared property getter: - (CGRect)endEdge;	// 0x33a80661
// declared property getter: - (id)endGrabber;	// 0x33a87991
// declared property getter: - (CGPoint)extentPoint;	// 0x33c464b1
// declared property getter: - (double)firstMovedTime;	// 0x33c46591
// declared property getter: - (BOOL)inGesture;	// 0x33c46665
// declared property getter: - (CGPoint)initialBasePoint;	// 0x33c464e1
// declared property getter: - (float)initialDistance;	// 0x33c46541
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x33c46511
- (void)inputViewDidChange;	// 0x33c45dc9
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x33c466c5
- (void)inputViewWillChange;	// 0x33c45d99
// declared property getter: - (BOOL)isScrolling;	// 0x33c46675
- (CGPoint)magnifierPoint;	// 0x33c46241
// declared property getter: - (BOOL)magnifying;	// 0x33c46645
// declared property getter: - (int)mode;	// 0x33a7fbb5
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x33c45e89
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33c4432d
- (void)prepareForMagnification;	// 0x33c45b81
// declared property getter: - (id)rects;	// 0x33c451fd
- (void)removeFromSuperview;	// 0x33a877f1
// declared property getter: - (BOOL)rotating;	// 0x33c466a5
- (void)scaleDidChange;	// 0x33c45cf1
- (void)scaleWillChange;	// 0x33c45cc1
// declared property getter: - (BOOL)scaling;	// 0x33c46685
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x33c45b39
// declared property getter: - (id)selectionView;	// 0x33c451ed
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x33c46405
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x33c46615
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x33c46439
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x33c4649d
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x33c46635
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x33c463c5
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x33c46465
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x33c465e1
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x33c464cd
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x33c465a9
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x33a879b1
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x33c464fd
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x33c46551
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x33c4652d
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x33c466d5
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x33a879a1
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x33c46655
// declared property setter: - (void)setMode:(int)mode;	// 0x33a7f2b5
// declared property setter: - (void)setRects:(id)rects;	// 0x33c4520d
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x33c466b5
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x33c46695
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x33c46449
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x33c465bd
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x33c4657d
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x33c45ee1
- (void)startAnimating;	// 0x33c45df9
// declared property getter: - (CGRect)startEdge;	// 0x33a8063d
// declared property getter: - (id)startGrabber;	// 0x33a8793d
- (void)stopAnimating;	// 0x33c45e41
// declared property getter: - (CGPoint)touchOffset;	// 0x33c46561
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33c443e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33c450fd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33c44d55
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33c44971
- (void)updateBaseAndExtentPointsFromEdges;	// 0x33c46109
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x33c45631
- (void)updateDots;	// 0x33a97269
- (void)updateGrabbers;	// 0x33a7f7b5
- (void)updateRectViews;	// 0x33a7f321
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x33c45545
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x33c453dd
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x33c45729
- (void)willRotate;	// 0x33c45d21
- (void)willScroll;	// 0x33c45c61
@end

