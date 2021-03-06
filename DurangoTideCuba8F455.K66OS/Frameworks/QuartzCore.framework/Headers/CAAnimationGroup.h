/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSArray;

@interface CAAnimationGroup : CAAnimation {
}
@property(copy) NSArray *animations;	// G=0x3340fb79; S=0x3340fd2d; 
- (void)CA_prepareRenderValue;	// 0x3340f5d5
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x334119ad
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x3340f55d
// declared property getter: - (id)animations;	// 0x3340fb79
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x33410625
// declared property setter: - (void)setAnimations:(id)animations;	// 0x3340fd2d
- (void)setDefaultDuration:(double)duration;	// 0x3340f635
@end

