/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MCProfileConnectionObserver.h"
#import <NSObject.h> // Unknown library

@class NSCache, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver> {
	NSCache *_offeringCache;	// 4 = 0x4
	NSMutableDictionary *_lookupItemsByStoreLookupID;	// 8 = 0x8
	NSMutableDictionary *_lookupItemsByTokenID;	// 12 = 0xc
	unsigned _nextTokenID;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_queue;	// 20 = 0x14
}
+ (void)_getIsCMCDisabled:(BOOL *)disabled disabledReason:(id *)reason;	// 0x35052bb5
+ (BOOL)_isCmcEnabled;	// 0x35052cd5
+ (void)setWantsArtwork:(BOOL)artwork;	// 0x350522e5
+ (id)storeOfferingController;	// 0x35052279
- (id)init;	// 0x350522f5
- (void)_defaultMediaLibraryDidChangeNotification:(id)_defaultMediaLibrary;	// 0x35052661
- (void)_dumpCache;	// 0x35052d05
- (void)_lookupCompletedWithResponse:(id)response lookupItem:(id)item error:(id)error;	// 0x3505341d
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned)anId;	// 0x350531a1
- (void)_onQueueClearCache;	// 0x35053fbd
- (id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)albumItemsQuery;	// 0x35053f35
- (id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)albumItemsQuery requestAlreadyIssued:(BOOL *)issued responseBlock:(id)block;	// 0x35052d81
- (void)_onQueuePostLookupCompletedForLookupItem:(id)lookupItem offering:(id)offering error:(id)error;	// 0x35053205
- (void)_onQueueRemoveLookupItem:(id)item;	// 0x35052f85
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(id)storeLookupID;	// 0x35053045
- (void)_onQueueSetCachedCompletionOffering:(id)offering forStoreLookupID:(id)storeLookupID;	// 0x35053f81
- (id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)albumItemsQuery responseBlock:(id)block;	// 0x350538a5
- (id)_sanitizedQuery:(id)query;	// 0x35052739
- (void)_storeAccountsDidChangeNotification:(id)_storeAccounts;	// 0x35052671
- (void)cancelCompletionOfferingLookup:(unsigned)lookup;	// 0x35052a05
- (id)completionOfferingForAlbumItemsQuery:(id)albumItemsQuery;	// 0x3505280d
- (void)dealloc;	// 0x3505253d
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x35052681
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x350526dd
- (unsigned)startCompletionOfferingLookupForAlbumItemsQuery:(id)albumItemsQuery responseBlock:(id)block;	// 0x35052a89
@end

