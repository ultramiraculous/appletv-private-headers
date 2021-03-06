/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "ATVSlideshow-Structs.h"
#import "MCAnimationPathSupport.h"
#import "MCFilterSupport.h"

@class NSMutableDictionary, MCPlugSlide, MCAssetVideo, NSSet, NSDictionary, MCSong, MCContainerEffect, NSString, NSMutableSet, NSArray;

@interface MCSlide : MCObject <MCAnimationPathSupport, MCFilterSupport> {
	id *mSlideAsset;	// 16 = 0x10
	NSMutableDictionary *mFrameAttributes;	// 20 = 0x14
	NSMutableSet *mAnimationPaths;	// 24 = 0x18
	NSMutableSet *mFilters;	// 28 = 0x1c
	NSArray *mCachedOrderedFilters;	// 32 = 0x20
	unsigned mFlags;	// 36 = 0x24
	MCPlugSlide *mPlug;	// 40 = 0x28
	MCSong *mSong;	// 44 = 0x2c
	unsigned mIndex;	// 48 = 0x30
	float mAudioVolume;	// 52 = 0x34
	double mAudioFadeInDuration;	// 56 = 0x38
	double mAudioFadeOutDuration;	// 64 = 0x40
	float mAudioDuckLevel;	// 72 = 0x48
	double mAudioDuckInDuration;	// 76 = 0x4c
	double mAudioDuckOutDuration;	// 84 = 0x54
	double mStartTime;	// 92 = 0x5c
	double mDuration;	// 100 = 0x64
	NSString *mFrameID;	// 108 = 0x6c
	MCContainerEffect *mContainer;	// 112 = 0x70
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x3341c3fd; 
@property(retain) MCAssetVideo *asset;	// G=0x33419501; S=0x334196a5; 
@property(assign, nonatomic) double audioDuckInDuration;	// G=0x3341bd31; S=0x3341bd49; @synthesize=mAudioDuckInDuration
@property(assign, nonatomic) float audioDuckLevel;	// G=0x3341bd11; S=0x3341bd21; @synthesize=mAudioDuckLevel
@property(assign, nonatomic) double audioDuckOutDuration;	// G=0x3341bd5d; S=0x3341bd75; @synthesize=mAudioDuckOutDuration
@property(assign, nonatomic) double audioFadeInDuration;	// G=0x3341bcb9; S=0x3341bcd1; @synthesize=mAudioFadeInDuration
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x3341bce5; S=0x3341bcfd; @synthesize=mAudioFadeOutDuration
@property(assign, nonatomic) float audioVolume;	// G=0x3341bc99; S=0x3341bca9; @synthesize=mAudioVolume
@property(assign, nonatomic) CGPoint center;	// G=0x3341a055; S=0x3341a0c1; 
@property(assign) MCContainerEffect *container;	// G=0x3341bddd; S=0x3341bdf1; @synthesize=mContainer
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x3341c54d; 
@property(readonly, assign, nonatomic) unsigned countOfFilters;	// G=0x3341db55; 
@property(readonly, assign) unsigned char countOfLayouts;	// G=0x3341b4a5; 
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x3341b4d1; S=0x3341b4e5; 
@property(assign, nonatomic) double duration;	// G=0x3341bda1; S=0x3341afb9; @synthesize=mDuration
@property(readonly, assign) BOOL durationIsDefined;	// G=0x3341afa5; 
@property(readonly, assign) NSSet *filters;	// G=0x3341da05; 
@property(copy) NSDictionary *frameAttributes;	// G=0x3341b291; S=0x3341b38d; 
@property(copy) NSString *frameID;	// G=0x3341bdb9; S=0x3341bdcd; @synthesize=mFrameID
@property(assign, nonatomic) unsigned index;	// G=0x3341bc79; S=0x3341bc89; @synthesize=mIndex
@property(copy) NSString *kenBurnsType;	// G=0x33419ac5; S=0x33419c69; 
@property(readonly, assign) NSArray *orderedFilters;	// G=0x3341d731; 
@property(retain) MCPlugSlide *plug;	// G=0x3341ad15; S=0x3341ae19; @synthesize=mPlug
@property(assign, nonatomic) float rotation;	// G=0x3341a6a1; S=0x3341a6f9; 
@property(assign, nonatomic) float scale;	// G=0x3341a399; S=0x3341a3f1; 
@property(readonly, assign) MCSong *song;	// G=0x3341a9a9; @synthesize=mSong
@property(assign, nonatomic) double startTime;	// G=0x3341bd89; S=0x3341af61; @synthesize=mStartTime
@property(readonly, assign) BOOL startTimeIsDefined;	// G=0x3341af4d; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x33417cc1
- (id)init;	// 0x33417e81
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x3341be09
- (void)initFiltersWithImprints:(id)imprints;	// 0x3341d2a1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33417ed1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3341b575
- (void)addAnimationPath:(id)path;	// 0x3341c921
- (id)addFilterWithFilterID:(id)filterID;	// 0x3341df75
- (id)animationPathForKey:(id)key;	// 0x3341c651
// declared property getter: - (id)animationPaths;	// 0x3341c3fd
// declared property getter: - (id)asset;	// 0x33419501
// declared property getter: - (double)audioDuckInDuration;	// 0x3341bd31
// declared property getter: - (float)audioDuckLevel;	// 0x3341bd11
// declared property getter: - (double)audioDuckOutDuration;	// 0x3341bd5d
// declared property getter: - (double)audioFadeInDuration;	// 0x3341bcb9
// declared property getter: - (double)audioFadeOutDuration;	// 0x3341bce5
// declared property getter: - (float)audioVolume;	// 0x3341bc99
// declared property getter: - (CGPoint)center;	// 0x3341a055
// declared property getter: - (id)container;	// 0x3341bddd
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x3341c54d
// declared property getter: - (unsigned)countOfFilters;	// 0x3341db55
// declared property getter: - (unsigned char)countOfLayouts;	// 0x3341b4a5
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x3341b4d1
- (void)demolish;	// 0x334188b5
- (void)demolishAnimationPaths;	// 0x3341c02d
- (void)demolishFilters;	// 0x3341d421
// declared property getter: - (double)duration;	// 0x3341bda1
// declared property getter: - (BOOL)durationIsDefined;	// 0x3341afa5
- (id)filterAtIndex:(unsigned)index;	// 0x3341dc59
// declared property getter: - (id)filters;	// 0x3341da05
- (id)frameAttributeForKey:(id)key;	// 0x3341afe5
// declared property getter: - (id)frameAttributes;	// 0x3341b291
// declared property getter: - (id)frameID;	// 0x3341bdb9
- (id)imprint;	// 0x33418c0d
- (id)imprintsForAnimationPaths;	// 0x3341c2fd
- (id)imprintsForFilters;	// 0x3341d631
// declared property getter: - (unsigned)index;	// 0x3341bc79
- (id)insertFilterWithFilterID:(id)filterID atIndex:(unsigned)index;	// 0x3341dfa9
// declared property getter: - (id)kenBurnsType;	// 0x33419ac5
- (void)moveFiltersAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3341e6b1
- (void)observeFilter:(id)filter;	// 0x3341e99d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33419459
// declared property getter: - (id)orderedFilters;	// 0x3341d731
// declared property getter: - (id)plug;	// 0x3341ad15
- (void)removeAllAnimationPaths;	// 0x3341cf5d
- (void)removeAllFilters;	// 0x3341e65d
- (void)removeAnimationPathForKey:(id)key;	// 0x3341cbf1
- (void)removeFiltersAtIndices:(id)indices;	// 0x3341e325
// declared property getter: - (float)rotation;	// 0x3341a6a1
// declared property getter: - (float)scale;	// 0x3341a399
// declared property setter: - (void)setAsset:(id)asset;	// 0x334196a5
// declared property setter: - (void)setAudioDuckInDuration:(double)duration;	// 0x3341bd49
// declared property setter: - (void)setAudioDuckLevel:(float)level;	// 0x3341bd21
// declared property setter: - (void)setAudioDuckOutDuration:(double)duration;	// 0x3341bd75
// declared property setter: - (void)setAudioFadeInDuration:(double)duration;	// 0x3341bcd1
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x3341bcfd
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x3341bca9
// declared property setter: - (void)setCenter:(CGPoint)center;	// 0x3341a0c1
// declared property setter: - (void)setContainer:(id)container;	// 0x3341bdf1
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x3341b4e5
// declared property setter: - (void)setDuration:(double)duration;	// 0x3341afb9
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x3341b11d
// declared property setter: - (void)setFrameAttributes:(id)attributes;	// 0x3341b38d
// declared property setter: - (void)setFrameID:(id)anId;	// 0x3341bdcd
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x3341bc89
// declared property setter: - (void)setKenBurnsType:(id)type;	// 0x33419c69
// declared property setter: - (void)setPlug:(id)plug;	// 0x3341ae19
// declared property setter: - (void)setRotation:(float)rotation;	// 0x3341a6f9
// declared property setter: - (void)setScale:(float)scale;	// 0x3341a3f1
- (void)setSongForAsset:(id)asset;	// 0x3341aaad
// declared property setter: - (void)setStartTime:(double)time;	// 0x3341af61
// declared property getter: - (id)song;	// 0x3341a9a9
// declared property getter: - (double)startTime;	// 0x3341bd89
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x3341af4d
- (void)undefineDuration;	// 0x3341af8d
- (void)undefineStartTime;	// 0x3341af35
- (void)unobserveFilter:(id)filter;	// 0x3341ea21
@end

