/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableSet, UITouch, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
	CGPoint _startPoint;	// 56 = 0x38
	float _allowableMovement;	// 64 = 0x40
	int _numberOfFullTaps;	// 68 = 0x44
	double _minimumFinalPressDuration;	// 72 = 0x48
	NSMutableSet *_activeTouches;	// 80 = 0x50
	int _currentNumberOfTaps;	// 84 = 0x54
	UITouch *_touch;	// 88 = 0x58
	UIDelayedAction *_tapTimer;	// 92 = 0x5c
}
@property(assign, nonatomic) float allowableMovement;	// G=0x32f6a2e9; S=0x32d117f9; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x32f6a2f9; S=0x32d40081; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x32da2b69; S=0x32f6a2d9; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x32da2b59; S=0x32d43e89; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32d11729
- (void)_resetGestureRecognizer;	// 0x32dac081
- (void)_verifyMovementInAllowableRange;	// 0x32da5005
// declared property getter: - (float)allowableMovement;	// 0x32f6a2e9
- (void)clearTapTimer;	// 0x32d43e2d
- (void)dealloc;	// 0x32d43db5
// declared property getter: - (double)minimumFinalPressDuration;	// 0x32f6a2f9
// declared property getter: - (int)numberOfFullTaps;	// 0x32da2b69
- (void)recognized:(id)recognized;	// 0x32f6a255
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x32d117f9
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x32d40081
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x32f6a2d9
// declared property setter: - (void)setTouch:(id)touch;	// 0x32d43e89
- (void)startRecognitionTimer:(double)timer;	// 0x32f6a1cd
- (void)startTapTimer:(double)timer;	// 0x32da2b7d
- (void)tooSlow:(id)slow;	// 0x32dac04d
// declared property getter: - (id)touch;	// 0x32da2b59
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32da2861
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32f6a289
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32da4ea1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32e37419
@end
