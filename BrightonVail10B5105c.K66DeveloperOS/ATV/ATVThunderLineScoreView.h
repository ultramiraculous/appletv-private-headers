/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary, BRTableView, BRTextControl, BRImageControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVThunderLineScoreView : BRControl {
	NSDictionary *_data;	// 84 = 0x54
	BRTextControl *_homeTeamName;	// 88 = 0x58
	BRTextControl *_awayTeamName;	// 92 = 0x5c
	BRTextControl *_homeTeamScore;	// 96 = 0x60
	BRTextControl *_awayTeamScore;	// 100 = 0x64
	BRAsyncImageControl *_homeTeamLogo;	// 104 = 0x68
	BRAsyncImageControl *_awayTeamLogo;	// 108 = 0x6c
	BRTextControl *_gamePeriod;	// 112 = 0x70
	BRTextControl *_gameTime;	// 116 = 0x74
	BRTextControl *_gameState;	// 120 = 0x78
	BRImageControl *_lineScoreBG;	// 124 = 0x7c
	BRTableView *_lineScoreTable;	// 128 = 0x80
}
- (id)initWithDictionary:(id)dictionary;	// 0x25d245
- (id)_gamePeriodAttributes;	// 0x25e575
- (id)_gameStateAttributes;	// 0x25e5bd
- (id)_gameTimeAttributes;	// 0x25e599
- (id)_scoreAttributes;	// 0x25e551
- (id)_tableCellAttributes;	// 0x25e605
- (id)_tableHeaderAttributes;	// 0x25e5e1
- (id)_teamNameAttributes;	// 0x25e52d
- (id)accessibilityLabel;	// 0x25e44d
- (void)dealloc;	// 0x25d849
- (float)headerHeightForTableView:(id)tableView;	// 0x25e441
- (void)layoutSubcontrols;	// 0x25d98d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x25e05d
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x25e061
- (long)numberOfRowsInTableView:(id)tableView;	// 0x25e059
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x25d975
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x25e219
- (float)tableView:(id)view heightForRow:(long)row;	// 0x25e435
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x25e065
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x25e3dd
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x25e425
@end

