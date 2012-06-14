/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicArtistsController : MusicController {
	int _mode;	// 156 = 0x9c
	NSString *_genre;	// 160 = 0xa0
	NSMutableArray *_artistData;	// 164 = 0xa4
}
+ (id)allArtistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x19bc35
+ (id)allComposersControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x19bcd1
+ (id)artistsControllerByGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x19bd6d
- (id)initWithGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x19bdb5
- (int)_headerCount;	// 0x19cc49
- (void)_setMode:(int)mode;	// 0x19cc39
- (id)data;	// 0x19c011
- (BOOL)dataQueryComplete:(id)complete;	// 0x19bfe5
- (void)dealloc;	// 0x19be39
- (id)errorForNoContent;	// 0x19c779
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x19c8f1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x19c981
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x19c89d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x19c799
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x19c8a9
- (id)newDataQuery;	// 0x19beb1
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x19c501
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x19c2a5
- (void)playQueryComplete:(id)complete;	// 0x19c65d
@end

