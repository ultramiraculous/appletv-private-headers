/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRGridView, NSArray, BRScrollControl, ATVDataType;

__attribute__((visibility("hidden")))
@interface ATVRecentsControl : BRControl {
	BRScrollControl *_scrollControl;	// 84 = 0x54
	BRGridView *_recentContent;	// 88 = 0x58
	ATVDataType *_mediaType;	// 92 = 0x5c
	NSArray *_items;	// 96 = 0x60
}
@property(copy, nonatomic) NSArray *items;	// G=0xa8e69; S=0xa83b1; @synthesize=_items
- (id)init;	// 0xa80d1
- (id)initWithMediaType:(id)mediaType;	// 0xa80dd
- (void).cxx_destruct;	// 0xa8e7d
- (void)_addedRecents:(id)recents;	// 0xa8e59
- (void)_fetchRecents;	// 0xa8be1
- (void)controlWasActivated;	// 0xa8409
- (void)dealloc;	// 0xa8345
- (void)grid:(id)grid didPlayItemAtIndex:(long)index;	// 0xa8805
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0xa8a81
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0xa8795
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0xa850d
// declared property getter: - (id)items;	// 0xa8e69
- (void)layoutSubcontrols;	// 0xa8449
- (long)numberOfColumnsInGrid:(id)grid;	// 0xa84c9
- (long)numberOfItemsInGrid:(id)grid;	// 0xa84a9
// declared property setter: - (void)setItems:(id)items;	// 0xa83b1
@end

