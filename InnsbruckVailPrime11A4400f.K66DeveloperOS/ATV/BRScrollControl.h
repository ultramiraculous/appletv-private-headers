/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRFadeMaskLayer, ScrollAnimationDelegate;

__attribute__((visibility("hidden")))
@interface BRScrollControl : BRControl {
	BRControl *_content;	// 84 = 0x54
	BRControl *_topFade;	// 88 = 0x58
	BRControl *_bottomFade;	// 92 = 0x5c
	BRControl *_leftFade;	// 96 = 0x60
	BRControl *_rightFade;	// 100 = 0x64
	BRFadeMaskLayer *_mask;	// 104 = 0x68
	ScrollAnimationDelegate *_animationDelegate;	// 108 = 0x6c
	int _scrollDirection;	// 112 = 0x70
	int _mode;	// 116 = 0x74
	float _edgeFadePercent;	// 120 = 0x78
	float _extraBottomSpace;	// 124 = 0x7c
	float _extraTopSpace;	// 128 = 0x80
	float _extraLeftSpace;	// 132 = 0x84
	float _extraRightSpace;	// 136 = 0x88
	BOOL _scrollPointSet;	// 140 = 0x8c
	BOOL _constrainAllContentToEdges;	// 141 = 0x8d
	BOOL _useRealMasks;	// 142 = 0x8e
	BOOL _followsFocus;	// 143 = 0x8f
	BOOL _contentLayoutDone;	// 144 = 0x90
	BOOL _repeatActive;	// 145 = 0x91
	BOOL _autoChangeAnimationModes;	// 146 = 0x92
	id _scrollPointAdjuster;	// 148 = 0x94
}
@property(assign) int animationMode;	// G=0x357f41; S=0x357d59; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x358341; S=0x358351; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x357d45; S=0x357d29; converted property
@property(retain) BRControl *content;	// G=0x3578d9; S=0x3577b5; converted property
@property(assign) float edgeFadePercentage;	// G=0x357d19; S=0x357cc1; converted property
@property(assign) BOOL followsFocus;	// G=0x357b21; S=0x357ae5; converted property
@property(assign) int scrollDirection;	// G=0x357f6d; S=0x357f51; converted property
@property(copy, nonatomic) id scrollPointAdjuster;	// G=0x358361; S=0x358375; @synthesize=_scrollPointAdjuster
@property(assign) BOOL useRealMasks;	// G=0x357cb1; S=0x357c85; converted property
- (id)init;	// 0x357581
- (BOOL)_animatingPositionChange;	// 0x3585d5
- (void)_attemptToRemoveFadeMask;	// 0x359ee1
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x358a15
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x358ab5
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x358b55
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x358c0d
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x359e29
- (void)_focusChanged:(id)changed;	// 0x359315
- (void)_minimizeVisiblePlaneArea;	// 0x358cc5
- (id)_parentScrollControl;	// 0x358d65
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x358fd1
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x359029
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x358635
- (void)_transitionFade:(id)fade toPresent:(BOOL)present;	// 0x359c49
- (void)_updateEdgeFading;	// 0x3593ed
- (void)_updateFocusNotifications;	// 0x35926d
- (void)_updateHorizontalEdgeFading;	// 0x359859
- (void)_updateScrollPositionForFocus;	// 0x3590ad
- (void)_updateVerticalEdgeFading;	// 0x35943d
- (CGRect)_visibleRectOfControl:(id)control;	// 0x358d69
// converted property getter: - (int)animationMode;	// 0x357f41
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x358341
- (BOOL)autoScrolling;	// 0x357a91
- (BOOL)brEventAction:(id)action;	// 0x3578e9
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x357d45
// converted property getter: - (id)content;	// 0x3578d9
- (void)controlWasActivated;	// 0x357f7d
- (void)controlWasDeactivated;	// 0x357fbd
- (void)dealloc;	// 0x357669
// converted property getter: - (float)edgeFadePercentage;	// 0x357d19
// converted property getter: - (BOOL)followsFocus;	// 0x357b21
- (void)layoutSubcontrols;	// 0x357ffd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3582c1
// converted property getter: - (int)scrollDirection;	// 0x357f6d
// declared property getter: - (id)scrollPointAdjuster;	// 0x358361
- (void)scrollToControl:(id)control;	// 0x357ba1
- (void)scrollToPoint:(CGPoint)point;	// 0x357b31
- (void)scrollToRect:(CGRect)rect;	// 0x357b65
- (BOOL)scrolling;	// 0x357a6d
- (void)scrollingCompleted;	// 0x358305
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x357d59
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x358351
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x357d29
// converted property setter: - (void)setContent:(id)content;	// 0x3577b5
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x357cc1
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x357ae5
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x357f51
// declared property setter: - (void)setScrollPointAdjuster:(id)adjuster;	// 0x358375
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x357c85
// converted property getter: - (BOOL)useRealMasks;	// 0x357cb1
@end

