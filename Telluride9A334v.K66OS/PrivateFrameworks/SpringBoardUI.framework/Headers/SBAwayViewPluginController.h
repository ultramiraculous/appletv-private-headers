/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library

@class UIView;

@interface SBAwayViewPluginController : NSObject {
@private
	UIView *_view;	// 4 = 0x4
	BOOL _viewCanBeDisplayed;	// 8 = 0x8
	BOOL _fullscreen;	// 9 = 0x9
	BOOL _alwaysFullscreen;	// 10 = 0xa
	int _orientation;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isAlwaysFullscreen) BOOL alwaysFullscreen;	// G=0x34323c2d; 
@property(readonly, assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x34323ca1; @synthesize=_fullscreen
@property(assign, nonatomic) int orientation;	// G=0x34323c81; S=0x34323c91; @synthesize=_orientation
@property(retain, nonatomic) UIView *view;	// G=0x343240d1; S=0x34324089; 
@property(assign, nonatomic) BOOL viewCanBeDisplayed;	// G=0x34323cb1; S=0x34323fe9; @synthesize=_viewCanBeDisplayed
+ (void)disableBundleNamed:(id)named;	// 0x34323d45
+ (void)enableBundleNamed:(id)named;	// 0x34323d91
- (id)init;	// 0x34323cc1
- (void)alwaysFullscreenValueHasChanged;	// 0x34323c41
- (BOOL)animateResumingToApplicationWithIdentifier:(id)identifier;	// 0x34323c55
- (BOOL)canBeAlwaysFullscreen;	// 0x34323c3d
- (BOOL)canScreenDim;	// 0x34323c61
- (void)dealloc;	// 0x34324101
- (void)deviceLockViewDidHide;	// 0x34323c49
- (void)deviceLockViewWillShow;	// 0x34323c45
- (void)disable;	// 0x34323fa5
- (BOOL)handleGesture:(int)gesture fingerCount:(unsigned)count;	// 0x34323c75
- (BOOL)handleMenuButtonDoubleTap;	// 0x34323c69
- (BOOL)handleMenuButtonHeld;	// 0x34323c71
- (BOOL)handleMenuButtonTap;	// 0x34323c65
// declared property getter: - (BOOL)isAlwaysFullscreen;	// 0x34323c2d
// declared property getter: - (BOOL)isFullscreen;	// 0x34323ca1
- (void)loadView;	// 0x34323bf5
// declared property getter: - (int)orientation;	// 0x34323c81
- (int)pluginPriority;	// 0x34323c51
- (void)purgeView;	// 0x34324045
- (BOOL)retainsPriorityWhileInactive;	// 0x34323c4d
- (void)setAlwaysFullscreen:(BOOL)fullscreen;	// 0x34323ddd
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x34323f61
- (void)setFullscreen:(BOOL)fullscreen duration:(double)duration;	// 0x34323e29
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x34323c91
// declared property setter: - (void)setView:(id)view;	// 0x34324089
// declared property setter: - (void)setViewCanBeDisplayed:(BOOL)displayed;	// 0x34323fe9
- (BOOL)shouldDisableOnRelock;	// 0x34323c0d
- (BOOL)shouldDisableOnUnlock;	// 0x34323c11
- (BOOL)shouldShowLockStatusBarTime;	// 0x34323c15
- (BOOL)showAwayItems;	// 0x34323c59
- (BOOL)showDateView;	// 0x34323c5d
// declared property getter: - (id)view;	// 0x343240d1
// declared property getter: - (BOOL)viewCanBeDisplayed;	// 0x34323cb1
- (void)viewDidAppear:(BOOL)view;	// 0x34323bfd
- (void)viewDidDisappear:(BOOL)view;	// 0x34323c05
- (double)viewFadeInDuration;	// 0x34323c19
- (BOOL)viewWantsFullscreenLayout;	// 0x34323c09
- (void)viewWillAppear:(BOOL)view;	// 0x34323bf9
- (void)viewWillDisappear:(BOOL)view;	// 0x34323c01
- (BOOL)wantsAutomaticFullscreenTimer;	// 0x34323c79
- (BOOL)wantsMenuButtonHeldEvent;	// 0x34323c6d
- (BOOL)wantsSwipeGestureRecognizer;	// 0x34323c7d
@end

