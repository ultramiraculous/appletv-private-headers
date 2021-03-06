/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRScrollingTextPlane, BRFadeMaskLayer;
@protocol BRMarqueeScrollingDelegate;

__attribute__((visibility("hidden")))
@interface BRMarqueeTextControl : BRControl {
	BRScrollingTextPlane *_plane;	// 84 = 0x54
	BRControl *_leftFade;	// 88 = 0x58
	BRControl *_rightFade;	// 92 = 0x5c
	BRFadeMaskLayer *_mask;	// 96 = 0x60
	NSTimer *_scrollTimer;	// 100 = 0x64
	NSTimer *_fadeMaskTimer;	// 104 = 0x68
	float _maskRemovalTime;	// 108 = 0x6c
	float _scrollPosition;	// 112 = 0x70
	BOOL _autoScrolls;	// 116 = 0x74
	BOOL _crossfadeEnabled;	// 117 = 0x75
	BOOL _crossfading;	// 118 = 0x76
	BOOL _useAlphaFadeMask;	// 119 = 0x77
	id<BRMarqueeScrollingDelegate> _scrollingDelegate;	// 120 = 0x78
}
@property(retain) id attributedString;	// G=0x2f4785; S=0x2f45a9; converted property
@property(assign) BOOL autoScrolls;	// G=0x2f48cd; S=0x2f4849; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x2f4b15; S=0x2f4af9; converted property
@property(assign) float scrollPosition;	// G=0x2f4bf1; S=0x2f4bb9; converted property
@property(assign) id scrollingDelegate;	// G=0x2f4c01; S=0x2f4c11; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x2f4c31; S=0x2f4c21; converted property
- (id)init;	// 0x2f43e9
- (BOOL)_autoscrollInProgress;	// 0x2f5ff9
- (void)_beginScroll:(id)scroll;	// 0x2f57b9
- (void)_clearFadeMaskTimer;	// 0x2f5e8d
- (void)_clearScrollTimer;	// 0x2f5e61
- (void)_realignCenteredTextToLeftJustified;	// 0x2f567d
- (void)_removeFadeMask:(id)mask;	// 0x2f5cd5
- (void)_resetScrollTimer;	// 0x2f5d69
- (void)_scrollDidStart:(id)_scroll;	// 0x2f5eb9
- (void)_scrollDidStop:(id)_scroll;	// 0x2f5fa5
- (void)_scrollDidStop:(id)_scroll finished:(BOOL)finished;	// 0x2f5f49
- (void)_updateEdgeMaskingIfScrollingNeeded:(BOOL)needed;	// 0x2f5431
- (id)accessibilityLabel;	// 0x2f5409
// converted property getter: - (id)attributedString;	// 0x2f4785
// converted property getter: - (BOOL)autoScrolls;	// 0x2f48cd
- (void)controlWasActivated;	// 0x2f53c9
- (void)controlWasDeactivated;	// 0x2f534d
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x2f4b15
- (void)dealloc;	// 0x2f44a9
- (void)layoutSubcontrols;	// 0x2f4da5
- (float)maxScrollPosition;	// 0x2f4751
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x2f4b25
- (CGSize)pixelBounds;	// 0x2f47a5
- (id)preferredActionForKey:(id)key;	// 0x2f4ca1
- (CGSize)renderedSize;	// 0x2f47d5
// converted property getter: - (float)scrollPosition;	// 0x2f4bf1
// converted property getter: - (id)scrollingDelegate;	// 0x2f4c01
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2f45a9
// converted property setter: - (void)setAutoScrolls:(BOOL)scrolls;	// 0x2f4849
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x2f4af9
// converted property setter: - (void)setScrollPosition:(float)position;	// 0x2f4bb9
// converted property setter: - (void)setScrollingDelegate:(id)delegate;	// 0x2f4c11
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x2f4535
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x2f4c21
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f4c41
- (void)updateBoundDimmed;	// 0x2f48dd
- (void)updateBoundHidden;	// 0x2f49e1
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x2f4c31
@end

