/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextControl.h"


__attribute__((visibility("hidden")))
@interface BRAlignmentAdjustingTextControl : BRTextControl {
	int _singleLineAlignment;	// 88 = 0x58
	int _multiLineAlignment;	// 92 = 0x5c
}
@property(assign) int multiLineAlignment;	// G=0x30ec69; S=0x30ec7d; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x30ec3d; S=0x30ec51; @synthesize=_singleLineAlignment
- (id)init;	// 0x30e961
- (void)_updateAttributes;	// 0x30e9b1
- (void)layoutSubcontrols;	// 0x30ebb1
// declared property getter: - (int)multiLineAlignment;	// 0x30ec69
- (void)setAttributedString:(id)string;	// 0x30eb6d
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x30ec7d
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x30ec51
// declared property getter: - (int)singleLineAlignment;	// 0x30ec3d
@end
