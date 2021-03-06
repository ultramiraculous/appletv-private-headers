/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRCyclerDataSource.h"

@class BRCyclerControl, NSMutableArray, NSString, BRMerchant, BRDividerControl, ATVFeedUniformTextTableViewController, ATVFeedTextTableDataSet, NSArray, BRImage, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVChicagoGamePreviewControl : BRControl <BRCyclerDataSource> {
@private
	BRDividerControl *_topDivider;	// 48 = 0x30
	BRDividerControl *_bottomDivider;	// 52 = 0x34
	NSMutableArray *_bannerControls;	// 56 = 0x38
	BRTableView *_summaryTable;	// 60 = 0x3c
	ATVFeedUniformTextTableViewController *_tableViewController;	// 64 = 0x40
	BRCyclerControl *_cycler;	// 68 = 0x44
	CGRect _scoreboardBackgroundImageFrame;	// 72 = 0x48
	BRMerchant *_merchant;	// 88 = 0x58
	NSArray *_bannerItems;	// 92 = 0x5c
	NSString *_text;	// 96 = 0x60
	NSString *_rightJustifiedText;	// 100 = 0x64
	NSString *_topTableLabel;	// 104 = 0x68
	NSString *_bottomTableLabel;	// 108 = 0x6c
	BRImage *_scoreboardBackgroundImage;	// 112 = 0x70
}
@property(copy, nonatomic) NSArray *bannerItems;	// G=0x303cd3f1; S=0x303ccb09; @synthesize=_bannerItems
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x303cd431; S=0x303cca4d; @synthesize=_bottomTableLabel
@property(retain) ATVFeedTextTableDataSet *dataSet;	// G=0x303ccaa1; S=0x303ccac1; 
@property(retain) BRMerchant *merchant;	// G=0x303cd3b9; S=0x303cd3cd; @synthesize=_merchant
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x303cd411; S=0x303cc9a5; @synthesize=_rightJustifiedText
@property(retain) BRImage *scoreboardBackgroundImage;	// G=0x303cd441; S=0x303cd455; @synthesize=_scoreboardBackgroundImage
@property(copy, nonatomic) NSString *text;	// G=0x303cd401; S=0x303cc951; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x303cd421; S=0x303cc9f9; @synthesize=_topTableLabel
- (id)init;	// 0x303cc469
- (id)accessibilityLabel;	// 0x303cd325
// declared property getter: - (id)bannerItems;	// 0x303cd3f1
// declared property getter: - (id)bottomTableLabel;	// 0x303cd431
- (void)controlWasActivated;	// 0x303cc905
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x303ccd55
// declared property getter: - (id)dataSet;	// 0x303ccaa1
- (void)dealloc;	// 0x303cc785
- (void)drawInContext:(CGContextRef)context;	// 0x303ccd75
- (void)layoutSubcontrols;	// 0x303cd159
// declared property getter: - (id)merchant;	// 0x303cd3b9
- (long)numberOfItemsInCycler:(id)cycler;	// 0x303ccd35
// declared property getter: - (id)rightJustifiedText;	// 0x303cd411
// declared property getter: - (id)scoreboardBackgroundImage;	// 0x303cd441
// declared property setter: - (void)setBannerItems:(id)items;	// 0x303ccb09
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x303cca4d
// declared property setter: - (void)setDataSet:(id)set;	// 0x303ccac1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x303cd3cd
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x303cc9a5
// declared property setter: - (void)setScoreboardBackgroundImage:(id)image;	// 0x303cd455
// declared property setter: - (void)setText:(id)text;	// 0x303cc951
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x303cc9f9
// declared property getter: - (id)text;	// 0x303cd401
// declared property getter: - (id)topTableLabel;	// 0x303cd421
@end

