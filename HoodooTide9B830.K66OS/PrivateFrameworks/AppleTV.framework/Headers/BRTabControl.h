/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPanelControl.h"

@class NSDictionary, NSArray;

@interface BRTabControl : BRPanelControl {
@private
	int _selectedTabIndex;	// 76 = 0x4c
	float _scaledTextPadding;	// 80 = 0x50
	float _scaledPreferredHeight;	// 84 = 0x54
	int _tabBeingDeselected;	// 88 = 0x58
	id _tabControlDelegate;	// 92 = 0x5c
	NSArray *_greyImages;	// 96 = 0x60
	NSArray *_blackImages;	// 100 = 0x64
	NSArray *_blueImages;	// 104 = 0x68
	NSDictionary *_tabItemLabelAttributes;	// 108 = 0x6c
}
@property(assign) id tabControlDelegate;	// G=0x32a06595; S=0x32a065a5; converted property
+ (id)fullSizeTabControl;	// 0x32a06159
+ (id)menuTabControl;	// 0x32a06221
- (id)init;	// 0x32a062e9
- (id)_centerTabImagesFromImages:(id)images;	// 0x32a076c1
- (void)_focusChanged:(id)changed;	// 0x32a07cfd
- (id)_imagesForTabItem:(id)tabItem;	// 0x32a077ed
- (id)_leftTabImagesFromImages:(id)images;	// 0x32a07611
- (void)_loadTabImages;	// 0x32a0720d
- (id)_rightTabImagesFromImages:(id)images;	// 0x32a07749
- (void)_updateFocusNotifications;	// 0x32a07c61
- (void)_updateTabItemNames:(int)names;	// 0x32a07b51
- (id)accessibilityControls;	// 0x32a07065
- (void)addTabItem:(id)item;	// 0x32a065b5
- (void)addTabItems:(id)items;	// 0x32a065f5
- (BOOL)brEventAction:(id)action;	// 0x32a064c1
- (void)controlWasFocused;	// 0x32a06efd
- (void)controlWasUnfocused;	// 0x32a06fb1
- (void)dealloc;	// 0x32a063a9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x32a06e81
- (void)insertTabItem:(id)item atIndex:(int)index;	// 0x32a06875
- (void)removeAllTabItems;	// 0x32a06a35
- (void)removeTabItem:(id)item;	// 0x32a06a49
- (void)selectNextTabItem;	// 0x32a06e05
- (void)selectPreviousTabItem;	// 0x32a06dad
- (void)selectTabItem:(id)item;	// 0x32a06ba5
- (void)selectTabItemAtIndex:(int)index;	// 0x32a06d49
- (id)selectedTabItem;	// 0x32a06b59
- (int)selectedTabItemIndex;	// 0x32a06b95
- (void)setScaledPreferredHeight:(float)height;	// 0x32a06471
- (void)setScaledTextPadding:(float)padding;	// 0x32a06461
// converted property setter: - (void)setTabControlDelegate:(id)delegate;	// 0x32a065a5
- (void)setTabItemLabelAttributes:(id)attributes;	// 0x32a06481
- (void)setTabItemNonSelectedImages:(id)images;	// 0x32a075b5
- (void)setTabItemSelectedInFocusImages:(id)focusImages;	// 0x32a074fd
- (void)setTabItemSelectedNonFocusedImages:(id)images;	// 0x32a07559
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32a07075
// converted property getter: - (id)tabControlDelegate;	// 0x32a06595
- (int)tabItemCount;	// 0x32a06b31
- (id)tabItems;	// 0x32a06865
@end

