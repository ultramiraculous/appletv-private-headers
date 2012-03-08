/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"


__attribute__((visibility("hidden")))
@interface MusicVideosController : MusicController {
}
+ (id)musicVideoArtistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x3331ec59
- (int)_headerCount;	// 0x3331f485
- (ATVMediaQueryRef)createDataQuery;	// 0x3331ecd5
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x3331ee79
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x3331ed41
- (id)errorForNoContent;	// 0x3331f0a9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3331f285
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3331f315
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x3331f231
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3331f0c9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3331f23d
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x3331efa5
@end
