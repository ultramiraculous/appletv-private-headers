/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewHosting.h"
#import "BRControl.h"

@class BRImageControl, ATVNavigationBar;

__attribute__((visibility("hidden")))
@interface ATVNavigationBarPresentationView : BRControl <BRViewHosting> {
	BRImageControl *_topPanelShadow;	// 80 = 0x50
	BRControl *_container;	// 84 = 0x54
	BRControl *_bottomFader;	// 88 = 0x58
	BOOL _topPanelInPopUp;	// 92 = 0x5c
	ATVNavigationBar *_navigationBar;	// 96 = 0x60
}
@property(retain, nonatomic) BRControl *content;	// G=0xfee59; S=0xfecdd; 
@property(retain, nonatomic) ATVNavigationBar *navigationBar;	// G=0xff431; S=0xff441; @synthesize=_navigationBar
- (id)init;	// 0xfe829
- (id)_bottomFadeFilters;	// 0xff451
- (BOOL)_canShowTopPanelInPopUp;	// 0xff879
- (BOOL)_currentContentHasHeader;	// 0xffa3d
- (id)_findCursor:(id)cursor;	// 0xff565
- (void)_updateRepositioning;	// 0xff671
- (BOOL)brEventAction:(id)action;	// 0xff1a1
// declared property getter: - (id)content;	// 0xfee59
- (void)controlWasActivated;	// 0xfef19
- (void)controlWasDeactivated;	// 0xfef85
- (void)dealloc;	// 0xfec41
- (void)hostControl:(id)control;	// 0xfeccd
- (void)layoutSubcontrols;	// 0xfefed
// declared property getter: - (id)navigationBar;	// 0xff431
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0xff40d
// declared property setter: - (void)setContent:(id)content;	// 0xfecdd
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0xff441
- (void)updateBoundContentViewAvailibility;	// 0xfee91
- (void)updateViewLayout;	// 0xfeea1
@end

