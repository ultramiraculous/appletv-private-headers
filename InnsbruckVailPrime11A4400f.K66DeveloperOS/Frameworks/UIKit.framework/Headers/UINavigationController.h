/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"
#import "UIGestureRecognizerDelegate.h"

@class UINavigationBar, UIToolbar, _UINavigationParallaxTransition, UITapGestureRecognizer, _UINavigationInteractiveTransition, _UINavigationControllerPalette, NSUUID, UIView, NSArray, UIGestureRecognizer, UINavigationTransitionView;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UINavigationControllerDelegate;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegate> {
	UIView *_containerView;	// 304 = 0x130
	UINavigationBar *_navigationBar;	// 308 = 0x134
	Class _navigationBarClass;	// 312 = 0x138
	UIToolbar *_toolbar;	// 316 = 0x13c
	UIView *_rightAuxiliaryContentView;	// 320 = 0x140
	UIView *_navigationTransitionView;	// 324 = 0x144
	float _bottomInsetDelta;	// 328 = 0x148
	UIViewController *_disappearingViewController;	// 332 = 0x14c
	id<UINavigationControllerDelegate> _delegate;	// 336 = 0x150
	int _savedNavBarStyleBeforeSheet;	// 340 = 0x154
	int _savedToolBarStyleBeforeSheet;	// 344 = 0x158
	UITapGestureRecognizer *_backGestureRecognizer;	// 348 = 0x15c
	_UINavigationControllerPalette *_topPalette;	// 352 = 0x160
	_UINavigationControllerPalette *_freePalette;	// 356 = 0x164
	struct {
		unsigned isAppearingAnimated : 1;
		unsigned isAlreadyPoppingNavigationItem : 1;
		unsigned isNavigationBarHidden : 1;
		unsigned isToolbarShown : 1;
		unsigned needsDeferredTransition : 1;
		unsigned isTransitioning : 1;
		unsigned paletteTransitionPending : 1;
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
		unsigned isBuiltinTransition : 1;
		unsigned displaysStaticScrollBars : 1;
		unsigned navigationTransitionViewAccountsForRightAuxView : 1;
		unsigned resetDidHideOnCancel : 1;
		unsigned delegateWillShowViewController : 1;
		unsigned delegateDidShowViewController : 1;
		unsigned delegateTransitionController : 1;
		unsigned delegateTransitionControllerEx : 1;
		unsigned delegateInteractionController : 1;
		unsigned delegateInteractionControllerEx : 1;
		unsigned delegateShouldCrossFadeNavigationBar : 1;
		unsigned delegateShouldCrossFadeBottomBars : 1;
		unsigned delegateShouldUseBuiltinInteractionController : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned navigationBarHidesCompletelyOffscreen : 1;
		unsigned clipUnderlapWhileTransitioning;
		unsigned isCrossfadingOutTabBar : 1;
		unsigned isCrossfadingInTabBar : 1;
	} _navigationControllerFlags;	// 360 = 0x168
	BOOL _interactiveTransition;	// 376 = 0x178
	BOOL __usingBuiltinAnimator;	// 377 = 0x179
	BOOL __barAnimationWasCancelled;	// 378 = 0x17a
	Class _toolbarClass;	// 380 = 0x17c
	float _customNavigationTransitionDuration;	// 384 = 0x180
	id<UIViewControllerAnimatedTransitioning> __transitionController;	// 388 = 0x184
	_UINavigationParallaxTransition *__cachedTransitionController;	// 392 = 0x188
	id<UIViewControllerInteractiveTransitioning> __interactionController;	// 396 = 0x18c
	_UINavigationInteractiveTransition *__cachedInteractionController;	// 400 = 0x190
	NSUUID *__toolbarAnimationId;	// 404 = 0x194
	NSUUID *__navbarAnimationId;	// 408 = 0x198
	id __updateNavigationBarHandler;	// 412 = 0x19c
	int _builtinTransitionStyle;	// 416 = 0x1a0
	float _builtinTransitionGap;	// 420 = 0x1a4
}
@property(assign, nonatomic, setter=_setBarAnimationWasCancelled:) BOOL _barAnimationWasCancelled;	// G=0x2f6077cd; S=0x2f6077dd; @synthesize=__barAnimationWasCancelled
@property(retain, nonatomic, setter=_setCachedInteractionController:) _UINavigationInteractiveTransition *_cachedInteractionController;	// G=0x2f60774d; S=0x2f60775d; @synthesize=__cachedInteractionController
@property(retain, nonatomic, setter=_setCachedTransitionController:) _UINavigationParallaxTransition *_cachedTransitionController;	// G=0x2f60770d; S=0x2f60771d; @synthesize=__cachedTransitionController
@property(retain, nonatomic, setter=_setInteractionController:) id<UIViewControllerInteractiveTransitioning> _interactionController;	// G=0x2f60772d; S=0x2f60773d; @synthesize=__interactionController
@property(retain, nonatomic, setter=_setNavbarAnimationId:) NSUUID *_navbarAnimationId;	// G=0x2f6077ad; S=0x2f6077bd; @synthesize=__navbarAnimationId
@property(retain, nonatomic, setter=_setToolbarAnimationId:) NSUUID *_toolbarAnimationId;	// G=0x2f60778d; S=0x2f60779d; @synthesize=__toolbarAnimationId
@property(assign, nonatomic, setter=_setToolbarClass:) Class _toolbarClass;	// G=0x2f6076ad; S=0x2f5fe18d; @synthesize
@property(retain, nonatomic, setter=_setTransitionController:) id<UIViewControllerAnimatedTransitioning> _transitionController;	// G=0x2f6076ed; S=0x2f6076fd; @synthesize=__transitionController
@property(copy, nonatomic, setter=_setUpdateNavigationBarHandler:) id _updateNavigationBarHandler;	// G=0x2f6077ed; S=0x2f607801; @synthesize=__updateNavigationBarHandler
@property(assign, nonatomic, getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:) BOOL _usingBuiltinAnimator;	// G=0x2f60776d; S=0x2f60777d; @synthesize=__usingBuiltinAnimator
@property(assign, nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;	// G=0x2f60216d; S=0x2f602185; 
@property(readonly, assign, nonatomic) UIViewController *bottomViewController;	// G=0x2f468d51; 
@property(assign, nonatomic, getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:) float builtinTransitionGap;	// G=0x2f607821; S=0x2f5ff2a1; @synthesize=_builtinTransitionGap
@property(assign, nonatomic, getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:) int builtinTransitionStyle;	// G=0x2f607811; S=0x2f5ff229; @synthesize=_builtinTransitionStyle
@property(assign) CGSize contentSizeForViewInPopover;	// G=0x2f4683c9; S=0x2f53f839; converted property
@property(assign, nonatomic) float customNavigationTransitionDuration;	// G=0x2f6076bd; S=0x2f6076cd; @synthesize=_customNavigationTransitionDuration
@property(assign, nonatomic) id<UINavigationControllerDelegate> delegate;	// G=0x2f44b075; S=0x2f436401; @synthesize=_delegate
@property(retain) UIViewController *detailViewController;	// G=0x2f607c81; S=0x2f607c7d; 
@property(retain, nonatomic) UIViewController *disappearingViewController;	// G=0x2f43ddf5; S=0x2f45451d; @synthesize=_disappearingViewController
@property(readonly, assign, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer;	// G=0x2f603a95; 
@property(assign, nonatomic, getter=isInteractiveTransition) BOOL interactiveTransition;	// G=0x2f4b1e75; S=0x2f6076dd; @synthesize=_interactiveTransition
@property(assign) BOOL isExpanded;	// G=0x2f607c85; S=0x2f607c89; 
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x2f4370d9; 
@property(assign) Class navigationBarClass;	// G=0x2f601109; S=0x2f494db9; converted property
@property(assign, nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;	// G=0x2f4391bd; S=0x2f601119; 
@property(readonly, assign, nonatomic) UINavigationTransitionView *navigationTransitionView;	// G=0x2f448fa5; 
@property(assign, nonatomic) BOOL needsDeferredTransition;	// G=0x2f43d02d; S=0x2f43a555; 
@property(assign, nonatomic) BOOL pretendNavBarHidden;	// G=0x2f6020f1; S=0x2f602105; 
@property(readonly, assign, nonatomic) UIViewController *previousViewController;	// G=0x2f460f59; 
@property(assign) BOOL searchBarHidNavBar;	// G=0x2f602129; S=0x2f60213d; converted property
@property(readonly, assign, nonatomic) UIToolbar *toolbar;	// G=0x2f48fe71; 
@property(assign, nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;	// G=0x2f43a169; S=0x2f48f359; 
@property(readonly, assign, nonatomic) UIViewController *topViewController;	// G=0x2f43aa5d; 
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x2f3f60b5; S=0x2f51785d; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x2f43c1ad; 
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;	// 0x2f5fe0fd
+ (BOOL)doesOverrideSupportedInterfaceOrientations;	// 0x2f5fe145
- (id)initWithCoder:(id)coder;	// 0x2f5fe465
- (id)initWithNavigationBarClass:(Class)navigationBarClass toolbarClass:(Class)aClass;	// 0x2f5fe26d
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x2f4362e5
- (id)initWithRootViewController:(id)rootViewController;	// 0x2f467ec9
- (void)__viewWillLayoutSubviews;	// 0x2f447309
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x2f53f891
- (BOOL)_allowsAutorotation;	// 0x2f4b78b5
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)hidingNavigationBar lastOperation:(int)operation edge:(int *)edge duration:(double *)duration;	// 0x2f524851
// declared property getter: - (BOOL)_barAnimationWasCancelled;	// 0x2f6077cd
- (CGRect)_boundsForPalette:(id)palette size:(CGSize)size;	// 0x2f607e2d
- (id)_builtinInteractionController;	// 0x2f605119
- (id)_builtinTransitionController;	// 0x2f605109
// declared property getter: - (float)_builtinTransitionGap;	// 0x2f607821
// declared property getter: - (int)_builtinTransitionStyle;	// 0x2f607811
// declared property getter: - (id)_cachedInteractionController;	// 0x2f60774d
// declared property getter: - (id)_cachedTransitionController;	// 0x2f60770d
- (void)_cancelInteractiveTransition:(float)transition transitionContext:(id)context;	// 0x2f5ff809
- (void)_clearLastOperation;	// 0x2f4544e5
- (BOOL)_clipUnderlapWhileTransitioning;	// 0x2f601149
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)viewController;	// 0x2f448491
- (CGPoint)_computeTopBarCenter:(id)center hidden:(BOOL)hidden edge:(int)edge center:(CGPoint)center4 offset:(float)offset;	// 0x2f601c99
- (void)_configureToolbar;	// 0x2f48ff41
- (void)_confirmBarAccessMethods;	// 0x2f5fe2b9
- (id)_customInteractionController:(id)controller;	// 0x2f6055d1
- (float)_customNavigationTransitionDuration;	// 0x2f605b25
- (id)_customTransitionController:(BOOL)controller;	// 0x2f605129
- (id)_deepestUnambiguousResponder;	// 0x2f6041f1
- (int)_deferredTransition;	// 0x2f6050f1
- (void)_detachPalette:(id)palette;	// 0x2f608449
- (void)_didAddStaticScrollBar:(id)bar;	// 0x2f604b91
- (void)_didBecomeContentViewControllerOfPopover:(id)popover;	// 0x2f6073a9
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x2f607499
- (BOOL)_displaysStaticScrollBars;	// 0x2f6030e5
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x2f43e181
- (void)_executeNavigationHandler:(id)handler deferred:(BOOL)deferred;	// 0x2f605739
- (id)_existingNavigationBar;	// 0x2f6021f5
- (id)_existingToolbar;	// 0x2f43dd35
- (UIEdgeInsets)_expectedContentInsetDeltaForViewController:(id)viewController;	// 0x2f4627cd
- (void)_finishInteractiveTransition:(float)transition transitionContext:(id)context;	// 0x2f5ff68d
- (void)_forceNavBarOpacityIfNeeded;	// 0x2f604919
- (void)_forceOpaqueBarOpacitiesIfNeeded;	// 0x2f604aa1
- (void)_forceTabBarOpacityIfNeeded;	// 0x2f604a2d
- (void)_forceToolbarOpacityIfNeeded;	// 0x2f60498d
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds displayingTopView:(BOOL)view andBottomView:(BOOL)view3;	// 0x2f606d8d
- (CGRect)_frameForPalette:(id)palette;	// 0x2f607c9d
- (CGRect)_frameForViewController:(id)viewController;	// 0x2f4487f1
- (CGRect)_frameForWrapperViewForViewController:(id)viewController;	// 0x2f604ba5
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x2f6040fd
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x2f540859
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)controller;	// 0x2f449049
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)transition;	// 0x2f43a5ad
- (void)_hideOrShowRightAuxViewIfNeededWithTransition:(int)transition;	// 0x2f6035c5
- (void)_hideShowNavigationBarDidStop:(id)_hideShowNavigationBar finished:(id)finished context:(id)context;	// 0x2f49c7e1
- (void)_hideShowToolbarDidStop:(id)_hideShowToolbar finished:(id)finished context:(id)context;	// 0x2f4a7089
// declared property getter: - (id)_interactionController;	// 0x2f60772d
- (BOOL)_isInteractiveCustomNavigationTransition;	// 0x2f4b2145
- (BOOL)_isNavigationBarVisible;	// 0x2f448fcd
- (BOOL)_isPresentationContextByDefault;	// 0x2f4363f9
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x2f46de4d
- (BOOL)_isTransitioning;	// 0x2f604251
// declared property getter: - (BOOL)_isUsingBuiltinAnimator;	// 0x2f60776d
- (int)_keyboardDirectionForTransition:(int)transition orderingIn:(BOOL)anIn;	// 0x2f600039
- (void)_layoutTopViewController;	// 0x2f43dd45
- (void)_layoutTopViewControllerInSheet;	// 0x2f6066a9
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)popoverView;	// 0x2f6066f9
- (void)_layoutTopViewControllerOutOfSheet;	// 0x2f606b69
- (void)_layoutViewController:(id)controller;	// 0x2f448145
- (id)_lazyRightAuxiliaryContentView;	// 0x2f60336d
- (id)_moreListTitle;	// 0x2f60760d
// declared property getter: - (id)_navbarAnimationId;	// 0x2f6077ad
- (BOOL)_navbarIsAppearingInteractively;	// 0x2f5ff335
- (void)_navigationBarDidChangeStyle:(id)_navigationBar;	// 0x2f603049
- (id)_navigationItems;	// 0x2f468bbd
- (int)_navigationTransitionForUITransition:(int)uitransition;	// 0x2f44b0fd
- (void)_navigationTransitionView:(id)view didCancelTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController4 wrapperView:(id)view5;	// 0x2f60435d
- (void)_performBackGesture:(id)gesture;	// 0x2f604141
- (id)_pinningBarForPalette:(id)palette;	// 0x2f607ef9
- (void)_placeScrollBarInRightAuxView:(id)rightAuxView;	// 0x2f603411
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)animated;	// 0x2f605b49
- (id)_popViewControllerWithTransition:(int)transition allowPoppingLast:(BOOL)last;	// 0x2f460cd9
- (void)_positionNavigationBarHidden:(BOOL)hidden;	// 0x2f4391d5
- (void)_positionNavigationBarHidden:(BOOL)hidden edge:(int)edge;	// 0x2f4391ed
- (void)_positionNavigationBarHidden:(BOOL)hidden edge:(int)edge initialOffset:(float)offset;	// 0x2f601161
- (void)_positionPaletteHidden:(BOOL)hidden edge:(int)edge;	// 0x2f6018b9
- (void)_positionPaletteHidden:(BOOL)hidden edge:(int)edge initialOffset:(float)offset;	// 0x2f601489
- (void)_positionToolbarHidden:(BOOL)hidden;	// 0x2f43dcf9
- (void)_positionToolbarHidden:(BOOL)hidden edge:(int)edge;	// 0x2f43dd0d
- (void)_positionToolbarHidden:(BOOL)hidden edge:(int)edge crossFade:(id)fade;	// 0x2f6024bd
- (void)_positionTopBar:(id)bar hidden:(BOOL)hidden edge:(int)edge center:(CGPoint)center offset:(float)offset;	// 0x2f601e2d
- (void)_prepareCollectionViewController:(id)controller forSharingWithCollectionViewController:(id)collectionViewController;	// 0x2f608df1
- (void)_prepareCollectionViewControllerForSharing:(id)sharing;	// 0x2f608ecd
- (void)_prepareCollectionViewControllers:(id)controllers forSharingInRange:(id)range;	// 0x2f608f01
- (void)_prepareForDismissalInPopover:(id)popover;	// 0x2f606ed1
- (void)_prepareForPresentationInPopover:(id)popover;	// 0x2f606fa5
- (void)_releaseContainerViews;	// 0x2f49a895
- (void)_repositionPaletteWithNavigationBarHidden:(BOOL)navigationBarHidden duration:(double)duration;	// 0x2f6018dd
- (void)_resetBottomBarHiddenState;	// 0x2f46c8bd
- (void)_resizeNavigationTransitionViewForTransitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x2f604f65
- (id)_screenEdgePanGestureRecognizer;	// 0x2f604155
- (float)_scrollViewBottomContentInsetForViewController:(id)viewController;	// 0x2f604cc1
- (float)_scrollViewTopContentInsetForViewController:(id)viewController;	// 0x2f46287d
- (void)_sendNavigationBarToBack;	// 0x2f6021a9
// declared property setter: - (void)_setBarAnimationWasCancelled:(BOOL)cancelled;	// 0x2f6077dd
// declared property setter: - (void)_setBuiltinTransitionGap:(float)gap;	// 0x2f5ff2a1
// declared property setter: - (void)_setBuiltinTransitionStyle:(int)style;	// 0x2f5ff229
// declared property setter: - (void)_setCachedInteractionController:(id)controller;	// 0x2f60775d
// declared property setter: - (void)_setCachedTransitionController:(id)controller;	// 0x2f60771d
- (void)_setClipUnderlapWhileTransitioning:(BOOL)transitioning;	// 0x2f60112d
- (void)_setClipsToBounds:(BOOL)bounds;	// 0x2f5ff12d
- (void)_setContentInset:(UIEdgeInsets)inset;	// 0x2f5ff16d
- (void)_setCustomTransition:(BOOL)transition;	// 0x2f6045f5
- (void)_setDisplaysStaticScrollBars:(BOOL)bars;	// 0x2f6030f9
// declared property setter: - (void)_setInteractionController:(id)controller;	// 0x2f60773d
// declared property setter: - (void)_setNavbarAnimationId:(id)anId;	// 0x2f6077bd
- (void)_setNavigationBarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;	// 0x2f49c171
- (void)_setNavigationBarHidden:(BOOL)hidden edgeIfNotNavigating:(int)navigating duration:(double)duration;	// 0x2f51e585
- (void)_setNavigationBarHidesCompletelyOffscreen:(BOOL)offscreen;	// 0x2f601dfd
// declared property setter: - (void)_setToolbarAnimationId:(id)anId;	// 0x2f60779d
// declared property setter: - (void)_setToolbarClass:(Class)aClass;	// 0x2f5fe18d
- (void)_setToolbarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;	// 0x2f48f481
// declared property setter: - (void)_setTransitionController:(id)controller;	// 0x2f6076fd
// declared property setter: - (void)_setUpdateNavigationBarHandler:(id)handler;	// 0x2f607801
// declared property setter: - (void)_setUsingBuiltinAnimator:(BOOL)animator;	// 0x2f60777d
- (void)_setViewControllers:(id)controllers transition:(int)transition;	// 0x2f468b31
- (void)_setViewControllers:(id)controllers transition:(int)transition animated:(BOOL)animated;	// 0x2f5fe92d
- (void)_setViewControllers_7_0:(id)a0 transition:(int)transition animated:(BOOL)animated;	// 0x2f5feb81
- (void)_setVisualAltitudeForBar:(id)bar;	// 0x2f602205
- (BOOL)_shouldBottomBarBeHidden;	// 0x2f43a939
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;	// 0x2f49d219
- (BOOL)_shouldCrossFadeBottomBars;	// 0x2f5ffae5
- (BOOL)_shouldCrossFadeNavigationBar;	// 0x2f5ffa41
- (BOOL)_shouldLayoutViewControllerForTransparentStatusBar:(id)transparentStatusBar;	// 0x2f604ae1
- (BOOL)_shouldNavigationBarInsetViewController:(id)controller;	// 0x2f448fb5
- (BOOL)_shouldNavigationBarInsetViewController:(id)controller orOverlayContent:(BOOL *)content;	// 0x2f6046a9
- (BOOL)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)innsbruck;	// 0x2f604625
- (BOOL)_shouldPersistViewWhenCoding;	// 0x2f5fe6c1
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;	// 0x2f460e5d
- (BOOL)_shouldStatusBarInsetViewController:(id)controller;	// 0x2f604b3d
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x2f43e0ed
- (BOOL)_shouldTabBar:(id)bar insetViewController:(id)controller;	// 0x2f6047f9
- (BOOL)_shouldTabBar:(id)bar insetViewController:(id)controller orOverlayContent:(BOOL *)content;	// 0x2f60476d
- (BOOL)_shouldToolBar:(id)bar insetViewController:(id)controller;	// 0x2f6048ad
- (BOOL)_shouldToolBar:(id)bar insetViewController:(id)controller orOverlayContent:(BOOL *)content;	// 0x2f60481d
- (BOOL)_shouldUseBuiltinInteractionController;	// 0x2f605545
- (BOOL)_shouldUseOnePartRotation;	// 0x2f540719
- (id)_snapshotView;	// 0x2f60591d
- (void)_startCustomTransition:(id)transition;	// 0x2f600109
- (void)_startDeferredTransitionIfNeeded;	// 0x2f44739d
- (void)_startDeferredTransitionIfNeeded:(id)needed;	// 0x2f4473b5
- (id)_startInteractiveBarTransition:(id)transition;	// 0x2f5ff351
- (void)_startInteractiveNavbarTransition;	// 0x2f5ff41d
- (void)_startInteractiveToolbarTransition;	// 0x2f5ff3d9
- (void)_startPaletteTransitionIfNecessary:(id)necessary animated:(BOOL)animated;	// 0x2f60871d
- (void)_startToolbarTransitionIfNecessary:(id)necessary animated:(BOOL)animated;	// 0x2f5ffc01
- (void)_startTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3;	// 0x2f447699
- (void)_tabBarControllerDidFinishShowingTabBar:(id)_tabBarController isHidden:(BOOL)hidden;	// 0x2f605895
// declared property getter: - (id)_toolbarAnimationId;	// 0x2f60778d
// declared property getter: - (Class)_toolbarClass;	// 0x2f6076ad
- (BOOL)_toolbarIsAnimatingInteractively;	// 0x2f5ff319
- (float)_topBarHeight;	// 0x2f604e4d
- (id)_topPalette;	// 0x2f607c8d
- (id)_transitionAnimationContext;	// 0x2f604265
// declared property getter: - (id)_transitionController;	// 0x2f6076ed
- (int)_transitionForOldViewControllers:(id)oldViewControllers newViewControllers:(id)controllers;	// 0x2f5fe881
- (void)_updateBarsForCurrentInterfaceOrientation;	// 0x2f43dc69
- (void)_updateBottomBarHiddenState;	// 0x2f46c8f1
- (void)_updateInteractiveBarTransition:(id)transition withUUID:(id)uuid percent:(float)percent isFinished:(BOOL)finished didComplete:(BOOL)complete completionSpeed:(float)speed completionCurve:(int)curve;	// 0x2f5ff45d
- (void)_updateInteractiveTransition:(float)transition;	// 0x2f5ff579
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x2f43dc59
// declared property getter: - (id)_updateNavigationBarHandler;	// 0x2f6077ed
- (void)_updatePaletteBackground;	// 0x2f6048d1
- (void)_updateScrollViewFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x2f448009
- (void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;	// 0x2f490195
- (BOOL)_usesTransitionController;	// 0x2f5fe84d
- (id)_viewControllerForDisappearCallback;	// 0x2f603b31
- (id)_viewForContentInPopover;	// 0x2f60717d
- (CGRect)_visibleFrameForRightAuxViewWithStaticScrollBar:(id)staticScrollBar;	// 0x2f603165
- (id)_visibleStaticScrollBar;	// 0x2f60358d
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x2f60718d
- (void)_willChangeToIdiom:(int)idiom onScreen:(id)screen;	// 0x2f603fcd
- (BOOL)_willPerformCustomNavigationTransitionForPop;	// 0x2f4b212d
- (BOOL)_willPerformCustomNavigationTransitionForPush;	// 0x2f501675
- (void)attachPalette:(id)palette isPinned:(BOOL)pinned;	// 0x2f6080cd
// declared property getter: - (BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;	// 0x2f60216d
- (BOOL)becomeFirstResponder;	// 0x2f604175
// declared property getter: - (id)bottomViewController;	// 0x2f468d51
- (id)childViewControllerForStatusBarHidden;	// 0x2f603039
- (id)childViewControllerForStatusBarStyle;	// 0x2f603001
// converted property getter: - (CGSize)contentSizeForViewInPopover;	// 0x2f4683c9
// declared property getter: - (float)customNavigationTransitionDuration;	// 0x2f6076bd
- (void)dealloc;	// 0x2f49a6d5
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x2f607a31
- (id)defaultPNGName;	// 0x2f606635
// declared property getter: - (id)delegate;	// 0x2f44b075
- (void)detachPalette:(id)palette;	// 0x2f608709
- (void)detachPalette:(id)palette isInPaletteTransition:(BOOL)paletteTransition;	// 0x2f608615
// declared property getter: - (id)detailViewController;	// 0x2f607c81
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f6063dd
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x2f5458c1
- (void)didShowViewController:(id)controller animated:(BOOL)animated;	// 0x2f45457d
// declared property getter: - (id)disappearingViewController;	// 0x2f43ddf5
- (double)durationForTransition:(int)transition;	// 0x2f5ff9d1
- (BOOL)editing;	// 0x2f603ca5
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x2f607831
- (void)encodeWithCoder:(id)coder;	// 0x2f5fe6c5
- (id)existingPaletteForEdge:(unsigned)edge;	// 0x2f608595
// declared property getter: - (id)interactivePopGestureRecognizer;	// 0x2f603a95
- (BOOL)isAlreadyPoppingNavItem;	// 0x2f605b35
- (BOOL)isBuiltinTransition;	// 0x2f6045e1
- (BOOL)isCustomTransition;	// 0x2f4544c5
// declared property getter: - (BOOL)isExpanded;	// 0x2f607c85
// declared property getter: - (BOOL)isInteractiveTransition;	// 0x2f4b1e75
- (BOOL)isModalInPopover;	// 0x2f607089
// declared property getter: - (BOOL)isNavigationBarHidden;	// 0x2f4391bd
- (BOOL)isShown;	// 0x2f603add
// declared property getter: - (BOOL)isToolbarHidden;	// 0x2f43a169
- (int)lastOperation;	// 0x2f473369
- (void)loadView;	// 0x2f436d91
- (void)makeModalViewControllerTopViewController;	// 0x2f606021
- (int)modalTransitionStyle;	// 0x2f4b5f75
- (id)moreListImage;	// 0x2f607635
- (id)moreListSelectedImage;	// 0x2f60765d
- (id)moreListTableCell;	// 0x2f607685
// declared property getter: - (id)navigationBar;	// 0x2f4370d9
- (void)navigationBar:(id)bar buttonClicked:(int)clicked;	// 0x2f606571
- (BOOL)navigationBar:(id)bar shouldPopItem:(id)item;	// 0x2f461595
// converted property getter: - (Class)navigationBarClass;	// 0x2f601109
- (void)navigationBarDidChangeOpacity:(id)navigationBar;	// 0x2f49dc99
- (void)navigationBarDidResizeForPrompt:(id)navigationBar;	// 0x2f52985d
// declared property getter: - (id)navigationTransitionView;	// 0x2f448fa5
- (void)navigationTransitionView:(id)view didEndTransition:(int)transition fromView:(id)view3 toView:(id)view4;	// 0x2f453f25
- (void)navigationTransitionView:(id)view didStartTransition:(int)transition;	// 0x2f44c95d
- (double)navigationTransitionView:(id)view durationForTransition:(int)transition;	// 0x2f4b1ed1
// declared property getter: - (BOOL)needsDeferredTransition;	// 0x2f43d02d
- (id)paletteForEdge:(unsigned)edge size:(CGSize)size;	// 0x2f607f6d
- (id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;	// 0x2f49ddad
- (id)popToRootViewControllerWithTransition:(int)transition;	// 0x2f49ddc5
- (id)popToViewController:(id)viewController animated:(BOOL)animated;	// 0x2f460979
- (id)popToViewController:(id)viewController transition:(int)transition;	// 0x2f460991
- (id)popToViewControllerWithSnapbackIdentifier:(id)snapbackIdentifier animated:(BOOL)animated;	// 0x2f605f61
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x2f4b1e15
- (id)popViewControllerWithAnimationTransition:(int)animationTransition duration:(double)duration curve:(int)curve;	// 0x2f605e8d
- (id)popViewControllerWithTransition:(int)transition;	// 0x2f460cc1
- (int)positionForBar:(id)bar;	// 0x2f60649d
- (int)preferredInterfaceOrientationForPresentation;	// 0x2f605ac1
- (int)preferredStatusBarStyle;	// 0x2f602fd9
// declared property getter: - (BOOL)pretendNavBarHidden;	// 0x2f6020f1
// declared property getter: - (id)previousViewController;	// 0x2f460f59
- (void)purgeMemoryForReason:(int)reason;	// 0x2f603b91
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x2f436701
- (void)pushViewController:(id)controller transition:(int)transition;	// 0x2f605871
- (void)pushViewController:(id)controller transition:(int)transition forceImmediate:(BOOL)immediate;	// 0x2f436831
- (id)rotatingFooterView;	// 0x2f54b79d
- (id)rotatingHeaderView;	// 0x2f540789
- (id)rotatingSnapshotViewForWindow:(id)window;	// 0x2f606475
// converted property getter: - (BOOL)searchBarHidNavBar;	// 0x2f602129
- (id)segueForUnwindingToViewController:(id)viewController fromViewController:(id)viewController2 identifier:(id)identifier;	// 0x2f603d89
// declared property setter: - (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)unhiding;	// 0x2f602185
// converted property setter: - (void)setContentSizeForViewInPopover:(CGSize)popover;	// 0x2f53f839
// declared property setter: - (void)setCustomNavigationTransitionDuration:(float)duration;	// 0x2f6076cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f436401
// declared property setter: - (void)setDetailViewController:(id)controller;	// 0x2f607c7d
// declared property setter: - (void)setDisappearingViewController:(id)controller;	// 0x2f45451d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x2f603c75
// declared property setter: - (void)setInteractiveTransition:(BOOL)transition;	// 0x2f6076dd
// declared property setter: - (void)setIsExpanded:(BOOL)expanded;	// 0x2f607c89
- (void)setNavigationBar:(id)bar;	// 0x2f43868d
// converted property setter: - (void)setNavigationBarClass:(Class)aClass;	// 0x2f494db9
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x2f601119
- (void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x2f49c0e9
- (void)setNeedsDeferredTransition;	// 0x2f43a541
// declared property setter: - (void)setNeedsDeferredTransition:(BOOL)transition;	// 0x2f43a555
// declared property setter: - (void)setPretendNavBarHidden:(BOOL)hidden;	// 0x2f602105
// converted property setter: - (void)setSearchBarHidNavBar:(BOOL)bar;	// 0x2f60213d
- (void)setToolbar:(id)toolbar;	// 0x2f6023fd
// declared property setter: - (void)setToolbarHidden:(BOOL)hidden;	// 0x2f48f359
- (void)setToolbarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x2f48f371
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x2f51785d
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x2f4687c9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f43e165
- (unsigned)supportedInterfaceOrientations;	// 0x2f605a5d
- (id)tabBarItem;	// 0x2f4181b5
// declared property getter: - (id)toolbar;	// 0x2f48fe71
// declared property getter: - (id)topViewController;	// 0x2f43aa5d
- (id)transitionCoordinator;	// 0x2f5ffb81
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x2f606661
- (void)updateTitleForViewController:(id)viewController;	// 0x2f43f1cd
- (id)viewControllerForUnwindSegueAction:(SEL)unwindSegueAction fromViewController:(id)viewController withSender:(id)sender;	// 0x2f603cd1
// declared property getter: - (id)viewControllers;	// 0x2f3f60b5
- (void)viewDidAppear:(BOOL)view;	// 0x2f45820d
- (void)viewDidDisappear:(BOOL)view;	// 0x2f4622ad
- (void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;	// 0x2f43d451
- (void)viewDidUnload;	// 0x2f603c65
- (void)viewWillAppear:(BOOL)view;	// 0x2f43ce3d
- (void)viewWillDisappear:(BOOL)view;	// 0x2f46216d
// declared property getter: - (id)visibleViewController;	// 0x2f43c1ad
- (BOOL)wasLastOperationAnimated;	// 0x2f49568d
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x2f6063a5
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x2f54481d
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x2f606439
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x2f540dfd
- (void)willShowViewController:(id)controller animated:(BOOL)animated;	// 0x2f44b0a1
@end

