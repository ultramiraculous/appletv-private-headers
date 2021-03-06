/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRScrollingTextPlane, NSTimer, BRFadeMaskLayer;
@protocol BRMarqueeScrollingDelegate;

@interface BRMarqueeTextControl : BRControl {
@private
	BRScrollingTextPlane *_plane;	// 48 = 0x30
	BRControl *_leftFade;	// 52 = 0x34
	BRControl *_rightFade;	// 56 = 0x38
	BRFadeMaskLayer *_mask;	// 60 = 0x3c
	NSTimer *_scrollTimer;	// 64 = 0x40
	NSTimer *_fadeMaskTimer;	// 68 = 0x44
	float _maskRemovalTime;	// 72 = 0x48
	float _scrollPosition;	// 76 = 0x4c
	BOOL _autoScrolls;	// 80 = 0x50
	BOOL _crossfadeEnabled;	// 81 = 0x51
	BOOL _crossfading;	// 82 = 0x52
	BOOL _useAlphaFadeMask;	// 83 = 0x53
	id<BRMarqueeScrollingDelegate> _scrollingDelegate;	// 84 = 0x54
}
@property(retain) id attributedString;	// G=0x35e0e481; S=0x35e0e299; converted property
@property(assign) BOOL autoScrolls;	// G=0x35e0e5c5; S=0x35e0e545; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x35e0e5f1; S=0x35e0e5d5; converted property
@property(assign) float scrollPosition;	// G=0x35e0e6dd; S=0x35e0e6a1; converted property
@property(assign) id scrollingDelegate;	// G=0x35e0e6ed; S=0x35e0e6fd; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x35e0e71d; S=0x35e0e70d; converted property
- (id)init;	// 0x35e0e0d9
- (BOOL)_autoscrollInProgress;	// 0x35e0fb6d
- (void)_beginScroll:(id)scroll;	// 0x35e0f31d
- (void)_clearFadeMaskTimer;	// 0x35e0fa01
- (void)_clearScrollTimer;	// 0x35e0f9d1
- (void)_realignCenteredTextToLeftJustified;	// 0x35e0f1e5
- (void)_removeFadeMask:(id)mask;	// 0x35e0f849
- (void)_resetScrollTimer;	// 0x35e0f8dd
- (void)_scrollDidStart:(id)_scroll;	// 0x35e0fa31
- (void)_scrollDidStop:(id)_scroll;	// 0x35e0fb19
- (void)_scrollDidStop:(id)_scroll finished:(BOOL)finished;	// 0x35e0fac1
- (void)_updateEdgeMaskingIfScrollingNeeded:(BOOL)needed;	// 0x35e0ef8d
- (id)accessibilityLabel;	// 0x35e0ef65
// converted property getter: - (id)attributedString;	// 0x35e0e481
// converted property getter: - (BOOL)autoScrolls;	// 0x35e0e5c5
- (void)controlWasActivated;	// 0x35e0ef25
- (void)controlWasDeactivated;	// 0x35e0eea9
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x35e0e5f1
- (void)dealloc;	// 0x35e0e199
- (void)layoutSubcontrols;	// 0x35e0e891
- (float)maxScrollPosition;	// 0x35e0e43d
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x35e0e601
- (CGSize)pixelBounds;	// 0x35e0e4a1
- (id)preferredActionForKey:(id)key;	// 0x35e0e78d
- (CGSize)renderedSize;	// 0x35e0e4d1
// converted property getter: - (float)scrollPosition;	// 0x35e0e6dd
// converted property getter: - (id)scrollingDelegate;	// 0x35e0e6ed
// converted property setter: - (void)setAttributedString:(id)string;	// 0x35e0e299
// converted property setter: - (void)setAutoScrolls:(BOOL)scrolls;	// 0x35e0e545
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x35e0e5d5
// converted property setter: - (void)setScrollPosition:(float)position;	// 0x35e0e6a1
// converted property setter: - (void)setScrollingDelegate:(id)delegate;	// 0x35e0e6fd
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x35e0e221
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x35e0e70d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e0e72d
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x35e0e71d
@end

