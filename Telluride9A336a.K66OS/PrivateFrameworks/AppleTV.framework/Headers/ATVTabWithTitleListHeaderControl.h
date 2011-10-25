/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTabControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTabWithTitleListHeaderControl : BRControl {
@private
	BRTabControl *_tab;	// 48 = 0x30
	BRTextControl *_title;	// 52 = 0x34
	BRTextControl *_subtitle;	// 56 = 0x38
}
@property(readonly, assign) BRTextControl *subtitle;	// G=0x33a06f19; @synthesize=_subtitle
@property(readonly, assign) BRTabControl *tab;	// G=0x33a06ef9; @synthesize=_tab
@property(readonly, assign) BRTextControl *title;	// G=0x33a06f09; @synthesize=_title
- (id)init;	// 0x33a06a5d
- (id)accessibilityLabel;	// 0x33a06e95
- (BOOL)brEventAction:(id)action;	// 0x33a06bcd
- (void)dealloc;	// 0x33a06b59
- (void)layoutSubcontrols;	// 0x33a06d09
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a06bf1
// declared property getter: - (id)subtitle;	// 0x33a06f19
// declared property getter: - (id)tab;	// 0x33a06ef9
// declared property getter: - (id)title;	// 0x33a06f09
@end

