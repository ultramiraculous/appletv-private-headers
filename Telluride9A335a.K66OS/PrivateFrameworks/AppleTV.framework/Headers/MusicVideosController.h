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
+ (id)musicVideoArtistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x342ffc59
- (int)_headerCount;	// 0x34300485
- (ATVMediaQueryRef)createDataQuery;	// 0x342ffcd5
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x342ffe79
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x342ffd41
- (id)errorForNoContent;	// 0x343000a9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x34300285
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x34300315
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x34300231
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x343000c9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3430023d
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x342fffa5
@end

