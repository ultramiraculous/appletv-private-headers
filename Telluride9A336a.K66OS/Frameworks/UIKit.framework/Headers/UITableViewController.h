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

@class UITableView, UITableViewDataSource;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	int _tableViewStyle;	// 156 = 0x9c
	id _keyboardSupport;	// 160 = 0xa0
	id _staticDataSource;	// 164 = 0xa4
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _tableViewControllerFlags;	// 168 = 0xa8
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// G=0x35332a5d; S=0x35332a71; 
@property(retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;	// G=0x35332c69; S=0x35332ca1; 
@property(retain, nonatomic) UITableView *tableView;	// G=0x351630a5; S=0x35332985; 
- (id)init;	// 0x35250f49
- (id)initWithCoder:(id)coder;	// 0x3533281d
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x35162f8d
- (id)initWithStyle:(int)style;	// 0x35162f39
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x3523eec5
- (id)_existingTableView;	// 0x351ff089
// declared property setter: - (void)_setStaticDataSource:(id)source;	// 0x35332ca1
// declared property getter: - (id)_staticDataSource;	// 0x35332c69
// declared property getter: - (BOOL)clearsSelectionOnViewWillAppear;	// 0x35332a5d
- (void)dealloc;	// 0x351fefa9
- (void)encodeWithCoder:(id)coder;	// 0x353328f1
- (void)loadView;	// 0x351630f9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x35213141
- (BOOL)respondsToSelector:(SEL)selector;	// 0x351633f9
// declared property setter: - (void)setClearsSelectionOnViewWillAppear:(BOOL)appear;	// 0x35332a71
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x351fd3cd
// declared property setter: - (void)setTableView:(id)view;	// 0x35332985
// declared property getter: - (id)tableView;	// 0x351630a5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x35332ac1
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x35332c55
- (float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x35332b99
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x35332b61
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x35332bd1
- (int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;	// 0x35332c15
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35332a95
- (id)tableView:(id)view titleForFooterInSection:(int)section;	// 0x35332b01
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x35332ae1
- (id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x35332b41
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x35332b21
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x35332c41
- (void)viewDidAppear:(BOOL)view;	// 0x351fd495
- (void)viewWillAppear:(BOOL)view;	// 0x351fd08d
- (void)viewWillDisappear:(BOOL)view;	// 0x351fedf9
@end

