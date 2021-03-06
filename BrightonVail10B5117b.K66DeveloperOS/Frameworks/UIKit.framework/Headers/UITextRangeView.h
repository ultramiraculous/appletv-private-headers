/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UITouch, NSMutableArray, UITextSelectionView, UISelectionGrabber;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
	UITextSelectionView *m_selectionView;	// 84 = 0x54
	UIResponder<UITextInput> *m_container;	// 88 = 0x58
	int m_mode;	// 92 = 0x5c
	NSArray *m_rects;	// 96 = 0x60
	NSMutableArray *m_rectViews;	// 100 = 0x64
	UITouch *m_activeTouch;	// 104 = 0x68
	CGRect m_startEdge;	// 108 = 0x6c
	CGRect m_endEdge;	// 124 = 0x7c
	CGPoint m_basePoint;	// 140 = 0x8c
	CGPoint m_extentPoint;	// 148 = 0x94
	CGPoint m_initialBasePoint;	// 156 = 0x9c
	CGPoint m_initialExtentPoint;	// 164 = 0xa4
	float m_initialDistance;	// 172 = 0xac
	CGPoint m_touchOffset;	// 176 = 0xb0
	double m_firstMovedTime;	// 184 = 0xb8
	UISelectionGrabber *m_startGrabber;	// 192 = 0xc0
	UISelectionGrabber *m_endGrabber;	// 196 = 0xc4
	BOOL m_animateUpdate;	// 200 = 0xc8
	BOOL m_baseIsStart;	// 201 = 0xc9
	BOOL m_commandsWereShowing;	// 202 = 0xca
	BOOL m_inGesture;	// 203 = 0xcb
	BOOL m_magnifying;	// 204 = 0xcc
	BOOL m_scrolling;	// 205 = 0xcd
	BOOL m_scaling;	// 206 = 0xce
	BOOL m_rotating;	// 207 = 0xcf
	BOOL m_inputViewIsChanging;	// 208 = 0xd0
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x32dafd85; S=0x32f6795d; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x32f67aa5; S=0x32f67ab5; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x32f67531; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x32e4d725; S=0x32f6796d; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x32f6797d; S=0x32e4d75d; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x32f67ac5; S=0x32f67ad5; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *container;	// G=0x32da9195; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x32e4d735; S=0x32e4d5c9; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x32dafdc5; S=0x32f67a95; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x32f67999; S=0x32e4d799; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x32f67a59; S=0x32f67a71; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x32f67b05; S=0x32dafde5; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x32f679b5; S=0x32f679cd; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x32f67a0d; S=0x32f67a1d; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x32f679e1; S=0x32f679f9; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x32f67b65; S=0x32f67b75; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x32f67b15; S=0x32dafdd5; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x32f67ae5; S=0x32f67af5; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x32da988d; S=0x32da8d09; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x32da989d; S=0x32e4cd15; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x32f67b45; S=0x32f67b55; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x32f67b25; S=0x32f67b35; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x32e4e81d; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x32e4d775; S=0x32e4d371; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x32dafdb5; S=0x32f67a85; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x32f67a2d; S=0x32f67a45; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x32da8be9
- (BOOL)_endIsHorizontal;	// 0x32e4d81d
- (CGRect)_selectionClipRect;	// 0x32da91a9
- (BOOL)_startIsHorizontal;	// 0x32e4d7ad
// declared property getter: - (id)activeTouch;	// 0x32dafd85
// declared property getter: - (BOOL)animateUpdate;	// 0x32f67aa5
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x32f674ad
// declared property getter: - (BOOL)autoscrolled;	// 0x32f67531
// declared property getter: - (BOOL)baseIsStart;	// 0x32e4d725
// declared property getter: - (CGPoint)basePoint;	// 0x32f6797d
- (void)beginMagnifying;	// 0x32f67565
- (void)cancelDelayedActions;	// 0x32dafd95
// declared property getter: - (BOOL)commandsWereShowing;	// 0x32f67ac5
// declared property getter: - (id)container;	// 0x32da9195
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x32f67875
- (void)dealloc;	// 0x32dba7f5
- (void)didRotate;	// 0x32f67295
- (void)didScroll;	// 0x32f671d5
- (void)doneMagnifying;	// 0x32f67135
// declared property getter: - (CGRect)endEdge;	// 0x32e4d735
// declared property getter: - (id)endGrabber;	// 0x32dafdc5
// declared property getter: - (CGPoint)extentPoint;	// 0x32f67999
// declared property getter: - (double)firstMovedTime;	// 0x32f67a59
// declared property getter: - (BOOL)inGesture;	// 0x32f67b05
// declared property getter: - (CGPoint)initialBasePoint;	// 0x32f679b5
// declared property getter: - (float)initialDistance;	// 0x32f67a0d
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x32f679e1
- (void)inputViewDidChange;	// 0x32f6730d
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x32f67b65
- (void)inputViewWillChange;	// 0x32f672dd
// declared property getter: - (BOOL)isScrolling;	// 0x32f67b15
- (CGPoint)magnifierPoint;	// 0x32f67651
// declared property getter: - (BOOL)magnifying;	// 0x32f67ae5
// declared property getter: - (int)mode;	// 0x32da988d
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x32f673d5
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32f6593d
- (void)prepareForMagnification;	// 0x32f670c5
// declared property getter: - (id)rects;	// 0x32da989d
- (void)removeFromSuperview;	// 0x32dafc69
// declared property getter: - (BOOL)rotating;	// 0x32f67b45
- (void)scaleDidChange;	// 0x32f67235
- (void)scaleWillChange;	// 0x32f67205
// declared property getter: - (BOOL)scaling;	// 0x32f67b25
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x32f67079
// declared property getter: - (id)selectionView;	// 0x32e4e81d
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x32f6795d
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x32f67ab5
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x32f6796d
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x32e4d75d
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x32f67ad5
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x32f678f9
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x32e4d5c9
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x32f67a95
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x32e4d799
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x32f67a71
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x32dafde5
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x32f679cd
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x32f67a1d
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x32f679f9
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x32f67b75
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x32dafdd5
- (void)setMagnifierOrientation;	// 0x32f659f1
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x32f67af5
// declared property setter: - (void)setMode:(int)mode;	// 0x32da8d09
// declared property setter: - (void)setRects:(id)rects;	// 0x32e4cd15
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x32f67b55
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x32f67b35
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x32e4d371
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x32f67a85
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x32f67a45
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x32f67435
- (void)startAnimating;	// 0x32f6733d
// declared property getter: - (CGRect)startEdge;	// 0x32e4d775
// declared property getter: - (id)startGrabber;	// 0x32dafdb5
- (void)stopAnimating;	// 0x32f67389
// declared property getter: - (CGPoint)touchOffset;	// 0x32f67a2d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32f65a65
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32f66809
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32f66491
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32f65ff1
- (void)updateBaseAndExtentPointsFromEdges;	// 0x32e4d5e9
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x32f66b45
- (void)updateDots;	// 0x32db9c25
- (void)updateGrabbers;	// 0x32da921d
- (void)updateRectViews;	// 0x32da8d79
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x32f66a5d
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x32f66901
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x32f66c41
- (void)willRotate;	// 0x32f67265
- (void)willScroll;	// 0x32f671a5
@end

