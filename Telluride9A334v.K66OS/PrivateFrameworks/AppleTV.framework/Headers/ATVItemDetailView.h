/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaShelfView, BRDividerControl, NSString, BRTextControl, BRMetadataTitleControl, BRTableView, BRCoverArtPreviewControl, BRCursorControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVItemDetailView : BRControl {
@private
	BRCoverArtPreviewControl *_mainImageControl;	// 48 = 0x30
	BRDividerControl *_summaryTopDivider;	// 52 = 0x34
	BRDividerControl *_summaryBottomDivider;	// 56 = 0x38
	BRTextControl *_mainImageTextControl;	// 60 = 0x3c
	BRTextControl *_summaryControl;	// 64 = 0x40
	BRCursorControl *_cursor;	// 68 = 0x44
	int _mainImageStyle;	// 72 = 0x48
	int _displayMode;	// 76 = 0x4c
	BRTableView *_table;	// 80 = 0x50
	BRMediaShelfView *_centerShelf;	// 84 = 0x54
	BRControl *_divider;	// 88 = 0x58
	BRMediaShelfView *_bottomShelf;	// 92 = 0x5c
	BRMetadataTitleControl *_titleControl;	// 96 = 0x60
}
@property(retain, nonatomic) BRMediaShelfView *bottomShelf;	// G=0x332f83e1; S=0x332f7855; @synthesize=_bottomShelf
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x332f83c1; S=0x332f77bd; @synthesize=_centerShelf
@property(assign, nonatomic) int displayMode;	// G=0x332f8391; S=0x332f83a1; @synthesize=_displayMode
@property(retain, nonatomic) BRControl *divider;	// G=0x332f83d1; S=0x332f78dd; @synthesize=_divider
@property(retain, nonatomic) id<BRImageProxy> mainImageProxy;	// G=0x332f7785; S=0x332f7765; @dynamic
@property(assign, nonatomic) int mainImageStyle;	// G=0x332f8371; S=0x332f8381; @synthesize=_mainImageStyle
@property(retain, nonatomic) NSString *mainImageText;	// G=0x332f79d1; S=0x332f7965; @dynamic
@property(readonly, assign, nonatomic) float metadataWidth;	// G=0x332f7aad; @dynamic
@property(retain, nonatomic) NSString *summary;	// G=0x332f7a75; S=0x332f7a09; @dynamic
@property(readonly, assign, nonatomic) BRTableView *table;	// G=0x332f83b1; @synthesize=_table
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x332f83f1; @synthesize=_titleControl
- (id)init;	// 0x332f73cd
- (id)accessibilityLabel;	// 0x332f8309
// declared property getter: - (id)bottomShelf;	// 0x332f83e1
- (BOOL)brEventAction:(id)action;	// 0x332f7ae9
// declared property getter: - (id)centerShelf;	// 0x332f83c1
- (void)dealloc;	// 0x332f7651
// declared property getter: - (int)displayMode;	// 0x332f8391
// declared property getter: - (id)divider;	// 0x332f83d1
- (void)layoutSubcontrols;	// 0x332f7c15
// declared property getter: - (id)mainImageProxy;	// 0x332f7785
// declared property getter: - (int)mainImageStyle;	// 0x332f8371
// declared property getter: - (id)mainImageText;	// 0x332f79d1
// declared property getter: - (float)metadataWidth;	// 0x332f7aad
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x332f7855
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x332f77bd
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x332f83a1
// declared property setter: - (void)setDivider:(id)divider;	// 0x332f78dd
// declared property setter: - (void)setMainImageProxy:(id)proxy;	// 0x332f7765
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x332f8381
// declared property setter: - (void)setMainImageText:(id)text;	// 0x332f7965
// declared property setter: - (void)setSummary:(id)summary;	// 0x332f7a09
// declared property getter: - (id)summary;	// 0x332f7a75
// declared property getter: - (id)table;	// 0x332f83b1
// declared property getter: - (id)titleControl;	// 0x332f83f1
@end

