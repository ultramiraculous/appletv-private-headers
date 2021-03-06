/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "NSISEngineDelegate.h"

@class UIResponder, NSMutableSet, NSArray, CALayer, NSUndoManager, UIScreen, NSISEngine, UIColor, NSMutableArray, UIViewController;

@interface UIWindow : UIView <NSISEngineDelegate> {
	id _delegate;	// 84 = 0x54
	float _windowLevel;	// 88 = 0x58
	float _windowSublevel;	// 92 = 0x5c
	id _layerContext;	// 96 = 0x60
	UIView *_lastMouseDownView;	// 100 = 0x64
	UIView *_lastMouseEnteredView;	// 104 = 0x68
	UIResponder *_firstResponder;	// 108 = 0x6c
	id _fingerInfo;	// 112 = 0x70
	id _touchData;	// 116 = 0x74
	int _viewOrientation;	// 120 = 0x78
	UIView *_exclusiveTouchView;	// 124 = 0x7c
	NSUndoManager *_undoManager;	// 128 = 0x80
	UIScreen *_screen;	// 132 = 0x84
	CALayer *_transformLayer;	// 136 = 0x88
	NSMutableArray *_rotationViewControllers;	// 140 = 0x8c
	UIViewController *_rootViewController;	// 144 = 0x90
	UIColor *_savedBackgroundColor;	// 148 = 0x94
	NSMutableSet *_subtreeMonitoringViews;	// 152 = 0x98
	NSMutableSet *_tintViews;	// 156 = 0x9c
	id _currentTintView;	// 160 = 0xa0
	struct {
		unsigned delegateWillRotate : 1;
		unsigned delegateDidRotate : 1;
		unsigned delegateWillAnimateFirstHalf : 1;
		unsigned delegateDidAnimationFirstHalf : 1;
		unsigned delegateWillAnimateSecondHalf : 1;
		unsigned autorotatesToPortrait : 1;
		unsigned autorotatesToPortraitUpsideDown : 1;
		unsigned autorotatesToLandscapeLeft : 1;
		unsigned autorotatesToLandscapeRight : 1;
		unsigned dontBecomeKeyOnOrderFront : 1;
		unsigned output : 1;
		unsigned inGesture : 1;
		unsigned bitsPerComponent : 4;
		unsigned autorotates : 1;
		unsigned isRotating : 1;
		unsigned isUsingOnePartRotationAnimation : 1;
		unsigned isHandlingContentRotation : 1;
		unsigned disableAutorotationCount : 4;
		unsigned needsAutorotationWhenReenabled : 1;
		unsigned forceTwoPartRotationAnimation : 1;
		unsigned orderKeyboardInAfterRotating : 1;
		unsigned roundedCorners : 4;
		unsigned resizesToFullScreen : 1;
		unsigned keepContextInBackground : 1;
		unsigned ignoreSetHidden : 1;
		unsigned forceVisibleOnInit : 1;
		unsigned settingFirstResponder : 1;
		unsigned legacyOrientationChecks : 1;
		unsigned windowResizedToFullScreen : 1;
	} _windowFlags;	// 164 = 0xa4
	id _windowController;	// 172 = 0xac
	NSArray *_windowInternalConstraints;	// 176 = 0xb0
	NSArray *_rootViewConstraints;	// 180 = 0xb4
	NSISEngine *_layoutEngine;	// 184 = 0xb8
	id _deferredLaunchBlock;	// 188 = 0xbc
	BOOL __usesLegacySupportedOrientationChecks;	// 192 = 0xc0
}
@property(copy, nonatomic, setter=_setDeferredLaunchBlock:) id _deferredLaunchBlock;	// G=0x32e6af89; S=0x32e6af9d; @synthesize
@property(retain, nonatomic, setter=_setLayoutEngine:) NSISEngine *_layoutEngine;	// G=0x32e6af69; S=0x32e6af79; @synthesize
@property(copy, nonatomic, setter=_setRootViewConstraints:) NSArray *_rootViewConstraints;	// G=0x32e6af45; S=0x32e6af59; @synthesize
@property(readonly, assign, nonatomic) BOOL _usesLegacySupportedOrientationChecks;	// G=0x32e6afad; @synthesize=__usesLegacySupportedOrientationChecks
@property(copy, nonatomic, setter=_setWindowInternalConstraints:) NSArray *_windowInternalConstraints;	// G=0x32e6af31; S=0x32de1695; @synthesize
@property(assign) BOOL autorotates;	// G=0x32e69bcd; S=0x32e696f1; converted property
@property(retain) id contentView;	// G=0x32e6a41d; S=0x32e67d29; converted property
@property(assign) id delegate;	// G=0x32cf10a1; S=0x32cf10b1; converted property
@property(readonly, retain) UIResponder *firstResponder;	// G=0x32c8d19d; converted property
@property(assign) BOOL keepContextInBackground;	// G=0x32c8e6ad; S=0x32e6ad85; converted property
@property(readonly, assign, nonatomic, getter=isKeyWindow) BOOL keyWindow;	// G=0x32c8d5e5; 
@property(assign) float level;	// G=0x32c9970d; S=0x32e68945; converted property
@property(assign) BOOL resizesToFullScreen;	// G=0x32e6ad55; S=0x32e6ad69; converted property
@property(retain, nonatomic) UIViewController *rootViewController;	// G=0x32cf1af9; S=0x32d32fc1; @synthesize=_rootViewController
@property(retain, nonatomic) UIScreen *screen;	// G=0x32c98961; S=0x32e6a0c1; 
@property(readonly, retain) NSUndoManager *undoManager;	// G=0x32e6a4b5; converted property
@property(assign, nonatomic) float windowLevel;	// G=0x32c995ad; S=0x32ce7e31; 
+ (void)__popKeyWindow:(id)window findNewKeyWindowIfStackEmpty:(BOOL)empty;	// 0x32d71381
+ (void)_clearKeyWindowStack;	// 0x32e6a2f9
+ (void)_executeDeferredLaunchBlocks;	// 0x32e694ad
+ (id)_findWithDisplayPoint:(CGPoint)displayPoint;	// 0x32d6c0e5
+ (id)_hitTestToPoint:(CGPoint)point pathIndex:(int)index forEvent:(id)event;	// 0x32c987fd
+ (unsigned)_keyWindowStackSize;	// 0x32ddef99
+ (void)_noteStatusBarHeightChanged:(float)changed oldHeight:(float)height;	// 0x32e6a57d
+ (void)_noteStatusBarHeightChanged:(float)changed oldHeight:(float)height forAutolayoutRootViewsOnly:(BOOL)autolayoutRootViewsOnly;	// 0x32e6a5a1
+ (void)_popKeyWindow;	// 0x32d71345
+ (void)_popKeyWindow:(id)window;	// 0x32e6a311
+ (void)_prepareWindowsForAppResume;	// 0x32e31361
+ (void)_prepareWindowsForAppSuspend;	// 0x32d1508d
+ (void)_pushKeyWindow:(id)window;	// 0x32db97f5
+ (void)_removeWindowFromStack:(id)stack;	// 0x32e6a355
+ (void)_setKeyWindowStackEnabled:(BOOL)enabled;	// 0x32d76b25
+ (void)_synchronizeDrawing;	// 0x32cfd1c5
+ (unsigned)_synchronizeDrawingAcrossProcesses;	// 0x32de11d1
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)port;	// 0x32d0ce2d
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)port withPreCommitHandler:(id)preCommitHandler;	// 0x32e69cdd
+ (unsigned)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id)preCommitHandler;	// 0x32de11e5
+ (id)_topVisibleWindowPassingTest:(id)test;	// 0x32c988a5
+ (id)allWindowsIncludingInternalWindows:(BOOL)windows onlyVisibleWindows:(BOOL)windows2;	// 0x32c995dd
+ (CGRect)constrainFrameToScreen:(CGRect)screen;	// 0x32ce9191
+ (void *)createIOSurfaceWithContextId:(unsigned)contextId frame:(CGRect)frame;	// 0x32e6a6c9
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame;	// 0x32e6a709
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame outTransform:(CGAffineTransform *)transform;	// 0x32e6a745
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame usePurpleGfx:(BOOL)gfx outTransform:(CGAffineTransform *)transform;	// 0x32e6a785
+ (void *)createScreenIOSurface;	// 0x32e6aaed
+ (id)keyWindow;	// 0x32c99511
+ (Class)layerClass;	// 0x32ce1e2d
+ (void)setAllWindowsKeepContextInBackground:(BOOL)background;	// 0x32e67f75
- (id)initWithCoder:(id)coder;	// 0x32e67b09
- (id)initWithContentRect:(CGRect)contentRect;	// 0x32ce9119
- (id)initWithFrame:(CGRect)frame;	// 0x32ce1d35
- (id)__clientsForRotationCallbacks;	// 0x32d34c69
- (void)_addRotationViewController:(id)controller;	// 0x32e22471
- (void)_addTintView:(id)view;	// 0x32cefc41
- (BOOL)_affectsTintView;	// 0x32ce7fe9
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x32e6a4ad
- (void)_beginModalSession;	// 0x32ddf555
- (BOOL)_canBecomeKeyWindow;	// 0x32cfaa0d
- (BOOL)_canPromoteFromKeyWindowStack;	// 0x32de0aa1
- (id)_centerExpressionInContainer:(id)container vertical:(BOOL)vertical;	// 0x330c99cd
- (float)_classicOffset;	// 0x32f22231
- (BOOL)_clearMouseView;	// 0x32cff689
- (void)_clearPendingKeyboardChanges;	// 0x32e691d5
- (id)_clientsForRotation;	// 0x32d3493d
- (void)_commonInit;	// 0x32ce3059
- (void)_constraints_subviewWillChangeSuperview:(id)_constraints_subview;	// 0x330c9c99
- (BOOL)_containedInAbsoluteResponderChain;	// 0x32e68891
- (unsigned)_contextId;	// 0x32c9971d
- (CGPoint)_convertOffset:(CGPoint)offset fromWindow:(id)window;	// 0x32e1a87d
- (CGPoint)_convertOffset:(CGPoint)offset toWindow:(id)window;	// 0x32e687f9
- (void)_createContext;	// 0x32ce35d9
- (id)_currentTintView;	// 0x32cfa1a5
// declared property getter: - (id)_deferredLaunchBlock;	// 0x32e6af89
- (void)_destroyContext;	// 0x32d15139
- (BOOL)_disableGroupOpacity;	// 0x32ce9319
- (BOOL)_disableViewScaling;	// 0x32e68065
- (void)_endModalSession;	// 0x32de125d
- (id)_exclusiveTouchView;	// 0x32c9ac95
- (unsigned)_expectedWindowInternalConstraintsCount;	// 0x330c9ad1
- (void)_finishedFirstHalfRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x32e698bd
- (void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x32e14ef9
- (void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context skipNotification:(BOOL)notification;	// 0x32d35789
- (id)_firstResponder;	// 0x32c8d161
- (void)_forceTwoPartRotationAnimation:(BOOL)animation;	// 0x32e6972d
- (void)_handleDeviceOrientationChange:(id)change;	// 0x32cfaf09
- (void)_handleStatusBarOrientationChange:(id)change;	// 0x32e13e3d
- (BOOL)_hasContext;	// 0x32cfd1ed
- (BOOL)_ignoresHitTest;	// 0x32c9895d
- (BOOL)_includeInDefaultImageSnapshot;	// 0x32d14c7d
- (void)_initializeLayoutEngine;	// 0x330c0a2d
- (void)_invalidateWindowInternalConstraints;	// 0x330c9a75
- (BOOL)_isAnyWindowRotating;	// 0x32e13e91
- (BOOL)_isHostedInAnotherProcess;	// 0x32c8e651
- (BOOL)_isLoweringAnchoringConstraints;	// 0x330c99a9
- (BOOL)_isScrollingEnabledForView:(id)view;	// 0x32e4fd09
- (BOOL)_isSettingFirstResponder;	// 0x32c8d11d
- (BOOL)_isStatusBarWindow;	// 0x32e6a579
- (BOOL)_isTextEffectsWindow;	// 0x32f231dd
- (BOOL)_isWindowServerHostingManaged;	// 0x32ce3bb1
// declared property getter: - (id)_layoutEngine;	// 0x32e6af69
- (id)_layoutEngineConsultingOverride;	// 0x330c0bf9
- (id)_layoutEngineCreateIfNecessary;	// 0x330c0b41
- (id)_layoutEngineCreateIfNecessaryConsultingOverride;	// 0x330c0bd9
- (id)_layoutEngineIfAvailable;	// 0x330c0b81
- (id)_layoutEngineIfAvailableConsultingOverride;	// 0x330c0be9
- (BOOL)_legacyShouldAutorotateToInterfaceOrientation:(int)_legacy;	// 0x32e691ed
- (void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)window;	// 0x32cfa8a1
- (void)_matchDeviceBounds;	// 0x32f231e1
- (BOOL)_needsShakesWhenInactive;	// 0x32e6a4b1
- (void)_orderContextToFront;	// 0x32ce4105
- (void)_orderFrontWithoutMakingKey;	// 0x32ce7eb5
- (void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;	// 0x32e68b65
- (void)_rebuildLayoutFromScratch;	// 0x330c0c09
- (id)_redundantConstraints;	// 0x330c0cbd
- (void)_registerChargedView:(id)view;	// 0x32d06465
- (void)_registerScrollToTopView:(id)topView;	// 0x32cffa29
- (void)_registerSwipeView:(id)view;	// 0x32cff921
- (void)_registerViewForSubtreeMonitoring:(id)subtreeMonitoring;	// 0x32dcba31
- (id)_registeredScrollToTopViews;	// 0x32e6a465
- (void)_removeRotationViewController:(id)controller;	// 0x32e2eb5d
- (void)_removeTintView:(id)view;	// 0x32d55a69
- (void)_resignKeyWindowStatus;	// 0x32db98b5
- (void)_resizeWindowToFullScreenIfNecessary;	// 0x32e6ae9d
// declared property getter: - (id)_rootViewConstraints;	// 0x32e6af45
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)view;	// 0x32e68289
- (id)_rotationViewControllers;	// 0x32cf13e9
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(CGPoint)topViewsUnderScreenPointIfNecessary resultHandler:(id)handler;	// 0x32e4f521
- (void)_sendGesturesForEvent:(id)event;	// 0x32c9b249
- (void)_sendTouchesForEvent:(id)event;	// 0x32c9b745
// declared property setter: - (void)_setDeferredLaunchBlock:(id)block;	// 0x32e6af9d
- (void)_setExclusiveTouchView:(id)view;	// 0x32db1321
- (void)_setFirstResponder:(id)responder;	// 0x32c8d30d
- (void)_setHidden:(BOOL)hidden forced:(BOOL)forced;	// 0x32ce3ce1
- (void)_setIsLoweringAnchoringConstraints:(BOOL)constraints;	// 0x330c994d
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x32c8d205
- (void)_setLayerHidden:(BOOL)hidden;	// 0x32ce3ef1
// declared property setter: - (void)_setLayoutEngine:(id)engine;	// 0x32e6af79
- (void)_setMouseDownView:(id)view withEvent:(GSEventRef)event;	// 0x32de16e9
- (void)_setMouseEnteredView:(id)view;	// 0x32cff705
// declared property setter: - (void)_setRootViewConstraints:(id)constraints;	// 0x32e6af59
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x32e69825
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force;	// 0x32d337d9
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force isRotating:(BOOL)rotating;	// 0x32d33811
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration;	// 0x32e69709
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x32d3374d
// declared property setter: - (void)_setWindowInternalConstraints:(id)constraints;	// 0x32de1695
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32d332a5
- (void)_slideFooterFromOrientation:(int)orientation toOrientation:(int)orientation2 startSnapshot:(id)snapshot endSnapshot:(id)snapshot4 duration:(double)duration;	// 0x32e68db1
- (void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;	// 0x32e68955
- (id)_subtreeMonitorsForView:(id)view;	// 0x32ca8469
- (unsigned)_supportedInterfaceOrientationsForRootViewController;	// 0x32e69329
- (void)_tagAsSpringboardPresentationWindow;	// 0x32e67df1
- (id)_targetForStolenStatusBarTouchesAtPoint:(CGPoint)point withEvent:(id)event excludingWindow:(id)window;	// 0x32e4b3bd
- (void)_tintViewDidChangeAppearance:(id)_tintView;	// 0x32deedf5
- (id)_touchData;	// 0x32c9a3d5
- (CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)windowCoordinates;	// 0x32d6bff9
- (void)_transformLayerShouldMaskToBounds:(BOOL)_transformLayer;	// 0x32e67f55
- (id)_uiib_candidateRedundantConstraints;	// 0x330c0c95
- (id)_uiib_layoutEngineCreatingIfNecessary;	// 0x330c0c85
- (void)_unregisterChargedView:(id)view;	// 0x32d3e8a5
- (void)_unregisterScrollToTopView:(id)topView;	// 0x32d71779
- (void)_unregisterSwipeView:(id)view;	// 0x32d715d9
- (void)_unregisterViewForSubtreeMonitoring:(id)subtreeMonitoring;	// 0x32dcd71d
- (void)_updateAppTintView;	// 0x32cefe45
- (void)_updateConstraintsAtWindowLevelIfNeeded;	// 0x330c9c89
- (void)_updateCurrentTintView;	// 0x32ce200d
- (void)_updateCurrentTintViewForPotentialTintView:(id)potentialTintView;	// 0x32c8a119
- (void)_updateInterfaceOrientationFromDeviceOrientation;	// 0x32e696dd
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)deviceOrientation;	// 0x32cfafe9
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)deviceOrientationIfRotationEnabled;	// 0x32cfaf79
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;	// 0x32e680d5
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32e697f5
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration fenceID:(int)anId animation:(int)animation;	// 0x32e69745
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x32e69591
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration force:(BOOL)force;	// 0x32cf1919
- (void)_updateTransformLayer;	// 0x32ce318d
- (void)_updateTransformLayerForClassicPresentation;	// 0x32e67e09
// declared property getter: - (BOOL)_usesLegacySupportedOrientationChecks;	// 0x32e6afad
- (BOOL)_usesWindowServerHitTesting;	// 0x32c9973d
- (id)_window;	// 0x32ea0a8d
- (int)_windowInterfaceOrientation;	// 0x32e69be5
// declared property getter: - (id)_windowInternalConstraints;	// 0x32e6af31
- (void)_windowInternalConstraints_centerDidChange;	// 0x330c9bc9
- (void)_windowInternalConstraints_sizeDidChange;	// 0x330c9af1
- (void)_writeLayerTreeToPath:(id)path;	// 0x32e6ae11
- (void)addRootViewControllerViewIfPossible;	// 0x32ce8099
// converted property getter: - (BOOL)autorotates;	// 0x32e69bcd
- (void)awakeFromNib;	// 0x32e67ce9
- (void)becomeKeyWindow;	// 0x32cfaa15
- (void)beginDisablingInterfaceAutorotation;	// 0x32cff74d
- (int)bitsPerComponent;	// 0x32e6a0ad
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32d6bb05
- (void)constraintsDidChangeInEngine:(id)constraints;	// 0x330c8f41
// converted property getter: - (id)contentView;	// 0x32e6a41d
- (CGPoint)convertDeviceToWindow:(CGPoint)window;	// 0x32e688ed
- (CGPoint)convertPoint:(CGPoint)point fromWindow:(id)window;	// 0x32c99e6d
- (CGPoint)convertPoint:(CGPoint)point toWindow:(id)window;	// 0x32c9c621
- (CGRect)convertRect:(CGRect)rect fromWindow:(id)window;	// 0x32ce2781
- (CGRect)convertRect:(CGRect)rect toWindow:(id)window;	// 0x32ccd059
- (CGPoint)convertWindowToDevice:(CGPoint)device;	// 0x32e68895
- (void *)createIOSurface;	// 0x32e6ac59
- (void *)createIOSurfaceWithFrame:(CGRect)frame;	// 0x32e6ac01
- (void)dealloc;	// 0x32de1369
- (id)defaultFirstResponder;	// 0x32cfabe9
// converted property getter: - (id)delegate;	// 0x32cf10a1
- (void)encodeWithCoder:(id)coder;	// 0x32e67c59
- (void)endDisablingInterfaceAutorotation;	// 0x32d0756d
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)animated;	// 0x32d07585
- (id)engine:(id)engine markerForConstraintToBreakAmongConstraints:(id)breakAmongConstraints;	// 0x330c8f45
- (void)engine:(id)engine willBreakConstraint:(id)constraint dueToMutuallyExclusiveConstraints:(id)mutuallyExclusiveConstraints;	// 0x330c9279
// converted property getter: - (id)firstResponder;	// 0x32c8d19d
- (void)handleStatusBarChangeFromHeight:(float)height toHeight:(float)height2;	// 0x32e69e11
- (int)interfaceOrientation;	// 0x32c8e4ed
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f27311
- (BOOL)isInterfaceAutorotationDisabled;	// 0x32cfafc9
- (BOOL)isInternalWindow;	// 0x32ce800d
// declared property getter: - (BOOL)isKeyWindow;	// 0x32c8d5e5
- (BOOL)isRotating;	// 0x32cb8d2d
- (BOOL)isUsingOnePartRotationAnimation;	// 0x32d6f599
// converted property getter: - (BOOL)keepContextInBackground;	// 0x32c8e6ad
- (void)layoutSublayersOfLayer:(id)layer;	// 0x32cfb639
// converted property getter: - (float)level;	// 0x32c9970d
- (void)makeKey:(id)key;	// 0x32e6847d
- (void)makeKeyAndOrderFront:(id)front;	// 0x32d6134d
- (void)makeKeyAndVisible;	// 0x32d2550d
- (void)makeKeyWindow;	// 0x32cfa88d
- (void)matchDeviceOrientation;	// 0x32f221f5
- (id)nextResponder;	// 0x32c8dd49
- (void)orderFront:(id)front;	// 0x32cfa15d
- (void)orderOut:(id)anOut;	// 0x32e4ace9
- (void)redo:(id)redo;	// 0x32e6a53d
- (void)removeFromSuperview;	// 0x32e6addd
- (id)representation;	// 0x32dd4a41
- (void)resignKeyWindow;	// 0x32db9971
// converted property getter: - (BOOL)resizesToFullScreen;	// 0x32e6ad55
// declared property getter: - (id)rootViewController;	// 0x32cf1af9
// declared property getter: - (id)screen;	// 0x32c98961
- (void)sendEvent:(id)event;	// 0x32c9b0b9
// converted property setter: - (void)setAutorotates:(BOOL)autorotates;	// 0x32e696f1
- (void)setAutorotates:(BOOL)autorotates forceUpdateInterfaceOrientation:(BOOL)orientation;	// 0x32cf1481
- (void)setBecomeKeyOnOrderFront:(BOOL)front;	// 0x32d0135d
- (void)setBounds:(CGRect)bounds;	// 0x32d018a5
- (void)setCenter:(CGPoint)center;	// 0x32d01981
// converted property setter: - (void)setContentView:(id)view;	// 0x32e67d29
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32cf10b1
- (void)setFrame:(CGRect)frame;	// 0x32ce1e49
- (void)setHidden:(BOOL)hidden;	// 0x32ce3cc9
// converted property setter: - (void)setKeepContextInBackground:(BOOL)background;	// 0x32e6ad85
// converted property setter: - (void)setLevel:(float)level;	// 0x32e68945
// converted property setter: - (void)setResizesToFullScreen:(BOOL)fullScreen;	// 0x32e6ad69
// declared property setter: - (void)setRootViewController:(id)controller;	// 0x32d32fc1
// declared property setter: - (void)setScreen:(id)screen;	// 0x32e6a0c1
// declared property setter: - (void)setWindowLevel:(float)level;	// 0x32ce7e31
- (void)setupForOrientation:(int)orientation;	// 0x32d01421
- (void)synchronizeDrawingWithID:(int)anId;	// 0x32d6f5b1
- (void)synchronizeDrawingWithID:(int)anId count:(unsigned)count;	// 0x32e69df1
- (void)undo:(id)undo;	// 0x32e6a505
// converted property getter: - (id)undoManager;	// 0x32e6a4b5
- (void)updateConstraints;	// 0x330c941d
- (void)updateConstraintsIfNeeded;	// 0x330c0dc5
- (CGPoint)warpPoint:(CGPoint)point;	// 0x32c99899
// declared property getter: - (float)windowLevel;	// 0x32c995ad
- (int)windowOutput;	// 0x32ce3b5d
@end

