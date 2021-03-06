/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRApplicationDelegate.h"
#import "ATVMainMenuControllerDelegate.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, UIViewController, BRController, UIWindow, LTController;

__attribute__((visibility("hidden")))
@interface LTAppDelegate : XXUnknownSuperclass <ATVMainMenuControllerDelegate, BRApplicationDelegate> {
	LTController *_controller;	// 4 = 0x4
	NSMutableArray *_ignorePlayPauseEventsQueue;	// 8 = 0x8
	BOOL _shouldShowWhatsNew;	// 12 = 0xc
	BOOL _timeIsSet;	// 13 = 0xd
	BRController *_waitingForMainMenuController;	// 16 = 0x10
	BOOL _limitedLaunch;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	UIViewController *_rootViewController;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL limitedLaunch;	// G=0x57ad; S=0x57bd; @synthesize=_limitedLaunch
@property(retain, nonatomic) UIViewController *rootViewController;	// G=0x57cd; S=0x57dd; @synthesize=_rootViewController
@property(retain, nonatomic) UIWindow *window;	// G=0x5775; S=0x5785; @synthesize=_window
- (void).cxx_destruct;	// 0x5805
- (void)_adjustScreenSaverPreferences;	// 0xacf1
- (void)_attemptToSetLocaleIfNeeded;	// 0xc41d
- (BOOL)_checkExpirationDate;	// 0xafa1
- (void)_checkForFileSystemUpgrade;	// 0x8b29
- (void)_checkNetworkTime;	// 0xa8ad
- (void)_determineIfWhatsNewShouldBeShown;	// 0xb1f5
- (void)_deviceWillWakeFromSleep:(id)_device;	// 0xc3dd
- (void)_dismissWaitingForMainMenuController;	// 0x63d1
- (void)_eatLeftoverCookies;	// 0xc285
- (void)_initializeStoreServices;	// 0x5419
- (void)_installMainMenu;	// 0x64d1
- (void)_lowMemoryNotification:(id)notification;	// 0xb6ad
- (void)_musicStoreNotification:(id)notification;	// 0xb791
- (void)_performObliterationIfNeeded;	// 0xa60d
- (BOOL)_performRestoreAfterFileSystemUpgradeIfNeeded;	// 0x8989
- (void)_postMediaHostBootstrap;	// 0x6921
- (void)_preserveDataBeforeFileSystemUpgrade;	// 0x9a61
- (void)_registerAccessibilitySettings;	// 0xacc1
- (void)_registerAccountTypes;	// 0x770d
- (void)_registerAirTunesPlayer;	// 0x7c81
- (void)_registerParentalControls;	// 0x7dd5
- (void)_restorePreservedDataAfterFileSystemUpgrade;	// 0x9f15
- (void)_setTimeFromLastKnownTimestamp;	// 0xbd81
- (void)_startAnyPostBootActions;	// 0x87fd
- (void)_startNormalApplicationDidFinishLaunching;	// 0x5875
- (void)_storeLocationChanged:(id)changed;	// 0xc6d9
- (void)_timeChangeNotification:(id)notification;	// 0xc019
- (void)_timeZoneNotification:(id)notification;	// 0xc245
- (void)_updateLastKnownTimestamp;	// 0xb8a1
- (BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;	// 0x44f9
- (BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;	// 0x41d1
- (void)completeNormalApplicationDidFinishLaunching;	// 0x49c1
- (void)dealloc;	// 0x4875
- (void)didUpdateAvailableAppliancesForMainMenu:(id)mainMenu;	// 0x68b9
- (BOOL)ignorePlayPauseEvents;	// 0x502d
// declared property getter: - (BOOL)limitedLaunch;	// 0x57ad
- (void)registerIgnorePlayPause:(BOOL)pause forClient:(id)client;	// 0x5145
// declared property getter: - (id)rootViewController;	// 0x57cd
// declared property setter: - (void)setLimitedLaunch:(BOOL)launch;	// 0x57bd
// declared property setter: - (void)setRootViewController:(id)controller;	// 0x57dd
// declared property setter: - (void)setWindow:(id)window;	// 0x5785
- (void)unregisterIgnorePlayPauseForClient:(id)client;	// 0x52d5
// declared property getter: - (id)window;	// 0x5775
@end

