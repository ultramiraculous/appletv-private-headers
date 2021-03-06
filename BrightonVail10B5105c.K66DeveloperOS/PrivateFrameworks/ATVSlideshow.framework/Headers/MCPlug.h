/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "MCAnimationPathSupport.h"
#import "MCActionSupport.h"

@class NSMutableSet, NSMutableDictionary, NSSet, MCContainer, NSDictionary;

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport> {
	unsigned long mFlags;	// 16 = 0x10
	NSMutableSet *mAnimationPaths;	// 20 = 0x14
	NSMutableDictionary *mActions;	// 24 = 0x18
	MCContainer *mContainer;	// 28 = 0x1c
	double mPhaseInDuration;	// 32 = 0x20
	double mLoopDuration;	// 40 = 0x28
	double mPhaseOutDuration;	// 48 = 0x30
	double mNumberOfLoops;	// 56 = 0x38
}
@property(readonly, assign) NSDictionary *actions;	// G=0x32524d99; 
@property(readonly, assign) NSSet *animationPaths;	// G=0x32523a99; 
@property(retain) MCContainer *container;	// G=0x32522ba5; S=0x32522ca9; @synthesize=mContainer
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x32524ee9; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x32523be9; 
@property(readonly, assign, nonatomic) double fullDuration;	// G=0x32522e81; 
@property(assign, nonatomic) double loopDuration;	// G=0x3252345d; S=0x32522e11; @synthesize=mLoopDuration
@property(assign, nonatomic) double numberOfLoops;	// G=0x3252348d; S=0x32522edd; @synthesize=mNumberOfLoops
@property(assign, nonatomic) double phaseInDuration;	// G=0x32523445; S=0x32522dd9; @synthesize=mPhaseInDuration
@property(assign, nonatomic) double phaseOutDuration;	// G=0x32523475; S=0x32522e49; @synthesize=mPhaseOutDuration
@property(assign, nonatomic) BOOL preactivatesWithParent;	// G=0x32522f41; S=0x32522f55; 
@property(assign, nonatomic) BOOL startsPaused;	// G=0x32522f09; S=0x32522f1d; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x32522499
- (id)init;	// 0x32522575
- (void)initActionsWithImprints:(id)imprints;	// 0x3252493d
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x325234a5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x325225c1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32522f79
- (id)actionForKey:(id)key;	// 0x32524fed
// declared property getter: - (id)actions;	// 0x32524d99
- (void)addAnimationPath:(id)path;	// 0x32523fbd
- (id)animationPathForKey:(id)key;	// 0x32523ced
// declared property getter: - (id)animationPaths;	// 0x32523a99
// declared property getter: - (id)container;	// 0x32522ba5
// declared property getter: - (unsigned)countOfActions;	// 0x32524ee9
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x32523be9
- (void)demolish;	// 0x32522811
- (void)demolishActions;	// 0x32524a99
- (void)demolishAnimationPaths;	// 0x325236c9
// declared property getter: - (double)fullDuration;	// 0x32522e81
- (id)imprint;	// 0x32522879
- (id)imprintsForActions;	// 0x32524c81
- (id)imprintsForAnimationPaths;	// 0x32523999
// declared property getter: - (double)loopDuration;	// 0x3252345d
// declared property getter: - (double)numberOfLoops;	// 0x3252348d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32522b39
// declared property getter: - (double)phaseInDuration;	// 0x32523445
// declared property getter: - (double)phaseOutDuration;	// 0x32523475
// declared property getter: - (BOOL)preactivatesWithParent;	// 0x32522f41
- (void)removeActionForKey:(id)key;	// 0x32525295
- (void)removeAllActions;	// 0x325253a5
- (void)removeAllAnimationPaths;	// 0x325245f9
- (void)removeAnimationPathForKey:(id)key;	// 0x3252428d
- (void)setAction:(id)action forKey:(id)key;	// 0x32525121
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x32523285
// declared property setter: - (void)setContainer:(id)container;	// 0x32522ca9
// declared property setter: - (void)setLoopDuration:(double)duration;	// 0x32522e11
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x32522edd
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x32522dd9
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x32522e49
// declared property setter: - (void)setPreactivatesWithParent:(BOOL)parent;	// 0x32522f55
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x32522f1d
// declared property getter: - (BOOL)startsPaused;	// 0x32522f09
@end

