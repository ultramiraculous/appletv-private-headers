/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVImageHeaderViewButtonsPanel : BRControl {
	NSArray *_buttons;	// 84 = 0x54
	XXStruct_qlg9jA _buttonSpacing;	// 88 = 0x58
	XXStruct_qlg9jA _buttonSyncWidth;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) XXStruct_qlg9jA buttonSpacing;	// G=0x514f15; @synthesize=_buttonSpacing
@property(assign, nonatomic) XXStruct_qlg9jA buttonSyncWidth;	// G=0x514f31; S=0x514f4d; @synthesize=_buttonSyncWidth
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x514f01; @synthesize=_buttons
- (id)initWithButtons:(id)buttons;	// 0x514921
- (void).cxx_destruct;	// 0x514f5d
// declared property getter: - (XXStruct_qlg9jA)buttonSpacing;	// 0x514f15
// declared property getter: - (XXStruct_qlg9jA)buttonSyncWidth;	// 0x514f31
// declared property getter: - (id)buttons;	// 0x514f01
- (CGRect)focusCursorFrame;	// 0x514b5d
- (void)layoutSubcontrols;	// 0x514d41
// declared property setter: - (void)setButtonSyncWidth:(XXStruct_qlg9jA)width;	// 0x514f4d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x514c05
@end

