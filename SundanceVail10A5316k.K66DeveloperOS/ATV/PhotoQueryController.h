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
	NSMutableDictionary *_previews;	// 164 = 0xa4
	BOOL _refreshData;	// 168 = 0xa8
}
- (id)init;	// 0x724d1
- (void).cxx_destruct;	// 0x73551
- (id)_createItemsQueryForCollection:(id)collection;	// 0x73565
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x73799
- (BOOL)dataClientUpdated:(id)updated;	// 0x72635
- (BOOL)dataQueryComplete:(id)complete;	// 0x72549
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x727c5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x72811
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x72945
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x731f5
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x72d2d
- (void)playQueryComplete:(id)complete;	// 0x73365
- (BOOL)previewQueryComplete:(id)complete;	// 0x73105
@end

