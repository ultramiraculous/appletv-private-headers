/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPopoverBackgroundView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
	UIView *_arrowView;	// 48 = 0x30
	UIView *_leftCapView;	// 52 = 0x34
	UIView *_rightCapView;	// 56 = 0x38
	float _arrowOffset;	// 60 = 0x3c
	unsigned _arrowDirection;	// 64 = 0x40
	int _backgroundStyle;	// 68 = 0x44
	BOOL _arrowVisible;	// 72 = 0x48
	BOOL useShortMode;	// 73 = 0x49
	BOOL _debugMode;	// 74 = 0x4a
}
@property(assign) unsigned arrowDirection;	// G=0x32ec51c5; S=0x32ec51d5; converted property
@property(assign) float arrowOffset;	// G=0x32ec5139; S=0x32ec5175; converted property
@property(assign, nonatomic, getter=isArrowVisible) BOOL arrowVisible;	// G=0x32ec5c3d; S=0x32ec5c4d; 
@property(assign, nonatomic) int backgroundStyle;	// G=0x32ec5a75; S=0x32ec5a85; 
@property(assign, nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled;	// G=0x32ec5c89; S=0x32ec5c99; @synthesize=_debugMode
@property(assign, nonatomic) BOOL useShortMode;	// G=0x32ec5205; S=0x32ec5c79; @synthesize
+ (float)arrowBase;	// 0x32ec51ed
+ (float)arrowHeight;	// 0x32ec51e5
+ (UIEdgeInsets)contentViewInsets;	// 0x32ec51f5
- (id)initWithFrame:(CGRect)frame;	// 0x32ec4561
- (void)_layoutArrowViewsLeftOrRight;	// 0x32ec4acd
- (void)_layoutArrowViewsNone;	// 0x32ec4f5d
- (void)_layoutArrowViewsUpOrDown;	// 0x32ec46b9
- (void)_loadNecessaryViews;	// 0x32ec522d
// converted property getter: - (unsigned)arrowDirection;	// 0x32ec51c5
// converted property getter: - (float)arrowOffset;	// 0x32ec5139
// declared property getter: - (int)backgroundStyle;	// 0x32ec5a75
- (void)dealloc;	// 0x32ec45a9
- (BOOL)hasComponentViews;	// 0x32ec56f9
// declared property getter: - (BOOL)isArrowVisible;	// 0x32ec5c3d
// declared property getter: - (BOOL)isDebugModeEnabled;	// 0x32ec5c89
- (BOOL)isPinned;	// 0x32ec5735
- (BOOL)isRightArrowPinnedToBottom;	// 0x32ec5a2d
- (BOOL)isRightArrowPinnedToTop;	// 0x32ec59e5
- (void)layoutSubviews;	// 0x32ec5065
- (float)maxNonPinnedOffset;	// 0x32ec590d
- (float)minNonPinnedOffset;	// 0x32ec5811
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x32ec512d
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x32ec5135
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x32ec5131
// converted property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x32ec51d5
// converted property setter: - (void)setArrowOffset:(float)offset;	// 0x32ec5175
// declared property setter: - (void)setArrowVisible:(BOOL)visible;	// 0x32ec5c4d
- (void)setArrowVisible:(BOOL)visible animated:(BOOL)animated;	// 0x32ec5c5d
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x32ec5a85
- (void)setBackgroundStyle:(int)style animated:(BOOL)animated;	// 0x32ec5c2d
// declared property setter: - (void)setDebugModeEnabled:(BOOL)enabled;	// 0x32ec5c99
// declared property setter: - (void)setUseShortMode:(BOOL)mode;	// 0x32ec5c79
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32ec511d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32ec5129
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32ec5125
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32ec5121
// declared property getter: - (BOOL)useShortMode;	// 0x32ec5205
- (void)willMoveToWindow:(id)window;	// 0x32ec4621
- (BOOL)wouldPinForOffset:(float)offset;	// 0x32ec57ad
@end

