/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableSet, NSArray, NSSet;

@interface MCAnimationPathKeyframed : MCAnimationPath {
	NSMutableSet *mKeyframes;	// 12 = 0xc
	NSArray *mCachedOrderedKeyframes;	// 16 = 0x10
}
@property(readonly, assign) NSSet *keyframes;	// G=0x3324ae0d; 
+ (id)animationPathWithKey:(id)key;	// 0x3324a8d9
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3324a859
+ (double)timeForKeyframe:(id)keyframe inPlug:(id)plug;	// 0x3324b505
- (id)init;	// 0x3324a905
- (id)initWithImprint:(id)imprint;	// 0x3324a969
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3324c0fd
- (void)addKeyframe:(id)keyframe;	// 0x3324baf1
- (unsigned)countOfKeyframes;	// 0x3324af51
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x3324b951
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x3324b9b9
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x3324b9e5
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x3324b8c5
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x3324b8e9
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x3324ba45
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x3324ba79
- (void)demolish;	// 0x3324aab5
- (id)description;	// 0x3324c0a5
- (id)imprint;	// 0x3324acad
// declared property getter: - (id)keyframes;	// 0x3324ae0d
- (id)orderedKeyframesInPlug:(id)plug;	// 0x3324b04d
- (void)removeAllKeyframes;	// 0x3324be15
- (void)removeKeyframe:(id)keyframe;	// 0x3324bc75
@end

