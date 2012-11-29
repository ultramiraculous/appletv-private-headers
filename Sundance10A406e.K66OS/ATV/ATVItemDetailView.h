/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTableView, NSString, BRTextControl, BRCoverArtPreviewControl, BRCursorControl, BRHorizontalDividerControl, BRMediaShelfView, BRMetadataTitleControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
	BRCoverArtPreviewControl *_mainImageControl;	// 84 = 0x54
	BRHorizontalDividerControl *_summaryTopDivider;	// 88 = 0x58
	BRHorizontalDividerControl *_summaryBottomDivider;	// 92 = 0x5c
	BRTextControl *_mainImageTextControl;	// 96 = 0x60
	BRTextControl *_summaryControl;	// 100 = 0x64
	BRCursorControl *_cursor;	// 104 = 0x68
	int _mainImageStyle;	// 108 = 0x6c
	int _displayMode;	// 112 = 0x70
	BRTableView *_table;	// 116 = 0x74
	BRMediaShelfView *_centerShelf;	// 120 = 0x78
	BRControl *_divider;	// 124 = 0x7c
	BRMediaShelfView *_bottomShelf;	// 128 = 0x80
	BRMetadataTitleControl *_titleControl;	// 132 = 0x84
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x126b99; S=0x125fa5; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x126b79; S=0x125f15; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x126b49; S=0x126b59; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x126b89; S=0x126025; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x125edd; S=0x125ebd; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x126b29; S=0x126b39; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x126101; S=0x1260a5; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x1261dd; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x1261a5; S=0x126139; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x126b69; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x126ba9; @synthesize=_titleControl
- (id)init;	// 0x125bb1
- (id)accessibilityLabel;	// 0x126ac1
- (id)accessibilityScreenContent;	// 0x126b09
// declared property getter: - (id)bottomShelf;	// 0x126b99
- (BOOL)brEventAction:(id)action;	// 0x126215
// declared property getter: - (id)centerShelf;	// 0x126b79
- (void)dealloc;	// 0x125da5
// declared property getter: - (int)displayMode;	// 0x126b49
// declared property getter: - (id)divider;	// 0x126b89
- (void)layoutSubcontrols;	// 0x126341
// declared property getter: - (id)mainImageProxy;	// 0x125edd
// declared property getter: - (int)mainImageStyle;	// 0x126b29
// declared property getter: - (id)mainImageText;	// 0x126101
// declared property getter: - (float)metadataWidth;	// 0x1261dd
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x125fa5
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x125f15
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x126b59
// declared property setter: - (void)setDivider:(id)divider;	// 0x126025
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x125ebd
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x126b39
// declared property setter: - (void)setMainImageText:(id)text;	// 0x1260a5
// declared property setter: - (void)setSummary:(id)summary;	// 0x126139
// declared property getter: - (id)summary;	// 0x1261a5
// declared property getter: - (id)table;	// 0x126b69
// declared property getter: - (id)titleControl;	// 0x126ba9
@end
