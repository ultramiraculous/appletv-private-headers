/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDynamicAnimation.h"
#import "UIKit-Structs.h"

@class NSMutableArray, NSArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {
	id _applier;	// 16 = 0x10
	id _viewApplier;	// 20 = 0x14
	double _value;	// 24 = 0x18
	double _velocity;	// 32 = 0x20
	double _unitSize;	// 40 = 0x28
	double _friction;	// 48 = 0x30
	double _decelerationFactor;	// 56 = 0x38
	double _decelerationLnFactor;	// 64 = 0x40
	double _multiplier;	// 72 = 0x48
	NSMutableArray *_activeValues;	// 80 = 0x50
	void *_stepFunction;	// 84 = 0x54
}
@property(copy, nonatomic) NSArray *activeValues;	// G=0x31fa1f79; S=0x31fa1899; @synthesize=_activeValues
@property(assign, nonatomic) double friction;	// G=0x31fa1f61; S=0x31d57111; @synthesize=_friction
@property(assign, nonatomic) double value;	// G=0x31d58bbd; S=0x31fa1f4d; @synthesize=_value
@property(assign, nonatomic) double velocity;	// G=0x31fa1cc9; S=0x31fa1f39; @synthesize=_velocity
- (id)init;	// 0x31fa0f51
- (id)initWithValue:(double)value velocity:(double)velocity unitSize:(double)size;	// 0x31d56f19
- (BOOL)_animateForInterval:(double)interval;	// 0x31d57a79
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x31fa1d19
- (double)_multiplier;	// 0x31fa1c99
- (void)_setDecelerationFactor:(double)factor;	// 0x31fa1c09
- (void)_setMultiplier:(double)multiplier;	// 0x31fa1cb1
- (void)_setVelocity:(double)velocity;	// 0x31fa1cf1
- (void)_stopAnimation;	// 0x31d57fa1
- (void)_updateStepFunction;	// 0x31fa0f99
// declared property getter: - (id)activeValues;	// 0x31fa1f79
- (void)addActiveValue:(id)value;	// 0x31fa176d
- (void)dealloc;	// 0x31d58451
// declared property getter: - (double)friction;	// 0x31fa1f61
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31fa1bf5
- (void)removeActiveValue:(id)value;	// 0x31fa1821
- (void)runWithCompletion:(id)completion;	// 0x31fa1b7d
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion;	// 0x31d571a5
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x31d571d1
// declared property setter: - (void)setActiveValues:(id)values;	// 0x31fa1899
// declared property setter: - (void)setFriction:(double)friction;	// 0x31d57111
// declared property setter: - (void)setValue:(double)value;	// 0x31fa1f4d
// declared property setter: - (void)setVelocity:(double)velocity;	// 0x31fa1f39
// declared property getter: - (double)value;	// 0x31d58bbd
// declared property getter: - (double)velocity;	// 0x31fa1cc9
@end
