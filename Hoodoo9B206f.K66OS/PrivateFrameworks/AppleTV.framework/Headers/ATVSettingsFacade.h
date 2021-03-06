/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSArray;

@interface ATVSettingsFacade : BRSingleton {
@private
	NSArray *_allMarimbaSlideshowThemeIdentifiers;	// 4 = 0x4
	NSArray *_allMarimbaSlideshowThemeTitleKeys;	// 8 = 0x8
	id _screenSaverSetCollectionBlock;	// 12 = 0xc
}
@property(assign) BOOL UISoundsEnabled;	// G=0x365b6f65; S=0x365b6fe1; converted property
@property(assign) BOOL airTunesControlFromSpeakerIsEnabled;	// G=0x365bb9f1; S=0x365bba35; converted property
@property(assign) BOOL airTunesIsEnabled;	// G=0x365bb6bd; S=0x365bb751; converted property
@property(retain) id airTunesPassword;	// G=0x365bb879; S=0x365bb8f9; converted property
@property(assign) int audioFormatSetting;	// G=0x365b7a05; S=0x365b7a79; converted property
@property(assign) int audioOutputQuality;	// G=0x365b7add; S=0x365b7b21; converted property
@property(assign) BOOL crashReportingEnabled;	// G=0x365b7c3d; S=0x365b7b85; converted property
@property(retain) id defaultAudioLanguage;	// G=0x365b725d; S=0x365b72f5; converted property
@property(retain) id defaultSubtitleLanguage;	// G=0x365b7161; S=0x365b71f9; converted property
@property(assign) BOOL displayNewSlideshowThemes;	// G=0x365b9f95; S=0x365b9fd5; converted property
@property(assign) int favoritesSortMode;	// G=0x365b97c1; S=0x365b9805; converted property
@property(retain) id keyboardLanguageKeys;	// G=0x365ba909; S=0x365ba949; converted property
@property(retain) id lastUsedKeyboardLanguage;	// G=0x365baa01; S=0x365baa41; converted property
@property(retain) id marimbaSlideshowDefaultMusicPlaylistID;	// G=0x365ba885; S=0x365ba8c5; converted property
@property(retain) id marimbaSlideshowDefaultMusicServerSetting;	// G=0x365ba521; S=0x365ba7b5; converted property
@property(retain) id marimbaSlideshowStyle;	// G=0x365ba485; S=0x365ba441; converted property
@property(assign) int musicRepeatMode;	// G=0x365b771d; S=0x365b7761; converted property
@property(assign) BOOL musicUseSoundCheck;	// G=0x365b793d; S=0x365b7981; converted property
@property(assign) BOOL musicVolumeControlEnabled;	// G=0x365b77ad; S=0x365b77f1; converted property
@property(assign) int playbackResolution;	// G=0x365b94d5; S=0x365b9629; converted property
@property(assign) BOOL playlistsEverywhereEnabled;	// G=0x365b7d21; S=0x365b7d65; converted property
@property(assign) BOOL preferHDPreviews;	// G=0x365b9389; S=0x365b93f1; converted property
@property(assign) BOOL screenSaverAllowedOverMusic;	// G=0x365b7dad; S=0x365b7df1; converted property
@property(assign) BOOL screenSaverPanAndZoom;	// G=0x365b9119; S=0x365b918d; converted property
@property(assign) BOOL screenSaverPrefetchComplete;	// G=0x365b840d; S=0x365b8451; converted property
@property(assign) int screenSaverSecondsPerSlide;	// G=0x365b9059; S=0x365b90d1; converted property
@property(retain) id screenSaverSelectedPath;	// G=0x365b7f69; S=0x365b8285; converted property
@property(readonly, assign) id screenSaverSetCollectionBlock;	// G=0x365b8fd5; @synthesize=_screenSaverSetCollectionBlock
@property(assign) BOOL screenSaverShufflePhotos;	// G=0x365b91d5; S=0x365b9249; converted property
@property(retain) id screenSaverSlideshowTheme;	// G=0x365b8381; S=0x365b83c5; converted property
@property(assign) int screenSaverTimeout;	// G=0x365b8d05; S=0x365b8d71; converted property
@property(retain) id screenSaverTransition;	// G=0x365b9291; S=0x365b92fd; converted property
@property(assign) int sleepTimeout;	// G=0x365b8e39; S=0x365b8e9d; converted property
@property(assign) BOOL slideshowPanAndZoom;	// G=0x365b9b55; S=0x365b9b99; converted property
@property(assign) BOOL slideshowPlayMusic;	// G=0x365b9be1; S=0x365b9c25; converted property
@property(assign) BOOL slideshowRepeat;	// G=0x365b9989; S=0x365b99f5; converted property
@property(assign) int slideshowSecondsPerSlide;	// G=0x365b98d5; S=0x365b9941; converted property
@property(retain) id slideshowSelectedPlaylistName;	// G=0x365b9e61; S=0x365b9e9d; converted property
@property(retain) id slideshowSelectedTransitionName;	// G=0x365b9ee1; S=0x365b9f4d; converted property
@property(assign) BOOL slideshowShuffleMusic;	// G=0x365b9ac9; S=0x365b9b0d; converted property
@property(assign) BOOL slideshowShufflePhotos;	// G=0x365b9a3d; S=0x365b9a81; converted property
@property(assign) int videoClosedCaptionMode;	// G=0x365b7079; S=0x365b70bd; converted property
+ (id)getMobileGestaltString:(CFStringRef)string;	// 0x365bb5f1
+ (void)initializePlatformFacade;	// 0x365b6d31
+ (void)setSingleton:(id)singleton;	// 0x365b6d5d
+ (id)singleton;	// 0x365b6d4d
// converted property getter: - (BOOL)UISoundsEnabled;	// 0x365b6f65
- (id)_avSelectionPlistForMedia:(id)media forType:(id)type;	// 0x365bd069
- (id)_availableDefaultAVLanguages;	// 0x365bd1ed
- (SCNetworkServiceRef)_copyNetworkServiceForInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x365bd5ad
- (id)_existingSlideshowThemeKeys;	// 0x365bd2b9
- (id)_existingSlideshowThemeTitleKeys;	// 0x365bd3a5
- (long)_itemCountForMediaType:(id)mediaType;	// 0x365bd4fd
- (id)_newSlideshowThemeKeys;	// 0x365bd491
- (id)_newSlideshowThemeTitleKeys;	// 0x365bd495
- (void)_removeSavedPreferredOptionsForType:(id)type;	// 0x365bd171
- (int)_resolutionForPlaybackString:(id)playbackString;	// 0x365b9485
- (void)_saveAVSelectionDictionary:(id)dictionary forMedia:(id)media forType:(id)type;	// 0x365bce2d
- (BOOL)_saveConfiguration:(id)configuration forInterface:(int)interface withPrefs:(SCPreferencesRef)prefs;	// 0x365bd665
- (BOOL)_setDNSWithAddresses:(id)addresses forService:(SCNetworkServiceRef)service;	// 0x365bdab9
- (void)_setScreenSaverCollection:(id)collection;	// 0x365bd499
- (void)_setSlideshowSelectedPlaylistName:(id)name forHost:(id)host;	// 0x365bcc05
- (id)_slideshowSelectedPlaylistNameForHost:(id)host;	// 0x365bcd45
- (id)_stringForPlaybackResolution:(int)playbackResolution;	// 0x365b9459
- (BOOL)addSiteIsEnabled;	// 0x365bc191
- (id)addSiteLoggingURL;	// 0x365bc25d
// converted property getter: - (BOOL)airTunesControlFromSpeakerIsEnabled;	// 0x365bb9f1
// converted property getter: - (BOOL)airTunesIsEnabled;	// 0x365bb6bd
// converted property getter: - (id)airTunesPassword;	// 0x365bb879
- (BOOL)airTunesPasswordIsEnabled;	// 0x365bb83d
- (void)appleConnectID:(id *)anId password:(id *)password;	// 0x365bbacd
// converted property getter: - (int)audioFormatSetting;	// 0x365b7a05
// converted property getter: - (int)audioOutputQuality;	// 0x365b7add
- (id)avAudioSelectionPlistForMedia:(id)media;	// 0x365b7689
- (id)avSubtitleSelectionPlistForMedia:(id)media;	// 0x365b75f5
- (id)availableDefaultAudioLanguages;	// 0x365b7151
- (id)availableDefaultSubtitleLanguages;	// 0x365b7141
- (BOOL)bootedFromRecoveryPartition;	// 0x365bae79
// converted property getter: - (BOOL)crashReportingEnabled;	// 0x365b7c3d
- (BOOL)crashReportingPreferenceSet;	// 0x365b7cd9
- (void)dealloc;	// 0x365b6d6d
// converted property getter: - (id)defaultAudioLanguage;	// 0x365b725d
// converted property getter: - (id)defaultSubtitleLanguage;	// 0x365b7161
- (int)deviceActivationState;	// 0x365bc325
// converted property getter: - (BOOL)displayNewSlideshowThemes;	// 0x365b9f95
- (id)externalSubtitleSelectionForMedia:(id)media;	// 0x365b7359
// converted property getter: - (int)favoritesSortMode;	// 0x365b97c1
- (void)flushDiskChanges;	// 0x365b6eb1
- (id)hardwareResolution;	// 0x365b974d
- (id)hwDeviceName;	// 0x365bacd9
- (id)hwModel;	// 0x365bb689
- (id)hwSerialNumber;	// 0x365bb425
- (BOOL)hwSetSystemLanguage:(id)language;	// 0x365bb44d
- (BOOL)isAutomaticTimeZoneSelectionEnabled;	// 0x365bc8a9
- (BOOL)isTimeZoneSet;	// 0x365bc745
- (BOOL)keyboardLanguageEnabled:(id)enabled;	// 0x365ba98d
// converted property getter: - (id)keyboardLanguageKeys;	// 0x365ba909
// converted property getter: - (id)lastUsedKeyboardLanguage;	// 0x365baa01
- (id)logPushID;	// 0x365bb23d
// converted property getter: - (id)marimbaSlideshowDefaultMusicPlaylistID;	// 0x365ba885
// converted property getter: - (id)marimbaSlideshowDefaultMusicServerSetting;	// 0x365ba521
// converted property getter: - (id)marimbaSlideshowStyle;	// 0x365ba485
- (id)marimbaSlideshowThemeIdentifiers;	// 0x365ba029
- (id)marimbaSlideshowThemeTitleKeys;	// 0x365ba249
- (int)maximumPlaybackResolution;	// 0x365b9609
- (long)mediaPhotoCount;	// 0x365bb0fd
- (long)mediaSongCount;	// 0x365bafe5
- (long)mediaVideoCount;	// 0x365bb071
// converted property getter: - (int)musicRepeatMode;	// 0x365b771d
// converted property getter: - (BOOL)musicUseSoundCheck;	// 0x365b793d
- (float)musicVolume;	// 0x365b7891
// converted property getter: - (BOOL)musicVolumeControlEnabled;	// 0x365b77ad
- (id)parentalControlsPasscode;	// 0x365b984d
- (int)parentalControlsYTMode;	// 0x365b9891
// converted property getter: - (int)playbackResolution;	// 0x365b94d5
// converted property getter: - (BOOL)playlistsEverywhereEnabled;	// 0x365b7d21
// converted property getter: - (BOOL)preferHDPreviews;	// 0x365b9389
- (BOOL)preferHDVideo;	// 0x365b9345
- (BOOL)runningAnInternalBuild;	// 0x365bafa9
- (void)saveAVAudioSelectionPlist:(id)plist forMedia:(id)media;	// 0x365b76a5
- (void)saveAVSubtitleSelectionPlist:(id)plist forMedia:(id)media;	// 0x365b7611
- (BOOL)saveConfiguration:(id)configuration;	// 0x365bae9d
- (void)saveExternalSubtitleSelection:(id)selection forMedia:(id)media;	// 0x365b74a9
- (void)saveMusicVolume:(float)volume;	// 0x365b78d9
// converted property getter: - (BOOL)screenSaverAllowedOverMusic;	// 0x365b7dad
- (id)screenSaverCollectionArchive;	// 0x365b8499
- (BOOL)screenSaverCollectionTypeIsAlbumArtwork:(id)artwork;	// 0x365b8cad
// converted property getter: - (BOOL)screenSaverPanAndZoom;	// 0x365b9119
- (id)screenSaverPathForIdentifier:(id)identifier;	// 0x365b820d
- (id)screenSaverPaths;	// 0x365b7e39
- (int)screenSaverPhotoSpinFrequency;	// 0x365b8f6d
// converted property getter: - (BOOL)screenSaverPrefetchComplete;	// 0x365b840d
// converted property getter: - (int)screenSaverSecondsPerSlide;	// 0x365b9059
// converted property getter: - (id)screenSaverSelectedPath;	// 0x365b7f69
// declared property getter: - (id)screenSaverSetCollectionBlock;	// 0x365b8fd5
// converted property getter: - (BOOL)screenSaverShufflePhotos;	// 0x365b91d5
// converted property getter: - (id)screenSaverSlideshowTheme;	// 0x365b8381
- (BOOL)screenSaverThemeAllowsAlbumArtwork:(id)artwork;	// 0x365b8c31
// converted property getter: - (int)screenSaverTimeout;	// 0x365b8d05
// converted property getter: - (id)screenSaverTransition;	// 0x365b9291
// converted property setter: - (void)setAirTunesControlFromSpeakerIsEnabled:(BOOL)speakerIsEnabled;	// 0x365bba35
// converted property setter: - (void)setAirTunesIsEnabled:(BOOL)enabled;	// 0x365bb751
// converted property setter: - (void)setAirTunesPassword:(id)password;	// 0x365bb8f9
- (BOOL)setAppleConnectID:(id)anId password:(id)password;	// 0x365bbe01
// converted property setter: - (void)setAudioFormatSetting:(int)setting;	// 0x365b7a79
// converted property setter: - (void)setAudioOutputQuality:(int)quality;	// 0x365b7b21
- (BOOL)setAutomaticTimeZoneSelectionEnabled:(BOOL)enabled;	// 0x365bc8cd
// converted property setter: - (void)setCrashReportingEnabled:(BOOL)enabled;	// 0x365b7b85
// converted property setter: - (void)setDefaultAudioLanguage:(id)language;	// 0x365b72f5
// converted property setter: - (void)setDefaultSubtitleLanguage:(id)language;	// 0x365b71f9
- (void)setDeviceActivationFailureState:(int)state;	// 0x365bc3f1
- (void)setDeviceActivationWasSkipped:(BOOL)skipped;	// 0x365bc4c1
// converted property setter: - (void)setDisplayNewSlideshowThemes:(BOOL)themes;	// 0x365b9fd5
// converted property setter: - (void)setFavoritesSortMode:(int)mode;	// 0x365b9805
- (void)setHWDeviceName:(id)name;	// 0x365bad61
- (void)setKeyboardLanguageEnabled:(id)enabled enabled:(BOOL)enabled2;	// 0x365ba9c5
// converted property setter: - (void)setKeyboardLanguageKeys:(id)keys;	// 0x365ba949
// converted property setter: - (void)setLastUsedKeyboardLanguage:(id)language;	// 0x365baa41
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicPlaylistID:(id)anId;	// 0x365ba8c5
// converted property setter: - (void)setMarimbaSlideshowDefaultMusicServerSetting:(id)setting;	// 0x365ba7b5
// converted property setter: - (void)setMarimbaSlideshowStyle:(id)style;	// 0x365ba441
// converted property setter: - (void)setMusicRepeatMode:(int)mode;	// 0x365b7761
// converted property setter: - (void)setMusicUseSoundCheck:(BOOL)check;	// 0x365b7981
// converted property setter: - (void)setMusicVolumeControlEnabled:(BOOL)enabled;	// 0x365b77f1
// converted property setter: - (void)setPlaybackResolution:(int)resolution;	// 0x365b9629
// converted property setter: - (void)setPlaylistsEverywhereEnabled:(BOOL)enabled;	// 0x365b7d65
// converted property setter: - (void)setPreferHDPreviews:(BOOL)previews;	// 0x365b93f1
// converted property setter: - (void)setScreenSaverAllowedOverMusic:(BOOL)music;	// 0x365b7df1
- (void)setScreenSaverMusicCoverCollection:(id)collection;	// 0x365b84dd
// converted property setter: - (void)setScreenSaverPanAndZoom:(BOOL)zoom;	// 0x365b918d
- (void)setScreenSaverPhotoCollection:(id)collection;	// 0x365b8891
// converted property setter: - (void)setScreenSaverPrefetchComplete:(BOOL)complete;	// 0x365b8451
// converted property setter: - (void)setScreenSaverSecondsPerSlide:(int)slide;	// 0x365b90d1
// converted property setter: - (void)setScreenSaverSelectedPath:(id)path;	// 0x365b8285
// converted property setter: - (void)setScreenSaverShufflePhotos:(BOOL)photos;	// 0x365b9249
// converted property setter: - (void)setScreenSaverSlideshowTheme:(id)theme;	// 0x365b83c5
// converted property setter: - (void)setScreenSaverTimeout:(int)timeout;	// 0x365b8d71
// converted property setter: - (void)setScreenSaverTransition:(id)transition;	// 0x365b92fd
// converted property setter: - (void)setSleepTimeout:(int)timeout;	// 0x365b8e9d
// converted property setter: - (void)setSlideshowPanAndZoom:(BOOL)zoom;	// 0x365b9b99
// converted property setter: - (void)setSlideshowPlayMusic:(BOOL)music;	// 0x365b9c25
// converted property setter: - (void)setSlideshowRepeat:(BOOL)repeat;	// 0x365b99f5
// converted property setter: - (void)setSlideshowSecondsPerSlide:(int)slide;	// 0x365b9941
// converted property setter: - (void)setSlideshowSelectedPlaylistName:(id)name;	// 0x365b9e9d
// converted property setter: - (void)setSlideshowSelectedTransitionName:(id)name;	// 0x365b9f4d
// converted property setter: - (void)setSlideshowShuffleMusic:(BOOL)music;	// 0x365b9b0d
// converted property setter: - (void)setSlideshowShufflePhotos:(BOOL)photos;	// 0x365b9a81
- (BOOL)setTimeZoneFromCityID:(id)cityID;	// 0x365bc535
// converted property setter: - (void)setUISoundsEnabled:(BOOL)enabled;	// 0x365b6fe1
- (BOOL)setUserAllowedAutomaticTimeZoneSelection:(BOOL)selection;	// 0x365bc7f1
// converted property setter: - (void)setVideoClosedCaptionMode:(int)mode;	// 0x365b70bd
// converted property getter: - (int)sleepTimeout;	// 0x365b8e39
// converted property getter: - (BOOL)slideshowPanAndZoom;	// 0x365b9b55
// converted property getter: - (BOOL)slideshowPlayMusic;	// 0x365b9be1
- (id)slideshowPlaylists;	// 0x365b9c6d
// converted property getter: - (BOOL)slideshowRepeat;	// 0x365b9989
// converted property getter: - (int)slideshowSecondsPerSlide;	// 0x365b98d5
// converted property getter: - (id)slideshowSelectedPlaylistName;	// 0x365b9e61
// converted property getter: - (id)slideshowSelectedTransitionName;	// 0x365b9ee1
// converted property getter: - (BOOL)slideshowShuffleMusic;	// 0x365b9ac9
// converted property getter: - (BOOL)slideshowShufflePhotos;	// 0x365b9a3d
- (id)slideshowTransitionNames;	// 0x365b9edd
- (id)syncHostName;	// 0x365bac95
- (BOOL)syncIsSynced;	// 0x365bb1cd
- (id)timeZone;	// 0x365bc519
- (id)timeZoneCityDisplayNameIncludingCountry:(BOOL)country;	// 0x365bc955
- (id)timeZoneCityID;	// 0x365bcab9
- (void)updateHostID:(id)anId to:(id)to;	// 0x365b6de5
- (BOOL)userAllowedAutomaticTimeZoneSelection;	// 0x365bc7ad
- (id)versionEFI;	// 0x365bab75
- (id)versionGF;	// 0x365bac2d
- (id)versionIR;	// 0x365bac11
- (id)versionOS;	// 0x365bab3d
- (id)versionOSBuild;	// 0x365bab59
- (id)versionSoftware;	// 0x365baa85
- (id)versionSoftwareBuild;	// 0x365baad5
// converted property getter: - (int)videoClosedCaptionMode;	// 0x365b7079
- (BOOL)wasDeviceActivationSkipped;	// 0x365bc47d
- (BOOL)wasTimeZoneSetByCoreLocation;	// 0x365bc835
@end

