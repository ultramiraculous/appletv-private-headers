/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class WebPreferencesPrivate;

@interface WebPreferences : NSObject <NSCoding> {
@private
	WebPreferencesPrivate *_private;	// 4 = 0x4
}
@property(assign, getter=isAVFoundationEnabled) BOOL aVFoundationEnabled;	// G=0x364de761; S=0x364de745; converted property
@property(assign) BOOL accelerated2dCanvasEnabled;	// G=0x3647c429; S=0x364de4c5; converted property
@property(assign) BOOL acceleratedCompositingEnabled;	// G=0x3647c34d; S=0x364de419; converted property
@property(assign) BOOL acceleratedDrawingEnabled;	// G=0x3647c36d; S=0x3649bf0d; converted property
@property(assign) BOOL allowFileAccessFromFileURLs;	// G=0x3647bcf5; S=0x364de091; converted property
@property(assign) BOOL allowUniversalAccessFromFileURLs;	// G=0x3647bcd5; S=0x364de075; converted property
@property(assign) BOOL allowsAnimatedImageLooping;	// G=0x364dda25; S=0x364dda45; converted property
@property(assign) BOOL allowsAnimatedImages;	// G=0x364dd9e9; S=0x364dda09; converted property
@property(assign) long long applicationCacheDefaultOriginQuota;	// G=0x3647c625; S=0x364de2d1; converted property
@property(assign) long long applicationCacheTotalQuota;	// G=0x364de265; S=0x364de281; converted property
@property(assign) BOOL applicationChromeModeEnabled;	// G=0x3647c0bd; S=0x364ddf95; converted property
@property(assign) BOOL asynchronousSpellCheckingEnabled;	// G=0x3647c4a9; S=0x364de70d; converted property
@property(assign) BOOL authorAndUserStylesEnabled;	// G=0x3647c09d; S=0x364ddf79; converted property
@property(assign) BOOL automaticallyDetectsCacheModel;	// G=0x364969a5; S=0x36474ee1; converted property
@property(assign) BOOL autosaves;	// G=0x364dd2f9; S=0x36474da9; converted property
@property(assign) unsigned cacheModel;	// G=0x364742f9; S=0x36474dc9; converted property
@property(assign) BOOL canvasUsesAcceleratedDrawing;	// G=0x3647c38d; S=0x364de3fd; converted property
@property(retain) id cursiveFontFamily;	// G=0x3647ba41; S=0x364dd909; converted property
@property(assign, getter=isDNSPrefetchingEnabled) BOOL dNSPrefetchingEnabled;	// G=0x3647c32d; S=0x364ddf41; converted property
@property(assign, getter=isDOMPasteAllowed) BOOL dOMPasteAllowed;	// G=0x3647bf69; S=0x364de389; converted property
@property(assign) BOOL databasesEnabled;	// G=0x36476c95; S=0x3649beb9; converted property
@property(assign) int defaultFixedFontSize;	// G=0x3647bb75; S=0x364dd95d; converted property
@property(assign) int defaultFontSize;	// G=0x3647bb91; S=0x364dd941; converted property
@property(retain) id defaultTextEncodingName;	// G=0x3647bbad; S=0x364dd9b1; converted property
@property(assign) BOOL developerExtrasEnabled;	// G=0x3647c001; S=0x364ddf5d; converted property
@property(assign) BOOL diskImageCacheEnabled;	// G=0x3647c6dd; S=0x3649bef1; converted property
@property(assign) unsigned diskImageCacheMaximumCacheSize;	// G=0x3647c719; S=0x364de4fd; converted property
@property(assign) unsigned diskImageCacheMinimumImageSize;	// G=0x3647c6fd; S=0x364de4e1; converted property
@property(assign) int editableLinkBehavior;	// G=0x3647be9d; S=0x364de2f9; converted property
@property(assign) int editingBehavior;	// G=0x3647bef5; S=0x364de61d; converted property
@property(assign) BOOL experimentalNotificationsEnabled;	// G=0x364de34d; S=0x364de36d; converted property
@property(retain) id fantasyFontFamily;	// G=0x3647bbe9; S=0x364dd925; converted property
@property(retain) id fixedFontFamily;	// G=0x3647bc05; S=0x364dd8b5; converted property
@property(assign, getter=isFrameFlatteningEnabled) BOOL frameFlatteningEnabled;	// G=0x3647c449; S=0x364de591; converted property
@property(assign) BOOL fullScreenEnabled;	// G=0x364de6ed; S=0x364de6d1; converted property
@property(assign) BOOL hyperlinkAuditingEnabled;	// G=0x3647c4e9; S=0x364de601; converted property
@property(assign, getter=isJavaEnabled) BOOL javaEnabled;	// G=0x3647bc75; S=0x3649be19; converted property
@property(assign) BOOL javaScriptCanAccessClipboard;	// G=0x3647c2ed; S=0x364de005; converted property
@property(assign) BOOL javaScriptCanOpenWindowsAutomatically;	// G=0x3647bd15; S=0x364dd9cd; converted property
@property(assign, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;	// G=0x3647bc95; S=0x3649be35; converted property
@property(assign) BOOL loadsImagesAutomatically;	// G=0x3647be3d; S=0x364dda61; converted property
@property(assign) BOOL loadsSiteIconsIgnoringImageLoadingPreference;	// G=0x3647be5d; S=0x364de729; converted property
@property(assign) BOOL localFileContentSniffingEnabled;	// G=0x3647c2ad; S=0x364ddfcd; converted property
@property(assign) BOOL localStorageEnabled;	// G=0x3647bda9; S=0x3649bed5; converted property
@property(assign) BOOL mediaPlaybackAllowsAirPlay;	// G=0x364de781; S=0x364de7a1; converted property
@property(assign) BOOL mediaPlaybackAllowsInline;	// G=0x3647c605; S=0x3647f475; converted property
@property(assign) BOOL mediaPlaybackRequiresUserGesture;	// G=0x3647c5e5; S=0x364de7bd; converted property
@property(assign) BOOL memoryInfoEnabled;	// G=0x3647c4c9; S=0x364de5e5; converted property
@property(assign) int minimumFontSize;	// G=0x3647bd35; S=0x364dd979; converted property
@property(assign) int minimumLogicalFontSize;	// G=0x3647bd51; S=0x364dd995; converted property
@property(assign) BOOL offlineWebApplicationCacheEnabled;	// G=0x3647c2cd; S=0x36474f01; converted property
@property(assign) BOOL paginateDuringLayoutEnabled;	// G=0x3647c489; S=0x364de5c9; converted property
@property(retain) id pictographFontFamily;	// G=0x3647bd6d; S=0x364de7d9; converted property
@property(assign) unsigned pluginAllowedRunTime;	// G=0x3647c3ed; S=0x364de575; converted property
@property(assign) BOOL privateBrowsingEnabled;	// G=0x3647bdc9; S=0x3647f459; converted property
@property(retain) id sansSerifFontFamily;	// G=0x3647bde9; S=0x364dd8ed; converted property
@property(retain) id serifFontFamily;	// G=0x3647be05; S=0x364dd8d1; converted property
@property(assign) BOOL showDebugBorders;	// G=0x3647c3ad; S=0x364de435; converted property
@property(assign) BOOL showRepaintCounter;	// G=0x3647c3cd; S=0x364de451; converted property
@property(assign) BOOL shrinksStandaloneImagesToFit;	// G=0x3647be7d; S=0x3647d121; converted property
@property(assign, getter=isSpatialNavigationEnabled) BOOL spatialNavigationEnabled;	// G=0x3647c469; S=0x364de5ad; converted property
@property(retain) id standardFontFamily;	// G=0x3647be21; S=0x364dd899; converted property
@property(assign) BOOL storageTrackerEnabled;	// G=0x36476ff9; S=0x36475181; converted property
@property(assign) int textDirectionSubmenuInclusionBehavior;	// G=0x3647bf29; S=0x364de315; converted property
@property(assign) BOOL usePreHTML5ParserQuirks;	// G=0x3647c581; S=0x364de639; converted property
@property(assign) BOOL userStyleSheetEnabled;	// G=0x364dd2e9; S=0x364dd2ed; converted property
@property(retain) id userStyleSheetLocation;	// G=0x364dd2f1; S=0x364dd2f5; converted property
@property(assign) BOOL usesEncodingDetector;	// G=0x3647bbc9; S=0x364de03d; converted property
@property(assign) BOOL usesPageCache;	// G=0x3647bfe1; S=0x364dda7d; converted property
@property(assign) BOOL webArchiveDebugModeEnabled;	// G=0x3647c28d; S=0x364ddfb1; converted property
@property(assign) BOOL webAudioEnabled;	// G=0x3647c409; S=0x364de46d; converted property
@property(assign) BOOL webGLEnabled;	// G=0x364de489; S=0x364de4a9; converted property
@property(assign) BOOL webInspectorServerEnabled;	// G=0x3647c735; S=0x364de519; converted property
@property(assign) short webInspectorServerPort;	// G=0x364de535; S=0x364de559; converted property
@property(assign, getter=isWebSecurityEnabled) BOOL webSecurityEnabled;	// G=0x3647bcb5; S=0x364de059; converted property
@property(assign, getter=isXSSAuditorEnabled) BOOL xSSAuditorEnabled;	// G=0x3647c30d; S=0x364de021; converted property
@property(assign) BOOL zoomsTextOnly;	// G=0x3647c6a1; S=0x364ddfe9; converted property
+ (id)_IBCreatorID;	// 0x3647414d
+ (void)_checkLastReferenceForIdentifier:(id)identifier;	// 0x364de7f5
+ (id)_concatenateKeyWithIBCreatorID:(id)ibcreatorID;	// 0x3649bddd
+ (id)_getInstanceForIdentifier:(id)identifier;	// 0x3647415d
+ (void)_removeReferenceForIdentifier:(id)identifier;	// 0x364de845
+ (void)_setIBCreatorID:(id)anId;	// 0x364de89d
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;	// 0x364751b9
+ (void)_setInstance:(id)instance forIdentifier:(id)identifier;	// 0x364741a9
+ (unsigned long)_systemCFStringEncoding;	// 0x36475269
+ (void)initialize;	// 0x36473285
+ (void)setWebKitLinkTimeVersion:(int)version;	// 0x364de9b5
+ (id)standardPreferences;	// 0x36473f39
- (id)init;	// 0x364dd319
- (id)initWithCoder:(id)coder;	// 0x364ddb4d
- (id)initWithIdentifier:(id)identifier;	// 0x3649bdc9
- (id)initWithIdentifier:(id)identifier sendChangeNotification:(BOOL)notification;	// 0x36473f6d
- (int)_NSURLDiskCacheSize;	// 0x36474d31
- (int)_NSURLMaxRequestSize;	// 0x36474d4d
- (int)_NSURLMemoryCacheSize;	// 0x36474d15
- (BOOL)_aggressivePreloading;	// 0x36474d69
- (BOOL)_allowCompositingLayerVisualDegradation;	// 0x364de245
- (BOOL)_allowMultiElementImplicitFormSubmission;	// 0x3647c17d
- (BOOL)_alwaysRequestGeolocationPermission;	// 0x3647c24d
- (BOOL)_alwaysUseAcceleratedOverflowScroll;	// 0x3647c26d
- (BOOL)_alwaysUseBaselineOfPrimaryFont;	// 0x3647c15d
- (double)_backForwardCacheExpirationInterval;	// 0x364de0ad
- (BOOL)_boolValueForKey:(id)key;	// 0x36474d89
- (id)_diskImageCacheSavedCacheDirectory;	// 0x364777bd
- (float)_floatValueForKey:(id)key;	// 0x3647c1f5
- (BOOL)_forceFTPDirectoryListings;	// 0x3647bc21
- (id)_ftpDirectoryTemplatePath;	// 0x3647bc41
- (int)_integerValueForKey:(id)key;	// 0x36474315
- (void)_invalidateCachedPreferences;	// 0x3647f27d
- (int)_layoutInterval;	// 0x3647c1bd
- (id)_localStorageDatabasePath;	// 0x36478051
- (long long)_longLongValueForKey:(id)key;	// 0x3647c641
- (float)_maxParseDuration;	// 0x3647c1d9
- (unsigned long)_maximumImageSize;	// 0x3647c0fd
- (float)_minimumZoomFontSize;	// 0x3647c6c1
- (int)_objectCacheSize;	// 0x36474cf9
- (int)_pageCacheSize;	// 0x36474cdd
- (void)_postPreferencesChangedAPINotification;	// 0x364de94d
- (void)_postPreferencesChangedNotification;	// 0x3647422d
- (void)_setAggressivePreloading:(BOOL)preloading;	// 0x364de1d5
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)degradation;	// 0x364de229
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)submission;	// 0x364de19d
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)permission;	// 0x364de1f1
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)scroll;	// 0x364de20d
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)primaryFont;	// 0x3649bf29
- (void)_setBoolValue:(BOOL)value forKey:(id)key;	// 0x36474f1d
- (void)_setDiskImageCacheSavedCacheDirectory:(id)directory;	// 0x364777f1
- (void)_setFTPDirectoryTemplatePath:(id)path;	// 0x364de3a5
- (void)_setFloatValue:(float)value forKey:(id)key;	// 0x3647f145
- (void)_setForceFTPDirectoryListings:(BOOL)listings;	// 0x364de3e1
- (void)_setIntegerValue:(int)value forKey:(id)key;	// 0x36474e01
- (void)_setLayoutInterval:(int)interval;	// 0x3647f10d
- (void)_setLocalStorageDatabasePath:(id)path;	// 0x36475001
- (void)_setLongLongValue:(long long)value forKey:(id)key;	// 0x364dd4ed
- (void)_setMaxParseDuration:(float)duration;	// 0x3649af59
- (void)_setMinimumZoomFontSize:(float)size;	// 0x3647f129
- (void)_setNSURLDiskCacheSize:(int)size;	// 0x364de165
- (void)_setNSURLMaxRequestSize:(int)size;	// 0x364de181
- (void)_setNSURLMemoryCacheSize:(int)size;	// 0x364de149
- (void)_setObjectCacheSize:(int)size;	// 0x364de12d
- (void)_setPageCacheSize:(int)size;	// 0x364de111
- (void)_setPreferenceForTestWithValue:(id)value forKey:(id)key;	// 0x364de6c1
- (void)_setStandalone:(BOOL)standalone;	// 0x364de0f5
- (void)_setStringValue:(id)value forKey:(id)key;	// 0x3647503d
- (void)_setTelephoneNumberParsingEnabled:(BOOL)enabled;	// 0x3647d15d
- (void)_setUnsignedLongLongValue:(unsigned long long)value forKey:(id)key;	// 0x364dd64d
- (void)_setUnsignedShortValue:(int)value forKey:(id)key;	// 0x364dd7b9
- (void)_setUseLegacyNumberInputFieldFormatting:(BOOL)formatting;	// 0x364de1b9
- (void)_setUseSiteSpecificSpoofing:(BOOL)spoofing;	// 0x364de331
- (BOOL)_standalone;	// 0x3647c0dd
- (id)_stringValueForKey:(id)key;	// 0x36475129
- (BOOL)_telephoneNumberParsingEnabled;	// 0x3647c13d
- (unsigned long long)_unsignedLongLongValueForKey:(id)key;	// 0x364dd605
- (int)_unsignedShortValueForKey:(id)key;	// 0x364dd765
- (BOOL)_useLegacyNumberInputFieldFormatting;	// 0x3647c19d
- (BOOL)_useSiteSpecificSpoofing;	// 0x3647ba21
- (id)_valueForKey:(id)key;	// 0x3647435d
// converted property getter: - (BOOL)accelerated2dCanvasEnabled;	// 0x3647c429
// converted property getter: - (BOOL)acceleratedCompositingEnabled;	// 0x3647c34d
// converted property getter: - (BOOL)acceleratedDrawingEnabled;	// 0x3647c36d
// converted property getter: - (BOOL)allowFileAccessFromFileURLs;	// 0x3647bcf5
// converted property getter: - (BOOL)allowUniversalAccessFromFileURLs;	// 0x3647bcd5
// converted property getter: - (BOOL)allowsAnimatedImageLooping;	// 0x364dda25
// converted property getter: - (BOOL)allowsAnimatedImages;	// 0x364dd9e9
// converted property getter: - (long long)applicationCacheDefaultOriginQuota;	// 0x3647c625
// converted property getter: - (long long)applicationCacheTotalQuota;	// 0x364de265
// converted property getter: - (BOOL)applicationChromeModeEnabled;	// 0x3647c0bd
- (BOOL)arePlugInsEnabled;	// 0x3647bd89
// converted property getter: - (BOOL)asynchronousSpellCheckingEnabled;	// 0x3647c4a9
// converted property getter: - (BOOL)authorAndUserStylesEnabled;	// 0x3647c09d
// converted property getter: - (BOOL)automaticallyDetectsCacheModel;	// 0x364969a5
// converted property getter: - (BOOL)autosaves;	// 0x364dd2f9
// converted property getter: - (unsigned)cacheModel;	// 0x364742f9
// converted property getter: - (BOOL)canvasUsesAcceleratedDrawing;	// 0x3647c38d
// converted property getter: - (id)cursiveFontFamily;	// 0x3647ba41
// converted property getter: - (BOOL)databasesEnabled;	// 0x36476c95
- (void)dealloc;	// 0x364ddb01
// converted property getter: - (int)defaultFixedFontSize;	// 0x3647bb75
// converted property getter: - (int)defaultFontSize;	// 0x3647bb91
// converted property getter: - (id)defaultTextEncodingName;	// 0x3647bbad
// converted property getter: - (BOOL)developerExtrasEnabled;	// 0x3647c001
- (void)didRemoveFromWebView;	// 0x364de655
// converted property getter: - (BOOL)diskImageCacheEnabled;	// 0x3647c6dd
// converted property getter: - (unsigned)diskImageCacheMaximumCacheSize;	// 0x3647c719
// converted property getter: - (unsigned)diskImageCacheMinimumImageSize;	// 0x3647c6fd
// converted property getter: - (int)editableLinkBehavior;	// 0x3647be9d
// converted property getter: - (int)editingBehavior;	// 0x3647bef5
- (void)encodeWithCoder:(id)coder;	// 0x364dd3ed
// converted property getter: - (BOOL)experimentalNotificationsEnabled;	// 0x364de34d
// converted property getter: - (id)fantasyFontFamily;	// 0x3647bbe9
// converted property getter: - (id)fixedFontFamily;	// 0x3647bc05
// converted property getter: - (BOOL)fullScreenEnabled;	// 0x364de6ed
// converted property getter: - (BOOL)hyperlinkAuditingEnabled;	// 0x3647c4e9
- (id)identifier;	// 0x364dd2c9
// converted property getter: - (BOOL)isAVFoundationEnabled;	// 0x364de761
// converted property getter: - (BOOL)isDNSPrefetchingEnabled;	// 0x3647c32d
// converted property getter: - (BOOL)isDOMPasteAllowed;	// 0x3647bf69
// converted property getter: - (BOOL)isFrameFlatteningEnabled;	// 0x3647c449
// converted property getter: - (BOOL)isJavaEnabled;	// 0x3647bc75
// converted property getter: - (BOOL)isJavaScriptEnabled;	// 0x3647bc95
// converted property getter: - (BOOL)isSpatialNavigationEnabled;	// 0x3647c469
// converted property getter: - (BOOL)isWebSecurityEnabled;	// 0x3647bcb5
// converted property getter: - (BOOL)isXSSAuditorEnabled;	// 0x3647c30d
// converted property getter: - (BOOL)javaScriptCanAccessClipboard;	// 0x3647c2ed
// converted property getter: - (BOOL)javaScriptCanOpenWindowsAutomatically;	// 0x3647bd15
// converted property getter: - (BOOL)loadsImagesAutomatically;	// 0x3647be3d
// converted property getter: - (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;	// 0x3647be5d
// converted property getter: - (BOOL)localFileContentSniffingEnabled;	// 0x3647c2ad
// converted property getter: - (BOOL)localStorageEnabled;	// 0x3647bda9
// converted property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x364de781
// converted property getter: - (BOOL)mediaPlaybackAllowsInline;	// 0x3647c605
// converted property getter: - (BOOL)mediaPlaybackRequiresUserGesture;	// 0x3647c5e5
// converted property getter: - (BOOL)memoryInfoEnabled;	// 0x3647c4c9
// converted property getter: - (int)minimumFontSize;	// 0x3647bd35
// converted property getter: - (int)minimumLogicalFontSize;	// 0x3647bd51
// converted property getter: - (BOOL)offlineWebApplicationCacheEnabled;	// 0x3647c2cd
// converted property getter: - (BOOL)paginateDuringLayoutEnabled;	// 0x3647c489
// converted property getter: - (id)pictographFontFamily;	// 0x3647bd6d
// converted property getter: - (unsigned)pluginAllowedRunTime;	// 0x3647c3ed
// converted property getter: - (BOOL)privateBrowsingEnabled;	// 0x3647bdc9
// converted property getter: - (id)sansSerifFontFamily;	// 0x3647bde9
// converted property getter: - (id)serifFontFamily;	// 0x3647be05
// converted property setter: - (void)setAVFoundationEnabled:(BOOL)enabled;	// 0x364de745
// converted property setter: - (void)setAccelerated2dCanvasEnabled:(BOOL)enabled;	// 0x364de4c5
// converted property setter: - (void)setAcceleratedCompositingEnabled:(BOOL)enabled;	// 0x364de419
// converted property setter: - (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x3649bf0d
// converted property setter: - (void)setAllowFileAccessFromFileURLs:(BOOL)fileURLs;	// 0x364de091
// converted property setter: - (void)setAllowUniversalAccessFromFileURLs:(BOOL)fileURLs;	// 0x364de075
// converted property setter: - (void)setAllowsAnimatedImageLooping:(BOOL)looping;	// 0x364dda45
// converted property setter: - (void)setAllowsAnimatedImages:(BOOL)images;	// 0x364dda09
// converted property setter: - (void)setApplicationCacheDefaultOriginQuota:(long long)quota;	// 0x364de2d1
// converted property setter: - (void)setApplicationCacheTotalQuota:(long long)quota;	// 0x364de281
// converted property setter: - (void)setApplicationChromeModeEnabled:(BOOL)enabled;	// 0x364ddf95
// converted property setter: - (void)setAsynchronousSpellCheckingEnabled:(BOOL)enabled;	// 0x364de70d
// converted property setter: - (void)setAuthorAndUserStylesEnabled:(BOOL)enabled;	// 0x364ddf79
// converted property setter: - (void)setAutomaticallyDetectsCacheModel:(BOOL)model;	// 0x36474ee1
// converted property setter: - (void)setAutosaves:(BOOL)autosaves;	// 0x36474da9
// converted property setter: - (void)setCacheModel:(unsigned)model;	// 0x36474dc9
// converted property setter: - (void)setCanvasUsesAcceleratedDrawing:(BOOL)drawing;	// 0x364de3fd
// converted property setter: - (void)setCursiveFontFamily:(id)family;	// 0x364dd909
// converted property setter: - (void)setDNSPrefetchingEnabled:(BOOL)enabled;	// 0x364ddf41
// converted property setter: - (void)setDOMPasteAllowed:(BOOL)allowed;	// 0x364de389
// converted property setter: - (void)setDatabasesEnabled:(BOOL)enabled;	// 0x3649beb9
// converted property setter: - (void)setDefaultFixedFontSize:(int)size;	// 0x364dd95d
// converted property setter: - (void)setDefaultFontSize:(int)size;	// 0x364dd941
// converted property setter: - (void)setDefaultTextEncodingName:(id)name;	// 0x364dd9b1
// converted property setter: - (void)setDeveloperExtrasEnabled:(BOOL)enabled;	// 0x364ddf5d
// converted property setter: - (void)setDiskImageCacheEnabled:(BOOL)enabled;	// 0x3649bef1
// converted property setter: - (void)setDiskImageCacheMaximumCacheSize:(unsigned)size;	// 0x364de4fd
// converted property setter: - (void)setDiskImageCacheMinimumImageSize:(unsigned)size;	// 0x364de4e1
// converted property setter: - (void)setEditableLinkBehavior:(int)behavior;	// 0x364de2f9
// converted property setter: - (void)setEditingBehavior:(int)behavior;	// 0x364de61d
// converted property setter: - (void)setExperimentalNotificationsEnabled:(BOOL)enabled;	// 0x364de36d
// converted property setter: - (void)setFantasyFontFamily:(id)family;	// 0x364dd925
// converted property setter: - (void)setFixedFontFamily:(id)family;	// 0x364dd8b5
// converted property setter: - (void)setFrameFlatteningEnabled:(BOOL)enabled;	// 0x364de591
// converted property setter: - (void)setFullScreenEnabled:(BOOL)enabled;	// 0x364de6d1
// converted property setter: - (void)setHyperlinkAuditingEnabled:(BOOL)enabled;	// 0x364de601
// converted property setter: - (void)setJavaEnabled:(BOOL)enabled;	// 0x3649be19
// converted property setter: - (void)setJavaScriptCanAccessClipboard:(BOOL)clipboard;	// 0x364de005
// converted property setter: - (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)automatically;	// 0x364dd9cd
// converted property setter: - (void)setJavaScriptEnabled:(BOOL)enabled;	// 0x3649be35
// converted property setter: - (void)setLoadsImagesAutomatically:(BOOL)automatically;	// 0x364dda61
// converted property setter: - (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)preference;	// 0x364de729
// converted property setter: - (void)setLocalFileContentSniffingEnabled:(BOOL)enabled;	// 0x364ddfcd
// converted property setter: - (void)setLocalStorageEnabled:(BOOL)enabled;	// 0x3649bed5
// converted property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x364de7a1
// converted property setter: - (void)setMediaPlaybackAllowsInline:(BOOL)anInline;	// 0x3647f475
// converted property setter: - (void)setMediaPlaybackRequiresUserGesture:(BOOL)gesture;	// 0x364de7bd
// converted property setter: - (void)setMemoryInfoEnabled:(BOOL)enabled;	// 0x364de5e5
// converted property setter: - (void)setMinimumFontSize:(int)size;	// 0x364dd979
// converted property setter: - (void)setMinimumLogicalFontSize:(int)size;	// 0x364dd995
// converted property setter: - (void)setOfflineWebApplicationCacheEnabled:(BOOL)enabled;	// 0x36474f01
// converted property setter: - (void)setPaginateDuringLayoutEnabled:(BOOL)enabled;	// 0x364de5c9
// converted property setter: - (void)setPictographFontFamily:(id)family;	// 0x364de7d9
- (void)setPlugInsEnabled:(BOOL)enabled;	// 0x3647519d
// converted property setter: - (void)setPluginAllowedRunTime:(unsigned)time;	// 0x364de575
// converted property setter: - (void)setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x3647f459
// converted property setter: - (void)setSansSerifFontFamily:(id)family;	// 0x364dd8ed
// converted property setter: - (void)setSerifFontFamily:(id)family;	// 0x364dd8d1
// converted property setter: - (void)setShowDebugBorders:(BOOL)borders;	// 0x364de435
// converted property setter: - (void)setShowRepaintCounter:(BOOL)counter;	// 0x364de451
// converted property setter: - (void)setShrinksStandaloneImagesToFit:(BOOL)fit;	// 0x3647d121
// converted property setter: - (void)setSpatialNavigationEnabled:(BOOL)enabled;	// 0x364de5ad
// converted property setter: - (void)setStandardFontFamily:(id)family;	// 0x364dd899
// converted property setter: - (void)setStorageTrackerEnabled:(BOOL)enabled;	// 0x36475181
// converted property setter: - (void)setTextDirectionSubmenuInclusionBehavior:(int)behavior;	// 0x364de315
// converted property setter: - (void)setUsePreHTML5ParserQuirks:(BOOL)quirks;	// 0x364de639
// converted property setter: - (void)setUserStyleSheetEnabled:(BOOL)enabled;	// 0x364dd2ed
// converted property setter: - (void)setUserStyleSheetLocation:(id)location;	// 0x364dd2f5
// converted property setter: - (void)setUsesEncodingDetector:(BOOL)detector;	// 0x364de03d
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x364dda7d
// converted property setter: - (void)setWebArchiveDebugModeEnabled:(BOOL)enabled;	// 0x364ddfb1
// converted property setter: - (void)setWebAudioEnabled:(BOOL)enabled;	// 0x364de46d
// converted property setter: - (void)setWebGLEnabled:(BOOL)enabled;	// 0x364de4a9
// converted property setter: - (void)setWebInspectorServerEnabled:(BOOL)enabled;	// 0x364de519
// converted property setter: - (void)setWebInspectorServerPort:(short)port;	// 0x364de559
// converted property setter: - (void)setWebSecurityEnabled:(BOOL)enabled;	// 0x364de059
// converted property setter: - (void)setXSSAuditorEnabled:(BOOL)enabled;	// 0x364de021
// converted property setter: - (void)setZoomsTextOnly:(BOOL)only;	// 0x364ddfe9
// converted property getter: - (BOOL)showDebugBorders;	// 0x3647c3ad
// converted property getter: - (BOOL)showRepaintCounter;	// 0x3647c3cd
// converted property getter: - (BOOL)shrinksStandaloneImagesToFit;	// 0x3647be7d
// converted property getter: - (id)standardFontFamily;	// 0x3647be21
// converted property getter: - (BOOL)storageTrackerEnabled;	// 0x36476ff9
// converted property getter: - (int)textDirectionSubmenuInclusionBehavior;	// 0x3647bf29
// converted property getter: - (BOOL)usePreHTML5ParserQuirks;	// 0x3647c581
// converted property getter: - (BOOL)userStyleSheetEnabled;	// 0x364dd2e9
// converted property getter: - (id)userStyleSheetLocation;	// 0x364dd2f1
// converted property getter: - (BOOL)usesEncodingDetector;	// 0x3647bbc9
// converted property getter: - (BOOL)usesPageCache;	// 0x3647bfe1
// converted property getter: - (BOOL)webArchiveDebugModeEnabled;	// 0x3647c28d
// converted property getter: - (BOOL)webAudioEnabled;	// 0x3647c409
// converted property getter: - (BOOL)webGLEnabled;	// 0x364de489
// converted property getter: - (BOOL)webInspectorServerEnabled;	// 0x3647c735
// converted property getter: - (short)webInspectorServerPort;	// 0x364de535
- (void)willAddToWebView;	// 0x36476745
// converted property getter: - (BOOL)zoomsTextOnly;	// 0x3647c6a1
@end

