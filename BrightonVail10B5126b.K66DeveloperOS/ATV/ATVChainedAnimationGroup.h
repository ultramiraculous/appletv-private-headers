/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CAAnimation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVChainedAnimationGroup : XXUnknownSuperclass {
	CAAnimation *_defaultFillerAnimation;	// 4 = 0x4
	BOOL _evaluated;	// 8 = 0x8
	NSMutableArray *_tuples;	// 12 = 0xc
}
@property(retain, nonatomic) CAAnimation *defaultFillerAnimation;	// G=0x403465; S=0x403475; @synthesize=_defaultFillerAnimation
@property(assign, nonatomic) BOOL evaluated;	// G=0x40349d; S=0x4034ad; @synthesize=_evaluated
@property(retain, nonatomic) NSMutableArray *tuples;	// G=0x4034bd; S=0x4034cd; @synthesize=_tuples
- (void).cxx_destruct;	// 0x4034f5
- (void)_evaluateTuplesWithContinuationCheck;	// 0x402f29
- (void)_evaluateTuplesWithoutContinuationCheck;	// 0x402e31
- (void)addChainedAnimation:(id)animation forKey:(id)key inView:(id)view;	// 0x402741
- (void)cleanUp;	// 0x402d51
// declared property getter: - (id)defaultFillerAnimation;	// 0x403465
- (void)evaluate;	// 0x40287d
// declared property getter: - (BOOL)evaluated;	// 0x40349d
// declared property setter: - (void)setDefaultFillerAnimation:(id)animation;	// 0x403475
// declared property setter: - (void)setEvaluated:(BOOL)evaluated;	// 0x4034ad
// declared property setter: - (void)setTuples:(id)tuples;	// 0x4034cd
// declared property getter: - (id)tuples;	// 0x4034bd
@end

