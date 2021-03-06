/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, PDSetBehavior, PDAnimateEffectBehavior, PDAnimateTimeBehavior, PDVideoMediaNode, PDAudioMediaNode, PDSequentialTimeNodeGroup, PDParallelTimeNodeGroup, PDAnimateColorBehavior, PDCmdBehavior, PDAnimateScaleBehavior, PDAnimateRotateBehavior, PDAnimateMotionBehavior;

__attribute__((visibility("hidden")))
@interface PDTimeNode : NSObject {
@private
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
@property(retain) id audio;	// G=0x3294b209; S=0x3294c1ad; converted property
@property(retain) id behavior;	// G=0x3294b259; S=0x3294c06d; converted property
@property(retain) id cmdBehavior;	// G=0x3294b269; S=0x3294c02d; converted property
@property(retain) id colorBehavior;	// G=0x3294b1f9; S=0x3294c1ed; converted property
@property(retain) id effectBehavior;	// G=0x3294b1b9; S=0x3294c2ed; converted property
@property(retain) id motionBehavior;	// G=0x3294b1c9; S=0x3294c2ad; converted property
@property(retain) id parallel;	// G=0x3294b229; S=0x3294c12d; converted property
@property(retain) id rotateBehavior;	// G=0x3294b1d9; S=0x3294c26d; converted property
@property(retain) id scaleBehavior;	// G=0x3294b1e9; S=0x3294c22d; converted property
@property(retain) id sequential;	// G=0x3294b239; S=0x3294c0ed; converted property
@property(retain) id timeBehavior;	// G=0x3294b1a9; S=0x3294c32d; converted property
@property(retain) id timeConditions;	// G=0x3294b249; S=0x3294c0ad; converted property
@property(retain) id video;	// G=0x3294b219; S=0x3294c16d; converted property
- (id)init;	// 0x3294c001
// converted property getter: - (id)audio;	// 0x3294b209
// converted property getter: - (id)behavior;	// 0x3294b259
// converted property getter: - (id)cmdBehavior;	// 0x3294b269
// converted property getter: - (id)colorBehavior;	// 0x3294b1f9
- (id)commonBehavior;	// 0x3294b141
- (void)dealloc;	// 0x3294c36d
// converted property getter: - (id)effectBehavior;	// 0x3294b1b9
// converted property getter: - (id)motionBehavior;	// 0x3294b1c9
// converted property getter: - (id)parallel;	// 0x3294b229
// converted property getter: - (id)rotateBehavior;	// 0x3294b1d9
// converted property getter: - (id)scaleBehavior;	// 0x3294b1e9
// converted property getter: - (id)sequential;	// 0x3294b239
// converted property setter: - (void)setAudio:(id)audio;	// 0x3294c1ad
// converted property setter: - (void)setBehavior:(id)behavior;	// 0x3294c06d
// converted property setter: - (void)setCmdBehavior:(id)behavior;	// 0x3294c02d
// converted property setter: - (void)setColorBehavior:(id)behavior;	// 0x3294c1ed
// converted property setter: - (void)setEffectBehavior:(id)behavior;	// 0x3294c2ed
// converted property setter: - (void)setMotionBehavior:(id)behavior;	// 0x3294c2ad
// converted property setter: - (void)setParallel:(id)parallel;	// 0x3294c12d
// converted property setter: - (void)setRotateBehavior:(id)behavior;	// 0x3294c26d
// converted property setter: - (void)setScaleBehavior:(id)behavior;	// 0x3294c22d
// converted property setter: - (void)setSequential:(id)sequential;	// 0x3294c0ed
// converted property setter: - (void)setTimeBehavior:(id)behavior;	// 0x3294c32d
// converted property setter: - (void)setTimeConditions:(id)conditions;	// 0x3294c0ad
// converted property setter: - (void)setVideo:(id)video;	// 0x3294c16d
// converted property getter: - (id)timeBehavior;	// 0x3294b1a9
// converted property getter: - (id)timeConditions;	// 0x3294b249
// converted property getter: - (id)video;	// 0x3294b219
@end

