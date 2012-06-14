/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIResponder.h"
#import "UIAppearanceContainer.h"

@class UIDimmingView, UINavigationItem, NSArray, UIDropShadowView, UITabBarItem, UIStoryboard, NSBundle, UIPopoverController, NSString, UIBarButtonItem, NSMutableArray, UISplitViewController, NSDictionary, UITransitionView, UINavigationController, UITabBarController, UIView, UISearchDisplayController;

@interface UIViewController : UIResponder <NSCoding, UIAppearanceContainer> {
@private
	UIView *_view;	// 4 = 0x4
	UITabBarItem *_tabBarItem;	// 8 = 0x8
	UINavigationItem *_navigationItem;	// 12 = 0xc
	NSArray *_toolbarItems;	// 16 = 0x10
	NSString *_title;	// 20 = 0x14
	NSString *_nibName;	// 24 = 0x18
	NSBundle *_nibBundle;	// 28 = 0x1c
	UIViewController *_parentViewController;	// 32 = 0x20
	UIViewController *_childModalViewController;	// 36 = 0x24
	UIViewController *_parentModalViewController;	// 40 = 0x28
	UIViewController *_previousRootViewController;	// 44 = 0x2c
	UIView *_modalTransitionView;	// 48 = 0x30
	UIResponder *_modalPreservedFirstResponder;	// 52 = 0x34
	UIResponder *_defaultFirstResponder;	// 56 = 0x38
	UIDimmingView *_dimmingView;	// 60 = 0x3c
	UIDropShadowView *_dropShadowView;	// 64 = 0x40
	id _currentAction;	// 68 = 0x44
	UIStoryboard *_storyboard;	// 72 = 0x48
	NSArray *_storyboardSegueTemplates;	// 76 = 0x4c
	NSDictionary *_externalObjectsTableForViewLoading;	// 80 = 0x50
	UIView *_savedHeaderSuperview;	// 84 = 0x54
	UIView *_savedFooterSuperview;	// 88 = 0x58
	UIBarButtonItem *_editButtonItem;	// 92 = 0x5c
	UISearchDisplayController *_searchDisplayController;	// 96 = 0x60
	int _modalTransitionStyle;	// 100 = 0x64
	int _modalPresentationStyle;	// 104 = 0x68
	int _lastKnownInterfaceOrientation;	// 108 = 0x6c
	UIPopoverController *_popoverController;	// 112 = 0x70
	UIView *_containerViewInSheet;	// 116 = 0x74
	CGSize _contentSizeForViewInPopover;	// 120 = 0x78
	CGSize _formSheetSize;	// 128 = 0x80
	id _afterAppearance;	// 136 = 0x88
	int _explicitAppearanceTransitionLevel;	// 140 = 0x8c
	struct {
		unsigned appearState : 2;
		unsigned isEditing : 1;
		unsigned isPerformingModalTransition : 1;
		unsigned hidesBottomBarWhenPushed : 1;
		unsigned autoresizesArchivedViewToFullSize : 1;
		unsigned viewLoadedFromControllerNib : 1;
		unsigned isRootViewController : 1;
		unsigned isSheet : 1;
		unsigned isSuspended : 1;
		unsigned wasApplicationFrameAtSuspend : 1;
		unsigned wantsFullScreenLayout : 1;
		unsigned shouldUseFullScreenLayout : 1;
		unsigned allowsAutorotation : 1;
		unsigned searchControllerRetained : 1;
		unsigned oldModalInPopover : 1;
		unsigned isModalInPopover : 1;
		unsigned restoreDeepestFirstResponder : 1;
		unsigned isInWillRotateCallback : 1;
		unsigned disallowMixedOrientationPresentations : 1;
		unsigned isFinishingModalTransition : 1;
		unsigned definesPresentationContext : 1;
		unsigned providesPresentationContextTransitionStyle : 1;
		unsigned containmentSupport : 1;
		unsigned isSettingAppearState : 1;
		unsigned isInAnimatedVCTransition : 1;
		unsigned presentationIsChanging : 1;
		unsigned containmentIsChanging : 1;
		unsigned explicitTransitionIsAppearing : 1;
		unsigned disableAppearanceTransitions : 1;
		unsigned needsDidMoveCleanup : 1;
		unsigned suppressesBottomBar : 1;
		unsigned disableRootPromotion : 1;
		unsigned interfaceOrientationReentranceGuard : 1;
		unsigned isExecutingAfterAppearance : 1;
	} _viewControllerFlags;	// 144 = 0x90
	NSMutableArray *_childViewControllers;	// 152 = 0x98
}
@property(readonly, assign, nonatomic) BOOL _isDimmingBackground;	// G=0x354edad1; 
@property(readonly, assign, nonatomic) BOOL _isModalSheet;	// G=0x353e8789; 
@property(readonly, assign, nonatomic) BOOL _isPresentedFormSheet;	// G=0x3547c041; 
@property(readonly, assign, nonatomic) BOOL _isPresentedModally;	// G=0x354a6f99; 
@property(readonly, assign, nonatomic) UIViewController *_parentModalViewController;	// G=0x35348915; 
@property(readonly, assign, nonatomic) UIViewController *_parentViewController;	// G=0x35344c7d; 
@property(readonly, assign, nonatomic) BOOL _useSheetRotation;	// G=0x354889e1; 
@property(copy, nonatomic) id afterAppearanceBlock;	// G=0x354efbd1; S=0x35349fe9; @synthesize=_afterAppearance
@property(assign, nonatomic) BOOL appearanceTransitionsAreDisabled;	// G=0x354ecb45; S=0x354ecb59; 
@property(assign) BOOL autoresizesArchivedViewToFullSize;	// G=0x354ec72d; S=0x354ec741; converted property
@property(retain, nonatomic) UIViewController *childModalViewController;	// G=0x353347c1; S=0x353e86f1; 
@property(readonly, assign, nonatomic) NSArray *childViewControllers;	// G=0x35333bcd; 
@property(readonly, assign, nonatomic) unsigned childViewControllersCount;	// G=0x35344b79; 
@property(assign) BOOL containmentSupport;	// G=0x35348541; S=0x35399c4d; converted property
@property(assign, nonatomic) CGSize contentSizeForViewInPopover;	// G=0x3539b34d; S=0x3539b389; @synthesize=_contentSizeForViewInPopover
@property(readonly, retain) id currentAction;	// G=0x353e86bd; converted property
@property(retain) UIResponder *defaultFirstResponder;	// G=0x353647e9; S=0x354ec261; converted property
@property(assign, nonatomic) BOOL definesPresentationContext;	// G=0x353e85e5; S=0x3533f6ed; 
@property(assign, nonatomic) BOOL disableRootPromotion;	// G=0x353e0c81; S=0x354eec71; 
@property(retain, nonatomic) UIDropShadowView *dropShadowView;	// G=0x3534a39d; S=0x354efc7d; @synthesize=_dropShadowView
@property(readonly, retain) UIBarButtonItem *editButtonItem;	// G=0x353598c9; converted property
@property(assign, getter=isEditing) BOOL editing;	// G=0x353786e1; S=0x3544eced; converted property
@property(assign, nonatomic, getter=isFinishingModalTransition) BOOL finishingModalTransition;	// G=0x354ed3d9; S=0x354ed3ed; 
@property(assign) CGSize formSheetSize;	// G=0x354eb239; S=0x3533f5c5; converted property
@property(assign, nonatomic) BOOL hidesBottomBarWhenPushed;	// G=0x35345275; S=0x3546f011; 
@property(assign, nonatomic, getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;	// G=0x35348901; S=0x35348939; 
@property(readonly, assign, nonatomic) BOOL inExplicitAppearanceTransition;	// G=0x35348759; 
@property(assign, nonatomic, getter=isInWillRotateCallback) BOOL inWillRotateCallback;	// G=0x3534a14d; S=0x35485f3d; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3537afe1; S=0x35349bfd; 
@property(readonly, assign, nonatomic) BOOL isSettingAppearState;	// G=0x3547c115; 
@property(assign) BOOL isSheet;	// G=0x35342151; S=0x354ed4b1; converted property
@property(assign, nonatomic) BOOL modalInPopover;	// G=0x354eb2f9; S=0x35434061; 
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x3539581d; S=0x353e8499; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x353e76a9; S=0x354efcb1; @synthesize=_modalTransitionStyle
@property(retain, nonatomic) UITransitionView *modalTransitionView;	// G=0x353a0df9; S=0x354ed415; 
@property(readonly, assign, nonatomic) UIViewController *modalViewController;	// G=0x35334771; 
@property(assign, nonatomic) NSMutableArray *mutableChildViewControllers;	// G=0x3533fbd5; S=0x354ec95d; @synthesize=_childViewControllers
@property(readonly, assign, nonatomic) UINavigationController *navigationController;	// G=0x353798dd; 
@property(readonly, assign, nonatomic) UINavigationItem *navigationItem;	// G=0x35333bf9; 
@property(assign, nonatomic) BOOL needsDidMoveCleanup;	// G=0x354ecb81; S=0x354ecb95; 
@property(retain, nonatomic) NSBundle *nibBundle;	// G=0x354ec5ad; S=0x354efc15; @synthesize=_nibBundle
@property(copy, nonatomic) NSString *nibName;	// G=0x353b371d; S=0x354efbe1; @synthesize=_nibName
@property(assign, nonatomic) UIViewController *parentModalViewController;	// G=0x354efca1; S=0x353e8761; @synthesize=_parentModalViewController
@property(assign, nonatomic) UIViewController *parentViewController;	// G=0x35333aa5; S=0x35344e85; 
@property(assign, getter=isPerformingModalTransition) BOOL performingModalTransition;	// G=0x35348925; S=0x354ed3b1; converted property
@property(readonly, assign, nonatomic) UIViewController *presentedViewController;	// G=0x35334781; 
@property(readonly, assign, nonatomic) UIViewController *presentingViewController;	// G=0x353a5d8d; 
@property(assign, nonatomic) BOOL providesPresentationContextTransitionStyle;	// G=0x35467dc1; S=0x354ee9c9; 
@property(readonly, assign, nonatomic) UIView *savedHeaderSuperview;	// G=0x354efc05; @synthesize=_savedHeaderSuperview
@property(assign, nonatomic) BOOL searchBarHidNavBar;	// G=0x354efa7d; S=0x354efab1; 
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController;	// G=0x353a5e29; S=0x354efa69; @dynamic
@property(readonly, assign, nonatomic) UISplitViewController *splitViewController;	// G=0x353553a5; 
@property(retain, nonatomic) UIStoryboard *storyboard;	// G=0x354efc39; @synthesize=_storyboard
@property(readonly, assign, nonatomic) NSArray *storyboardSegueTemplates;	// G=0x354efc6d; @synthesize=_storyboardSegueTemplates
@property(readonly, assign, nonatomic) UITabBarController *tabBarController;	// G=0x35333985; 
@property(retain, nonatomic) UITabBarItem *tabBarItem;	// G=0x3539ad5d; S=0x3539a9c9; 
@property(copy, nonatomic) NSString *title;	// G=0x35344b9d; S=0x35344bd5; @synthesize=_title
@property(retain) NSArray *toolbarItems;	// G=0x353b8559; S=0x353b84d1; converted property
@property(retain, nonatomic) UIView *view;	// G=0x3533fbe5; S=0x35344925; 
@property(assign, nonatomic) BOOL wantsFullScreenLayout;	// G=0x3533ff69; S=0x35399b45; 
+ (id)_allDescriptions;	// 0x354ed23d
+ (void)_disableNestedViewControllerSupport:(BOOL)support;	// 0x353b9625
+ (BOOL)_doesOverrideLegacyShouldAutorotateMethod;	// 0x35349c8d
+ (void)_forceLegacyModalViewControllers:(BOOL)controllers;	// 0x354eb229
+ (BOOL)_isNestedViewControllerSupportDisabled;	// 0x3533f6bd
+ (BOOL)_isViewSizeFullScreen:(id)screen inWindow:(id)window;	// 0x35363031
+ (BOOL)_isViewSizeFullScreen:(id)screen inWindow:(id)window ignoreInWindowCheck:(BOOL)windowCheck;	// 0x35349655
+ (int)_keyboardDirectionForTransition:(int)transition isOrderingIn:(BOOL)anIn;	// 0x35364661
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;	// 0x354ed541
+ (BOOL)_shouldUseLegacyModalViewControllers;	// 0x3534a201
+ (void)attemptRotationToDeviceOrientation;	// 0x354eee25
+ (double)customTransitionDuration;	// 0x353e5581
+ (CGSize)defaultFormSheetSize;	// 0x3533f5b1
+ (BOOL)doesOverrideViewControllerMethod:(SEL)method;	// 0x35349cb1
+ (double)durationForTransition:(int)transition;	// 0x35364719
+ (id)existingNibNameMatchingClassName:(id)name bundle:(id)bundle;	// 0x354ec4d1
+ (void)removeViewControllerForView:(id)view;	// 0x354ecec5
+ (void)setCustomTransitionDuration:(double)duration;	// 0x354eecfd
+ (void)setViewController:(id)controller forView:(id)view;	// 0x35344ae1
+ (id)viewControllerForView:(id)view;	// 0x35348515
- (id)init;	// 0x3533f25d
- (id)initWithCoder:(id)coder;	// 0x354eb69d
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3533f271
- (void)__viewDidAppear:(BOOL)__view;	// 0x353754fd
- (void)__viewDidDisappear:(BOOL)__view;	// 0x35379d9d
- (void)__viewWillAppear:(BOOL)__view;	// 0x35348ad9
- (void)__viewWillDisappear:(BOOL)__view;	// 0x35379ce5
- (void)_addChildViewController:(id)controller;	// 0x35344dd9
- (void)_addChildViewController:(id)controller performHierarchyCheck:(BOOL)check;	// 0x35344c8d
- (void)_addDismissButton;	// 0x354ee9f1
- (BOOL)_allowsAutorotation;	// 0x3534a981
- (BOOL)_ancestorViewControllerIsInPopover;	// 0x353e9c85
- (id)_ancestorViewControllerOfClass:(Class)aClass allowModalParent:(BOOL)parent;	// 0x35333a0d
- (int)_appearState;	// 0x35348c6d
- (id)_appearanceContainer;	// 0x354ec2a9
- (id)_backgroundColorForModalFormSheet;	// 0x354eece1
- (void)_beginAppearanceTransitionToViewController:(id)viewController animated:(BOOL)animated;	// 0x354ecbbd
- (void)_beginDisablingInterfaceAutorotation;	// 0x354eed11
- (CGRect)_boundsForOrientation:(int)orientation;	// 0x35488ac1
- (BOOL)_canReloadView;	// 0x3546e3a1
- (CGPoint)_centerForOrientation:(int)orientation;	// 0x35488a0d
- (void)_clearDismissButton;	// 0x35444055
- (void)_clearLastKnownInterfaceOrientation;	// 0x35444095
- (id)_completionBlock;	// 0x354026e9
- (BOOL)_containsFirstResponder;	// 0x35364495
- (CGRect)_defaultInitialViewFrame;	// 0x3533fef9
- (id)_description;	// 0x354ecf21
- (id)_descriptionWithChildren:(int)children;	// 0x354ed065
- (void)_didBecomeContentViewControllerOfPopover:(id)popover;	// 0x354eb5e1
- (void)_didFinishDismissTransition;	// 0x354440a9
- (void)_didFinishPresentTransition;	// 0x35402735
- (void)_didReceiveMemoryWarning:(id)warning;	// 0x354ed349
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x354eb5e9
- (void)_didRotateFromInterfaceOrientation:(int)interfaceOrientation forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x3548a2b9
- (BOOL)_didSelfOrAncestorBeginAppearanceTransition;	// 0x35348a89
- (BOOL)_disallowMixedOrientationPresentations;	// 0x353e9cc9
- (void)_dismissViewControllerWithTransition:(int)transition from:(id)from completion:(id)completion;	// 0x354436ad
- (BOOL)_displaysFullScreen;	// 0x35571e75
- (void)_doCommonSetup;	// 0x3533f321
- (BOOL)_doesSelfOrAncestorPassPredicate:(id)predicate;	// 0x354ecd29
- (void)_editingAnimationFinished;	// 0x35438171
- (BOOL)_endAppearanceTransition:(id)transition;	// 0x353a2c7d
- (void)_endAppearanceTransitionToViewController:(id)viewController;	// 0x354ecbed
- (void)_endDisablingInterfaceAutorotation;	// 0x354eed49
- (void)_endModalPresentationInPopover;	// 0x354eb281
- (void)_enumerateVisibleChildControllers:(BOOL)controllers includePresentedChildren:(BOOL)children usingBlock:(id)block;	// 0x35485fd9
- (void)_executeAfterAppearanceBlock;	// 0x353754a1
- (id)_existingNavigationItem;	// 0x3535f211
- (id)_existingTabBarItem;	// 0x3535f241
- (id)_existingView;	// 0x3533f6ad
- (id)_firstResponder;	// 0x35364515
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds;	// 0x354ed5d9
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds displayingTopView:(BOOL)view andBottomView:(BOOL)view3;	// 0x354ed555
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x35485a6d
- (void)_handleDismiss;	// 0x354eec1d
- (BOOL)_hasAppeared;	// 0x354ec9ed
- (int)_imagePickerStatusBarStyle;	// 0x35571e79
- (BOOL)_isAppearingOrAppeared;	// 0x3539fac9
// declared property getter: - (BOOL)_isDimmingBackground;	// 0x354edad1
- (BOOL)_isInterfaceAutorotationDisabled;	// 0x354eed81
// declared property getter: - (BOOL)_isModalSheet;	// 0x353e8789
- (BOOL)_isPresentationContextByDefault;	// 0x3533f6e9
// declared property getter: - (BOOL)_isPresentedFormSheet;	// 0x3547c041
// declared property getter: - (BOOL)_isPresentedModally;	// 0x354a6f99
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x35349d45
- (BOOL)_isViewControllerInWindowHierarchy;	// 0x3547408d
- (BOOL)_isViewInWindowWithoutParentViewController;	// 0x35379c51
- (void)_keyboardWillHide:(id)_keyboard;	// 0x354edfa1
- (void)_keyboardWillShow:(id)_keyboard;	// 0x354edb2d
- (int)_lastKnownInterfaceOrientation;	// 0x35349bed
- (void)_legacyDismissModalViewController:(id)controller withTransition:(int)transition;	// 0x354ee29d
- (void)_legacyModalDismissTransitionDidComplete;	// 0x354ee73d
- (void)_legacyModalPresentTransitionDidComplete;	// 0x354ee6ad
- (void)_legacyPresentModalViewController:(id)controller withTransition:(int)transition;	// 0x354ed635
- (void)_loadViewFromNibNamed:(id)nibNamed bundle:(id)bundle;	// 0x354ec2d1
- (id)_modalPresenter:(int)presenter;	// 0x353e84a9
- (id)_moreListTitle;	// 0x354efcc5
- (id)_nonModalAncestorViewController;	// 0x353e9c71
- (id)_nonModalAncestorViewControllerStopAtIsPresentationContext:(BOOL)isPresentationContext;	// 0x353e8575
- (id)_nonModalParentViewController;	// 0x3534201d
- (void)_notifyPopOverThatView:(id)view isTransitioning:(BOOL)transitioning;	// 0x353e5595
- (void)_overlayPresentAnimationDidStop:(id)_overlayPresentAnimation finished:(id)finished context:(id)context;	// 0x354ed459
// declared property getter: - (id)_parentModalViewController;	// 0x35348915
// declared property getter: - (id)_parentViewController;	// 0x35344c7d
- (id)_popoverController;	// 0x3534a0ed
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x354ebd71
- (int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)orientation;	// 0x3537b14d
- (void)_prepareForDismissalInPopover:(id)popover;	// 0x354eb699
- (void)_prepareForPresentationInPopover:(id)popover;	// 0x354eb695
- (void)_presentingViewControllerDidChange:(id)_presentingViewController;	// 0x354027d9
- (void)_presentingViewControllerWillChange:(id)_presentingViewController;	// 0x353e8771
- (id)_previousRootViewController;	// 0x354ec9b5
- (BOOL)_reallyWantsFullScreenLayout;	// 0x35348501
- (void)_removeChildViewController:(id)controller;	// 0x353959f5
- (void)_resetViewController;	// 0x354ee625
- (void)_resignRootViewController;	// 0x353d1235
- (id)_rootAncestorViewController;	// 0x353e9c35
- (id)_segueTemplateWithIdentifier:(id)identifier;	// 0x354ec7ed
- (void)_setAllowsAutorotation:(BOOL)autorotation;	// 0x3533f599
- (void)_setAppearState:(int)state;	// 0x354ec9d5
- (void)_setDisallowMixedOrientationPresentations:(BOOL)presentations;	// 0x354eec49
- (void)_setExistingNavigationItem:(id)item;	// 0x353b9795
- (void)_setExistingTabBarItem:(id)item;	// 0x354ec625
- (void)_setImagePickerMediaTypes:(id)types;	// 0x35571e81
- (void)_setInterfaceOrientationOnModalRecursively:(int)recursively;	// 0x354eef75
- (void)_setPopoverController:(id)controller;	// 0x354ed545
- (void)_setPreviousRootViewController:(id)controller;	// 0x354ec9c5
- (void)_setSearchDisplayController:(id)controller retain:(BOOL)retain;	// 0x3535568d
- (void)_setSearchDisplayControllerUnretained:(id)unretained;	// 0x35355679
- (void)_setStoryboard:(id)storyboard;	// 0x354efc49
- (void)_setSuppressesBottomBar:(BOOL)bar;	// 0x353d8c79
- (void)_setUseTelephonyUI:(BOOL)ui;	// 0x35571e7d
- (void)_setViewAppearState:(int)state isAnimating:(BOOL)animating;	// 0x35348b05
- (void)_sheetPresentAnimationDidStop;	// 0x354ed4c9
- (BOOL)_shouldAutoPinInputViewsForModalFormSheet;	// 0x354eec95
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;	// 0x35349615
- (BOOL)_shouldIgnoreTouchesForModalFormSheet;	// 0x354eecdd
- (BOOL)_shouldPersistViewWhenCoding;	// 0x354ebe19
- (BOOL)_shouldUseFullScreenLayout;	// 0x35341f89
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;	// 0x3534202d
- (BOOL)_shouldUseOnePartRotation;	// 0x3534a829
- (BOOL)_skipDefaultAppearStateCallbacks;	// 0x3547c0d5
- (void)_startModalPresentationInPopover;	// 0x354eb255
- (void)_startPresentCustomTransitionWithDuration:(double)duration;	// 0x354ee6a5
- (float)_statusBarHeightForCurrentInterfaceOrientation;	// 0x353420ed
- (BOOL)_suppressesBottomBar;	// 0x353452d1
- (void)_toggleEditing:(id)editing;	// 0x35433e75
- (int)_transitionForModalTransitionStyle:(int)modalTransitionStyle appearing:(BOOL)appearing;	// 0x353e76b9
- (BOOL)_tryBecomeRootViewControllerInWindow:(id)window;	// 0x3534a039
- (void)_updateInterfaceOrientationAnimated:(BOOL)animated;	// 0x354eedb9
- (void)_updateLastKnownInterfaceOrientationOnPresentionStack:(int)stack;	// 0x3547bfad
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x35349d95
- (void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;	// 0x354efcd9
// declared property getter: - (BOOL)_useSheetRotation;	// 0x354889e1
- (id)_viewForContentInPopover;	// 0x354eb311
- (id)_viewForModalPresentationInPopover;	// 0x354eb33d
- (id)_visibleView;	// 0x3534a171
- (void)_willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x35488ba1
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x354eb399
- (void)_willResignContentViewControllerOfPopover:(id)popover;	// 0x354eb5e5
- (void)_willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x35485e19
- (void)accessibilityLargeTextDidChange;	// 0x354efa61
- (void)addChildViewController:(id)controller;	// 0x353484d9
// declared property getter: - (id)afterAppearanceBlock;	// 0x354efbd1
// declared property getter: - (BOOL)appearanceTransitionsAreDisabled;	// 0x354ecb45
- (void)applicationDidResume;	// 0x353e3185
- (void)applicationWantsViewsToDisappear;	// 0x35379be1
- (void)applicationWillSuspend;	// 0x353785c1
- (void)attentionClassDumpUser:(id)user yesItsUsAgain:(id)again althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)fun itWasntMuchFunWhenYourAppStoppedWorking:(id)working pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)theFutureOkayThanksBye;	// 0x354efec1
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;	// 0x35348529
- (void)autoresizeArchivedView;	// 0x354ec759
// converted property getter: - (BOOL)autoresizesArchivedViewToFullSize;	// 0x354ec72d
- (void)awakeFromNib;	// 0x354ebce9
- (BOOL)beginAppearanceTransition:(BOOL)transition animated:(BOOL)animated;	// 0x353a27f1
- (BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;	// 0x354efcd5
- (void)cancelBeginAppearanceTransition;	// 0x354ecaed
// declared property getter: - (id)childModalViewController;	// 0x353347c1
// declared property getter: - (id)childViewControllers;	// 0x35333bcd
// declared property getter: - (unsigned)childViewControllersCount;	// 0x35344b79
// converted property getter: - (BOOL)containmentSupport;	// 0x35348541
- (id)contentScrollView;	// 0x3534c1d1
// declared property getter: - (CGSize)contentSizeForViewInPopover;	// 0x3539b34d
- (CGSize)contentSizeForViewInPopoverView;	// 0x3539b36d
// converted property getter: - (id)currentAction;	// 0x353e86bd
- (void)dealloc;	// 0x353d0e21
// converted property getter: - (id)defaultFirstResponder;	// 0x353647e9
- (id)defaultPNGName;	// 0x354efa65
// declared property getter: - (BOOL)definesPresentationContext;	// 0x353e85e5
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x354ef8dd
- (void)didMoveToParentViewController:(id)parentViewController;	// 0x353759e9
- (void)didReceiveMemoryWarning;	// 0x354ed359
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3548a3dd
// declared property getter: - (BOOL)disableRootPromotion;	// 0x353e0c81
- (BOOL)disablesAutomaticKeyboardDismissal;	// 0x354eec99
- (void)dismissModalViewControllerAnimated:(BOOL)animated;	// 0x353a5a71
- (void)dismissModalViewControllerWithTransition:(int)transition;	// 0x354b2ea5
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id)completion;	// 0x354ee685
- (void)dismissViewControllerWithTransition:(int)transition completion:(id)completion;	// 0x353a5a91
// declared property getter: - (id)dropShadowView;	// 0x3534a39d
- (double)durationForTransition:(int)transition;	// 0x353a0641
// converted property getter: - (id)editButtonItem;	// 0x353598c9
- (void)encodeWithCoder:(id)coder;	// 0x354ebe1d
- (BOOL)endAppearanceTransition;	// 0x353d1c29
- (id)existingView;	// 0x354ec615
- (void)forceUnloadView;	// 0x353a5929
// converted property getter: - (CGSize)formSheetSize;	// 0x354eb239
- (BOOL)forwardRotationMethods;	// 0x35485e01
- (void)getRotationContentSettings:(XXStruct_tXAZTC *)settings forWindow:(id)window;	// 0x354859e9
// declared property getter: - (BOOL)hidesBottomBarWhenPushed;	// 0x35345275
// declared property getter: - (BOOL)inExplicitAppearanceTransition;	// 0x35348759
// declared property getter: - (int)interfaceOrientation;	// 0x3537afe1
- (BOOL)isBeingDismissed;	// 0x354efb1d
- (BOOL)isBeingPresented;	// 0x354efae1
// converted property getter: - (BOOL)isEditing;	// 0x353786e1
// declared property getter: - (BOOL)isFinishingModalTransition;	// 0x354ed3d9
// declared property getter: - (BOOL)isInAnimatedVCTransition;	// 0x35348901
// declared property getter: - (BOOL)isInWillRotateCallback;	// 0x3534a14d
- (BOOL)isModalInPopover;	// 0x354eb2b9
- (BOOL)isMovingFromParentViewController;	// 0x354efb95
- (BOOL)isMovingToParentViewController;	// 0x354efb59
// converted property getter: - (BOOL)isPerformingModalTransition;	// 0x35348925
// declared property getter: - (BOOL)isSettingAppearState;	// 0x3547c115
// converted property getter: - (BOOL)isSheet;	// 0x35342151
- (BOOL)isUsingLegacyContainment;	// 0x354eca25
- (BOOL)isViewControllerModallyPresented;	// 0x354ec99d
- (BOOL)isViewLoaded;	// 0x35348e3d
- (void)loadView;	// 0x353c9c01
// declared property getter: - (BOOL)modalInPopover;	// 0x354eb2f9
// declared property getter: - (int)modalPresentationStyle;	// 0x3539581d
// declared property getter: - (int)modalTransitionStyle;	// 0x353e76a9
// declared property getter: - (id)modalTransitionView;	// 0x353a0df9
// declared property getter: - (id)modalViewController;	// 0x35334771
- (id)moreListImage;	// 0x354efcc9
- (id)moreListSelectedImage;	// 0x354efccd
- (id)moreListTableCell;	// 0x354efcd1
// declared property getter: - (id)mutableChildViewControllers;	// 0x3533fbd5
// declared property getter: - (id)navigationController;	// 0x353798dd
// declared property getter: - (id)navigationItem;	// 0x35333bf9
// declared property getter: - (BOOL)needsDidMoveCleanup;	// 0x354ecb81
- (id)nextResponder;	// 0x3536446d
// declared property getter: - (id)nibBundle;	// 0x354ec5ad
// declared property getter: - (id)nibName;	// 0x353b371d
// declared property getter: - (id)parentModalViewController;	// 0x354efca1
// declared property getter: - (id)parentViewController;	// 0x35333aa5
- (void)performSegueWithIdentifier:(id)identifier sender:(id)sender;	// 0x354ec8b9
- (void)prepareForSegue:(id)segue sender:(id)sender;	// 0x354ec955
- (void)presentModalViewController:(id)controller animated:(BOOL)animated;	// 0x35443689
- (void)presentModalViewController:(id)controller withTransition:(int)transition;	// 0x354b2001
- (void)presentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;	// 0x353e7601
- (void)presentViewController:(id)controller withTransition:(int)transition completion:(id)completion;	// 0x353e7735
// declared property getter: - (id)presentedViewController;	// 0x35334781
// declared property getter: - (id)presentingViewController;	// 0x353a5d8d
// declared property getter: - (BOOL)providesPresentationContextTransitionStyle;	// 0x35467dc1
- (void)purgeMemoryForReason:(int)reason;	// 0x354ed36d
- (void)removeChildViewController:(id)controller;	// 0x35473c19
- (void)removeChildViewController:(id)controller notifyDidMove:(BOOL)notify;	// 0x35395999
- (void)removeFromParentViewController;	// 0x35473bed
- (id)rotatingContentViewForWindow:(id)window;	// 0x3534a161
- (id)rotatingFooterView;	// 0x354eef71
- (id)rotatingFooterViewForWindow:(id)window;	// 0x35485979
- (id)rotatingHeaderView;	// 0x354eef49
- (id)rotatingHeaderViewForWindow:(id)window;	// 0x354858d5
// declared property getter: - (id)savedHeaderSuperview;	// 0x354efc05
// declared property getter: - (BOOL)searchBarHidNavBar;	// 0x354efa7d
// declared property getter: - (id)searchDisplayController;	// 0x353a5e29
// declared property setter: - (void)setAfterAppearanceBlock:(id)block;	// 0x35349fe9
// declared property setter: - (void)setAppearanceTransitionsAreDisabled:(BOOL)disabled;	// 0x354ecb59
// converted property setter: - (void)setAutoresizesArchivedViewToFullSize:(BOOL)fullSize;	// 0x354ec741
// declared property setter: - (void)setChildModalViewController:(id)controller;	// 0x353e86f1
// converted property setter: - (void)setContainmentSupport:(BOOL)support;	// 0x35399c4d
// declared property setter: - (void)setContentSizeForViewInPopover:(CGSize)popover;	// 0x3539b389
// converted property setter: - (void)setDefaultFirstResponder:(id)responder;	// 0x354ec261
// declared property setter: - (void)setDefinesPresentationContext:(BOOL)context;	// 0x3533f6ed
// declared property setter: - (void)setDisableRootPromotion:(BOOL)promotion;	// 0x354eec71
// declared property setter: - (void)setDropShadowView:(id)view;	// 0x354efc7d
// converted property setter: - (void)setEditing:(BOOL)editing;	// 0x3544eced
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x35433eb1
// declared property setter: - (void)setFinishingModalTransition:(BOOL)transition;	// 0x354ed3ed
// converted property setter: - (void)setFormSheetSize:(CGSize)size;	// 0x3533f5c5
// declared property setter: - (void)setHidesBottomBarWhenPushed:(BOOL)pushed;	// 0x3546f011
// declared property setter: - (void)setInAnimatedVCTransition:(BOOL)animatedVCTransition;	// 0x35348939
// declared property setter: - (void)setInWillRotateCallback:(BOOL)rotateCallback;	// 0x35485f3d
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x35349bfd
// converted property setter: - (void)setIsSheet:(BOOL)sheet;	// 0x354ed4b1
// declared property setter: - (void)setModalInPopover:(BOOL)popover;	// 0x35434061
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x353e8499
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x354efcb1
// declared property setter: - (void)setModalTransitionView:(id)view;	// 0x354ed415
// declared property setter: - (void)setMutableChildViewControllers:(id)controllers;	// 0x354ec95d
// declared property setter: - (void)setNeedsDidMoveCleanup:(BOOL)moveCleanup;	// 0x354ecb95
// declared property setter: - (void)setNibBundle:(id)bundle;	// 0x354efc15
// declared property setter: - (void)setNibName:(id)name;	// 0x354efbe1
// declared property setter: - (void)setParentModalViewController:(id)controller;	// 0x353e8761
// declared property setter: - (void)setParentViewController:(id)controller;	// 0x35344e85
// converted property setter: - (void)setPerformingModalTransition:(BOOL)transition;	// 0x354ed3b1
// declared property setter: - (void)setProvidesPresentationContextTransitionStyle:(BOOL)style;	// 0x354ee9c9
// declared property setter: - (void)setSearchBarHidNavBar:(BOOL)bar;	// 0x354efab1
// declared property setter: - (void)setSearchDisplayController:(id)controller;	// 0x354efa69
// declared property setter: - (void)setTabBarItem:(id)item;	// 0x3539a9c9
// declared property setter: - (void)setTitle:(id)title;	// 0x35344bd5
// converted property setter: - (void)setToolbarItems:(id)items;	// 0x353b84d1
- (void)setToolbarItems:(id)items animated:(BOOL)animated;	// 0x353b84e5
- (void)setUseLegacyContainment:(BOOL)containment;	// 0x354eca09
// declared property setter: - (void)setView:(id)view;	// 0x35344925
// declared property setter: - (void)setWantsFullScreenLayout:(BOOL)layout;	// 0x35399b45
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x354eeed5
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;	// 0x3534a801
// declared property getter: - (id)splitViewController;	// 0x353553a5
// declared property getter: - (id)storyboard;	// 0x354efc39
// declared property getter: - (id)storyboardSegueTemplates;	// 0x354efc6d
// declared property getter: - (id)tabBarController;	// 0x35333985
// declared property getter: - (id)tabBarItem;	// 0x3539ad5d
// declared property getter: - (id)title;	// 0x35344b9d
// converted property getter: - (id)toolbarItems;	// 0x353b8559
- (CGAffineTransform)tranformForScreenOriginRotation:(float)screenOriginRotation;	// 0x354ef095
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2 duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x354efd09
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x353a0d39
- (BOOL)transitionViewShouldUseViewControllerCallbacks;	// 0x354ee6a9
- (void)unloadView;	// 0x354ec5fd
- (void)unloadViewForced:(BOOL)forced;	// 0x353a593d
- (void)unloadViewIfReloadable;	// 0x3546e38d
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x354efcc1
- (void)updateTitleForViewController:(id)viewController;	// 0x3535f2ad
- (void)userDidCancelPopoverView:(id)user;	// 0x354ed621
// declared property getter: - (id)view;	// 0x3533fbe5
- (id)viewControllerForRotation;	// 0x3534a22d
- (void)viewDidAppear:(BOOL)view;	// 0x35375579
- (void)viewDidDisappear:(BOOL)view;	// 0x35379e19
- (void)viewDidLayoutSubviews;	// 0x3534b30d
- (void)viewDidLoad;	// 0x35344b99
- (void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;	// 0x35348fd1
- (void)viewDidUnload;	// 0x354ec611
- (void)viewWillAppear:(BOOL)view;	// 0x35348c4d
- (void)viewWillDisappear:(BOOL)view;	// 0x35379d11
- (void)viewWillLayoutSubviews;	// 0x3534b309
- (void)viewWillMoveToWindow:(id)view;	// 0x35348961
- (void)viewWillUnload;	// 0x3546e415
// declared property getter: - (BOOL)wantsFullScreenLayout;	// 0x3533ff69
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354ef8ad
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35488d25
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354efa19
- (void)willMoveToParentViewController:(id)parentViewController;	// 0x35344e95
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35485fd5
- (void)window:(id)window didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x354ef8b1
- (void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x35489f71
- (void)window:(id)window resizeFromOrientation:(int)orientation;	// 0x354ef1b9
- (BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3534a92d
- (void)window:(id)window willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354ef6e1
- (void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;	// 0x354ec669
- (void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354886ed
- (void)window:(id)window willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x354ef8e1
- (void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x35485a91
@end
