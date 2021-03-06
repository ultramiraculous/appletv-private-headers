/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, PDIterate, NSMutableArray;

@interface PDCommonTimeNodeData : NSObject {
	NSMutableArray *mStartTimeConditions;	// 4 = 0x4
	NSMutableArray *mEndTimeConditions;	// 8 = 0x8
	NSMutableArray *mChildTimeNodeList;	// 12 = 0xc
	NSMutableArray *mSubTimeNodeList;	// 16 = 0x10
	PDIterate *mIterate;	// 20 = 0x14
	int mType;	// 24 = 0x18
	int mAnimationPresetClass;	// 28 = 0x1c
	int mPresetId;	// 32 = 0x20
	int mPresetSubType;	// 36 = 0x24
	int mRepeatCount;	// 40 = 0x28
	int mRepeatDuration;	// 44 = 0x2c
	int mRestartType;	// 48 = 0x30
	BOOL mHasDuration;	// 52 = 0x34
	double mDuration;	// 56 = 0x38
	double mSpeed;	// 64 = 0x40
	double mAcceleration;	// 72 = 0x48
	double mDeceleration;	// 80 = 0x50
	NSString *mGroupId;	// 88 = 0x58
}
@property(assign) double acceleration;	// G=0x3717f855; S=0x3703da11; converted property
@property(assign) int animationPresetClass;	// G=0x3717f775; S=0x3703d9e1; converted property
@property(retain) id childTimeNodeList;	// G=0x3717f6c1; S=0x3703e4ad; converted property
@property(assign) double deceleration;	// G=0x3717f86d; S=0x3703da25; converted property
@property(assign) double duration;	// G=0x3717f811; S=0x3703dda1; converted property
@property(retain) id endTimeConditions;	// G=0x3717f675; S=0x3717f685; converted property
@property(retain) id groupId;	// G=0x3717f885; S=0x37085821; converted property
@property(retain) id iterate;	// G=0x3717f71d; S=0x370a2785; converted property
@property(assign) int presetId;	// G=0x3717f795; S=0x3703da01; converted property
@property(assign) int presetSubType;	// G=0x3717f785; S=0x3703d9f1; converted property
@property(assign) int repeatCount;	// G=0x3717f7a5; S=0x370c7741; converted property
@property(assign) int repeatDuration;	// G=0x3717f7b5; S=0x3717f7c5; converted property
@property(assign) int restartType;	// G=0x3717f7f1; S=0x37039f6d; converted property
@property(assign) double speed;	// G=0x3717f829; S=0x3717f841; converted property
@property(retain) id startTimeConditions;	// G=0x3717f665; S=0x3703d8e5; converted property
@property(retain) id subTimeNodeList;	// G=0x3717f6d1; S=0x3717f6e1; converted property
@property(assign) int type;	// G=0x3717f749; S=0x37039ebd; converted property
- (id)init;	// 0x37039a69
// converted property getter: - (double)acceleration;	// 0x3717f855
// converted property getter: - (int)animationPresetClass;	// 0x3717f775
// converted property getter: - (id)childTimeNodeList;	// 0x3717f6c1
- (void)dealloc;	// 0x3703ea79
// converted property getter: - (double)deceleration;	// 0x3717f86d
// converted property getter: - (double)duration;	// 0x3717f811
// converted property getter: - (id)endTimeConditions;	// 0x3717f675
// converted property getter: - (id)groupId;	// 0x3717f885
- (BOOL)hasDuration;	// 0x3717f801
- (BOOL)hasPresetClass;	// 0x3717f759
- (BOOL)hasRestartType;	// 0x3717f7d5
- (BOOL)hasType;	// 0x3717f72d
// converted property getter: - (id)iterate;	// 0x3717f71d
// converted property getter: - (int)presetId;	// 0x3717f795
// converted property getter: - (int)presetSubType;	// 0x3717f785
// converted property getter: - (int)repeatCount;	// 0x3717f7a5
// converted property getter: - (int)repeatDuration;	// 0x3717f7b5
// converted property getter: - (int)restartType;	// 0x3717f7f1
// converted property setter: - (void)setAcceleration:(double)acceleration;	// 0x3703da11
// converted property setter: - (void)setAnimationPresetClass:(int)aClass;	// 0x3703d9e1
// converted property setter: - (void)setChildTimeNodeList:(id)list;	// 0x3703e4ad
// converted property setter: - (void)setDeceleration:(double)deceleration;	// 0x3703da25
// converted property setter: - (void)setDuration:(double)duration;	// 0x3703dda1
// converted property setter: - (void)setEndTimeConditions:(id)conditions;	// 0x3717f685
// converted property setter: - (void)setGroupId:(id)anId;	// 0x37085821
- (void)setGroupIdValue:(int)value;	// 0x3717f895
// converted property setter: - (void)setIterate:(id)iterate;	// 0x370a2785
// converted property setter: - (void)setPresetId:(int)anId;	// 0x3703da01
// converted property setter: - (void)setPresetSubType:(int)type;	// 0x3703d9f1
// converted property setter: - (void)setRepeatCount:(int)count;	// 0x370c7741
// converted property setter: - (void)setRepeatDuration:(int)duration;	// 0x3717f7c5
// converted property setter: - (void)setRestartType:(int)type;	// 0x37039f6d
// converted property setter: - (void)setSpeed:(double)speed;	// 0x3717f841
// converted property setter: - (void)setStartTimeConditions:(id)conditions;	// 0x3703d8e5
// converted property setter: - (void)setSubTimeNodeList:(id)list;	// 0x3717f6e1
// converted property setter: - (void)setType:(int)type;	// 0x37039ebd
// converted property getter: - (double)speed;	// 0x3717f829
// converted property getter: - (id)startTimeConditions;	// 0x3717f665
// converted property getter: - (id)subTimeNodeList;	// 0x3717f6d1
// converted property getter: - (int)type;	// 0x3717f749
@end

