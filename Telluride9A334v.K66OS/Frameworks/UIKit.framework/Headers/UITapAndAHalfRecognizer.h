/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, UITouch, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
@private
	CGPoint _startPoint;	// 56 = 0x38
	float _allowableMovement;	// 64 = 0x40
	int _numberOfFullTaps;	// 68 = 0x44
	double _minimumFinalPressDuration;	// 72 = 0x48
	NSMutableSet *_activeTouches;	// 80 = 0x50
	int _currentNumberOfTaps;	// 84 = 0x54
	UITouch *_touch;	// 88 = 0x58
	UIDelayedAction *_tapTimer;	// 92 = 0x5c
}
@property(assign, nonatomic) float allowableMovement;	// G=0x302f821d; S=0x30076301; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x302f822d; S=0x300d4c05; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x3012985d; S=0x302f820d; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x3012984d; S=0x300545f1; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x30076239
- (void)_resetGestureRecognizer;	// 0x301324dd
- (void)_verifyMovementInAllowableRange;	// 0x3012b88d
// declared property getter: - (float)allowableMovement;	// 0x302f821d
- (void)clearTapTimer;	// 0x30054595
- (void)dealloc;	// 0x30054521
// declared property getter: - (double)minimumFinalPressDuration;	// 0x302f822d
// declared property getter: - (int)numberOfFullTaps;	// 0x3012985d
- (void)recognized:(id)recognized;	// 0x302f818d
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x30076301
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x300d4c05
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x302f820d
// declared property setter: - (void)setTouch:(id)touch;	// 0x300545f1
- (void)startRecognitionTimer:(double)timer;	// 0x302f8105
- (void)startTapTimer:(double)timer;	// 0x3012986d
- (void)tooSlow:(id)slow;	// 0x3013249d
// declared property getter: - (id)touch;	// 0x3012984d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30129551
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302f81bd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3012b739
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3015bcb9
@end

