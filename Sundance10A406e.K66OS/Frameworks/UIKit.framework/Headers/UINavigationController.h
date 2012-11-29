/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UINavigationTransitionView, NSArray, UIView, UINavigationBar, UIToolbar;
@protocol UINavigationControllerDelegate;

@interface UINavigationController : UIViewController {
	UIView *_containerView;	// 196 = 0xc4
	UINavigationBar *_navigationBar;	// 200 = 0xc8
	Class _navigationBarClass;	// 204 = 0xcc
	UIToolbar *_toolbar;	// 208 = 0xd0
	UIView *_navigationTransitionView;	// 212 = 0xd4
	UIEdgeInsets _currentScrollContentInsetDelta;	// 216 = 0xd8
	UIEdgeInsets _previousScrollContentInsetDelta;	// 232 = 0xe8
	float _previousScrollContentOffsetDelta;	// 248 = 0xf8
	float _bottomInsetDelta;	// 252 = 0xfc
	UIViewController *_disappearingViewController;	// 256 = 0x100
	id<UINavigationControllerDelegate> _delegate;	// 260 = 0x104
	int _savedNavBarStyleBeforeSheet;	// 264 = 0x108
	int _savedToolBarStyleBeforeSheet;	// 268 = 0x10c
	struct {
		unsigned isAppearingAnimated : 1;
		unsigned isAlreadyPoppingNavigationItem : 1;
		unsigned isNavigationBarHidden : 1;
		unsigned isToolbarShown : 1;
		unsigned needsDeferredTransition : 1;
		unsigned isTransitioning : 1;
		unsigned lastOperation : 4;
		unsigned lastOperationAnimated : 1;
		unsigned deferredTransition : 8;
		unsigned didPreloadKeyboardAnimation : 1;
		unsigned didHideBottomBar : 1;
		unsigned isChangingOrientationForPop : 1;
		unsigned pretendNavBarHidden : 1;
		unsigned avoidMovingNavBarOffscreenBeforeUnhiding : 1;
		unsigned searchBarHidNavBar : 1;
		unsigned useSystemPopoverBarAppearance : 1;
		unsigned isCustomTransition : 1;
	} _navigationControllerFlags;	// 272 = 0x110
	Class _toolbarClass;	// 276 = 0x114
	float _customNavigationTransitionDuration;	// 280 = 0x118
	BOOL _interactiveTransition;	// 284 = 0x11c
}
@property(assign, nonatomic, setter=_setToolbarClass:) Class _toolbarClass;	// G=0x30abfccd; S=0x30abcb1d; @synthesize
@property(assign, nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;	// G=0x30abd7f1; S=0x30abd805; 
@property(readonly, assign, nonatomic) UIViewController *bottomViewController;	// G=0x30943521; 
@property(assign) CGSize contentSizeForViewInPopover;	// G=0x30942a21; S=0x30a33241; converted property
@property(assign, nonatomic) float customNavigationTransitionDuration;	// G=0x30abfcdd; S=0x30abfced; @synthesize=_customNavigationTransitionDuration
@property(assign, nonatomic) id<UINavigationControllerDelegate> delegate;	// G=0x30922a05; S=0x3090d72d; @synthesize=_delegate
@property(retain) UIViewController *detailViewController;	// G=0x30abffa9; S=0x30abffa5; 
@property(retain, nonatomic) UIViewController *disappearingViewController;	// G=0x309145bd; S=0x3092ba2d; @synthesize=_disappearingViewController
@property(assign, nonatomic, getter=isInteractiveTransition) BOOL interactiveTransition;	// G=0x30992fe5; S=0x30abfcfd; @synthesize=_interactiveTransition
@property(assign) BOOL isExpanded;	// G=0x30abffad; S=0x30abffb1; 
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x3090df19; 
@property(assign) Class navigationBarClass;	// G=0x30abd73d; S=0x30971455; converted property
@property(assign, nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;	// G=0x3090fc91; S=0x30abd74d; 
@property(readonly, assign, nonatomic) UINavigationTransitionView *navigationTransitionView;	// G=0x30920419; 
@property(assign, nonatomic) BOOL needsDeferredTransition;	// G=0x309136d9; S=0x30911131; 
@property(assign, nonatomic) BOOL pretendNavBarHidden;	// G=0x30abd789; S=0x30abd79d; 
@property(readonly, assign, nonatomic) UIViewController *previousViewController;	// G=0x30939589; 
@property(assign) BOOL searchBarHidNavBar;	// G=0x30abd7b5; S=0x30abd7cd; converted property
@property(readonly, assign, nonatomic) UIToolbar *toolbar;	// G=0x3096bbb5; 
@property(assign, nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;	// G=0x30910da5; S=0x3096b6bd; 
@property(readonly, assign, nonatomic) UIViewController *topViewController;	// G=0x3091151d; 
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x308c5215; S=0x30a08bc5; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x309129cd; 
- (id)initWithCoder:(id)coder;	// 0x30abcc45
- (id)initWithNavigationBarClass:(Class)navigationBarClass toolbarClass:(Class)aClass;	// 0x30abcbf9
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3090d69d
- (id)initWithRootViewController:(id)rootViewController;	// 0x309424dd
- (void)__viewWillLayoutSubviews;	// 0x3091f345
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x30a33299
- (BOOL)_allowsAutorotation;	// 0x30999a2d
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)hidingNavigationBar lastOperation:(int)operation edge:(int *)edge duration:(double *)duration;	// 0x30a17629
- (void)_applyScrollContentInsetDelta:(UIEdgeInsets)delta forViewController:(id)viewController;	// 0x3097ae75
- (void)_applyScrollContentInsetDelta:(UIEdgeInsets)delta toScrollView:(id)scrollView;	// 0x3093ab45
- (void)_applyScrollContentOffsetDelta:(float)delta toScrollView:(id)scrollView;	// 0x3093ac95
- (void)_cancelInteractiveTransition:(float)transition;	// 0x30abd075
- (void)_clearLastOperation;	// 0x3092b9f5
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)viewController;	// 0x30920065
- (void)_configureToolbar;	// 0x3096bc91
- (float)_customNavigationTransitionDuration;	// 0x30abe281
- (int)_deferredTransition;	// 0x30abe109
- (void)_didBecomeContentViewControllerOfPopover:(id)popover;	// 0x30abf9c5
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x30abfab5
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x30914941
- (id)_existingToolbar;	// 0x30914501
- (UIEdgeInsets)_expectedContentInsetDeltaForViewController:(id)viewController;	// 0x3093aee5
- (void)_finishInteractiveTransition:(float)transition;	// 0x30abd055
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds displayingTopView:(BOOL)view andBottomView:(BOOL)view3;	// 0x30abf3bd
- (CGRect)_frameForViewController:(id)viewController;	// 0x30920189
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x30a342b9
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)controller;	// 0x3092052d
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)transition;	// 0x3091117d
- (void)_hideShowNavigationBarDidStop:(id)_hideShowNavigationBar finished:(id)finished context:(void *)context;	// 0x309795ed
- (void)_hideShowToolbarDidStop:(id)_hideShowToolbar finished:(id)finished context:(void *)context;	// 0x30985721
- (BOOL)_isInteractiveCustomNavigationTransition;	// 0x309932e1
- (BOOL)_isNavigationBarVisible;	// 0x309204b5
- (BOOL)_isPresentationContextByDefault;	// 0x3090d729
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3094912d
- (BOOL)_isTransitioning;	// 0x30abde71
- (void)_layoutTopViewController;	// 0x30914511
- (void)_layoutTopViewControllerInSheet;	// 0x30abece1
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)popoverView;	// 0x30abed31
- (void)_layoutTopViewControllerOutOfSheet;	// 0x30abf199
- (void)_layoutViewController:(id)controller;	// 0x3091ff45
- (id)_moreListTitle;	// 0x30abfc2d
- (id)_navigationItems;	// 0x30943355
- (int)_navigationTransitionForUITransition:(int)uitransition;	// 0x30922aa1
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)animated;	// 0x30abe291
- (id)_popViewControllerWithTransition:(int)transition allowPoppingLast:(BOOL)last;	// 0x30939311
- (void)_positionNavigationBarHidden:(BOOL)hidden;	// 0x3090fca5
- (void)_positionNavigationBarHidden:(BOOL)hidden edge:(int)edge;	// 0x3090fcb9
- (void)_positionToolbarHidden:(BOOL)hidden;	// 0x30914351
- (void)_positionToolbarHidden:(BOOL)hidden edge:(int)edge;	// 0x30914365
- (void)_prepareForDismissalInPopover:(id)popover;	// 0x30abf511
- (void)_prepareForPresentationInPopover:(id)popover;	// 0x30abf5d9
- (BOOL)_reallyWantsFullScreenLayout;	// 0x308f0d95
- (void)_releaseContainerViews;	// 0x30977745
- (void)_resetBottomBarHiddenState;	// 0x30947c19
- (void)_restoreOriginalInsetAndOffsetToScrollView:(id)scrollView;	// 0x3093aa6d
- (float)_scrollViewBottomContentInset;	// 0x3093b00d
- (float)_scrollViewTopContentInsetForViewController:(id)viewController;	// 0x3093af3d
- (void)_sendNavigationBarToBack;	// 0x30abd81d
- (void)_setClipsToBounds:(BOOL)bounds;	// 0x30abcf49
- (void)_setContentInset:(UIEdgeInsets)inset;	// 0x30abcf89
- (void)_setNavigationBarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;	// 0x30979189
- (void)_setNavigationBarHidden:(BOOL)hidden edgeIfNotNavigating:(int)navigating duration:(double)duration;	// 0x30a101ad
// declared property setter: - (void)_setToolbarClass:(Class)aClass;	// 0x30abcb1d
- (void)_setToolbarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;	// 0x3096b7ed
- (void)_setViewControllers:(id)controllers transition:(int)transition;	// 0x30942e75
- (BOOL)_shouldBottomBarBeHidden;	// 0x309113f5
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;	// 0x3097a0a1
- (BOOL)_shouldNavigationBarInsetViewController:(id)controller;	// 0x3092042d
- (BOOL)_shouldPersistViewWhenCoding;	// 0x30abcde5
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;	// 0x30939499
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x309148b5
- (BOOL)_shouldUseOnePartRotation;	// 0x30a34171
- (id)_snapshotView;	// 0x30abe145
- (void)_startCustomTransitionFromViewController:(id)viewController toViewController:(id)viewController2 transitionController:(id)controller;	// 0x30abd095
- (void)_startDeferredTransitionIfNeeded;	// 0x3091f355
- (void)_startDeferredTransitionIfNeeded:(id)needed;	// 0x3091f36d
- (void)_startTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3;	// 0x3091f589
- (void)_tabBarControllerDidFinishShowingTabBar:(id)_tabBarController;	// 0x30a286a5
// declared property getter: - (Class)_toolbarClass;	// 0x30abfccd
- (int)_transitionForOldViewControllers:(id)oldViewControllers newViewControllers:(id)controllers;	// 0x30abcef9
- (void)_updateBarsForCurrentInterfaceOrientation;	// 0x309142e5
- (void)_updateBottomBarHiddenState;	// 0x30947c41
- (void)_updateInteractiveTransition:(float)transition;	// 0x30abd035
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x309142d5
- (void)_updateScrollViewFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x3091fd79
- (void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;	// 0x3096bfc1
- (id)_viewControllerForDisappearCallback;	// 0x30abd9f1
- (id)_viewForContentInPopover;	// 0x30abf7a5
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x30abf7b5
- (BOOL)_willPerformCustomNavigationTransitionForPop;	// 0x309932a1
- (BOOL)_willPerformCustomNavigationTransitionForPush;	// 0x309f1c2d
// declared property getter: - (BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;	// 0x30abd7f1
// declared property getter: - (id)bottomViewController;	// 0x30943521
// converted property getter: - (CGSize)contentSizeForViewInPopover;	// 0x30942a21
// declared property getter: - (float)customNavigationTransitionDuration;	// 0x30abfcdd
- (void)dealloc;	// 0x3097767d
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x30abfe21
- (id)defaultFirstResponder;	// 0x3096c439
- (id)defaultPNGName;	// 0x30abec6d
// declared property getter: - (id)delegate;	// 0x30922a05
// declared property getter: - (id)detailViewController;	// 0x30abffa9
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x30abeb0d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30a39009
- (void)didShowViewController:(id)controller animated:(BOOL)animated;	// 0x3092ba7d
// declared property getter: - (id)disappearingViewController;	// 0x309145bd
- (BOOL)editing;	// 0x30abdb61
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x30abfd0d
- (void)encodeWithCoder:(id)coder;	// 0x30abcde9
- (BOOL)isCustomTransition;	// 0x3092b9d5
// declared property getter: - (BOOL)isExpanded;	// 0x30abffad
// declared property getter: - (BOOL)isInteractiveTransition;	// 0x30992fe5
- (BOOL)isModalInPopover;	// 0x30abf6b1
// declared property getter: - (BOOL)isNavigationBarHidden;	// 0x3090fc91
- (BOOL)isShown;	// 0x30abd999
// declared property getter: - (BOOL)isToolbarHidden;	// 0x30910da5
- (int)lastOperation;	// 0x3094da45
- (void)loadView;	// 0x3090dc79
- (void)makeModalViewControllerTopViewController;	// 0x30abe74d
- (int)modalTransitionStyle;	// 0x309971a5
- (id)moreListImage;	// 0x30abfc55
- (id)moreListSelectedImage;	// 0x30abfc7d
- (id)moreListTableCell;	// 0x30abfca5
// declared property getter: - (id)navigationBar;	// 0x3090df19
- (void)navigationBar:(id)bar buttonClicked:(int)clicked;	// 0x30abeba5
- (BOOL)navigationBar:(id)bar shouldPopItem:(id)item;	// 0x30939b0d
// converted property getter: - (Class)navigationBarClass;	// 0x30abd73d
- (void)navigationBarDidChangeOpacity:(id)navigationBar;	// 0x3097aca1
- (void)navigationBarDidResizeForPrompt:(id)navigationBar;	// 0x30a1bf81
// declared property getter: - (id)navigationTransitionView;	// 0x30920419
- (void)navigationTransitionView:(id)view didCancelTransition:(int)transition fromView:(id)view3 toView:(id)view4 wrapperView:(id)view5;	// 0x30abdf49
- (void)navigationTransitionView:(id)view didEndTransition:(int)transition fromView:(id)view3 toView:(id)view4;	// 0x3092b4b1
- (void)navigationTransitionView:(id)view didStartTransition:(int)transition;	// 0x309246f5
- (double)navigationTransitionView:(id)view durationForTransition:(int)transition;	// 0x30993049
// declared property getter: - (BOOL)needsDeferredTransition;	// 0x309136d9
- (id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;	// 0x3097adf9
- (id)popToRootViewControllerWithTransition:(int)transition;	// 0x3097ae11
- (id)popToViewController:(id)viewController animated:(BOOL)animated;	// 0x3093902d
- (id)popToViewController:(id)viewController transition:(int)transition;	// 0x30939045
- (id)popToViewControllerWithSnapbackIdentifier:(id)snapbackIdentifier animated:(BOOL)animated;	// 0x30abe68d
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x30992f31
- (id)popViewControllerWithAnimationTransition:(int)animationTransition duration:(double)duration curve:(int)curve;	// 0x30abe5b9
- (id)popViewControllerWithTransition:(int)transition;	// 0x309392fd
// declared property getter: - (BOOL)pretendNavBarHidden;	// 0x30abd789
// declared property getter: - (id)previousViewController;	// 0x30939589
- (void)purgeMemoryForReason:(int)reason;	// 0x30abda49
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x3090d80d
- (void)pushViewController:(id)controller transition:(int)transition;	// 0x30abe11d
- (void)pushViewController:(id)controller transition:(int)transition forceImmediate:(BOOL)immediate;	// 0x3090d839
- (id)rotatingFooterView;	// 0x30a3fa71
- (id)rotatingHeaderView;	// 0x30a341e1
// converted property getter: - (BOOL)searchBarHidNavBar;	// 0x30abd7b5
- (id)segueForUnwindingToViewController:(id)viewController fromViewController:(id)viewController2 identifier:(id)identifier;	// 0x30abdc41
// declared property setter: - (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)unhiding;	// 0x30abd805
// converted property setter: - (void)setContentSizeForViewInPopover:(CGSize)popover;	// 0x30a33241
// declared property setter: - (void)setCustomNavigationTransitionDuration:(float)duration;	// 0x30abfced
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3090d72d
// declared property setter: - (void)setDetailViewController:(id)controller;	// 0x30abffa5
// declared property setter: - (void)setDisappearingViewController:(id)controller;	// 0x3092ba2d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x30abdb31
// declared property setter: - (void)setInteractiveTransition:(BOOL)transition;	// 0x30abfcfd
// declared property setter: - (void)setIsExpanded:(BOOL)expanded;	// 0x30abffb1
- (void)setNavigationBar:(id)bar;	// 0x3090f1f9
// converted property setter: - (void)setNavigationBarClass:(Class)aClass;	// 0x30971455
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x30abd74d
- (void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x30979141
- (void)setNeedsDeferredTransition;	// 0x3091111d
// declared property setter: - (void)setNeedsDeferredTransition:(BOOL)transition;	// 0x30911131
// declared property setter: - (void)setPretendNavBarHidden:(BOOL)hidden;	// 0x30abd79d
// converted property setter: - (void)setSearchBarHidNavBar:(BOOL)bar;	// 0x30abd7cd
- (void)setToolbar:(id)toolbar;	// 0x30abd86d
// declared property setter: - (void)setToolbarHidden:(BOOL)hidden;	// 0x3096b6bd
- (void)setToolbarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x3096b6d1
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x30a08bc5
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x30942e21
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30914925
- (id)tabBarItem;	// 0x308ed995
// declared property getter: - (id)toolbar;	// 0x3096bbb5
// declared property getter: - (id)topViewController;	// 0x3091151d
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x30abec99
- (void)updateTitleForViewController:(id)viewController;	// 0x309158f5
- (id)viewControllerForUnwindSegueAction:(SEL)unwindSegueAction fromViewController:(id)viewController withSender:(id)sender;	// 0x30abdb89
// declared property getter: - (id)viewControllers;	// 0x308c5215
- (void)viewDidAppear:(BOOL)view;	// 0x3092ffdd
- (void)viewDidDisappear:(BOOL)view;	// 0x3093a715
- (void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;	// 0x30913b19
- (void)viewDidUnload;	// 0x30abdb21
- (void)viewWillAppear:(BOOL)view;	// 0x309134f1
- (void)viewWillDisappear:(BOOL)view;	// 0x3093a5f1
// declared property getter: - (id)visibleViewController;	// 0x309129cd
- (BOOL)wasLastOperationAnimated;	// 0x30971c91
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30abead5
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30a3806d
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30abeb69
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30a3484d
- (void)willShowViewController:(id)controller animated:(BOOL)animated;	// 0x30922a41
@end
