/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframe2D : MCAnimationKeyframe {
	CGPoint mPoint;	// 48 = 0x30
	CGPoint mC1;	// 56 = 0x38
	CGPoint mC2;	// 64 = 0x40
}
@property(assign, nonatomic) CGPoint c1;	// G=0x335bebe5; S=0x335be955; @synthesize=mC1
@property(assign, nonatomic) CGPoint c2;	// G=0x335bec01; S=0x335be9f1; @synthesize=mC2
@property(assign, nonatomic) CGPoint point;	// G=0x335bebc9; S=0x335be8b9; @synthesize=mPoint
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x335be49d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x335beb4d
// declared property getter: - (CGPoint)c1;	// 0x335bebe5
// declared property getter: - (CGPoint)c2;	// 0x335bec01
- (id)description;	// 0x335bea8d
- (id)imprint;	// 0x335be671
// declared property getter: - (CGPoint)point;	// 0x335bebc9
// declared property setter: - (void)setC1:(CGPoint)a1;	// 0x335be955
// declared property setter: - (void)setC2:(CGPoint)a2;	// 0x335be9f1
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x335be8b9
@end

