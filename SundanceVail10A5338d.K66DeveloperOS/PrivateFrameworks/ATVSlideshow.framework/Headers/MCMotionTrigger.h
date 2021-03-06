/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCMotionTrigger : MCAction {
	NSString *_key;	// 12 = 0xc
	double _duration;	// 16 = 0x10
	float _easeIn;	// 24 = 0x18
	float _easeOut;	// 28 = 0x1c
}
@property(assign, nonatomic) double duration;	// G=0x334b43d5; S=0x334b43ed; @synthesize=_duration
@property(assign, nonatomic) float easeIn;	// G=0x334b4401; S=0x334b4411; @synthesize=_easeIn
@property(assign, nonatomic) float easeOut;	// G=0x334b4421; S=0x334b4431; @synthesize=_easeOut
@property(copy) NSString *key;	// G=0x334b439d; S=0x334b43b1; @synthesize=_key
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key andDuration:(double)duration;	// 0x334b3ecd
- (id)initWithImprint:(id)imprint;	// 0x334b3f51
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334b4259
- (void)demolish;	// 0x334b4099
- (id)description;	// 0x334b42f9
// declared property getter: - (double)duration;	// 0x334b43d5
// declared property getter: - (float)easeIn;	// 0x334b4401
// declared property getter: - (float)easeOut;	// 0x334b4421
- (id)imprint;	// 0x334b40e9
// declared property getter: - (id)key;	// 0x334b439d
// declared property setter: - (void)setDuration:(double)duration;	// 0x334b43ed
// declared property setter: - (void)setEaseIn:(float)anIn;	// 0x334b4411
// declared property setter: - (void)setEaseOut:(float)anOut;	// 0x334b4431
// declared property setter: - (void)setKey:(id)key;	// 0x334b43b1
@end

