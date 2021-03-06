/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIViewController.h> // Unknown library
#import "SpringBoardUI-Structs.h"
#import "NSCopying.h"

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {
	BOOL _shouldAnimateIn;	// 193 = 0xc1
	NSNumber *_animationStartTime;	// 196 = 0xc4
	NSString *_activationContext;	// 200 = 0xc8
	NSInvocation *_pendingDeactivationInvocation;	// 204 = 0xcc
}
@property(retain, nonatomic) NSString *activationContext;	// G=0x36393b51; S=0x36393b61; @synthesize=_activationContext
@property(retain, nonatomic) NSNumber *animationStartTime;	// G=0x36393b31; S=0x36393b41; @synthesize=_animationStartTime
@property(retain) NSInvocation *pendingDeactivationInvocation;	// G=0x36393b01; S=0x36393ac1; converted property
@property(assign, nonatomic) BOOL shouldAnimateIn;	// G=0x36393b11; S=0x36393b21; @synthesize=_shouldAnimateIn
- (id)init;	// 0x36393659
// declared property getter: - (id)activationContext;	// 0x36393b51
- (BOOL)allowStackingOfAlert:(id)alert;	// 0x36393a61
- (BOOL)allowSuspension;	// 0x36393765
- (void)animateViewOut;	// 0x3639392d
// declared property getter: - (id)animationStartTime;	// 0x36393b31
- (id)copyWithZone:(NSZone *)zone;	// 0x36393a49
- (void)dealloc;	// 0x363939d1
- (void)didFinishLaunchingFrontmost;	// 0x36393a7d
- (void)didReceiveMemoryWarning;	// 0x36393979
- (BOOL)displaysAboveStatusBar;	// 0x36393769
- (void)finishedAnimatingIn;	// 0x36393971
- (void)finishedAnimatingOut;	// 0x36393975
- (void)handleAutoLock;	// 0x36393a79
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;	// 0x36393a75
- (BOOL)handleLockButtonPressed;	// 0x36393a65
- (BOOL)handleMenuButtonTap;	// 0x36393a71
- (BOOL)handleVolumeDownButtonPressed;	// 0x36393a6d
- (BOOL)handleVolumeUpButtonPressed;	// 0x36393a69
- (BOOL)hasTranslucentBackground;	// 0x36393a5d
- (BOOL)isSlidingViewController;	// 0x36393761
// converted property getter: - (id)pendingDeactivationInvocation;	// 0x36393b01
- (void)requestActivationAnimated:(BOOL)animated animateCurrentDisplayOut:(BOOL)anOut withDelay:(BOOL)delay;	// 0x363936b1
- (void)requestDeactivationAnimated:(BOOL)animated animateOldDisplayInWithStyle:(int)style;	// 0x36393709
// declared property setter: - (void)setActivationContext:(id)context;	// 0x36393b61
// declared property setter: - (void)setAnimationStartTime:(id)time;	// 0x36393b41
// converted property setter: - (void)setPendingDeactivationInvocation:(id)invocation;	// 0x36393ac1
// declared property setter: - (void)setShouldAnimateIn:(BOOL)animateIn;	// 0x36393b21
// declared property getter: - (BOOL)shouldAnimateIn;	// 0x36393b11
- (void)viewDidLoad;	// 0x36393771
- (void)viewDidUnload;	// 0x363939a5
- (BOOL)viewIsReadyToBeRemoved;	// 0x36393a59
- (void)viewWillAnimateOut;	// 0x3639376d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x36393899
@end

