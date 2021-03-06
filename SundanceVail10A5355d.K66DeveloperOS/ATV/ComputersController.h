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
	NSMutableDictionary *_previews;	// 156 = 0x9c
	NSMutableArray *_listItems;	// 160 = 0xa0
	NSMutableDictionary *_listPreviews;	// 164 = 0xa4
}
@property(retain, nonatomic) NSMutableArray *listItems;	// G=0x796ed; S=0x796fd; @synthesize=_listItems
@property(retain, nonatomic) NSMutableDictionary *listPreviews;	// G=0x79725; S=0x79735; @synthesize=_listPreviews
- (id)initWithServerID:(id)serverID;	// 0x77f55
- (void).cxx_destruct;	// 0x7975d
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x79631
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x795b5
- (id)errorForNoContent;	// 0x787cd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7896d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x79025
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x78829
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x787ed
// declared property getter: - (id)listItems;	// 0x796ed
// declared property getter: - (id)listPreviews;	// 0x79725
- (id)newPreDataQuery;	// 0x78425
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x78bed
- (BOOL)preDataQueryComplete:(id)complete;	// 0x78495
- (BOOL)previewQueryComplete:(id)complete;	// 0x78f35
// declared property setter: - (void)setListItems:(id)items;	// 0x796fd
// declared property setter: - (void)setListPreviews:(id)previews;	// 0x79735
- (void)wasPushed;	// 0x7805d
@end

