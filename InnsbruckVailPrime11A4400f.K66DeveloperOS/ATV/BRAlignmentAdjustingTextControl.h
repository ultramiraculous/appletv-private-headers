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
@property(assign) int multiLineAlignment;	// G=0x35f7f9; S=0x35f80d; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x35f7cd; S=0x35f7e1; @synthesize=_singleLineAlignment
- (id)init;	// 0x35f4e5
- (void)_updateAttributes;	// 0x35f535
- (void)layoutSubcontrols;	// 0x35f741
// declared property getter: - (int)multiLineAlignment;	// 0x35f7f9
- (void)setAttributedString:(id)string;	// 0x35f6fd
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x35f80d
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x35f7e1
// declared property getter: - (int)singleLineAlignment;	// 0x35f7cd
@end
