/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransitionController.h"

@class UINavigationBar, UIView, UIViewController, MPVideoView;

@interface MPVideoTransferTransitionController : MPTransitionController {
	MPVideoView *_inflightVideoView;	// 52 = 0x34
	UINavigationBar *_portraitNavigationBar;	// 56 = 0x38
	BOOL _showOverlayAfterTransition;	// 60 = 0x3c
	UIView *_transitionBehindView;	// 64 = 0x40
	UIViewController *_inflightBackstopViewController;	// 68 = 0x44
	float _preTransitionWindowLevel;	// 72 = 0x48
}
@property(retain, nonatomic) UIViewController *inflightBackstopViewController;	// G=0x31d7a0d1; S=0x31d7a9fd; @synthesize=_inflightBackstopViewController
@property(retain, nonatomic) UINavigationBar *portraitNavigationBar;	// G=0x31d7a9bd; S=0x31d7a9cd; @synthesize=_portraitNavigationBar
@property(assign, nonatomic) BOOL showOverlayAfterTransition;	// G=0x31d7a9dd; S=0x31d7a9ed; @synthesize=_showOverlayAfterTransition
@property(retain, nonatomic) UIView *transitionBehindView;	// G=0x31d7aa0d; S=0x31d7aa1d; @synthesize=_transitionBehindView
- (id)init;	// 0x31d79b51
- (void)_animationDidStop;	// 0x31d79f29
- (void)_prepareViewsWithBeginAnimationTransactionBlock:(id)beginAnimationTransactionBlock;	// 0x31d7a105
- (void)_transformView:(id)view forOrientation:(int)orientation bounds:(CGRect)bounds;	// 0x31d7a6ed
- (void)_updateStatusBar;	// 0x31d7a8c5
- (void)dealloc;	// 0x31d79b99
// declared property getter: - (id)inflightBackstopViewController;	// 0x31d7a0d1
- (void)performTransition:(unsigned)transition;	// 0x31d79c25
// declared property getter: - (id)portraitNavigationBar;	// 0x31d7a9bd
// declared property setter: - (void)setInflightBackstopViewController:(id)controller;	// 0x31d7a9fd
// declared property setter: - (void)setPortraitNavigationBar:(id)bar;	// 0x31d7a9cd
// declared property setter: - (void)setShowOverlayAfterTransition:(BOOL)transition;	// 0x31d7a9ed
// declared property setter: - (void)setTransitionBehindView:(id)view;	// 0x31d7aa1d
// declared property getter: - (BOOL)showOverlayAfterTransition;	// 0x31d7a9dd
// declared property getter: - (id)transitionBehindView;	// 0x31d7aa0d
@end

