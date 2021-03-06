/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"
#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol MEITunesPlayerMessageHandler;

__attribute__((visibility("hidden")))
@interface MEITunesContext : BRSingleton <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	AppContext *_iTunesContext;	// 4 = 0x4
	id<MEITunesPlayerMessageHandler> _playerHandler;	// 8 = 0x8
	NSMutableDictionary *_drmSyncInfo;	// 12 = 0xc
	BOOL _inRetailMode;	// 16 = 0x10
	NSMutableArray *_drmAccountQueries;	// 20 = 0x14
	NSMutableArray *_drmTokenQueries;	// 24 = 0x18
	NSMutableArray *_drmStoreKeysQueries;	// 28 = 0x1c
	NSMutableArray *_rentalQueries;	// 32 = 0x20
	NSMutableSet *_importedKeybagUserDSIDs;	// 36 = 0x24
}
@property(retain) id playerMessageHandler;	// G=0x6035; S=0x6025; converted property
+ (AppContext *)iTunesContext;	// 0x5011
+ (void)initialize;	// 0x4f89
+ (void)setSingleton:(id)singleton;	// 0x4ff1
+ (id)singleton;	// 0x5001
- (id)init;	// 0x5039
- (void)_addStoreKeysRequest:(ATVStoreRequestRef)request userID:(id)anId dataServerID:(id)anId3;	// 0x8305
- (void)_checkoutHomeShareRentalDelayed:(id)delayed;	// 0x6ea5
- (void)_checkoutHomeShareRentalOnITunes:(id)tunes;	// 0x6fe9
- (void)_cleanupContext;	// 0x8779
- (void)_dataClientDRMDataUpdated:(id)updated;	// 0x7305
- (void)_dataClientStatusChanged:(id)changed;	// 0x7275
- (void)_decrementDRMSyncCount:(id)count;	// 0x6ca9
- (void)_drmAccountQueryHandler:(id)handler;	// 0x7385
- (void)_drmTokenQueryHandler:(id)handler;	// 0x7a55
- (void)_homeShareAccountChanged:(id)changed;	// 0x7225
- (void)_incrementDRMSyncCount:(id)count;	// 0x6bcd
- (void)_initiateCheckForPurchases:(id)purchases;	// 0x6aa5
- (void)_initiateRentalCount:(id)count;	// 0x6ab9
- (void)_mediaCued:(id)cued;	// 0x6ae1
- (void)_photoDBQueryHandler:(id)handler;	// 0x81d5
- (void)_photoDBRequested:(id)requested;	// 0x7e75
- (void)_postDRMCompleteDelayed;	// 0x718d
- (void)_removeStoreKeysRequestForUser:(id)user dataServerID:(id)anId;	// 0x83a1
- (void)_rentalCheckinQueryHandler:(id)handler;	// 0x7cc5
- (void)_rentalCheckoutQueryHandler:(id)handler;	// 0x7e2d
- (id)_serverFromAsset:(id)asset;	// 0x8631
- (void)_setStoreFront:(id)front;	// 0x6a4d
- (void)_stateMachineStateChanged:(id)changed;	// 0x86dd
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x62d9
- (AppContext *)context;	// 0x5721
- (void)dealloc;	// 0x562d
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x68d9
- (void)deleteImportedKeybagData;	// 0x61e5
- (BOOL)drmSyncInProgressForServer:(id)server;	// 0x5dd5
- (void)forceCheckInForJournalObject:(id)journalObject asset:(id)asset;	// 0x6045
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x6199
// converted property getter: - (id)playerMessageHandler;	// 0x6035
// converted property setter: - (void)setPlayerMessageHandler:(id)handler;	// 0x6025
- (void)startDRMSyncForServer:(id)server;	// 0x5731
@end

