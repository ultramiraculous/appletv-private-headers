/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ComputersController : BRDataQueryController {
	NSMutableDictionary *_previews;	// 164 = 0xa4
	NSMutableArray *_listItems;	// 168 = 0xa8
	NSMutableDictionary *_listPreviews;	// 172 = 0xac
}
@property(retain, nonatomic) NSMutableArray *listItems;	// G=0x865e1; S=0x865f1; @synthesize=_listItems
@property(retain, nonatomic) NSMutableDictionary *listPreviews;	// G=0x86619; S=0x86629; @synthesize=_listPreviews
- (id)initWithServerID:(id)serverID;	// 0x84e2d
- (void).cxx_destruct;	// 0x86651
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x86525
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x864a9
- (id)errorForNoContent;	// 0x856c1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x85861
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x85f19
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8571d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x856e1
// declared property getter: - (id)listItems;	// 0x865e1
// declared property getter: - (id)listPreviews;	// 0x86619
- (id)newPreDataQuery;	// 0x852fd
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x85ae1
- (BOOL)preDataQueryComplete:(id)complete;	// 0x8536d
- (BOOL)previewQueryComplete:(id)complete;	// 0x85e29
// declared property setter: - (void)setListItems:(id)items;	// 0x865f1
// declared property setter: - (void)setListPreviews:(id)previews;	// 0x86629
- (void)wasPushed;	// 0x84f35
@end

