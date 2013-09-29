/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRGridView, ATVRentedMediaProvider, BRCursorControl, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMyRentedMoviesController : BRController {
	BOOL _allowOurselfToBeRemovedFromStack;	// 100 = 0x64
	ATVRentedMediaProvider *_rentals;	// 104 = 0x68
	BRScrollControl *_scroller;	// 108 = 0x6c
	BRGridView *_grid;	// 112 = 0x70
	BRCursorControl *_cursor;	// 116 = 0x74
	int _numberOfExistingRentals;	// 120 = 0x78
}
@property(readonly, assign) BOOL allowOurselfToBeRemovedFromStack;	// G=0x209e99; @synthesize=_allowOurselfToBeRemovedFromStack
@property(readonly, assign) BRCursorControl *cursor;	// G=0x209e71; @synthesize=_cursor
@property(readonly, assign) BRGridView *grid;	// G=0x209e5d; @synthesize=_grid
@property(readonly, assign) int numberOfExistingRentals;	// G=0x209e85; @synthesize=_numberOfExistingRentals
@property(readonly, assign) ATVRentedMediaProvider *rentals;	// G=0x209e35; @synthesize=_rentals
@property(readonly, assign) BRScrollControl *scroller;	// G=0x209e49; @synthesize=_scroller
- (id)init;	// 0x209aa1
- (id)initWithRentalsProvider:(id)rentalsProvider;	// 0x209ae9
- (void)_rentalsUpdated:(id)updated;	// 0x209d91
- (void)_setupView;	// 0x209eb1
// declared property getter: - (BOOL)allowOurselfToBeRemovedFromStack;	// 0x209e99
// declared property getter: - (id)cursor;	// 0x209e71
- (void)dealloc;	// 0x209be9
// declared property getter: - (id)grid;	// 0x209e5d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x209e29
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x209dc5
- (void)layoutSubcontrols;	// 0x209ca1
- (long)numberOfColumnsInGrid:(id)grid;	// 0x209dc1
// declared property getter: - (int)numberOfExistingRentals;	// 0x209e85
- (long)numberOfItemsInGrid:(id)grid;	// 0x209da1
// declared property getter: - (id)rentals;	// 0x209e35
// declared property getter: - (id)scroller;	// 0x209e49
@end
