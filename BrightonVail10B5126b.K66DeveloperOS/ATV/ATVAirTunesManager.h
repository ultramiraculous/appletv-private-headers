/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVSliderMenuItemView, BRStateMachine, NSDictionary, NSString, NSTimer, NSArray;

__attribute__((visibility("hidden")))
@interface ATVAirTunesManager : BRSingleton {
	BRStateMachine *_stateMachine;	// 4 = 0x4
	BOOL _alternateSpeakersEnabled;	// 8 = 0x8
	BOOL _preparingToSleep;	// 9 = 0x9
	NSTimer *_speakerSleepTimer;	// 12 = 0xc
	NSArray *_pickableRoutes;	// 16 = 0x10
	NSArray *_pickableSpeakers;	// 20 = 0x14
	NSArray *_pickableScreens;	// 24 = 0x18
	NSString *_cachedMACAddress;	// 28 = 0x1c
	NSDictionary *_cachedDefaultRoute;	// 32 = 0x20
	NSDictionary *_previousRoute;	// 36 = 0x24
	BOOL _updatesDisabledForScreenSaver;	// 40 = 0x28
	NSTimer *_disableRouteTimer;	// 44 = 0x2c
	ATVSliderMenuItemView *_onScreenVolumeSlider;	// 48 = 0x30
}
@property(retain) ATVSliderMenuItemView *onScreenVolumeSlider;	// G=0x112971; S=0x112985; @synthesize=_onScreenVolumeSlider
@property(readonly, retain) NSArray *pickableScreens;	// G=0x111cf5; converted property
@property(readonly, retain) NSArray *pickableSpeakers;	// G=0x1119c1; converted property
+ (void)setSingleton:(id)singleton;	// 0x110089
+ (id)singleton;	// 0x110079
- (id)init;	// 0x1100ad
- (void).cxx_destruct;	// 0x112995
- (void)_airPlayActiveAudioRouteChanged:(id)changed;	// 0x1140d1
- (id)_airPlayAuthFailed:(id)failed;	// 0x1135e5
- (void)_airPlayPickableRoutesChanged:(id)changed;	// 0x113fd9
- (id)_cachedMACAddress;	// 0x113ed1
- (id)_cleanUpSpeakerState:(id)state;	// 0x113b51
- (void)_deviceWillSleep:(id)_device;	// 0x110d29
- (void)_deviceWillWake:(id)_device;	// 0x110d81
- (float)_displayVolumeValue;	// 0x110575
- (void)_initializeStateMachine:(id)machine;	// 0x112a69
- (BOOL)_isMuted;	// 0x1105ed
- (BOOL)_isRouteToMe:(id)me;	// 0x113f6d
- (void)_networkStateChanged:(id)changed;	// 0x1141c1
- (id)_newPasswordDialogForSpeaker:(id)speaker;	// 0x1124d9
- (void)_portStatusDidChange:(id)_portStatus;	// 0x114165
- (void)_postSpeakerWasSelectedNotificationForSpeaker:(id)speaker;	// 0x113b95
- (void)_refreshSpeakerUpdateState;	// 0x110efd
- (void)_screenSaverActivated:(id)activated;	// 0x110ebd
- (void)_screenSaverDeactivated:(id)deactivated;	// 0x110edd
- (id)_selectRoute:(id)route withPassword:(id)password showDialog:(BOOL)dialog isTransient:(BOOL)transient;	// 0x112071
- (id)_selectedSpeakerInfo;	// 0x111779
- (void)_setSelectedSpeakerInfo:(id)info;	// 0x111939
- (id)_supportedMediaTypes;	// 0x113d0d
- (void)_updateSpeakerSelectionAfterSleep:(id)sleep;	// 0x110e01
- (BOOL)areAlternateSpeakersSelected;	// 0x111095
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x112731
- (void)configureSelectedSpeakerSliderMenuItem:(id)item;	// 0x110639
- (void)dealloc;	// 0x1104dd
- (id)defaultRoute;	// 0x111e61
- (BOOL)destinationIsAppleTV;	// 0x1110c1
- (BOOL)disableSelectedRoute;	// 0x1123a1
- (void)disableSelectedRouteWithDelay:(float)delay;	// 0x112469
- (BOOL)doesSpeakerHavePINCode:(id)code;	// 0x11153d
- (BOOL)doesSpeakerHavePassword:(id)password;	// 0x1114f1
- (BOOL)doesSpeakerSupportAirPlayAudio:(id)audio;	// 0x111589
- (BOOL)doesSpeakerSupportAirPlayScreen:(id)screen;	// 0x111621
- (BOOL)doesSpeakerSupportAirPlayVideo:(id)video;	// 0x1115d5
- (BOOL)enableSelectedRoute;	// 0x1122bd
- (BOOL)isActivelyUsingAlternateSpeakers;	// 0x111059
- (BOOL)isDefaultRoute:(id)route;	// 0x111495
- (BOOL)isSpeakerConnectedForInfo:(id)info;	// 0x1113ad
- (int)numPickableRoutes;	// 0x111161
- (int)numPickableScreens;	// 0x111181
- (int)numPickableSpeakers;	// 0x1111bd
// declared property getter: - (id)onScreenVolumeSlider;	// 0x112971
// converted property getter: - (id)pickableScreens;	// 0x111cf5
// converted property getter: - (id)pickableSpeakers;	// 0x1119c1
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x1111f9
- (id)remoteSpeakerInfoWithUID:(id)uid;	// 0x111245
- (BOOL)selectRoute:(id)route;	// 0x111fbd
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x112829
// declared property setter: - (void)setOnScreenVolumeSlider:(id)slider;	// 0x112985
- (id)speakerNameForInfo:(id)info;	// 0x111691
- (id)speakerUIDForInfo:(id)info;	// 0x11166d
- (id)speakersProviderWithHandler:(id)handler title:(id)title initialSelection:(long *)selection disableAlternateRoutes:(BOOL)routes;	// 0x11087d
@end

