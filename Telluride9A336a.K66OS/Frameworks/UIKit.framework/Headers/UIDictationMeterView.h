/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSMutableDictionary, CALayer, CADisplayLink, NSMutableArray, UIImage, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationMeterView : UIView {
@private
	UIImageView *_background;	// 48 = 0x30
	UIImageView *_overlay;	// 52 = 0x34
	NSMutableArray *_micListeningImages;	// 56 = 0x38
	NSMutableDictionary *_micFullImageDict;	// 60 = 0x3c
	UIImage *_micThinkingOnImage;	// 64 = 0x40
	CALayer *_micImageLayer;	// 68 = 0x44
	CALayer *_animatingLayer;	// 72 = 0x48
	CALayer *_fullRingLayer;	// 76 = 0x4c
	NSTimer *_fillTimer;	// 80 = 0x50
	int _phase;	// 84 = 0x54
	int _state;	// 88 = 0x58
	float _runningPowerLevels[5];	// 92 = 0x5c
	unsigned _powerPointer;	// 112 = 0x70
	CADisplayLink *_displayLink;	// 116 = 0x74
}
- (id)initWithFrame:(CGRect)frame;	// 0x35469eed
- (float)_adjustedDuration:(float)duration;	// 0x3546a8c5
- (double)_animationInterval;	// 0x3546a541
- (id)_basicAnimationForOpacityFrom:(unsigned)from to:(unsigned)to duration:(double)duration;	// 0x3546b28d
- (id)_beginningKeyFrameAnimation;	// 0x3546aa39
- (void)_clearDisplayLink;	// 0x3546b5f5
- (id)_currentMicPowerImage;	// 0x3546a5d9
- (float)_currentMicPowerLevel;	// 0x3546a879
- (void)_displayLinkCallback:(id)callback;	// 0x3546b569
- (id)_emptyMicImage;	// 0x3546a5b1
- (id)_fullMicImage;	// 0x3546a5c5
- (void)_handleBeginning;	// 0x3546b44d
- (void)_handleListening;	// 0x3546b635
- (void)_handleListeningBegin;	// 0x3546b4c5
- (void)_handleListeningEnd;	// 0x3546b6f5
- (void)_handleListeningStart;	// 0x3546b4b5
- (void)_handleThinking;	// 0x3546b7d9
- (void)_handleThinkingBegin;	// 0x3546b771
- (void)_handleThinkingEnd;	// 0x3546b889
- (void)_handleThinkingResolve;	// 0x3546b925
- (id)_imageForMicFullIndex:(unsigned)micFullIndex;	// 0x3546a569
- (BOOL)_isSuitableStoppingPhase:(int)phase;	// 0x3546b9d1
- (id)_keyframeAnimationForCGImages:(id)cgimages duration:(double)duration;	// 0x3546a969
- (id)_listeningBeginKeyFrameAnimation;	// 0x3546abd5
- (id)_listeningEndKeyFrameAnimation;	// 0x3546ad99
- (float)_powerLevelForMicPower:(float)micPower;	// 0x3546a811
- (void)_removeAnimationsAndClearLayers;	// 0x3546a8e9
- (void)_reset;	// 0x3546a6e1
- (id)_thinkingBeginKeyFrameAnimation;	// 0x3546af5d
- (id)_thinkingEndKeyFrameAnimation;	// 0x3546b3bd
- (id)_thinkingResolveKeyFrameAnimation;	// 0x3546b405
- (id)_thinkingRingAnimation;	// 0x3546b131
- (float)_updateMedianWithNewValue:(float)newValue;	// 0x3546a771
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3546b9dd
- (void)dealloc;	// 0x3546a3e5
- (void)layoutSubviews;	// 0x3546a495
- (void)setState:(int)state;	// 0x3546a64d
@end

