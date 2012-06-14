/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCatalogApplianceController.h"
#import "BRTabControlDelegate.h"

@class NSTimer, BRControl, BRTabControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabbedPageController : ATVCatalogApplianceController <BRTabControlDelegate> {
	BRControl *_contentControl;	// 136 = 0x88
	BRTabControl *_tabControl;	// 140 = 0x8c
	NSTimer *_activeTabSelectionChangedTimer;	// 144 = 0x90
	BOOL _showingWaitContent;	// 148 = 0x94
	BOOL _initialTabContentLoaded;	// 149 = 0x95
	BOOL _transitionInhibited;	// 150 = 0x96
}
- (id)initWithContentControl:(id)contentControl tabControl:(id)control;	// 0x1db261
- (void)_delayedTabSelectionTimerFired:(id)fired;	// 0x1db4e9
- (id)_preferredTabSegmentInTab;	// 0x1db8ad
- (id)_scrollPlane;	// 0x1db7dd
- (id)_tabDictionary;	// 0x1db815
- (id)_tabName;	// 0x1db875
- (void)dealloc;	// 0x1db485
- (id)errorContent;	// 0x1db785
- (BOOL)shouldAllowTransitionOnSwap;	// 0x1db7c5
- (BOOL)shouldShowWaitContent;	// 0x1db76d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x1db671
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x1db721
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x1db725
- (id)waitContent;	// 0x1db729
- (float)waitContentDelay;	// 0x1db769
- (void)willEnterCompleteState;	// 0x1db7b1
@end

