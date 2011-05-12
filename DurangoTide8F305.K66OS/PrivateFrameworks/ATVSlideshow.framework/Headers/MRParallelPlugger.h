/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCPlugParallel, MCAnimationPath;

@interface MRParallelPlugger : NSObject {
	MCPlugParallel *mPlug;	// 4 = 0x4
	MCAnimationPath *mAnimationPathParam1;	// 8 = 0x8
	MCAnimationPath *mAnimationPathParam2;	// 12 = 0xc
	MCAnimationPath *mAnimationPathXY;	// 16 = 0x10
	MCAnimationPath *mAnimationPathX;	// 20 = 0x14
	MCAnimationPath *mAnimationPathY;	// 24 = 0x18
	MCAnimationPath *mAnimationPathZ;	// 28 = 0x1c
	MCAnimationPath *mAnimationPathRX;	// 32 = 0x20
	MCAnimationPath *mAnimationPathRY;	// 36 = 0x24
	MCAnimationPath *mAnimationPathRZ;	// 40 = 0x28
	MCAnimationPath *mAnimationPathOpacity;	// 44 = 0x2c
	BOOL mNeedsUpdate;	// 48 = 0x30
	BOOL mPlugWasSetSinceLastRendering;	// 49 = 0x31
}
@property(assign) BOOL needsUpdate;	// G=0x332f06cd; S=0x332f06dd; @synthesize=mNeedsUpdate
@property(copy, nonatomic) MCPlugParallel *plug;	// G=0x332f06bd; S=0x332f0335; @synthesize=mPlug
- (id)init;	// 0x332eefa1
- (BOOL)applyAtTime:(double)time toSublayer:(id)sublayer;	// 0x332ef0ad
- (void)dealloc;	// 0x332eefe1
// declared property getter: - (BOOL)needsUpdate;	// 0x332f06cd
// declared property getter: - (id)plug;	// 0x332f06bd
// declared property setter: - (void)setNeedsUpdate:(BOOL)update;	// 0x332f06dd
// declared property setter: - (void)setPlug:(id)plug;	// 0x332f0335
@end
