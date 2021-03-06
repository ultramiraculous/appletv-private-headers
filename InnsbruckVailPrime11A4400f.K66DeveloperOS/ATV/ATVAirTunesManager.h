/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVSliderMenuItemView, NSDictionary, NSArray, NSTimer, BRStateMachine;

__attribute__((visibility("hidden")))
@interface ATVAirTunesManager : BRSingleton {
	BRStateMachine *_stateMachine;	// 4 = 0x4
	BOOL _alternateSpeakersEnabled;	// 8 = 0x8
	BOOL _shouldReconnectOnRouteChange;	// 9 = 0x9
	BOOL _preparingToSleep;	// 10 = 0xa
	NSTimer *_speakerSleepTimer;	// 12 = 0xc
	NSArray *_pickableRoutes;	// 16 = 0x10
	NSArray *_pickableSpeakers;	// 20 = 0x14
	NSArray *_pickableScreens;	// 24 = 0x18
	NSDictionary *_cachedDefaultRoute;	// 28 = 0x1c
	NSDictionary *_previousRoute;	// 32 = 0x20
	BOOL _updatesDisabledForScreenSaver;	// 36 = 0x24
	NSTimer *_disableRouteTimer;	// 40 = 0x28
	ATVSliderMenuItemView *_onScreenVolumeSlider;	// 44 = 0x2c
}
@property(retain) ATVSliderMenuItemView *onScreenVolumeSlider;	// G=0xa3829; S=0xa383d; @synthesize=_onScreenVolumeSlider
@property(readonly, retain) NSArray *pickableScreens;	// G=0xa2ba9; converted property
@property(readonly, retain) NSArray *pickableSpeakers;	// G=0xa2871; converted property
+ (void)setSingleton:(id)singleton;	// 0xa0e8d
+ (id)singleton;	// 0xa0e7d
- (id)init;	// 0xa0eb1
- (void).cxx_destruct;	// 0xa384d
- (void)_airPlayActiveAudioRouteChanged:(id)changed;	// 0xa5049
- (id)_airPlayAuthFailed:(id)failed;	// 0xa44f5
- (void)_airPlayPickableRoutesChanged:(id)changed;	// 0xa4f51
- (id)_cleanUpSpeakerState:(id)state;	// 0xa4a65
- (void)_deviceWillSleep:(id)_device;	// 0xa1b01
- (void)_deviceWillWake:(id)_device;	// 0xa1b59
- (void)_displayModeChanged:(id)changed;	// 0xa1c95
- (float)_displayVolumeValue;	// 0xa136d
- (void)_initializeStateMachine:(id)machine;	// 0xa390d
- (BOOL)_isMuted;	// 0xa13e5
- (BOOL)_isRouteToMe:(id)me;	// 0xa4e9d
- (id)_newPasswordDialogForSpeaker:(id)speaker;	// 0xa3391
- (void)_portStatusDidChange:(id)_portStatus;	// 0xa50dd
- (void)_postSpeakerWasSelectedNotificationForSpeaker:(id)speaker;	// 0xa4b61
- (void)_refreshSpeakerUpdateState;	// 0xa1d61
- (void)_screenSaverActivated:(id)activated;	// 0xa1d21
- (void)_screenSaverDeactivated:(id)deactivated;	// 0xa1d41
- (id)_selectRoute:(id)route withPassword:(id)password showDialog:(BOOL)dialog isTransient:(BOOL)transient;	// 0xa2f21
- (id)_selectedSpeakerInfo;	// 0xa25f5
- (void)_setSelectedSpeakerInfo:(id)info;	// 0xa27e9
- (id)_supportedMediaTypes;	// 0xa4cd9
- (void)_updateSpeakerSelectionAfterSleep:(id)sleep;	// 0xa1bd9
- (BOOL)areAlternateSpeakersSelected;	// 0xa1ef5
- (id)bonjourDeviceID;	// 0xa1fc1
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0xa35e9
- (void)configureSelectedSpeakerSliderMenuItem:(id)item;	// 0xa1431
- (void)dealloc;	// 0xa12d5
- (id)defaultRoute;	// 0xa2d11
- (BOOL)destinationIsAppleTV;	// 0xa1f21
- (BOOL)disableSelectedRoute;	// 0xa3259
- (void)disableSelectedRouteWithDelay:(float)delay;	// 0xa3321
- (BOOL)doesSpeakerHavePINCode:(id)code;	// 0xa23b9
- (BOOL)doesSpeakerHavePassword:(id)password;	// 0xa236d
- (BOOL)doesSpeakerSupportAirPlayAudio:(id)audio;	// 0xa2405
- (BOOL)doesSpeakerSupportAirPlayScreen:(id)screen;	// 0xa249d
- (BOOL)doesSpeakerSupportAirPlayVideo:(id)video;	// 0xa2451
- (BOOL)enableSelectedRoute;	// 0xa3165
- (BOOL)isActivelyUsingAlternateSpeakers;	// 0xa1eb9
- (BOOL)isDefaultRoute:(id)route;	// 0xa2311
- (BOOL)isSpeakerConnectedForInfo:(id)info;	// 0xa2229
- (int)numPickableRoutes;	// 0xa1fdd
- (int)numPickableScreens;	// 0xa1ffd
- (int)numPickableSpeakers;	// 0xa2039
// declared property getter: - (id)onScreenVolumeSlider;	// 0xa3829
// converted property getter: - (id)pickableScreens;	// 0xa2ba9
// converted property getter: - (id)pickableSpeakers;	// 0xa2871
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0xa2075
- (id)remoteSpeakerInfoWithUID:(id)uid;	// 0xa20c1
- (BOOL)selectRoute:(id)route;	// 0xa2e6d
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0xa36e1
// declared property setter: - (void)setOnScreenVolumeSlider:(id)slider;	// 0xa383d
- (id)speakerNameForInfo:(id)info;	// 0xa250d
- (id)speakerUIDForInfo:(id)info;	// 0xa24e9
- (id)speakersProviderWithHandler:(id)handler title:(id)title initialSelection:(long *)selection disableAlternateRoutes:(BOOL)routes;	// 0xa1671
@end

