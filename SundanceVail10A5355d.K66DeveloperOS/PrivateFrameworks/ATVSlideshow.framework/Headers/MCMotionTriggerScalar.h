/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCMotionTrigger.h"


@interface MCMotionTriggerScalar : MCMotionTrigger {
	float _value;	// 32 = 0x20
}
@property(assign, nonatomic) float value;	// G=0x32173705; S=0x32173715; @synthesize=_value
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key duration:(double)duration andValue:(float)value;	// 0x321734fd
- (id)initWithImprint:(id)imprint;	// 0x32173545
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32173655
- (id)description;	// 0x321736a1
- (id)imprint;	// 0x321735c9
// declared property setter: - (void)setValue:(float)value;	// 0x32173715
// declared property getter: - (float)value;	// 0x32173705
@end

