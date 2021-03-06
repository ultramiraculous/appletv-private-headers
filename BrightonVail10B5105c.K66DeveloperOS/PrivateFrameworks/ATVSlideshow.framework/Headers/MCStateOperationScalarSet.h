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
@property(assign, nonatomic) float scalar;	// G=0x325090b9; S=0x325090c9; @synthesize=_scalar
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey andScalar:(float)scalar;	// 0x32508ed1
- (id)initWithImprint:(id)imprint;	// 0x32508f0d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32509009
- (id)description;	// 0x32509055
- (id)imprint;	// 0x32508f7d
// declared property getter: - (float)scalar;	// 0x325090b9
// declared property setter: - (void)setScalar:(float)scalar;	// 0x325090c9
@end

