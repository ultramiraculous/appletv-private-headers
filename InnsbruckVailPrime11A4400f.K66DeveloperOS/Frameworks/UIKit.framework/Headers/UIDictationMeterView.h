/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIImageView, NSTimer, NSMutableArray, CALayer, CADisplayLink;

__attribute__((visibility("hidden")))
@interface UIDictationMeterView : UIButton {
	UIImageView *_background;	// 224 = 0xe0
	UIImageView *_overlay;	// 228 = 0xe4
	NSMutableArray *_micListeningImages;	// 232 = 0xe8
	CALayer *_micImageLayer;	// 236 = 0xec
	CALayer *_animatingLayer;	// 240 = 0xf0
	NSTimer *_fillTimer;	// 244 = 0xf4
	int _phase;	// 248 = 0xf8
	int _state;	// 252 = 0xfc
	float _runningPowerLevels[5];	// 256 = 0x100
	unsigned _powerPointer;	// 276 = 0x114
	CADisplayLink *_displayLink;	// 280 = 0x118
	double _releaseStart;	// 284 = 0x11c
	float _releaseLevel;	// 292 = 0x124
	int _cachedViewMode;	// 296 = 0x128
}
- (id)initWithFrame:(CGRect)frame;	// 0x2f85f281
- (float)_adjustedDuration:(float)duration;	// 0x2f85fc8d
- (double)_animationInterval;	// 0x2f85f8a1
- (id)_attackKeyFrameAnimation;	// 0x2f85fe31
- (void)_clearDisplayLink;	// 0x2f8606f5
- (float)_currentMicPowerLevel;	// 0x2f85fc41
- (id)_decayKeyFrameAnimation;	// 0x2f860049
- (id)_emptyMicImage;	// 0x2f85f9ed
- (id)_keyframeAnimationForCGImages:(id)cgimages duration:(double)duration;	// 0x2f85fd05
- (float)_powerLevelForMicPower:(float)micPower;	// 0x2f85fbdd
- (void)_removeAnimationsAndClearLayers;	// 0x2f85fcb1
- (void)_reset;	// 0x2f85fa39
- (void)_resetRunningPowerLevels;	// 0x2f85fac9
- (void)_startAttack;	// 0x2f85ffdd
- (void)_startDecay;	// 0x2f860215
- (void)_startListening;	// 0x2f860731
- (void)_startRelease;	// 0x2f8604b1
- (void)_startSustain;	// 0x2f860369
- (id)_sustainKeyFrameAnimation;	// 0x2f860271
- (void)_updateListeningAnimation:(id)animation;	// 0x2f860625
- (float)_updateMedianWithNewValue:(float)newValue;	// 0x2f85fb15
- (void)_updateReleaseAnimation:(id)animation;	// 0x2f8603c1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2f8608a1
- (void)dealloc;	// 0x2f85f781
- (id)imageForMicLevel:(float)micLevel;	// 0x2f85fdd5
- (void)layoutSubviews;	// 0x2f85f80d
- (void)setState:(int)state;	// 0x2f85f8c9
@end

