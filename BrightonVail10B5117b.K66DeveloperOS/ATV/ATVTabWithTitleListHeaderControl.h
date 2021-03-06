/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTabControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTabWithTitleListHeaderControl : BRControl {
	BRTabControl *_tab;	// 84 = 0x54
	BRTextControl *_title;	// 88 = 0x58
	BRTextControl *_subtitle;	// 92 = 0x5c
}
@property(readonly, assign) BRTextControl *subtitle;	// G=0x115b31; @synthesize=_subtitle
@property(readonly, assign) BRTabControl *tab;	// G=0x115b09; @synthesize=_tab
@property(readonly, assign) BRTextControl *title;	// G=0x115b1d; @synthesize=_title
- (id)init;	// 0x115685
- (id)accessibilityLabel;	// 0x115aa1
- (BOOL)brEventAction:(id)action;	// 0x1157f5
- (void)dealloc;	// 0x11577d
- (void)layoutSubcontrols;	// 0x115925
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x115819
// declared property getter: - (id)subtitle;	// 0x115b31
// declared property getter: - (id)tab;	// 0x115b09
// declared property getter: - (id)title;	// 0x115b1d
@end

