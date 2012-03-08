/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIResponder.h"
#import "UIActionSheetDelegate.h"

@class UIStatusBarWindow, NSMutableSet, NSArray, NSTimer, UIStatusBar, NSString, NSMutableArray, UIWindow, UIEvent;
@protocol UIApplicationDelegate;

@interface UIApplication : UIResponder <UIActionSheetDelegate> {
@private
	id<UIApplicationDelegate> _delegate;	// 4 = 0x4
	CFDictionaryRef _touchMap;	// 8 = 0x8
	NSMutableSet *_exclusiveTouchWindows;	// 12 = 0xc
	UIEvent *_event;	// 16 = 0x10
	UIEvent *_touchesEvent;	// 20 = 0x14
	UIEvent *_motionEvent;	// 24 = 0x18
	UIEvent *_remoteControlEvent;	// 28 = 0x1c
	int _remoteControlEventObservers;	// 32 = 0x20
	NSArray *_topLevelNibObjects;	// 36 = 0x24
	int _networkResourcesCurrentlyLoadingCount;	// 40 = 0x28
	NSTimer *_hideNetworkActivityIndicatorTimer;	// 44 = 0x2c
	id _editAlertView;	// 48 = 0x30
	UIStatusBar *_statusBar;	// 52 = 0x34
	UIStatusBarWindow *_statusBarWindow;	// 56 = 0x38
	NSMutableArray *_observerBlocks;	// 60 = 0x3c
	NSString *_mainStoryboardName;	// 64 = 0x40
	struct {
		unsigned deactivatingReasonFlags : 8;
		unsigned isSuspended : 1;
		unsigned isSuspendedEventsOnly : 1;
		unsigned isLaunchedSuspended : 1;
		unsigned calledNonSuspendedLaunchDelegate : 1;
		unsigned isHandlingURL : 1;
		unsigned isHandlingRemoteNotification : 1;
		unsigned isHandlingLocalNotification : 1;
		unsigned statusBarShowsProgress : 1;
		unsigned statusBarRequestedStyle : 4;
		unsigned statusBarHidden : 1;
		unsigned blockInteractionEvents : 4;
		unsigned receivesMemoryWarnings : 1;
		unsigned showingProgress : 1;
		unsigned receivesPowerMessages : 1;
		unsigned launchEventReceived : 1;
		unsigned systemIsAnimatingApplicationLifecycleEvent : 1;
		unsigned isResuming : 1;
		unsigned isSuspendedUnderLock : 1;
		unsigned shouldExitAfterSendSuspend : 1;
		unsigned shouldExitAfterTaskCompletion : 1;
		unsigned terminating : 1;
		unsigned isHandlingShortCutURL : 1;
		unsigned idleTimerDisabled : 1;
		unsigned deviceOrientation : 3;
		unsigned delegateShouldBeReleasedUponSet : 1;
		unsigned delegateHandleOpenURL : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateDidReceiveMemoryWarning : 1;
		unsigned delegateWillTerminate : 1;
		unsigned delegateSignificantTimeChange : 1;
		unsigned delegateWillChangeInterfaceOrientation : 1;
		unsigned delegateDidChangeInterfaceOrientation : 1;
		unsigned delegateWillChangeStatusBarFrame : 1;
		unsigned delegateDidChangeStatusBarFrame : 1;
		unsigned delegateDeviceAccelerated : 1;
		unsigned delegateDeviceChangedOrientation : 1;
		unsigned delegateDidBecomeActive : 1;
		unsigned delegateWillResignActive : 1;
		unsigned delegateDidEnterBackground : 1;
		unsigned delegateDidEnterBackgroundWasSent : 1;
		unsigned delegateWillEnterForeground : 1;
		unsigned delegateWillSuspend : 1;
		unsigned delegateDidResume : 1;
		unsigned userDefaultsSyncDisabled : 1;
		unsigned headsetButtonClickCount : 4;
		unsigned isHeadsetButtonDown : 1;
		unsigned isFastForwardActive : 1;
		unsigned isRewindActive : 1;
		unsigned shakeToEdit : 1;
		unsigned isClassic : 1;
		unsigned zoomInClassicMode : 1;
		unsigned ignoreHeadsetClicks : 1;
		unsigned touchRotationDisabled : 1;
		unsigned taskSuspendingUnsupported : 1;
		unsigned taskSuspendingOnLockUnsupported : 1;
		unsigned isUnitTests : 1;
		unsigned requiresHighResolution : 1;
		unsigned disableViewContentScaling : 1;
		unsigned singleUseLaunchOrientation : 3;
		unsigned defaultInterfaceOrientation : 3;
		unsigned delegateWantsNextResponder : 1;
		unsigned isRunningInApplicationSwitcher : 1;
		unsigned isSendingEventForProgrammaticTouchCancellation : 1;
		unsigned calledInitializationDelegates : 1;
	} _applicationFlags;	// 68 = 0x44
}
@property(assign, nonatomic) int applicationIconBadgeNumber;	// G=0x3306b041; S=0x32f6d7a1; 
@property(readonly, assign, nonatomic) int applicationState;	// G=0x32f66859; 
@property(assign, nonatomic) BOOL applicationSupportsShakeToEdit;	// G=0x3306b05d; S=0x32ee9c79; 
@property(readonly, assign, nonatomic) double backgroundTimeRemaining;	// G=0x3306cda5; 
@property(assign) float backlightLevel;	// G=0x3306c089; S=0x3306c025; converted property
@property(assign, nonatomic) id<UIApplicationDelegate> delegate;	// G=0x32edf50d; S=0x32eeb411; 
@property(assign) int doubleHeightMode;	// G=0x33069afd; S=0x33069ae9; converted property
@property(assign, nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;	// G=0x33068aed; S=0x32f64ef9; 
@property(assign) BOOL ignoresInteractionEvents;	// G=0x3306bf39; S=0x32f5473d; converted property
@property(readonly, assign, nonatomic) UIWindow *keyWindow;	// G=0x32eff181; 
@property(assign, nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;	// G=0x33069755; S=0x32f83f59; 
@property(readonly, assign, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;	// G=0x32f94e99; 
@property(assign, nonatomic, getter=isProximitySensingEnabled) BOOL proximitySensingEnabled;	// G=0x3306d1b5; S=0x3306d17d; 
@property(retain) id scheduledLocalNotifications;	// G=0x32f6d7f1; S=0x3306cb65; converted property
@property(assign) unsigned simpleRemoteRoutingPriority;	// G=0x33069f59; S=0x33069f75; converted property
@property(readonly, retain) UIStatusBar *statusBar;	// G=0x32ebfead; converted property
@property(readonly, assign, nonatomic) CGRect statusBarFrame;	// G=0x32f7dea5; 
@property(assign, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;	// G=0x32ef3369; S=0x32f39205; 
@property(assign, nonatomic) int statusBarOrientation;	// G=0x32ec7875; S=0x33066ebd; 
@property(readonly, assign, nonatomic) double statusBarOrientationAnimationDuration;	// G=0x3303c81d; 
@property(assign, nonatomic) int statusBarStyle;	// G=0x32f5594d; S=0x32f55549; 
@property(readonly, retain) UIStatusBarWindow *statusBarWindow;	// G=0x32ee5611; converted property
@property(readonly, assign, nonatomic) int userInterfaceLayoutDirection;	// G=0x3306b075; 
@property(assign) BOOL usesBackgroundNetwork;	// G=0x3306a72d; S=0x3301352d; converted property
@property(readonly, assign, nonatomic) NSArray *windows;	// G=0x32f8577d; 
+ (void)_installAfterCACommitHandler;	// 0x33068b8d
+ (BOOL)_isAfterCACommitHandlerInstalled;	// 0x32efe179
+ (void)_noteInterfaceOrientationChangingTo:(int)to;	// 0x33068b05
+ (void)_startWindowServerIfNecessary;	// 0x32ee93f1
+ (int)interfaceOrientationForString:(id)string;	// 0x32eea759
+ (BOOL)isRunningEventPump;	// 0x32ee938d
+ (BOOL)isRunningInStoreDemoMode;	// 0x3306085d
+ (BOOL)registerForSystemEvents;	// 0x32ee9351
+ (BOOL)rendersLocally;	// 0x32ee9599
+ (id)sharedApplication;	// 0x32ec7865
+ (BOOL)shouldMakeUIForDefaultPNG;	// 0x32ee63f5
+ (int)statusBarStyleForString:(id)string;	// 0x32eea669
+ (id)stringForInterfaceOrientation:(int)interfaceOrientation;	// 0x3306b169
+ (id)stringForStatusBarStyle:(int)statusBarStyle;	// 0x3306b139
- (id)init;	// 0x32ee972d
- (BOOL)_accessibilityApplicationIsSystemWideServer;	// 0x32eebd2d
- (Class)_accessibilityBundlePrincipalClass;	// 0x32f94f45
- (BOOL)_accessibilityCaptureSimulatorEvent:(GSEventRef)event;	// 0x32ed1f41
- (void)_accessibilityInit;	// 0x32eebaa9
- (void)_accessibilitySetUpQuickSpeak;	// 0x32f29219
- (id)_accessibilitySettingsBundle;	// 0x32f94eb1
- (void)_accessibilityStatusChanged:(id)changed;	// 0x32fdba6d
- (void)_addAfterCACommitBlockForViewController:(id)viewController;	// 0x32efe1b5
- (void)_addRecorder:(id)recorder;	// 0x3306c55d
- (void)_alertSheetStackChanged;	// 0x32ff3c79
- (BOOL)_alertWindowShouldRotate;	// 0x3306b5f9
- (void)_applicationOpenURL:(id)url event:(GSEventRef)event;	// 0x3306a6ad
- (void)_applicationOpenURL:(id)url payload:(id)payload;	// 0x3306a57d
- (id)_backgroundModes;	// 0x3306cdf5
- (void)_beginShowingNetworkActivityIndicator;	// 0x3306cbe1
- (void)_callApplicationResumeHandlersForURL:(id)url payload:(id)payload;	// 0x32f96d85
- (void)_callInitializationDelegatesForURL:(id)url payload:(id)payload suspended:(BOOL)suspended;	// 0x32ef29b5
- (BOOL)_canOpenURL:(id)url publicURLsOnly:(BOOL)only;	// 0x3306a491
- (void)_cancelAllTouches;	// 0x32f2abed
- (void)_cancelCurrentTouchEvent;	// 0x3306bfd1
- (void)_cancelGestureRecognizers:(id)recognizers;	// 0x32ebc3d9
- (void)_cancelGestureRecognizersForView:(id)view;	// 0x32ebc371
- (void)_cancelTouches:(id)touches withEvent:(id)event;	// 0x32f2ac3d
- (void)_cancelTouches:(id)touches withEvent:(id)event includingGestures:(BOOL)gestures notificationBlock:(id)block;	// 0x32f2ac95
- (void)_cancelViewProcessingOfTouches:(id)touches withEvent:(id)event sendingTouchesCancelledToViewsOfTouches:(id)touches3;	// 0x32fbfff1
- (void)_clearTouchesForView:(id)view;	// 0x32ebd4c5
- (CGImageRef)_createDefaultImageSnapshot;	// 0x3306a7a5
- (void)_createHangTracerTimerWithDuration:(double)duration;	// 0x33068ce9
- (void)_createStatusBarWithRequestedStyle:(int)requestedStyle orientation:(int)orientation hidden:(BOOL)hidden;	// 0x32eecd79
- (int)_currentExpectedInterfaceOrientation;	// 0x32efe6a5
- (id)_currentTests;	// 0x32f6f5bd
- (void)_deactivateForReason:(int)reason;	// 0x32f2ab59
- (void)_deactivateForReason:(int)reason notify:(BOOL)notify;	// 0x32ee9c9d
- (BOOL)_didEatCurrentTouch;	// 0x32ed251d
- (void)_dumpScreenContents:(GSEventRef)contents;	// 0x3306c1ad
- (void)_dumpUIHierarchy:(GSEventRef)hierarchy;	// 0x3306c0d5
- (void)_eatCurrentTouch;	// 0x3306c5d5
- (void)_endShowingNetworkActivityIndicator;	// 0x3306cc75
- (id)_event;	// 0x32eba4e9
- (id)_exclusiveTouchWindows;	// 0x32ed4f1d
- (BOOL)_executableWasLinkedWithUIKit;	// 0x3306cd89
- (id)_extendLaunchTest;	// 0x32f28b9d
- (id)_fallbackPresentationViewController;	// 0x3306d111
- (void)_fetchInfoPlistFlags;	// 0x32ee9e1d
- (int)_frontMostAppOrientation;	// 0x32f307a5
- (unsigned)_frontmostApplicationPort;	// 0x33069c5d
- (xpc_connection_s *)_getHangTracerConnection;	// 0x33068bf1
- (int)_getSpringBoardOrientation;	// 0x3306b8ed
- (void *)_getSymbol:(id)symbol forFramework:(id)framework;	// 0x32f95ef9
- (void)_handleAccessoryKeyStateChanged:(GSEventRef)changed;	// 0x33069d79
- (void)_handleApplicationResumeEvent:(GSEventRef)event;	// 0x32f960b5
- (void)_handleApplicationSuspend:(GSEventRef)suspend eventInfo:(void *)info;	// 0x32f2a0e5
- (void)_handleHeadsetButtonClick;	// 0x3306a1cd
- (void)_handleHeadsetButtonDoubleClick;	// 0x3306a249
- (void)_handleHeadsetButtonDown:(GSEventRef)down;	// 0x3306a045
- (void)_handleHeadsetButtonTripleClick;	// 0x3306a2d9
- (void)_handleHeadsetButtonUp:(GSEventRef)up;	// 0x3306a06d
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x32fd3399
- (void)_handleUserDefaultsDidChange:(id)_handleUserDefaults;	// 0x32edd815
- (BOOL)_hasApplicationCalledLaunchDelegate;	// 0x32f9de39
- (BOOL)_hasStoryboard;	// 0x32ef2915
- (void)_hideNetworkActivityIndicator;	// 0x3306cbcd
- (void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)mode;	// 0x32eec109
- (BOOL)_isActivated;	// 0x32f668b5
- (BOOL)_isClassic;	// 0x32ed21f1
- (BOOL)_isInteractionEvent:(GSEventRef)event;	// 0x32f29139
- (BOOL)_isLaunchedSuspended;	// 0x32f96b91
- (BOOL)_isMotionEvent:(GSEventRef)event;	// 0x32eba4d1
- (BOOL)_isResuming;	// 0x32f96b7d
- (BOOL)_isSendingEventForProgrammaticTouchCancellation;	// 0x32ed495d
- (BOOL)_isSensitiveUIEnabled;	// 0x3306c05d
- (BOOL)_isSpringBoard;	// 0x33068b41
- (BOOL)_isSpringBoardShowingAnAlert;	// 0x32ef2945
- (BOOL)_isTouchEvent:(GSEventRef)event;	// 0x32eba48d
- (BOOL)_isTrackingAnyTouch;	// 0x33041de1
- (BOOL)_isViewContentScalingDisabled;	// 0x3306cb99
- (BOOL)_isWindowServerHostingManaged;	// 0x32ee5255
- (id)_launchTestName;	// 0x32f6f8a5
- (void)_leak;	// 0x330ab2c5
- (int)_loadMainInterfaceFile;	// 0x32ef27b5
- (int)_loadMainNibFileNamed:(id)named bundle:(id)bundle;	// 0x330694e5
- (int)_loadMainStoryboardFileNamed:(id)named bundle:(id)bundle;	// 0x33069545
- (id)_localCachesDirectory;	// 0x3306a74d
- (id)_mainStoryboardName;	// 0x32ef2899
- (id)_motionEvent;	// 0x3306b1c5
- (void)_noteAnimationFinished:(id)finished;	// 0x330a90a9
- (void)_noteAnimationStarted:(id)started;	// 0x330a9031
- (void)_notifyDidChangeStatusBarFrame:(CGRect)_notify;	// 0x3302e479
- (void)_notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:(double)animationDuration;	// 0x3302e2cd
- (void)_notifyWillChangeStatusBarFrame:(CGRect)_notify;	// 0x3302e1dd
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)orientation;	// 0x33066a3d
- (id)_pathForFrameworkName:(id)frameworkName inPrivate:(BOOL)aPrivate;	// 0x32f95fed
- (void)_performMemoryWarning;	// 0x3306c221
- (void)_playbackEvents:(id)events atPlaybackRate:(float)playbackRate messageWhenDone:(id)done withSelector:(SEL)selector;	// 0x32fdbb09
- (void)_playbackTimerCallback:(id)callback;	// 0x32fdbdf1
- (void)_postSimpleRemoteNotificationForAction:(int)action andContext:(int)context;	// 0x33069f89
- (void)_processScriptEvent:(GSEventRef)event;	// 0x32fdba7d
- (void)_purgeSharedInstances;	// 0x32f2d031
- (CFMessagePortRef)_purplePPTServerPort;	// 0x32f295fd
- (void)_receivedMemoryNotification;	// 0x3306c2bd
- (void)_registerForAlertItemStateChangeNotification;	// 0x32eebec9
- (void)_registerForKeyBagLockStatusNotification;	// 0x32eebf05
- (void)_registerForLanguageChangedNotification;	// 0x32eebe11
- (void)_registerForLocaleChangedNotification;	// 0x32eebe89
- (void)_registerForLocaleWillChangeNotification;	// 0x32eebe4d
- (void)_registerForSignificantTimeChangeNotification;	// 0x32eebdd5
- (void)_registerForUserDefaultsChanges;	// 0x32eebd79
- (id)_remoteControlEvent;	// 0x3306b2e9
- (void)_removeDefaultInterfaceOrientatationOverride;	// 0x33067269
- (void)_removeRecorder:(id)recorder;	// 0x3306c5b9
- (void)_removeSnapshotImage;	// 0x32f974a1
- (void)_reportAppLaunchFinished;	// 0x32eff28d
- (void)_reportResults:(id)results;	// 0x32f29319
- (BOOL)_requiresHighResolution;	// 0x3306cb9d
- (BOOL)_rotationDisabledDuringTouch;	// 0x32ed4f2d
- (void)_run;	// 0x32eeb7ed
- (void)_runWithURL:(id)url payload:(id)payload launchOrientation:(int)orientation statusBarStyle:(int)style statusBarHidden:(BOOL)hidden;	// 0x32eec7ed
- (BOOL)_saveSnapshotWithName:(id)name;	// 0x32f2c9e1
- (void)_sendMotionBegan:(int)began;	// 0x3306b1d5
- (void)_sendMotionCancelled:(int)cancelled;	// 0x3306b28d
- (void)_sendMotionEnded:(int)ended;	// 0x3306b231
- (void)_sendOrderedOutContexts;	// 0x32f29025
- (void)_sendRemoteControlEvent:(int)event;	// 0x3306b2f9
- (void)_setDelegate:(id)delegate assumeOwnership:(BOOL)ownership;	// 0x32f8b3e1
- (void)_setHandlingURL:(BOOL)url url:(id)url2;	// 0x32f97439
- (void)_setIgnoreHeadsetClicks:(BOOL)clicks;	// 0x3306cd31
- (void)_setIsClassic:(BOOL)classic;	// 0x32eec2a5
- (void)_setRotationDisabledDuringTouch:(BOOL)touch;	// 0x32f84991
- (void)_setShouldZoom:(BOOL)_set;	// 0x32eec359
- (void)_setStatusBarMode:(int)mode;	// 0x3306b1b1
- (void)_setStatusBarShowsProgress:(BOOL)progress;	// 0x32f8497d
- (void)_setSuspended:(BOOL)suspended;	// 0x32f2ab6d
- (void)_setSuspendedEventsOnly:(BOOL)only;	// 0x33069be9
- (void)_setSuspendedUnderLock:(BOOL)lock;	// 0x32f2aac5
- (void)_setTouchMap:(CFDictionaryRef)map;	// 0x32ed4049
- (void)_setUserDefaultsSyncEnabled:(BOOL)enabled;	// 0x32f66831
- (void)_sheetWithRemoteIdentifierDidDismiss:(id)_sheetWithRemoteIdentifier;	// 0x33164371
- (BOOL)_shouldHandleTestURL:(id)url;	// 0x32f29c35
- (BOOL)_shouldIgnoreHeadsetClicks;	// 0x3306cd55
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x32ee5605
- (BOOL)_shouldUseKeyWindowStack;	// 0x32edd8f5
- (BOOL)_shouldUseNextFirstResponder;	// 0x32edce09
- (BOOL)_shouldZoom;	// 0x3306cb81
- (void)_showEditAlertView;	// 0x3306b355
- (void)_startHangTracer;	// 0x33068fe9
- (void)_startPlaybackTimer;	// 0x32fdbd41
- (void)_stopDeactivatingForReason:(int)reason;	// 0x32efed1d
- (void)_stopHangTracer;	// 0x33068ec5
- (void)_stopPlayback;	// 0x3306c471
- (BOOL)_supportsShakesWhenNotActive;	// 0x32f2b12d
- (id)_targetInChainForAction:(SEL)action sender:(id)sender;	// 0x330133b5
- (BOOL)_taskSuspendingUnsupported;	// 0x3306cbb5
- (void)_terminateWithStatus:(int)status;	// 0x32f2e049
- (CFDictionaryRef)_touchMap;	// 0x32eba555
- (id)_touchesEvent;	// 0x32ed1f45
- (void)_unregisterForLanguageChangedNotification;	// 0x33069469
- (void)_unregisterForLocaleChangedNotification;	// 0x33069491
- (void)_unregisterForSignificantTimeChangeNotification;	// 0x33069441
- (void)_unregisterForTimeChangedNotification;	// 0x330694b9
- (void)_unregisterForUserDefaultsChanges;	// 0x3306bfd5
- (void)_updateAccessibilityItunesSettings;	// 0x33149211
- (void)_updateAccessibilitySettingsLoader;	// 0x32eebbf9
- (void)_updateApplicationAccessibility;	// 0x32eebc69
- (BOOL)_updateDefaultImage;	// 0x32f2c9a5
- (void)_updateLargeTextNotification;	// 0x32eebce1
- (void)_updateOrientation;	// 0x32f29189
- (BOOL)_usesEmoji;	// 0x3306bd1d
- (BOOL)_usesPreMTAlertBehavior;	// 0x32ff3e55
- (int)_validateStatusBarStyle:(int)style;	// 0x32ede0ad
- (void)_wakeTimerFired;	// 0x3306ce9d
- (void)_writeApplicationDefaultPNGSnapshot;	// 0x3306a945
- (void)acceleratedInX:(float)x Y:(float)y Z:(float)z;	// 0x33069d71
- (void)accessoryKeyStateChanged:(GSEventRef)changed;	// 0x33069f49
- (int)activeInterfaceOrientation;	// 0x3306b8d1
- (void)addStatusBarImageNamed:(id)named;	// 0x3306aeb1
- (void)addStatusBarImageNamed:(id)named removeOnExit:(BOOL)exit;	// 0x3306af45
- (void)addStatusBarItem:(int)item;	// 0x33026d9d
- (void)addStatusBarItem:(int)item removeOnExit:(BOOL)exit;	// 0x3306b009
- (void)addStatusBarStyleOverrides:(int)overrides;	// 0x33069939
- (void)addWebClipToHomeScreen:(id)homeScreen;	// 0x3306b0e9
- (int)alertInterfaceOrientation;	// 0x33013e01
- (int)alertOrientation;	// 0x33013da9
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3306b435
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x3306b529
- (void)alertViewCancel:(id)cancel;	// 0x3306b591
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;	// 0x33069cb9
- (void)applicationDidBeginSuspendAnimation;	// 0x32f2a0e1
- (void)applicationDidEndResumeAnimation;	// 0x32f97ad5
- (void)applicationDidOrderOutContext:(id)application;	// 0x32eee63d
- (void)applicationDidResume;	// 0x32f96d45
- (void)applicationDidResumeForEventsOnly;	// 0x33069be5
- (void)applicationDidResumeFromUnderLock;	// 0x33069be1
- (void)applicationExited:(GSEventRef)exited;	// 0x33069c69
// declared property getter: - (int)applicationIconBadgeNumber;	// 0x3306b041
- (void)applicationOpenToShortCut:(id)shortCut;	// 0x3306a575
- (void)applicationOpenURL:(id)url;	// 0x3306a579
- (void)applicationResume:(GSEventRef)resume;	// 0x32f96d49
- (CGRect)applicationSnapshotRectForOrientation:(int)orientation;	// 0x32f2ce39
// declared property getter: - (int)applicationState;	// 0x32f66859
// declared property getter: - (BOOL)applicationSupportsShakeToEdit;	// 0x3306b05d
- (void)applicationSuspend:(GSEventRef)suspend;	// 0x32f6d7b5
- (void)applicationSuspended:(GSEventRef)suspended;	// 0x33069c61
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;	// 0x33069c65
- (void)applicationWillOrderInContext:(id)application windowLevel:(float)level windowOutput:(int)output;	// 0x32eee55d
- (void)applicationWillSuspend;	// 0x32f2b0c5
- (void)applicationWillSuspendForEventsOnly;	// 0x33069bd9
- (void)applicationWillSuspendUnderLock;	// 0x33069bdd
- (void)applicationWillTerminate;	// 0x32f2e28d
// declared property getter: - (double)backgroundTimeRemaining;	// 0x3306cda5
// converted property getter: - (float)backlightLevel;	// 0x3306c089
- (void)batteryStatusDidChange:(id)batteryStatus;	// 0x33066a39
- (unsigned)beginBackgroundTaskWithExpirationHandler:(id)expirationHandler;	// 0x32f664d1
- (void)beginIgnoringInteractionEvents;	// 0x32edeaa5
- (void)beginReceivingRemoteControlEvents;	// 0x32f6d80d
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info;	// 0x33163f69
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application;	// 0x33163f95
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application opaque:(BOOL)opaque presentAnimated:(BOOL)animated;	// 0x33164005
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application presentAnimated:(BOOL)animated;	// 0x33163fcd
- (unsigned)blockInteractionEventsCount;	// 0x32f54729
- (BOOL)canOpenURL:(id)url;	// 0x3306a55d
- (BOOL)canShowAlerts;	// 0x32ff68ed
- (void)cancelAllLocalNotifications;	// 0x3306cb49
- (void)cancelLocalNotification:(id)notification;	// 0x3306cb2d
- (void)clearKeepAliveTimeout;	// 0x3306cf81
- (void)dealloc;	// 0x33068a7d
- (id)defaultFirstResponder;	// 0x3306c81d
- (double)defaultImageSnapshotExpiration;	// 0x32f2aa91
// declared property getter: - (id)delegate;	// 0x32edf50d
- (void)didDismissMiniAlert;	// 0x3301a12d
- (void)didReceiveMemoryWarning;	// 0x3306c279
- (id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;	// 0x3306c8bd
- (id)displayIdentifier;	// 0x32f67ce5
// converted property getter: - (int)doubleHeightMode;	// 0x33069afd
- (void)enableFramebufferStatisticsGathering;	// 0x3300c7bd
- (int)enabledRemoteNotificationTypes;	// 0x3306ca39
- (void)endBackgroundTask:(unsigned)task;	// 0x32f666b5
- (void)endIgnoringInteractionEvents;	// 0x32ed568d
- (void)endReceivingRemoteControlEvents;	// 0x33066fed
- (void)endRemoteSheet:(id)sheet;	// 0x33164231
- (void)endRemoteSheet:(id)sheet returnCode:(int)code;	// 0x33164245
- (void)endRemoteSheet:(id)sheet returnCode:(int)code dismissAnimated:(BOOL)animated;	// 0x33164269
- (void)failedTest:(id)test;	// 0x330aaf41
- (void)failedTest:(id)test withResults:(id)results;	// 0x330aaf55
- (void)finishedSubTest:(id)test forTest:(id)test2;	// 0x330a9591
- (void)finishedTest:(id)test;	// 0x330aaed5
- (void)finishedTest:(id)test extraResults:(id)results;	// 0x32f28ba1
- (void)finishedTest:(id)test extraResults:(id)results waitForNotification:(id)notification;	// 0x330aaf1d
- (void)finishedTest:(id)test extraResults:(id)results waitForNotification:(id)notification withTeardownBlock:(id)teardownBlock;	// 0x330a97fd
- (void)finishedTest:(id)test extraResults:(id)results withTeardownBlock:(id)teardownBlock;	// 0x330aaef9
- (BOOL)firstLaunchAfterBoot;	// 0x33068add
- (BOOL)handleDoubleHeightStatusBarTap:(int)tap;	// 0x33069769
- (BOOL)handleEvent:(GSEventRef)event;	// 0x3306c805
- (BOOL)handleEvent:(GSEventRef)event withNewEvent:(id)newEvent;	// 0x32eba879
- (void)handleKeyEvent:(GSEventRef)event;	// 0x32fd3325
- (BOOL)handleTestURL:(id)url;	// 0x32f29cad
- (void)headsetAvailabilityChanged:(GSEventRef)changed;	// 0x33069ccd
- (void)headsetButtonDown:(GSEventRef)down;	// 0x33069cc5
- (void)headsetButtonUp:(GSEventRef)up;	// 0x33069cc9
- (BOOL)homeScreenCanAddIcons;	// 0x3306b119
// converted property getter: - (BOOL)ignoresInteractionEvents;	// 0x3306bf39
- (int)interfaceOrientation;	// 0x32f2ce29
- (BOOL)isHandlingOpenShortCut;	// 0x3306a6cd
- (BOOL)isHandlingURL;	// 0x32efec25
// declared property getter: - (BOOL)isIdleTimerDisabled;	// 0x33068aed
- (BOOL)isIgnoringInteractionEvents;	// 0x32eba565
- (BOOL)isLocked;	// 0x33018821
// declared property getter: - (BOOL)isNetworkActivityIndicatorVisible;	// 0x33069755
- (BOOL)isPasscodeRequiredToUnlock;	// 0x3306c871
// declared property getter: - (BOOL)isProtectedDataAvailable;	// 0x32f94e99
// declared property getter: - (BOOL)isProximitySensingEnabled;	// 0x3306d1b5
- (BOOL)isRunningInTaskSwitcher;	// 0x32f7d1b1
- (BOOL)isRunningQuitTest;	// 0x32f2d935
- (BOOL)isRunningSuspendTest;	// 0x32f2d9a1
- (BOOL)isRunningTest;	// 0x32f85859
- (BOOL)isRunningTest:(id)test;	// 0x32f8ac41
// declared property getter: - (BOOL)isStatusBarHidden;	// 0x32ef3369
- (BOOL)isSuspended;	// 0x32eeb165
- (BOOL)isSuspendedEventsOnly;	// 0x32f6d78d
- (BOOL)isSuspendedUnderLock;	// 0x32f2abd9
// declared property getter: - (id)keyWindow;	// 0x32eff181
- (BOOL)launchApplicationWithIdentifier:(id)identifier suspended:(BOOL)suspended;	// 0x32fe6bed
- (BOOL)launchedToTest;	// 0x32ee79b5
- (void)lockButtonDown:(GSEventRef)down;	// 0x33069cbd
- (void)lockButtonUp:(GSEventRef)up;	// 0x33069cc1
- (void)lockDevice:(GSEventRef)device;	// 0x33069f4d
- (void)mediaKeyDown:(GSEventRef)down;	// 0x33069c6d
- (void)mediaKeyUp:(GSEventRef)up;	// 0x33069cb5
- (void)menuButtonDown:(GSEventRef)down;	// 0x33069cd1
- (void)menuButtonUp:(GSEventRef)up;	// 0x33069cd5
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x3306b5fd
- (id)nameOfDefaultImageToUpdateAtSuspension;	// 0x32f2c9dd
- (id)nextResponder;	// 0x32ebf609
- (BOOL)openURL:(id)url;	// 0x3306a4ed
- (int)orientation;	// 0x32f98321
- (id)pathToDefaultImageNamed:(id)defaultImageNamed;	// 0x32f67ab9
- (void)performDisablingStatusBarStyleValidation:(id)validation;	// 0x32f6e895
- (void)popRunLoopMode:(id)mode;	// 0x32fe2a51
- (void)prepareForDefaultImageSnapshot;	// 0x32f2cd99
- (void)presentLocalNotificationNow:(id)now;	// 0x3306ca91
- (void)proximityStateChanged:(BOOL)changed;	// 0x33069d75
- (void)pushRunLoopMode:(id)mode;	// 0x32fe0041
- (void)quitTopApplication:(GSEventRef)application;	// 0x33069f51
- (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x3306ca55
- (void)removeDefaultImage:(id)image;	// 0x32f67a89
- (void)removeStatusBarImageNamed:(id)named;	// 0x3306af75
- (void)removeStatusBarItem:(int)item;	// 0x33026629
- (void)removeStatusBarStyleOverrides:(int)overrides;	// 0x33069981
- (BOOL)reportApplicationSuspended;	// 0x32f2da0d
- (void)requestDeviceUnlock;	// 0x3306c8ad
- (void)resetIdleTimerAndUndim;	// 0x33069f55
- (id)resultsForTest:(id)test;	// 0x330a943d
- (void)ringerChanged:(int)changed;	// 0x33069cdd
- (id)roleID;	// 0x3306a48d
- (BOOL)rotateIfNeeded:(int)needed;	// 0x330ab43d
- (void)runModal:(id)modal;	// 0x3306c941
- (void)runTest:(id)test forAnimation:(id)animation;	// 0x330a91b9
- (BOOL)runTest:(id)test options:(id)options;	// 0x32f29f55
- (void)runTest:(id)test startingBeforeAnimation:(id)animation stoppingAfterAnimation:(id)animation3;	// 0x330a91d5
- (void)scheduleLocalNotification:(id)notification;	// 0x3306cb11
// converted property getter: - (id)scheduledLocalNotifications;	// 0x32f6d7f1
- (void)sendAction:(SEL)action fromSender:(id)sender toTarget:(id)target forEvent:(GSEventRef)event;	// 0x32ff87e5
- (BOOL)sendAction:(SEL)action to:(id)to from:(id)from forEvent:(id)event;	// 0x32ed5f71
- (BOOL)sendAction:(SEL)action toTarget:(id)target fromSender:(id)sender forEvent:(id)event;	// 0x32ed5f4d
- (void)sendEvent:(id)event;	// 0x32eba6d9
- (void)setApplicationBadgeString:(id)string;	// 0x32f4dca5
// declared property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x32f6d7a1
// declared property setter: - (void)setApplicationSupportsShakeToEdit:(BOOL)edit;	// 0x32ee9c79
// converted property setter: - (void)setBacklightLevel:(float)level;	// 0x3306c025
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32eeb411
- (void)setDeviceOrientation:(int)orientation;	// 0x330ab4b5
// converted property setter: - (void)setDoubleHeightMode:(int)mode;	// 0x33069ae9
- (void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled;	// 0x33069a01
- (void)setDoubleHeightPrefixText:(id)text;	// 0x33069b15
- (void)setDoubleHeightStatusText:(id)text;	// 0x33069b29
- (void)setDoubleHeightStatusText:(id)text forStyle:(int)style;	// 0x330699e5
- (void)setExpectsFaceContact:(BOOL)contact;	// 0x3306c82d
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;	// 0x3306c841
- (void)setGlowAnimationEnabled:(BOOL)enabled forStyle:(int)style;	// 0x330699c9
- (void)setHardwareKeyboardLayoutName:(id)name;	// 0x32f361cd
- (void)setHasMiniAlerts:(BOOL)alerts;	// 0x32ff3c65
// declared property setter: - (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x32f64ef9
// converted property setter: - (void)setIgnoresInteractionEvents:(BOOL)events;	// 0x32f5473d
- (BOOL)setKeepAliveTimeout:(double)timeout handler:(id)handler;	// 0x3306cebd
// declared property setter: - (void)setNetworkActivityIndicatorVisible:(BOOL)visible;	// 0x32f83f59
- (void)setNewsstandIconImage:(id)image;	// 0x3306ad59
- (void)setProximityEventsEnabled:(BOOL)enabled;	// 0x32f4dacd
// declared property setter: - (void)setProximitySensingEnabled:(BOOL)enabled;	// 0x3306d17d
- (void)setReceivesMemoryWarnings:(BOOL)warnings;	// 0x32ef2725
// converted property setter: - (void)setScheduledLocalNotifications:(id)notifications;	// 0x3306cb65
// converted property setter: - (void)setSimpleRemoteRoutingPriority:(unsigned)priority;	// 0x33069f75
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x32f39205
- (void)setStatusBarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x3306d1e9
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x32f392a5
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters changeApplicationFlag:(BOOL)flag;	// 0x32f392c9
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration;	// 0x33029825
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration changeApplicationFlag:(BOOL)flag;	// 0x33029849
- (void)setStatusBarHidden:(BOOL)hidden withAnimation:(int)animation;	// 0x32f39219
- (void)setStatusBarMode:(int)mode duration:(float)duration;	// 0x3306bce1
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration;	// 0x3306bcb1
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId;	// 0x3306bc75
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation;	// 0x3306b8fd
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;	// 0x3306b941
// declared property setter: - (void)setStatusBarOrientation:(int)orientation;	// 0x33066ebd
- (void)setStatusBarOrientation:(int)orientation animated:(BOOL)animated;	// 0x330698cd
- (void)setStatusBarOrientation:(int)orientation animation:(int)animation duration:(double)duration;	// 0x3302dce1
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x3302dd91
- (void)setStatusBarShowsProgress:(BOOL)progress;	// 0x32f85de9
// declared property setter: - (void)setStatusBarStyle:(int)style;	// 0x32f55549
- (void)setStatusBarStyle:(int)style animated:(BOOL)animated;	// 0x32eddf45
- (void)setStatusBarStyle:(int)style animation:(int)animation;	// 0x33069849
- (void)setStatusBarStyle:(int)style animation:(int)animation startTime:(double)time duration:(double)duration curve:(int)curve;	// 0x3306976d
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x32eddfb1
- (void)setStatusBarStyle:(int)style duration:(double)duration;	// 0x32f6e8b9
- (void)setSuspensionAnimationDelay:(double)delay;	// 0x3306c0bd
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled;	// 0x33065089
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;	// 0x33026721
// converted property setter: - (void)setUsesBackgroundNetwork:(BOOL)network;	// 0x3301352d
- (void)setWantsVolumeButtonEvents:(BOOL)events;	// 0x33069ce1
- (BOOL)shouldFenceStatusBarRotation;	// 0x3306cd6d
- (BOOL)shouldLaunchSafe;	// 0x32efec15
- (BOOL)shouldRecordExtendedLaunchTime;	// 0x32f6f819
- (void)showNetworkPromptsIfNecessary:(BOOL)necessary;	// 0x3306a719
- (void)showTTYPromptForNumber:(id)number withID:(int)anId;	// 0x3306a6e5
- (void)significantTimeChange;	// 0x3306bf55
// converted property getter: - (unsigned)simpleRemoteRoutingPriority;	// 0x33069f59
- (void)startCHUDRecording:(id)recording;	// 0x330ab0e9
- (void)startLeaking;	// 0x330ab335
- (void)startedSubTest:(id)test forTest:(id)test2;	// 0x330a94bd
- (void)startedTest:(id)test;	// 0x32eec37d
// converted property getter: - (id)statusBar;	// 0x32ebfead
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;	// 0x3306b845
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;	// 0x32ede5d9
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;	// 0x3306b649
// declared property getter: - (CGRect)statusBarFrame;	// 0x32f7dea5
- (CGRect)statusBarFrameForOrientation:(int)orientation;	// 0x32f7dee9
- (float)statusBarHeight;	// 0x32ef3319
- (float)statusBarHeightForOrientation:(int)orientation;	// 0x32efc1a9
- (float)statusBarHeightForOrientation:(int)orientation ignoreHidden:(BOOL)hidden;	// 0x32f64845
- (int)statusBarMode;	// 0x32f2cfb9
- (void)statusBarMouseUp:(GSEventRef)up;	// 0x3305b589
// declared property getter: - (int)statusBarOrientation;	// 0x32ec7875
// declared property getter: - (double)statusBarOrientationAnimationDuration;	// 0x3303c81d
- (void)statusBarReturnActionTap:(GSEventRef)tap;	// 0x33069cd9
// declared property getter: - (int)statusBarStyle;	// 0x32f5594d
// converted property getter: - (id)statusBarWindow;	// 0x32ee5611
- (void)stopCHUDRecording;	// 0x330ab259
- (void)stopLeaking;	// 0x330ab3f9
- (void)stopModal;	// 0x3306c9c9
- (void)suspend;	// 0x33069c35
- (void)suspendReturningToLastApp:(BOOL)lastApp;	// 0x33069c49
- (BOOL)systemIsAnimatingApplicationLifecycleEvent;	// 0x32eba581
- (void)terminateWithSuccess;	// 0x32f6681d
- (void)testPrep:(id)prep options:(id)options;	// 0x330ab439
- (void)unregisterForRemoteNotifications;	// 0x3306ca71
- (void)updateSuspendedSettings:(id)settings;	// 0x32f7d431
- (void)updateTouchDiagnostics;	// 0x3306bd21
- (id)userCachesDirectory;	// 0x32f7d6b9
- (void)userDefaultsDidChange:(id)userDefaults;	// 0x32edd89d
- (id)userHomeDirectory;	// 0x33006e41
// declared property getter: - (int)userInterfaceLayoutDirection;	// 0x3306b075
- (id)userLibraryDirectory;	// 0x32f629f1
// converted property getter: - (BOOL)usesBackgroundNetwork;	// 0x3306a72d
- (void)vibrateForDuration:(int)duration;	// 0x3306c021
- (void)volumeChanged:(GSEventRef)changed;	// 0x33069cf5
- (void)willDismissMiniAlert:(int *)alert andShowAnother:(BOOL)another;	// 0x33019bd9
- (void)willDisplayMiniAlert:(int *)alert;	// 0x33018bdd
- (double)windowRotationDuration;	// 0x32f66479
// declared property getter: - (id)windows;	// 0x32f8577d
@end
