/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MusicController.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicArtistsController : MusicController {
@private
	int _mode;	// 124 = 0x7c
	NSString *_genre;	// 128 = 0x80
	NSMutableArray *_artistData;	// 132 = 0x84
}
+ (id)allArtistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x33184b69
+ (id)allComposersControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x33184c09
+ (id)artistsControllerByGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x33184ca9
- (id)initWithGenre:(id)genre dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type;	// 0x33184cf1
- (int)_headerCount;	// 0x33185af5
- (void)_setMode:(int)mode;	// 0x33185ae5
- (ATVMediaQueryRef)createDataQuery;	// 0x33184ded
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x331853d1
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x33185191
- (id)data;	// 0x33184ef5
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x33184ec5
- (void)dealloc;	// 0x33184d75
- (id)errorForNoContent;	// 0x33185621
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33185799
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33185829
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33185745
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33185641
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x33185751
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x3318551d
@end

