/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class CADisplayLink, NSMutableArray;

@interface UIAnimator : NSObject {
	NSMutableArray *_animations;	// 4 = 0x4
	double _lastUpdateTime;	// 8 = 0x8
	CADisplayLink *_lcdHeartbeat;	// 16 = 0x10
	CADisplayLink *_tvHeartbeat;	// 20 = 0x14
	int _lcdCount;	// 24 = 0x18
	int _tvCount;	// 28 = 0x1c
}
+ (void)disableAnimation;	// 0x300be9e5
+ (void)enableAnimation;	// 0x300c6559
+ (id)sharedAnimator;	// 0x300d6d11
- (void)_LCDHeartbeatCallback:(id)callback;	// 0x3017b499
- (void)_TVHeartbeatCallback:(id)callback;	// 0x3020c56d
- (void)_addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start startTime:(double)time;	// 0x3017b09d
- (void)_advance:(BOOL)advance withTimestamp:(double)timestamp;	// 0x3017b4d1
- (void)_startAnimation:(id)animation withStartTime:(double)startTime;	// 0x3017b1bd
- (void)addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start;	// 0x3017b03d
- (void)addAnimations:(id)animations withDuration:(double)duration start:(BOOL)start;	// 0x3020c3a1
- (void)dealloc;	// 0x3020c2a1
- (float)fractionForAnimation:(id)animation;	// 0x3020c549
- (void)removeAnimationsForTarget:(id)target;	// 0x300d6dc9
- (void)removeAnimationsForTarget:(id)target ofKind:(Class)kind;	// 0x3014bcf9
- (void)startAnimation:(id)animation;	// 0x3020c51d
- (void)stopAnimation:(id)animation;	// 0x3017b9cd
@end

