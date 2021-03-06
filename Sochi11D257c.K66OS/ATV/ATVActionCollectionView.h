/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRCursorControl, BRMediaShelfView;

__attribute__((visibility("hidden")))
@interface ATVActionCollectionView : BRControl {
	BRControl *_headerControl;	// 84 = 0x54
	BRControl *_content;	// 88 = 0x58
	BRMediaShelfView *_bottomShelf;	// 92 = 0x5c
	BRCursorControl *_cursor;	// 96 = 0x60
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0xeb4c9; S=0xeb159; @synthesize=_bottomShelf
@property(retain, nonatomic) BRControl *content;	// G=0xeb4b9; S=0xeb0ad; @synthesize=_content
@property(retain) BRCursorControl *cursor;	// G=0xeb4d9; S=0xeb4ed; @synthesize=_cursor
@property(retain, nonatomic) BRControl *headerControl;	// G=0xeb4a9; S=0xeb039; @synthesize=_headerControl
- (id)init;	// 0xeaf0d
// declared property getter: - (id)bottomShelf;	// 0xeb4c9
// declared property getter: - (id)content;	// 0xeb4b9
// declared property getter: - (id)cursor;	// 0xeb4d9
- (void)dealloc;	// 0xeafad
// declared property getter: - (id)headerControl;	// 0xeb4a9
- (void)layoutSubcontrols;	// 0xeb1e1
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0xeb159
// declared property setter: - (void)setContent:(id)content;	// 0xeb0ad
// declared property setter: - (void)setCursor:(id)cursor;	// 0xeb4ed
// declared property setter: - (void)setHeaderControl:(id)control;	// 0xeb039
@end

