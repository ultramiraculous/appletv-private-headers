/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface RentalsController : BRDataQueryController {
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x7b959
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x7be5d
- (id)errorForNoContent;	// 0x7bdb5
- (id)indexPathForDataItem:(void *)dataItem;	// 0x7bdd5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7c3f5
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x7cc91
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x7cb99
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x7c3a9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x7bf05
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x7c3b9
- (id)newDataQuery;	// 0x7b9d1
- (long)numberOfSectionsInList:(id)list;	// 0x7c3b5
@end

