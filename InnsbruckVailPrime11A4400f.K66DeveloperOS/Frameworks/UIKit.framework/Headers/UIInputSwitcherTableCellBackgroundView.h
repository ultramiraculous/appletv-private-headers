/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UITableViewCell, UITableView, UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellBackgroundView : UIView {
	UITableView *_tableView;	// 96 = 0x60
	UITableViewCell *_cell;	// 100 = 0x64
	UIKeyboardMenuView *_menu;	// 104 = 0x68
}
@property(assign, nonatomic) UITableViewCell *cell;	// G=0x2f86a071; S=0x2f86a081; @synthesize=_cell
@property(assign, nonatomic) UIKeyboardMenuView *menu;	// G=0x2f86a091; S=0x2f86a0a1; @synthesize=_menu
@property(assign, nonatomic) UITableView *tableView;	// G=0x2f86a051; S=0x2f86a061; @synthesize=_tableView
- (id)initWithTableView:(id)tableView cell:(id)cell;	// 0x2f869861
// declared property getter: - (id)cell;	// 0x2f86a071
- (void)drawRect:(CGRect)rect;	// 0x2f8698e1
// declared property getter: - (id)menu;	// 0x2f86a091
// declared property setter: - (void)setCell:(id)cell;	// 0x2f86a081
// declared property setter: - (void)setMenu:(id)menu;	// 0x2f86a0a1
// declared property setter: - (void)setTableView:(id)view;	// 0x2f86a061
// declared property getter: - (id)tableView;	// 0x2f86a051
@end

