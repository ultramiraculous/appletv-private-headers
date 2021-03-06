/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class HSCloudClient;

@interface MPCloudController : NSObject {
	BOOL _isCloudEnabled;	// 4 = 0x4
	BOOL _isUpdateInProgress;	// 5 = 0x5
	HSCloudClient *_cloudClient;	// 8 = 0x8
	BOOL _isInitialImport;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL canShowCloudTracks;	// G=0x36f752ed; 
@property(readonly, assign, nonatomic) BOOL hasCloudLockerAccount;	// G=0x36f75361; 
@property(readonly, assign, nonatomic) BOOL isCloudEnabled;	// G=0x36f75785; @synthesize=_isCloudEnabled
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;	// G=0x36f753b9; 
@property(readonly, assign, nonatomic) BOOL isInitialImport;	// G=0x36f753d1; @synthesize=_isInitialImport
@property(readonly, assign, nonatomic) BOOL isUpdateInProgress;	// G=0x36f753f9; @synthesize=_isUpdateInProgress
+ (BOOL)canObserveWiFiChanges;	// 0x36f74c65
+ (BOOL)isCellularDataRestricted;	// 0x36f74c75
+ (void)migrateCellularDataPreferencesIfNeeded;	// 0x36f74cad
+ (void)setCanObserveWiFiChanges:(BOOL)changes;	// 0x36f74cb1
+ (id)sharedCloudController;	// 0x36f74bf9
- (id)init;	// 0x36f74cc1
- (void)_cellularNetworkAllowedDidChangeNotification:(id)_cellularNetworkAllowed;	// 0x36f75509
- (void)_initializeUpdateInProgressState;	// 0x36f755b9
- (void)addGeniusPlaylistWithName:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids3 completionHandler:(id)handler;	// 0x36f74e65
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x36f74e45
- (void)becomeActive;	// 0x36f74e85
// declared property getter: - (BOOL)canShowCloudTracks;	// 0x36f752ed
- (void)dealloc;	// 0x36f74d99
// declared property getter: - (BOOL)hasCloudLockerAccount;	// 0x36f75361
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x36f75399
// declared property getter: - (BOOL)isCloudEnabled;	// 0x36f75785
// declared property getter: - (BOOL)isGeniusEnabled;	// 0x36f753b9
// declared property getter: - (BOOL)isInitialImport;	// 0x36f753d1
// declared property getter: - (BOOL)isUpdateInProgress;	// 0x36f753f9
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x36f75421
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x36f75441
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x36f75461
- (void)resignActive;	// 0x36f75481
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x36f754a1
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids completionHandler:(id)handler;	// 0x36f754c1
@end

