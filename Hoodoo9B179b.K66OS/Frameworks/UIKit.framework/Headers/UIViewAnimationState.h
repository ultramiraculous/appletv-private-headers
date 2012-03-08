/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface UIViewAnimationState : NSObject {
@private
	UIViewAnimationState *_nextState;	// 4 = 0x4
	NSString *_animationID;	// 8 = 0x8
	void *_context;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
	double _duration;	// 20 = 0x14
	double _delay;	// 28 = 0x1c
	double _frameInterval;	// 36 = 0x24
	double _start;	// 44 = 0x2c
	int _curve;	// 52 = 0x34
	float _repeatCount;	// 56 = 0x38
	int _transition;	// 60 = 0x3c
	UIView *_transitionView;	// 64 = 0x40
	int _filter;	// 68 = 0x44
	UIView *_filterView;	// 72 = 0x48
	float _filterValue;	// 76 = 0x4c
	SEL _willStartSelector;	// 80 = 0x50
	SEL _didEndSelector;	// 84 = 0x54
	int _didEndCount;	// 88 = 0x58
	CGPoint _position;	// 92 = 0x5c
	unsigned _willStartSent : 1;	// 100 = 0x64
	unsigned _useCurrentLayerState : 1;	// 100 = 0x64
	unsigned _cacheTransition : 1;	// 100 = 0x64
	unsigned _autoreverses : 1;	// 100 = 0x64
	unsigned _roundsToInteger : 1;	// 100 = 0x64
	unsigned _layoutSubviews : 1;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) BOOL _allowsUserInteraction;	// G=0x330024f1; 
+ (void)popAnimationState;	// 0x32ecf0f5
+ (void)pushViewAnimationState:(id)state context:(void *)context;	// 0x32ece489
// declared property getter: - (BOOL)_allowsUserInteraction;	// 0x330024f1
- (void)animationDidStart:(id)animation;	// 0x32ed53ad
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32ed5549
- (void)dealloc;	// 0x32ed0955
- (void)sendDelegateAnimationDidStop:(id)sendDelegateAnimation finished:(BOOL)finished;	// 0x32ecfa7d
- (void)setAnimationAttributes:(id)attributes;	// 0x32edf05d
@end
