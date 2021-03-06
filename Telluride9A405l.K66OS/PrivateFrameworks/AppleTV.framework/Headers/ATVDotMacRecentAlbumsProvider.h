/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;
@protocol BRControlFactory;

@interface ATVDotMacRecentAlbumsProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_accountsBeingLoaded;	// 4 = 0x4
	NSArray *_mostRecentAlbums;	// 8 = 0x8
	NSMutableArray *_accountProviders;	// 12 = 0xc
	NSMutableArray *_collectionProviders;	// 16 = 0x10
	NSMutableArray *_collectionsBeingLoaded;	// 20 = 0x14
	id<BRControlFactory> _controlFactory;	// 24 = 0x18
	BOOL _queryInProgress;	// 28 = 0x1c
	double _lastQueryTime;	// 32 = 0x20
}
+ (id)cacheFolderPath;	// 0x35d29991
+ (id)mainMenuProvider;	// 0x35d29945
+ (id)standardProvider;	// 0x35d298f9
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x35d299f1
- (void)_accountsInserted:(id)inserted;	// 0x35d2a24d
- (void)_accountsRemoved:(id)removed;	// 0x35d2a2e1
- (void)_aggregateRecentAlbums:(id)albums forAccountName:(id)accountName;	// 0x35d2ab81
- (void)_collectionImageUpdated:(id)updated;	// 0x35d29f61
- (void)_collectionProviderUpdated:(id)updated;	// 0x35d29d85
- (void)_loadAccounts;	// 0x35d2a179
- (void)_loadCollection:(id)collection;	// 0x35d2add5
- (void)_loadRSSFeedWithAccountName:(id)accountName;	// 0x35d2a6f1
- (void)_loadRecentAlbumsFromCache;	// 0x35d2b039
- (void)_networkChanged:(id)changed;	// 0x35d2a4f9
- (BOOL)_okToFetchNewData;	// 0x35d2a5ad
- (id)_persistentAccountNames;	// 0x35d2a109
- (void)_removeRecentCachedAlbumsFromAccount:(id)account;	// 0x35d2b5d9
- (void)_rssFeedRequestReady:(id)ready;	// 0x35d2a841
- (void)_saveRecentAlbumsToCache;	// 0x35d2b459
- (void)_sortCollectionsBeingLoaded;	// 0x35d2ae6d
- (id)controlFactory;	// 0x35d299e1
- (id)dataAtIndex:(long)index;	// 0x35d29cf9
- (long)dataCount;	// 0x35d29cd9
- (void)dealloc;	// 0x35d29bf9
- (id)hashForDataAtIndex:(long)index;	// 0x35d29d19
- (void)reload;	// 0x35d29d51
@end

