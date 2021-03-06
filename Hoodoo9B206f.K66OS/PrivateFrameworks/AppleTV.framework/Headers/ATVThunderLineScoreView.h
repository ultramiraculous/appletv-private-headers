/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl, BRAsyncImageControl, NSDictionary, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVThunderLineScoreView : BRControl {
@private
	NSDictionary *_data;	// 48 = 0x30
	BRTextControl *_homeTeamName;	// 52 = 0x34
	BRTextControl *_awayTeamName;	// 56 = 0x38
	BRTextControl *_homeTeamScore;	// 60 = 0x3c
	BRTextControl *_awayTeamScore;	// 64 = 0x40
	BRAsyncImageControl *_homeTeamLogo;	// 68 = 0x44
	BRAsyncImageControl *_awayTeamLogo;	// 72 = 0x48
	BRTextControl *_gamePeriod;	// 76 = 0x4c
	BRTextControl *_gameTime;	// 80 = 0x50
	BRTextControl *_gameState;	// 84 = 0x54
	BRImageControl *_lineScoreBG;	// 88 = 0x58
	BRTableView *_lineScoreTable;	// 92 = 0x5c
}
- (id)initWithDictionary:(id)dictionary;	// 0x365f19e5
- (id)_gamePeriodAttributes;	// 0x365f300d
- (id)_gameStateAttributes;	// 0x365f3055
- (id)_gameTimeAttributes;	// 0x365f3031
- (id)_scoreAttributes;	// 0x365f2fe9
- (id)_tableCellAttributes;	// 0x365f309d
- (id)_tableHeaderAttributes;	// 0x365f3079
- (id)_teamNameAttributes;	// 0x365f2fc5
- (id)accessibilityLabel;	// 0x365f2ed5
- (void)dealloc;	// 0x365f215d
- (float)headerHeightForTableView:(id)tableView;	// 0x365f2ec9
- (void)layoutSubcontrols;	// 0x365f229d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x365f2a69
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x365f2a6d
- (long)numberOfRowsInTableView:(id)tableView;	// 0x365f2a65
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x365f2285
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x365f2c2d
- (float)tableView:(id)view heightForRow:(long)row;	// 0x365f2ebd
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x365f2a71
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x365f2e61
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x365f2ead
@end

