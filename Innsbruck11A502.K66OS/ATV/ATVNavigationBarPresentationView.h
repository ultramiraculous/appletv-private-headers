/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewHosting.h"
#import "BRControl.h"

@class ATVNavigationBar, BRImageControl;
@protocol ATVNavigationBarPresentationViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVNavigationBarPresentationView : BRControl <BRViewHosting> {
	BRImageControl *_topPanelShadow;	// 84 = 0x54
	BRControl *_container;	// 88 = 0x58
	BRControl *_bottomFader;	// 92 = 0x5c
	BOOL _topPanelInPopUp;	// 96 = 0x60
	ATVNavigationBar *_navigationBar;	// 100 = 0x64
	id<ATVNavigationBarPresentationViewDelegate> _delegate;	// 104 = 0x68
}
@property(retain, nonatomic) BRControl *content;	// G=0xc654d; S=0xc63d5; 
@property(assign, nonatomic) id<ATVNavigationBarPresentationViewDelegate> delegate;	// G=0xc6bfd; S=0xc6c0d; @synthesize=_delegate
@property(retain, nonatomic) ATVNavigationBar *navigationBar;	// G=0xc6bdd; S=0xc6bed; @synthesize=_navigationBar
- (id)init;	// 0xc5f11
- (id)_bottomFadeFilters;	// 0xc6c1d
- (BOOL)_canShowTopPanelInPopUp;	// 0xc7075
- (BOOL)_currentContentHasHeader;	// 0xc723d
- (id)_findCursor:(id)cursor;	// 0xc6d31
- (void)_updateRepositioning;	// 0xc6e3d
- (BOOL)brEventAction:(id)action;	// 0xc67b5
// declared property getter: - (id)content;	// 0xc654d
- (void)dealloc;	// 0xc6339
// declared property getter: - (id)delegate;	// 0xc6bfd
- (void)focusDirectlyOnControl:(id)control;	// 0xc6a71
- (void)hostControl:(id)control;	// 0xc63c5
- (void)layoutSubcontrols;	// 0xc660d
// declared property getter: - (id)navigationBar;	// 0xc6bdd
// declared property setter: - (void)setContent:(id)content;	// 0xc63d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xc6c0d
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0xc6bed
- (void)updateBoundContentViewAvailibility;	// 0xc6585
- (void)updateViewLayout;	// 0xc6595
@end

