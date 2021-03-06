/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIStatusBarForegroundView, UIStatusBarItemView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLayoutManager : NSObject {
	UIStatusBarForegroundView *_foregroundView;	// 4 = 0x4
	int _region;	// 8 = 0x8
	UIStatusBarItemView *_itemViews[24];	// 12 = 0xc
}
@property(assign, nonatomic) UIStatusBarForegroundView *foregroundView;	// G=0x32e082cd; S=0x32e082dd; @synthesize=_foregroundView
- (id)initWithRegion:(int)region foregroundView:(id)view;	// 0x32b3fe59
- (id)_createViewForItem:(id)item withData:(id)data actions:(int)actions;	// 0x32b3ff2d
- (CGRect)_frameForItemView:(id)itemView startPosition:(float)position;	// 0x32b2b005
- (SEL)_itemSortSelector;	// 0x32af0995
- (id)_itemViews;	// 0x32aefaa5
- (id)_itemViewsSortedForLayout;	// 0x32af08dd
- (float)_positionAfterPlacingItemView:(id)view startPosition:(float)position;	// 0x32af0a39
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)enabledItems;	// 0x32b40db9
- (void)_prepareEnabledItemType:(int)type withEnabledItems:(BOOL *)enabledItems withData:(id)data actions:(int)actions itemAppearing:(BOOL *)appearing itemDisappearing:(BOOL *)disappearing;	// 0x32aef759
- (CGRect)_repositionedNewFrame:(CGRect)frame widthDelta:(float)delta;	// 0x32c2e649
- (float)_startPosition;	// 0x32af0859
- (BOOL)_updateItemView:(id)view withData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x32aefb05
- (id)_viewForItem:(id)item;	// 0x32b2c659
- (float)_widthNeededForItemView:(id)itemView;	// 0x32af0b8d
- (void)clearOverlapFromItems:(id)items;	// 0x32b2c695
- (void)dealloc;	// 0x32e07e39
- (float)distributeOverlap:(float)overlap amongItems:(id)items;	// 0x32e08091
// declared property getter: - (id)foregroundView;	// 0x32e082cd
- (BOOL)itemIsVisible:(id)visible;	// 0x32ba12e1
- (void)itemView:(id)view widthChangedBy:(float)by;	// 0x32e08201
- (void)makeVisibleItemsPerformPendedActions;	// 0x32af0ea9
- (void)positionInvisibleItems;	// 0x32af06d9
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)enabledItems;	// 0x32e07ff1
- (BOOL)prepareEnabledItems:(BOOL *)items withData:(id)data actions:(int)actions;	// 0x32aef6bd
- (CGRect)rectForItems:(id)items;	// 0x32b2c479
- (void)reflowWithVisibleItems:(id)visibleItems duration:(double)duration;	// 0x32b2ca35
- (void)removeDisabledItems:(BOOL *)items;	// 0x32af064d
- (float)removeOverlap:(float)overlap fromItems:(id)items;	// 0x32b2c8d9
// declared property setter: - (void)setForegroundView:(id)view;	// 0x32e082dd
- (void)setVisibilityOfAllItems:(BOOL)allItems;	// 0x32e07ee1
- (void)setVisibilityOfItem:(id)item visible:(BOOL)visible;	// 0x32e07fa9
- (BOOL)updateDoubleHeightItem;	// 0x32e08059
- (BOOL)updateItemsWithData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x32aef9b9
- (float)widthNeededForItem:(id)item;	// 0x32b2c849
- (float)widthNeededForItems:(id)items;	// 0x32b2c771
@end

