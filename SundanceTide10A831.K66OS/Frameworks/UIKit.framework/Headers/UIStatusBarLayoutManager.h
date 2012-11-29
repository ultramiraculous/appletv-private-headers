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
@property(assign, nonatomic) UIStatusBarForegroundView *foregroundView;	// G=0x31ef7c9d; S=0x31ef7cad; @synthesize=_foregroundView
- (id)initWithRegion:(int)region foregroundView:(id)view;	// 0x31c2fe51
- (id)_createViewForItem:(id)item withData:(id)data actions:(int)actions;	// 0x31c2ff25
- (CGRect)_frameForItemView:(id)itemView startPosition:(float)position;	// 0x31c1affd
- (SEL)_itemSortSelector;	// 0x31be0995
- (id)_itemViews;	// 0x31bdfaa5
- (id)_itemViewsSortedForLayout;	// 0x31be08dd
- (float)_positionAfterPlacingItemView:(id)view startPosition:(float)position;	// 0x31be0a39
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)enabledItems;	// 0x31c30db1
- (void)_prepareEnabledItemType:(int)type withEnabledItems:(BOOL *)enabledItems withData:(id)data actions:(int)actions itemAppearing:(BOOL *)appearing itemDisappearing:(BOOL *)disappearing;	// 0x31bdf759
- (CGRect)_repositionedNewFrame:(CGRect)frame widthDelta:(float)delta;	// 0x31d1e569
- (float)_startPosition;	// 0x31be0859
- (BOOL)_updateItemView:(id)view withData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x31bdfb05
- (id)_viewForItem:(id)item;	// 0x31c1c651
- (float)_widthNeededForItemView:(id)itemView;	// 0x31be0b8d
- (void)clearOverlapFromItems:(id)items;	// 0x31c1c68d
- (void)dealloc;	// 0x31ef7809
- (float)distributeOverlap:(float)overlap amongItems:(id)items;	// 0x31ef7a61
// declared property getter: - (id)foregroundView;	// 0x31ef7c9d
- (BOOL)itemIsVisible:(id)visible;	// 0x31c912c1
- (void)itemView:(id)view widthChangedBy:(float)by;	// 0x31ef7bd1
- (void)makeVisibleItemsPerformPendedActions;	// 0x31be0ea9
- (void)positionInvisibleItems;	// 0x31be06d9
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)enabledItems;	// 0x31ef79c1
- (BOOL)prepareEnabledItems:(BOOL *)items withData:(id)data actions:(int)actions;	// 0x31bdf6bd
- (CGRect)rectForItems:(id)items;	// 0x31c1c471
- (void)reflowWithVisibleItems:(id)visibleItems duration:(double)duration;	// 0x31c1ca2d
- (void)removeDisabledItems:(BOOL *)items;	// 0x31be064d
- (float)removeOverlap:(float)overlap fromItems:(id)items;	// 0x31c1c8d1
// declared property setter: - (void)setForegroundView:(id)view;	// 0x31ef7cad
- (void)setVisibilityOfAllItems:(BOOL)allItems;	// 0x31ef78b1
- (void)setVisibilityOfItem:(id)item visible:(BOOL)visible;	// 0x31ef7979
- (BOOL)updateDoubleHeightItem;	// 0x31ef7a29
- (BOOL)updateItemsWithData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x31bdf9b9
- (float)widthNeededForItem:(id)item;	// 0x31c1c841
- (float)widthNeededForItems:(id)items;	// 0x31c1c769
@end
