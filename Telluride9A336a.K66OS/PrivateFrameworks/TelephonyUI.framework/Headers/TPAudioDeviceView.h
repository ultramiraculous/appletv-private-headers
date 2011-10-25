/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h> // Unknown library
#import "TelephonyUI-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UITableView;

@interface TPAudioDeviceView : UIView <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_deviceTableView;	// 48 = 0x30
	UIView *_topBGView;	// 52 = 0x34
	UIView *_bottomBGView;	// 56 = 0x38
	UIView *_buttonView;	// 60 = 0x3c
	UIView *_tableView;	// 64 = 0x40
	UIView *_subbedView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	BOOL _subbedOutTable;	// 76 = 0x4c
}
- (id)_activeImage;	// 0x3171f40d
- (CGRect)_frameForNumButtons:(int)numButtons;	// 0x3171f229
- (CGRect)_frameForTable;	// 0x3171f199
- (id)_muteButtonForFrame:(CGRect)frame;	// 0x3171eeb9
- (id)_muteImage;	// 0x3171f3b1
- (id)_selectedImage;	// 0x3171f4e5
- (void)_setupButtons;	// 0x3171eadd
- (void)_setupSurroundingTableViews;	// 0x3171e1f5
- (void)_setupTable;	// 0x3171e415
- (id)_tableFooterImage;	// 0x3171f2f9
- (id)_tableHeaderImage;	// 0x3171f355
- (void)_takedownButtons;	// 0x3171da91
- (void)_takedownTable;	// 0x3171dc0d
- (id)_unselectedImage;	// 0x3171f469
- (void)buttonPressed:(id)pressed;	// 0x3171dad1
- (void)dealloc;	// 0x3171e119
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3171f561
- (void)muteButtonPressed:(id)pressed;	// 0x3171db25
- (void)reloadData;	// 0x3171df69
- (void)selectRow:(int)row;	// 0x3171e031
- (void)setActiveRow:(int)row;	// 0x3171de21
- (void)setDelegate:(id)delegate;	// 0x3171da81
- (void)showTable;	// 0x3171dba5
- (void)suboutTable;	// 0x3171e9e1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3171dc6d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3171dd75
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3171dc4d
@end

