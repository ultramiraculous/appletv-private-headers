/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCAnimationPath, MCPlugParallel, MRAnimationPathScalar, MRAnimationContext;

@interface MRParallelPlugger : NSObject {
	MCPlugParallel *mPlug;	// 4 = 0x4
	MCAnimationPath *mAnimationPathParam1;	// 8 = 0x8
	MCAnimationPath *mAnimationPathParam2;	// 12 = 0xc
	MCAnimationPath *mAnimationPathXY;	// 16 = 0x10
	MRAnimationPathScalar *mAnimationPathX;	// 20 = 0x14
	MRAnimationPathScalar *mAnimationPathY;	// 24 = 0x18
	MRAnimationPathScalar *mAnimationPathZ;	// 28 = 0x1c
	MRAnimationPathScalar *mAnimationPathScale;	// 32 = 0x20
	MRAnimationPathScalar *mAnimationPathRX;	// 36 = 0x24
	MRAnimationPathScalar *mAnimationPathRY;	// 40 = 0x28
	MRAnimationPathScalar *mAnimationPathRZ;	// 44 = 0x2c
	MRAnimationPathScalar *mAnimationPathOpacity;	// 48 = 0x30
	MRAnimationContext *mAnimationContext;	// 52 = 0x34
	unsigned char mCurrentLayoutIndex;	// 56 = 0x38
	BOOL mNeedsUpdate;	// 57 = 0x39
	BOOL mPlugWasSetSinceLastRendering;	// 58 = 0x3a
}
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x33488aa1; S=0x33487c59; @synthesize=mCurrentLayoutIndex
@property(assign, nonatomic) BOOL needsUpdate;	// G=0x33488ab1; S=0x33488ac1; @synthesize=mNeedsUpdate
@property(copy, nonatomic) MCPlugParallel *plug;	// G=0x33488a8d; S=0x33487aa5; @synthesize=mPlug
- (id)init;	// 0x33485fa1
- (BOOL)applyAtTime:(double)time toSublayer:(id)sublayer withArguments:(id)arguments;	// 0x33486045
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x33488aa1
- (void)dealloc;	// 0x33485fe1
// declared property getter: - (BOOL)needsUpdate;	// 0x33488ab1
// declared property getter: - (id)plug;	// 0x33488a8d
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x33487c59
// declared property setter: - (void)setNeedsUpdate:(BOOL)update;	// 0x33488ac1
// declared property setter: - (void)setPlug:(id)plug;	// 0x33487aa5
@end

