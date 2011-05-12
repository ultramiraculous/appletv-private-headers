/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCObject.h"
#import "MCAnimationPathSupport.h"
#import "MCFilterSupport.h"

@class NSDictionary, NSSet, NSArray, NSMutableSet, MCSong, MCAssetVideo, MCContainerEffect, NSString, NSMutableDictionary;

@interface MCSlide : MCObject <MCFilterSupport, MCAnimationPathSupport> {
	MCAssetVideo *mAsset;	// 12 = 0xc
	MCSong *mSong;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	float mAudioVolume;	// 24 = 0x18
	double mAudioFadeInDuration;	// 28 = 0x1c
	double mAudioFadeOutDuration;	// 36 = 0x24
	float mAudioDuckLevel;	// 44 = 0x2c
	double mAudioDuckInDuration;	// 48 = 0x30
	double mAudioDuckOutDuration;	// 56 = 0x38
	double mStartTime;	// 64 = 0x40
	double mDuration;	// 72 = 0x48
	BOOL mStartTimeIsDefined;	// 80 = 0x50
	BOOL mDurationIsDefined;	// 81 = 0x51
	NSString *mFrameID;	// 84 = 0x54
	NSMutableDictionary *mFrameAttributes;	// 88 = 0x58
	NSString *mKenBurnsType;	// 92 = 0x5c
	CGPoint mCenter;	// 96 = 0x60
	float mScale;	// 104 = 0x68
	float mRotation;	// 108 = 0x6c
	NSMutableSet *mAnimationPaths;	// 112 = 0x70
	NSMutableSet *mFilters;	// 116 = 0x74
	NSArray *mCachedOrderedFilters;	// 120 = 0x78
	MCContainerEffect *mContainer;	// 124 = 0x7c
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x31553621; 
@property(retain) MCAssetVideo *asset;	// G=0x31551e35; S=0x31551f2d; @synthesize=mAsset
@property(assign, nonatomic) double audioDuckInDuration;	// G=0x31553051; S=0x31553069; @synthesize=mAudioDuckInDuration
@property(assign, nonatomic) float audioDuckLevel;	// G=0x31553031; S=0x31553041; @synthesize=mAudioDuckLevel
@property(assign, nonatomic) double audioDuckOutDuration;	// G=0x31553081; S=0x31553099; @synthesize=mAudioDuckOutDuration
@property(assign, nonatomic) double audioFadeInDuration;	// G=0x31552fd1; S=0x31552fe9; @synthesize=mAudioFadeInDuration
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x31553001; S=0x31553019; @synthesize=mAudioFadeOutDuration
@property(assign, nonatomic) float audioVolume;	// G=0x31552fb1; S=0x31552fc1; @synthesize=mAudioVolume
@property(assign, nonatomic) CGPoint center;	// G=0x31553189; S=0x315531a1; @synthesize=mCenter
@property(assign) MCContainerEffect *container;	// G=0x315531f9; S=0x31553209; @synthesize=mContainer
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x3155376d; 
@property(readonly, assign) unsigned countOfFilters;	// G=0x31554855; 
@property(assign, nonatomic) double duration;	// G=0x315530d9; S=0x3155246d; @synthesize=mDuration
@property(readonly, assign) BOOL durationIsDefined;	// G=0x315530f1; @synthesize=mDurationIsDefined
@property(readonly, assign) NSSet *filters;	// G=0x31554709; 
@property(copy) NSDictionary *frameAttributes;	// G=0x3155274d; S=0x3155283d; 
@property(copy) NSString *frameID;	// G=0x31553101; S=0x31553119; @synthesize=mFrameID
@property(assign, nonatomic) unsigned index;	// G=0x31552f91; S=0x31552fa1; @synthesize=mIndex
@property(copy) NSString *kenBurnsType;	// G=0x31553145; S=0x3155315d; @synthesize=mKenBurnsType
@property(readonly, assign) NSArray *orderedFilters;	// G=0x3155451d; 
@property(assign, nonatomic) float rotation;	// G=0x315531d9; S=0x315531e9; @synthesize=mRotation
@property(assign, nonatomic) float scale;	// G=0x315531b9; S=0x315531c9; @synthesize=mScale
@property(readonly, assign) MCSong *song;	// G=0x31552091; @synthesize=mSong
@property(assign, nonatomic) double startTime;	// G=0x315530b1; S=0x31552435; @synthesize=mStartTime
@property(readonly, assign) BOOL startTimeIsDefined;	// G=0x315530c9; @synthesize=mStartTimeIsDefined
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x31550d05
- (id)init;	// 0x31550ec9
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x31553219
- (void)initFiltersWithImprints:(id)imprints;	// 0x3155412d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31550fa1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31552989
- (id)addFilterWithFilterID:(id)filterID;	// 0x31554b45
- (id)animationPathForKey:(id)key;	// 0x31553ba9
- (id)animationPathForKey:(id)key createIfNeeded:(BOOL)needed;	// 0x3155384d
// declared property getter: - (id)animationPaths;	// 0x31553621
// declared property getter: - (id)asset;	// 0x31551e35
// declared property getter: - (double)audioDuckInDuration;	// 0x31553051
// declared property getter: - (float)audioDuckLevel;	// 0x31553031
// declared property getter: - (double)audioDuckOutDuration;	// 0x31553081
// declared property getter: - (double)audioFadeInDuration;	// 0x31552fd1
// declared property getter: - (double)audioFadeOutDuration;	// 0x31553001
// declared property getter: - (float)audioVolume;	// 0x31552fb1
// declared property getter: - (CGPoint)center;	// 0x31553189
// declared property getter: - (id)container;	// 0x315531f9
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x3155376d
// declared property getter: - (unsigned)countOfFilters;	// 0x31554855
- (void)demolish;	// 0x3155163d
- (void)demolishAnimationPaths;	// 0x31553349
- (void)demolishFilters;	// 0x3155424d
// declared property getter: - (double)duration;	// 0x315530d9
// declared property getter: - (BOOL)durationIsDefined;	// 0x315530f1
- (id)filterAtIndex:(unsigned)index;	// 0x31554935
// declared property getter: - (id)filters;	// 0x31554709
- (id)frameAttributeForKey:(id)key;	// 0x31552495
// declared property getter: - (id)frameAttributes;	// 0x3155274d
// declared property getter: - (id)frameID;	// 0x31553101
- (id)imprint;	// 0x31551795
- (id)imprintsForAnimationPaths;	// 0x31553539
- (id)imprintsForFilters;	// 0x31554435
// declared property getter: - (unsigned)index;	// 0x31552f91
- (id)insertFilterWithFilterID:(id)filterID atIndex:(unsigned)index;	// 0x31554b71
// declared property getter: - (id)kenBurnsType;	// 0x31553145
- (void)moveFiltersAtIndices:(id)indices toIndex:(unsigned)index;	// 0x31555229
- (void)observeFilter:(id)filter;	// 0x315554f9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31551d99
// declared property getter: - (id)orderedFilters;	// 0x3155451d
- (void)removeAllAnimationPaths;	// 0x31553e85
- (void)removeAllFilters;	// 0x315551e1
- (void)removeAnimationPathForKey:(id)key;	// 0x31553bc1
- (void)removeFiltersAtIndices:(id)indices;	// 0x31554ea1
// declared property getter: - (float)rotation;	// 0x315531d9
// declared property getter: - (float)scale;	// 0x315531b9
// declared property setter: - (void)setAsset:(id)asset;	// 0x31551f2d
// declared property setter: - (void)setAudioDuckInDuration:(double)duration;	// 0x31553069
// declared property setter: - (void)setAudioDuckLevel:(float)level;	// 0x31553041
// declared property setter: - (void)setAudioDuckOutDuration:(double)duration;	// 0x31553099
// declared property setter: - (void)setAudioFadeInDuration:(double)duration;	// 0x31552fe9
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x31553019
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x31552fc1
// declared property setter: - (void)setCenter:(CGPoint)center;	// 0x315531a1
// declared property setter: - (void)setContainer:(id)container;	// 0x31553209
// declared property setter: - (void)setDuration:(double)duration;	// 0x3155246d
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x315525ad
// declared property setter: - (void)setFrameAttributes:(id)attributes;	// 0x3155283d
// declared property setter: - (void)setFrameID:(id)anId;	// 0x31553119
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x31552fa1
// declared property setter: - (void)setKenBurnsType:(id)type;	// 0x3155315d
// declared property setter: - (void)setRotation:(float)rotation;	// 0x315531e9
// declared property setter: - (void)setScale:(float)scale;	// 0x315531c9
- (void)setSongForAsset:(id)asset;	// 0x31552189
// declared property setter: - (void)setStartTime:(double)time;	// 0x31552435
// declared property getter: - (id)song;	// 0x31552091
// declared property getter: - (double)startTime;	// 0x315530b1
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x315530c9
- (void)undefineDuration;	// 0x3155245d
- (void)undefineStartTime;	// 0x31552425
- (void)unobserveFilter:(id)filter;	// 0x31555585
@end
