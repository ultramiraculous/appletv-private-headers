/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDynamicAnimation.h"
#import "UIKit-Structs.h"

@class NSMutableArray, NSArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {
	id _applier;	// 16 = 0x10
	NSMutableArray *_animations;	// 20 = 0x14
	NSMutableArray *_runningAnimations;	// 24 = 0x18
}
@property(copy, nonatomic) NSArray *animations;	// G=0x32c68c8d; S=0x32eb2a49; @synthesize=_animations
- (BOOL)_animateForInterval:(double)interval;	// 0x32c68a31
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x32eb2e31
- (void)_stopAnimation;	// 0x32c68cc1
- (void)addAnimation:(id)animation;	// 0x32c686e9
// declared property getter: - (id)animations;	// 0x32c68c8d
- (void)dealloc;	// 0x32c68d3d
- (void)removeAnimation:(id)animation;	// 0x32eb2ce1
- (void)runWithCompletion:(id)completion;	// 0x32eb2dc9
- (void)runWithGroupApplier:(id)groupApplier completion:(id)completion;	// 0x32c688d1
- (void)runWithGroupApplier:(id)groupApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x32c688fd
// declared property setter: - (void)setAnimations:(id)animations;	// 0x32eb2a49
@end

