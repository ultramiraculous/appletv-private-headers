/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoController.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PhotoQueryController : PhotoController {
	NSMutableDictionary *_previews;	// 172 = 0xac
	BOOL _refreshData;	// 176 = 0xb0
}
- (id)initForScreenSaver:(BOOL)screenSaver dataServerID:(id)anId;	// 0x7c631
- (void).cxx_destruct;	// 0x7d6b9
- (id)_createItemsQueryForCollection:(id)collection;	// 0x7d6cd
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x7d901
- (BOOL)dataClientUpdated:(id)updated;	// 0x7c79d
- (BOOL)dataQueryComplete:(id)complete;	// 0x7c6b1
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x7c92d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7c979
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x7caad
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x7d35d
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x7ce95
- (void)playQueryComplete:(id)complete;	// 0x7d4cd
- (BOOL)previewQueryComplete:(id)complete;	// 0x7d26d
@end

