/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCatalogApplianceController.h"
#import "BRTabControlDelegate.h"

@class BRTabControl, BRControl, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabbedPageController : ATVCatalogApplianceController <BRTabControlDelegate> {
	BRControl *_contentControl;	// 140 = 0x8c
	BRTabControl *_tabControl;	// 144 = 0x90
	NSTimer *_activeTabSelectionChangedTimer;	// 148 = 0x94
	BOOL _showingWaitContent;	// 152 = 0x98
	BOOL _initialTabContentLoaded;	// 153 = 0x99
	BOOL _transitionInhibited;	// 154 = 0x9a
}
- (id)initWithContentControl:(id)contentControl tabControl:(id)control;	// 0x219c21
- (void)_delayedTabSelectionTimerFired:(id)fired;	// 0x219eb9
- (id)_preferredTabSegmentInTab;	// 0x21a295
- (id)_scrollPlane;	// 0x21a1c5
- (id)_tabDictionary;	// 0x21a1fd
- (id)_tabName;	// 0x21a25d
- (void)dealloc;	// 0x219e55
- (id)errorContent;	// 0x21a16d
- (BOOL)shouldAllowTransitionOnSwap;	// 0x21a1ad
- (BOOL)shouldShowWaitContent;	// 0x21a155
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x21a059
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x21a109
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x21a10d
- (id)waitContent;	// 0x21a111
- (float)waitContentDelay;	// 0x21a151
- (void)willEnterCompleteState;	// 0x21a199
@end

