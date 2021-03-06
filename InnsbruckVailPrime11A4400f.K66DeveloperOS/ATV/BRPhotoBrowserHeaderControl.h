/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl, BRContextMenuControl, NSString, BRPanelControl, BRHorizontalDividerControl, NSArray;

__attribute__((visibility("hidden")))
@interface BRPhotoBrowserHeaderControl : BRControl {
	BRTextControl *_titleControl;	// 84 = 0x54
	BRTextControl *_rightJustifiedTextControl;	// 88 = 0x58
	BRTextControl *_subtitleControl;	// 92 = 0x5c
	BRImageControl *_icon;	// 96 = 0x60
	BRHorizontalDividerControl *_divider;	// 100 = 0x64
	NSString *_title;	// 104 = 0x68
	long _count;	// 108 = 0x6c
	BOOL _displaysCount;	// 112 = 0x70
	XXStruct_qlg9jA _iconVerticalOffset;	// 116 = 0x74
	BOOL _alwaysDisplaysSubtitle;	// 120 = 0x78
	NSArray *_buttons;	// 124 = 0x7c
	BRContextMenuControl *_moreMenu;	// 128 = 0x80
	NSArray *_moreMenuButtons;	// 132 = 0x84
	BRPanelControl *_buttonsPanel;	// 136 = 0x88
}
@property(assign, nonatomic) BOOL alwaysDisplaysSubtitle;	// G=0x3a1fdd; S=0x3a1fed; @synthesize=_alwaysDisplaysSubtitle
@property(copy, nonatomic) NSArray *buttons;	// G=0x3a1ffd; S=0x3a13c5; @synthesize=_buttons
@property(retain, nonatomic) BRPanelControl *buttonsPanel;	// G=0x3a2051; S=0x3a2061; @synthesize=_buttonsPanel
@property(assign) long count;	// G=0x3a1241; S=0x3a11ed; converted property
@property(assign) BOOL displaysCount;	// G=0x3a1289; S=0x3a1251; converted property
@property(retain) BRImageControl *icon;	// G=0x3a1369; S=0x3a132d; converted property
@property(assign) XXStruct_qlg9jA iconVerticalOffset;	// G=0x3a13a9; S=0x3a1389; converted property
@property(retain, nonatomic) BRContextMenuControl *moreMenu;	// G=0x3a2011; S=0x3a2021; @synthesize=_moreMenu
@property(retain, nonatomic) NSArray *moreMenuButtons;	// G=0x3a2031; S=0x3a2041; @synthesize=_moreMenuButtons
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x3a11b5; S=0x3a1159; 
@property(retain) id subtitle;	// G=0x3a12f5; S=0x3a1299; converted property
@property(retain) NSString *title;	// G=0x3a1149; S=0x3a0f91; converted property
- (id)init;	// 0x3a0d31
- (void)_handleMoreButton:(id)button;	// 0x3a1c09
- (void)_moreMenuItemSelected:(id)selected;	// 0x3a1f61
- (id)accessibilityControls;	// 0x3a1bf9
- (id)accessibilityLabel;	// 0x3a1b75
// declared property getter: - (BOOL)alwaysDisplaysSubtitle;	// 0x3a1fdd
// declared property getter: - (id)buttons;	// 0x3a1ffd
// declared property getter: - (id)buttonsPanel;	// 0x3a2051
// converted property getter: - (long)count;	// 0x3a1241
- (void)dealloc;	// 0x3a0eb5
// converted property getter: - (BOOL)displaysCount;	// 0x3a1289
// converted property getter: - (id)icon;	// 0x3a1369
// converted property getter: - (XXStruct_qlg9jA)iconVerticalOffset;	// 0x3a13a9
- (void)layoutSubcontrols;	// 0x3a172d
// declared property getter: - (id)moreMenu;	// 0x3a2011
// declared property getter: - (id)moreMenuButtons;	// 0x3a2031
- (id)photoBrowserHeader;	// 0x3a0ce9
// declared property getter: - (id)rightJustifiedText;	// 0x3a11b5
// declared property setter: - (void)setAlwaysDisplaysSubtitle:(BOOL)subtitle;	// 0x3a1fed
// declared property setter: - (void)setButtons:(id)buttons;	// 0x3a13c5
// declared property setter: - (void)setButtonsPanel:(id)panel;	// 0x3a2061
// converted property setter: - (void)setCount:(long)count;	// 0x3a11ed
// converted property setter: - (void)setDisplaysCount:(BOOL)count;	// 0x3a1251
// converted property setter: - (void)setIcon:(id)icon;	// 0x3a132d
// converted property setter: - (void)setIconVerticalOffset:(XXStruct_qlg9jA)offset;	// 0x3a1389
// declared property setter: - (void)setMoreMenu:(id)menu;	// 0x3a2021
// declared property setter: - (void)setMoreMenuButtons:(id)buttons;	// 0x3a2041
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x3a1159
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3a1299
// converted property setter: - (void)setTitle:(id)title;	// 0x3a0f91
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3a16a9
// converted property getter: - (id)subtitle;	// 0x3a12f5
// converted property getter: - (id)title;	// 0x3a1149
@end

