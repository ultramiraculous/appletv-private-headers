/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDBuild, PDAnimateMotionBehavior, PDAnimationTargetElement, NSString;

__attribute__((visibility("hidden")))
@interface PDAnimationCache : NSObject {
@private
	int mNodeType;	// 4 = 0x4
	int mPresetId;	// 8 = 0x8
	int mPresetSubType;	// 12 = 0xc
	int mPresetClass;	// 16 = 0x10
	PDAnimationTargetElement *mTargetElement;	// 20 = 0x14
	BOOL mHasDelay;	// 24 = 0x18
	double mDelay;	// 28 = 0x1c
	BOOL mHasDuration;	// 36 = 0x24
	double mDuration;	// 40 = 0x28
	BOOL mHasDirection;	// 48 = 0x30
	double mDirection;	// 52 = 0x34
	BOOL mHasPartCount;	// 60 = 0x3c
	int mPartCount;	// 64 = 0x40
	PDAnimateMotionBehavior *mMotionPath;	// 68 = 0x44
	BOOL mHasValue;	// 72 = 0x48
	double mValue;	// 76 = 0x4c
	PDBuild *mBuild;	// 84 = 0x54
	int mIterateType;	// 88 = 0x58
	BOOL mIsHead;	// 92 = 0x5c
	int mLevel;	// 96 = 0x60
	NSString *mGroupId;	// 100 = 0x64
}
@property(retain, nonatomic) PDBuild *build;	// G=0x32a45b69; S=0x32a46429; @synthesize=mBuild
@property(assign, nonatomic) double delay;	// G=0x32a45cb1; S=0x32a45aa9; @synthesize=mDelay
@property(assign, nonatomic) double direction;	// G=0x32a45c41; S=0x32a45af9; @synthesize=mDirection
@property(assign, nonatomic) double duration;	// G=0x32a45c79; S=0x32a45ad1; @synthesize=mDuration
@property(retain, nonatomic) NSString *groupId;	// G=0x32a45bb9; S=0x32a46401; @synthesize=mGroupId
@property(assign, nonatomic) BOOL hasDelay;	// G=0x32a45cc9; S=0x32a45cd9; @synthesize=mHasDelay
@property(assign, nonatomic) BOOL hasDirection;	// G=0x32a45c59; S=0x32a45c69; @synthesize=mHasDirection
@property(assign, nonatomic) BOOL hasDuration;	// G=0x32a45c91; S=0x32a45ca1; @synthesize=mHasDuration
@property(assign, nonatomic) BOOL hasPartCount;	// G=0x32a45c21; S=0x32a45c31; @synthesize=mHasPartCount
@property(assign, nonatomic) BOOL hasValue;	// G=0x32a45be1; S=0x32a45bf1; @synthesize=mHasValue
@property(assign, nonatomic) BOOL isHead;	// G=0x32a45b99; S=0x32a45ba9; @synthesize=mIsHead
@property(assign, nonatomic) int iterateType;	// G=0x32a45ce9; S=0x32a45cf9; @synthesize=mIterateType
@property(assign, nonatomic) int level;	// G=0x32a45b79; S=0x32a45b89; @synthesize=mLevel
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath;	// G=0x32a45c01; S=0x32a463d9; @synthesize=mMotionPath
@property(assign, nonatomic) int nodeType;	// G=0x32a45d69; S=0x32a45d79; @synthesize=mNodeType
@property(assign, nonatomic) int partCount;	// G=0x32a45c11; S=0x32a45b21; @synthesize=mPartCount
@property(assign, nonatomic) int presetClass;	// G=0x32a45d09; S=0x32a45d19; @synthesize=mPresetClass
@property(assign, nonatomic) int presetId;	// G=0x32a45d49; S=0x32a45d59; @synthesize=mPresetId
@property(assign, nonatomic) int presetSubType;	// G=0x32a45d29; S=0x32a45d39; @synthesize=mPresetSubType
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;	// G=0x32a45d89; S=0x32a463b1; @synthesize=mTargetElement
@property(assign, nonatomic) double value;	// G=0x32a45bc9; S=0x32a45b41; @synthesize=mValue
+ (id)createAnimationInfoDataForCacheItem:(id)cacheItem order:(unsigned)order;	// 0x32a460c5
+ (void)loadAnimationCache:(id)cache pdAnimation:(id)animation state:(id)state;	// 0x32a46205
+ (void)mapAnimationInfo:(id)info cacheData:(id)data state:(id)state;	// 0x32a4666d
+ (void)mapCommonData:(id)data cacheData:(id)data2 state:(id)state;	// 0x32a464d9
- (id)initWithAnimationInfo:(id)animationInfo;	// 0x32a45d99
// declared property getter: - (id)build;	// 0x32a45b69
- (void)dealloc;	// 0x32a46451
// declared property getter: - (double)delay;	// 0x32a45cb1
// declared property getter: - (double)direction;	// 0x32a45c41
// declared property getter: - (double)duration;	// 0x32a45c79
// declared property getter: - (id)groupId;	// 0x32a45bb9
// declared property getter: - (BOOL)hasDelay;	// 0x32a45cc9
// declared property getter: - (BOOL)hasDirection;	// 0x32a45c59
// declared property getter: - (BOOL)hasDuration;	// 0x32a45c91
// declared property getter: - (BOOL)hasPartCount;	// 0x32a45c21
// declared property getter: - (BOOL)hasValue;	// 0x32a45be1
// declared property getter: - (BOOL)isHead;	// 0x32a45b99
// declared property getter: - (int)iterateType;	// 0x32a45ce9
// declared property getter: - (int)level;	// 0x32a45b79
// declared property getter: - (id)motionPath;	// 0x32a45c01
// declared property getter: - (int)nodeType;	// 0x32a45d69
// declared property getter: - (int)partCount;	// 0x32a45c11
// declared property getter: - (int)presetClass;	// 0x32a45d09
// declared property getter: - (int)presetId;	// 0x32a45d49
// declared property getter: - (int)presetSubType;	// 0x32a45d29
// declared property setter: - (void)setBuild:(id)build;	// 0x32a46429
// declared property setter: - (void)setDelay:(double)delay;	// 0x32a45aa9
// declared property setter: - (void)setDirection:(double)direction;	// 0x32a45af9
// declared property setter: - (void)setDuration:(double)duration;	// 0x32a45ad1
// declared property setter: - (void)setGroupId:(id)anId;	// 0x32a46401
// declared property setter: - (void)setHasDelay:(BOOL)delay;	// 0x32a45cd9
// declared property setter: - (void)setHasDirection:(BOOL)direction;	// 0x32a45c69
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x32a45ca1
// declared property setter: - (void)setHasPartCount:(BOOL)count;	// 0x32a45c31
// declared property setter: - (void)setHasValue:(BOOL)value;	// 0x32a45bf1
// declared property setter: - (void)setIsHead:(BOOL)head;	// 0x32a45ba9
// declared property setter: - (void)setIterateType:(int)type;	// 0x32a45cf9
// declared property setter: - (void)setLevel:(int)level;	// 0x32a45b89
// declared property setter: - (void)setMotionPath:(id)path;	// 0x32a463d9
// declared property setter: - (void)setNodeType:(int)type;	// 0x32a45d79
// declared property setter: - (void)setPartCount:(int)count;	// 0x32a45b21
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x32a45d19
// declared property setter: - (void)setPresetId:(int)anId;	// 0x32a45d59
// declared property setter: - (void)setPresetSubType:(int)type;	// 0x32a45d39
// declared property setter: - (void)setTargetElement:(id)element;	// 0x32a463b1
// declared property setter: - (void)setValue:(double)value;	// 0x32a45b41
// declared property getter: - (id)targetElement;	// 0x32a45d89
// declared property getter: - (double)value;	// 0x32a45bc9
@end

