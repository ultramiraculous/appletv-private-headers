/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRTabControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVTabWithTitleListHeaderControl : BRControl {
@private
	BRTabControl *_tab;	// 44 = 0x2c
	BRTextControl *_title;	// 48 = 0x30
	BRTextControl *_subtitle;	// 52 = 0x34
}
@property(readonly, assign) BRTextControl *subtitle;	// G=0x306f23a5; @synthesize=_subtitle
@property(readonly, assign) BRTabControl *tab;	// G=0x306f23c5; @synthesize=_tab
@property(readonly, assign) BRTextControl *title;	// G=0x306f23b5; @synthesize=_title
- (id)init;	// 0x306f2465
- (id)accessibilityLabel;	// 0x306f2645
- (BOOL)brEventAction:(id)action;	// 0x306f23d5
- (void)dealloc;	// 0x306f23f9
- (void)layoutSubcontrols;	// 0x306f2689
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x306f2551
// declared property getter: - (id)subtitle;	// 0x306f23a5
// declared property getter: - (id)tab;	// 0x306f23c5
// declared property getter: - (id)title;	// 0x306f23b5
@end

