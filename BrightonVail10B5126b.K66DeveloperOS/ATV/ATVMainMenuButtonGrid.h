/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMainMenuButtonGrid : BRGridView {
	BOOL _itemsNeedUpdating;	// 208 = 0xd0
	BOOL _focusedItemNeedsUpdating;	// 209 = 0xd1
	BOOL _updatingFocusedItem;	// 210 = 0xd2
	NSArray *_items;	// 212 = 0xd4
	NSDictionary *_buttonTemplateInfo;	// 216 = 0xd8
	long _numberOfColumns;	// 220 = 0xdc
	id _itemTitleBlock;	// 224 = 0xe0
	id _itemImageBlock;	// 228 = 0xe4
	id _itemIconBadgeCountBlock;	// 232 = 0xe8
	BOOL _shouldAlignCenter;	// 236 = 0xec
	int _navigationalBias;	// 240 = 0xf0
	BOOL _allowsReordering;	// 244 = 0xf4
}
@property(assign, nonatomic) BOOL allowsReordering;	// G=0x13fc81; S=0x13fc91; @synthesize=_allowsReordering
@property(readonly, assign, nonatomic) NSDictionary *buttonTemplateInfo;	// G=0x13fc31; @synthesize=_buttonTemplateInfo
@property(assign, nonatomic) int navigationalBias;	// G=0x13fc61; S=0x13fc71; @synthesize=_navigationalBias
@property(assign, nonatomic) long numberOfColumns;	// G=0x13fc21; S=0x13f78d; @synthesize=_numberOfColumns
@property(assign, nonatomic) BOOL shouldAlignCenter;	// G=0x13fc41; S=0x13fc51; @synthesize=_shouldAlignCenter
- (id)init;	// 0x13ec91
- (id)initWithLayout:(id)layout;	// 0x13ecd1
- (void)_centerSubcontrols;	// 0x13ee79
- (id)_itemIconBadgeCountBlock;	// 0x13f539
- (id)_itemImageBlock;	// 0x13f529
- (id)_itemTitleBlock;	// 0x13f519
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x13f481
- (void)_updateFocusedItem;	// 0x13f5fd
// declared property getter: - (BOOL)allowsReordering;	// 0x13fc81
- (void)bindItemIconBadgeCountWithBlock:(id)block;	// 0x13f5c1
- (void)bindItemImageWithBlock:(id)block;	// 0x13f585
- (void)bindItemTitleWithBlock:(id)block;	// 0x13f549
// declared property getter: - (id)buttonTemplateInfo;	// 0x13fc31
- (BOOL)canMoveItemAtIndex:(long)index;	// 0x13f9d1
- (id)dataItemAtIndex:(unsigned)index;	// 0x13f741
- (id)dataItems;	// 0x13f6b5
- (void)dealloc;	// 0x13ed79
- (void)didFocusItemAtIndex:(long)index;	// 0x13fb95
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x13f3dd
- (id)initialFocus;	// 0x13f2cd
- (id)itemAtIndex:(long)index;	// 0x13f869
- (void)layoutSubcontrols;	// 0x13f4ad
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0x13f9e9
// declared property getter: - (int)navigationalBias;	// 0x13fc61
// declared property getter: - (long)numberOfColumns;	// 0x13fc21
- (void)populateDataCache:(id)cache;	// 0x13f7b5
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x13f085
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x13f119
// declared property setter: - (void)setAllowsReordering:(BOOL)reordering;	// 0x13fc91
// declared property setter: - (void)setNavigationalBias:(int)bias;	// 0x13fc71
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x13f78d
// declared property setter: - (void)setShouldAlignCenter:(BOOL)alignCenter;	// 0x13fc51
// declared property getter: - (BOOL)shouldAlignCenter;	// 0x13fc41
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x13faf5
- (void)updateBoundFocusedItem;	// 0x13ee59
- (void)updateBoundItems;	// 0x13ee39
@end

