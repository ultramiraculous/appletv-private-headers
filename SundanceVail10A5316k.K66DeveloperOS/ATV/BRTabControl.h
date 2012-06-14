/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRPanelControl.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRTabControl : BRPanelControl {
	int _selectedTabIndex;	// 108 = 0x6c
	float _scaledTextPadding;	// 112 = 0x70
	float _scaledPreferredHeight;	// 116 = 0x74
	int _tabBeingDeselected;	// 120 = 0x78
	id _tabControlDelegate;	// 124 = 0x7c
	NSArray *_greyImages;	// 128 = 0x80
	NSArray *_blackImages;	// 132 = 0x84
	NSArray *_blueImages;	// 136 = 0x88
	NSDictionary *_tabItemLabelAttributes;	// 140 = 0x8c
}
@property(assign) id tabControlDelegate;	// G=0x2d15a5; S=0x2d15b5; converted property
+ (id)fullSizeTabControl;	// 0x2d116d
+ (id)menuTabControl;	// 0x2d1235
- (id)init;	// 0x2d12fd
- (id)_centerTabImagesFromImages:(id)images;	// 0x2d2689
- (void)_focusChanged:(id)changed;	// 0x2d2b35
- (id)_imagesForTabItem:(id)tabItem;	// 0x2d27ad
- (id)_leftTabImagesFromImages:(id)images;	// 0x2d25ed
- (void)_loadTabImages;	// 0x2d222d
- (id)_rightTabImagesFromImages:(id)images;	// 0x2d270d
- (void)_updateFocusNotifications;	// 0x2d2a9d
- (void)_updateTabItemNames:(int)names;	// 0x2d297d
- (id)accessibilityControls;	// 0x2d2081
- (void)addTabItem:(id)item;	// 0x2d15c5
- (void)addTabItems:(id)items;	// 0x2d1605
- (BOOL)brEventAction:(id)action;	// 0x2d14d1
- (void)controlWasFocused;	// 0x2d1f11
- (void)controlWasUnfocused;	// 0x2d1fc9
- (void)dealloc;	// 0x2d13bd
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2d1e95
- (void)insertTabItem:(id)item atIndex:(int)index;	// 0x2d187d
- (void)removeAllTabItems;	// 0x2d1a3d
- (void)removeTabItem:(id)item;	// 0x2d1a51
- (void)selectNextTabItem;	// 0x2d1e11
- (void)selectPreviousTabItem;	// 0x2d1db9
- (void)selectTabItem:(id)item;	// 0x2d1bb1
- (void)selectTabItemAtIndex:(int)index;	// 0x2d1d4d
- (id)selectedTabItem;	// 0x2d1b65
- (int)selectedTabItemIndex;	// 0x2d1ba1
- (void)setScaledPreferredHeight:(float)height;	// 0x2d1485
- (void)setScaledTextPadding:(float)padding;	// 0x2d1475
// converted property setter: - (void)setTabControlDelegate:(id)delegate;	// 0x2d15b5
- (void)setTabItemLabelAttributes:(id)attributes;	// 0x2d1495
- (void)setTabItemNonSelectedImages:(id)images;	// 0x2d2595
- (void)setTabItemSelectedInFocusImages:(id)focusImages;	// 0x2d24e5
- (void)setTabItemSelectedNonFocusedImages:(id)images;	// 0x2d253d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d2091
// converted property getter: - (id)tabControlDelegate;	// 0x2d15a5
- (int)tabItemCount;	// 0x2d1b3d
- (id)tabItems;	// 0x2d186d
@end

