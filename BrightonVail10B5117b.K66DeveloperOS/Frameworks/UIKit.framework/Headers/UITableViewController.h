/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIViewController.h"

@class UIRefreshControl, UITableViewDataSource, UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	int _tableViewStyle;	// 196 = 0xc4
	id _keyboardSupport;	// 200 = 0xc8
	id _staticDataSource;	// 204 = 0xcc
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _tableViewControllerFlags;	// 208 = 0xd0
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// G=0x32f19cd1; S=0x32f19ce5; 
@property(retain, nonatomic) UIRefreshControl *refreshControl;	// G=0x32f19d31; S=0x32f19d05; 
@property(retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;	// G=0x32f19ef5; S=0x32f19f2d; 
@property(retain, nonatomic) UITableView *tableView;	// G=0x32d4bab9; S=0x32f19ba9; 
- (id)init;	// 0x32d6b449
- (id)initWithCoder:(id)coder;	// 0x32f19a45
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x32d48611
- (id)initWithStyle:(int)style;	// 0x32d485bd
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x32e05659
- (id)_existingTableView;	// 0x32de5459
// declared property setter: - (void)_setStaticDataSource:(id)source;	// 0x32f19f2d
// declared property getter: - (id)_staticDataSource;	// 0x32f19ef5
// declared property getter: - (BOOL)clearsSelectionOnViewWillAppear;	// 0x32f19cd1
- (void)dealloc;	// 0x32de5355
- (void)encodeWithCoder:(id)coder;	// 0x32f19b19
- (void)loadView;	// 0x32d4bb0d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x32de639d
// declared property getter: - (id)refreshControl;	// 0x32f19d31
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32d4c591
// declared property setter: - (void)setClearsSelectionOnViewWillAppear:(BOOL)appear;	// 0x32f19ce5
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x32d4b9b5
// declared property setter: - (void)setRefreshControl:(id)control;	// 0x32f19d05
// declared property setter: - (void)setTableView:(id)view;	// 0x32f19ba9
// declared property getter: - (id)tableView;	// 0x32d4bab9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32f19d81
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x32f19ee1
- (float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x32f19e49
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x32f19e21
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x32f19e71
- (int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;	// 0x32f19ea5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x32f19d59
- (id)tableView:(id)view titleForFooterInSection:(int)section;	// 0x32f19dc1
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x32f19da1
- (id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x32f19e01
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x32f19de1
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x32f19ecd
- (void)viewDidAppear:(BOOL)view;	// 0x32d56af5
- (void)viewWillAppear:(BOOL)view;	// 0x32d55aa5
- (void)viewWillDisappear:(BOOL)view;	// 0x32d56b69
@end

