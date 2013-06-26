/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVControllerNode.h"
#import <UIViewController.h> // Unknown library
#import "MPControllerProtocol.h"

@class MPAVItem, UIView, NSTimer, MPAVController, MPTransitionController;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode> {
	id _delegate;	// 196 = 0xc4
	NSTimer *_idleTimerDisablerTimer;	// 200 = 0xc8
	int _interfaceOrientation;	// 204 = 0xcc
	MPAVItem *_item;	// 208 = 0xd0
	MPAVController *_player;	// 212 = 0xd4
	MPViewController *_pushedViewController;	// 216 = 0xd8
	MPTransitionController *_pushedTransitionController;	// 220 = 0xdc
	id _popViewControllerHandler;	// 224 = 0xe0
	unsigned _appearing : 1;	// 228 = 0xe4
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;	// 228 = 0xe4
	unsigned _showOverlayWhileAppearingDisabled : 1;	// 228 = 0xe4
	BOOL _registeredForPlayerNotifications;	// 229 = 0xe5
	int _playerLockedCount;	// 232 = 0xe8
}
@property(assign, getter=isAppearing) BOOL appearing;	// G=0x31ce738d; S=0x31ce79ed; converted property
@property(assign, nonatomic) id delegate;	// G=0x31ce7d31; S=0x31ce7d21; 
@property(assign, nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled;	// G=0x31ce79d5; S=0x31ce7c5d; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x31ce80d1; S=0x31ce80e1; @synthesize=_item
@property(assign, nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;	// G=0x31ce73d9; S=0x31ce73ed; 
@property(assign, nonatomic) int orientation;	// G=0x31ce80f1; S=0x31ce7c7d; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVController *player;	// G=0x31ce80c1; S=0x31ce7b21; @synthesize=_player
@property(copy, nonatomic) id popViewControllerHandler;	// G=0x31ce7821; S=0x31ce8101; @synthesize=_popViewControllerHandler
@property(assign, nonatomic) BOOL registeredForPlayerNotifications;	// G=0x31ce8111; S=0x31ce7a35; @synthesize=_registeredForPlayerNotifications
@property(readonly, assign, nonatomic) UIView *view;
- (id)init;	// 0x31ce7059
- (BOOL)_canReloadView;	// 0x31ce800d
- (void)_popTransitionEnded:(id)ended;	// 0x31ce8011
- (void)_pushTransitionEnded:(id)ended;	// 0x31ce80a1
- (void)addChildViewController:(id)controller;	// 0x31ce7ea9
- (void)applicationDidResumeEventsOnly;	// 0x31ce73b9
- (void)applicationDidSuspendEventsOnly;	// 0x31ce73a9
- (void)applicationResumed;	// 0x31ce73c9
- (void)beginIgnoringChangeTypes:(unsigned)types;	// 0x31ce7205
- (void)beginTransitionOverlayHidding;	// 0x31ce72b1
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x31ce72a9
- (void)clearWeakReferencesToObject:(id)object;	// 0x31ce7cd1
- (id)copyOverlayViewForTransitionToItem:(id)item;	// 0x31ce72ad
- (void)dealloc;	// 0x31ce70c1
// declared property getter: - (id)delegate;	// 0x31ce7d31
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31ce72e1
- (int)displayableInterfaceOrientationForInterfaceOrientation:(int)interfaceOrientation;	// 0x31ce72e5
- (void)endIgnoringChangeTypes:(unsigned)types;	// 0x31ce72e9
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)transferedOverlayView;	// 0x31ce72c9
// declared property getter: - (BOOL)idleTimerDisabled;	// 0x31ce79d5
- (void)incrementAggregateStatisticsDisplayCount;	// 0x31ce7ae9
// converted property getter: - (BOOL)isAppearing;	// 0x31ce738d
// declared property getter: - (id)item;	// 0x31ce80d1
- (void)lockPlayer;	// 0x31ce7a0d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x31ce7565
// declared property getter: - (BOOL)observesApplicationSuspendResumeEventsOnly;	// 0x31ce73d9
// declared property getter: - (int)orientation;	// 0x31ce80f1
// declared property getter: - (id)player;	// 0x31ce80c1
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x31ce7721
// declared property getter: - (id)popViewControllerHandler;	// 0x31ce7821
- (void)pushViewController:(id)controller withTransition:(id)transition;	// 0x31ce7569
- (void)registerForPlayerNotifications;	// 0x31ce7a85
// declared property getter: - (BOOL)registeredForPlayerNotifications;	// 0x31ce8111
- (void)removeChildViewController:(id)controller;	// 0x31ce7f59
// converted property setter: - (void)setAppearing:(BOOL)appearing;	// 0x31ce79ed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31ce7d21
// declared property setter: - (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x31ce7c5d
// declared property setter: - (void)setItem:(id)item;	// 0x31ce80e1
// declared property setter: - (void)setObservesApplicationSuspendResumeEventsOnly:(BOOL)only;	// 0x31ce73ed
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x31ce7c7d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x31ce7c91
// declared property setter: - (void)setPlayer:(id)player;	// 0x31ce7b21
// declared property setter: - (void)setPopViewControllerHandler:(id)handler;	// 0x31ce8101
// declared property setter: - (void)setRegisteredForPlayerNotifications:(BOOL)playerNotifications;	// 0x31ce7a35
- (void)setView:(id)view;	// 0x31ce7d41
- (void)startTicking;	// 0x31ce73a1
- (void)stopTicking;	// 0x31ce73a5
- (void)unlockPlayer;	// 0x31ce7a21
- (void)unregisterForPlayerNotifications;	// 0x31ce7abd
- (void)viewDidAppear:(BOOL)view;	// 0x31ce7da1
- (void)viewWillAppear:(BOOL)view;	// 0x31ce7e0d
- (void)viewWillDisappear:(BOOL)view;	// 0x31ce7e51
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31ce79d1
@end
