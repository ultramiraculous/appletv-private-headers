/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTableView.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffLineScore : BRTableView {
	BRImageControl *_leftFadeImageControl;	// 108 = 0x6c
	BRImageControl *_rightFadeImageControl;	// 112 = 0x70
	BOOL _leftFadeOn;	// 116 = 0x74
	BOOL _rightFadeOn;	// 117 = 0x75
}
@property(assign, nonatomic) BOOL leftFadeOn;	// G=0x19ea91; S=0x19e909; @synthesize=_leftFadeOn
@property(assign, nonatomic) BOOL rightFadeOn;	// G=0x19eaa1; S=0x19e941; @synthesize=_rightFadeOn
- (id)init;	// 0x19e74d
- (void)dealloc;	// 0x19e8a5
- (void)layoutSubcontrols;	// 0x19e979
// declared property getter: - (BOOL)leftFadeOn;	// 0x19ea91
// declared property getter: - (BOOL)rightFadeOn;	// 0x19eaa1
// declared property setter: - (void)setLeftFadeOn:(BOOL)on;	// 0x19e909
// declared property setter: - (void)setRightFadeOn:(BOOL)on;	// 0x19e941
@end
