/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ScrollAnimationDelegate, BRFadeMaskLayer;

__attribute__((visibility("hidden")))
@interface BRScrollControl : BRControl {
	BRControl *_content;	// 80 = 0x50
	BRControl *_topFade;	// 84 = 0x54
	BRControl *_bottomFade;	// 88 = 0x58
	BRControl *_leftFade;	// 92 = 0x5c
	BRControl *_rightFade;	// 96 = 0x60
	BRFadeMaskLayer *_mask;	// 100 = 0x64
	ScrollAnimationDelegate *_animationDelegate;	// 104 = 0x68
	int _scrollDirection;	// 108 = 0x6c
	int _mode;	// 112 = 0x70
	float _edgeFadePercent;	// 116 = 0x74
	float _extraBottomSpace;	// 120 = 0x78
	float _extraTopSpace;	// 124 = 0x7c
	float _extraLeftSpace;	// 128 = 0x80
	float _extraRightSpace;	// 132 = 0x84
	BOOL _scrollPointSet;	// 136 = 0x88
	BOOL _constrainAllContentToEdges;	// 137 = 0x89
	BOOL _useRealMasks;	// 138 = 0x8a
	BOOL _followsFocus;	// 139 = 0x8b
	BOOL _contentLayoutDone;	// 140 = 0x8c
	BOOL _repeatActive;	// 141 = 0x8d
	BOOL _autoChangeAnimationModes;	// 142 = 0x8e
}
@property(assign) int animationMode;	// G=0x2cc4c9; S=0x2cc2e1; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x2cc8c1; S=0x2cc8d1; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x2cc2cd; S=0x2cc2b1; converted property
@property(retain) BRControl *content;	// G=0x2cbe61; S=0x2cbd39; converted property
@property(assign) float edgeFadePercentage;	// G=0x2cc2a1; S=0x2cc249; converted property
@property(assign) BOOL followsFocus;	// G=0x2cc0a1; S=0x2cc065; converted property
@property(assign) int scrollDirection;	// G=0x2cc4f5; S=0x2cc4d9; converted property
@property(assign) BOOL useRealMasks;	// G=0x2cc239; S=0x2cc20d; converted property
- (id)init;	// 0x2cbb15
- (BOOL)_animatingPositionChange;	// 0x2ccb41
- (void)_attemptToRemoveFadeMask;	// 0x2ce419
- (id)_bottomFadeFilters;	// 0x2ce5fd
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x2ccf7d
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x2cd01d
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x2cd0bd
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x2cd17d
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x2ce361
- (void)_focusChanged:(id)changed;	// 0x2cd881
- (id)_leftFadeFilters;	// 0x2ce711
- (void)_minimizeVisiblePlaneArea;	// 0x2cd23d
- (id)_parentScrollControl;	// 0x2cd2dd
- (id)_rightFadeFilters;	// 0x2ce825
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x2cd545
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x2cd591
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x2ccba1
- (id)_topFadeFilters;	// 0x2ce4e9
- (void)_updateEdgeFading;	// 0x2cd955
- (void)_updateFocusNotifications;	// 0x2cd7d9
- (void)_updateHorizontalEdgeFading;	// 0x2cde95
- (void)_updateScrollPositionForFocus;	// 0x2cd615
- (void)_updateVerticalEdgeFading;	// 0x2cd9a5
- (CGRect)_visibleRectOfControl:(id)control;	// 0x2cd2e1
// converted property getter: - (int)animationMode;	// 0x2cc4c9
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x2cc8c1
- (BOOL)autoScrolling;	// 0x2cc011
- (BOOL)brEventAction:(id)action;	// 0x2cbe71
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x2cc2cd
// converted property getter: - (id)content;	// 0x2cbe61
- (void)controlWasActivated;	// 0x2cc505
- (void)controlWasDeactivated;	// 0x2cc545
- (void)dealloc;	// 0x2cbbfd
// converted property getter: - (float)edgeFadePercentage;	// 0x2cc2a1
// converted property getter: - (BOOL)followsFocus;	// 0x2cc0a1
- (void)layoutSubcontrols;	// 0x2cc585
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2cc845
// converted property getter: - (int)scrollDirection;	// 0x2cc4f5
- (void)scrollToControl:(id)control;	// 0x2cc121
- (void)scrollToPoint:(CGPoint)point;	// 0x2cc0b1
- (void)scrollToRect:(CGRect)rect;	// 0x2cc0e5
- (BOOL)scrolling;	// 0x2cbfed
- (void)scrollingCompleted;	// 0x2cc889
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x2cc2e1
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x2cc8d1
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x2cc2b1
// converted property setter: - (void)setContent:(id)content;	// 0x2cbd39
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x2cc249
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x2cc065
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x2cc4d9
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x2cc20d
// converted property getter: - (BOOL)useRealMasks;	// 0x2cc239
@end
