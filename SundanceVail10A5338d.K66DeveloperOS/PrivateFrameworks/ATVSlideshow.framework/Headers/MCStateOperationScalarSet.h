/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCStateOperation.h"


@interface MCStateOperationScalarSet : MCStateOperation {
	float _scalar;	// 16 = 0x10
}
@property(assign, nonatomic) float scalar;	// G=0x334b3a15; S=0x334b3a25; @synthesize=_scalar
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey andScalar:(float)scalar;	// 0x334b382d
- (id)initWithImprint:(id)imprint;	// 0x334b3869
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334b3965
- (id)description;	// 0x334b39b1
- (id)imprint;	// 0x334b38d9
// declared property getter: - (float)scalar;	// 0x334b3a15
// declared property setter: - (void)setScalar:(float)scalar;	// 0x334b3a25
@end

