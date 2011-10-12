/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDate, NSString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface ATVFlickrProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_persistentAccounts;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
}
@property(readonly, retain) NSString *uniqueID;	// G=0x330ddfc9; converted property
+ (id)providerOfPersistentAccounts;	// 0x330dda45
- (id)init;	// 0x330dda7d
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x330df119
- (void)_accountToRemove:(id)remove;	// 0x330de671
- (id)_accountWithName:(id)name;	// 0x330dfb19
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x330dfa99
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x330df329
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x330df995
- (id)_collectionWithIdentifier:(id)identifier withParentAccount:(id)parentAccount;	// 0x330dfa19
- (BOOL)_contactsLoadedForAccount:(id)account updateData:(id)data;	// 0x330df1cd
- (id)_data;	// 0x330dfa09
- (BOOL)_handlesObject:(id)object;	// 0x330deba5
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x330df835
- (id)_initForPersistentAccounts;	// 0x330ddfdd
- (void)_listenerUpdate:(id)update;	// 0x330de7f5
- (id)_loadAccountsFromPersistentAccounts;	// 0x330de149
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x330deba9
- (void)_newAccountToAdd:(id)add;	// 0x330de381
- (id)_persistentAccounts;	// 0x330de0f1
- (void)_postUpdateNotification:(id)notification;	// 0x330deb6d
- (void)_processChangeToObject:(id)object;	// 0x330de845
- (void)_sendUpdateNotification;	// 0x330dea09
- (void)_sendUpdateNotificationAfterDelay;	// 0x330de9d5
- (id)accessibilityLabel;	// 0x330ddfd9
- (BOOL)accountIsPersistent:(id)persistent;	// 0x330ddd41
- (id)controlFactory;	// 0x330ddc41
- (id)dataAtIndex:(long)index;	// 0x330ddc79
- (long)dataCount;	// 0x330ddc51
- (void)dealloc;	// 0x330ddb5d
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x330dddd9
- (id)hashForDataAtIndex:(long)index;	// 0x330ddce5
// converted property getter: - (id)uniqueID;	// 0x330ddfc9
@end

