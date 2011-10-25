/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDividerControl, BRCyclerControl, NSString, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreview : BRControl {
@private
	BRDividerControl *_topDivider;	// 48 = 0x30
	BRDividerControl *_bottomDivider;	// 52 = 0x34
	BRCyclerControl *_cycler;	// 56 = 0x38
	NSString *_text;	// 60 = 0x3c
	NSString *_rightJustifiedText;	// 64 = 0x40
	NSString *_topTableLabel;	// 68 = 0x44
	NSString *_bottomTableLabel;	// 72 = 0x48
	BRCyclerControl *_inningsCycler;	// 76 = 0x4c
	BRTableView *_summaryTable;	// 80 = 0x50
}
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x33a04291; S=0x33a042a1; @synthesize=_bottomTableLabel
@property(readonly, assign, nonatomic) BRCyclerControl *cycler;	// G=0x33a041e5; @synthesize=_cycler
@property(readonly, assign, nonatomic) BRCyclerControl *inningsCycler;	// G=0x33a042c5; @synthesize=_inningsCycler
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x33a04229; S=0x33a04239; @synthesize=_rightJustifiedText
@property(readonly, assign, nonatomic) BRTableView *summaryTable;	// G=0x33a042d5; @synthesize=_summaryTable
@property(copy, nonatomic) NSString *text;	// G=0x33a041f5; S=0x33a04205; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x33a0425d; S=0x33a0426d; @synthesize=_topTableLabel
- (id)init;	// 0x33a037c1
- (id)accessibilityLabel;	// 0x33a04111
// declared property getter: - (id)bottomTableLabel;	// 0x33a04291
- (void)controlWasActivated;	// 0x33a03ad5
// declared property getter: - (id)cycler;	// 0x33a041e5
- (void)dealloc;	// 0x33a039e9
- (void)drawInContext:(CGContextRef)context;	// 0x33a03b35
// declared property getter: - (id)inningsCycler;	// 0x33a042c5
- (void)layoutSubcontrols;	// 0x33a04009
// declared property getter: - (id)rightJustifiedText;	// 0x33a04229
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x33a042a1
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x33a04239
// declared property setter: - (void)setText:(id)text;	// 0x33a04205
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x33a0426d
// declared property getter: - (id)summaryTable;	// 0x33a042d5
// declared property getter: - (id)text;	// 0x33a041f5
// declared property getter: - (id)topTableLabel;	// 0x33a0425d
@end

