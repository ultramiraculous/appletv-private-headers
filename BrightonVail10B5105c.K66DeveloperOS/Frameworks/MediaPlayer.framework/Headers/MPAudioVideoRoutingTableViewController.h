/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAudioDeviceControllerDelegate.h"
#import <UITableViewController.h> // Unknown library

@class MPAudioDeviceController, NSArray;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAudioDeviceControllerDelegate> {
	int _airPlayPasswordAlertDidAppearToken;	// 212 = 0xd4
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;	// 216 = 0xd8
	int _airPlayPasswordAlertDidCancelToken;	// 220 = 0xdc
	MPAudioDeviceController *_audioDeviceController;	// 224 = 0xe0
	unsigned _avItemType;	// 228 = 0xe4
	BOOL _displayMirroringRoutes;	// 232 = 0xe8
	NSArray *_displayedRoutes;	// 236 = 0xec
	BOOL _wirelessDisplayCapableRouteIsPicked;	// 240 = 0xf0
	BOOL _wirelessDisplayRouteIsPendingAsPicked;	// 241 = 0xf1
}
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x3503b5c1; @synthesize=_audioDeviceController
+ (id)routesPreferringMirroring;	// 0x3503ae65
- (id)initWithType:(unsigned)type displayMirroringRoutes:(BOOL)routes;	// 0x35039121
- (id)_availableRoutes;	// 0x3503aed1
- (void)_debugButtonAction:(id)action;	// 0x3503ab65
- (id)_displayedRoutes;	// 0x3503b279
- (id)_effectivePickedRouteReturningActualPickedRouteType:(int *)type;	// 0x3503b2bd
- (void)_mirroringSwitchValueDidChange:(id)_mirroringSwitchValue;	// 0x3503ace5
- (id)_pickedRoute;	// 0x3503b419
- (BOOL)_shouldShowDebugButton;	// 0x3503b4f1
- (BOOL)_wirelessDisplayCapableRouteIsPicked;	// 0x3503b575
// declared property getter: - (id)audioDeviceController;	// 0x3503b5c1
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x350397bd
- (void)dealloc;	// 0x35039711
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x350399a5
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3503a2b1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x35039949
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x3503a1f1
- (void)viewDidAppear:(BOOL)view;	// 0x350398c5
@end

