/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MCAnimationKeyframe2D : MCAnimationKeyframe {
	CGPoint mPoint;	// 32 = 0x20
	CGPoint mC1;	// 40 = 0x28
	CGPoint mC2;	// 48 = 0x30
}
@property(assign, nonatomic) CGPoint c1;	// G=0x3250c52d; S=0x3250c265; @synthesize=mC1
@property(assign, nonatomic) CGPoint c2;	// G=0x3250c545; S=0x3250c30d; @synthesize=mC2
@property(assign, nonatomic) CGPoint point;	// G=0x3250c515; S=0x3250c1bd; @synthesize=mPoint
+ (id)keyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x3250bcf1
+ (id)keyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x3250bd1d
- (id)initWithImprint:(id)imprint;	// 0x3250bdd5
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3250c49d
// declared property getter: - (CGPoint)c1;	// 0x3250c52d
// declared property getter: - (CGPoint)c2;	// 0x3250c545
- (id)description;	// 0x3250c3b5
- (id)imprint;	// 0x3250bf8d
// declared property getter: - (CGPoint)point;	// 0x3250c515
// declared property setter: - (void)setC1:(CGPoint)a1;	// 0x3250c265
// declared property setter: - (void)setC2:(CGPoint)a2;	// 0x3250c30d
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x3250c1bd
@end

