/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PhotoController : BRDataQueryController {
	NSDictionary *_collectionsByType;	// 164 = 0xa4
	BOOL _forScreenSaver;	// 168 = 0xa8
}
+ (id)allPhotosControllerWithDataServerID:(id)dataServerID;	// 0x8b091
+ (id)screenSaverControllerWithDataServerID:(id)dataServerID;	// 0x8b0d9
- (id)initForScreenSaver:(BOOL)screenSaver dataServerID:(id)anId;	// 0x8b121
- (void).cxx_destruct;	// 0x8c94d
- (id)_BRMediaCollectionsForType:(id)type;	// 0x8cba9
- (id)_collectionsByType;	// 0x8c961
- (id)_iconWithName:(id)name;	// 0x8cda5
- (long)_numberOfItemsInSection:(long)section;	// 0x8ccc1
- (id)collectionsForType:(id)type;	// 0x8c8e5
- (BOOL)dataClientUpdated:(id)updated;	// 0x8b32d
- (BOOL)dataQueryComplete:(id)complete;	// 0x8b39d
- (id)errorControlForQuery:(id)query;	// 0x8b3bd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x8b9cd
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x8c585
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8bd09
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x8b98d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8b509
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8b8ad
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x8b90d
- (id)newDataQuery;	// 0x8b205
- (long)numberOfSectionsInList:(id)list;	// 0x8b86d
@end

