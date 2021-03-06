/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTAVPlayerDelegate.h"
#import "AppleTV-Structs.h"
#import "ATVPushNotificationListener.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSData, NSMutableDictionary, NSArray, NSString, ATVRadioMetricsController, RadioModel, ATVDataQuery, ATVBackgroundTask, ATVDataCollection, ATVDataItem, ATVRadioSkipLimiter, NSDate, NSNumber, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRadioDataClient : XXUnknownSuperclass <ATVPushNotificationListener, LTAVPlayerDelegate> {
	BOOL _explicitContentWasAllowed;	// 4 = 0x4
	BOOL _deviceActivated;	// 5 = 0x5
	BOOL _lastPlayerStatePaused;	// 6 = 0x6
	BOOL _pausingDueToInactivity;	// 7 = 0x7
	BOOL _stoppingDueToInactivity;	// 8 = 0x8
	BOOL _iTunesMatchPurchased;	// 9 = 0x9
	BOOL _trackDidPlayToEnd;	// 10 = 0xa
	BOOL _iADEngineEnabledInternal;	// 11 = 0xb
	BOOL _iADAdsOptedInStatus;	// 12 = 0xc
	ATVRadioMetricsController *_metricsController;	// 16 = 0x10
	RadioModel *_radioModel;	// 20 = 0x14
	NSNumber *_accountDSID;	// 24 = 0x18
	ATVBackgroundTask *_radioPushNotificationTask;	// 28 = 0x1c
	NSDate *_lastSyncTime;	// 32 = 0x20
	ATVDataQuery *_playbackItemsQuery;	// 36 = 0x24
	id _playbackCompletionHandler;	// 40 = 0x28
	ATVDataCollection *_playbackStation;	// 44 = 0x2c
	NSArray *_playbackStationInitialTracks;	// 48 = 0x30
	NSMutableArray *_jinglePlayEventsQueue;	// 52 = 0x34
	NSTimer *_jinglePlayEventsFlushTimer;	// 56 = 0x38
	ATVRadioSkipLimiter *_skipLimiter;	// 60 = 0x3c
	NSData *_songAdData;	// 64 = 0x40
	NSMutableDictionary *_songBreakAd;	// 68 = 0x44
	NSMutableDictionary *_songSkipAd;	// 72 = 0x48
	ATVDataItem *_lastWillChangeItem;	// 76 = 0x4c
	unsigned long long _radioModelUpdateGlobalVersion;	// 80 = 0x50
	unsigned long long _songStationAdamID;	// 88 = 0x58
}
@property(retain, nonatomic) NSNumber *accountDSID;	// G=0x4e029; S=0x4e039; @synthesize=_accountDSID
@property(assign, nonatomic) BOOL deviceActivated;	// G=0x4e099; S=0x4e0a9; @synthesize=_deviceActivated
@property(readonly, assign, nonatomic) double dismissDialogTime;	// G=0x4d809; 
@property(assign, nonatomic) BOOL iADAdsOptedInStatus;	// G=0x4e3b9; S=0x4e3c9; @synthesize=_iADAdsOptedInStatus
@property(assign, nonatomic) BOOL iADEngineEnabledInternal;	// G=0x4e399; S=0x4e3a9; @synthesize=_iADEngineEnabledInternal
@property(assign, nonatomic) BOOL iAdEngineEnabled;	// G=0x4d365; S=0x4d37d; 
@property(readonly, assign, nonatomic) NSString *iAdID;	// G=0x4d565; 
@property(assign, nonatomic) BOOL iAdOptInStatus;	// G=0x4d33d; S=0x4d355; 
@property(assign, nonatomic) BOOL iTunesMatchPurchased;	// G=0x4e299; S=0x4e2a9; @synthesize=_iTunesMatchPurchased
@property(assign, nonatomic) __weak NSTimer *jinglePlayEventsFlushTimer;	// G=0x4e22d; S=0x4e24d; @synthesize=_jinglePlayEventsFlushTimer
@property(retain, nonatomic) NSMutableArray *jinglePlayEventsQueue;	// G=0x4e1f5; S=0x4e205; @synthesize=_jinglePlayEventsQueue
@property(assign, nonatomic) BOOL lastPlayerStatePaused;	// G=0x4e195; S=0x4e1a5; @synthesize=_lastPlayerStatePaused
@property(retain, nonatomic) NSDate *lastSyncTime;	// G=0x4e0b9; S=0x4e0c9; @synthesize=_lastSyncTime
@property(retain, nonatomic) ATVDataItem *lastWillChangeItem;	// G=0x4e3d9; S=0x4e3e9; @synthesize=_lastWillChangeItem
@property(readonly, assign, nonatomic) ATVRadioMetricsController *metricsController;	// G=0x4dfb5; @synthesize=_metricsController
@property(assign, nonatomic) BOOL pausingDueToInactivity;	// G=0x4e1b5; S=0x4e1c5; @synthesize=_pausingDueToInactivity
@property(copy, nonatomic) id playbackCompletionHandler;	// G=0x4e129; S=0x4e13d; @synthesize=_playbackCompletionHandler
@property(retain, nonatomic) ATVDataQuery *playbackItemsQuery;	// G=0x4e0f1; S=0x4e101; @synthesize=_playbackItemsQuery
@property(retain, nonatomic) ATVDataCollection *playbackStation;	// G=0x4e14d; S=0x4bb59; @synthesize=_playbackStation
@property(retain, nonatomic) NSArray *playbackStationInitialTracks;	// G=0x4e15d; S=0x4e16d; @synthesize=_playbackStationInitialTracks
@property(readonly, assign, nonatomic) double playerIdlePlayingStopTime;	// G=0x4d8f9; 
@property(readonly, assign, nonatomic) double playerPausedStopTime;	// G=0x4d915; 
@property(retain, nonatomic) RadioModel *radioModel;	// G=0x4dfc5; S=0x4dfd5; @synthesize=_radioModel
@property(assign, nonatomic) unsigned long long radioModelUpdateGlobalVersion;	// G=0x4dffd; S=0x4e015; @synthesize=_radioModelUpdateGlobalVersion
@property(retain, nonatomic) ATVBackgroundTask *radioPushNotificationTask;	// G=0x4e061; S=0x4e071; @synthesize=_radioPushNotificationTask
@property(readonly, assign, nonatomic) double serverDurationToCountAsPlayed;	// G=0x4d719; 
@property(retain, nonatomic) ATVRadioSkipLimiter *skipLimiter;	// G=0x4e261; S=0x4e271; @synthesize=_skipLimiter
@property(copy, nonatomic) NSData *songAdData;	// G=0x4e305; S=0x4e319; @synthesize=_songAdData
@property(retain, nonatomic) NSMutableDictionary *songBreakAd;	// G=0x4e329; S=0x4e339; @synthesize=_songBreakAd
@property(retain, nonatomic) NSMutableDictionary *songSkipAd;	// G=0x4e361; S=0x4e371; @synthesize=_songSkipAd
@property(assign, nonatomic) unsigned long long songStationAdamID;	// G=0x4e2d9; S=0x4e2f1; @synthesize=_songStationAdamID
@property(assign, nonatomic) BOOL stoppingDueToInactivity;	// G=0x4e1d5; S=0x4e1e5; @synthesize=_stoppingDueToInactivity
@property(assign, nonatomic) BOOL trackDidPlayToEnd;	// G=0x4e2b9; S=0x4e2c9; @synthesize=_trackDidPlayToEnd
+ (void)purchaseRadioTrack:(id)track reporting:(id)reporting;	// 0x4cdf9
+ (id)purchaseReportingStringWithTrack:(id)track station:(id)station baseReportingString:(id)string;	// 0x4d10d
+ (id)radioDataClient;	// 0x4b551
+ (id)radioKeyBagDict;	// 0x4b775
- (id)init;	// 0x4b811
- (void).cxx_destruct;	// 0x4e411
- (void)_addPlayEventToQueue:(id)queue;	// 0x5fa29
- (void)_appendTracks:(id)tracks;	// 0x5e7a5
- (id)_atvTracksFromRadioTracks:(id)radioTracks stationID:(id)anId stationHash:(id)hash forPreview:(BOOL)preview;	// 0x4fb29
- (BOOL)_canPlayerSkipTrack;	// 0x5ce0d
- (void)_cleanupPlayback;	// 0x5bde5
- (id)_clientBundleID;	// 0x63bd5
- (void)_fetchAndAppendTracks;	// 0x5c201
- (void)_getPersonalizedStations:(id *)stations sponsoredStationIDs:(id *)ids;	// 0x55279
- (BOOL)_handleAdRequestConstructionWithServerURL:(id)serverURL adType:(int)type headers:(id)headers requestProperties:(id)properties requesterIdentifiers:(id)identifiers;	// 0x62cc1
- (void)_handleFeaturedStationsQuery:(id)query excludeFeaturedStations:(BOOL)stations completionQueue:(id)queue completionHandler:(id)handler;	// 0x55439
- (void)_handleGenreStationsQuery:(id)query withGenreIdentifier:(id)genreIdentifier completionQueue:(id)queue completionHandler:(id)handler;	// 0x56371
- (void)_handleGlobalHistoryItemsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x53d59
- (void)_handleJingleRequestWithToken:(long)token urlKeyInBag:(id)bag requestBody:(id)body requestHeaders:(id)headers;	// 0x63651
- (void)_handleLocalHistoryItemsQuery:(id)query station:(id)station completionQueue:(id)queue completionHandler:(id)handler;	// 0x52afd
- (void)_handleOptInStatus:(int)status forUser:(id)user;	// 0x61e59
- (void)_handleSearchStationsQuery:(id)query withSearchTerm:(id)searchTerm excludeStations:(BOOL)stations completionQueue:(id)queue completionHandler:(id)handler;	// 0x55ca9
- (void)_heartBeatTokenChangedNotification:(id)notification;	// 0x6233d
- (id)_heartBeatTokenData;	// 0x613b9
- (id)_heartBeatTokenStringWithData:(id)data;	// 0x61465
- (void)_heartBeatTokenUpdateNotification;	// 0x612d1
- (id)_iAdIdentifier;	// 0x61f2d
- (void)_iTunesAccountActivity:(id)activity;	// 0x4edbd
- (void)_iTunesAccountChanged;	// 0x4efa1
- (void)_iTunesAccountReauthenticated;	// 0x4f075
- (double)_idleTimeForKey:(id)key;	// 0x4d931
- (BOOL)_initRadioClient;	// 0x4bf01
- (void)_initializeAdEngine;	// 0x6156d
- (void)_initiatePlayerWithTracks:(id)tracks station:(id)station;	// 0x5b5e1
- (void)_initiateStationPlaybackWithInitialAd:(id)initialAd;	// 0x5b63d
- (void)_internalPurchaseRadioItemForPlayer:(id)player;	// 0x5fd49
- (void)_internetAvailabilityChanged:(id)changed;	// 0x4d4a9
- (id)_itemDataDictWithStoreDict:(id)storeDict responseDict:(id)dict;	// 0x52439
- (void)_itemPlaybackWillPauseDueToInactivity:(id)_itemPlayback;	// 0x5f049
- (void)_itemPlaybackWillStopDueToInactivity:(id)_itemPlayback;	// 0x5f05d
- (void)_jinglePlayEventsFlushTimerFired:(id)fired;	// 0x5fcd5
- (id)_newItemsQueryWithStation:(id)station ignoreCache:(BOOL)cache;	// 0x5e609
- (void)_optInStatusChangedNotification:(id)statusChangedNotification;	// 0x62109
- (BOOL)_parentalAccessRestricted;	// 0x4d435
- (void)_parentalControlAccessChanged:(id)changed;	// 0x4d391
- (id)_pendingPlayEventsByClearingQueue;	// 0x5fb35
- (void)_performInitialSync;	// 0x4c1c1
- (id)_periodicSyncTask;	// 0x4db09
- (void)_playerAssetChanged:(id)changed;	// 0x5bfc1
- (void)_playerNextMediaAssetAction:(id)action;	// 0x5c499
- (void)_playerPlaylistAssetPlayedToEndTime:(id)endTime;	// 0x5c5c1
- (void)_playerStateChanged:(id)changed;	// 0x5c5f9
- (void)_preemptivelySchedulePolicyEngineSongBreakAd:(id)ad songSkipAd:(id)ad2 forTrackWithData:(id)data stationAdamID:(unsigned long long)anId;	// 0x62a69
- (void)_purchaseRadioItemForPlayer:(id)player;	// 0x5fcf1
- (void)_purgeCachedTracksForStation:(id)station afterIndex:(unsigned)index;	// 0x5a5f5
- (void)_radioModelUpdated:(id)updated;	// 0x4e559
- (void)_recordAdEventsForAdItem:(id)adItem avAsset:(id)asset;	// 0x5eb99
- (void)_recordJinglePlayEventWithItem:(id)item endReason:(int)reason;	// 0x5f071
- (void)_registerPushForUser:(id)user;	// 0x4f4f1
- (void)_removeItemFromTracksForPlayback:(id)playback;	// 0x5e94d
- (void)_removeObservers;	// 0x5be75
- (void)_reportJinglePlayEventsWithReason:(id)reason;	// 0x5f779
- (void)_reportTileImpressionWithStation:(id)station timeStamp:(double)stamp;	// 0x639e1
- (void)_scheduleAdsWithReason:(unsigned)reason;	// 0x5da81
- (void)_schedulePolicyEngineAd:(id)ad forTrackWithAdData:(id)adData stationAdamID:(unsigned long long)anId;	// 0x6245d
- (void)_schedulePolicyEngineStationEntryAd:(id)ad stationAdamID:(unsigned long long)anId;	// 0x6289d
- (void)_screenSaverStarted:(id)started;	// 0x5ccf1
- (void)_screenSaverStopped:(id)stopped;	// 0x5cd55
- (void)_sendPlaybackStarted:(unsigned)started;	// 0x5b289
- (void)_setActivePlaybackStation:(id)station;	// 0x5bc35
- (void)_setAdOptInStatus:(BOOL)status;	// 0x6202d
- (void)_setIAdEngineEnabled:(BOOL)enabled forceOperation:(BOOL)operation;	// 0x61a95
- (void)_setSponsoredStationIDs:(id)ids;	// 0x63b71
- (void)_shutDownPlayback;	// 0x5bc85
- (void)_startPeriodicSyncTask;	// 0x4dee5
- (void)_startPlaybackWithStation:(id)station startupTracks:(id)tracks completionHandler:(id)handler;	// 0x59e81
- (id)_stationsForGenreDictionaries:(id)genreDictionaries genreIdentifierRequired:(BOOL)required;	// 0x561a9
- (void)_stopPeriodicSyncTask;	// 0x4df4d
- (void)_syncToServer:(id)server;	// 0x4cb61
- (id)_trackDictFromDataItem:(id)dataItem;	// 0x576bd
- (void)_unregisterPush;	// 0x4f585
- (void)_updateAdActivity;	// 0x63b21
- (void)_updateAdPolicyEngineWithStation:(id)station;	// 0x62369
- (void)_updatePlayerWithTracks:(id)tracks station:(id)station;	// 0x5b379
- (void)_updateUserData;	// 0x61c7d
- (void)_urlBagLoaded:(id)loaded;	// 0x4bddd
- (void)_userActionHandler:(id)handler;	// 0x5cdb9
// declared property getter: - (id)accountDSID;	// 0x4e029
- (id)atvTracksForStation:(id)station forPreview:(BOOL)preview;	// 0x4fa41
- (BOOL)canSkipTrack:(id)track;	// 0x4d255
- (void)cancelLoad:(id)load;	// 0x4f499
- (void)concreteDataClientConnect;	// 0x4bbe1
- (void)concreteDataClientDisconnect;	// 0x4c501
- (void)connectionCompletedWithStatus:(int)status;	// 0x4c695
- (id)currentPlayingStation;	// 0x4d245
- (void)dealloc;	// 0x4ba61
// declared property getter: - (BOOL)deviceActivated;	// 0x4e099
// declared property getter: - (double)dismissDialogTime;	// 0x4d809
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x4c859
- (void)handleAddStationQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x56a81
- (void)handleDeleteQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x57c21
- (void)handleHistoryItemsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x52889
- (void)handleItemQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x4fff5
- (void)handleLikesBansQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x51341
- (void)handleStationItemsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x503c1
- (void)handleStationsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x54f25
- (void)handleStationsSortQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x58621
- (void)handleUpdateQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x58b11
- (void)handleWishListItemsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x54b75
// declared property getter: - (BOOL)iADAdsOptedInStatus;	// 0x4e3b9
// declared property getter: - (BOOL)iADEngineEnabledInternal;	// 0x4e399
// declared property getter: - (BOOL)iAdEngineEnabled;	// 0x4d365
// declared property getter: - (id)iAdID;	// 0x4d565
// declared property getter: - (BOOL)iAdOptInStatus;	// 0x4d33d
// declared property getter: - (BOOL)iTunesMatchPurchased;	// 0x4e299
- (id)imageKeyForObject:(id)object;	// 0x4f27d
- (BOOL)isExplicitContentAllowed;	// 0x4d609
// declared property getter: - (id)jinglePlayEventsFlushTimer;	// 0x4e22d
// declared property getter: - (id)jinglePlayEventsQueue;	// 0x4e1f5
// declared property getter: - (BOOL)lastPlayerStatePaused;	// 0x4e195
// declared property getter: - (id)lastSyncTime;	// 0x4e0b9
// declared property getter: - (id)lastWillChangeItem;	// 0x4e3d9
- (id)loadImageForObject:(id)object size:(CGSize)size crop:(BOOL)crop completionHandler:(id)handler;	// 0x4f3dd
// declared property getter: - (id)metricsController;	// 0x4dfb5
- (void)optOut;	// 0x4d575
// declared property getter: - (BOOL)pausingDueToInactivity;	// 0x4e1b5
// declared property getter: - (id)playbackCompletionHandler;	// 0x4e129
// declared property getter: - (id)playbackItemsQuery;	// 0x4e0f1
// declared property getter: - (id)playbackStation;	// 0x4e14d
// declared property getter: - (id)playbackStationInitialTracks;	// 0x4e15d
- (void)player:(id)player currentAssetWillChangeWithAVAsset:(id)currentAsset reason:(unsigned)reason;	// 0x5d3ad
- (BOOL)player:(id)player shouldHandleEvent:(id)event playerTime:(double)time;	// 0x5d311
- (void)player:(id)player willStopWithAVAsset:(id)avasset reason:(unsigned)reason;	// 0x5dd0d
// declared property getter: - (double)playerIdlePlayingStopTime;	// 0x4d8f9
// declared property getter: - (double)playerPausedStopTime;	// 0x4d915
- (BOOL)processQueryAsync:(id)async;	// 0x4c7e5
- (void)purchaseRadioItemForPlayer:(id)player;	// 0x4cde9
- (void)purgeCachedTracksForStation:(id)station afterIndex:(unsigned)index;	// 0x4d2f9
- (void)pushNotificationServer:(id)server didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x4f661
- (void)pushNotificationServerTokenDidChange:(id)pushNotificationServerToken;	// 0x4fa01
// declared property getter: - (id)radioModel;	// 0x4dfc5
// declared property getter: - (unsigned long long)radioModelUpdateGlobalVersion;	// 0x4dffd
// declared property getter: - (id)radioPushNotificationTask;	// 0x4e061
- (void)reportTileImpressionWithStation:(id)station timeStamp:(double)stamp;	// 0x4d309
// declared property getter: - (double)serverDurationToCountAsPlayed;	// 0x4d719
// declared property setter: - (void)setAccountDSID:(id)dsid;	// 0x4e039
// declared property setter: - (void)setDeviceActivated:(BOOL)activated;	// 0x4e0a9
// declared property setter: - (void)setIADAdsOptedInStatus:(BOOL)status;	// 0x4e3c9
// declared property setter: - (void)setIADEngineEnabledInternal:(BOOL)internal;	// 0x4e3a9
// declared property setter: - (void)setIAdEngineEnabled:(BOOL)enabled;	// 0x4d37d
// declared property setter: - (void)setIAdOptInStatus:(BOOL)status;	// 0x4d355
// declared property setter: - (void)setITunesMatchPurchased:(BOOL)purchased;	// 0x4e2a9
// declared property setter: - (void)setJinglePlayEventsFlushTimer:(id)timer;	// 0x4e24d
// declared property setter: - (void)setJinglePlayEventsQueue:(id)queue;	// 0x4e205
// declared property setter: - (void)setLastPlayerStatePaused:(BOOL)paused;	// 0x4e1a5
// declared property setter: - (void)setLastSyncTime:(id)time;	// 0x4e0c9
// declared property setter: - (void)setLastWillChangeItem:(id)changeItem;	// 0x4e3e9
// declared property setter: - (void)setPausingDueToInactivity:(BOOL)inactivity;	// 0x4e1c5
// declared property setter: - (void)setPlaybackCompletionHandler:(id)handler;	// 0x4e13d
// declared property setter: - (void)setPlaybackItemsQuery:(id)query;	// 0x4e101
// declared property setter: - (void)setPlaybackStation:(id)station;	// 0x4bb59
// declared property setter: - (void)setPlaybackStationInitialTracks:(id)tracks;	// 0x4e16d
// declared property setter: - (void)setRadioModel:(id)model;	// 0x4dfd5
// declared property setter: - (void)setRadioModelUpdateGlobalVersion:(unsigned long long)version;	// 0x4e015
// declared property setter: - (void)setRadioPushNotificationTask:(id)task;	// 0x4e071
// declared property setter: - (void)setSkipLimiter:(id)limiter;	// 0x4e271
// declared property setter: - (void)setSongAdData:(id)data;	// 0x4e319
// declared property setter: - (void)setSongBreakAd:(id)ad;	// 0x4e339
// declared property setter: - (void)setSongSkipAd:(id)ad;	// 0x4e371
// declared property setter: - (void)setSongStationAdamID:(unsigned long long)anId;	// 0x4e2f1
// declared property setter: - (void)setStoppingDueToInactivity:(BOOL)inactivity;	// 0x4e1e5
// declared property setter: - (void)setTrackDidPlayToEnd:(BOOL)playToEnd;	// 0x4e2c9
// declared property getter: - (id)skipLimiter;	// 0x4e261
// declared property getter: - (id)songAdData;	// 0x4e305
// declared property getter: - (id)songBreakAd;	// 0x4e329
// declared property getter: - (id)songSkipAd;	// 0x4e361
// declared property getter: - (unsigned long long)songStationAdamID;	// 0x4e2d9
- (void)startPlaybackWithStation:(id)station startupTracks:(id)tracks completionHandler:(id)handler;	// 0x4cda1
// declared property getter: - (BOOL)stoppingDueToInactivity;	// 0x4e1d5
- (BOOL)supportsProperty:(id)property;	// 0x4c7b1
// declared property getter: - (BOOL)trackDidPlayToEnd;	// 0x4e2b9
- (void)updateAdActivity;	// 0x4d32d
@end

