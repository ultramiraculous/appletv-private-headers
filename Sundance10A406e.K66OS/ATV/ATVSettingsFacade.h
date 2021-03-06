/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVSettingsMigration.h"
#import "ATVSettingsSaver.h"
#import "BRSingleton.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVSettingsFacade : BRSingleton <ATVSettingsSaver, ATVSettingsMigration> {
	NSArray *_allMarimbaSlideshowThemeKeys;	// 4 = 0x4
	NSArray *_allMarimbaSlideshowThemeTitleKeys;	// 8 = 0x8
	id _screenSaverSetCollectionBlock;	// 12 = 0xc
}
@property(assign) BOOL UISoundsEnabled;	// G=0x23d475; S=0x23d4f1; converted property
@property(assign) BOOL airTunesControlFromSpeakerIsEnabled;	// G=0x241bd5; S=0x241c19; converted property
@property(assign) BOOL airTunesDenyInterruptionsIsEnabled;	// G=0x241d29; S=0x241da5; converted property
@property(assign) BOOL airTunesIsEnabled;	// G=0x241905; S=0x241981; converted property
@property(retain) id airTunesPassword;	// G=0x241a95; S=0x241b1d; converted property
@property(assign) BOOL airTunesPinModeIsEnabled;	// G=0x241c1d; S=0x241c99; converted property
@property(assign) int audioFormatSetting;	// G=0x23e081; S=0x23e0f5; converted property
@property(assign) int audioOutputQuality;	// G=0x23e159; S=0x23e19d; converted property
@property(assign) BOOL crashReportingEnabled;	// G=0x23e2c1; S=0x23e201; converted property
@property(retain) id defaultAudioLanguage;	// G=0x23d7a9; S=0x23d841; converted property
@property(retain) id defaultSubtitleLanguage;	// G=0x23d6ad; S=0x23d745; converted property
@property(assign) int displayOverscanOverrideMode;	// G=0x23fbb1; S=0x23fbf1; converted property
@property(assign) int favoritesSortMode;	// G=0x23fc89; S=0x23fccd; converted property
@property(retain) id keyboardLanguageKeys;	// G=0x240d79; S=0x240db9; converted property
@property(retain) id lastUsedKeyboardLanguage;	// G=0x240e71; S=0x240eb1; converted property
@property(assign) BOOL legacyPhotoStreamEnabled;	// G=0x240951; S=0x240991; converted property
@property(retain) id marimbaSlideshowMusicSetting;	// G=0x2405bd; S=0x240821; converted property
@property(retain) id marimbaSlideshowStyle;	// G=0x2404b9; S=0x240475; converted property
@property(assign) int musicRepeatMode;	// G=0x23dd95; S=0x23ddd9; converted property
@property(assign) BOOL musicUseSoundCheck;	// G=0x23dfb9; S=0x23dffd; converted property
@property(assign) BOOL musicVolumeControlEnabled;	// G=0x23de25; S=0x23de69; converted property
@property(assign) int playbackResolution;	// G=0x23f8c9; S=0x23fa1d; converted property
@property(assign) BOOL playlistsEverywhereEnabled;	// G=0x23e399; S=0x23e3dd; converted property
@property(assign) BOOL preferHDPreviews;	// G=0x23f77d; S=0x23f7e9; converted property
@property(assign) BOOL screenSaverAllowedOverMusic;	// G=0x23e425; S=0x23e469; converted property
@property(assign) BOOL screenSaverPrefetchComplete;	// G=0x23e80d; S=0x23e851; converted property
@property(assign) int screenSaverSecondsPerSlide;	// G=0x23f5c5; S=0x23f63d; converted property
@property(readonly, assign) id screenSaverSetCollectionBlock;	// G=0x23f541; @synthesize=_screenSaverSetCollectionBlock
@property(retain) id screenSaverSlideshowThemeKey;	// G=0x23e759; S=0x23e7c5; converted property
@property(assign) int screenSaverTimeout;	// G=0x23f279; S=0x23f2e9; converted property
@property(retain) id screenSaverTransition;	// G=0x23f685; S=0x23f6f1; converted property
@property(retain) id selectedScreenSaverIdentifier;	// G=0x23e4b1; S=0x23e6dd; converted property
@property(assign) BOOL sharedPhotoStreamEnabled;	// G=0x2409e1; S=0x240a21; converted property
@property(assign) BOOL sharedPhotoStreamEnabledStateCanBeToggled;	// G=0x240cf9; S=0x240c79; converted property
@property(assign) int sleepTimeout;	// G=0x23f3b1; S=0x23f415; converted property
@property(assign) BOOL slideshowRepeat;	// G=0x23fe55; S=0x23fec5; converted property
@property(assign) int slideshowSecondsPerSlide;	// G=0x23fd9d; S=0x23fe0d; converted property
@property(retain) id slideshowSelectedTransitionName;	// G=0x240025; S=0x240091; converted property
@property(assign) BOOL slideshowShuffleMusic;	// G=0x23ff99; S=0x23ffdd; converted property
@property(assign) BOOL slideshowShufflePhotos;	// G=0x23ff0d; S=0x23ff51; converted property
@property(assign) int videoClosedCaptionMode;	// G=0x23d589; S=0x23d5cd; converted property
+ (id)getMobileGestaltString:(CFStringRef)string;	// 0x241839
+ (void)initializePlatformFacade;	// 0x23cf01
+ (void)setSingleton:(id)singleton;	// 0x23cf2d
+ (id)singleton;	// 0x23cf1d
// converted property getter: - (BOOL)UISoundsEnabled;	// 0x23d475
- (id)_avSelectionPlistForMedia:(id)media forType:(id)type;	// 0x2431bd
- (id)_availableDefaultAVLanguages;	// 0x243341
- (SCNetworkServiceRef)_copyNetworkServiceForInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x243741
- (id)_existingSlideshowThemeKeys;	// 0x243415
- (id)_existingSlideshowThemeTitleKeys;	// 0x243509
- (id)_newSlideshowThemeKeys;	// 0x2435fd
- (id)_newSlideshowThemeTitleKeys;	// 0x24366d
- (void)_removeSavedPreferredOptionsForType:(id)type;	// 0x2432c5
- (int)_resolutionForPlaybackString:(id)playbackString;	// 0x23f87d
- (void)_saveAVSelectionDictionary:(id)dictionary forMedia:(id)media forType:(id)type;	// 0x242f75
- (BOOL)_saveConfiguration:(id)configuration forInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x243811
- (BOOL)_setDNSWithAddresses:(id)addresses forService:(SCNetworkServiceRef)service;	// 0x243d45
- (void)_setPhotoStreamEnabledState:(BOOL)state withPrefsKey:(id)prefsKey withNotificationName:(id)notificationName;	// 0x240a71
- (void)_setScreenSaverCollection:(id)collection;	// 0x2436dd
- (id)_stringForPlaybackResolution:(int)playbackResolution;	// 0x23f851
- (void)addPathsToSaveTo:(id)to;	// 0x23cfb1
- (BOOL)addSiteIsEnabled;	// 0x2424d9
- (id)addSiteLoggingURL;	// 0x2425a5
// converted property getter: - (BOOL)airTunesControlFromSpeakerIsEnabled;	// 0x241bd5
// converted property getter: - (BOOL)airTunesDenyInterruptionsIsEnabled;	// 0x241d29
// converted property getter: - (BOOL)airTunesIsEnabled;	// 0x241905
// converted property getter: - (id)airTunesPassword;	// 0x241a95
- (BOOL)airTunesPasswordIsEnabled;	// 0x241a55
// converted property getter: - (BOOL)airTunesPinModeIsEnabled;	// 0x241c1d
- (void)appleConnectID:(id *)anId password:(id *)password;	// 0x241e35
// converted property getter: - (int)audioFormatSetting;	// 0x23e081
// converted property getter: - (int)audioOutputQuality;	// 0x23e159
- (id)avAudioSelectionPlistForMedia:(id)media;	// 0x23dd01
- (int)avClosedCaptionsSettingForMedia:(id)media;	// 0x23dbdd
- (id)avSubtitleSelectionPlistForMedia:(id)media;	// 0x23db49
- (id)availableDefaultAudioLanguages;	// 0x23d69d
- (id)availableDefaultSubtitleLanguages;	// 0x23d68d
// converted property getter: - (BOOL)crashReportingEnabled;	// 0x23e2c1
- (BOOL)crashReportingPreferenceSet;	// 0x23e355
- (void)dealloc;	// 0x23cf3d
// converted property getter: - (id)defaultAudioLanguage;	// 0x23d7a9
// converted property getter: - (id)defaultSubtitleLanguage;	// 0x23d6ad
- (int)deviceActivationState;	// 0x242671
- (BOOL)displayNewSlideshowThemes;	// 0x2400d9
// converted property getter: - (int)displayOverscanOverrideMode;	// 0x23fbb1
- (id)externalSubtitleSelectionForMedia:(id)media;	// 0x23d8a5
// converted property getter: - (int)favoritesSortMode;	// 0x23fc89
- (void)flushDiskChanges;	// 0x23d3bd
- (id)hardwareResolution;	// 0x23fb49
- (id)hwDeviceName;	// 0x241105
- (id)hwModel;	// 0x2418d1
- (id)hwSerialNumber;	// 0x24166d
- (BOOL)hwSetSystemLanguage:(id)language;	// 0x241695
- (BOOL)isAutomaticTimeZoneSelectionEnabled;	// 0x242c15
- (BOOL)isTimeZoneSet;	// 0x242ab5
- (BOOL)keyboardLanguageEnabled:(id)enabled;	// 0x240dfd
// converted property getter: - (id)keyboardLanguageKeys;	// 0x240d79
// converted property getter: - (id)lastUsedKeyboardLanguage;	// 0x240e71
// converted property getter: - (BOOL)legacyPhotoStreamEnabled;	// 0x240951
- (id)logPushID;	// 0x241481
- (id)maribmaSlideshowAllSongsPlaylistID;	// 0x240931
- (id)marimbaAlbumArtSlideshowThemeTitleKeys;	// 0x2402ed
- (id)marimbaGeneralSlideshowThemeTitleKeys;	// 0x240355
// converted property getter: - (id)marimbaSlideshowMusicSetting;	// 0x2405bd
// converted property getter: - (id)marimbaSlideshowStyle;	// 0x2404b9
- (id)marimbaSlideshowThemeKeys;	// 0x2400dd
- (int)maximumPlaybackResolution;	// 0x23f9fd
- (void)migrateFrom:(id)from to:(id)to;	// 0x23d0ed
// converted property getter: - (int)musicRepeatMode;	// 0x23dd95
// converted property getter: - (BOOL)musicUseSoundCheck;	// 0x23dfb9
- (float)musicVolume;	// 0x23df09
// converted property getter: - (BOOL)musicVolumeControlEnabled;	// 0x23de25
- (id)parentalControlsPasscode;	// 0x23fd15
- (int)parentalControlsYTMode;	// 0x23fd59
- (BOOL)periodicallyDisplayPhotoStreamDownloadQueues;	// 0x240d39
// converted property getter: - (int)playbackResolution;	// 0x23f8c9
// converted property getter: - (BOOL)playlistsEverywhereEnabled;	// 0x23e399
// converted property getter: - (BOOL)preferHDPreviews;	// 0x23f77d
- (BOOL)preferHDVideo;	// 0x23f739
- (BOOL)runningAnInternalBuild;	// 0x241445
- (void)saveAVAudioSelectionPlist:(id)plist forMedia:(id)media;	// 0x23dd1d
- (void)saveAVClosedCaptionsEnabled:(BOOL)enabled forMedia:(id)media;	// 0x23dc6d
- (void)saveAVSubtitleSelectionPlist:(id)plist forMedia:(id)media;	// 0x23db65
- (BOOL)saveConfiguration:(id)configuration;	// 0x24132d
- (void)saveExternalSubtitleSelection:(id)selection forMedia:(id)media;	// 0x23d9f9
- (void)saveMusicVolume:(float)volume;	// 0x23df51
// converted property getter: - (BOOL)screenSaverAllowedOverMusic;	// 0x23e425
- (id)screenSaverCollectionArchive;	// 0x23e899
- (BOOL)screenSaverCollectionTypeIsAlbumArtwork:(id)artwork;	// 0x23f225
- (int)screenSaverPhotoSpinFrequency;	// 0x23f4dd
// converted property getter: - (BOOL)screenSaverPrefetchComplete;	// 0x23e80d
// converted property getter: - (int)screenSaverSecondsPerSlide;	// 0x23f5c5
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x23f541
// converted property getter: - (id)screenSaverSlideshowThemeKey;	// 0x23e759
- (BOOL)screenSaverThemeAllowsAlbumArtwork:(id)artwork;	// 0x23f1d1
// converted property getter: - (int)screenSaverTimeout;	// 0x23f279
// converted property getter: - (id)screenSaverTransition;	// 0x23f685
// converted property getter: - (id)selectedScreenSaverIdentifier;	// 0x23e4b1
// converted property setter: - (void)setAirTunesControlFromSpeakerIsEnabled:(BOOL)speakerIsEnabled;	// 0x241c19
// converted property setter: - (void)setAirTunesDenyInterruptionsIsEnabled:(BOOL)enabled;	// 0x241da5
// converted property setter: - (void)setAirTunesIsEnabled:(BOOL)enabled;	// 0x241981
// converted property setter: - (void)setAirTunesPassword:(id)password;	// 0x241b1d
// converted property setter: - (void)setAirTunesPinModeIsEnabled:(BOOL)enabled;	// 0x241c99
- (BOOL)setAppleConnectID:(id)anId password:(id)password;	// 0x242179
// converted property setter: - (void)setAudioFormatSetting:(int)setting;	// 0x23e0f5
// converted property setter: - (void)setAudioOutputQuality:(int)quality;	// 0x23e19d
- (BOOL)setAutomaticTimeZoneSelectionEnabled:(BOOL)enabled;	// 0x242c21
// converted property setter: - (void)setCrashReportingEnabled:(BOOL)enabled;	// 0x23e201
// converted property setter: - (void)setDefaultAudioLanguage:(id)language;	// 0x23d841
// converted property setter: - (void)setDefaultSubtitleLanguage:(id)language;	// 0x23d745
- (void)setDeviceActivationFailureState:(int)state;	// 0x24274d
- (void)setDeviceActivationWasSkipped:(BOOL)skipped;	// 0x242825
// converted property setter: - (void)setDisplayOverscanOverrideMode:(int)mode;	// 0x23fbf1
// converted property setter: - (void)setFavoritesSortMode:(int)mode;	// 0x23fccd
- (void)setHWDeviceName:(id)name;	// 0x24118d
- (void)setKeyboardLanguageEnabled:(id)enabled enabled:(BOOL)enabled2;	// 0x240e35
// converted property setter: - (void)setKeyboardLanguageKeys:(id)keys;	// 0x240db9
// converted property setter: - (void)setLastUsedKeyboardLanguage:(id)language;	// 0x240eb1
// converted property setter: - (void)setLegacyPhotoStreamEnabled:(BOOL)enabled;	// 0x240991
// converted property setter: - (void)setMarimbaSlideshowMusicSetting:(id)setting;	// 0x240821
// converted property setter: - (void)setMarimbaSlideshowStyle:(id)style;	// 0x240475
// converted property setter: - (void)setMusicRepeatMode:(int)mode;	// 0x23ddd9
// converted property setter: - (void)setMusicUseSoundCheck:(BOOL)check;	// 0x23dffd
// converted property setter: - (void)setMusicVolumeControlEnabled:(BOOL)enabled;	// 0x23de69
// converted property setter: - (void)setPlaybackResolution:(int)resolution;	// 0x23fa1d
// converted property setter: - (void)setPlaylistsEverywhereEnabled:(BOOL)enabled;	// 0x23e3dd
// converted property setter: - (void)setPreferHDPreviews:(BOOL)previews;	// 0x23f7e9
// converted property setter: - (void)setScreenSaverAllowedOverMusic:(BOOL)music;	// 0x23e469
- (void)setScreenSaverMusicCoverCollection:(id)collection;	// 0x23e8dd
- (void)setScreenSaverPhotoCollection:(id)collection;	// 0x23ecb9
// converted property setter: - (void)setScreenSaverPrefetchComplete:(BOOL)complete;	// 0x23e851
// converted property setter: - (void)setScreenSaverSecondsPerSlide:(int)slide;	// 0x23f63d
// converted property setter: - (void)setScreenSaverSlideshowThemeKey:(id)key;	// 0x23e7c5
// converted property setter: - (void)setScreenSaverTimeout:(int)timeout;	// 0x23f2e9
// converted property setter: - (void)setScreenSaverTransition:(id)transition;	// 0x23f6f1
// converted property setter: - (void)setSelectedScreenSaverIdentifier:(id)identifier;	// 0x23e6dd
// converted property setter: - (void)setSharedPhotoStreamEnabled:(BOOL)enabled;	// 0x240a21
// converted property setter: - (void)setSharedPhotoStreamEnabledStateCanBeToggled:(BOOL)toggled;	// 0x240c79
// converted property setter: - (void)setSleepTimeout:(int)timeout;	// 0x23f415
// converted property setter: - (void)setSlideshowRepeat:(BOOL)repeat;	// 0x23fec5
// converted property setter: - (void)setSlideshowSecondsPerSlide:(int)slide;	// 0x23fe0d
// converted property setter: - (void)setSlideshowSelectedTransitionName:(id)name;	// 0x240091
// converted property setter: - (void)setSlideshowShuffleMusic:(BOOL)music;	// 0x23ffdd
// converted property setter: - (void)setSlideshowShufflePhotos:(BOOL)photos;	// 0x23ff51
- (BOOL)setTimeZoneFromCityID:(id)cityID;	// 0x24289d
// converted property setter: - (void)setUISoundsEnabled:(BOOL)enabled;	// 0x23d4f1
- (BOOL)setUserAllowedAutomaticTimeZoneSelection:(BOOL)selection;	// 0x242b5d
// converted property setter: - (void)setVideoClosedCaptionMode:(int)mode;	// 0x23d5cd
// converted property getter: - (BOOL)sharedPhotoStreamEnabled;	// 0x2409e1
// converted property getter: - (BOOL)sharedPhotoStreamEnabledStateCanBeToggled;	// 0x240cf9
// converted property getter: - (int)sleepTimeout;	// 0x23f3b1
// converted property getter: - (BOOL)slideshowRepeat;	// 0x23fe55
// converted property getter: - (int)slideshowSecondsPerSlide;	// 0x23fd9d
// converted property getter: - (id)slideshowSelectedTransitionName;	// 0x240025
// converted property getter: - (BOOL)slideshowShuffleMusic;	// 0x23ff99
// converted property getter: - (BOOL)slideshowShufflePhotos;	// 0x23ff0d
- (id)timeZone;	// 0x242881
- (id)timeZoneCityDisplayNameIncludingCountry:(BOOL)country;	// 0x242cad
- (id)timeZoneCityID;	// 0x242e25
- (void)updateHostID:(id)anId to:(id)to;	// 0x23d2ed
- (BOOL)userAllowedAutomaticTimeZoneSelection;	// 0x242b19
- (id)versionEFI;	// 0x240fe5
- (id)versionGF;	// 0x24109d
- (id)versionIR;	// 0x241081
- (id)versionOS;	// 0x240fad
- (id)versionOSBuild;	// 0x240fc9
- (id)versionSoftware;	// 0x240ef5
- (id)versionSoftwareBuild;	// 0x240f45
// converted property getter: - (int)videoClosedCaptionMode;	// 0x23d589
- (BOOL)wasDeviceActivationSkipped;	// 0x2427e1
- (BOOL)wasTimeZoneSetByCoreLocation;	// 0x242ba1
@end

