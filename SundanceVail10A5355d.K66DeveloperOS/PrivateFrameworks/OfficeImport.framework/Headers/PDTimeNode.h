/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDCmdBehavior, PDAnimateColorBehavior, PDParallelTimeNodeGroup, PDSequentialTimeNodeGroup, PDAudioMediaNode, PDVideoMediaNode, NSMutableArray, PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior;

@interface PDTimeNode : NSObject {
	PDAnimateTimeBehavior *mTimeBehavior;	// 4 = 0x4
	PDAnimateEffectBehavior *mEffectBehavior;	// 8 = 0x8
	PDAnimateMotionBehavior *mMotionBehavior;	// 12 = 0xc
	PDAnimateRotateBehavior *mRotateBehavior;	// 16 = 0x10
	PDAnimateScaleBehavior *mScaleBehavior;	// 20 = 0x14
	PDAnimateColorBehavior *mColorBehavior;	// 24 = 0x18
	PDAudioMediaNode *mAudio;	// 28 = 0x1c
	PDVideoMediaNode *mVideo;	// 32 = 0x20
	PDParallelTimeNodeGroup *mParallelTimeNodeGroup;	// 36 = 0x24
	PDSequentialTimeNodeGroup *mSequentialTimeNodeGroup;	// 40 = 0x28
	NSMutableArray *mTimeConditionList;	// 44 = 0x2c
	PDSetBehavior *mSetBehavior;	// 48 = 0x30
	PDCmdBehavior *mCmdBehavior;	// 52 = 0x34
}
@property(retain) id audio;	// G=0x31e06509; S=0x31d436f9; converted property
@property(retain) id behavior;	// G=0x31e06595; S=0x31d0c9e9; converted property
@property(retain) id cmdBehavior;	// G=0x31e065a5; S=0x31d3c005; converted property
@property(retain) id colorBehavior;	// G=0x31e064bd; S=0x31e064cd; converted property
@property(retain) id effectBehavior;	// G=0x31e0647d; S=0x31d0cc3d; converted property
@property(retain) id motionBehavior;	// G=0x31e0648d; S=0x31cc5429; converted property
@property(retain) id parallel;	// G=0x31e06529; S=0x31cc54a1; converted property
@property(retain) id rotateBehavior;	// G=0x31e0649d; S=0x31d44be9; converted property
@property(retain) id scaleBehavior;	// G=0x31e064ad; S=0x31d38999; converted property
@property(retain) id sequential;	// G=0x31e06539; S=0x31cc54dd; converted property
@property(retain) id timeBehavior;	// G=0x31e0646d; S=0x31d13d11; converted property
@property(retain) id timeConditions;	// G=0x31e06549; S=0x31e06559; converted property
@property(retain) id video;	// G=0x31e06519; S=0x31d4e6a9; converted property
- (id)init;	// 0x31cc44b1
// converted property getter: - (id)audio;	// 0x31e06509
// converted property getter: - (id)behavior;	// 0x31e06595
// converted property getter: - (id)cmdBehavior;	// 0x31e065a5
// converted property getter: - (id)colorBehavior;	// 0x31e064bd
- (id)commonBehavior;	// 0x31e063fd
- (void)dealloc;	// 0x31cc5f65
// converted property getter: - (id)effectBehavior;	// 0x31e0647d
// converted property getter: - (id)motionBehavior;	// 0x31e0648d
// converted property getter: - (id)parallel;	// 0x31e06529
// converted property getter: - (id)rotateBehavior;	// 0x31e0649d
// converted property getter: - (id)scaleBehavior;	// 0x31e064ad
// converted property getter: - (id)sequential;	// 0x31e06539
// converted property setter: - (void)setAudio:(id)audio;	// 0x31d436f9
// converted property setter: - (void)setBehavior:(id)behavior;	// 0x31d0c9e9
// converted property setter: - (void)setCmdBehavior:(id)behavior;	// 0x31d3c005
// converted property setter: - (void)setColorBehavior:(id)behavior;	// 0x31e064cd
// converted property setter: - (void)setEffectBehavior:(id)behavior;	// 0x31d0cc3d
// converted property setter: - (void)setMotionBehavior:(id)behavior;	// 0x31cc5429
// converted property setter: - (void)setParallel:(id)parallel;	// 0x31cc54a1
// converted property setter: - (void)setRotateBehavior:(id)behavior;	// 0x31d44be9
// converted property setter: - (void)setScaleBehavior:(id)behavior;	// 0x31d38999
// converted property setter: - (void)setSequential:(id)sequential;	// 0x31cc54dd
// converted property setter: - (void)setTimeBehavior:(id)behavior;	// 0x31d13d11
// converted property setter: - (void)setTimeConditions:(id)conditions;	// 0x31e06559
// converted property setter: - (void)setVideo:(id)video;	// 0x31d4e6a9
// converted property getter: - (id)timeBehavior;	// 0x31e0646d
// converted property getter: - (id)timeConditions;	// 0x31e06549
// converted property getter: - (id)video;	// 0x31e06519
@end

