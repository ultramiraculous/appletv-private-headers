/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMainMenuShelfErrorControl : BRControl {
	BRTextControl *_text;	// 84 = 0x54
	BRTextControl *_subtext;	// 88 = 0x58
}
@property(retain) BRTextControl *subtext;	// G=0x2ebb21; S=0x2ebacd; converted property
@property(retain) BRTextControl *text;	// G=0x2eba95; S=0x2eba41; converted property
- (id)init;	// 0x2eb929
- (id)_subtextAttributes;	// 0x2ebd8d
- (id)_textAttributes;	// 0x2ebc15
- (id)accessibilityLabel;	// 0x2ebf05
- (void)dealloc;	// 0x2eb9dd
- (void)layoutSubcontrols;	// 0x2ebb59
// converted property setter: - (void)setSubtext:(id)subtext;	// 0x2ebacd
// converted property setter: - (void)setText:(id)text;	// 0x2eba41
// converted property getter: - (id)subtext;	// 0x2ebb21
// converted property getter: - (id)text;	// 0x2eba95
@end
