/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTVAPPBinary-Structs.h"
#import "ComputersController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ComputersController : XXUnknownSuperclass {
	NSMutableDictionary *_previews;	// 124 = 0x7c
	int _listItemCount;	// 128 = 0x80
}
- (id)initWithServerID:(id)serverID;	// 0x6fee1
- (void).cxx_destruct;	// 0x71045
- (ATVMediaQueryRef)createPreDataQuery;	// 0x70309
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x70869
- (BOOL)dataServerConnectionChanged:(ATVDataServerRef)changed;	// 0x70fdd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x7060d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x70b01
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x704f5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x705f5
- (BOOL)preDataQueryComplete:(id)complete;	// 0x703a1
- (BOOL)previewQueryComplete:(ATVMediaQueryRef)complete;	// 0x70a39
- (void)wasPushed;	// 0x6ffdd
@end

@interface ComputersController (Private)
- (long)_adjustedRowFromIndexpath:(id)indexpath;	// 0x710f1
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x71059
@end

