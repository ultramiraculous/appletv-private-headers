/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCatalogApplianceController.h"
#import "BRTabControlDelegate.h"

@class BRControl, NSTimer, BRTabControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreTabbedPageController : ATVCatalogApplianceController <BRTabControlDelegate> {
@private
	BRControl *_contentControl;	// 124 = 0x7c
	BRTabControl *_tabControl;	// 128 = 0x80
	NSTimer *_activeTabSelectionChangedTimer;	// 132 = 0x84
	BOOL _showingWaitContent;	// 136 = 0x88
	BOOL _initialTabContentLoaded;	// 137 = 0x89
	BOOL _transitionInhibited;	// 138 = 0x8a
}
- (id)initWithContentControl:(id)contentControl tabControl:(id)control;	// 0x3398d0b1
- (void)_delayedTabSelectionTimerFired:(id)fired;	// 0x3398d355
- (id)_preferredTabSegmentInTab;	// 0x3398d70d
- (id)_scrollPlane;	// 0x3398d63d
- (id)_tabDictionary;	// 0x3398d675
- (id)_tabName;	// 0x3398d6d5
- (void)dealloc;	// 0x3398d2f5
- (id)errorContent;	// 0x3398d5e5
- (BOOL)shouldAllowTransitionOnSwap;	// 0x3398d625
- (BOOL)shouldShowWaitContent;	// 0x3398d5cd
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x3398d4d5
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x3398d581
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x3398d585
- (id)waitContent;	// 0x3398d589
- (float)waitContentDelay;	// 0x3398d5c9
- (void)willEnterCompleteState;	// 0x3398d611
@end

