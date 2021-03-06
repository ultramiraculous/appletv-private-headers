/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRAlignmentAdjustingTextControl : BRTextControl {
	int _singleLineAlignment;	// 88 = 0x58
	int _multiLineAlignment;	// 92 = 0x5c
}
@property(assign) int multiLineAlignment;	// G=0x303011; S=0x303025; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x302fe5; S=0x302ff9; @synthesize=_singleLineAlignment
- (id)init;	// 0x302d09
- (void)_updateAttributes;	// 0x302d59
- (void)layoutSubcontrols;	// 0x302f59
// declared property getter: - (int)multiLineAlignment;	// 0x303011
- (void)setAttributedString:(id)string;	// 0x302f15
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x303025
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x302ff9
// declared property getter: - (int)singleLineAlignment;	// 0x302fe5
@end

