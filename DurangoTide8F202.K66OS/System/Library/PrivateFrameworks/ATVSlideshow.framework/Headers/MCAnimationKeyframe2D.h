/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MCAnimationKeyframe2D : MCAnimationKeyframe {
	CGPoint mPoint;	// 48 = 0x30
	CGPoint mC1;	// 56 = 0x38
	CGPoint mC2;	// 64 = 0x40
}
@property(assign, nonatomic) CGPoint c1;	// G=0x3153983d; S=0x31539635; @synthesize=mC1
@property(assign, nonatomic) CGPoint c2;	// G=0x31539855; S=0x315396d5; @synthesize=mC2
@property(assign, nonatomic) CGPoint point;	// G=0x31539825; S=0x31539595; @synthesize=mPoint
- (id)init;	// 0x3153923d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x315392b1
// declared property getter: - (CGPoint)c1;	// 0x3153983d
// declared property getter: - (CGPoint)c2;	// 0x31539855
- (id)description;	// 0x31539775
- (id)imprint;	// 0x3153940d
// declared property getter: - (CGPoint)point;	// 0x31539825
// declared property setter: - (void)setC1:(CGPoint)a1;	// 0x31539635
// declared property setter: - (void)setC2:(CGPoint)a2;	// 0x315396d5
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x31539595
@end

