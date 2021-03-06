/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIButton, PKJob, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface UIPrintStatusTableViewController : UITableViewController {
@private
	PKJob *_printJob;	// 172 = 0xac
	UIButton *_cancelButton;	// 176 = 0xb0
	NSDateFormatter *_sentFormatter;	// 180 = 0xb4
}
- (id)initWithJob:(id)job;	// 0x30380b15
- (void)cancelPrinting;	// 0x3038108d
- (void)dealloc;	// 0x30380be9
- (void)loadView;	// 0x30380ed1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30381359
- (void)popToJobsView;	// 0x30381041
- (void)setupCancelButton;	// 0x30380cfd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30380c8d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30381441
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3038135d
- (void)updateCancelButton;	// 0x30380fdd
- (void)updateJobInfo;	// 0x303812b5
- (void)viewWillAppear:(BOOL)view;	// 0x3038114d
- (void)viewWillDisappear:(BOOL)view;	// 0x30381215
@end

