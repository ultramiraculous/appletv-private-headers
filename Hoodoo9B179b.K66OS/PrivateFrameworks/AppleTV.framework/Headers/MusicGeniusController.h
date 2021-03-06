/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MusicGeniusController : MusicController {
@private
	ATVMediaItemRef _geniusSeed;	// 124 = 0x7c
	BOOL _isDataSavedIntoMetadata;	// 128 = 0x80
	NSArray *_dataFromMetadata;	// 132 = 0x84
	BOOL _startGeniusPlayback;	// 136 = 0x88
}
@property(assign, nonatomic) BOOL startGeniusPlayback;	// G=0x303b3b59; S=0x303b3b69; @synthesize=_startGeniusPlayback
- (id)initFromMetadataWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x303b2971
- (id)initWithSeed:(ATVMediaItemRef)seed;	// 0x303b28e9
- (void)_setup;	// 0x303b3b79
- (void)_showMediaMenuView;	// 0x303b3c59
- (ATVMediaQueryRef)createDataQuery;	// 0x303b2b81
- (id)data;	// 0x303b2ac9
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x303b303d
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x303b2c15
- (void)dealloc;	// 0x303b2a69
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0x303b2efd
- (id)indexPathForDataItem:(void *)dataItem;	// 0x303b2fcd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x303b33b1
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x303b3905
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x303b3791
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x303b32a1
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x303b3a0d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x303b3941
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x303b30b9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x303b32d5
// declared property setter: - (void)setStartGeniusPlayback:(BOOL)playback;	// 0x303b3b69
// declared property getter: - (BOOL)startGeniusPlayback;	// 0x303b3b59
@end

