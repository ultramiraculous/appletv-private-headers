/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSMutableArray, NSString, NSDate;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface ATVFlickrProvider : XXUnknownSuperclass <BRProvider> {
	NSMutableArray *_persistentAccounts;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
}
@property(readonly, retain) NSString *uniqueID;	// G=0x1b14a5; converted property
+ (id)providerOfPersistentAccounts;	// 0x1b0f85
- (id)init;	// 0x1b0fbd
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x1b25e9
- (void)_accountToRemove:(id)remove;	// 0x1b1b55
- (id)_accountWithName:(id)name;	// 0x1b2fc5
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x1b2f45
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x1b2801
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x1b2e41
- (id)_collectionWithIdentifier:(id)identifier withParentAccount:(id)parentAccount;	// 0x1b2ec5
- (BOOL)_contactsLoadedForAccount:(id)account updateData:(id)data;	// 0x1b269d
- (id)_data;	// 0x1b2eb5
- (BOOL)_handlesObject:(id)object;	// 0x1b209d
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x1b2cdd
- (id)_initForPersistentAccounts;	// 0x1b14b9
- (void)_listenerUpdate:(id)update;	// 0x1b1cdd
- (id)_loadAccountsFromPersistentAccounts;	// 0x1b1621
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x1b20a1
- (void)_newAccountToAdd:(id)add;	// 0x1b185d
- (id)_persistentAccounts;	// 0x1b15c9
- (void)_postUpdateNotification:(id)notification;	// 0x1b2065
- (void)_processChangeToObject:(id)object;	// 0x1b1d2d
- (void)_sendUpdateNotification;	// 0x1b1ef9
- (void)_sendUpdateNotificationAfterDelay;	// 0x1b1ec5
- (id)accessibilityLabel;	// 0x1b14b5
- (BOOL)accountIsPersistent:(id)persistent;	// 0x1b1285
- (id)controlFactory;	// 0x1b1185
- (id)dataAtIndex:(long)index;	// 0x1b11bd
- (long)dataCount;	// 0x1b1195
- (void)dealloc;	// 0x1b109d
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x1b1315
- (id)hashForDataAtIndex:(long)index;	// 0x1b1229
// converted property getter: - (id)uniqueID;	// 0x1b14a5
@end

