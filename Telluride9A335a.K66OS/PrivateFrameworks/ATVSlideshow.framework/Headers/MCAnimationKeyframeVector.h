/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframeVector : MCAnimationKeyframe {
	XXStruct_Te64nB mVector;	// 48 = 0x30
}
@property(assign, nonatomic) XXStruct_Te64nB vector;	// G=0x31b95121; S=0x31b9504d; @synthesize=mVector
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31b94e59
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31b950c5
- (id)imprint;	// 0x31b94f45
// declared property setter: - (void)setVector:(XXStruct_Te64nB)vector;	// 0x31b9504d
// declared property getter: - (XXStruct_Te64nB)vector;	// 0x31b95121
@end
