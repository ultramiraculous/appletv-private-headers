/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintPanelViewController, UIButton;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController {
	UIPrintPanelViewController *_printPanelViewController;	// 212 = 0xd4
	UIButton *_printButton;	// 216 = 0xd8
	int _rangeRow;	// 220 = 0xdc
	int _copiesRow;	// 224 = 0xe0
	int _duplexRow;	// 228 = 0xe4
	int _paperRow;	// 232 = 0xe8
	BOOL _contactingPrinter;	// 236 = 0xec
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x32ffa3b5
- (void)_setupPrintButtons;	// 0x32ffb779
- (void)_update:(BOOL)update;	// 0x32ffb8fd
- (void)_updateSize;	// 0x32ffba21
- (void)clearPrintPanelViewController;	// 0x32ffa83d
- (void)dealloc;	// 0x32ffa43d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x32ffaa51
- (void)setShowContactingPrinter:(BOOL)printer;	// 0x32ffa6c9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32ffaa0d
- (void)showCancelButton;	// 0x32ffa4a9
- (void)showContacting;	// 0x32ffa539
- (unsigned)supportedInterfaceOrientations;	// 0x32ffaa31
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x32ffab31
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x32ffb675
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x32ffaa55
- (void)updateCopies:(id)copies;	// 0x32ffb55d
- (void)updateDuplex:(id)duplex;	// 0x32ffb639
- (void)updatePageRange:(NSRange)range;	// 0x32ffb511
- (void)viewDidDisappear:(BOOL)view;	// 0x32ffa9a5
- (void)viewDidLoad;	// 0x32ffa851
- (void)viewDidUnload;	// 0x32ffa8dd
- (void)viewWillAppear:(BOOL)view;	// 0x32ffa92d
@end
