/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"

@class NSMutableArray, BRTextControl, BRHorizontalDividerControl, BRMetadataTitleControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMetadataControl : BRControl <BRMetadataContainer> {
	int _displayOption;	// 80 = 0x50
	BRMetadataTitleControl *_titleControl;	// 84 = 0x54
	BRHorizontalDividerControl *_topDivider;	// 88 = 0x58
	BRHorizontalDividerControl *_middleDivider;	// 92 = 0x5c
	BRTextControl *_summaryControl;	// 96 = 0x60
	NSMutableArray *_detailControls;	// 100 = 0x64
	int _currentDetailIndex;	// 104 = 0x68
}
@property(assign, nonatomic) int currentDetailIndex;	// G=0x29b889; S=0x29b899; @synthesize=_currentDetailIndex
@property(retain, nonatomic) NSMutableArray *detailControls;	// G=0x29b869; S=0x29b879; @synthesize=_detailControls
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x29b859; @synthesize=_titleControl
- (id)init;	// 0x29a771
- (id)_currentDetailControl;	// 0x29b7f1
- (id)_detailControlAtIndex:(int)index;	// 0x29b811
- (id)accessibilityLabel;	// 0x29b785
- (void)addDetailPage:(id)page;	// 0x29b06d
- (void)addDetailStrings:(id)strings withLabel:(id)label;	// 0x29ad95
// declared property getter: - (int)currentDetailIndex;	// 0x29b889
- (void)dealloc;	// 0x29a905
// declared property getter: - (id)detailControls;	// 0x29b869
- (void)layoutSubcontrols;	// 0x29b0d5
- (float)renderedHeightForWidth:(float)width;	// 0x29b56d
// declared property setter: - (void)setCurrentDetailIndex:(int)index;	// 0x29b899
// declared property setter: - (void)setDetailControls:(id)controls;	// 0x29b879
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x29b025
- (void)setRating:(id)rating;	// 0x29a9e5
- (void)setSummary:(id)summary;	// 0x29aa05
- (void)setTitle:(id)title;	// 0x29a9a5
- (void)setTitleSubtext:(id)subtext;	// 0x29a9c5
- (void)setTopRightImage:(id)image;	// 0x29abcd
// declared property getter: - (id)titleControl;	// 0x29b859
- (void)toggleSummaryMetadataView;	// 0x29abed
@end

