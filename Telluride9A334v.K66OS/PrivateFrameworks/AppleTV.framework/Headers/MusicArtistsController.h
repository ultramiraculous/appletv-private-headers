/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicArtistsController : MusicController {
@private
	int _mode;	// 124 = 0x7c
	NSString *_genre;	// 128 = 0x80
	NSMutableArray *_artistData;	// 132 = 0x84
}
+ (id)allArtistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x3331404d
+ (id)allComposersControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x333140ed
+ (id)artistsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x3331418d
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x333141d5
- (int)_headerCount;	// 0x33314fd9
- (void)_setMode:(int)mode;	// 0x33314fc9
- (ATVMediaQueryRef)createDataQuery;	// 0x333142d1
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x333148b5
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x33314675
- (id)data;	// 0x333143d9
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x333143a9
- (void)dealloc;	// 0x33314259
- (id)errorForNoContent;	// 0x33314b05
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33314c7d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33314d0d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33314c29
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33314b25
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x33314c35
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x33314a01
@end
